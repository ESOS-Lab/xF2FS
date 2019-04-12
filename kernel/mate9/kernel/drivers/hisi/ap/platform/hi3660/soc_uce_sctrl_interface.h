#ifndef __SOC_UCE_SCTRL_INTERFACE_H__
#define __SOC_UCE_SCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_ADDR(base) ((base) + (0x000))
#define SOC_UCE_SCTRL_UCE_M3_STAT_ADDR(base) ((base) + (0x004))
#define SOC_UCE_SCTRL_UCE_M3_STCALIB_ADDR(base) ((base) + (0x008))
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_ADDR(base) ((base) + (0x00C))
#define SOC_UCE_SCTRL_UCE_PROG_CTRL_ADDR(base) ((base) + (0x010))
#define SOC_UCE_SCTRL_UCE_PROG_STAT_ADDR(base) ((base) + (0x014))
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_ADDR(base) ((base) + (0x100))
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_ADDR(base) ((base) + (0x104))
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_ADDR(base) ((base) + (0x108))
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_ADDR(base) ((base) + (0x10C))
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_ADDR(base) ((base) + (0x110))
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_ADDR(base) ((base) + (0x114))
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_ADDR(base) ((base) + (0x118))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_m3_mpudisable : 1;
        unsigned int uce_m3_soft_nmi : 1;
        unsigned int uce_wdg_resreq_bypass : 1;
        unsigned int uce_m3_sysresetreq_en : 1;
        unsigned int stclken_bypass : 1;
        unsigned int wdgclken_bypass : 1;
        unsigned int timclken_bypass : 1;
        unsigned int halt_bypass : 1;
        unsigned int uce_m3_idle_en : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_UCE_SCTRL_UCE_M3_SCTRL_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_mpudisable_START (0)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_mpudisable_END (0)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_soft_nmi_START (1)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_soft_nmi_END (1)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_wdg_resreq_bypass_START (2)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_wdg_resreq_bypass_END (2)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_sysresetreq_en_START (3)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_sysresetreq_en_END (3)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_stclken_bypass_START (4)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_stclken_bypass_END (4)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_wdgclken_bypass_START (5)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_wdgclken_bypass_END (5)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_timclken_bypass_START (6)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_timclken_bypass_END (6)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_halt_bypass_START (7)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_halt_bypass_END (7)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_idle_en_START (8)
#define SOC_UCE_SCTRL_UCE_M3_SCTRL_uce_m3_idle_en_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_m3_sysresetreq_sign_out_stat : 1;
        unsigned int uce_m3_sleeping : 1;
        unsigned int uce_m3_lockup : 1;
        unsigned int uce_m3_halted : 1;
        unsigned int uinfo_dbg_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int uce_rtactive_intr : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_UCE_SCTRL_UCE_M3_STAT_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_sysresetreq_sign_out_stat_START (0)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_sysresetreq_sign_out_stat_END (0)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_sleeping_START (1)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_sleeping_END (1)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_lockup_START (2)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_lockup_END (2)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_halted_START (3)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_m3_halted_END (3)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uinfo_dbg_en_START (4)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uinfo_dbg_en_END (4)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_rtactive_intr_START (8)
#define SOC_UCE_SCTRL_UCE_M3_STAT_uce_rtactive_intr_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_m3_dbgen : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_UCE_SCTRL_UCE_M3_STCALIB_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_M3_STCALIB_sc_m3_dbgen_START (0)
#define SOC_UCE_SCTRL_UCE_M3_STCALIB_sc_m3_dbgen_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_m3_spsram_rt_sel : 2;
        unsigned int uce_m3_spsram_wt_sel : 2;
        unsigned int reserved_0 : 12;
        unsigned int uce_m3_mem_ctrl_s0 : 3;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_UCE_SCTRL_UCE_M3_MEMCTRL_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_spsram_rt_sel_START (0)
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_spsram_rt_sel_END (1)
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_spsram_wt_sel_START (2)
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_spsram_wt_sel_END (3)
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_mem_ctrl_s0_START (16)
#define SOC_UCE_SCTRL_UCE_M3_MEMCTRL_uce_m3_mem_ctrl_s0_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_prog_ctrl : 32;
    } reg;
} SOC_UCE_SCTRL_UCE_PROG_CTRL_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_PROG_CTRL_uce_prog_ctrl_START (0)
#define SOC_UCE_SCTRL_UCE_PROG_CTRL_uce_prog_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_prog_stat : 8;
        unsigned int dfi_phyupd_req_en : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_UCE_SCTRL_UCE_PROG_STAT_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_PROG_STAT_uce_prog_stat_START (0)
#define SOC_UCE_SCTRL_UCE_PROG_STAT_uce_prog_stat_END (7)
#define SOC_UCE_SCTRL_UCE_PROG_STAT_dfi_phyupd_req_en_START (8)
#define SOC_UCE_SCTRL_UCE_PROG_STAT_dfi_phyupd_req_en_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_ucem3_hclk_en : 1;
        unsigned int gt_ucem3_dapclk_en : 1;
        unsigned int gt_clk_h2hbrg_m_en : 1;
        unsigned int gt_clk_ipc_en : 1;
        unsigned int gt_pclk_uart_en : 1;
        unsigned int gt_clk_uart_en : 1;
        unsigned int gt_clk_timer_en : 1;
        unsigned int gt_clk_wdg_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_GT_EN_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_ucem3_hclk_en_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_ucem3_hclk_en_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_ucem3_dapclk_en_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_ucem3_dapclk_en_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_h2hbrg_m_en_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_h2hbrg_m_en_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_ipc_en_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_ipc_en_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_pclk_uart_en_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_pclk_uart_en_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_uart_en_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_uart_en_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_timer_en_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_timer_en_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_wdg_en_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_GT_EN_gt_clk_wdg_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_ucem3_hclk_dis : 1;
        unsigned int gt_ucem3_dapclk_dis : 1;
        unsigned int gt_clk_h2hbrg_m_dis : 1;
        unsigned int gt_clk_ipc_dis : 1;
        unsigned int gt_pclk_uart_dis : 1;
        unsigned int gt_clk_uart_dis : 1;
        unsigned int gt_clk_timer_dis : 1;
        unsigned int gt_clk_wdg_dis : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_GT_DIS_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_ucem3_hclk_dis_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_ucem3_hclk_dis_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_ucem3_dapclk_dis_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_ucem3_dapclk_dis_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_h2hbrg_m_dis_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_h2hbrg_m_dis_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_ipc_dis_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_ipc_dis_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_pclk_uart_dis_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_pclk_uart_dis_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_uart_dis_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_uart_dis_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_timer_dis_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_timer_dis_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_wdg_dis_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_GT_DIS_gt_clk_wdg_dis_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_ucem3_hclk_stat : 1;
        unsigned int gt_ucem3_dapclk_stat : 1;
        unsigned int gt_clk_h2hbrg_m_stat : 1;
        unsigned int gt_clk_ipc_stat : 1;
        unsigned int gt_pclk_uart_stat : 1;
        unsigned int gt_clk_uart_stat : 1;
        unsigned int gt_clk_timer_stat : 1;
        unsigned int gt_clk_wdg_stat : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_GT_STAT_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_ucem3_hclk_stat_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_ucem3_hclk_stat_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_ucem3_dapclk_stat_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_ucem3_dapclk_stat_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_h2hbrg_m_stat_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_h2hbrg_m_stat_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_ipc_stat_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_ipc_stat_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_pclk_uart_stat_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_pclk_uart_stat_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_uart_stat_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_uart_stat_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_timer_stat_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_timer_stat_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_wdg_stat_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_GT_STAT_gt_clk_wdg_stat_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_ucem3_hclk : 1;
        unsigned int st_ucem3_dapclk : 1;
        unsigned int st_clk_h2hbrg_m : 1;
        unsigned int st_clk_ipc : 1;
        unsigned int st_pclk_uart : 1;
        unsigned int st_clk_uart : 1;
        unsigned int st_clk_timer : 1;
        unsigned int st_clk_timer_p2p_s : 1;
        unsigned int st_clk_wdg : 1;
        unsigned int st_clk_wdg_p2p_s : 1;
        unsigned int st_clk_uce_info : 1;
        unsigned int st_clk_dfi_info : 1;
        unsigned int st_clk_s2p_19p2 : 1;
        unsigned int st_clk_s2p_bus : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_ucem3_hclk_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_ucem3_hclk_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_ucem3_dapclk_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_ucem3_dapclk_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_h2hbrg_m_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_h2hbrg_m_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_ipc_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_ipc_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_pclk_uart_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_pclk_uart_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_uart_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_uart_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_timer_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_timer_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_timer_p2p_s_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_timer_p2p_s_END (7)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_wdg_START (8)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_wdg_END (8)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_wdg_p2p_s_START (9)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_wdg_p2p_s_END (9)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_uce_info_START (10)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_uce_info_END (10)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_dfi_info_START (11)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_dfi_info_END (11)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_s2p_19p2_START (12)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_s2p_19p2_END (12)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_s2p_bus_START (13)
#define SOC_UCE_SCTRL_UCE_CRG_CLK_STAT_st_clk_s2p_bus_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_ucem3_sysreset_req_en : 1;
        unsigned int rst_uce_cssys_rst_req_en : 1;
        unsigned int rst_ipc_req_en : 1;
        unsigned int rst_uart_req_en : 1;
        unsigned int rst_wdg_req_en : 1;
        unsigned int rst_wdg_p2p_s_req_en : 1;
        unsigned int rst_timer_req_en : 1;
        unsigned int rst_timer_p2p_s_req_en : 1;
        unsigned int rst_h2hbrg_m_req_en : 1;
        unsigned int rst_info_pack_req_en : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_RST_EN_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_ucem3_sysreset_req_en_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_ucem3_sysreset_req_en_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_uce_cssys_rst_req_en_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_uce_cssys_rst_req_en_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_ipc_req_en_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_ipc_req_en_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_uart_req_en_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_uart_req_en_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_wdg_req_en_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_wdg_req_en_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_wdg_p2p_s_req_en_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_wdg_p2p_s_req_en_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_timer_req_en_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_timer_req_en_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_timer_p2p_s_req_en_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_timer_p2p_s_req_en_END (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_h2hbrg_m_req_en_START (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_h2hbrg_m_req_en_END (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_info_pack_req_en_START (9)
#define SOC_UCE_SCTRL_UCE_CRG_RST_EN_rst_info_pack_req_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_ucem3_sysreset_req_dis : 1;
        unsigned int rst_uce_cssys_rst_req_dis : 1;
        unsigned int rst_ipc_req_dis : 1;
        unsigned int rst_uart_req_dis : 1;
        unsigned int rst_wdg_req_dis : 1;
        unsigned int rst_wdg_p2p_s_req_dis : 1;
        unsigned int rst_timer_req_dis : 1;
        unsigned int rst_timer_p2p_s_req_dis : 1;
        unsigned int rst_h2hbrg_m_req_dis : 1;
        unsigned int rst_info_pack_req_dis : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_RST_DIS_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_ucem3_sysreset_req_dis_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_ucem3_sysreset_req_dis_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_uce_cssys_rst_req_dis_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_uce_cssys_rst_req_dis_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_ipc_req_dis_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_ipc_req_dis_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_uart_req_dis_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_uart_req_dis_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_wdg_req_dis_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_wdg_req_dis_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_wdg_p2p_s_req_dis_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_wdg_p2p_s_req_dis_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_timer_req_dis_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_timer_req_dis_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_timer_p2p_s_req_dis_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_timer_p2p_s_req_dis_END (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_h2hbrg_m_req_dis_START (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_h2hbrg_m_req_dis_END (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_info_pack_req_dis_START (9)
#define SOC_UCE_SCTRL_UCE_CRG_RST_DIS_rst_info_pack_req_dis_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_ucem3_sysreset_req_stat : 1;
        unsigned int rst_uce_cssys_rst_req_stat : 1;
        unsigned int rst_ipc_req_stat : 1;
        unsigned int rst_uart_req_stat : 1;
        unsigned int rst_wdg_req_stat : 1;
        unsigned int rst_wdg_p2p_s_req_stat : 1;
        unsigned int rst_timer_req_stat : 1;
        unsigned int rst_timer_p2p_s_req_stat : 1;
        unsigned int rst_h2hbrg_m_req_stat : 1;
        unsigned int rst_info_pack_req_stat : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_UCE_SCTRL_UCE_CRG_RST_STAT_UNION;
#endif
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_ucem3_sysreset_req_stat_START (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_ucem3_sysreset_req_stat_END (0)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_uce_cssys_rst_req_stat_START (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_uce_cssys_rst_req_stat_END (1)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_ipc_req_stat_START (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_ipc_req_stat_END (2)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_uart_req_stat_START (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_uart_req_stat_END (3)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_wdg_req_stat_START (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_wdg_req_stat_END (4)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_wdg_p2p_s_req_stat_START (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_wdg_p2p_s_req_stat_END (5)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_timer_req_stat_START (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_timer_req_stat_END (6)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_timer_p2p_s_req_stat_START (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_timer_p2p_s_req_stat_END (7)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_h2hbrg_m_req_stat_START (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_h2hbrg_m_req_stat_END (8)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_info_pack_req_stat_START (9)
#define SOC_UCE_SCTRL_UCE_CRG_RST_STAT_rst_info_pack_req_stat_END (9)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
