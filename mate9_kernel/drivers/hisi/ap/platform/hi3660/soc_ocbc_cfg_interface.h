#ifndef __SOC_OCBC_CFG_INTERFACE_H__
#define __SOC_OCBC_CFG_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_OCBC_CFG_CG_SET_ADDR(base) ((base) + (0x0000))
#define SOC_OCBC_CFG_CG_CLR_ADDR(base) ((base) + (0x0004))
#define SOC_OCBC_CFG_CG_STATUS_ADDR(base) ((base) + (0x0008))
#define SOC_OCBC_CFG_RST_SET_ADDR(base) ((base) + (0x0010))
#define SOC_OCBC_CFG_RST_CLR_ADDR(base) ((base) + (0x0014))
#define SOC_OCBC_CFG_RST_STATUS_ADDR(base) ((base) + (0x0018))
#define SOC_OCBC_CFG_SECURE_SET_ADDR(base) ((base) + (0x0020))
#define SOC_OCBC_CFG_SECURE_CLR_ADDR(base) ((base) + (0x0024))
#define SOC_OCBC_CFG_SECURE_STA_ADDR(base) ((base) + (0x0028))
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_ADDR(base) ((base) + (0x0030))
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_ADDR(base) ((base) + (0x0034))
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_ADDR(base) ((base) + (0x0038))
#define SOC_OCBC_CFG_DLOCK_BYPASS_ADDR(base) ((base) + (0x0040))
#define SOC_OCBC_CFG_MEM_CTRL_ADDR(base) ((base) + (0x0044))
#define SOC_OCBC_CFG_MEM_DELSEL_ADDR(base) ((base) + (0x0048))
#define SOC_OCBC_CFG_INTER_INTR_SET_ADDR(base) ((base) + (0x0050))
#define SOC_OCBC_CFG_INTER_INTR_CLR_ADDR(base) ((base) + (0x0054))
#define SOC_OCBC_CFG_INTER_INTR_STA_ADDR(base) ((base) + (0x0058))
#define SOC_OCBC_CFG_MD_IRM_SEL_CTRL_ADDR(base) ((base) + (0x0060))
#define SOC_OCBC_CFG_MD_PWR_CTRL_ADDR(base) ((base) + (0x0064))
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_ADDR(base) ((base) + (0x0070))
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_ADDR(base) ((base) + (0x0074))
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_ADDR(base) ((base) + (0x0078))
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_ADDR(base) ((base) + (0x007C))
#define SOC_OCBC_CFG_M3_CTRL_ADDR(base) ((base) + (0x0080))
#define SOC_OCBC_CFG_M3_ACCESS_WIN_ADDR(base) ((base) + (0x0088))
#define SOC_OCBC_CFG_M3_RST_FLAG_ADDR(base) ((base) + (0x008C))
#define SOC_OCBC_CFG_M3_RST_SET_ADDR(base) ((base) + (0x0090))
#define SOC_OCBC_CFG_M3_RST_CLR_ADDR(base) ((base) + (0x0094))
#define SOC_OCBC_CFG_M3_RST_STA_ADDR(base) ((base) + (0x0098))
#define SOC_OCBC_CFG_TXEV_EXT_ADDR_ADDR(base) ((base) + (0x00A0))
#define SOC_OCBC_CFG_MONITOR_CTRL_ADDR_ADDR(base) ((base) + (0x00A8))
#define SOC_OCBC_CFG_PE_INTR_MASK_ADDR(base) ((base) + (0x00B0))
#define SOC_OCBC_CFG_WAKEUP_MASK_ADDR(base) ((base) + (0x00C0))
#define SOC_OCBC_CFG_SYS_WAKEUP_ADDR(base) ((base) + (0x00C4))
#define SOC_OCBC_CFG_INT_STATUS_ADDR(base) ((base) + (0x00C8))
#define SOC_OCBC_CFG_BACKUP_REG_ADDR(base) ((base) + (0x00CC))
#define SOC_OCBC_CFG_AOCLK_CTRL_ADDR(base) ((base) + (0x00D0))
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_ADDR(base) ((base) + (0x00D4))
#define SOC_OCBC_CFG_AOCLK_CTRL_32K_ADDR_ADDR(base) ((base) + (0x00D8))
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_ADDR(base) ((base) + (0x00DC))
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_ADDR(base) ((base) + (0x00E0))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_clk_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_clk_on : 1;
        unsigned int timer_clk_on : 1;
        unsigned int mbox_clk_on : 4;
        unsigned int dapclk_on : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_OCBC_CFG_CG_SET_UNION;
#endif
#define SOC_OCBC_CFG_CG_SET_ram_clk_on_START (0)
#define SOC_OCBC_CFG_CG_SET_ram_clk_on_END (0)
#define SOC_OCBC_CFG_CG_SET_wdg_clk_on_START (2)
#define SOC_OCBC_CFG_CG_SET_wdg_clk_on_END (2)
#define SOC_OCBC_CFG_CG_SET_timer_clk_on_START (3)
#define SOC_OCBC_CFG_CG_SET_timer_clk_on_END (3)
#define SOC_OCBC_CFG_CG_SET_mbox_clk_on_START (4)
#define SOC_OCBC_CFG_CG_SET_mbox_clk_on_END (7)
#define SOC_OCBC_CFG_CG_SET_dapclk_on_START (8)
#define SOC_OCBC_CFG_CG_SET_dapclk_on_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_clk_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_clk_on : 1;
        unsigned int timer_clk_on : 1;
        unsigned int mbox_clk_on : 4;
        unsigned int dapclk_on : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_OCBC_CFG_CG_CLR_UNION;
#endif
#define SOC_OCBC_CFG_CG_CLR_ram_clk_on_START (0)
#define SOC_OCBC_CFG_CG_CLR_ram_clk_on_END (0)
#define SOC_OCBC_CFG_CG_CLR_wdg_clk_on_START (2)
#define SOC_OCBC_CFG_CG_CLR_wdg_clk_on_END (2)
#define SOC_OCBC_CFG_CG_CLR_timer_clk_on_START (3)
#define SOC_OCBC_CFG_CG_CLR_timer_clk_on_END (3)
#define SOC_OCBC_CFG_CG_CLR_mbox_clk_on_START (4)
#define SOC_OCBC_CFG_CG_CLR_mbox_clk_on_END (7)
#define SOC_OCBC_CFG_CG_CLR_dapclk_on_START (8)
#define SOC_OCBC_CFG_CG_CLR_dapclk_on_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_clk_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_clk_on : 1;
        unsigned int timer_clk_on : 1;
        unsigned int mbox_clk_on : 4;
        unsigned int dapclk_on : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_OCBC_CFG_CG_STATUS_UNION;
#endif
#define SOC_OCBC_CFG_CG_STATUS_ram_clk_on_START (0)
#define SOC_OCBC_CFG_CG_STATUS_ram_clk_on_END (0)
#define SOC_OCBC_CFG_CG_STATUS_wdg_clk_on_START (2)
#define SOC_OCBC_CFG_CG_STATUS_wdg_clk_on_END (2)
#define SOC_OCBC_CFG_CG_STATUS_timer_clk_on_START (3)
#define SOC_OCBC_CFG_CG_STATUS_timer_clk_on_END (3)
#define SOC_OCBC_CFG_CG_STATUS_mbox_clk_on_START (4)
#define SOC_OCBC_CFG_CG_STATUS_mbox_clk_on_END (7)
#define SOC_OCBC_CFG_CG_STATUS_dapclk_on_START (8)
#define SOC_OCBC_CFG_CG_STATUS_dapclk_on_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_rst_req : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_rst_req : 1;
        unsigned int timer_rst_req : 1;
        unsigned int mbox_rst_req : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_OCBC_CFG_RST_SET_UNION;
#endif
#define SOC_OCBC_CFG_RST_SET_ram_rst_req_START (0)
#define SOC_OCBC_CFG_RST_SET_ram_rst_req_END (0)
#define SOC_OCBC_CFG_RST_SET_wdg_rst_req_START (2)
#define SOC_OCBC_CFG_RST_SET_wdg_rst_req_END (2)
#define SOC_OCBC_CFG_RST_SET_timer_rst_req_START (3)
#define SOC_OCBC_CFG_RST_SET_timer_rst_req_END (3)
#define SOC_OCBC_CFG_RST_SET_mbox_rst_req_START (4)
#define SOC_OCBC_CFG_RST_SET_mbox_rst_req_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_rst_req : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_rst_req : 1;
        unsigned int timer_rst_req : 1;
        unsigned int mbox_rst_req : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_OCBC_CFG_RST_CLR_UNION;
#endif
#define SOC_OCBC_CFG_RST_CLR_ram_rst_req_START (0)
#define SOC_OCBC_CFG_RST_CLR_ram_rst_req_END (0)
#define SOC_OCBC_CFG_RST_CLR_wdg_rst_req_START (2)
#define SOC_OCBC_CFG_RST_CLR_wdg_rst_req_END (2)
#define SOC_OCBC_CFG_RST_CLR_timer_rst_req_START (3)
#define SOC_OCBC_CFG_RST_CLR_timer_rst_req_END (3)
#define SOC_OCBC_CFG_RST_CLR_mbox_rst_req_START (4)
#define SOC_OCBC_CFG_RST_CLR_mbox_rst_req_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_rst_req : 1;
        unsigned int reserved_0 : 1;
        unsigned int wdg_rst_req : 1;
        unsigned int timer_rst_req : 1;
        unsigned int mbox_rst_req : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_OCBC_CFG_RST_STATUS_UNION;
#endif
#define SOC_OCBC_CFG_RST_STATUS_ram_rst_req_START (0)
#define SOC_OCBC_CFG_RST_STATUS_ram_rst_req_END (0)
#define SOC_OCBC_CFG_RST_STATUS_wdg_rst_req_START (2)
#define SOC_OCBC_CFG_RST_STATUS_wdg_rst_req_END (2)
#define SOC_OCBC_CFG_RST_STATUS_timer_rst_req_START (3)
#define SOC_OCBC_CFG_RST_STATUS_timer_rst_req_END (3)
#define SOC_OCBC_CFG_RST_STATUS_mbox_rst_req_START (4)
#define SOC_OCBC_CFG_RST_STATUS_mbox_rst_req_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_sec_n : 1;
        unsigned int cfg_sec_n : 1;
        unsigned int wdg_sec_n : 1;
        unsigned int timer_sec_n : 1;
        unsigned int mbox_sec_n : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_OCBC_CFG_SECURE_SET_UNION;
#endif
#define SOC_OCBC_CFG_SECURE_SET_ram_sec_n_START (0)
#define SOC_OCBC_CFG_SECURE_SET_ram_sec_n_END (0)
#define SOC_OCBC_CFG_SECURE_SET_cfg_sec_n_START (1)
#define SOC_OCBC_CFG_SECURE_SET_cfg_sec_n_END (1)
#define SOC_OCBC_CFG_SECURE_SET_wdg_sec_n_START (2)
#define SOC_OCBC_CFG_SECURE_SET_wdg_sec_n_END (2)
#define SOC_OCBC_CFG_SECURE_SET_timer_sec_n_START (3)
#define SOC_OCBC_CFG_SECURE_SET_timer_sec_n_END (3)
#define SOC_OCBC_CFG_SECURE_SET_mbox_sec_n_START (4)
#define SOC_OCBC_CFG_SECURE_SET_mbox_sec_n_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_sec_n : 1;
        unsigned int cfg_sec_n : 1;
        unsigned int wdg_sec_n : 1;
        unsigned int timer_sec_n : 1;
        unsigned int mbox_sec_n : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_OCBC_CFG_SECURE_CLR_UNION;
#endif
#define SOC_OCBC_CFG_SECURE_CLR_ram_sec_n_START (0)
#define SOC_OCBC_CFG_SECURE_CLR_ram_sec_n_END (0)
#define SOC_OCBC_CFG_SECURE_CLR_cfg_sec_n_START (1)
#define SOC_OCBC_CFG_SECURE_CLR_cfg_sec_n_END (1)
#define SOC_OCBC_CFG_SECURE_CLR_wdg_sec_n_START (2)
#define SOC_OCBC_CFG_SECURE_CLR_wdg_sec_n_END (2)
#define SOC_OCBC_CFG_SECURE_CLR_timer_sec_n_START (3)
#define SOC_OCBC_CFG_SECURE_CLR_timer_sec_n_END (3)
#define SOC_OCBC_CFG_SECURE_CLR_mbox_sec_n_START (4)
#define SOC_OCBC_CFG_SECURE_CLR_mbox_sec_n_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_sec_n : 1;
        unsigned int cfg_sec_n : 1;
        unsigned int wdg_sec_n : 1;
        unsigned int timer_sec_n : 1;
        unsigned int mbox_sec_n : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_OCBC_CFG_SECURE_STA_UNION;
#endif
#define SOC_OCBC_CFG_SECURE_STA_ram_sec_n_START (0)
#define SOC_OCBC_CFG_SECURE_STA_ram_sec_n_END (0)
#define SOC_OCBC_CFG_SECURE_STA_cfg_sec_n_START (1)
#define SOC_OCBC_CFG_SECURE_STA_cfg_sec_n_END (1)
#define SOC_OCBC_CFG_SECURE_STA_wdg_sec_n_START (2)
#define SOC_OCBC_CFG_SECURE_STA_wdg_sec_n_END (2)
#define SOC_OCBC_CFG_SECURE_STA_timer_sec_n_START (3)
#define SOC_OCBC_CFG_SECURE_STA_timer_sec_n_END (3)
#define SOC_OCBC_CFG_SECURE_STA_mbox_sec_n_START (4)
#define SOC_OCBC_CFG_SECURE_STA_mbox_sec_n_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_hclk_dcm_off : 1;
        unsigned int cfg_pclk_dcm_off : 1;
        unsigned int wdg_pclk_dcm_off : 1;
        unsigned int timer_pclk_dcm_off : 1;
        unsigned int mbox_pclk_dcm_off : 4;
        unsigned int peri_hclk_dcm_off : 1;
        unsigned int bus_hclk_dcm_off : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_OCBC_CFG_PCLK_DCMOFF_SET_UNION;
#endif
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_ram_hclk_dcm_off_START (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_ram_hclk_dcm_off_END (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_cfg_pclk_dcm_off_START (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_cfg_pclk_dcm_off_END (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_wdg_pclk_dcm_off_START (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_wdg_pclk_dcm_off_END (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_timer_pclk_dcm_off_START (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_timer_pclk_dcm_off_END (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_mbox_pclk_dcm_off_START (4)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_mbox_pclk_dcm_off_END (7)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_peri_hclk_dcm_off_START (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_peri_hclk_dcm_off_END (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_bus_hclk_dcm_off_START (9)
#define SOC_OCBC_CFG_PCLK_DCMOFF_SET_bus_hclk_dcm_off_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_hclk_dcm_off : 1;
        unsigned int cfg_pclk_dcm_off : 1;
        unsigned int wdg_pclk_dcm_off : 1;
        unsigned int timer_pclk_dcm_off : 1;
        unsigned int mbox_pclk_dcm_off : 4;
        unsigned int peri_hclk_dcm_off : 1;
        unsigned int bus_hclk_dcm_off : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_OCBC_CFG_PCLK_DCMOFF_CLR_UNION;
#endif
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_ram_hclk_dcm_off_START (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_ram_hclk_dcm_off_END (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_cfg_pclk_dcm_off_START (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_cfg_pclk_dcm_off_END (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_wdg_pclk_dcm_off_START (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_wdg_pclk_dcm_off_END (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_timer_pclk_dcm_off_START (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_timer_pclk_dcm_off_END (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_mbox_pclk_dcm_off_START (4)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_mbox_pclk_dcm_off_END (7)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_peri_hclk_dcm_off_START (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_peri_hclk_dcm_off_END (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_bus_hclk_dcm_off_START (9)
#define SOC_OCBC_CFG_PCLK_DCMOFF_CLR_bus_hclk_dcm_off_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ram_hclk_dcm_off : 1;
        unsigned int cfg_pclk_dcm_off : 1;
        unsigned int wdg_pclk_dcm_off : 1;
        unsigned int timer_pclk_dcm_off : 1;
        unsigned int mbox_pclk_dcm_off : 4;
        unsigned int peri_hclk_dcm_off : 1;
        unsigned int bus_hclk_dcm_off : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_OCBC_CFG_PCLK_DCMOFF_STA_UNION;
#endif
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_ram_hclk_dcm_off_START (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_ram_hclk_dcm_off_END (0)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_cfg_pclk_dcm_off_START (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_cfg_pclk_dcm_off_END (1)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_wdg_pclk_dcm_off_START (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_wdg_pclk_dcm_off_END (2)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_timer_pclk_dcm_off_START (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_timer_pclk_dcm_off_END (3)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_mbox_pclk_dcm_off_START (4)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_mbox_pclk_dcm_off_END (7)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_peri_hclk_dcm_off_START (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_peri_hclk_dcm_off_END (8)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_bus_hclk_dcm_off_START (9)
#define SOC_OCBC_CFG_PCLK_DCMOFF_STA_bus_hclk_dcm_off_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dlock_bypass_ram : 1;
        unsigned int reserved_0 : 15;
        unsigned int dlock_avoid : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_OCBC_CFG_DLOCK_BYPASS_UNION;
#endif
#define SOC_OCBC_CFG_DLOCK_BYPASS_dlock_bypass_ram_START (0)
#define SOC_OCBC_CFG_DLOCK_BYPASS_dlock_bypass_ram_END (0)
#define SOC_OCBC_CFG_DLOCK_BYPASS_dlock_avoid_START (16)
#define SOC_OCBC_CFG_DLOCK_BYPASS_dlock_avoid_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spsram_slp : 1;
        unsigned int spsram_dslp : 1;
        unsigned int spsram_sd : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_OCBC_CFG_MEM_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_MEM_CTRL_spsram_slp_START (0)
#define SOC_OCBC_CFG_MEM_CTRL_spsram_slp_END (0)
#define SOC_OCBC_CFG_MEM_CTRL_spsram_dslp_START (1)
#define SOC_OCBC_CFG_MEM_CTRL_spsram_dslp_END (1)
#define SOC_OCBC_CFG_MEM_CTRL_spsram_sd_START (2)
#define SOC_OCBC_CFG_MEM_CTRL_spsram_sd_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_wrsel : 2;
        unsigned int mem_rtsel : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_OCBC_CFG_MEM_DELSEL_UNION;
#endif
#define SOC_OCBC_CFG_MEM_DELSEL_mem_wrsel_START (0)
#define SOC_OCBC_CFG_MEM_DELSEL_mem_wrsel_END (1)
#define SOC_OCBC_CFG_MEM_DELSEL_mem_rtsel_START (2)
#define SOC_OCBC_CFG_MEM_DELSEL_mem_rtsel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_int : 32;
    } reg;
} SOC_OCBC_CFG_INTER_INTR_SET_UNION;
#endif
#define SOC_OCBC_CFG_INTER_INTR_SET_inter_int_START (0)
#define SOC_OCBC_CFG_INTER_INTR_SET_inter_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_int : 32;
    } reg;
} SOC_OCBC_CFG_INTER_INTR_CLR_UNION;
#endif
#define SOC_OCBC_CFG_INTER_INTR_CLR_inter_int_START (0)
#define SOC_OCBC_CFG_INTER_INTR_CLR_inter_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_int : 32;
    } reg;
} SOC_OCBC_CFG_INTER_INTR_STA_UNION;
#endif
#define SOC_OCBC_CFG_INTER_INTR_STA_inter_int_START (0)
#define SOC_OCBC_CFG_INTER_INTR_STA_inter_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int irm_master_sel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_OCBC_CFG_MD_IRM_SEL_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_MD_IRM_SEL_CTRL_irm_master_sel_START (0)
#define SOC_OCBC_CFG_MD_IRM_SEL_CTRL_irm_master_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int irm_mtcmos_ctrl : 1;
        unsigned int irm_iso_en : 1;
        unsigned int irm_mtcmos_rdy : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_OCBC_CFG_MD_PWR_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_mtcmos_ctrl_START (0)
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_mtcmos_ctrl_END (0)
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_iso_en_START (1)
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_iso_en_END (1)
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_mtcmos_rdy_START (2)
#define SOC_OCBC_CFG_MD_PWR_CTRL_irm_mtcmos_rdy_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_ap_dslp_grp0 : 1;
        unsigned int soc_ap_dslp_grp1 : 3;
        unsigned int soc_ap_dslp_grp2 : 4;
        unsigned int soc_ap_dslp_grp3 : 5;
        unsigned int reserved_0 : 3;
        unsigned int soc_ap_sd_grp0 : 1;
        unsigned int soc_ap_sd_grp1 : 3;
        unsigned int soc_ap_sd_grp2 : 4;
        unsigned int soc_ap_sd_grp3 : 5;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_OCBC_CFG_MD_IRM_CTRL_0_UNION;
#endif
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp0_START (0)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp0_END (0)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp1_START (1)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp1_END (3)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp2_START (4)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp2_END (7)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp3_START (8)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_dslp_grp3_END (12)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp0_START (16)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp0_END (16)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp1_START (17)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp1_END (19)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp2_START (20)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp2_END (23)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp3_START (24)
#define SOC_OCBC_CFG_MD_IRM_CTRL_0_soc_ap_sd_grp3_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_ap_dslp_grp4 : 4;
        unsigned int soc_ap_dslp_grp5 : 6;
        unsigned int soc_ap_dslp_grp6 : 11;
        unsigned int soc_ap_dslp_grp7 : 11;
    } reg;
} SOC_OCBC_CFG_MD_IRM_CTRL_1_UNION;
#endif
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp4_START (0)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp4_END (3)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp5_START (4)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp5_END (9)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp6_START (10)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp6_END (20)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp7_START (21)
#define SOC_OCBC_CFG_MD_IRM_CTRL_1_soc_ap_dslp_grp7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_ap_sd_grp4 : 4;
        unsigned int soc_ap_sd_grp5 : 6;
        unsigned int soc_ap_sd_grp6 : 11;
        unsigned int soc_ap_sd_grp7 : 11;
    } reg;
} SOC_OCBC_CFG_MD_IRM_CTRL_2_UNION;
#endif
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp4_START (0)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp4_END (3)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp5_START (4)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp5_END (9)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp6_START (10)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp6_END (20)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp7_START (21)
#define SOC_OCBC_CFG_MD_IRM_CTRL_2_soc_ap_sd_grp7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soc_ap_occupy_grp1 : 2;
        unsigned int soc_ap_occupy_grp2 : 2;
        unsigned int soc_ap_occupy_grp3 : 2;
        unsigned int soc_ap_occupy_grp4 : 2;
        unsigned int soc_ap_occupy_grp5 : 2;
        unsigned int soc_ap_occupy_grp6 : 2;
        unsigned int soc_ap_occupy_grp7 : 2;
        unsigned int ap_irm_ctrl_3 : 18;
    } reg;
} SOC_OCBC_CFG_MD_IRM_CTRL_3_UNION;
#endif
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp1_START (0)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp1_END (1)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp2_START (2)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp2_END (3)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp3_START (4)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp3_END (5)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp4_START (6)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp4_END (7)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp5_START (8)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp5_END (9)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp6_START (10)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp6_END (11)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp7_START (12)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_soc_ap_occupy_grp7_END (13)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_ap_irm_ctrl_3_START (14)
#define SOC_OCBC_CFG_MD_IRM_CTRL_3_ap_irm_ctrl_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysresetreq_en : 1;
        unsigned int halt_bypass : 1;
        unsigned int timclken_bypass : 1;
        unsigned int testpin_en : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_OCBC_CFG_M3_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_M3_CTRL_sysresetreq_en_START (0)
#define SOC_OCBC_CFG_M3_CTRL_sysresetreq_en_END (0)
#define SOC_OCBC_CFG_M3_CTRL_halt_bypass_START (1)
#define SOC_OCBC_CFG_M3_CTRL_halt_bypass_END (1)
#define SOC_OCBC_CFG_M3_CTRL_timclken_bypass_START (2)
#define SOC_OCBC_CFG_M3_CTRL_timclken_bypass_END (2)
#define SOC_OCBC_CFG_M3_CTRL_testpin_en_START (3)
#define SOC_OCBC_CFG_M3_CTRL_testpin_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 28;
        unsigned int access_win : 4;
    } reg;
} SOC_OCBC_CFG_M3_ACCESS_WIN_UNION;
#endif
#define SOC_OCBC_CFG_M3_ACCESS_WIN_access_win_START (28)
#define SOC_OCBC_CFG_M3_ACCESS_WIN_access_win_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sysresetreq_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_OCBC_CFG_M3_RST_FLAG_UNION;
#endif
#define SOC_OCBC_CFG_M3_RST_FLAG_sysresetreq_flag_START (0)
#define SOC_OCBC_CFG_M3_RST_FLAG_sysresetreq_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int poreset : 1;
        unsigned int sysreset : 1;
        unsigned int coresight : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_OCBC_CFG_M3_RST_SET_UNION;
#endif
#define SOC_OCBC_CFG_M3_RST_SET_poreset_START (0)
#define SOC_OCBC_CFG_M3_RST_SET_poreset_END (0)
#define SOC_OCBC_CFG_M3_RST_SET_sysreset_START (1)
#define SOC_OCBC_CFG_M3_RST_SET_sysreset_END (1)
#define SOC_OCBC_CFG_M3_RST_SET_coresight_START (2)
#define SOC_OCBC_CFG_M3_RST_SET_coresight_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int poreset : 1;
        unsigned int sysreset : 1;
        unsigned int coresight : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_OCBC_CFG_M3_RST_CLR_UNION;
#endif
#define SOC_OCBC_CFG_M3_RST_CLR_poreset_START (0)
#define SOC_OCBC_CFG_M3_RST_CLR_poreset_END (0)
#define SOC_OCBC_CFG_M3_RST_CLR_sysreset_START (1)
#define SOC_OCBC_CFG_M3_RST_CLR_sysreset_END (1)
#define SOC_OCBC_CFG_M3_RST_CLR_coresight_START (2)
#define SOC_OCBC_CFG_M3_RST_CLR_coresight_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int poreset : 1;
        unsigned int sysreset : 1;
        unsigned int coresight : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_OCBC_CFG_M3_RST_STA_UNION;
#endif
#define SOC_OCBC_CFG_M3_RST_STA_poreset_START (0)
#define SOC_OCBC_CFG_M3_RST_STA_poreset_END (0)
#define SOC_OCBC_CFG_M3_RST_STA_sysreset_START (1)
#define SOC_OCBC_CFG_M3_RST_STA_sysreset_END (1)
#define SOC_OCBC_CFG_M3_RST_STA_coresight_START (2)
#define SOC_OCBC_CFG_M3_RST_STA_coresight_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int txev_ext_cycle : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_OCBC_CFG_TXEV_EXT_ADDR_UNION;
#endif
#define SOC_OCBC_CFG_TXEV_EXT_ADDR_txev_ext_cycle_START (0)
#define SOC_OCBC_CFG_TXEV_EXT_ADDR_txev_ext_cycle_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int monitor_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int monitor_sel : 3;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_OCBC_CFG_MONITOR_CTRL_ADDR_UNION;
#endif
#define SOC_OCBC_CFG_MONITOR_CTRL_ADDR_monitor_en_START (0)
#define SOC_OCBC_CFG_MONITOR_CTRL_ADDR_monitor_en_END (0)
#define SOC_OCBC_CFG_MONITOR_CTRL_ADDR_monitor_sel_START (4)
#define SOC_OCBC_CFG_MONITOR_CTRL_ADDR_monitor_sel_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pe_intr_mask : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_OCBC_CFG_PE_INTR_MASK_UNION;
#endif
#define SOC_OCBC_CFG_PE_INTR_MASK_pe_intr_mask_START (0)
#define SOC_OCBC_CFG_PE_INTR_MASK_pe_intr_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wakeup_mask : 3;
        unsigned int reserved_0 : 5;
        unsigned int ao_crg_mask : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_OCBC_CFG_WAKEUP_MASK_UNION;
#endif
#define SOC_OCBC_CFG_WAKEUP_MASK_wakeup_mask_START (0)
#define SOC_OCBC_CFG_WAKEUP_MASK_wakeup_mask_END (2)
#define SOC_OCBC_CFG_WAKEUP_MASK_ao_crg_mask_START (8)
#define SOC_OCBC_CFG_WAKEUP_MASK_ao_crg_mask_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ocbc_wakeup_reg : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_OCBC_CFG_SYS_WAKEUP_UNION;
#endif
#define SOC_OCBC_CFG_SYS_WAKEUP_ocbc_wakeup_reg_START (0)
#define SOC_OCBC_CFG_SYS_WAKEUP_ocbc_wakeup_reg_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mbox_intr : 16;
        unsigned int timint1 : 1;
        unsigned int timint2 : 1;
        unsigned int intr_wdog : 1;
        unsigned int intr_wdog_res : 1;
        unsigned int ocbc_pe_npintr : 4;
        unsigned int reserved : 8;
    } reg;
} SOC_OCBC_CFG_INT_STATUS_UNION;
#endif
#define SOC_OCBC_CFG_INT_STATUS_mbox_intr_START (0)
#define SOC_OCBC_CFG_INT_STATUS_mbox_intr_END (15)
#define SOC_OCBC_CFG_INT_STATUS_timint1_START (16)
#define SOC_OCBC_CFG_INT_STATUS_timint1_END (16)
#define SOC_OCBC_CFG_INT_STATUS_timint2_START (17)
#define SOC_OCBC_CFG_INT_STATUS_timint2_END (17)
#define SOC_OCBC_CFG_INT_STATUS_intr_wdog_START (18)
#define SOC_OCBC_CFG_INT_STATUS_intr_wdog_END (18)
#define SOC_OCBC_CFG_INT_STATUS_intr_wdog_res_START (19)
#define SOC_OCBC_CFG_INT_STATUS_intr_wdog_res_END (19)
#define SOC_OCBC_CFG_INT_STATUS_ocbc_pe_npintr_START (20)
#define SOC_OCBC_CFG_INT_STATUS_ocbc_pe_npintr_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int backup_reg : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_OCBC_CFG_BACKUP_REG_UNION;
#endif
#define SOC_OCBC_CFG_BACKUP_REG_backup_reg_START (0)
#define SOC_OCBC_CFG_BACKUP_REG_backup_reg_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_ocbc_fll_en_req : 1;
        unsigned int sc_ocbc_pll0_gt : 1;
        unsigned int sc_ocbc_pll0_bypass : 1;
        unsigned int sc_ocbc_pll0_en_req : 1;
        unsigned int ao_ocbc_clk_switch : 4;
        unsigned int ao_ocbc_tcxo_gt : 1;
        unsigned int ao_ocbc_fll_gt : 1;
        unsigned int ao_ocbc_pll0_gt : 1;
        unsigned int reserved : 5;
        unsigned int aoclk_ctrl_mask : 16;
    } reg;
} SOC_OCBC_CFG_AOCLK_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_fll_en_req_START (0)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_fll_en_req_END (0)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_gt_START (1)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_gt_END (1)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_bypass_START (2)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_bypass_END (2)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_en_req_START (3)
#define SOC_OCBC_CFG_AOCLK_CTRL_sc_ocbc_pll0_en_req_END (3)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_clk_switch_START (4)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_clk_switch_END (7)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_tcxo_gt_START (8)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_tcxo_gt_END (8)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_fll_gt_START (9)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_fll_gt_END (9)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_pll0_gt_START (10)
#define SOC_OCBC_CFG_AOCLK_CTRL_ao_ocbc_pll0_gt_END (10)
#define SOC_OCBC_CFG_AOCLK_CTRL_aoclk_ctrl_mask_START (16)
#define SOC_OCBC_CFG_AOCLK_CTRL_aoclk_ctrl_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refclk_req_ocbc : 1;
        unsigned int refclk_req_lpm3 : 1;
        unsigned int reserved_0 : 1;
        unsigned int aoclk_hw_mode_en : 1;
        unsigned int switch_cycle : 4;
        unsigned int fpll_stable_cycle : 6;
        unsigned int reserved_1 : 2;
        unsigned int hwclk_mode_mask : 16;
    } reg;
} SOC_OCBC_CFG_HWCLK_MODE_CTRL_UNION;
#endif
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_refclk_req_ocbc_START (0)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_refclk_req_ocbc_END (0)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_refclk_req_lpm3_START (1)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_refclk_req_lpm3_END (1)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_aoclk_hw_mode_en_START (3)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_aoclk_hw_mode_en_END (3)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_switch_cycle_START (4)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_switch_cycle_END (7)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_fpll_stable_cycle_START (8)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_fpll_stable_cycle_END (13)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_hwclk_mode_mask_START (16)
#define SOC_OCBC_CFG_HWCLK_MODE_CTRL_hwclk_mode_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ocbc_aoclk_ctrl : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_OCBC_CFG_AOCLK_CTRL_32K_ADDR_UNION;
#endif
#define SOC_OCBC_CFG_AOCLK_CTRL_32K_ADDR_ocbc_aoclk_ctrl_START (0)
#define SOC_OCBC_CFG_AOCLK_CTRL_32K_ADDR_ocbc_aoclk_ctrl_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_aoclk_st : 6;
        unsigned int reserved_0 : 2;
        unsigned int lp_cond : 1;
        unsigned int lp_cond_sync : 1;
        unsigned int reserved_1 : 6;
        unsigned int cyc_cnt : 6;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_UNION;
#endif
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_cur_aoclk_st_START (0)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_cur_aoclk_st_END (5)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_lp_cond_START (8)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_lp_cond_END (8)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_lp_cond_sync_START (9)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_lp_cond_sync_END (9)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_cyc_cnt_START (16)
#define SOC_OCBC_CFG_AOCLK_DEBUG_ADDR_cyc_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hwm_fll_en_req : 1;
        unsigned int hwm_pll0_gt : 1;
        unsigned int hwm_pll0_bypass : 1;
        unsigned int hwm_pll0_en_req : 1;
        unsigned int reserved_0 : 4;
        unsigned int hwm_ao_ocbc_tcxo_gt : 1;
        unsigned int hwm_ao_ocbc_fll_gt : 1;
        unsigned int hwm_ao_ocbc_pll0_gt : 1;
        unsigned int reserved_1 : 5;
        unsigned int reserved_2 : 16;
    } reg;
} SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_UNION;
#endif
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_fll_en_req_START (0)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_fll_en_req_END (0)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_gt_START (1)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_gt_END (1)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_bypass_START (2)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_bypass_END (2)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_en_req_START (3)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_pll0_en_req_END (3)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_tcxo_gt_START (8)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_tcxo_gt_END (8)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_fll_gt_START (9)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_fll_gt_END (9)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_pll0_gt_START (10)
#define SOC_OCBC_CFG_HWM_CLKOFF_CTRL_ADDR_hwm_ao_ocbc_pll0_gt_END (10)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
