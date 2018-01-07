#ifndef __SOC_UCE_INFO_PACK_INTERFACE_H__
#define __SOC_UCE_INFO_PACK_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ADDR(base) ((base) + (0x000))
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_ADDR(base) ((base) + (0x004))
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_1_ADDR(base) ((base) + (0x008))
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_2_ADDR(base) ((base) + (0x00C))
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_3_ADDR(base) ((base) + (0x010))
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_H_ADDR(base) ((base) + (0x014))
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_L_ADDR(base) ((base) + (0x018))
#define SOC_UCE_INFO_PACK_UINFO_STAT_ADDR(base) ((base) + (0x01C))
#define SOC_UCE_INFO_PACK_UINFO_WLRL_CFG_ADDR(base) ((base) + (0x020))
#define SOC_UCE_INFO_PACK_UINFO_CA_TIMEOUT_ADDR(base) ((base) + (0x024))
#define SOC_UCE_INFO_PACK_UINFO_BACKFORCE_NUM_ADDR(base) ((base) + (0x028))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_0_ADDR(base) ((base) + (0x02C))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_1_ADDR(base) ((base) + (0x030))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_2_ADDR(base) ((base) + (0x034))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_3_ADDR(base) ((base) + (0x038))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_4_ADDR(base) ((base) + (0x03C))
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_01_ADDR(base) ((base) + (0x040))
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_12_ADDR(base) ((base) + (0x044))
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_23_ADDR(base) ((base) + (0x048))
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_34_ADDR(base) ((base) + (0x04C))
#define SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_ADDR(base) ((base) + (0x050))
#define SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_ADDR(base) ((base) + (0x054))
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_ADDR(base) ((base) + (0x058))
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_ADDR(base) ((base) + (0x05C))
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_ADDR(base) ((base) + (0x060))
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ACT_ADDR(base) ((base) + (0x064))
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_RW_ADDR(base) ((base) + (0x068))
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ABP_ADDR(base) ((base) + (0x06C))
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_PBP_ADDR(base) ((base) + (0x070))
#define SOC_UCE_INFO_PACK_UINFO_ADDR_LOSE_CNT_ADDR(base) ((base) + (0x74))
#define SOC_UCE_INFO_PACK_UINFO_RSV_CTRL_ADDR(base) ((base) + (0x78))
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_ADDR(base) ((base) + (0x7C))
#define SOC_UCE_INFO_PACK_UINFO_START_ADDR_ADDR(base) ((base) + (0x100))
#define SOC_UCE_INFO_PACK_UINFO_END_ADDR_ADDR(base) ((base) + (0x104))
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_ADDR(base) ((base) + (0x108))
#define SOC_UCE_INFO_PACK_UINFO_CFG_ADDR_ADDR(base) ((base) + (0x10C))
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_ADDR(base) ((base) + (0x110))
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_ADDR(base) ((base) + (0x114))
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_ADDR(base) ((base) + (0x118))
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_ADDR(base) ((base) + (0x11C))
#define SOC_UCE_INFO_PACK_UINFO_FRM_LVL_CFG_ADDR(base) ((base) + (0x120))
#define SOC_UCE_INFO_PACK_UINFO_FRM_SIZE_ADDR(base) ((base) + (0x124))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int init_train_en : 1;
        unsigned int re_train_en : 1;
        unsigned int fast_train_en : 1;
        unsigned int ddr_stchange_en : 1;
        unsigned int ddr_sr_en : 1;
        unsigned int ddr_pwrdn_en : 1;
        unsigned int ddr_pattern_en : 1;
        unsigned int ddr_pwrdn_time_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_DBG_EN_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_init_train_en_START (0)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_init_train_en_END (0)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_re_train_en_START (1)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_re_train_en_END (1)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_fast_train_en_START (2)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_fast_train_en_END (2)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_stchange_en_START (3)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_stchange_en_END (3)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_sr_en_START (4)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_sr_en_END (4)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pwrdn_en_START (5)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pwrdn_en_END (5)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pattern_en_START (6)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pattern_en_END (6)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pwrdn_time_en_START (7)
#define SOC_UCE_INFO_PACK_UINFO_DBG_EN_ddr_pwrdn_time_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int serviceid_info : 16;
        unsigned int sessionid_info : 8;
        unsigned int msgtype_info : 8;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_serviceid_info_START (0)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_serviceid_info_END (15)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_sessionid_info_START (16)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_sessionid_info_END (23)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_msgtype_info_START (24)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_0_msgtype_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_id : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_1_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_1_trans_id_START (0)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_1_trans_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_id : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_2_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_2_bbp_id_START (0)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_2_bbp_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int magic_id : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_3_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_3_magic_id_START (0)
#define SOC_UCE_INFO_PACK_UINFO_HEAD_INFO_3_magic_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timestamp_h : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_H_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_H_timestamp_h_START (0)
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_H_timestamp_h_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timestamp_l : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_L_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_L_timestamp_l_START (0)
#define SOC_UCE_INFO_PACK_UINFO_TIMESTAMP_L_timestamp_l_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_id : 2;
        unsigned int reserved_0 : 2;
        unsigned int frame_error : 1;
        unsigned int ahb_error : 1;
        unsigned int reserved_1 : 2;
        unsigned int ca_gap_timeout : 1;
        unsigned int wren_p0_diff : 1;
        unsigned int wren_p1_diff : 1;
        unsigned int wren_p0p1_diff : 1;
        unsigned int reserved_2 : 20;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_STAT_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_STAT_uce_id_START (0)
#define SOC_UCE_INFO_PACK_UINFO_STAT_uce_id_END (1)
#define SOC_UCE_INFO_PACK_UINFO_STAT_frame_error_START (4)
#define SOC_UCE_INFO_PACK_UINFO_STAT_frame_error_END (4)
#define SOC_UCE_INFO_PACK_UINFO_STAT_ahb_error_START (5)
#define SOC_UCE_INFO_PACK_UINFO_STAT_ahb_error_END (5)
#define SOC_UCE_INFO_PACK_UINFO_STAT_ca_gap_timeout_START (8)
#define SOC_UCE_INFO_PACK_UINFO_STAT_ca_gap_timeout_END (8)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p0_diff_START (9)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p0_diff_END (9)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p1_diff_START (10)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p1_diff_END (10)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p0p1_diff_START (11)
#define SOC_UCE_INFO_PACK_UINFO_STAT_wren_p0p1_diff_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uce_wlrl_cfg : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_WLRL_CFG_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_WLRL_CFG_uce_wlrl_cfg_START (0)
#define SOC_UCE_INFO_PACK_UINFO_WLRL_CFG_uce_wlrl_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ca_timeout : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CA_TIMEOUT_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CA_TIMEOUT_ca_timeout_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CA_TIMEOUT_ca_timeout_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backforce_num : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_BACKFORCE_NUM_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_BACKFORCE_NUM_backforce_num_START (0)
#define SOC_UCE_INFO_PACK_UINFO_BACKFORCE_NUM_backforce_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufinfo_addr_pattn0 : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_0_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_0_ufinfo_addr_pattn0_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_0_ufinfo_addr_pattn0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufinfo_addr_pattn1 : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_1_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_1_ufinfo_addr_pattn1_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_1_ufinfo_addr_pattn1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufinfo_addr_pattn2 : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_2_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_2_ufinfo_addr_pattn2_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_2_ufinfo_addr_pattn2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufinfo_addr_pattn3 : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_3_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_3_ufinfo_addr_pattn3_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_3_ufinfo_addr_pattn3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufinfo_addr_pattn4 : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_4_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_4_ufinfo_addr_pattn4_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_PATTN_4_ufinfo_addr_pattn4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_ca_time01 : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CA_TIME_01_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_01_uinfo_ca_time01_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_01_uinfo_ca_time01_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_ca_time12 : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CA_TIME_12_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_12_uinfo_ca_time12_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_12_uinfo_ca_time12_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_ca_time23 : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CA_TIME_23_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_23_uinfo_ca_time23_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_23_uinfo_ca_time23_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_ca_time34 : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CA_TIME_34_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_34_uinfo_ca_time34_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CA_TIME_34_uinfo_ca_time34_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_rank : 2;
        unsigned int reserved_0: 2;
        unsigned int addr_num : 3;
        unsigned int reserved_1: 25;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_addr_rank_START (0)
#define SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_addr_rank_END (1)
#define SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_addr_num_START (4)
#define SOC_UCE_INFO_PACK_UINFO_PATTN_CFG_addr_num_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int in_dfs_sel : 1;
        unsigned int addr_bl_sel : 1;
        unsigned int reserved_1 : 29;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_in_dfs_sel_START (1)
#define SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_in_dfs_sel_END (1)
#define SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_addr_bl_sel_START (2)
#define SOC_UCE_INFO_PACK_UINFO_DBG_CTRL_addr_bl_sel_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wren_p00_num : 4;
        unsigned int wren_p01_num : 4;
        unsigned int wren_p10_num : 4;
        unsigned int wren_p11_num : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_DLY_WREN_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p00_num_START (0)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p00_num_END (3)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p01_num_START (4)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p01_num_END (7)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p10_num_START (8)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p10_num_END (11)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p11_num_START (12)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WREN_wren_p11_num_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdm_p00_num : 4;
        unsigned int wdm_p01_num : 4;
        unsigned int wdm_p02_num : 4;
        unsigned int wdm_p03_num : 4;
        unsigned int wdm_p10_num : 4;
        unsigned int wdm_p11_num : 4;
        unsigned int wdm_p12_num : 4;
        unsigned int wdm_p13_num : 4;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_DLY_WDM_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p00_num_START (0)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p00_num_END (3)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p01_num_START (4)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p01_num_END (7)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p02_num_START (8)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p02_num_END (11)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p03_num_START (12)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p03_num_END (15)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p10_num_START (16)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p10_num_END (19)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p11_num_START (20)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p11_num_END (23)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p12_num_START (24)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p12_num_END (27)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p13_num_START (28)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDM_wdm_p13_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata_p00_num : 4;
        unsigned int wdata_p01_num : 4;
        unsigned int wdata_p02_num : 4;
        unsigned int wdata_p03_num : 4;
        unsigned int wdata_p10_num : 4;
        unsigned int wdata_p11_num : 4;
        unsigned int wdata_p12_num : 4;
        unsigned int wdata_p13_num : 4;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p00_num_START (0)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p00_num_END (3)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p01_num_START (4)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p01_num_END (7)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p02_num_START (8)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p02_num_END (11)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p03_num_START (12)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p03_num_END (15)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p10_num_START (16)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p10_num_END (19)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p11_num_START (20)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p11_num_END (23)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p12_num_START (24)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p12_num_END (27)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p13_num_START (28)
#define SOC_UCE_INFO_PACK_UINFO_DLY_WDATA_wdata_p13_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_act : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ACT_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ACT_base_addr_act_START (0)
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ACT_base_addr_act_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_rw : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_RW_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_RW_base_addr_rw_START (0)
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_RW_base_addr_rw_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_abp : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ABP_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ABP_base_addr_abp_START (0)
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_ABP_base_addr_abp_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_pbp : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_PBP_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_PBP_base_addr_pbp_START (0)
#define SOC_UCE_INFO_PACK_UINFO_BASE_ADDR_PBP_base_addr_pbp_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int secne7_addr_rw_mismatch_num : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_ADDR_LOSE_CNT_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_ADDR_LOSE_CNT_secne7_addr_rw_mismatch_num_START (0)
#define SOC_UCE_INFO_PACK_UINFO_ADDR_LOSE_CNT_secne7_addr_rw_mismatch_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sample_ctrl_reserved : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_RSV_CTRL_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_RSV_CTRL_sample_ctrl_reserved_START (0)
#define SOC_UCE_INFO_PACK_UINFO_RSV_CTRL_sample_ctrl_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sdr_mode : 1;
        unsigned int err_s4flag_reqpos : 1;
        unsigned int err_donepos_cavalid : 1;
        unsigned int err_ca2tchg_canofinish : 1;
        unsigned int err_rank0_cke_posneg : 1;
        unsigned int err_rank1_cke_posneg : 1;
        unsigned int err_rank01_cke_ca : 1;
        unsigned int err_s58_rwactive : 1;
        unsigned int s7_sample_data_num : 4;
        unsigned int wrg_wlrl_dvalid : 1;
        unsigned int sample_state_reserved : 19;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_RSV_STATE_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_sdr_mode_START (0)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_sdr_mode_END (0)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_s4flag_reqpos_START (1)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_s4flag_reqpos_END (1)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_donepos_cavalid_START (2)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_donepos_cavalid_END (2)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_ca2tchg_canofinish_START (3)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_ca2tchg_canofinish_END (3)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank0_cke_posneg_START (4)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank0_cke_posneg_END (4)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank1_cke_posneg_START (5)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank1_cke_posneg_END (5)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank01_cke_ca_START (6)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_rank01_cke_ca_END (6)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_s58_rwactive_START (7)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_err_s58_rwactive_END (7)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_s7_sample_data_num_START (8)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_s7_sample_data_num_END (11)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_wrg_wlrl_dvalid_START (12)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_wrg_wlrl_dvalid_END (12)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_sample_state_reserved_START (13)
#define SOC_UCE_INFO_PACK_UINFO_RSV_STATE_sample_state_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_start_addr : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_START_ADDR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_START_ADDR_uinfo_start_addr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_START_ADDR_uinfo_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_end_addr : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_END_ADDR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_END_ADDR_uinfo_end_addr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_END_ADDR_uinfo_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int afifo_wfull : 1;
        unsigned int afifo_wafull : 1;
        unsigned int afifo_whfull : 1;
        unsigned int afifo_wempty : 1;
        unsigned int afifo_waempty : 1;
        unsigned int afifo_werror : 1;
        unsigned int reserved_0 : 2;
        unsigned int afifo_rfull : 1;
        unsigned int afifo_rafull : 1;
        unsigned int afifo_rhfull : 1;
        unsigned int afifo_rempty : 1;
        unsigned int afifo_raempty : 1;
        unsigned int afifo_rerror : 1;
        unsigned int reserved_1 : 2;
        unsigned int arfifo_cnt : 7;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wfull_START (0)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wfull_END (0)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wafull_START (1)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wafull_END (1)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_whfull_START (2)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_whfull_END (2)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wempty_START (3)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_wempty_END (3)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_waempty_START (4)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_waempty_END (4)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_werror_START (5)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_werror_END (5)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rfull_START (8)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rfull_END (8)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rafull_START (9)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rafull_END (9)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rhfull_START (10)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rhfull_END (10)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rempty_START (11)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rempty_END (11)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_raempty_START (12)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_raempty_END (12)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rerror_START (13)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_afifo_rerror_END (13)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_arfifo_cnt_START (16)
#define SOC_UCE_INFO_PACK_UINFO_FIFO_STAT_arfifo_cnt_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uinfo_cfg_addr : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_CFG_ADDR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_CFG_ADDR_uinfo_cfg_addr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_CFG_ADDR_uinfo_cfg_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int info_trans_end_raw_intr : 1;
        unsigned int info_frm_lvl_raw_intr : 1;
        unsigned int info_frm_ovr_raw_intr : 1;
        unsigned int fifo_error_raw_intr : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_RAW_INTR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_trans_end_raw_intr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_trans_end_raw_intr_END (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_frm_lvl_raw_intr_START (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_frm_lvl_raw_intr_END (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_frm_ovr_raw_intr_START (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_info_frm_ovr_raw_intr_END (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_fifo_error_raw_intr_START (3)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_fifo_error_raw_intr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int info_trans_end_raw_intr_msk : 1;
        unsigned int info_frm_lvl_raw_intr_msk : 1;
        unsigned int info_frm_ovr_raw_intr_msk : 1;
        unsigned int fifo_error_raw_intr_mask : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_trans_end_raw_intr_msk_START (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_trans_end_raw_intr_msk_END (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_frm_lvl_raw_intr_msk_START (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_frm_lvl_raw_intr_msk_END (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_frm_ovr_raw_intr_msk_START (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_info_frm_ovr_raw_intr_msk_END (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_fifo_error_raw_intr_mask_START (3)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_MSK_fifo_error_raw_intr_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int info_trans_end_raw_intr_clr : 1;
        unsigned int info_frm_lvl_raw_intr_clr : 1;
        unsigned int info_frm_ovr_raw_intr_clr : 1;
        unsigned int fifo_error_raw_intr_clr : 1;
        unsigned int reserved_0 : 4;
        unsigned int cfg_cnt_rst : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_trans_end_raw_intr_clr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_trans_end_raw_intr_clr_END (0)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_frm_lvl_raw_intr_clr_START (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_frm_lvl_raw_intr_clr_END (1)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_frm_ovr_raw_intr_clr_START (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_info_frm_ovr_raw_intr_clr_END (2)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_fifo_error_raw_intr_clr_START (3)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_fifo_error_raw_intr_clr_END (3)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_cfg_cnt_rst_START (8)
#define SOC_UCE_INFO_PACK_UINFO_RAW_INTR_CLR_cfg_cnt_rst_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int info_trans_end_msk_intr : 1;
        unsigned int info_frm_lvl_msk_intr : 1;
        unsigned int info_frm_ovr_msk_intr : 1;
        unsigned int fifo_error_msk_intr : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_MSK_INTR_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_trans_end_msk_intr_START (0)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_trans_end_msk_intr_END (0)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_frm_lvl_msk_intr_START (1)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_frm_lvl_msk_intr_END (1)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_frm_ovr_msk_intr_START (2)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_info_frm_ovr_msk_intr_END (2)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_fifo_error_msk_intr_START (3)
#define SOC_UCE_INFO_PACK_UINFO_MSK_INTR_fifo_error_msk_intr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int info_frm_lvl_cfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_FRM_LVL_CFG_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_FRM_LVL_CFG_info_frm_lvl_cfg_START (0)
#define SOC_UCE_INFO_PACK_UINFO_FRM_LVL_CFG_info_frm_lvl_cfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ufino_frm_size : 32;
    } reg;
} SOC_UCE_INFO_PACK_UINFO_FRM_SIZE_UNION;
#endif
#define SOC_UCE_INFO_PACK_UINFO_FRM_SIZE_ufino_frm_size_START (0)
#define SOC_UCE_INFO_PACK_UINFO_FRM_SIZE_ufino_frm_size_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
