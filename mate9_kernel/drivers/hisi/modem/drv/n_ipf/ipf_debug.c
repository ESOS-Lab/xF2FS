//#include <string.h>
#include "ipf_balong.h"

#define SYMBOL(symbol)    #symbol

struct ipf_mannul_unit{
    char* name;
    char* desc;
};

extern struct ipf_ctx g_ipf_ctx;

void bsp_ipf_show_status(void)
{
	int i;
	struct ipf_debug* ptr = g_ipf_ctx.status;

	g_ipf_ctx.status->flt_chain_loop = (int)readl(g_ipf_ctx.regs + HI_IPF_FLT_CHAIN_LOOP_OFFSET);

	printk("======acore only=======================");
	printk("ipf_rst_leave 		%d\n", g_ipf_ctx.ipf_rst_leave);
	printk("dont get acore seg  %d\n", g_ipf_ctx.not_get_space);

	for (i = 0; i < IPF_CHANNEL_MAX; i++) {
		printk("====ipf %score status====\n", i == 0 ? "a" : "c");
		printk("flt_chain_loop		%d\n", ptr->flt_chain_loop);
		printk("time_out_intr		%d\n", ptr->time_out_intr);
		printk("rd_comp_intr			%d\n", ptr->rd_comp_intr);
		printk("rd_full_intr			%d\n", ptr->rd_full_intr);
		printk("rd_full			%d\n", ptr->rd_full);
		printk("rd_cb			%d\n", ptr->rd_cb);
		printk("rd_cb_null		%d\n", ptr->rd_cb_null);
		printk("get_rd_num_times		%d\n", ptr->get_rd_num_times);
		printk("get_rd_times			%d\n", ptr->get_rd_times);
		printk("get_rd_short_cnt		%d\n", ptr->get_rd_cnt[IPF_AD_0]);
		printk("get_rd_long_cnt		%d\n", ptr->get_rd_cnt[IPF_AD_1]);
		printk("get_ad_num_times		%d\n", ptr->get_ad_num_times);
		printk("get_ad_thred		%d\n", ptr->ad_thred);
		printk("short_adq_empty_intr	%d\n", ptr->ad_epty_intr[IPF_AD_0]);
		printk("short_adq_cfg_count	%d\n", ptr->cfg_ad_cnt[IPF_AD_0]);
		printk("short_adq_out_ptr_null	%d\n", ptr->ad_out_ptr_null[IPF_AD_0]);
		printk("long_adq_cfg_count	%d\n", ptr->cfg_ad_cnt[IPF_AD_1]);
		printk("long_adq_empty_intr	%d\n", ptr->ad_epty_intr[IPF_AD_1]);
		printk("long_adq_out_ptr_null	%d\n", ptr->ad_out_ptr_null[IPF_AD_1]);
		printk("ad_epty_cb		%d\n", ptr->ad_epty_cb);
		printk("ad_epty_cb_null		%d\n", ptr->ad_epty_cb_null);
		printk("bd_epty_intr		%d\n", ptr->bd_epty_intr);
		printk("bd_epty_cb		%d\n", ptr->bd_epty_cb);
		printk("bd_epty_cb_null		%d\n", ptr->bd_epty_cb_null);
		printk("get_bd_num_times		%d\n", ptr->get_bd_num_times);
		printk("bd_cfg_times		%d\n", ptr->cfg_bd_times);
		printk("cfg_bd_cnt		%d\n", ptr->cfg_bd_cnt);
		printk("bd_full			%d\n", ptr->bd_full);
		printk("bd_len_zero_err		%d\n", ptr->bd_len_zero_err);
		printk("busy_cnt			%d\n", ptr->busy_cnt);
		printk("resume			%d\n", ptr->resume);
		printk("suspend			%d\n", ptr->suspend);
		printk("time_stamp_en		%d\n", ptr->timestamp_en);
		printk("rate_en			%d\n", ptr->rate_en);
		printk("init_ok			0x%x\n", ptr->init_ok);
		printk("mdrv_called_not_init	%d\n", ptr->mdrv_called_not_init);
		printk("invalid_para		%d\n", ptr->invalid_para);
		printk("debug			%d\n", ptr->debug);
		printk("scr wr			%d\n", ptr->reg_scur_wr_err);
		printk("scr rd			%d\n", ptr->reg_scur_rd_err);
		printk("ccore rst idle err		%d\n", ptr->ccore_rst_err);
		printk("========================\n");
		ptr++;
	}
}

int bsp_ipf_bdinfo(IPF_CHANNEL_TYPE_E eChnType, unsigned int u32BdqPtr)
{
    switch(eChnType)
    {
        case IPF_CHANNEL_UP:
            if(u32BdqPtr >= IPF_ULBD_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            IPF_PRINT("==========BD Info=========\n");
            IPF_PRINT("BDλ��:         %d\n",u32BdqPtr);
            IPF_PRINT("u16Attribute:   %d\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u16Attribute);
            IPF_PRINT("u16PktLen:      %d\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u16PktLen);
            IPF_PRINT("u32InPtr:       0x%x\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u32InPtr);
            IPF_PRINT("u32OutPtr:      0x%x\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u32OutPtr);
            IPF_PRINT("u16Resv:        %d\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u16Result);
            IPF_PRINT("u16UsrField1:   %d\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u16UsrField1);
            IPF_PRINT("u32UsrField2:   0x%x\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u32UsrField2);
            IPF_PRINT("u32UsrField3:   0x%x\n",g_ipf_ctx.ul_info.pstIpfBDQ[u32BdqPtr].u32UsrField3);
			IPF_PRINT("BD Desc Virt Addr:	0x%x\n",(g_ipf_ctx.ul_info.pstIpfBDQ + u32BdqPtr));
//			IPF_PRINT("BD Desc Phy Addr:	0x%x\n",SHD_DDR_V2P((void *)(g_ipf_ctx.ul_info.pstIpfBDQ + u32BdqPtr)));
            break;
       case IPF_CHANNEL_DOWN:
            if(u32BdqPtr >= IPF_DLBD_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            IPF_PRINT("==========BD Info=========\n");
            IPF_PRINT("BDλ��:         %d\n",u32BdqPtr);
            IPF_PRINT("u16Attribute:   %d\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u16Attribute);
            IPF_PRINT("u16PktLen:      %d\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u16PktLen);
            IPF_PRINT("u32InPtr:       0x%x\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u32InPtr);
            IPF_PRINT("u32OutPtr:      0x%x\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u32OutPtr);
            IPF_PRINT("u16Resv:        %d\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u16Result);
            IPF_PRINT("u16UsrField1:   %d\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u16UsrField1);
            IPF_PRINT("u32UsrField2:   0x%x\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u32UsrField2);
            IPF_PRINT("u32UsrField3:   0x%x\n",g_ipf_ctx.dl_info.pstIpfBDQ[u32BdqPtr].u32UsrField3);
			IPF_PRINT("BD Desc Virt Addr:	0x%x\n",(g_ipf_ctx.dl_info.pstIpfBDQ + u32BdqPtr));
//			IPF_PRINT("BD Desc Phy Addr:	0x%x\n",SHD_DDR_V2P((void *)(g_ipf_ctx.dl_info.pstIpfBDQ + u32BdqPtr)));
            break;
        default:
            break;
    }
    IPF_PRINT("************************\n");
    return 0;
}

int bsp_ipf_dump_bdinfo(IPF_CHANNEL_TYPE_E eChnType)
{
    unsigned int i;
    switch(eChnType)
    {
        case IPF_CHANNEL_UP:

            for(i = 0;i < IPF_ULBD_DESC_SIZE;i++)
            {
                bsp_ipf_bdinfo(IPF_CHANNEL_UP,i);
            }
        break;

        case IPF_CHANNEL_DOWN:

            for(i = 0;i < IPF_DLBD_DESC_SIZE;i++)
            {
                bsp_ipf_bdinfo(IPF_CHANNEL_DOWN,i);
            }
        break;

        default:
        IPF_PRINT("Input param invalid ! \n");
        break;

    }
    return 0;
}

unsigned long bsp_ipf_ad0_info(unsigned long *ad0_addr)
{
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
	
	*ad0_addr = sm->dad0;
	return IPF_DLAD0_MEM_SIZE;
}

unsigned long bsp_ipf_ad1_info(unsigned long *ad1_addr)
{
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
	
	*ad1_addr = sm->dad1;
	return IPF_DLAD1_MEM_SIZE;
}

int bsp_ipf_rdinfo(IPF_CHANNEL_TYPE_E eChnType, unsigned int u32RdqPtr)
{
    switch(eChnType)
    {
        case IPF_CHANNEL_UP:
            if(u32RdqPtr >= IPF_ULRD_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            IPF_PRINT("===========RD Info==========\n");
            IPF_PRINT("RDλ��:             %d\n",u32RdqPtr);
            IPF_PRINT("u16Attribute:       %d\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u16Attribute);
            IPF_PRINT("u16PktLen:          %d\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u16PktLen);
            IPF_PRINT("u32InPtr:           0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u32InPtr);
            IPF_PRINT("u32OutPtr:          0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u32OutPtr);
            IPF_PRINT("u16Result:          0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u16Result);
            IPF_PRINT("u16UsrField1:       0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u16UsrField1);
            IPF_PRINT("u32UsrField2:       0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u32UsrField2);
            IPF_PRINT("u32UsrField3:       0x%x\n",g_ipf_ctx.ul_info.pstIpfRDQ[u32RdqPtr].u32UsrField3);
			IPF_PRINT("RD Desc Virt Addr:	0x%x\n",(g_ipf_ctx.ul_info.pstIpfRDQ + u32RdqPtr));
//			IPF_PRINT("RD Desc Phy Addr:	0x%x\n",SHD_DDR_V2P((void *)(g_ipf_ctx.ul_info.pstIpfRDQ + u32RdqPtr)));
            break;
       case IPF_CHANNEL_DOWN:
            if(u32RdqPtr >= IPF_DLRD_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            IPF_PRINT("============RD Info===========\n");
            IPF_PRINT("RDλ��:             %d\n",u32RdqPtr);
            IPF_PRINT("u16Attribute:       %d\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u16Attribute);
            IPF_PRINT("u16PktLen:          %d\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u16PktLen);
            IPF_PRINT("u32InPtr:           0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u32InPtr);
            IPF_PRINT("u32OutPtr:          0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u32OutPtr);
            IPF_PRINT("u16Result:          0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u16Result);
            IPF_PRINT("u16UsrField1:       0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u16UsrField1);
            IPF_PRINT("u32UsrField2:       0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u32UsrField2);
            IPF_PRINT("u32UsrField3:       0x%x\n",g_ipf_ctx.dl_info.pstIpfRDQ[u32RdqPtr].u32UsrField3);
			IPF_PRINT("RD Desc Virt Addr:	0x%x\n",(g_ipf_ctx.ul_info.pstIpfRDQ + u32RdqPtr));
//			IPF_PRINT("RD Desc Phy Addr:	0x%x\n",SHD_DDR_V2P((void *)(g_ipf_ctx.ul_info.pstIpfRDQ + u32RdqPtr)));
            break;
        default:
            break;
    }
    IPF_PRINT("************************\n");
    return 0;
}

int bsp_ipf_dump_rdinfo(IPF_CHANNEL_TYPE_E eChnType)
{
    int i;

    switch(eChnType)
    {
        case IPF_CHANNEL_UP:

            for(i = 0;i < IPF_ULBD_DESC_SIZE;i++)
            {
                bsp_ipf_rdinfo(IPF_CHANNEL_UP,i);
            }
        break;

        case IPF_CHANNEL_DOWN:

            for(i = 0;i < IPF_DLBD_DESC_SIZE;i++)
            {
                bsp_ipf_rdinfo(IPF_CHANNEL_DOWN,i);
            }
        break;
        default:
        IPF_PRINT("Input param invalid ! \n");
        break;
    }
    return 0;
}
int bsp_ipf_adinfo(IPF_CHANNEL_TYPE_E eChnType, unsigned int u32AdqPtr, unsigned int u32AdType)
{

    switch(eChnType)
    {
        case IPF_CHANNEL_UP:
            if(u32AdqPtr >= IPF_ULAD0_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            if(0 == u32AdType)
            {
                 IPF_PRINT("===========UL AD0 Info==========\n");
                 IPF_PRINT("ADλ��:             %d\n",u32AdqPtr);
                 IPF_PRINT("u32OutPtr0(phy_addr, use by hardware):       0x%x\n",g_ipf_ctx.ul_info.pstIpfADQ0[u32AdqPtr].u32OutPtr0);
                 IPF_PRINT("u32OutPtr1(usrfield skb_addr default):          0x%x\n",g_ipf_ctx.ul_info.pstIpfADQ0[u32AdqPtr].u32OutPtr1);
            }
            else
            {
                 IPF_PRINT("===========UL AD1 Info==========\n");
                 IPF_PRINT("ADλ��:             %d\n",u32AdqPtr);
                 IPF_PRINT("u32OutPtr0(phy_addr, use by hardware):       0x%x\n",g_ipf_ctx.ul_info.pstIpfADQ1[u32AdqPtr].u32OutPtr0);
                 IPF_PRINT("u32OutPtr1(usrfield skb_addr default):          0x%x\n",g_ipf_ctx.ul_info.pstIpfADQ1[u32AdqPtr].u32OutPtr1);
            }
            break;
       case IPF_CHANNEL_DOWN:
            if(u32AdqPtr >= IPF_ULAD1_DESC_SIZE)
            {
                return IPF_ERROR;
            }
            if(0 == u32AdType)
	      	{
                 IPF_PRINT("===========DL AD0 Info==========\n");
                 IPF_PRINT("ADλ��:             %d\n",u32AdqPtr);
                 IPF_PRINT("u32OutPtr0(phy_addr, use by hardware):       0x%x\n",g_ipf_ctx.dl_info.pstIpfADQ0[u32AdqPtr].u32OutPtr0);
                 IPF_PRINT("u32OutPtr1(usrfield skb_addr default):          0x%x\n",g_ipf_ctx.dl_info.pstIpfADQ0[u32AdqPtr].u32OutPtr1);
            }
            else
            {
                 IPF_PRINT("===========DL AD1 Info==========\n");
                 IPF_PRINT("ADλ��:             %d\n",u32AdqPtr);
                 IPF_PRINT("u32OutPtr0(phy_addr, use by hardware):       0x%x\n",g_ipf_ctx.dl_info.pstIpfADQ1[u32AdqPtr].u32OutPtr0);
                 IPF_PRINT("u32OutPtr1(usrfield skb_addr default):          0x%x\n",g_ipf_ctx.dl_info.pstIpfADQ1[u32AdqPtr].u32OutPtr1);
            }
            break;
        default:
            break;
    }
    IPF_PRINT("************************\n");
    return 0;
}


int bsp_ipf_dump_adinfo(IPF_CHANNEL_TYPE_E eChnType, unsigned int u32AdType)
{
    int i;

    switch(eChnType)
    {
        case IPF_CHANNEL_UP:
            for(i = 0;i < IPF_ULAD0_DESC_SIZE;i++)
            {
                bsp_ipf_adinfo(IPF_CHANNEL_UP, i, u32AdType);
            }
        break;

        case IPF_CHANNEL_DOWN:

            for(i = 0;i < IPF_DLAD1_DESC_SIZE;i++)
            {
                bsp_ipf_adinfo(IPF_CHANNEL_DOWN, i, u32AdType);
            }
        break;

        default:
        IPF_PRINT("Input param invalid ! \n");
        break;
    }
    return 0;
}

int bsp_ipf_info(IPF_CHANNEL_TYPE_E eChnType)
{
    unsigned int u32BdqDepth = 0;
    unsigned int u32BdqWptr = 0;
    unsigned int u32BdqRptr = 0;
    unsigned int u32BdqWaddr = 0;
    unsigned int u32BdqRaddr = 0;
    unsigned int u32RdqDepth = 0;
    unsigned int u32RdqRptr = 0;
    unsigned int u32RdqWptr = 0;
    unsigned int u32RdqWaddr = 0;
    unsigned int u32RdqRaddr = 0;
    unsigned int u32status = 0;

    unsigned int u32Adq0Rptr = 0;
    unsigned int u32Adq0Wptr = 0;

    unsigned int u32Adq1Rptr = 0;
    unsigned int u32Adq1Wptr = 0;
    HI_IPF_CH0_DQ_DEPTH_T dq_depth;

    if(IPF_CHANNEL_UP == eChnType)
    {
        dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_DQ_DEPTH_OFFSET);
        u32RdqDepth = dq_depth.bits.ul_rdq_depth;
        u32BdqDepth = dq_depth.bits.ul_bdq_depth;

        u32status = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_STATE_OFFSET);

        u32BdqWptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_BDQ_WPTR_OFFSET);
        u32BdqRptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_BDQ_RPTR_OFFSET);
        u32BdqWaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_BDQ_WADDR_OFFSET);
        u32BdqRaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_BDQ_RADDR_OFFSET);

        u32RdqWptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_RDQ_WPTR_OFFSET);
        u32RdqRptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_RDQ_RPTR_OFFSET);
        u32RdqWaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_RDQ_WADDR_OFFSET);
        u32RdqRaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_RDQ_RADDR_OFFSET);

        u32Adq0Rptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_ADQ0_RPTR_OFFSET);
        u32Adq0Wptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_ADQ0_WPTR_OFFSET);

        u32Adq1Rptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_ADQ1_RPTR_OFFSET);
        u32Adq1Wptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH0_ADQ1_WPTR_OFFSET);

    }
    else if(IPF_CHANNEL_DOWN == eChnType)
    {
        dq_depth.u32 = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_DQ_DEPTH_OFFSET);
        u32RdqDepth = dq_depth.bits.ul_rdq_depth;
        u32BdqDepth = dq_depth.bits.ul_bdq_depth;

        u32status = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_STATE_OFFSET);

        u32BdqWptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_BDQ_WPTR_OFFSET);
        u32BdqRptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_BDQ_RPTR_OFFSET);
        u32BdqWaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_BDQ_WADDR_OFFSET);
        u32BdqRaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_BDQ_RADDR_OFFSET);

        u32RdqWptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_RDQ_WPTR_OFFSET);
        u32RdqRptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_RDQ_RPTR_OFFSET);
        u32RdqWaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_RDQ_WADDR_OFFSET);
        u32RdqRaddr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_RDQ_RADDR_OFFSET);

        u32Adq0Rptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_RPTR_OFFSET);
        u32Adq0Wptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ0_WPTR_OFFSET);

        u32Adq1Rptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_RPTR_OFFSET);
        u32Adq1Wptr = ipf_readl(g_ipf_ctx.regs + HI_IPF_CH1_ADQ1_WPTR_OFFSET);

    }
    else
    {
        return 1;
    }
    IPF_PRINT("============================\n");
    IPF_PRINT("ͨ�� ״̬:            0x%x\n", u32status);
    IPF_PRINT("BD ���:            %d\n", u32BdqDepth);
    IPF_PRINT("BD дָ��:          %d\n", u32BdqWptr);
    IPF_PRINT("BD ��ָ��:          %d\n", u32BdqRptr);
    IPF_PRINT("BD д��ַ:          0x%x\n", u32BdqWaddr);
    IPF_PRINT("BD ����ַ:          0x%x\n", u32BdqRaddr);
    IPF_PRINT("RD ���:            %d\n", u32RdqDepth);
    IPF_PRINT("RD ��ָ��:          %d\n", u32RdqRptr);
    IPF_PRINT("RD дָ��:          %d\n", u32RdqWptr);
    IPF_PRINT("RD ����ַ:          0x%x\n", u32RdqRaddr);
    IPF_PRINT("RD д��ַ:          0x%x\n", u32RdqWaddr);
    IPF_PRINT("AD0 ��ָ��:          %d\n", u32Adq0Rptr);
    IPF_PRINT("AD0 дָ��:          %d\n", u32Adq0Wptr);
    IPF_PRINT("AD1 ��ָ��:          %d\n", u32Adq1Rptr);
    IPF_PRINT("AD1 дָ��:          %d\n", u32Adq1Wptr);
    IPF_PRINT("============================\n");
    return 0;
}

static void ipf_get_shared_ddr(void)
{
/*
	ipf_ddr_t *ddr_info;
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();

	ddr_info = &g_ipf_ctx.status->share_ddr_info;
	ddr_info->start = SHM_OFFSET_IPF;
	ddr_info->ul_start = sm->ubd;//IPF_ULBD_MEM_ADDR;
	ddr_info->filter_pwc_start = sm->filter;//IPF_PWRCTL_BASIC_FILTER_ADDR;
	ddr_info->pwc_info_start = sm->status//IPF_PWRCTL_INFO_ADDR;
	ddr_info->dlcdrptr = sm->dcd_rptr;//IPF_DLCDRPTR_MEM_ADDR;
	ddr_info->end = sm->bottom;
	ddr_info->len = sm->bottom - sm->dbd;*/
}

void bsp_ipf_mem(void)
{
	ipf_ddr_t *ddr_info;
	unsigned int dl_start;// = IPF_DLBD_MEM_ADDR;
	struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
	dl_start = sm->dbd;
	ipf_get_shared_ddr();
	ddr_info= &g_ipf_ctx.status->share_ddr_info;
	
	
	IPF_PRINT("IPF Shared DDR information:\n");
	IPF_PRINT("start                 0x%x \n", ddr_info->start);
	IPF_PRINT("ul_start              0x%x \n", ddr_info->ul_start);
	IPF_PRINT("dl_start              0x%x \n", dl_start);
	IPF_PRINT("filter_pwc_start      0x%x \n", ddr_info->filter_pwc_start);
	IPF_PRINT("pwc_info_start        0x%x \n", ddr_info->pwc_info_start);
	IPF_PRINT("dlcdrptr              0x%x \n", ddr_info->dlcdrptr);
	IPF_PRINT("debug_dlcd_start      0x%x \n", ddr_info->debug_dlcd_start);
	IPF_PRINT("debug_dlcd_size       0x%x \n", ddr_info->debug_dlcd_size);
	IPF_PRINT("end                   0x%x \n", ddr_info->end);
	IPF_PRINT("len(The max:0x10000)  0x%x \n", ddr_info->len);
/*
    IPF_PRINT("=======================================\n");
    IPF_PRINT("   bsp_ipf_mem          ADDR            SIZE\n");
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_ULBD_MEM_ADDR    ", IPF_ULBD_MEM_ADDR, (unsigned long)IPF_ULBD_MEM_SIZE);
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_ULRD_MEM_ADDR    ", IPF_ULRD_MEM_ADDR, (unsigned long)IPF_ULRD_MEM_SIZE);
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_DLBD_MEM_ADDR    ", IPF_DLBD_MEM_ADDR, (unsigned long)IPF_DLBD_MEM_SIZE);
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_DLRD_MEM_ADDR    ", IPF_DLRD_MEM_ADDR, (unsigned long)IPF_DLRD_MEM_SIZE);
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_DLCD_MEM_ADDR    ", IPF_DLCD_MEM_ADDR, (unsigned long)IPF_DLCD_MEM_SIZE);
    IPF_PRINT("%s%lx\t\t%d\n", "IPF_INIT_ADDR        ", IPF_INIT_ADDR, IPF_INIT_SIZE);
    IPF_PRINT("%s%lx\t\t%lu\n", "IPF_DEBUG_INFO_ADDR  ", IPF_DEBUG_INFO_ADDR, (unsigned long)IPF_DEBUG_INFO_SIZE);
*/
}

void ipf_enable_dl_time_stamp(int en)
{
	g_ipf_ctx.status->timestamp_en = en;
    return;
}

void ipf_enable_rd_rate(int en)
{
	g_ipf_ctx.status->rate_en = en;
    return;
}

void ipf_clear_time_stamp(void)
{
    IPF_TIMESTAMP_INFO_S* stamp_info = &g_ipf_ctx.timestamp;

    memset(stamp_info, 0, sizeof(IPF_TIMESTAMP_INFO_S));/*[false alarm]:fortify*/
    return;
}

static inline
unsigned int ipf_calc_percent(unsigned int value, unsigned int sum)
{
    if (0 == sum) {
        return 0;
    }
    return (value * 100 / sum);
}

void ipf_dump_time_stamp(void)
{
    IPF_TIMESTAMP_INFO_S* stamp_info = &g_ipf_ctx.timestamp;
    unsigned int tmp = 0;
    int i;

    printk(" max diff:%u(%uus)\n",
              stamp_info->diff_max, stamp_info->diff_max*10/192);
    printk(" sum diff:%u(%uus)\n",
              stamp_info->diff_sum, stamp_info->diff_max/19);

    if (stamp_info->cnt_sum) {
        tmp = stamp_info->diff_sum / stamp_info->cnt_sum;
    }

    printk(" avg diff:%u(%uus)\n", tmp, tmp*10/192);

    for (i = 0; i < IPF_MAX_STAMP_ORDER; i++) {
        tmp = ipf_calc_percent(stamp_info->diff_order_cnt[i], stamp_info->cnt_sum);
        printk(" diff time (%u~%u) (%uus~%uus) count:%u (%u %%)\n",
            (0x80000000 >> (31-i)),
            (0xFFFFFFFF >> (31-i)),
            (0x80000000 >> (31-i))/19,
            (0xFFFFFFFF >> (31-i))/19,
            stamp_info->diff_order_cnt[i], tmp);
    }
    return;
}

struct ipf_mannul_unit ipf_mannul[] = {
    {SYMBOL(bsp_ipf_show_status),   "�޲��� ��ʾ IPF������Ϣ\n"},
    {SYMBOL(bsp_ipf_info),      "����1:ͨ������  0Ϊ���У�1Ϊ����\n"},
    {SYMBOL(bsp_ipf_bdinfo),    "����1:ͨ������  ����2:BDָ��\n"},
    {SYMBOL(bsp_ipf_rdinfo),    "����1:ͨ������  ����2:RDָ��\n"},
    {SYMBOL(bsp_ipf_adinfo),    "����1:ͨ������  ����2:ADָ�����3:AD ��������0Ϊ��,1Ϊ��\n"},
    {SYMBOL(bsp_ipf_dump_bdinfo),   "����1:ͨ������\n"},
    {SYMBOL(bsp_ipf_dump_rdinfo),   "����1:ͨ������\n"},
    {SYMBOL(bsp_ipf_dump_adinfo),   "����1:ͨ������\n"},
    {SYMBOL(ipf_enable_dl_time_stamp),  "����1:0-disable, 1-enable\n"},
    {SYMBOL(ipf_clear_time_stamp),  "���ʵ�ʴ���¼\n"},
    {SYMBOL(ipf_dump_time_stamp),   "Linux:����ʱ���, vxWorks:����ʱ���\n"},
    {SYMBOL(bsp_ipf_mem),   "�޲�������ʾ IPF�ڴ���Ϣ"},
    {SYMBOL(ipf_enable_rd_rate),    "����1:0-disable, 1-enable\n"},
    {SYMBOL(ipf_enable_dl_time_stamp),    "����1:0-disable, 1-enable\n"},
    {SYMBOL(ipf_clear_time_stamp),  "�޲��� ���ʱ�����Ϣ"},
    {SYMBOL(ipf_dump_time_stamp),  "�޲��� ��ʾʱ�����Ϣ"},
};

void ipf_help(void)
{
    int i;

    for(i=0;i<sizeof(ipf_mannul)/sizeof(ipf_mannul[0]);i++)
    {
        IPF_PRINT(ipf_mannul[0].name,"\t",ipf_mannul[0].desc,"\n");
    }
}

