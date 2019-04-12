

/*lint -save -e429 -e529 -e534 -e550 -e650 -e661 -e715 -e537  -e737 -e539 -e574 -e239 -e438 -e701 -e740 -e958 -e451
-e64 -e732 -e740
*/
/*lint --e{750} */
#ifdef __cplusplus
extern "C" {
#endif

#include <linux/delay.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/clk.h>
#include <linux/of.h>
#include <linux/slab.h>
#include <linux/mm.h>
#include <linux/skbuff.h>
#include <bsp_slice.h>
#include <bsp_pm_om.h>
#include <linux/syscore_ops.h>
#include <bsp_ipc.h>
#include "osl_cache.h"
#include <bsp_ddr.h>
#include <n_bsp_psam.h>
#include <n_bsp_ipf.h>
#include <ipf_balong.h>
//#include <bsp_reset.h>

int ccore_rst_idle = 0;
ipf_ctx_t g_ipf_ctx;
static struct platform_driver ipf_pltfm_driver;

extern struct dev_pm_ops ipf_dev_pm_ops;

/*
 * On ARMv5 and above those functions can be implemented around
 * the clz instruction.
 * refer to kernel/arch/arm/include/asm/bitops.h
 * put the code here for both vxWorks and linux version.
 */
static inline int ipf_fls(int x)
{
    int ret;

    asm("clz\t%0, %1" : "=r" (ret) : "r" (x));
    ret = 32 - ret;
    return ret;
}

static inline void ipf_record_start_time_stamp(unsigned int en, unsigned int* rec_point)
{
    if (!en) {
        return;
    }
    *rec_point = bsp_get_slice_value_hrt();
    return;
}

static inline void
ipf_record_end_time_stamp(unsigned int en, unsigned int beg_time)
{
    unsigned int diff_time;
    IPF_TIMESTAMP_INFO_S* stamp_info = &g_ipf_ctx.timestamp;
    int idx;

    if (!en) {
        return;
    }

    diff_time = bsp_get_slice_value_hrt() - beg_time;

    /* avoid to record the overflowed value */
    if (diff_time > IPF_MAX_TIME_LIMIT) {
        stamp_info->overflow++;
    }
    else {
        if (diff_time > stamp_info->diff_max)
            stamp_info->diff_max = diff_time;

        stamp_info->diff_sum += diff_time;
        stamp_info->cnt_sum++;

        /* find the first bit not zero */
        idx = ((ipf_fls(diff_time)-1) & IPF_FLS_MASK);
        stamp_info->diff_order_cnt[idx]++;
    }
}

static inline
unsigned int ipf_calc_percent(unsigned int value, unsigned int sum)
{
    if (0 == sum) {
        return 0;
    }
    return (value * 100 / sum);
}

static void ipf_get_version(void)
{
	unsigned int ver = 0;
	ver = ipf_readl(g_ipf_ctx.regs + HI_IPF_VERSION_OFFSET);
	printk(" ipf version is 0x%x\n", ver);
	switch(ver){
	case IPF_VER_120A:
		g_ipf_ctx.ipf_version = IPF_VERSION_120a;
		break;
	case IPF_VER_130A:
		g_ipf_ctx.ipf_version = IPF_VERSION_130a;
		break;
	case IPF_VER_130B:
		g_ipf_ctx.ipf_version = IPF_VERSION_130b;
		break;
	case IPF_VER_140A:
		g_ipf_ctx.ipf_version = IPF_VERSION_140a;
		break;
    case IPF_VER_150A:
        g_ipf_ctx.ipf_version = IPF_VERSION_150a;
        break;
	default:
		g_ipf_ctx.ipf_version = IPF_VERSION_0000;
		break;
	}
}

static int ipf_get_limit_addr(void)
{
    struct memblock_type *type = NULL;
	phys_addr_t mem_start = 0, mem_end = 0;
    unsigned int i = 0;

	type = &memblock.memory;

	if(0 == type->cnt){
		dev_err(g_ipf_ctx.dev, "ipf limit addr not get\n");
		g_ipf_ctx.limit_addr->block_err = 1;
		return BSP_ERR_IPF_INVALID_PARA;
	}

    mem_start = type->regions[0].base;
	mem_end = type->regions[type->cnt-1].base + type->regions[type->cnt-1].size;

    *(g_ipf_ctx.memblock_show) = type->cnt;
    for(i=0; i < type->cnt; i++){
        *(g_ipf_ctx.memblock_show + i + 1) = (unsigned int)(type->regions[i].base);
        if(mem_start > type->regions[i].base){
            mem_start = type->regions[i].base;
        }
        
        if(mem_end < (type->regions[i].base + type->regions[i].size)){
            mem_end = type->regions[i].base + type->regions[i].size;
        }
    }

    if(mem_end > (phys_addr_t)0xffffffff){
        mem_end = (phys_addr_t)0xffffffff;
    }
    
	if((MODEM_START_ADDR >= mem_start) && ((MODEM_START_ADDR + MODEM_START_SIZE) <= mem_end)){
		g_ipf_ctx.limit_addr->block_sum 		=2;
		g_ipf_ctx.limit_addr->block1_start 		=(unsigned int)mem_start;
		g_ipf_ctx.limit_addr->block1_end		=MODEM_START_ADDR;
		g_ipf_ctx.limit_addr->block2_start 		=MODEM_START_ADDR + MODEM_START_SIZE;
		g_ipf_ctx.limit_addr->block2_end		=(unsigned int)mem_end;
	}
	else{
		g_ipf_ctx.limit_addr->block_sum 		=1;
		g_ipf_ctx.limit_addr->block1_start 		=(unsigned int)mem_start;
		g_ipf_ctx.limit_addr->block1_end		=(unsigned int)mem_end;
	}

	return 0;
}

static irqreturn_t ipf_interuppt(int irq, void* dev)
{
	HI_IPF_INT1_T intr;

	intr.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_INT1_OFFSET);

	ipf_writel(intr.u32, g_ipf_ctx.regs + HI_IPF_INT_STATE_OFFSET);

	if(intr.bits.dl_rpt_int1 || intr.bits.dl_rdq_full_int1 || intr.bits.dl_timeout_int1)
	{
		if (intr.bits.dl_rpt_int1) {
			g_ipf_ctx.status->rd_comp_intr++;
		}
		if (intr.bits.dl_timeout_int1) {
			g_ipf_ctx.status->time_out_intr++;
		}

		if (intr.bits.dl_rdq_full_int1) {
			g_ipf_ctx.status->rd_full_intr++;
		}

        if(g_ipf_ctx.dl_info.pFnDlIntCb) {
            (void)g_ipf_ctx.dl_info.pFnDlIntCb();
			g_ipf_ctx.status->rd_cb++;
        } else {
        	g_ipf_ctx.status->rd_cb_null++;
        }

		if(ccore_rst_idle){
			g_ipf_ctx.status->ccore_rst_err ++;
		}
    }
	
    if(intr.bits.dl_adq0_epty_int1 || intr.bits.dl_adq1_epty_int1) {
		if(g_ipf_ctx.dl_info.pAdqEmptyDlCb) {
        	if (intr.bits.dl_adq0_epty_int1 && intr.bits.dl_adq1_epty_int1){
				g_ipf_ctx.status->ad_epty_intr[IPF_AD_0]++;
				g_ipf_ctx.status->ad_epty_intr[IPF_AD_1]++;
				g_ipf_ctx.dl_info.pAdqEmptyDlCb(IPF_EMPTY_ADQ);

			} 
			else if (intr.bits.dl_adq0_epty_int1) {
				g_ipf_ctx.status->ad_epty_intr[IPF_AD_0]++;
				g_ipf_ctx.dl_info.pAdqEmptyDlCb(IPF_EMPTY_ADQ0);
			} 
			else {
				g_ipf_ctx.status->ad_epty_intr[IPF_AD_1]++;
				g_ipf_ctx.dl_info.pAdqEmptyDlCb(IPF_EMPTY_ADQ1);
			}

			g_ipf_ctx.status->ad_epty_cb++;

        } else {
        	g_ipf_ctx.status->ad_epty_cb_null++;
        }
    }

    if(intr.bits.ul_bdq_epty_int1) {
		g_ipf_ctx.status->bd_epty_intr++;
		if(g_ipf_ctx.ul_info.handle_bd_empty)
        {
			g_ipf_ctx.ul_info.handle_bd_empty();
			g_ipf_ctx.status->bd_epty_cb++;
        } else {
        	g_ipf_ctx.status->bd_epty_cb_null++;
        }
    }

	if(intr.bits.ipf_mst_sec_rd_err_int1){
		disable_irq_nosync(g_ipf_ctx.irq);
		g_ipf_ctx.status->reg_scur_rd_err++;
		IPF_PRINT("ipf sec rd err\n");

		system_error(DRV_ERRNO_IPF_OUT_REG, 0, 0, (char *)IPF_ULAD0_MEM_ADDR, IPF_ULAD0_MEM_SIZE + IPF_ULAD1_MEM_SIZE);
	}

	if(intr.bits.ipf_mst_sec_wr_err_int1){
		disable_irq_nosync(g_ipf_ctx.irq);
		g_ipf_ctx.status->reg_scur_wr_err++;
		IPF_PRINT("ipf sec wr err\n");

		system_error(DRV_ERRNO_IPF_OUT_REG, 0, 0, (char *)IPF_ULAD0_MEM_ADDR, IPF_ULAD0_MEM_SIZE + IPF_ULAD1_MEM_SIZE);
	}

    if(intr.bits.dl_rdq_full_int1) {
		g_ipf_ctx.status->rd_full++;
    }
	
    return IRQ_HANDLED;
}/*lint !e550*/

static void ipf_ctx_init(void)
{
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();

    g_ipf_ctx.ul_info.pstIpfBDQ = sm->ubd;	//(IPF_BD_DESC_S*)IPF_ULBD_MEM_ADDR;
    g_ipf_ctx.ul_info.pstIpfRDQ = sm->urd;	//(IPF_RD_DESC_S*)IPF_ULRD_MEM_ADDR;
    g_ipf_ctx.ul_info.pstIpfADQ0 = sm->uad0;	//(IPF_AD_DESC_S*)IPF_ULAD0_MEM_ADDR;
    g_ipf_ctx.ul_info.pstIpfADQ1 = sm->uad1;	//(IPF_AD_DESC_S*)IPF_ULAD1_MEM_ADDR;
    g_ipf_ctx.ul_info.pu32IdleBd = sm->idle;	//(unsigned int*)IPF_ULBD_IDLENUM_ADDR;

    g_ipf_ctx.dl_info.pstIpfBDQ = sm->dbd;	//(IPF_BD_DESC_S*)IPF_DLBD_MEM_ADDR;
    g_ipf_ctx.dl_info.pstIpfRDQ = sm->drd;	//(IPF_RD_DESC_S*)IPF_DLRD_MEM_ADDR;
    g_ipf_ctx.dl_info.pstIpfADQ0 = sm->dad0;	//(IPF_AD_DESC_S*)IPF_DLAD0_MEM_ADDR;
    g_ipf_ctx.dl_info.pstIpfADQ1 = sm->dad1;	//(IPF_AD_DESC_S*)IPF_DLAD1_MEM_ADDR;
    g_ipf_ctx.dl_info.pstIpfCDQ = sm->dcd;	//(IPF_CD_DESC_S*)IPF_DLCD_MEM_ADDR;

//    g_ipf_ctx.dl_info.pstIpfPhyBDQ = (IPF_BD_DESC_S*)(SHD_DDR_V2P((void *)sm));
//    g_ipf_ctx.dl_info.pstIpfPhyRDQ = (IPF_RD_DESC_S*)(SHD_DDR_V2P((void *)sm));
//    g_ipf_ctx.dl_info.pstIpfPhyADQ0 = (IPF_AD_DESC_S*)(SHD_DDR_V2P((void *)sm->dad0));
//    g_ipf_ctx.dl_info.pstIpfPhyADQ1 = (IPF_AD_DESC_S*)(SHD_DDR_V2P((void *)sm->dad1));

    g_ipf_ctx.dl_info.u32IpfCdRptr = &sm->dcd_rptr;//(unsigned int*) IPF_DLCDRPTR_MEM_ADDR;
    *(g_ipf_ctx.dl_info.u32IpfCdRptr) = 0;
}

static void ipf_desc_init(void)
{
	
		/* 配置下行通道的AD、BD和RD深度 */
		ipf_writel(IPF_DLRD_DESC_SIZE-1, g_ipf_ctx.regs + HI_IPF_CH1_BDQ_SIZE_OFFSET);
		ipf_writel(IPF_DLRD_DESC_SIZE-1, g_ipf_ctx.regs + HI_IPF_CH1_RDQ_SIZE_OFFSET);
#ifdef CONFIG_PSAM
		ipf_writel(IPF_NONE_ADQ_EN, g_ipf_ctx.regs + HI_IPF_CH1_ADQ_CTRL_OFFSET);
#else
		ipf_writel(IPF_ADQ_DEFAULT_SEETING, g_ipf_ctx.regs + HI_IPF_CH1_ADQ_CTRL_OFFSET);
#endif
		/*下行通道的BD和RD起始地址*/
		ipf_writel((unsigned int)(unsigned long)g_ipf_ctx.dl_info.pstIpfPhyBDQ, g_ipf_ctx.regs + HI_IPF_CH1_BDQ_BADDR_OFFSET);
		ipf_writel((unsigned int)(unsigned long)g_ipf_ctx.dl_info.pstIpfPhyRDQ, g_ipf_ctx.regs + HI_IPF_CH1_RDQ_BADDR_OFFSET);
		ipf_writel((unsigned int)(unsigned long)g_ipf_ctx.dl_info.pstIpfPhyADQ0, g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_BASE_OFFSET);
		ipf_writel((unsigned int)(unsigned long)g_ipf_ctx.dl_info.pstIpfPhyADQ1, g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_BASE_OFFSET);
}

int ipf_init(void)
{
	int ret;
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();

	#ifndef CONFIG_IPF_PROPERTY_MBB
    unsigned int ipf_flags;
    #endif

    memset((void*)sm->dbd, 0x0, IPF_DLDESC_SIZE);
   	ipf_ctx_init();

    #ifndef CONFIG_IPF_PROPERTY_MBB
    spin_lock_init(&g_ipf_ctx.filter_spinlock);
    #endif

    ipf_desc_init();
	
	ret = request_irq(g_ipf_ctx.irq, ipf_interuppt, IRQF_SHARED, "ipf", g_ipf_ctx.dev);
	if(0 != ret) {
		dev_err(g_ipf_ctx.dev, "request irq failed\n");
	}

    sm->init.status.modem = IPF_FORRESET_CONTROL_ALLOW;

    if(0 != mdrv_sysboot_register_reset_notify("IPF_BALONG",bsp_ipf_reset_ccore_cb, 0, DRV_RESET_CB_PIOR_IPF))
    {
    	dev_err(g_ipf_ctx.dev, "set modem reset call back func failed\n");
    }

	/*acore use first block,ccore use scnd block*/
	g_ipf_ctx.status = (struct ipf_debug*)&sm->debug[1] ;
	memset(g_ipf_ctx.status, 0, sizeof(struct ipf_debug));

	ipf_get_version();
    g_ipf_ctx.status->init_ok = IPF_ACORE_INIT_SUCCESS;
    g_ipf_ctx.modem_status = IPF_FORRESET_CONTROL_ALLOW;

	dev_err(g_ipf_ctx.dev, "ipf init success\n");

	return 0;
}

void bsp_ipf_set_debug_para(void ** psam_get_debug)
{
	*(psam_get_debug) = (void *)(g_ipf_ctx.status);
}

int bsp_ipf_srest(void)
{
	int tmp_cnt = 10000;
	/*reset*/
	ipf_writel(1, g_ipf_ctx.regs + HI_IPF_SRST_OFFSET);

	while(!ipf_readl(g_ipf_ctx.regs + HI_IPF_SRST_STATE_OFFSET)){
		tmp_cnt--;
		if(!tmp_cnt){
			return -1;
		}
	}
	/*start*/
	ipf_writel(0, g_ipf_ctx.regs + HI_IPF_SRST_OFFSET);

	ipf_writel(IPF_INT_OPEN0, g_ipf_ctx.regs + HI_IPF_INT_MASK0_OFFSET);
    ipf_writel(IPF_INT_OPEN1, g_ipf_ctx.regs + HI_IPF_INT_MASK1_OFFSET);
	return 0;
}

int bsp_ipf_config_timeout(unsigned int u32Timeout)
{
	HI_IPF_TIME_OUT_T time_out;
	
    if((u32Timeout == 0) || (u32Timeout > 0xFFFF))
    {
    	dev_err(g_ipf_ctx.dev, "%s para invalid\n", __func__);
        return BSP_ERR_IPF_INVALID_PARA;
    }
	time_out.bits.time_out_cfg = u32Timeout;
	time_out.bits.time_out_valid = 1;
    ipf_writel(time_out.u32, g_ipf_ctx.regs + HI_IPF_TIME_OUT_OFFSET);

    return IPF_SUCCESS;
}

int bsp_ipf_set_pktlen(unsigned int u32MaxLen, unsigned int u32MinLen)
{
	HI_IPF_PKT_LEN_T pkt_len;

    /* 参数检查 */
    if(u32MaxLen < u32MinLen)
    {
    	dev_err(g_ipf_ctx.dev, "%s para invalid\n", __func__);
        return BSP_ERR_IPF_INVALID_PARA;
    }

	pkt_len.bits.min_pkt_len = u32MinLen;
	pkt_len.bits.max_pkt_len = u32MaxLen;

    ipf_writel(pkt_len.u32, g_ipf_ctx.regs + HI_IPF_PKT_LEN_OFFSET);
    return IPF_SUCCESS;
}

void bsp_set_init_status(int stat)
{
    g_ipf_ctx.status->init_ok = stat;    
}

int bsp_get_init_status(void)
{
    return g_ipf_ctx.status->init_ok;    
}

void mdrv_ipf_reinit_dlreg(void)
{
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
	
    memset((void*)sm->dbd, 0x0, IPF_DLDESC_SIZE);

    ipf_ctx_init();
	
    ipf_desc_init();
	
#ifdef CONFIG_PSAM
	psam_reinit_regs();
#endif

    g_ipf_ctx.status->init_ok = IPF_ACORE_INIT_SUCCESS;

    dev_err(g_ipf_ctx.dev, "ipf dl register reinit success\n");

    return;

}

/*****************************************************************************
* 函 数 名     : mdrv_ipf_get_used_dlad
*
* 功能描述  : 功能同V9R1的同名函数，用于获取配置给AD队列的，
				  且尚未被硬件使用的AD信息，调用者释放获取的AD
				  中对应的skb(IMM_Zc)，以防止Ccore reset时内存泄露
				  调用该函数期间，应禁止配置BD。
				  该函数运行时会关闭通道

* 输入参数  : eAdType: AD队列类型
*
* 输出参数  : pu32AdNum: 需要释放的AD数目
				  pstAdDesc: 需要释放的AD数组头指针
*
* 返 回 值     : BSP_ERR_IPF_INVALID_PARA 入参非法
				  IPF_ERROR 失败
*				  IPF_SUCCESS 成功
* 修改记录  :2013年9月1日   陈东岳创建
*****************************************************************************/
int bsp_ipf_get_used_dlad(IPF_AD_TYPE_E eAdType, unsigned int * pu32AdNum, IPF_AD_DESC_S * pstAdDesc)
{
	unsigned int u32Timeout = 10;
	unsigned int u32DlStateValue;
	unsigned int u32ChanEnable;
	unsigned int u32AdStateValue;
	unsigned int u32FreeAdNum = 0;
	unsigned int u32ADQwptr;
	unsigned int u32ADQrptr;
	HI_IPF_CH1_ADQ_CTRL_T adq_ctrl;

	/*入参检测*/
	if((NULL == pu32AdNum)||(NULL == pstAdDesc))
	{
		bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r BSP_IPF_ConfigDlAd input para ERROR!NULL == pu32AdNum or NULL == pstAdDesc\n");
		return BSP_ERR_IPF_INVALID_PARA;
	}
	/*关闭下行AD配置接口*/
	if (g_ipf_ctx.status) {
		g_ipf_ctx.status->init_ok = 0;
	}
	/*等待通道idle ,200ms超时*/
	do
	{
		u32DlStateValue = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_STATE_OFFSET);
		if(u32DlStateValue == IPF_CHANNEL_STATE_IDLE)
		{
			break;
		}
		msleep(20);
	}while(--u32Timeout);
	if (!u32Timeout)
	{
		bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r After 20ms IPF dl channel still on, unable to free AD \n");
		return IPF_ERROR;
	}
	/*尝试关闭下行通道*/
	u32ChanEnable = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH_EN_OFFSET);
	u32ChanEnable &= 0xFFFFFFFF ^ (0x1<<IPF_CHANNEL_DOWN);
	ipf_writel(u32ChanEnable, g_ipf_ctx.regs + HI_IPF_CH_EN_OFFSET);

	adq_ctrl.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ_CTRL_OFFSET);
	adq_ctrl.bits.dl_adq_en = 0;

	/*关闭AD，用于防止产生ADQ预取*/
	ipf_writel(adq_ctrl.u32, g_ipf_ctx.regs + HI_IPF_CH1_ADQ_CTRL_OFFSET);
	if(IPF_AD_0 == eAdType)
	{
		u32AdStateValue = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_STAT_OFFSET);/*[false alarm]:fortify*/
		/*回退AD读指针*/
		u32ADQwptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_WPTR_OFFSET);
		u32ADQrptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_RPTR_OFFSET);
		while(u32ADQrptr != u32ADQwptr)
		{
			pstAdDesc->u32OutPtr1 = g_ipf_ctx.dl_info.pstIpfADQ0[u32ADQrptr].u32OutPtr1;
			pstAdDesc->u32OutPtr0 = g_ipf_ctx.dl_info.pstIpfADQ0[u32ADQrptr].u32OutPtr0;
			//printk("AD0[%u]OutPtr1 = 0x%x \n", u32ADQrptr, pstAdDesc->u32OutPtr1);
			u32ADQrptr = ((u32ADQrptr + 1) < IPF_DLAD0_DESC_SIZE)? (u32ADQrptr + 1) : 0;
			pstAdDesc++;
			u32FreeAdNum++;
		}
	}
	else if(IPF_AD_1 == eAdType)
	{
		u32AdStateValue = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_STAT_OFFSET);/*[false alarm]:fortify*/
		/*回退AD读指针*/
		u32ADQwptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_WPTR_OFFSET);
		u32ADQrptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_RPTR_OFFSET);
		while(u32ADQrptr != u32ADQwptr)
		{
			pstAdDesc->u32OutPtr1 = g_ipf_ctx.dl_info.pstIpfADQ1[u32ADQrptr].u32OutPtr1;
			pstAdDesc->u32OutPtr0 = g_ipf_ctx.dl_info.pstIpfADQ1[u32ADQrptr].u32OutPtr0;
			//printk("AD1[%u]OutPtr1 = 0x%x", u32ADQrptr, pstAdDesc->u32OutPtr1);
			u32ADQrptr = ((u32ADQrptr + 1) < IPF_DLAD1_DESC_SIZE)? (u32ADQrptr + 1) : 0;
			pstAdDesc++;
			u32FreeAdNum++;
		}
	}
	else
	{
		bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r BSP_IPF_ConfigDlAd input para ERROR! u32AdType >= IPF_AD_MAX\n");
		return BSP_ERR_IPF_INVALID_PARA;
	}
	/*返回AD*/
	*pu32AdNum = u32FreeAdNum;
	return IPF_SUCCESS;

}

int mdrv_ipf_get_used_dlad(IPF_AD_TYPE_E eAdType, unsigned int * pu32AdNum, IPF_AD_DESC_S * pstAdDesc)
{	
#ifdef CONFIG_PSAM
	return bsp_psam_get_used_dlad(eAdType, pu32AdNum, pstAdDesc);
#else
	return bsp_ipf_get_used_dlad(eAdType, pu32AdNum, pstAdDesc);
#endif
}


/*****************************************************************************
* 函 数 名     : bsp_ipf_set_control_flag_for_ccore_reset
*
* 功能描述  : modem单独复位ipf适配函数，用于在复位时阻止下行数传
*
* 输入参数  : 无
*
* 输出参数  : 无
*
* 返 回 值     : 成功
*
* 修改记录  :	2013年4月19日   卢彦胜创建
					2013年6月16日   陈东岳适配到V7R2
*****************************************************************************/
void bsp_ipf_set_control_flag_for_ccore_reset(IPF_FORRESET_CONTROL_E eResetFlag)
{
#ifndef CONFIG_IPF_PROPERTY_MBB
        struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
#endif

    if(eResetFlag >= IPF_FORRESET_CONTROL_MAX)
    {
        bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r bsp_ipf_set_control_flag_for_ccore_reset eResetFlag overflow! \n");
        return;
    }
    /*设置标志，终止上行数传*/
    g_ipf_ctx.modem_status = eResetFlag;
#ifndef CONFIG_IPF_PROPERTY_MBB
    /*设置标志，终止下行数传*/
    sm->init.status.modem = eResetFlag;
#endif
    cache_sync();
}

int bsp_ipf_reset_ccore_cb(DRV_RESET_CB_MOMENT_E eparam, int userdata)
{
	unsigned int u32Timeout = 30;
	unsigned int idle_cnt = 10;
	unsigned int time_out = 2000;
	unsigned int u32DlStateValue;
	unsigned int psam_status = 0;
	if(MDRV_RESET_CB_BEFORE == eparam)
	{
		bsp_ipf_set_control_flag_for_ccore_reset(IPF_FORRESET_CONTROL_FORBID);

		if(g_ipf_ctx.ipf_version >= IPF_VERSION_130b){
			do{
				udelay(2);	//wait cipher idle
				u32DlStateValue = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_STATE_OFFSET);
				psam_status = bsp_psam_idle();
				time_out--;
				if((u32DlStateValue == IPF_CHANNEL_STATE_IDLE) && psam_status){
					idle_cnt--;
				}else{
					idle_cnt = 10;
				}
			}while(idle_cnt && time_out);

			if(!idle_cnt){
				ccore_rst_idle = 1;
			}

			if (!time_out)
			{
				bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,
					"\r IPF dl channel on after bsp_ipf_reset_ccore_cb called \n");
			}
		}
		else{
		    do
		    {
    			u32DlStateValue = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_STATE_OFFSET);
    			if(u32DlStateValue == IPF_CHANNEL_STATE_IDLE)
    			{
    				break;
    			}
				msleep(10);
			}while(--u32Timeout);
			if (!u32Timeout)
			{
				bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,
					"\r IPF dl channel on after bsp_ipf_reset_ccore_cb called \n");
			}else{
				ccore_rst_idle = 1;
			}
		}
	}
	else if(MDRV_RESET_CB_AFTER == eparam)
	{
		ccore_rst_idle = 0;
		bsp_ipf_set_control_flag_for_ccore_reset(IPF_FORRESET_CONTROL_ALLOW);
		return IPF_SUCCESS;
	}
	else
	{
		/*under the requeset of yaoguocai*/
		return IPF_SUCCESS;
	}
	return IPF_SUCCESS;
}

/*****************************************************************************
* 函 数 名     : BSP_IPF_ConfigDlAd
*
* 功能描述  : 该接口仅在A核提供，用于移动ADQ写指针，
				给空闲的AD分配新的内存缓冲区，一次可以处理多个AD。
				数传前要调用这个函数分配缓冲区。
*
* 输入参数  : unsigned int u32ADNum0;
				 unsigned int u32ADNum1;
				 void* psk0;
				 void* psk1
*
* 输出参数  : 无
* 返 回 值      : 无
* 修改记录  :2012年11月24日   陈东岳  创建
*****************************************************************************/
int ipf_config_dl_ad(unsigned int u32AdType, unsigned int  u32AdNum, IPF_AD_DESC_S * pstAdDesc)
{
	unsigned int u32ADQwptr = 0;
	struct tagIPF_AD_DESC_S * pstADDesc = pstAdDesc;
	IPF_DL_S* dl_ad = &g_ipf_ctx.dl_info;
	unsigned int i;

	g_ipf_ctx.status->cfg_ad_times++;
	if(NULL == pstAdDesc || u32AdType >= IPF_AD_MAX)
	{
		pr_err("%s para invalid\n", __func__);
		g_ipf_ctx.status->invalid_para++;
		return BSP_ERR_IPF_INVALID_PARA;
	}

	/* 检查模块是否初始化 */
	if(g_ipf_ctx.status && (IPF_ACORE_INIT_SUCCESS != g_ipf_ctx.status->init_ok))
	{
		g_ipf_ctx.status->mdrv_called_not_init++;
		pr_err("%s ipf not init\n", __func__);
		return BSP_ERR_IPF_NOT_INIT;
	}


	if(IPF_AD_0 == u32AdType)
	{
		if(u32AdNum >= IPF_DLAD0_DESC_SIZE)
		{
			pr_err("%s too much short ad num\n", __func__);
			g_ipf_ctx.status->invalid_para++;
			return BSP_ERR_IPF_INVALID_PARA;
		}

		/*读出写指针*/
		u32ADQwptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_WPTR_OFFSET);
		for(i=0; i < u32AdNum; i++)
		{
			if(0 == pstADDesc->u32OutPtr1)
			{
				pr_err("%s the %d short ad outptr is null\n", __func__, i);
				g_ipf_ctx.status->ad_out_ptr_null[IPF_AD_0]++;
				return BSP_ERR_IPF_INVALID_PARA;
			}
			dl_ad->pstIpfADQ0[u32ADQwptr].u32OutPtr1 = pstADDesc->u32OutPtr1;
			dl_ad->pstIpfADQ0[u32ADQwptr].u32OutPtr0 = pstADDesc->u32OutPtr0;
			u32ADQwptr = ((u32ADQwptr + 1) < IPF_DLAD0_DESC_SIZE)? (u32ADQwptr + 1) : 0;
			pstADDesc++;
		}
		g_ipf_ctx.status->cfg_ad_cnt[IPF_AD_0] += u32AdNum;
		/* 更新AD0写指针*/
		ipf_writel(u32ADQwptr, g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_WPTR_OFFSET);
	}
	else if(IPF_AD_1 == u32AdType)
	{
		if(u32AdNum >= IPF_DLAD1_DESC_SIZE)
		{
			pr_err("%s too much long ad num\n", __func__);
			g_ipf_ctx.status->invalid_para++;
			return BSP_ERR_IPF_INVALID_PARA;
		}

		/*读出写指针*/
		u32ADQwptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_WPTR_OFFSET);
		for(i=0; i < u32AdNum; i++)
		{
			if(0 == pstADDesc->u32OutPtr1)
			{
				pr_err("%s the %d long ad outptr is null\n", __func__, i);
				g_ipf_ctx.status->ad_out_ptr_null[IPF_AD_1]++;
				return BSP_ERR_IPF_INVALID_PARA;
			}

			dl_ad->pstIpfADQ1[u32ADQwptr].u32OutPtr1 = pstADDesc->u32OutPtr1;
			dl_ad->pstIpfADQ1[u32ADQwptr].u32OutPtr0 = pstADDesc->u32OutPtr0;
			u32ADQwptr = ((u32ADQwptr + 1) < IPF_DLAD1_DESC_SIZE)? (u32ADQwptr + 1) : 0;
			pstADDesc++;
		}
		g_ipf_ctx.status->cfg_ad_cnt[IPF_AD_1] += u32AdNum;

		/* 更新AD1写指针*/
		ipf_writel(u32ADQwptr, g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_WPTR_OFFSET);
	}
	return IPF_SUCCESS;
}
/*****************************************************************************
* 函 数 名     : BSP_IPF_RegisterWakeupDlCb
*
* 功能描述  : 该接口用于注册下行PS任务回调函数
*
* 输入参数  : BSP_IPF_WakeupDlkCb *pFnWakeupDl
*
* 输出参数  : 无
* 返 回 值      : 无
*
* 修改记录  :2011年11月30日   鲁婷  创建
*****************************************************************************/
int ipf_register_wakeup_dlcb(BSP_IPF_WakeupDlCb pFnWakeupDl)
{
    /* 参数检查 */
    if(NULL == pFnWakeupDl)
    {
    	g_ipf_ctx.status->invalid_para++;
    	pr_err("%s invalid para\n", __func__);
        return BSP_ERR_IPF_INVALID_PARA;
    }
    g_ipf_ctx.dl_info.pFnDlIntCb = pFnWakeupDl;
    return IPF_SUCCESS;
}


int ipf_register_ul_bd_empty(ipf_bd_empty bd_handle)
{
   if(NULL == bd_handle)
    {
    	g_ipf_ctx.status->invalid_para++;
    	pr_err("%s invalid para\n", __func__);
        return BSP_ERR_IPF_INVALID_PARA;
    }
    g_ipf_ctx.ul_info.handle_bd_empty = bd_handle;
	return 0;
}


/*****************************************************************************
* 函 数 名     : IPF_RegisterAdqEmptyDlCb
*
* 功能描述  : 此接口只在A核提供，用于注册唤醒上行PS的
                             ADQ队列空回调函数
*
* 输入参数  : BSP_IPF_AdqEmptyCb pAdqEmptyDl
*
* 输出参数  : 无
* 返 回 值      : IPF_SUCCESS 注册成功
*                            IPF_ERROR	注册失败
* 修改记录  :2012年11月24日   陈东岳  创建
*****************************************************************************/
int ipf_register_adq_empty_dlcb(BSP_IPF_AdqEmptyDlCb pAdqEmptyDl)
{
    /* 参数检查 */
    if(NULL == pAdqEmptyDl)
    {
    	g_ipf_ctx.status->invalid_para++;
    	pr_err("%s invalid para\n", __func__);
        return IPF_ERROR;
    }
    g_ipf_ctx.dl_info.pAdqEmptyDlCb = pAdqEmptyDl;
    return IPF_SUCCESS;
}


int ipf_rd_rate(unsigned int enable, IPF_CHANNEL_TYPE_E eChnType)
{
	unsigned int rate = 0;
	unsigned int rd_len = 0;
	unsigned int rd_ts =  0;
	unsigned int ratio = IPF_LEN_RATIO / (IPF_TIMER_RATIO * 8);

	if(!enable) {
		return IPF_ERROR;
	}

	if(eChnType > IPF_CHANNEL_DOWN){
		IPF_PRINT("eChnType err!\n");
		return IPF_ERROR;
	}

	switch(eChnType)
    {
		case IPF_CHANNEL_DOWN:
			rd_ts =  bsp_get_slice_value() - g_ipf_ctx.status->rd_ts;
			if(rd_ts < IPF_RD_TMOUT) {
				return IPF_ERROR;
			}

			rd_len = g_ipf_ctx.status->rd_len_update - g_ipf_ctx.status->rd_len;
			g_ipf_ctx.status->rd_ts = bsp_get_slice_value();
			g_ipf_ctx.status->rd_len = g_ipf_ctx.status->rd_len_update;
			break;
		default:
            break;
	}

	if(rd_len <= 0 || rd_ts <= 0) {
		IPF_PRINT("ipf rd len or ts err!\n");
		return IPF_ERROR;
	} else {
		rate = rd_len / (rd_ts * ratio);
		IPF_PRINT("ipf rd rate:%uMbps\n", rate);
	}

	return IPF_SUCCESS;
}


/******************************************************************************
* 函 数 名     : mdrv_ipf_get_ulbd_num
*
* 功能描述  : 该接口用于获取上行空闲BD 数目
*                            范围: 0~64
* 输入参数  : 无
*
* 输出参数  : 无
* 返 回 值      : 空闲BD数目
*
* 修改记录  :2011年11月30日   鲁婷  创建
*****************************************************************************/
unsigned int mdrv_ipf_get_ulbd_num(void)
{
    unsigned int u32IdleBd = 0;
    HI_IPF_CH0_DQ_DEPTH_T dq_depth;

	g_ipf_ctx.status->get_bd_num_times++;
    /* 计算空闲BD数量 */
    dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_DQ_DEPTH_OFFSET);

    u32IdleBd = IPF_ULBD_DESC_SIZE - (dq_depth.bits.ul_bdq_depth);
    *(g_ipf_ctx.ul_info.pu32IdleBd) = u32IdleBd;

    if(0 == u32IdleBd)
	{
		g_ipf_ctx.status->bd_full++;
	}
    return u32IdleBd;
}

/*****************************************************************************
* 函 数 名     : mdrv_ipf_get_ulrd_num
*
* 功能描述  : 该接口用于读取上行RD数目
*
* 输入参数  : 无
*
* 输出参数  : 无
*
* 返 回 值     : 上行RD数目
*
* 修改记录  :2013年8月1日   chendongyue  创建
*****************************************************************************/
unsigned int mdrv_ipf_get_ulrd_num(void)
{
    HI_IPF_CH0_DQ_DEPTH_T dq_depth;

    /* 读取RD深度 */
    dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_DQ_DEPTH_OFFSET);
    return dq_depth.bits.ul_rdq_depth;
}


/*****************************************************************************
* 函 数 名     : mdrv_ipf_get_uldesc_num
*
* 功能描述  : 该接口可读取上行可传输包数
			用于规避ipf硬件对头阻塞问题
*
* 输入参数  : 无
*
* 输出参数  : 无
*
* 返 回 值     : 上行可发送包数
*
* 修改记录  :2013年8月1日   chendongyue  创建
*****************************************************************************/

unsigned int mdrv_ipf_get_uldesc_num(void)
{
	return mdrv_ipf_get_ulbd_num();
}


/*****************************************************************************
* 函 数 名      : mdrv_ipf_config_ulbd
*
* 功能描述  : IPF上行BD配置函数
*
* 输入参数  : unsigned int u32Num, IPF_CONFIG_ULPARAM_S* pstUlPara
* 输出参数  : 无
* 返 回 值      : IPF_SUCCESS    配置成功
*                           IPF_ERROR      配置失败
*                           BSP_ERR_IPF_NOT_INIT         模块未初始化
*                           BSP_ERR_IPF_INVALID_PARA     参数错误
*
* 修改记录  :2011年11月30日   鲁婷  创建
				2012年11月30日	陈东岳修改添加多过滤器链和
									动态业务模式配置的支持
*****************************************************************************/
int mdrv_ipf_config_ulbd(unsigned int u32Num, IPF_CONFIG_ULPARAM_S* pstUlPara)
{
    IPF_CONFIG_ULPARAM_S* pstUlParam = pstUlPara;
    unsigned int u32BD = 0;
    unsigned int i = 0;
    unsigned int u32TimeStampEn;
    ipf_desc_attr_t bd_attr;
    HI_IPF_CH0_BDQ_WPTR_T bdq_wptr;

	g_ipf_ctx.status->cfg_bd_times++;

    /* 参数检查 */
    if((NULL == pstUlPara)||(0 == u32Num))
    {
    	g_ipf_ctx.status->invalid_para++;
    	pr_err("%s para invalid\n", __func__);
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* 检查模块是否初始化 */
    if(g_ipf_ctx.status && (IPF_ACORE_INIT_SUCCESS != g_ipf_ctx.status->init_ok))
    {
		g_ipf_ctx.status->mdrv_called_not_init++;
		pr_err("%s ipf not init\n", __func__);
        return BSP_ERR_IPF_NOT_INIT;
    }

    /* 检查Ccore是否上电*/
    if(IPF_FORRESET_CONTROL_FORBID <= g_ipf_ctx.modem_status)
    {
       	g_ipf_ctx.status->mdrv_called_not_init++;
        return BSP_ERR_IPF_CCORE_RESETTING;
    }

    /*
    chendongyue c00228781: DTS2013061501582
    检测每个BD中数据的有效性，本来这里应该由上层保证，
    但是出了BUG令BD长度为0，故在这里进行规避
    */
    for(i = 0; i < u32Num; i++)
    {
        if(0 == pstUlParam[i].u16Len)
        {
        	pr_err("%s the %d bdlen is zero drop packet\n", __func__, i);
			g_ipf_ctx.status->bd_len_zero_err++;
            return BSP_ERR_IPF_INVALID_PARA;
        }
    }

    u32TimeStampEn = g_ipf_ctx.status->timestamp_en;
    /* 读出BD写指针,将u32BdqWptr作为临时写指针使用 */
    bdq_wptr.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_BDQ_WPTR_OFFSET);
    u32BD = bdq_wptr.bits.ul_bdq_wptr;
    for(i = 0; i < u32Num; i++)
    {
        bd_attr.u16 = pstUlPara[i].u16Attribute;
        bd_attr.bits.cd_en = ipf_disable;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u16Attribute = bd_attr.u16;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u32InPtr = pstUlParam[i].u32Data;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u16PktLen = pstUlParam[i].u16Len;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u16UsrField1 = pstUlParam[i].u16UsrField1;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u32UsrField2= pstUlParam[i].u32UsrField2;
        g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u32UsrField3 = pstUlParam[i].u32UsrField3;
        ipf_record_start_time_stamp(u32TimeStampEn, &g_ipf_ctx.ul_info.pstIpfBDQ[u32BD].u32UsrField2);

        u32BD = ((u32BD + 1) < IPF_ULBD_DESC_SIZE)? (u32BD + 1) : 0;
    }

    /* 检查Ccore是否上电*/
    if(IPF_FORRESET_CONTROL_FORBID <= g_ipf_ctx.modem_status)
    {
    	g_ipf_ctx.status->mdrv_called_not_init++;
        return BSP_ERR_IPF_CCORE_RESETTING;
    }
	g_ipf_ctx.status->cfg_bd_cnt += u32Num;

    /* 更新BD写指针*/
    ipf_writel(u32BD, g_ipf_ctx.regs + HI_IPF_CH0_BDQ_WPTR_OFFSET);
    return IPF_SUCCESS;
}
int mdrv_ipf_config_dlad(IPF_AD_TYPE_E eAdType, unsigned int u32AdNum, IPF_AD_DESC_S * pstAdDesc)
{
#ifdef CONFIG_PSAM
	return psam_config_dlad(eAdType, u32AdNum, pstAdDesc);
#else
	return ipf_config_dl_ad(eAdType, u32AdNum, pstAdDesc);
#endif
}

int mdrv_ipf_register_ops(struct mdrv_ipf_ops *ops)
{
	if(ops)
	{
		if(ipf_register_wakeup_dlcb(ops->rx_complete_cb)!= IPF_SUCCESS)
			return IPF_ERROR;
#ifdef CONFIG_PSAM
		if(psam_register_adq_empty_dlcb(ops->adq_empty_cb)!= IPF_SUCCESS)
			return IPF_ERROR;
#else
		if(ipf_register_adq_empty_dlcb(ops->adq_empty_cb)!= IPF_SUCCESS)
			return IPF_ERROR;
#endif
	} else {
		pr_err("%s para invalid\n", __func__);
		g_ipf_ctx.status->invalid_para++;
		return IPF_ERROR;
	}
	return IPF_SUCCESS;
}

static inline void ipf_pm_print_packet(void *buf, size_t len)
{
	void *virt = buf;

	if (g_ipf_ctx.status->resume_with_intr){
		if (!virt_addr_valid(buf)){
			virt = phys_to_virt((unsigned long)buf);
			if(!virt_addr_valid(virt)){
				return;
			}
		}

		virt = (void *)(((struct sk_buff*)virt)->data);
		if (!virt_addr_valid(virt)){
			return;
		}
		
		if (len > MAX_PM_OM_SAVE_SIZE) {
			len = MAX_PM_OM_SAVE_SIZE;
		}
		
    	dma_unmap_single(g_ipf_ctx.dev, (dma_addr_t)virt_to_phys(virt), len, DMA_FROM_DEVICE);

		bsp_pm_log(PM_OM_AIPF, len, virt);

		print_hex_dump(KERN_INFO, "", DUMP_PREFIX_ADDRESS, 16, 1, virt, len, 0);

		g_ipf_ctx.status->resume_with_intr = 0;
	}
	return;
}

/*****************************************************************************
* 函 数 名     : mdrv_ipf_get_dlrd
*
* 功能描述  : 该接口用于读取下行BD, 支持一次读取多个BD
*
* 输入参数  : unsigned int* pu32Num
*                           IPF_RD_DESC_S *pstRd
*
* 输出参数  : unsigned int* pu32Num    实际读取的RD数目
*
* 返 回 值     : IPF_SUCCESS               操作成功
*                           IPF_ERROR                   操作失败
*
* 修改记录  :2011年11月30日   鲁婷  创建
*****************************************************************************/
void mdrv_ipf_get_dlrd(unsigned int* pu32Num, IPF_RD_DESC_S *pstRd)
{
    unsigned int u32RdqRptr = 0;
    unsigned int u32RdqDepth = 0;
    unsigned int u32Num = 0;
    unsigned int i = 0;
    unsigned int u32CdqRptr;
    unsigned int u32TimeStampEn;
	unsigned int rd_rate_en;
    ipf_desc_attr_t rd_attr;
    HI_IPF_CH1_DQ_DEPTH_T dq_depth;

    /* 读取RD深度 */
    dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_DQ_DEPTH_OFFSET);
    u32RdqDepth = dq_depth.bits.dl_rdq_depth;

	g_ipf_ctx.status->get_rd_times++;
    u32Num = (u32RdqDepth < *pu32Num)?u32RdqDepth:*pu32Num;
    if(0 == u32Num)
    {
        *pu32Num = 0;
        return;
    }

    u32TimeStampEn = g_ipf_ctx.status->timestamp_en;
	rd_rate_en = g_ipf_ctx.status->rate_en;

    /* 读取RD读指针 */
    u32RdqRptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_RDQ_RPTR_OFFSET);
    for(i = 0; i < u32Num; i++)
    {
        rd_attr.u16 = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u16Attribute;
        /* 获取RD */
        pstRd[i].u16Attribute = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u16Attribute;
        pstRd[i].u16PktLen = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u16PktLen;
        pstRd[i].u16Result = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u16Result;
        pstRd[i].u32InPtr = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32InPtr;
#ifdef CONFIG_PSAM
		pstRd[i].u32OutPtr = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32UsrField3;
#else
		pstRd[i].u32OutPtr = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32OutPtr;
#endif
        pstRd[i].u16UsrField1 = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u16UsrField1;
        pstRd[i].u32UsrField2 = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32UsrField2;
        pstRd[i].u32UsrField3 = g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32UsrField3;
        ipf_record_end_time_stamp(u32TimeStampEn, g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqRptr].u32UsrField2);
        if(ipf_enable == rd_attr.bits.cd_en){
            /* 更新CD读指针 */
        	u32CdqRptr = ((unsigned long)fake_SHD_DDR_P2V((void *)(unsigned long)MDDR_FAMA(pstRd[i].u32InPtr)) - (unsigned long)g_ipf_ctx.dl_info.pstIpfCDQ)/sizeof(IPF_CD_DESC_S);

            while(g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u16Attribute != 1)
            {
                /* 将释放的CD  清0 */
                g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u16Attribute = 0;
                g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u16PktLen = 0;
                g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u32Ptr = 0;
                u32CdqRptr = ((u32CdqRptr+1) < IPF_DLCD_DESC_SIZE)?(u32CdqRptr+1):0;
            }
            g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u16Attribute = 0;
            g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u16PktLen = 0;
            g_ipf_ctx.dl_info.pstIpfCDQ[u32CdqRptr].u32Ptr = 0;
            u32CdqRptr = ((u32CdqRptr+1) < IPF_DLCD_DESC_SIZE)?(u32CdqRptr+1):0;
            *(g_ipf_ctx.dl_info.u32IpfCdRptr) = u32CdqRptr;
        }
		ipf_pm_print_packet((void *)(unsigned long)MDDR_FAMA(pstRd[i].u32OutPtr), pstRd[i].u16PktLen);
        /* 更新RD读指针 */
        u32RdqRptr = ((u32RdqRptr+1) < IPF_DLRD_DESC_SIZE)?(u32RdqRptr+1):0;
		pstRd[i].u16PktLen > (g_ipf_ctx.status->ad_thred)? g_ipf_ctx.status->get_rd_cnt[IPF_AD_1]++:\
						   		  					   g_ipf_ctx.status->get_rd_cnt[IPF_AD_0]++;

        g_ipf_ctx.status->rd_len_update += pstRd[i].u16PktLen;
    }

	ipf_rd_rate(rd_rate_en, IPF_CHANNEL_DOWN);
    ipf_writel(u32RdqRptr, g_ipf_ctx.regs + HI_IPF_CH1_RDQ_RPTR_OFFSET);
    *pu32Num = u32Num;

}

int mdrv_ipf_get_dlad_num (unsigned int* pu32AD0Num, unsigned int* pu32AD1Num)
{
	g_ipf_ctx.status->get_ad_num_times++;
#ifdef CONFIG_PSAM
	return psam_get_dlad_num(pu32AD0Num, pu32AD1Num);
#else
	return ipf_get_dl_ad_num(pu32AD0Num, pu32AD1Num);
#endif
}

unsigned int mdrv_ipf_get_dlrd_num(void)
{
    HI_IPF_CH1_DQ_DEPTH_T dq_depth;

    /* 读取RD深度 */
    dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_DQ_DEPTH_OFFSET);
	g_ipf_ctx.status->get_rd_num_times++;
    return dq_depth.bits.dl_rdq_depth;
}

static int ipf_probe(struct platform_device *pdev)
{
	struct resource	*regs;
	int ret;
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();

	regs = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!regs)
		return -ENXIO;

    memset(&g_ipf_ctx, 0, sizeof(ipf_ctx_t));

	g_ipf_ctx.irq = platform_get_irq(pdev, 0);
	if (unlikely(g_ipf_ctx.irq == 0))
		return -ENXIO;

	g_ipf_ctx.regs = devm_ioremap_resource(&pdev->dev, regs);
	if (IS_ERR(g_ipf_ctx.regs))
		return PTR_ERR(g_ipf_ctx.regs);


	g_ipf_ctx.dev = &pdev->dev;
	g_ipf_ctx.dma_mask = 0xffffffffULL;
	g_ipf_ctx.dev->dma_mask = &g_ipf_ctx.dma_mask;

	g_ipf_ctx.clk = devm_clk_get(g_ipf_ctx.dev, "ipf_clk");
	if (IS_ERR(g_ipf_ctx.clk)) {
		dev_err(g_ipf_ctx.dev, "ipf clock not available\n");
		return -ENXIO;
	} else {
		ret = clk_prepare_enable(g_ipf_ctx.clk);
		if (ret) {
			dev_err(g_ipf_ctx.dev, "failed to enable ipf clock\n");
			return ret;
		}
	}

	g_ipf_ctx.limit_addr = (IPF_LIMIT_ADDR_S *)sm->trans_limit;
    g_ipf_ctx.memblock_show = (unsigned int *)sm->memlock;
	memset((void*)sm->trans_limit, 0x0, IPF_TRANS_LIMIT_SIZE);
    memset((void*)sm->memlock, 0x0, IPF_ADDR_MEMBLOCK_SIZE);

	if(ipf_get_limit_addr()){
		g_ipf_ctx.not_get_space++;
		dev_info(g_ipf_ctx.dev, "ipf addr limit func disable\n");
	}

	ipf_init();

	return 0;

}

static int ipf_remove(struct platform_device *pdev)
{
    return IPF_SUCCESS;
}

static const struct of_device_id ipf_match[] = {
	{ .compatible = "hisilicon,ipf_balong_app" },
	{},
};

static struct platform_driver ipf_pltfm_driver = {
	.probe		= ipf_probe,
	.remove		= ipf_remove,
	.driver		= {
		.name		= "ipf",
		.of_match_table	= ipf_match,
		.pm = &ipf_dev_pm_ops,
	},
};

EXPORT_SYMBOL(g_ipf_ctx);
EXPORT_SYMBOL(mdrv_ipf_config_dlad);
EXPORT_SYMBOL(mdrv_ipf_get_used_dlad);
EXPORT_SYMBOL(bsp_ipf_config_timeout);
EXPORT_SYMBOL(bsp_ipf_set_control_flag_for_ccore_reset);
EXPORT_SYMBOL(bsp_ipf_set_pktlen);
EXPORT_SYMBOL(mdrv_ipf_reinit_dlreg);
EXPORT_SYMBOL(mdrv_ipf_get_uldesc_num);
EXPORT_SYMBOL(mdrv_ipf_config_ulbd);
EXPORT_SYMBOL(mdrv_ipf_get_dlad_num);
EXPORT_SYMBOL(mdrv_ipf_get_ulbd_num);
EXPORT_SYMBOL(bsp_ipf_srest);
EXPORT_SYMBOL(ipf_init);
EXPORT_SYMBOL(mdrv_ipf_get_dlrd);
EXPORT_SYMBOL(mdrv_ipf_register_ops);
EXPORT_SYMBOL(ipf_register_wakeup_dlcb);


module_platform_driver(ipf_pltfm_driver);
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ipf");

#ifdef __cplusplus
}
#endif

/*lint -restore*/

