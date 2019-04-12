#ifndef __SOC_ASP_DSD_INTERFACE_H__
#define __SOC_ASP_DSD_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ASP_DSD_DSD_VERSION_ADDR(base) ((base) + (0x00))
#define SOC_ASP_DSD_DSD_DATA_FORMAT_ADDR(base) ((base) + (0x04))
#define SOC_ASP_DSD_DSD_INTMASK_ADDR(base) ((base) + (0x08))
#define SOC_ASP_DSD_DSD_INTSTATUS_ADDR(base) ((base) + (0x0C))
#define SOC_ASP_DSD_DSD_INTCLR_ADDR(base) ((base) + (0x010))
#define SOC_ASP_DSD_DSD_CT_SET_ADDR(base) ((base) + (0x01C))
#define SOC_ASP_DSD_DSD_CT_CLR_ADDR(base) ((base) + (0x020))
#define SOC_ASP_DSD_DSD_TX_STA_ADDR(base) ((base) + (0x024))
#define SOC_ASP_DSD_DSD_FIFO_AFULL_TH_ADDR(base) ((base) + (0x028))
#define SOC_ASP_DSD_DSD_LEFT_TX_ADDR(base) ((base) + (0x080))
#define SOC_ASP_DSD_DSD_RIGHT_TX_ADDR(base) ((base) + (0x090))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int version : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_ASP_DSD_DSD_VERSION_UNION;
#endif
#define SOC_ASP_DSD_DSD_VERSION_version_START (0)
#define SOC_ASP_DSD_DSD_VERSION_version_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsd_format_en : 1;
        unsigned int dsd_order_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ASP_DSD_DSD_DATA_FORMAT_UNION;
#endif
#define SOC_ASP_DSD_DSD_DATA_FORMAT_dsd_format_en_START (0)
#define SOC_ASP_DSD_DSD_DATA_FORMAT_dsd_format_en_END (0)
#define SOC_ASP_DSD_DSD_DATA_FORMAT_dsd_order_en_START (1)
#define SOC_ASP_DSD_DSD_DATA_FORMAT_dsd_order_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsd_chr_intr_mask : 1;
        unsigned int dsd_chl_intr_mask : 1;
        unsigned int tx_right_fifo_under_mask : 1;
        unsigned int tx_left_fifo_under_mask : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_DSD_DSD_INTMASK_UNION;
#endif
#define SOC_ASP_DSD_DSD_INTMASK_dsd_chr_intr_mask_START (0)
#define SOC_ASP_DSD_DSD_INTMASK_dsd_chr_intr_mask_END (0)
#define SOC_ASP_DSD_DSD_INTMASK_dsd_chl_intr_mask_START (1)
#define SOC_ASP_DSD_DSD_INTMASK_dsd_chl_intr_mask_END (1)
#define SOC_ASP_DSD_DSD_INTMASK_tx_right_fifo_under_mask_START (2)
#define SOC_ASP_DSD_DSD_INTMASK_tx_right_fifo_under_mask_END (2)
#define SOC_ASP_DSD_DSD_INTMASK_tx_left_fifo_under_mask_START (3)
#define SOC_ASP_DSD_DSD_INTMASK_tx_left_fifo_under_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsd_chr_intr_stat : 1;
        unsigned int dsd_chl_intr_stat : 1;
        unsigned int tx_right_fifo_under_stat : 1;
        unsigned int tx_left_fifo_under_stat : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_DSD_DSD_INTSTATUS_UNION;
#endif
#define SOC_ASP_DSD_DSD_INTSTATUS_dsd_chr_intr_stat_START (0)
#define SOC_ASP_DSD_DSD_INTSTATUS_dsd_chr_intr_stat_END (0)
#define SOC_ASP_DSD_DSD_INTSTATUS_dsd_chl_intr_stat_START (1)
#define SOC_ASP_DSD_DSD_INTSTATUS_dsd_chl_intr_stat_END (1)
#define SOC_ASP_DSD_DSD_INTSTATUS_tx_right_fifo_under_stat_START (2)
#define SOC_ASP_DSD_DSD_INTSTATUS_tx_right_fifo_under_stat_END (2)
#define SOC_ASP_DSD_DSD_INTSTATUS_tx_left_fifo_under_stat_START (3)
#define SOC_ASP_DSD_DSD_INTSTATUS_tx_left_fifo_under_stat_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsd_chr_intr_clr : 1;
        unsigned int dsd_chl_intr_clr : 1;
        unsigned int tx_right_fifo_under_clr : 1;
        unsigned int tx_left_fifo_under_clr : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_DSD_DSD_INTCLR_UNION;
#endif
#define SOC_ASP_DSD_DSD_INTCLR_dsd_chr_intr_clr_START (0)
#define SOC_ASP_DSD_DSD_INTCLR_dsd_chr_intr_clr_END (0)
#define SOC_ASP_DSD_DSD_INTCLR_dsd_chl_intr_clr_START (1)
#define SOC_ASP_DSD_DSD_INTCLR_dsd_chl_intr_clr_END (1)
#define SOC_ASP_DSD_DSD_INTCLR_tx_right_fifo_under_clr_START (2)
#define SOC_ASP_DSD_DSD_INTCLR_tx_right_fifo_under_clr_END (2)
#define SOC_ASP_DSD_DSD_INTCLR_tx_left_fifo_under_clr_START (3)
#define SOC_ASP_DSD_DSD_INTCLR_tx_left_fifo_under_clr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_enable : 1;
        unsigned int tx_fifo_threshold : 5;
        unsigned int intr_en : 1;
        unsigned int fifo_clr_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_ASP_DSD_DSD_CT_SET_UNION;
#endif
#define SOC_ASP_DSD_DSD_CT_SET_tx_enable_START (0)
#define SOC_ASP_DSD_DSD_CT_SET_tx_enable_END (0)
#define SOC_ASP_DSD_DSD_CT_SET_tx_fifo_threshold_START (1)
#define SOC_ASP_DSD_DSD_CT_SET_tx_fifo_threshold_END (5)
#define SOC_ASP_DSD_DSD_CT_SET_intr_en_START (6)
#define SOC_ASP_DSD_DSD_CT_SET_intr_en_END (6)
#define SOC_ASP_DSD_DSD_CT_SET_fifo_clr_en_START (7)
#define SOC_ASP_DSD_DSD_CT_SET_fifo_clr_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_disable : 1;
        unsigned int tx_fifo_threshold_clr : 5;
        unsigned int intr_mask : 1;
        unsigned int fifo_clr_disable : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_ASP_DSD_DSD_CT_CLR_UNION;
#endif
#define SOC_ASP_DSD_DSD_CT_CLR_tx_disable_START (0)
#define SOC_ASP_DSD_DSD_CT_CLR_tx_disable_END (0)
#define SOC_ASP_DSD_DSD_CT_CLR_tx_fifo_threshold_clr_START (1)
#define SOC_ASP_DSD_DSD_CT_CLR_tx_fifo_threshold_clr_END (5)
#define SOC_ASP_DSD_DSD_CT_CLR_intr_mask_START (6)
#define SOC_ASP_DSD_DSD_CT_CLR_intr_mask_END (6)
#define SOC_ASP_DSD_DSD_CT_CLR_fifo_clr_disable_START (7)
#define SOC_ASP_DSD_DSD_CT_CLR_fifo_clr_disable_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int right_depth : 5;
        unsigned int left_depth : 5;
        unsigned int reserved : 22;
    } reg;
} SOC_ASP_DSD_DSD_TX_STA_UNION;
#endif
#define SOC_ASP_DSD_DSD_TX_STA_right_depth_START (0)
#define SOC_ASP_DSD_DSD_TX_STA_right_depth_END (4)
#define SOC_ASP_DSD_DSD_TX_STA_left_depth_START (5)
#define SOC_ASP_DSD_DSD_TX_STA_left_depth_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int right_fifo_afull_th : 5;
        unsigned int left_fifo_afull_th : 5;
        unsigned int reserved : 22;
    } reg;
} SOC_ASP_DSD_DSD_FIFO_AFULL_TH_UNION;
#endif
#define SOC_ASP_DSD_DSD_FIFO_AFULL_TH_right_fifo_afull_th_START (0)
#define SOC_ASP_DSD_DSD_FIFO_AFULL_TH_right_fifo_afull_th_END (4)
#define SOC_ASP_DSD_DSD_FIFO_AFULL_TH_left_fifo_afull_th_START (5)
#define SOC_ASP_DSD_DSD_FIFO_AFULL_TH_left_fifo_afull_th_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_left_data : 32;
    } reg;
} SOC_ASP_DSD_DSD_LEFT_TX_UNION;
#endif
#define SOC_ASP_DSD_DSD_LEFT_TX_tx_left_data_START (0)
#define SOC_ASP_DSD_DSD_LEFT_TX_tx_left_data_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_right_data : 32;
    } reg;
} SOC_ASP_DSD_DSD_RIGHT_TX_UNION;
#endif
#define SOC_ASP_DSD_DSD_RIGHT_TX_tx_right_data_START (0)
#define SOC_ASP_DSD_DSD_RIGHT_TX_tx_right_data_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
