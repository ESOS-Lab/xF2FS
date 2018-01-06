#ifndef __SOC_DMMU_INTERFACE_H__
#define __SOC_DMMU_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_DMMU_TLB_LOCK_ADDR(base) ((base) + (0x000))
#define SOC_DMMU_TLB_ALL_INVALID_ADDR(base) ((base) + (0x004))
#define SOC_DMMU_TLB_PAR_INVALID_L_ADDR(base) ((base) + (0x008))
#define SOC_DMMU_TLB_PAR_INVALID_H_ADDR(base) ((base) + (0x00C))
#define SOC_DMMU_L_TLB_ENTRY_ADDR(base,n) ((base) + (0x010+0x004*(n)))
#define SOC_DMMU_H_TLB_ENTRY_ADDR(base,n) ((base) + (0x110+0x004*(n)))
#define SOC_DMMU_DDR_OP_LOW_BAND_ADDR(base) ((base) + (0x304))
#define SOC_DMMU_DDR_OP_HIGH_BAND_ADDR(base) ((base) + (0x308))
#define SOC_DMMU_DMA_CTRL_ADDR(base) ((base) + (0x400))
#define SOC_DMMU_DMA_STATUS_ADDR(base) ((base) + (0x404))
#define SOC_DMMU_DMA_TLBAXI_COUNT_ADDR(base) ((base) + (0x408))
#define SOC_DMMU_DMA_INT_STATUS_ADDR(base) ((base) + (0x40C))
#define SOC_DMMU_DMA_INT_MASK_ADDR(base) ((base) + (0x410))
#define SOC_DMMU_DMA_INT_CLEAR_ADDR(base) ((base) + (0x414))
#define SOC_DMMU_DMA_CLKEN_SOFT_ADDR(base) ((base) + (0x418))
#define SOC_DMMU_DMA_BYTE_CFG_ADDR(base) ((base) + (0x41C))
#define SOC_DMMU_DMA_AXI_CFG_ADDR(base) ((base) + (0x420))
#define SOC_DMMU_MEM_CTRL_ADDR(base) ((base) + (0x424))
#define SOC_DMMU_DMA_CTRL_MODE_ADDR(base) ((base) + (0x428))
#define SOC_DMMU_DMA_SRC_ADDR_ADDR(base) ((base) + (0x42C))
#define SOC_DMMU_DMA_DST_ADDR_ADDR(base) ((base) + (0x430))
#define SOC_DMMU_DMA_VALID_SW_ADDR(base) ((base) + (0x434))
#define SOC_DMMU_SECC_START_ADDR_ADDR(base) ((base) + (0x438))
#define SOC_DMMU_SECC_TARGET_ADDR_ADDR(base) ((base) + (0x43C))
#define SOC_DMMU_SECC_SW_CFG_ADDR(base) ((base) + (0x440))
#define SOC_DMMU_FAMA_REMAP_SRC0_ADDR(base) ((base) + (0x800))
#define SOC_DMMU_FAMA_REMAP_SRC1_ADDR(base) ((base) + (0x804))
#define SOC_DMMU_FAMA_REMAP_SRC2_ADDR(base) ((base) + (0x808))
#define SOC_DMMU_FAMA_REMAP_SRC3_ADDR(base) ((base) + (0x80C))
#define SOC_DMMU_FAMA_REMAP_SRC4_ADDR(base) ((base) + (0x810))
#define SOC_DMMU_FAMA_REMAP_SRC5_ADDR(base) ((base) + (0x814))
#define SOC_DMMU_FAMA_REMAP_SRC6_ADDR(base) ((base) + (0x818))
#define SOC_DMMU_FAMA_REMAP_SRC7_ADDR(base) ((base) + (0x81C))
#define SOC_DMMU_FAMA_REMAP_LEN0_ADDR(base) ((base) + (0x820))
#define SOC_DMMU_FAMA_REMAP_LEN1_ADDR(base) ((base) + (0x824))
#define SOC_DMMU_FAMA_REMAP_LEN2_ADDR(base) ((base) + (0x828))
#define SOC_DMMU_FAMA_REMAP_LEN3_ADDR(base) ((base) + (0x82C))
#define SOC_DMMU_FAMA_REMAP_LEN4_ADDR(base) ((base) + (0x830))
#define SOC_DMMU_FAMA_REMAP_LEN5_ADDR(base) ((base) + (0x834))
#define SOC_DMMU_FAMA_REMAP_LEN6_ADDR(base) ((base) + (0x838))
#define SOC_DMMU_FAMA_REMAP_LEN7_ADDR(base) ((base) + (0x83C))
#define SOC_DMMU_FAMA_REMAP_DST0_ADDR(base) ((base) + (0x840))
#define SOC_DMMU_FAMA_REMAP_DST1_ADDR(base) ((base) + (0x844))
#define SOC_DMMU_FAMA_REMAP_DST2_ADDR(base) ((base) + (0x848))
#define SOC_DMMU_FAMA_REMAP_DST3_ADDR(base) ((base) + (0x84C))
#define SOC_DMMU_FAMA_REMAP_DST4_ADDR(base) ((base) + (0x850))
#define SOC_DMMU_FAMA_REMAP_DST5_ADDR(base) ((base) + (0x854))
#define SOC_DMMU_FAMA_REMAP_DST6_ADDR(base) ((base) + (0x858))
#define SOC_DMMU_FAMA_REMAP_DST7_ADDR(base) ((base) + (0x85C))
#define SOC_DMMU_FAMA_REMAP_ADDR_DEFAULT_ADDR(base) ((base) + (0x860))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_wp : 32;
    } reg;
} SOC_DMMU_TLB_LOCK_UNION;
#endif
#define SOC_DMMU_TLB_LOCK_dmmu_tlb_wp_START (0)
#define SOC_DMMU_TLB_LOCK_dmmu_tlb_wp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_all_invalid : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_DMMU_TLB_ALL_INVALID_UNION;
#endif
#define SOC_DMMU_TLB_ALL_INVALID_dmmu_tlb_all_invalid_START (0)
#define SOC_DMMU_TLB_ALL_INVALID_dmmu_tlb_all_invalid_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_par_invalid_l : 32;
    } reg;
} SOC_DMMU_TLB_PAR_INVALID_L_UNION;
#endif
#define SOC_DMMU_TLB_PAR_INVALID_L_dmmu_tlb_par_invalid_l_START (0)
#define SOC_DMMU_TLB_PAR_INVALID_L_dmmu_tlb_par_invalid_l_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_par_invalid_h : 32;
    } reg;
} SOC_DMMU_TLB_PAR_INVALID_H_UNION;
#endif
#define SOC_DMMU_TLB_PAR_INVALID_H_dmmu_tlb_par_invalid_h_START (0)
#define SOC_DMMU_TLB_PAR_INVALID_H_dmmu_tlb_par_invalid_h_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_l_tlb_entry : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_L_TLB_ENTRY_UNION;
#endif
#define SOC_DMMU_L_TLB_ENTRY_dmmu_l_tlb_entry_START (0)
#define SOC_DMMU_L_TLB_ENTRY_dmmu_l_tlb_entry_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_sec_clr_tlb_entry : 1;
        unsigned int dmmu_sync_tlb_entry : 1;
        unsigned int dmmu_dirty_tlb_entry : 1;
        unsigned int dmmu_valid_tlb_entry : 1;
        unsigned int reserved : 11;
        unsigned int dmmu_h_tlb_entry : 17;
    } reg;
} SOC_DMMU_H_TLB_ENTRY_UNION;
#endif
#define SOC_DMMU_H_TLB_ENTRY_dmmu_sec_clr_tlb_entry_START (0)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_sec_clr_tlb_entry_END (0)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_sync_tlb_entry_START (1)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_sync_tlb_entry_END (1)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_dirty_tlb_entry_START (2)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_dirty_tlb_entry_END (2)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_valid_tlb_entry_START (3)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_valid_tlb_entry_END (3)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_h_tlb_entry_START (15)
#define SOC_DMMU_H_TLB_ENTRY_dmmu_h_tlb_entry_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_op_low_band : 32;
    } reg;
} SOC_DMMU_DDR_OP_LOW_BAND_UNION;
#endif
#define SOC_DMMU_DDR_OP_LOW_BAND_ddr_op_low_band_START (0)
#define SOC_DMMU_DDR_OP_LOW_BAND_ddr_op_low_band_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_op_high_band : 32;
    } reg;
} SOC_DMMU_DDR_OP_HIGH_BAND_UNION;
#endif
#define SOC_DMMU_DDR_OP_HIGH_BAND_ddr_op_high_band_START (0)
#define SOC_DMMU_DDR_OP_HIGH_BAND_ddr_op_high_band_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_dma_enable : 1;
        unsigned int dmmu_dma_halt_req : 1;
        unsigned int dmmu_dma_halt_ack : 1;
        unsigned int reserved_0 : 5;
        unsigned int dmmu_tag_clr_disable : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_DMMU_DMA_CTRL_UNION;
#endif
#define SOC_DMMU_DMA_CTRL_dmmu_dma_enable_START (0)
#define SOC_DMMU_DMA_CTRL_dmmu_dma_enable_END (0)
#define SOC_DMMU_DMA_CTRL_dmmu_dma_halt_req_START (1)
#define SOC_DMMU_DMA_CTRL_dmmu_dma_halt_req_END (1)
#define SOC_DMMU_DMA_CTRL_dmmu_dma_halt_ack_START (2)
#define SOC_DMMU_DMA_CTRL_dmmu_dma_halt_ack_END (2)
#define SOC_DMMU_DMA_CTRL_dmmu_tag_clr_disable_START (8)
#define SOC_DMMU_DMA_CTRL_dmmu_tag_clr_disable_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_dma_status : 2;
        unsigned int reserved_0 : 2;
        unsigned int dma_ctrl_curr_stat : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_DMMU_DMA_STATUS_UNION;
#endif
#define SOC_DMMU_DMA_STATUS_dmmu_dma_status_START (0)
#define SOC_DMMU_DMA_STATUS_dmmu_dma_status_END (1)
#define SOC_DMMU_DMA_STATUS_dma_ctrl_curr_stat_START (4)
#define SOC_DMMU_DMA_STATUS_dma_ctrl_curr_stat_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_dma_tlbaxi_count : 8;
        unsigned int dmmu_dma_tlbaxi_timeout_set : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_DMMU_DMA_TLBAXI_COUNT_UNION;
#endif
#define SOC_DMMU_DMA_TLBAXI_COUNT_dmmu_dma_tlbaxi_count_START (0)
#define SOC_DMMU_DMA_TLBAXI_COUNT_dmmu_dma_tlbaxi_count_END (7)
#define SOC_DMMU_DMA_TLBAXI_COUNT_dmmu_dma_tlbaxi_timeout_set_START (8)
#define SOC_DMMU_DMA_TLBAXI_COUNT_dmmu_dma_tlbaxi_timeout_set_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_lock_int : 1;
        unsigned int dmmu_dma_normal_int : 1;
        unsigned int dmmu_dma_abort_int : 1;
        unsigned int dmmu_dma_waiting_int : 1;
        unsigned int axi_wr_err_int : 1;
        unsigned int axi_rd_err_int : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_DMMU_DMA_INT_STATUS_UNION;
#endif
#define SOC_DMMU_DMA_INT_STATUS_dmmu_tlb_lock_int_START (0)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_tlb_lock_int_END (0)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_normal_int_START (1)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_normal_int_END (1)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_abort_int_START (2)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_abort_int_END (2)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_waiting_int_START (3)
#define SOC_DMMU_DMA_INT_STATUS_dmmu_dma_waiting_int_END (3)
#define SOC_DMMU_DMA_INT_STATUS_axi_wr_err_int_START (4)
#define SOC_DMMU_DMA_INT_STATUS_axi_wr_err_int_END (4)
#define SOC_DMMU_DMA_INT_STATUS_axi_rd_err_int_START (5)
#define SOC_DMMU_DMA_INT_STATUS_axi_rd_err_int_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_lock_mask : 1;
        unsigned int dmmu_dma_normal_mask : 1;
        unsigned int dmmu_dma_abort_mask : 1;
        unsigned int dmmu_dma_waiting_mask : 1;
        unsigned int axi_wr_err_int_mask : 1;
        unsigned int axi_rd_err_int_mask : 1;
        unsigned int reserved : 10;
        unsigned int dmmu_int_bitmask : 16;
    } reg;
} SOC_DMMU_DMA_INT_MASK_UNION;
#endif
#define SOC_DMMU_DMA_INT_MASK_dmmu_tlb_lock_mask_START (0)
#define SOC_DMMU_DMA_INT_MASK_dmmu_tlb_lock_mask_END (0)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_normal_mask_START (1)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_normal_mask_END (1)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_abort_mask_START (2)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_abort_mask_END (2)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_waiting_mask_START (3)
#define SOC_DMMU_DMA_INT_MASK_dmmu_dma_waiting_mask_END (3)
#define SOC_DMMU_DMA_INT_MASK_axi_wr_err_int_mask_START (4)
#define SOC_DMMU_DMA_INT_MASK_axi_wr_err_int_mask_END (4)
#define SOC_DMMU_DMA_INT_MASK_axi_rd_err_int_mask_START (5)
#define SOC_DMMU_DMA_INT_MASK_axi_rd_err_int_mask_END (5)
#define SOC_DMMU_DMA_INT_MASK_dmmu_int_bitmask_START (16)
#define SOC_DMMU_DMA_INT_MASK_dmmu_int_bitmask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_tlb_lock_int_clr : 1;
        unsigned int dmmu_dma_normal_int_clr : 1;
        unsigned int dmmu_dma_abort_int_clr : 1;
        unsigned int dmmu_dma_waiting_int_clr : 1;
        unsigned int axi_wr_err_int_clr : 1;
        unsigned int axi_rd_err_int_clr : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_DMMU_DMA_INT_CLEAR_UNION;
#endif
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_tlb_lock_int_clr_START (0)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_tlb_lock_int_clr_END (0)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_normal_int_clr_START (1)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_normal_int_clr_END (1)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_abort_int_clr_START (2)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_abort_int_clr_END (2)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_waiting_int_clr_START (3)
#define SOC_DMMU_DMA_INT_CLEAR_dmmu_dma_waiting_int_clr_END (3)
#define SOC_DMMU_DMA_INT_CLEAR_axi_wr_err_int_clr_START (4)
#define SOC_DMMU_DMA_INT_CLEAR_axi_wr_err_int_clr_END (4)
#define SOC_DMMU_DMA_INT_CLEAR_axi_rd_err_int_clr_START (5)
#define SOC_DMMU_DMA_INT_CLEAR_axi_rd_err_int_clr_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmmu_dma_clken : 1;
        unsigned int dmmu_dma_auto_clkgate_bypass : 1;
        unsigned int reserved : 14;
        unsigned int dmmu_clken_bitmask : 16;
    } reg;
} SOC_DMMU_DMA_CLKEN_SOFT_UNION;
#endif
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_dma_clken_START (0)
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_dma_clken_END (0)
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_dma_auto_clkgate_bypass_START (1)
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_dma_auto_clkgate_bypass_END (1)
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_clken_bitmask_START (16)
#define SOC_DMMU_DMA_CLKEN_SOFT_dmmu_clken_bitmask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_acnt : 16;
        unsigned int cmd_src_len : 4;
        unsigned int cmd_dst_len : 4;
        unsigned int cmd_src_size : 3;
        unsigned int reserved_0 : 1;
        unsigned int cmd_dst_size : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_DMMU_DMA_BYTE_CFG_UNION;
#endif
#define SOC_DMMU_DMA_BYTE_CFG_cmd_acnt_START (0)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_acnt_END (15)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_src_len_START (16)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_src_len_END (19)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_dst_len_START (20)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_dst_len_END (23)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_src_size_START (24)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_src_size_END (26)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_dst_size_START (28)
#define SOC_DMMU_DMA_BYTE_CFG_cmd_dst_size_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_aruser : 5;
        unsigned int reserved_0 : 3;
        unsigned int cmd_arprot : 3;
        unsigned int reserved_1 : 1;
        unsigned int cmd_arcache : 4;
        unsigned int cmd_awuser : 5;
        unsigned int reserved_2 : 3;
        unsigned int cmd_awprot : 3;
        unsigned int reserved_3 : 1;
        unsigned int cmd_awcache : 4;
    } reg;
} SOC_DMMU_DMA_AXI_CFG_UNION;
#endif
#define SOC_DMMU_DMA_AXI_CFG_cmd_aruser_START (0)
#define SOC_DMMU_DMA_AXI_CFG_cmd_aruser_END (4)
#define SOC_DMMU_DMA_AXI_CFG_cmd_arprot_START (8)
#define SOC_DMMU_DMA_AXI_CFG_cmd_arprot_END (10)
#define SOC_DMMU_DMA_AXI_CFG_cmd_arcache_START (12)
#define SOC_DMMU_DMA_AXI_CFG_cmd_arcache_END (15)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awuser_START (16)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awuser_END (20)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awprot_START (24)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awprot_END (26)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awcache_START (28)
#define SOC_DMMU_DMA_AXI_CFG_cmd_awcache_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_DMMU_MEM_CTRL_UNION;
#endif
#define SOC_DMMU_MEM_CTRL_mem_ctrl_START (0)
#define SOC_DMMU_MEM_CTRL_mem_ctrl_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dma_ctrl_mode : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_DMMU_DMA_CTRL_MODE_UNION;
#endif
#define SOC_DMMU_DMA_CTRL_MODE_dma_ctrl_mode_START (0)
#define SOC_DMMU_DMA_CTRL_MODE_dma_ctrl_mode_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_src_addr_sw : 32;
    } reg;
} SOC_DMMU_DMA_SRC_ADDR_UNION;
#endif
#define SOC_DMMU_DMA_SRC_ADDR_cmd_src_addr_sw_START (0)
#define SOC_DMMU_DMA_SRC_ADDR_cmd_src_addr_sw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_dst_addr_sw : 32;
    } reg;
} SOC_DMMU_DMA_DST_ADDR_UNION;
#endif
#define SOC_DMMU_DMA_DST_ADDR_cmd_dst_addr_sw_START (0)
#define SOC_DMMU_DMA_DST_ADDR_cmd_dst_addr_sw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_valid_sw : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_DMMU_DMA_VALID_SW_UNION;
#endif
#define SOC_DMMU_DMA_VALID_SW_cmd_valid_sw_START (0)
#define SOC_DMMU_DMA_VALID_SW_cmd_valid_sw_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_secc_start_sw : 32;
    } reg;
} SOC_DMMU_SECC_START_ADDR_UNION;
#endif
#define SOC_DMMU_SECC_START_ADDR_awaddr_secc_start_sw_START (0)
#define SOC_DMMU_SECC_START_ADDR_awaddr_secc_start_sw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_secc_target_sw : 32;
    } reg;
} SOC_DMMU_SECC_TARGET_ADDR_UNION;
#endif
#define SOC_DMMU_SECC_TARGET_ADDR_awaddr_secc_target_sw_START (0)
#define SOC_DMMU_SECC_TARGET_ADDR_awaddr_secc_target_sw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wstrb_secc_sw : 8;
        unsigned int awlen_secc_sw : 4;
        unsigned int outstanding_number_secc : 3;
        unsigned int reserved : 17;
    } reg;
} SOC_DMMU_SECC_SW_CFG_UNION;
#endif
#define SOC_DMMU_SECC_SW_CFG_wstrb_secc_sw_START (0)
#define SOC_DMMU_SECC_SW_CFG_wstrb_secc_sw_END (7)
#define SOC_DMMU_SECC_SW_CFG_awlen_secc_sw_START (8)
#define SOC_DMMU_SECC_SW_CFG_awlen_secc_sw_END (11)
#define SOC_DMMU_SECC_SW_CFG_outstanding_number_secc_START (12)
#define SOC_DMMU_SECC_SW_CFG_outstanding_number_secc_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src0 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC0_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC0_icfg_addr_src0_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC0_icfg_addr_src0_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src1 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC1_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC1_icfg_addr_src1_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC1_icfg_addr_src1_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src2 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC2_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC2_icfg_addr_src2_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC2_icfg_addr_src2_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src3 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC3_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC3_icfg_addr_src3_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC3_icfg_addr_src3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src4 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC4_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC4_icfg_addr_src4_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC4_icfg_addr_src4_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src5 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC5_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC5_icfg_addr_src5_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC5_icfg_addr_src5_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src6 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC6_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC6_icfg_addr_src6_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC6_icfg_addr_src6_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_src7 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_SRC7_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_SRC7_icfg_addr_src7_START (0)
#define SOC_DMMU_FAMA_REMAP_SRC7_icfg_addr_src7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len0 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN0_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN0_icfg_addr_len0_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN0_icfg_addr_len0_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len1 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN1_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN1_icfg_addr_len1_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN1_icfg_addr_len1_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len2 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN2_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN2_icfg_addr_len2_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN2_icfg_addr_len2_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len3 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN3_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN3_icfg_addr_len3_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN3_icfg_addr_len3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len4 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN4_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN4_icfg_addr_len4_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN4_icfg_addr_len4_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len5 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN5_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN5_icfg_addr_len5_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN5_icfg_addr_len5_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len6 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN6_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN6_icfg_addr_len6_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN6_icfg_addr_len6_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len7 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_DMMU_FAMA_REMAP_LEN7_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_LEN7_icfg_addr_len7_START (0)
#define SOC_DMMU_FAMA_REMAP_LEN7_icfg_addr_len7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst0 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST0_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST0_icfg_addr_dst0_START (0)
#define SOC_DMMU_FAMA_REMAP_DST0_icfg_addr_dst0_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst1 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST1_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST1_icfg_addr_dst1_START (0)
#define SOC_DMMU_FAMA_REMAP_DST1_icfg_addr_dst1_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst2 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST2_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST2_icfg_addr_dst2_START (0)
#define SOC_DMMU_FAMA_REMAP_DST2_icfg_addr_dst2_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst3 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST3_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST3_icfg_addr_dst3_START (0)
#define SOC_DMMU_FAMA_REMAP_DST3_icfg_addr_dst3_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst4 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST4_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST4_icfg_addr_dst4_START (0)
#define SOC_DMMU_FAMA_REMAP_DST4_icfg_addr_dst4_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst5 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST5_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST5_icfg_addr_dst5_START (0)
#define SOC_DMMU_FAMA_REMAP_DST5_icfg_addr_dst5_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst6 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST6_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST6_icfg_addr_dst6_START (0)
#define SOC_DMMU_FAMA_REMAP_DST6_icfg_addr_dst6_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst7 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_DMMU_FAMA_REMAP_DST7_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_DST7_icfg_addr_dst7_START (0)
#define SOC_DMMU_FAMA_REMAP_DST7_icfg_addr_dst7_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_default : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_DMMU_FAMA_REMAP_ADDR_DEFAULT_UNION;
#endif
#define SOC_DMMU_FAMA_REMAP_ADDR_DEFAULT_icfg_addr_default_START (0)
#define SOC_DMMU_FAMA_REMAP_ADDR_DEFAULT_icfg_addr_default_END (6)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
