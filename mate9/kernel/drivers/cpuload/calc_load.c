/*
 * Copyright (C) 2016 The Huawei Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <net/sock.h>
#include <linux/netlink.h>
#include <linux/sysctl.h>
#include <linux/tick.h>
#include <linux/kernel_stat.h>
#include <linux/cputime.h>
#include <linux/cpumask.h>

#define HIGH_LOAD_VALUE 980000
#define CPU_LOAD_TIMER_RATE 5
#define CPU_HIGH_LOAD_THRESHOLD 4
#define CPU_LOW_LOAD_THRESHOLD 0
#define DETECT_PERIOD 1000000

enum {
	LOW_LOAD = 1,
	HIGH_LOAD = 2,
};

static __u32 pid;
static struct sock *netlinkfd;
static u64 last_total_time;
static u64 last_busy_time;
static int check_intervals;
static int high_load_cnt;
static int last_report_reason = LOW_LOAD;
static long high_load_switch;
static struct delayed_work high_load_work;

static int send_to_user(int data)
{
	int ret = -1;
	int len = 0;
	struct sk_buff *skb = NULL;
	struct nlmsghdr *nlh = NULL;

	if (IS_ERR_OR_NULL(netlinkfd))
		return ret;

	if (pid == 0)
		goto err;

	len = sizeof(data);
	skb = alloc_skb(NLMSG_SPACE(len), GFP_ATOMIC);
	if (IS_ERR_OR_NULL(skb)) {
		printk(KERN_ERR "calc_load %s: alloc skb failed!\n", __func__);
		goto err;
	}
/*lint -save -e713 -e747 -e732*/
	nlh = nlmsg_put(skb, 0, 0, 0, NLMSG_SPACE(len) - sizeof(struct nlmsghdr), 0);
	memcpy(NLMSG_DATA(nlh), (void *)&data, len);
/*lint -restore*/
	/*send up msg*/
	ret = netlink_unicast(netlinkfd, skb, pid, MSG_DONTWAIT);
	if (ret < 0) {
		printk(KERN_ERR "calc_load send_to_user netlink_unicast failed!\n");
		goto err;
	}
	return ret;
err:
	return ret;
}

int send_to_user_netlink(int data)
{
	return send_to_user(data);
}

static void recv_from_user(struct sk_buff *skb)
{
	struct sk_buff *tmp_skb = NULL;
	struct nlmsghdr *nlh = NULL;
	int len  = 0;

	if (IS_ERR_OR_NULL(skb)) {
		printk(KERN_ERR "calc_load recv_from_user: skb is NULL!\n");
		return;
	}
/*lint -save -e838 -e713 -e438 -e550*/
	tmp_skb = skb_get(skb);

	if (tmp_skb->len >= NLMSG_SPACE(0)) {
		nlh = nlmsg_hdr(tmp_skb);
		pid = nlh->nlmsg_pid;
		len = NLMSG_PAYLOAD(nlh, 0);
	}
/*lint -restore*/
}

/*lint -save -e501 -e530 -e40 -e838 -e713 -e737 -e64 -e507 -e644 -e64 -e409*/
static u64 get_idle_time(int cpu)
{
	u64 idle, idle_time = -1ULL;

	if (cpu_online(cpu))
		idle_time = get_cpu_idle_time_us(cpu, NULL);

	if (idle_time == -1ULL)
		/* !NO_HZ or cpu offline so we can rely on cpustat.idle */
		idle = kcpustat_cpu(cpu).cpustat[CPUTIME_IDLE];
	else
		idle = usecs_to_cputime64(idle_time);

	return idle;
}

static u64 get_iowait_time(int cpu)
{
	u64 iowait, iowait_time = -1ULL;

	if (cpu_online(cpu))
		iowait_time = get_cpu_iowait_time_us(cpu, NULL);

	if (iowait_time == -1ULL)
		/* !NO_HZ or cpu offline so we can rely on cpustat.iowait */
		iowait = kcpustat_cpu(cpu).cpustat[CPUTIME_IOWAIT];
	else
		iowait = usecs_to_cputime64(iowait_time);

	return iowait;
}

/*
 *
 * This function recoreds the cpustat information
 */
static void get_cpu_load(u64 *total_time, u64 *busy_time)
{
	u64 user, nice, system, idle, iowait, irq, softirq, steal;
	u64 guest, guest_nice;
	int i = 0;

	user = nice = system = idle = iowait =
		irq = softirq = steal = 0;
	guest = guest_nice = 0;

	 for_each_online_cpu(i) {
		user += kcpustat_cpu(i).cpustat[CPUTIME_USER];
		nice += kcpustat_cpu(i).cpustat[CPUTIME_NICE];
		system += kcpustat_cpu(i).cpustat[CPUTIME_SYSTEM];
		idle += get_idle_time(i);
		iowait += get_iowait_time(i);
		irq += kcpustat_cpu(i).cpustat[CPUTIME_IRQ];
		softirq += kcpustat_cpu(i).cpustat[CPUTIME_SOFTIRQ];
		steal += kcpustat_cpu(i).cpustat[CPUTIME_STEAL];
		guest += kcpustat_cpu(i).cpustat[CPUTIME_GUEST];
		guest_nice += kcpustat_cpu(i).cpustat[CPUTIME_GUEST_NICE];
	}

	*total_time = user + nice + system + idle + iowait + irq + softirq + steal + guest + guest_nice;
	*busy_time = user + nice + system;
}
/*lint -restore*/

/*
 * This function gets called by the timer code, with HZ frequency.
 * We call it with interrupts disabled.
 */

void high_load_tick(void);

/*lint -save -e715 -e713*/
static void high_load_tickfn(struct work_struct *work);

static void high_load_tickfn(struct work_struct *work)
{
	high_load_tick();
	schedule_delayed_work(&high_load_work, usecs_to_jiffies(DETECT_PERIOD));
}

static ssize_t enable_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf)
{
	if (NULL == buf) {
		pr_err("high_load_show buf is NULL");
		return -EINVAL;
	}

	return snprintf(buf, PAGE_SIZE, "%ld\n", high_load_switch);
}

static ssize_t enable_store(struct kobject *kobj, struct kobj_attribute *attr, const char *buf, size_t count)
{
	long value;
	int ret;
	if (NULL == buf) {
		pr_err("high_load_store buf is NULL");
		return -EINVAL;
	}
	ret = strict_strtol(buf, 10, &value);

	if (ret != 0 || value < 0 || value > 1)
		return -EINVAL;
	if (value == 1) {
		if (!high_load_switch) {
			schedule_delayed_work(&high_load_work, usecs_to_jiffies(DETECT_PERIOD));
		}
	} else {
		if (high_load_switch) {
			high_load_cnt = 0;
			check_intervals = 0;
			cancel_delayed_work_sync(&high_load_work);
		}
	}

	high_load_switch = value;
	return count;
}
/*lint -restore*/

/*lint -save -e846 -e514 -e778 -e866 -e84 -e514 -e715*/
static struct kobj_attribute high_load_attribute = __ATTR(enable, 0600, enable_show, enable_store);
static struct kobject *high_load_kobj = NULL;
/*lint -restore*/
void high_load_tick(void)
{
	u64 total_time, busy_time, total_delta_time;

	get_cpu_load(&total_time, &busy_time);

	total_delta_time = total_time - last_total_time;
	if (total_delta_time != 0) {
		if ((busy_time - last_busy_time) * 1000000 >= HIGH_LOAD_VALUE * total_delta_time)
			high_load_cnt++;
	}

	if (++check_intervals == CPU_LOAD_TIMER_RATE) {
		if (high_load_cnt >= CPU_HIGH_LOAD_THRESHOLD && last_report_reason != HIGH_LOAD) {

			send_to_user_netlink(HIGH_LOAD);
			last_report_reason = HIGH_LOAD;
		} else if (high_load_cnt == CPU_LOW_LOAD_THRESHOLD && last_report_reason != LOW_LOAD) {

			send_to_user_netlink(LOW_LOAD);
			last_report_reason = LOW_LOAD;
		}
		printk(KERN_INFO "INFO: cpuload last_report_reason is %d, high_load_cnt is %d\n", last_report_reason, high_load_cnt);
		check_intervals = 0;
		high_load_cnt = 0;
	}


	last_total_time = total_time;
	last_busy_time = busy_time;
}

static int __init calc_load_init(void)
{
	int ret = -1;
/*lint -save -e785 -e712*/
	struct netlink_kernel_cfg cfg = {
			.groups = 0,
			.input = recv_from_user,
	};
	netlinkfd = netlink_kernel_create(&init_net, NETLINK_HW_CPULOAD_NOTI, &cfg);
/*lint -restore*/
	if (IS_ERR_OR_NULL(netlinkfd)) {
/*lint -save -e712*/
		ret = PTR_ERR(netlinkfd);
/*lint -restore*/
		printk(KERN_ERR "calc_load_init: create netlink error! ret is %d\n", ret);
		goto err_create_netlink;
	}
	high_load_kobj = kobject_create_and_add("highload", kernel_kobj);
	if (!high_load_kobj)
		goto err_create_kobject;

	ret = sysfs_create_file(high_load_kobj, &high_load_attribute.attr);
	if (ret)
		goto err_create_sysfs;
/*lint -save -e747*/
	INIT_DEFERRABLE_WORK(&high_load_work, high_load_tickfn);
/*lint -restore*/
	return 0;

err_create_sysfs:
	kobject_put(high_load_kobj);
	high_load_kobj = NULL;
err_create_kobject:
	sock_release(netlinkfd->sk_socket);
	netlinkfd = NULL;
err_create_netlink:
	return ret;
}



static void __exit calc_load_exit(void)
{
	if (!IS_ERR_OR_NULL(netlinkfd) && netlinkfd->sk_socket) {
		if (!IS_ERR_OR_NULL(netlinkfd->sk_socket)) {
			sock_release(netlinkfd->sk_socket);
			netlinkfd = NULL;
		}
	}
	if (high_load_kobj) {
		sysfs_remove_file(high_load_kobj, &high_load_attribute.attr);
		kobject_put(high_load_kobj);
		high_load_kobj = NULL;
	}
}

module_init(calc_load_init); //lint !e528
module_exit(calc_load_exit); //lint !e528
