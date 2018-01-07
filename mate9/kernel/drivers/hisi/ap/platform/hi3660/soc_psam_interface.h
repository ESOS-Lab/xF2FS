#ifndef __SOC_PSAM_INTERFACE_H__
#define __SOC_PSAM_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PSAM_SRST_ADDR(base) ((base) + (0x0000))
#define SOC_PSAM_CONFIG_ADDR(base) ((base) + (0x0004))
#define SOC_PSAM_VERSION_ADDR(base) ((base) + (0x0008))
#define SOC_PSAM_EN_ADDR(base) ((base) + (0x000C))
#define SOC_PSAM_INT0_STAT_ADDR(base) ((base) + (0x0040))
#define SOC_PSAM_INT1_STAT_ADDR(base) ((base) + (0x0044))
#define SOC_PSAM_INT0_MSTAT_ADDR(base) ((base) + (0x0048))
#define SOC_PSAM_INT1_MSTAT_ADDR(base) ((base) + (0x004C))
#define SOC_PSAM_INT0_MASK_ADDR(base) ((base) + (0x0050))
#define SOC_PSAM_INT1_MASK_ADDR(base) ((base) + (0x0054))
#define SOC_PSAM_CIPHER_CH_SOFTRESET_ADDR(base) ((base) + (0x0080))
#define SOC_PSAM_CIPHER_CH_EN_ADDR(base) ((base) + (0x0084))
#define SOC_PSAM_CBDQ_CONFIG_ADDR(base) ((base) + (0x0088))
#define SOC_PSAM_CBDQ_BADDR_ADDR(base) ((base) + (0x008C))
#define SOC_PSAM_CBDQ_SIZE_ADDR(base) ((base) + (0x0090))
#define SOC_PSAM_CBDQ_WPTR_ADDR(base) ((base) + (0x0094))
#define SOC_PSAM_CBDQ_STAT_ADDR(base) ((base) + (0x0098))
#define SOC_PSAM_CBDQ_WPTR_ADDR_ADDR(base) ((base) + (0x009C))
#define SOC_PSAM_CRDQ_CTRL_ADDR(base) ((base) + (0x0100))
#define SOC_PSAM_CRDQ_STAT_ADDR(base) ((base) + (0x0104))
#define SOC_PSAM_CRDQ_PTR_ADDR(base) ((base) + (0x0108))
#define SOC_PSAM_CRDQ_RPTR_ADDR_ADDR(base) ((base) + (0x010C))
#define SOC_PSAM_IBDQ_STAT_ADDR(base) ((base) + (0x0154))
#define SOC_PSAM_IBDQ_BADDR_ADDR(base) ((base) + (0x0158))
#define SOC_PSAM_IBDQ_SIZE_ADDR(base) ((base) + (0x015C))
#define SOC_PSAM_IBDQ_WPTR_ADDR(base) ((base) + (0x0160))
#define SOC_PSAM_IBDQ_RPTR_ADDR(base) ((base) + (0x0164))
#define SOC_PSAM_IBDQ_WPTR_ADDR_ADDR(base) ((base) + (0x0168))
#define SOC_PSAM_IBDQ_RPTR_ADDR_ADDR(base) ((base) + (0x016C))
#define SOC_PSAM_IBDQ_RPTR_TIMER_ADDR(base) ((base) + (0x0170))
#define SOC_PSAM_IBDQ_PKT_CNT_ADDR(base) ((base) + (0x0174))
#define SOC_PSAM_LBDQ_STAT_ADDR(base) ((base) + (0x0254))
#define SOC_PSAM_LBDQ_BADDR_ADDR(base) ((base) + (0x0258))
#define SOC_PSAM_LBDQ_SIZE_ADDR(base) ((base) + (0x025C))
#define SOC_PSAM_LBDQ_WPTR_ADDR(base) ((base) + (0x0260))
#define SOC_PSAM_LBDQ_RPTR_ADDR(base) ((base) + (0x0264))
#define SOC_PSAM_LBDQ_DEPTH_ADDR(base) ((base) + (0x0268))
#define SOC_PSAM_ADQ_CTRL_ADDR(base) ((base) + (0x0284))
#define SOC_PSAM_ADQ0_BASE_ADDR(base) ((base) + (0x0290))
#define SOC_PSAM_ADQ0_STAT_ADDR(base) ((base) + (0x0294))
#define SOC_PSAM_ADQ0_WPTR_ADDR(base) ((base) + (0x0298))
#define SOC_PSAM_ADQ0_RPTR_ADDR(base) ((base) + (0x029C))
#define SOC_PSAM_ADQ1_BASE_ADDR(base) ((base) + (0x02A0))
#define SOC_PSAM_ADQ1_STAT_ADDR(base) ((base) + (0x02A4))
#define SOC_PSAM_ADQ1_WPTR_ADDR(base) ((base) + (0x02A8))
#define SOC_PSAM_ADQ1_RPTR_ADDR(base) ((base) + (0x02AC))
#define SOC_PSAM_ADQ_PADDR_ERR_ADDR(base) ((base) + (0x02B0))
#define SOC_PSAM_ADQ_FAMA_ATTR_ADDR(base) ((base) + (0x02B4))
#define SOC_PSAM_ADQ_PADDR_STR0_ADDR(base) ((base) + (0x0300))
#define SOC_PSAM_ADQ_PADDR_END0_ADDR(base) ((base) + (0x0304))
#define SOC_PSAM_ADQ_PADDR_STR1_ADDR(base) ((base) + (0x0308))
#define SOC_PSAM_ADQ_PADDR_END1_ADDR(base) ((base) + (0x030C))
#define SOC_PSAM_ADQ_PADDR_STR2_ADDR(base) ((base) + (0x0310))
#define SOC_PSAM_ADQ_PADDR_END2_ADDR(base) ((base) + (0x0314))
#define SOC_PSAM_ADQ_PADDR_STR3_ADDR(base) ((base) + (0x0318))
#define SOC_PSAM_ADQ_PADDR_END3_ADDR(base) ((base) + (0x031C))
#define SOC_PSAM_ADQ_PADDR_CTRL_ADDR(base) ((base) + (0x0320))
#define SOC_PSAM_CBDQ_FAMA_ATTR_ADDR(base) ((base) + (0x0330))
#define SOC_PSAM_IBDQ_FAMA_ATTR_ADDR(base) ((base) + (0x0334))
#define SOC_PSAM_LBDQ_FAMA_ATTR_ADDR(base) ((base) + (0x0338))
#define SOC_PSAM_CRDQ_BADDR_ADDR(base) ((base) + (0x0400))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int psam_srst : 1;
        unsigned int psam_idle : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PSAM_SRST_UNION;
#endif
#define SOC_PSAM_SRST_psam_srst_START (0)
#define SOC_PSAM_SRST_psam_srst_END (0)
#define SOC_PSAM_SRST_psam_idle_START (1)
#define SOC_PSAM_SRST_psam_idle_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int psam_rd_pri : 3;
        unsigned int psam_wr_pri : 3;
        unsigned int cbdq_wptr_update_mode : 1;
        unsigned int cbdq_wptr_update_num : 7;
        unsigned int reserved : 2;
        unsigned int psam_cfg_rsvd : 16;
    } reg;
} SOC_PSAM_CONFIG_UNION;
#endif
#define SOC_PSAM_CONFIG_psam_rd_pri_START (0)
#define SOC_PSAM_CONFIG_psam_rd_pri_END (2)
#define SOC_PSAM_CONFIG_psam_wr_pri_START (3)
#define SOC_PSAM_CONFIG_psam_wr_pri_END (5)
#define SOC_PSAM_CONFIG_cbdq_wptr_update_mode_START (6)
#define SOC_PSAM_CONFIG_cbdq_wptr_update_mode_END (6)
#define SOC_PSAM_CONFIG_cbdq_wptr_update_num_START (7)
#define SOC_PSAM_CONFIG_cbdq_wptr_update_num_END (13)
#define SOC_PSAM_CONFIG_psam_cfg_rsvd_START (16)
#define SOC_PSAM_CONFIG_psam_cfg_rsvd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int psam_version : 32;
    } reg;
} SOC_PSAM_VERSION_UNION;
#endif
#define SOC_PSAM_VERSION_psam_version_START (0)
#define SOC_PSAM_VERSION_psam_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int psam_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PSAM_EN_UNION;
#endif
#define SOC_PSAM_EN_psam_en_START (0)
#define SOC_PSAM_EN_psam_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_int0 : 1;
        unsigned int adq1_epty_int0 : 1;
        unsigned int lbdq_epty_int0 : 1;
        unsigned int adq_p1_err_int0 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_int0 : 1;
        unsigned int adq0_upoverflow_int0 : 1;
        unsigned int adq1_upoverflow_int0 : 1;
        unsigned int lbdq_upoverflow_int0 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_int0 : 1;
        unsigned int adq0_full_int0 : 1;
        unsigned int adq1_full_int0 : 1;
        unsigned int lbdq_full_int0 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT0_STAT_UNION;
#endif
#define SOC_PSAM_INT0_STAT_adq0_epty_int0_START (0)
#define SOC_PSAM_INT0_STAT_adq0_epty_int0_END (0)
#define SOC_PSAM_INT0_STAT_adq1_epty_int0_START (1)
#define SOC_PSAM_INT0_STAT_adq1_epty_int0_END (1)
#define SOC_PSAM_INT0_STAT_lbdq_epty_int0_START (2)
#define SOC_PSAM_INT0_STAT_lbdq_epty_int0_END (2)
#define SOC_PSAM_INT0_STAT_adq_p1_err_int0_START (3)
#define SOC_PSAM_INT0_STAT_adq_p1_err_int0_END (3)
#define SOC_PSAM_INT0_STAT_rd_wbuf_overflow_int0_START (16)
#define SOC_PSAM_INT0_STAT_rd_wbuf_overflow_int0_END (16)
#define SOC_PSAM_INT0_STAT_adq0_upoverflow_int0_START (17)
#define SOC_PSAM_INT0_STAT_adq0_upoverflow_int0_END (17)
#define SOC_PSAM_INT0_STAT_adq1_upoverflow_int0_START (18)
#define SOC_PSAM_INT0_STAT_adq1_upoverflow_int0_END (18)
#define SOC_PSAM_INT0_STAT_lbdq_upoverflow_int0_START (19)
#define SOC_PSAM_INT0_STAT_lbdq_upoverflow_int0_END (19)
#define SOC_PSAM_INT0_STAT_rd_wbuf_full_int0_START (24)
#define SOC_PSAM_INT0_STAT_rd_wbuf_full_int0_END (24)
#define SOC_PSAM_INT0_STAT_adq0_full_int0_START (25)
#define SOC_PSAM_INT0_STAT_adq0_full_int0_END (25)
#define SOC_PSAM_INT0_STAT_adq1_full_int0_START (26)
#define SOC_PSAM_INT0_STAT_adq1_full_int0_END (26)
#define SOC_PSAM_INT0_STAT_lbdq_full_int0_START (27)
#define SOC_PSAM_INT0_STAT_lbdq_full_int0_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_int1 : 1;
        unsigned int adq1_epty_int1 : 1;
        unsigned int lbdq_epty_int1 : 1;
        unsigned int adq_p1_err_int1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_int1 : 1;
        unsigned int adq0_upoverflow_int1 : 1;
        unsigned int adq1_upoverflow_int1 : 1;
        unsigned int lbdq_upoverflow_int1 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_int1 : 1;
        unsigned int adq0_full_int1 : 1;
        unsigned int adq1_full_int1 : 1;
        unsigned int lbdq_full_int1 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT1_STAT_UNION;
#endif
#define SOC_PSAM_INT1_STAT_adq0_epty_int1_START (0)
#define SOC_PSAM_INT1_STAT_adq0_epty_int1_END (0)
#define SOC_PSAM_INT1_STAT_adq1_epty_int1_START (1)
#define SOC_PSAM_INT1_STAT_adq1_epty_int1_END (1)
#define SOC_PSAM_INT1_STAT_lbdq_epty_int1_START (2)
#define SOC_PSAM_INT1_STAT_lbdq_epty_int1_END (2)
#define SOC_PSAM_INT1_STAT_adq_p1_err_int1_START (3)
#define SOC_PSAM_INT1_STAT_adq_p1_err_int1_END (3)
#define SOC_PSAM_INT1_STAT_rd_wbuf_overflow_int1_START (16)
#define SOC_PSAM_INT1_STAT_rd_wbuf_overflow_int1_END (16)
#define SOC_PSAM_INT1_STAT_adq0_upoverflow_int1_START (17)
#define SOC_PSAM_INT1_STAT_adq0_upoverflow_int1_END (17)
#define SOC_PSAM_INT1_STAT_adq1_upoverflow_int1_START (18)
#define SOC_PSAM_INT1_STAT_adq1_upoverflow_int1_END (18)
#define SOC_PSAM_INT1_STAT_lbdq_upoverflow_int1_START (19)
#define SOC_PSAM_INT1_STAT_lbdq_upoverflow_int1_END (19)
#define SOC_PSAM_INT1_STAT_rd_wbuf_full_int1_START (24)
#define SOC_PSAM_INT1_STAT_rd_wbuf_full_int1_END (24)
#define SOC_PSAM_INT1_STAT_adq0_full_int1_START (25)
#define SOC_PSAM_INT1_STAT_adq0_full_int1_END (25)
#define SOC_PSAM_INT1_STAT_adq1_full_int1_START (26)
#define SOC_PSAM_INT1_STAT_adq1_full_int1_END (26)
#define SOC_PSAM_INT1_STAT_lbdq_full_int1_START (27)
#define SOC_PSAM_INT1_STAT_lbdq_full_int1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_mstat0 : 1;
        unsigned int adq1_epty_mstat0 : 1;
        unsigned int lbdq_epty_mstat0 : 1;
        unsigned int adq_p1_err_mstat0 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_mstat0 : 1;
        unsigned int adq0_upoverflow_mstat0 : 1;
        unsigned int adq1_upoverflow_mstat0 : 1;
        unsigned int lbdq_upoverflow_mstat0 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_mstat0 : 1;
        unsigned int adq0_full_mstat0 : 1;
        unsigned int adq1_full_mstat0 : 1;
        unsigned int lbdq_full_mstat0 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT0_MSTAT_UNION;
#endif
#define SOC_PSAM_INT0_MSTAT_adq0_epty_mstat0_START (0)
#define SOC_PSAM_INT0_MSTAT_adq0_epty_mstat0_END (0)
#define SOC_PSAM_INT0_MSTAT_adq1_epty_mstat0_START (1)
#define SOC_PSAM_INT0_MSTAT_adq1_epty_mstat0_END (1)
#define SOC_PSAM_INT0_MSTAT_lbdq_epty_mstat0_START (2)
#define SOC_PSAM_INT0_MSTAT_lbdq_epty_mstat0_END (2)
#define SOC_PSAM_INT0_MSTAT_adq_p1_err_mstat0_START (3)
#define SOC_PSAM_INT0_MSTAT_adq_p1_err_mstat0_END (3)
#define SOC_PSAM_INT0_MSTAT_rd_wbuf_overflow_mstat0_START (16)
#define SOC_PSAM_INT0_MSTAT_rd_wbuf_overflow_mstat0_END (16)
#define SOC_PSAM_INT0_MSTAT_adq0_upoverflow_mstat0_START (17)
#define SOC_PSAM_INT0_MSTAT_adq0_upoverflow_mstat0_END (17)
#define SOC_PSAM_INT0_MSTAT_adq1_upoverflow_mstat0_START (18)
#define SOC_PSAM_INT0_MSTAT_adq1_upoverflow_mstat0_END (18)
#define SOC_PSAM_INT0_MSTAT_lbdq_upoverflow_mstat0_START (19)
#define SOC_PSAM_INT0_MSTAT_lbdq_upoverflow_mstat0_END (19)
#define SOC_PSAM_INT0_MSTAT_rd_wbuf_full_mstat0_START (24)
#define SOC_PSAM_INT0_MSTAT_rd_wbuf_full_mstat0_END (24)
#define SOC_PSAM_INT0_MSTAT_adq0_full_mstat0_START (25)
#define SOC_PSAM_INT0_MSTAT_adq0_full_mstat0_END (25)
#define SOC_PSAM_INT0_MSTAT_adq1_full_mstat0_START (26)
#define SOC_PSAM_INT0_MSTAT_adq1_full_mstat0_END (26)
#define SOC_PSAM_INT0_MSTAT_lbdq_full_mstat0_START (27)
#define SOC_PSAM_INT0_MSTAT_lbdq_full_mstat0_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_mstat1 : 1;
        unsigned int adq1_epty_mstat1 : 1;
        unsigned int lbdq_epty_mstat1 : 1;
        unsigned int adq_p1_err_mstat1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_mstat1 : 1;
        unsigned int adq0_upoverflow_mstat1 : 1;
        unsigned int adq1_upoverflow_mstat1 : 1;
        unsigned int lbdq_upoverflow_mstat1 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_mstat1 : 1;
        unsigned int adq0_full_mstat1 : 1;
        unsigned int adq1_full_mstat1 : 1;
        unsigned int lbdq_full_mstat1 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT1_MSTAT_UNION;
#endif
#define SOC_PSAM_INT1_MSTAT_adq0_epty_mstat1_START (0)
#define SOC_PSAM_INT1_MSTAT_adq0_epty_mstat1_END (0)
#define SOC_PSAM_INT1_MSTAT_adq1_epty_mstat1_START (1)
#define SOC_PSAM_INT1_MSTAT_adq1_epty_mstat1_END (1)
#define SOC_PSAM_INT1_MSTAT_lbdq_epty_mstat1_START (2)
#define SOC_PSAM_INT1_MSTAT_lbdq_epty_mstat1_END (2)
#define SOC_PSAM_INT1_MSTAT_adq_p1_err_mstat1_START (3)
#define SOC_PSAM_INT1_MSTAT_adq_p1_err_mstat1_END (3)
#define SOC_PSAM_INT1_MSTAT_rd_wbuf_overflow_mstat1_START (16)
#define SOC_PSAM_INT1_MSTAT_rd_wbuf_overflow_mstat1_END (16)
#define SOC_PSAM_INT1_MSTAT_adq0_upoverflow_mstat1_START (17)
#define SOC_PSAM_INT1_MSTAT_adq0_upoverflow_mstat1_END (17)
#define SOC_PSAM_INT1_MSTAT_adq1_upoverflow_mstat1_START (18)
#define SOC_PSAM_INT1_MSTAT_adq1_upoverflow_mstat1_END (18)
#define SOC_PSAM_INT1_MSTAT_lbdq_upoverflow_mstat1_START (19)
#define SOC_PSAM_INT1_MSTAT_lbdq_upoverflow_mstat1_END (19)
#define SOC_PSAM_INT1_MSTAT_rd_wbuf_full_mstat1_START (24)
#define SOC_PSAM_INT1_MSTAT_rd_wbuf_full_mstat1_END (24)
#define SOC_PSAM_INT1_MSTAT_adq0_full_mstat1_START (25)
#define SOC_PSAM_INT1_MSTAT_adq0_full_mstat1_END (25)
#define SOC_PSAM_INT1_MSTAT_adq1_full_mstat1_START (26)
#define SOC_PSAM_INT1_MSTAT_adq1_full_mstat1_END (26)
#define SOC_PSAM_INT1_MSTAT_lbdq_full_mstat1_START (27)
#define SOC_PSAM_INT1_MSTAT_lbdq_full_mstat1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_mask0 : 1;
        unsigned int adq1_epty_mask0 : 1;
        unsigned int lbdq_epty_mask0 : 1;
        unsigned int adq_p1_err_mask0 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_mask0 : 1;
        unsigned int adq0_upoverflow_mask0 : 1;
        unsigned int adq1_upoverflow_mask0 : 1;
        unsigned int lbdq_upoverflow_mask0 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_mask0 : 1;
        unsigned int adq0_full_mask0 : 1;
        unsigned int adq1_full_mask0 : 1;
        unsigned int lbdq_full_mask0 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT0_MASK_UNION;
#endif
#define SOC_PSAM_INT0_MASK_adq0_epty_mask0_START (0)
#define SOC_PSAM_INT0_MASK_adq0_epty_mask0_END (0)
#define SOC_PSAM_INT0_MASK_adq1_epty_mask0_START (1)
#define SOC_PSAM_INT0_MASK_adq1_epty_mask0_END (1)
#define SOC_PSAM_INT0_MASK_lbdq_epty_mask0_START (2)
#define SOC_PSAM_INT0_MASK_lbdq_epty_mask0_END (2)
#define SOC_PSAM_INT0_MASK_adq_p1_err_mask0_START (3)
#define SOC_PSAM_INT0_MASK_adq_p1_err_mask0_END (3)
#define SOC_PSAM_INT0_MASK_rd_wbuf_overflow_mask0_START (16)
#define SOC_PSAM_INT0_MASK_rd_wbuf_overflow_mask0_END (16)
#define SOC_PSAM_INT0_MASK_adq0_upoverflow_mask0_START (17)
#define SOC_PSAM_INT0_MASK_adq0_upoverflow_mask0_END (17)
#define SOC_PSAM_INT0_MASK_adq1_upoverflow_mask0_START (18)
#define SOC_PSAM_INT0_MASK_adq1_upoverflow_mask0_END (18)
#define SOC_PSAM_INT0_MASK_lbdq_upoverflow_mask0_START (19)
#define SOC_PSAM_INT0_MASK_lbdq_upoverflow_mask0_END (19)
#define SOC_PSAM_INT0_MASK_rd_wbuf_full_mask0_START (24)
#define SOC_PSAM_INT0_MASK_rd_wbuf_full_mask0_END (24)
#define SOC_PSAM_INT0_MASK_adq0_full_mask0_START (25)
#define SOC_PSAM_INT0_MASK_adq0_full_mask0_END (25)
#define SOC_PSAM_INT0_MASK_adq1_full_mask0_START (26)
#define SOC_PSAM_INT0_MASK_adq1_full_mask0_END (26)
#define SOC_PSAM_INT0_MASK_lbdq_full_mask0_START (27)
#define SOC_PSAM_INT0_MASK_lbdq_full_mask0_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty_mask1 : 1;
        unsigned int adq1_epty_mask1 : 1;
        unsigned int lbdq_epty_mask1 : 1;
        unsigned int adq_p1_err_mask1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int rd_wbuf_overflow_mask1 : 1;
        unsigned int adq0_upoverflow_mask1 : 1;
        unsigned int adq1_upoverflow_mask1 : 1;
        unsigned int lbdq_upoverflow_mask1 : 1;
        unsigned int reserved_1 : 4;
        unsigned int rd_wbuf_full_mask1 : 1;
        unsigned int adq0_full_mask1 : 1;
        unsigned int adq1_full_mask1 : 1;
        unsigned int lbdq_full_mask1 : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_PSAM_INT1_MASK_UNION;
#endif
#define SOC_PSAM_INT1_MASK_adq0_epty_mask1_START (0)
#define SOC_PSAM_INT1_MASK_adq0_epty_mask1_END (0)
#define SOC_PSAM_INT1_MASK_adq1_epty_mask1_START (1)
#define SOC_PSAM_INT1_MASK_adq1_epty_mask1_END (1)
#define SOC_PSAM_INT1_MASK_lbdq_epty_mask1_START (2)
#define SOC_PSAM_INT1_MASK_lbdq_epty_mask1_END (2)
#define SOC_PSAM_INT1_MASK_adq_p1_err_mask1_START (3)
#define SOC_PSAM_INT1_MASK_adq_p1_err_mask1_END (3)
#define SOC_PSAM_INT1_MASK_rd_wbuf_overflow_mask1_START (16)
#define SOC_PSAM_INT1_MASK_rd_wbuf_overflow_mask1_END (16)
#define SOC_PSAM_INT1_MASK_adq0_upoverflow_mask1_START (17)
#define SOC_PSAM_INT1_MASK_adq0_upoverflow_mask1_END (17)
#define SOC_PSAM_INT1_MASK_adq1_upoverflow_mask1_START (18)
#define SOC_PSAM_INT1_MASK_adq1_upoverflow_mask1_END (18)
#define SOC_PSAM_INT1_MASK_lbdq_upoverflow_mask1_START (19)
#define SOC_PSAM_INT1_MASK_lbdq_upoverflow_mask1_END (19)
#define SOC_PSAM_INT1_MASK_rd_wbuf_full_mask1_START (24)
#define SOC_PSAM_INT1_MASK_rd_wbuf_full_mask1_END (24)
#define SOC_PSAM_INT1_MASK_adq0_full_mask1_START (25)
#define SOC_PSAM_INT1_MASK_adq0_full_mask1_END (25)
#define SOC_PSAM_INT1_MASK_adq1_full_mask1_START (26)
#define SOC_PSAM_INT1_MASK_adq1_full_mask1_END (26)
#define SOC_PSAM_INT1_MASK_lbdq_full_mask1_START (27)
#define SOC_PSAM_INT1_MASK_lbdq_full_mask1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cipher_ch_srst : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PSAM_CIPHER_CH_SOFTRESET_UNION;
#endif
#define SOC_PSAM_CIPHER_CH_SOFTRESET_cipher_ch_srst_START (0)
#define SOC_PSAM_CIPHER_CH_SOFTRESET_cipher_ch_srst_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cipher_ch_en : 1;
        unsigned int reserved : 30;
        unsigned int cipher_ch_busy : 1;
    } reg;
} SOC_PSAM_CIPHER_CH_EN_UNION;
#endif
#define SOC_PSAM_CIPHER_CH_EN_cipher_ch_en_START (0)
#define SOC_PSAM_CIPHER_CH_EN_cipher_ch_en_END (0)
#define SOC_PSAM_CIPHER_CH_EN_cipher_ch_busy_START (31)
#define SOC_PSAM_CIPHER_CH_EN_cipher_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbd_iv_sel : 1;
        unsigned int cbd_iv_num : 1;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 2;
        unsigned int reserved_3 : 25;
    } reg;
} SOC_PSAM_CBDQ_CONFIG_UNION;
#endif
#define SOC_PSAM_CBDQ_CONFIG_cbd_iv_sel_START (0)
#define SOC_PSAM_CBDQ_CONFIG_cbd_iv_sel_END (0)
#define SOC_PSAM_CBDQ_CONFIG_cbd_iv_num_START (1)
#define SOC_PSAM_CBDQ_CONFIG_cbd_iv_num_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int cbdq_base_addr : 29;
    } reg;
} SOC_PSAM_CBDQ_BADDR_UNION;
#endif
#define SOC_PSAM_CBDQ_BADDR_cbdq_base_addr_START (3)
#define SOC_PSAM_CBDQ_BADDR_cbdq_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbdq_size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PSAM_CBDQ_SIZE_UNION;
#endif
#define SOC_PSAM_CBDQ_SIZE_cbdq_size_START (0)
#define SOC_PSAM_CBDQ_SIZE_cbdq_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbdq_wptr : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PSAM_CBDQ_WPTR_UNION;
#endif
#define SOC_PSAM_CBDQ_WPTR_cbdq_wptr_START (0)
#define SOC_PSAM_CBDQ_WPTR_cbdq_wptr_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int local_cbdq_wptr : 10;
        unsigned int cbdq_wptr_invalid : 1;
        unsigned int reserved_0 : 5;
        unsigned int local_cbdq_rptr : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_PSAM_CBDQ_STAT_UNION;
#endif
#define SOC_PSAM_CBDQ_STAT_local_cbdq_wptr_START (0)
#define SOC_PSAM_CBDQ_STAT_local_cbdq_wptr_END (9)
#define SOC_PSAM_CBDQ_STAT_cbdq_wptr_invalid_START (10)
#define SOC_PSAM_CBDQ_STAT_cbdq_wptr_invalid_END (10)
#define SOC_PSAM_CBDQ_STAT_local_cbdq_rptr_START (16)
#define SOC_PSAM_CBDQ_STAT_local_cbdq_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbdq_wptr_addr : 32;
    } reg;
} SOC_PSAM_CBDQ_WPTR_ADDR_UNION;
#endif
#define SOC_PSAM_CBDQ_WPTR_ADDR_cbdq_wptr_addr_START (0)
#define SOC_PSAM_CBDQ_WPTR_ADDR_cbdq_wptr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fc_head : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_PSAM_CRDQ_CTRL_UNION;
#endif
#define SOC_PSAM_CRDQ_CTRL_fc_head_START (0)
#define SOC_PSAM_CRDQ_CTRL_fc_head_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crd_wbuf1_full : 1;
        unsigned int crd_wbuf1_epty : 1;
        unsigned int crd_wbuf2_full : 1;
        unsigned int crd_wbuf2_epty : 1;
        unsigned int crd_wbuf3_full : 1;
        unsigned int crd_wbuf3_epty : 1;
        unsigned int crd_wbuf4_full : 1;
        unsigned int crd_wbuf4_epty : 1;
        unsigned int crd_wbuf5_full : 1;
        unsigned int crd_wbuf5_epty : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_PSAM_CRDQ_STAT_UNION;
#endif
#define SOC_PSAM_CRDQ_STAT_crd_wbuf1_full_START (0)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf1_full_END (0)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf1_epty_START (1)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf1_epty_END (1)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf2_full_START (2)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf2_full_END (2)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf2_epty_START (3)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf2_epty_END (3)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf3_full_START (4)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf3_full_END (4)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf3_epty_START (5)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf3_epty_END (5)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf4_full_START (6)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf4_full_END (6)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf4_epty_START (7)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf4_epty_END (7)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf5_full_START (8)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf5_full_END (8)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf5_epty_START (9)
#define SOC_PSAM_CRDQ_STAT_crd_wbuf5_epty_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int local_crdq_wptr : 2;
        unsigned int reserved_0 : 14;
        unsigned int local_crdq_rptr : 2;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_PSAM_CRDQ_PTR_UNION;
#endif
#define SOC_PSAM_CRDQ_PTR_local_crdq_wptr_START (0)
#define SOC_PSAM_CRDQ_PTR_local_crdq_wptr_END (1)
#define SOC_PSAM_CRDQ_PTR_local_crdq_rptr_START (16)
#define SOC_PSAM_CRDQ_PTR_local_crdq_rptr_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crdq_rptr_addr : 32;
    } reg;
} SOC_PSAM_CRDQ_RPTR_ADDR_UNION;
#endif
#define SOC_PSAM_CRDQ_RPTR_ADDR_crdq_rptr_addr_START (0)
#define SOC_PSAM_CRDQ_RPTR_ADDR_crdq_rptr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int last_lbd_ibdq_wptr : 8;
        unsigned int last_lbd_lbdq_rptr : 8;
        unsigned int need_to_update : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_PSAM_IBDQ_STAT_UNION;
#endif
#define SOC_PSAM_IBDQ_STAT_last_lbd_ibdq_wptr_START (0)
#define SOC_PSAM_IBDQ_STAT_last_lbd_ibdq_wptr_END (7)
#define SOC_PSAM_IBDQ_STAT_last_lbd_lbdq_rptr_START (8)
#define SOC_PSAM_IBDQ_STAT_last_lbd_lbdq_rptr_END (15)
#define SOC_PSAM_IBDQ_STAT_need_to_update_START (16)
#define SOC_PSAM_IBDQ_STAT_need_to_update_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int ibdq_addr : 29;
    } reg;
} SOC_PSAM_IBDQ_BADDR_UNION;
#endif
#define SOC_PSAM_IBDQ_BADDR_ibdq_addr_START (3)
#define SOC_PSAM_IBDQ_BADDR_ibdq_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_IBDQ_SIZE_UNION;
#endif
#define SOC_PSAM_IBDQ_SIZE_ibdq_size_START (0)
#define SOC_PSAM_IBDQ_SIZE_ibdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_IBDQ_WPTR_UNION;
#endif
#define SOC_PSAM_IBDQ_WPTR_ibdq_wptr_START (0)
#define SOC_PSAM_IBDQ_WPTR_ibdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_IBDQ_RPTR_UNION;
#endif
#define SOC_PSAM_IBDQ_RPTR_ibdq_rptr_START (0)
#define SOC_PSAM_IBDQ_RPTR_ibdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_wptr_addr : 32;
    } reg;
} SOC_PSAM_IBDQ_WPTR_ADDR_UNION;
#endif
#define SOC_PSAM_IBDQ_WPTR_ADDR_ibdq_wptr_addr_START (0)
#define SOC_PSAM_IBDQ_WPTR_ADDR_ibdq_wptr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_rptr_addr : 32;
    } reg;
} SOC_PSAM_IBDQ_RPTR_ADDR_UNION;
#endif
#define SOC_PSAM_IBDQ_RPTR_ADDR_ibdq_rptr_addr_START (0)
#define SOC_PSAM_IBDQ_RPTR_ADDR_ibdq_rptr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_rptr_timer : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_PSAM_IBDQ_RPTR_TIMER_UNION;
#endif
#define SOC_PSAM_IBDQ_RPTR_TIMER_ibdq_rptr_timer_START (0)
#define SOC_PSAM_IBDQ_RPTR_TIMER_ibdq_rptr_timer_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_pkt_cnt : 32;
    } reg;
} SOC_PSAM_IBDQ_PKT_CNT_UNION;
#endif
#define SOC_PSAM_IBDQ_PKT_CNT_ibdq_pkt_cnt_START (0)
#define SOC_PSAM_IBDQ_PKT_CNT_ibdq_pkt_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbdq_epty : 1;
        unsigned int lbdq_full : 1;
        unsigned int lbd_rbuf_epty : 1;
        unsigned int lbd_rbuf_full : 1;
        unsigned int reserved_0 : 12;
        unsigned int lbdq_wptr_invalid : 1;
        unsigned int reserved_1 : 7;
        unsigned int local_lbdq_rptr : 8;
    } reg;
} SOC_PSAM_LBDQ_STAT_UNION;
#endif
#define SOC_PSAM_LBDQ_STAT_lbdq_epty_START (0)
#define SOC_PSAM_LBDQ_STAT_lbdq_epty_END (0)
#define SOC_PSAM_LBDQ_STAT_lbdq_full_START (1)
#define SOC_PSAM_LBDQ_STAT_lbdq_full_END (1)
#define SOC_PSAM_LBDQ_STAT_lbd_rbuf_epty_START (2)
#define SOC_PSAM_LBDQ_STAT_lbd_rbuf_epty_END (2)
#define SOC_PSAM_LBDQ_STAT_lbd_rbuf_full_START (3)
#define SOC_PSAM_LBDQ_STAT_lbd_rbuf_full_END (3)
#define SOC_PSAM_LBDQ_STAT_lbdq_wptr_invalid_START (16)
#define SOC_PSAM_LBDQ_STAT_lbdq_wptr_invalid_END (16)
#define SOC_PSAM_LBDQ_STAT_local_lbdq_rptr_START (24)
#define SOC_PSAM_LBDQ_STAT_local_lbdq_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int lbdq_addr : 29;
    } reg;
} SOC_PSAM_LBDQ_BADDR_UNION;
#endif
#define SOC_PSAM_LBDQ_BADDR_lbdq_addr_START (3)
#define SOC_PSAM_LBDQ_BADDR_lbdq_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_LBDQ_SIZE_UNION;
#endif
#define SOC_PSAM_LBDQ_SIZE_lbdq_size_START (0)
#define SOC_PSAM_LBDQ_SIZE_lbdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_LBDQ_WPTR_UNION;
#endif
#define SOC_PSAM_LBDQ_WPTR_lbdq_wptr_START (0)
#define SOC_PSAM_LBDQ_WPTR_lbdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int real_lbdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_LBDQ_RPTR_UNION;
#endif
#define SOC_PSAM_LBDQ_RPTR_real_lbdq_rptr_START (0)
#define SOC_PSAM_LBDQ_RPTR_real_lbdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbdq_depth : 9;
        unsigned int reserved : 23;
    } reg;
} SOC_PSAM_LBDQ_DEPTH_UNION;
#endif
#define SOC_PSAM_LBDQ_DEPTH_lbdq_depth_START (0)
#define SOC_PSAM_LBDQ_DEPTH_lbdq_depth_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int adq_en : 1;
        unsigned int adq0_size_sel : 2;
        unsigned int adq1_size_sel : 2;
        unsigned int reserved_1 : 10;
        unsigned int adq_plen_th : 16;
    } reg;
} SOC_PSAM_ADQ_CTRL_UNION;
#endif
#define SOC_PSAM_ADQ_CTRL_adq_en_START (1)
#define SOC_PSAM_ADQ_CTRL_adq_en_END (1)
#define SOC_PSAM_ADQ_CTRL_adq0_size_sel_START (2)
#define SOC_PSAM_ADQ_CTRL_adq0_size_sel_END (3)
#define SOC_PSAM_ADQ_CTRL_adq1_size_sel_START (4)
#define SOC_PSAM_ADQ_CTRL_adq1_size_sel_END (5)
#define SOC_PSAM_ADQ_CTRL_adq_plen_th_START (16)
#define SOC_PSAM_ADQ_CTRL_adq_plen_th_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int adq0_base : 29;
    } reg;
} SOC_PSAM_ADQ0_BASE_UNION;
#endif
#define SOC_PSAM_ADQ0_BASE_adq0_base_START (3)
#define SOC_PSAM_ADQ0_BASE_adq0_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_epty : 1;
        unsigned int adq0_full : 1;
        unsigned int ad0_buf_epty : 1;
        unsigned int ad0_buf_full : 1;
        unsigned int adq0_rptr_invalid : 1;
        unsigned int adq0_wptr_invalid : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_PSAM_ADQ0_STAT_UNION;
#endif
#define SOC_PSAM_ADQ0_STAT_adq0_epty_START (0)
#define SOC_PSAM_ADQ0_STAT_adq0_epty_END (0)
#define SOC_PSAM_ADQ0_STAT_adq0_full_START (1)
#define SOC_PSAM_ADQ0_STAT_adq0_full_END (1)
#define SOC_PSAM_ADQ0_STAT_ad0_buf_epty_START (2)
#define SOC_PSAM_ADQ0_STAT_ad0_buf_epty_END (2)
#define SOC_PSAM_ADQ0_STAT_ad0_buf_full_START (3)
#define SOC_PSAM_ADQ0_STAT_ad0_buf_full_END (3)
#define SOC_PSAM_ADQ0_STAT_adq0_rptr_invalid_START (4)
#define SOC_PSAM_ADQ0_STAT_adq0_rptr_invalid_END (4)
#define SOC_PSAM_ADQ0_STAT_adq0_wptr_invalid_START (5)
#define SOC_PSAM_ADQ0_STAT_adq0_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_ADQ0_WPTR_UNION;
#endif
#define SOC_PSAM_ADQ0_WPTR_adq0_wptr_START (0)
#define SOC_PSAM_ADQ0_WPTR_adq0_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq0_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_ADQ0_RPTR_UNION;
#endif
#define SOC_PSAM_ADQ0_RPTR_adq0_rptr_START (0)
#define SOC_PSAM_ADQ0_RPTR_adq0_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int adq1_base : 29;
    } reg;
} SOC_PSAM_ADQ1_BASE_UNION;
#endif
#define SOC_PSAM_ADQ1_BASE_adq1_base_START (3)
#define SOC_PSAM_ADQ1_BASE_adq1_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq1_epty : 1;
        unsigned int adq1_full : 1;
        unsigned int ad1_buf_epty : 1;
        unsigned int ad1_buf_full : 1;
        unsigned int adq1_rptr_invalid : 1;
        unsigned int adq1_wptr_invalid : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_PSAM_ADQ1_STAT_UNION;
#endif
#define SOC_PSAM_ADQ1_STAT_adq1_epty_START (0)
#define SOC_PSAM_ADQ1_STAT_adq1_epty_END (0)
#define SOC_PSAM_ADQ1_STAT_adq1_full_START (1)
#define SOC_PSAM_ADQ1_STAT_adq1_full_END (1)
#define SOC_PSAM_ADQ1_STAT_ad1_buf_epty_START (2)
#define SOC_PSAM_ADQ1_STAT_ad1_buf_epty_END (2)
#define SOC_PSAM_ADQ1_STAT_ad1_buf_full_START (3)
#define SOC_PSAM_ADQ1_STAT_ad1_buf_full_END (3)
#define SOC_PSAM_ADQ1_STAT_adq1_rptr_invalid_START (4)
#define SOC_PSAM_ADQ1_STAT_adq1_rptr_invalid_END (4)
#define SOC_PSAM_ADQ1_STAT_adq1_wptr_invalid_START (5)
#define SOC_PSAM_ADQ1_STAT_adq1_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq1_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_ADQ1_WPTR_UNION;
#endif
#define SOC_PSAM_ADQ1_WPTR_adq1_wptr_START (0)
#define SOC_PSAM_ADQ1_WPTR_adq1_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq1_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PSAM_ADQ1_RPTR_UNION;
#endif
#define SOC_PSAM_ADQ1_RPTR_adq1_rptr_START (0)
#define SOC_PSAM_ADQ1_RPTR_adq1_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_err : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_ERR_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_ERR_adq_paddr_err_START (0)
#define SOC_PSAM_ADQ_PADDR_ERR_adq_paddr_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_fama_attr : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PSAM_ADQ_FAMA_ATTR_UNION;
#endif
#define SOC_PSAM_ADQ_FAMA_ATTR_adq_fama_attr_START (0)
#define SOC_PSAM_ADQ_FAMA_ATTR_adq_fama_attr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_str0 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_STR0_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_STR0_adq_paddr_str0_START (0)
#define SOC_PSAM_ADQ_PADDR_STR0_adq_paddr_str0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_end0 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_END0_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_END0_adq_paddr_end0_START (0)
#define SOC_PSAM_ADQ_PADDR_END0_adq_paddr_end0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_str1 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_STR1_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_STR1_adq_paddr_str1_START (0)
#define SOC_PSAM_ADQ_PADDR_STR1_adq_paddr_str1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_end1 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_END1_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_END1_adq_paddr_end1_START (0)
#define SOC_PSAM_ADQ_PADDR_END1_adq_paddr_end1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_str2 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_STR2_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_STR2_adq_paddr_str2_START (0)
#define SOC_PSAM_ADQ_PADDR_STR2_adq_paddr_str2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_end2 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_END2_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_END2_adq_paddr_end2_START (0)
#define SOC_PSAM_ADQ_PADDR_END2_adq_paddr_end2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_str3 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_STR3_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_STR3_adq_paddr_str3_START (0)
#define SOC_PSAM_ADQ_PADDR_STR3_adq_paddr_str3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_end3 : 32;
    } reg;
} SOC_PSAM_ADQ_PADDR_END3_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_END3_adq_paddr_end3_START (0)
#define SOC_PSAM_ADQ_PADDR_END3_adq_paddr_end3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adq_paddr_valid0 : 1;
        unsigned int adq_paddr_valid1 : 1;
        unsigned int adq_paddr_valid2 : 1;
        unsigned int adq_paddr_valid3 : 1;
        unsigned int adq_paddr_bypass : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_PSAM_ADQ_PADDR_CTRL_UNION;
#endif
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid0_START (0)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid0_END (0)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid1_START (1)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid1_END (1)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid2_START (2)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid2_END (2)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid3_START (3)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_valid3_END (3)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_bypass_START (4)
#define SOC_PSAM_ADQ_PADDR_CTRL_adq_paddr_bypass_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbdq_fama_attr : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PSAM_CBDQ_FAMA_ATTR_UNION;
#endif
#define SOC_PSAM_CBDQ_FAMA_ATTR_cbdq_fama_attr_START (0)
#define SOC_PSAM_CBDQ_FAMA_ATTR_cbdq_fama_attr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibdq_fama_attr : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PSAM_IBDQ_FAMA_ATTR_UNION;
#endif
#define SOC_PSAM_IBDQ_FAMA_ATTR_ibdq_fama_attr_START (0)
#define SOC_PSAM_IBDQ_FAMA_ATTR_ibdq_fama_attr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lbdq_fama_attr : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PSAM_LBDQ_FAMA_ATTR_UNION;
#endif
#define SOC_PSAM_LBDQ_FAMA_ATTR_lbdq_fama_attr_START (0)
#define SOC_PSAM_LBDQ_FAMA_ATTR_lbdq_fama_attr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int psam_crdq_baddr : 32;
    } reg;
} SOC_PSAM_CRDQ_BADDR_UNION;
#endif
#define SOC_PSAM_CRDQ_BADDR_psam_crdq_baddr_START (0)
#define SOC_PSAM_CRDQ_BADDR_psam_crdq_baddr_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
