/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and 
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may 
 * *    be used to endorse or promote products derived from this software 
 * *    without specific prior written permission.
 * 
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _IPF_BALONG_H_
#define _IPF_BALONG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "n_mdrv_ipf.h"
#include "mdrv_sysboot_commmon.h"
#include "n_bsp_ipf.h"
#include <linux/memblock.h>
#include <linux/spinlock.h>

#define bsp_get_slice_value_hrt(x) 0
#define g_mem_ctrl 0
#define mdrv_sysboot_register_reset_notify(a,b,c,d) 0
#define bsp_trace(log_level, mod_id, fmt,...)
#define bsp_get_slice_value() 0
#define bsp_pm_log(a,b,c)
#define bsp_ipc_spin_lock(x)
#define bsp_ipc_spin_unlock(x)
#define system_error(a,b,c,d,e)
#define fake_SHD_DDR_P2V(x)	x

#ifndef CONFIG_IPF_PROPERTY_MBB
#include "global_ddr_map.h"
#define MODEM_START_ADDR	HISI_RESERVED_MODEM_PHYMEM_BASE
#define MODEM_START_SIZE	HISI_RESERVED_MODEM_PHYMEM_SIZE
#else
#define MODEM_START_ADDR	DDR_MCORE_ADDR
#define MODEM_START_SIZE	DDR_MCORE_SIZE
#endif

#define IPF_ULADQ_PLEN_TH                 404
#define IPF_ADQ_RESERVE_NUM                 3
/* IPF transfer time recorder start */
#define IPF_MAX_STAMP_ORDER             32
#define IPF_MAX_TIME_LIMIT              (19200000*10)
#define IPF_FLS_MASK                    (31)
#define IPF_PWC_DOWN                    (0)
#define PERI_CRG_4K						0x00001000

//#define CONFIG_MODULE_BUSSTRESS

typedef struct tagIPF_TIMESTAMP_INFO_S
{
    unsigned int diff_order_cnt[IPF_MAX_STAMP_ORDER];
    unsigned int cnt_sum;
    unsigned int diff_sum;
    unsigned int diff_max;
    unsigned int overflow;
}IPF_TIMESTAMP_INFO_S;

typedef struct tagIPF_FILTER_CONFIG_S
{
    unsigned int u32FilterID;
    IPF_MATCH_INFO_S stMatchInfo;
} IPF_FILTER_CONFIG_S;

typedef struct tagIPF_PWRCTL_FILTER_INFO_S
{
	unsigned int u32Flag;
	IPF_CHANNEL_TYPE_E eChnType;
	unsigned int u32FilterNum;
	IPF_FILTER_CONFIG_S *pstFilterInfo;
}IPF_PWRCTL_FILTER_INFO_S;

typedef struct tagIPF_UL_S
{
    IPF_BD_DESC_S* pstIpfBDQ;
    IPF_RD_DESC_S* pstIpfRDQ;
    IPF_AD_DESC_S* pstIpfADQ0;
    IPF_AD_DESC_S* pstIpfADQ1;
    unsigned int* pu32IdleBd; /* 记录上一次获取的空闲BD 数 */
    ipf_bd_empty handle_bd_empty; /* Upload BD empty handler */
}IPF_UL_S;

typedef struct ipf_ctx {
	void * regs;
    unsigned int irq;
	struct device *dev;
	struct clk *clk;
	void*	bd_phy;
	void*	bd_virt;
	void*	cd_virt;
	void*	cd_phy;
	void*	rd_virt;
	void*	rd_phy;
	void*	ad_phy[IPF_AD_MAX];
	void*	ad_virt[IPF_AD_MAX];
	unsigned int ipf_version;
	IPF_LIMIT_ADDR_S *limit_addr;
    unsigned int *memblock_show;
	struct ipf_debug* status;
	unsigned int ipf_rst_leave;
	unsigned int not_get_space;
	spinlock_t filter_spinlock;
    IPF_TIMESTAMP_INFO_S timestamp;
    unsigned long long dma_mask;
    IPF_UL_S ul_info;//g_stIpfUl;
    IPF_DL_S dl_info;//g_stIpfDl;
    IPF_FORRESET_CONTROL_E modem_status;
    struct ipf_filter_handler* filter_handler;
    struct ipf_limit_handler* limit_handler;
} ipf_ctx_t;

struct ipf_filter_handler{    
    int bf_num;
    int total;
    int tail;
    filter_map* launched[IPF_MODEM_MAX];
    filter_map* free;
    void (*basic_write)(unsigned int filter_hw_id, IPF_MATCH_INFO_S* match_infos);
    void (*basic_read)(unsigned int id, IPF_MATCH_INFO_S* match_infos);
    void (*basic_set_next)(unsigned int id, unsigned int next);
};


static __inline__ unsigned int ipf_readl(void *addr)
{
    return readl(addr);
}
static __inline__ void ipf_writel(unsigned int val, void *addr)
{
    writel(val, addr);
}

struct ipf_share_mem_map{

    IPF_BD_DESC_S dbd[IPF_DLBD_DESC_SIZE];
    IPF_RD_DESC_S drd[IPF_DLRD_DESC_SIZE];
    IPF_AD_DESC_S dad0[IPF_DLAD0_DESC_SIZE];
    IPF_AD_DESC_S dad1[IPF_DLAD1_DESC_SIZE];
    IPF_CD_DESC_S dcd[IPF_DLCD_DESC_SIZE];
    IPF_BD_DESC_S ubd[IPF_ULBD_DESC_SIZE];
    IPF_RD_DESC_S urd[IPF_ULRD_DESC_SIZE];
    IPF_AD_DESC_S uad0[IPF_ULAD0_DESC_SIZE];
    IPF_AD_DESC_S uad1[IPF_ULAD1_DESC_SIZE];
    IPF_MATCH_INFO_S filter[IPF_TOTAL_FILTER_NUM];
    unsigned char reg_save[IPF_PWRCTL_INFO_SIZE+IPF_PWRCTL_ADQ_WPTR_INFO_SIZE+IPF_PWRCTL_ADQ_RPTR_CHCTRL_SIZE+
IPF_PWRCTL_ADDR_LIMIT_SIZE];
    union{
        unsigned char init[IPF_INIT_SIZE];
        struct {
            unsigned int acore;
            unsigned int ccore;
            unsigned int modem;
            unsigned int save;
        } status;
    }init;
    int rsracc;
    unsigned int idle[4];
    unsigned int dcd_rptr;
    struct ipf_debug debug[2];
    unsigned char trans_limit[IPF_TRANS_LIMIT_SIZE];
    unsigned int out_addr_limit;
    unsigned char memlock[IPF_MEMBLOCK_CNT*4];
    unsigned int bottom[0];
}__attribute__((packed, aligned(1)));

#define bsp_ipf_get_sharemem() (struct ipf_share_mem_map*)(SHM_BASE_ADDR_ + SHM_OFFSET_IPF);


/*ipf test file needs these fucs*/
int ipf_init(void);
int bsp_ipf_set_pktlen(unsigned int u32MaxLen, unsigned int u32MinLen);
void bsp_ipf_help(void);
int bsp_ipf_dump_bdinfo(IPF_CHANNEL_TYPE_E eChnType);
int bsp_ipf_dump_rdinfo(IPF_CHANNEL_TYPE_E eChnType);
int bsp_ipf_dump_adinfo(IPF_CHANNEL_TYPE_E eChnType, unsigned int u32AdType);
int bsp_ipf_info(IPF_CHANNEL_TYPE_E eChnType);
void bsp_ipf_mem(void);
int bsp_ipf_config_timeout(unsigned int u32Timeout);
int ipf_register_wakeup_dlcb(BSP_IPF_WakeupDlCb pFnWakeupDl);
int ipf_register_ul_bd_empty(ipf_bd_empty bd_handle);
void bsp_ipf_set_control_flag_for_ccore_reset(IPF_FORRESET_CONTROL_E eResetFlag);
unsigned long bsp_ipf_ad0_info(unsigned long * ad0_addr);
unsigned long bsp_ipf_ad1_info(unsigned long * ad1_addr);
int bsp_ipf_reset_ccore_cb(DRV_RESET_CB_MOMENT_E eparam, int userdata);
struct ipf_filter_handler* ipf_get_filter_handler(unsigned int version);


#ifdef __cplusplus
}
#endif

#endif /*s_IPC_BALONG_H_*/

