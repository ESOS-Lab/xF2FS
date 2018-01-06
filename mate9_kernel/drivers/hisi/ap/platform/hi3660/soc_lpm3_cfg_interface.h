#ifndef __SOC_LPM3_CFG_INTERFACE_H__
#define __SOC_LPM3_CFG_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_LPM3_CFG_ACCESS_WIN_ADDR(base) ((base) + (0x000))
#define SOC_LPM3_CFG_HALT_BYPASS_ADDR(base) ((base) + (0x004))
#define SOC_LPM3_CFG_LPRAM_MULTI_CTRL_ADDR(base) ((base) + (0x008))
#define SOC_LPM3_CFG_DLOCK_BYPASS_ADDR(base) ((base) + (0x00C))
#define SOC_LPM3_CFG_TIMCLKEN_BYPASS_ADDR(base) ((base) + (0x010))
#define SOC_LPM3_CFG_TESTPIN_EN_ADDR(base) ((base) + (0x014))
#define SOC_LPM3_CFG_NMI_SOFT_ADDR(base) ((base) + (0x028))
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_ADDR(base) ((base) + (0x030))
#define SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_ADDR(base) ((base) + (0x060))
#define SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_ADDR(base) ((base) + (0x064))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR0_ADDR(base) ((base) + (0x800))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR1_ADDR(base) ((base) + (0x804))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR2_ADDR(base) ((base) + (0x808))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR3_ADDR(base) ((base) + (0x80C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR4_ADDR(base) ((base) + (0x810))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR5_ADDR(base) ((base) + (0x814))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR6_ADDR(base) ((base) + (0x818))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR7_ADDR(base) ((base) + (0x81C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN0_ADDR(base) ((base) + (0x820))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN1_ADDR(base) ((base) + (0x824))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN2_ADDR(base) ((base) + (0x828))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN3_ADDR(base) ((base) + (0x82C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN4_ADDR(base) ((base) + (0x830))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN5_ADDR(base) ((base) + (0x834))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN6_ADDR(base) ((base) + (0x838))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN7_ADDR(base) ((base) + (0x83C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST0_ADDR(base) ((base) + (0x840))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST1_ADDR(base) ((base) + (0x844))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST2_ADDR(base) ((base) + (0x848))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST3_ADDR(base) ((base) + (0x84C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST4_ADDR(base) ((base) + (0x850))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST5_ADDR(base) ((base) + (0x854))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST6_ADDR(base) ((base) + (0x858))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST7_ADDR(base) ((base) + (0x85C))
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DEFAULT_ADDR(base) ((base) + (0x860))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 28;
        unsigned int access_win : 4;
    } reg;
} SOC_LPM3_CFG_ACCESS_WIN_UNION;
#endif
#define SOC_LPM3_CFG_ACCESS_WIN_access_win_START (28)
#define SOC_LPM3_CFG_ACCESS_WIN_access_win_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int halt_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_LPM3_CFG_HALT_BYPASS_UNION;
#endif
#define SOC_LPM3_CFG_HALT_BYPASS_halt_bypass_START (0)
#define SOC_LPM3_CFG_HALT_BYPASS_halt_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpram_multi_ctrl : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_LPM3_CFG_LPRAM_MULTI_CTRL_UNION;
#endif
#define SOC_LPM3_CFG_LPRAM_MULTI_CTRL_lpram_multi_ctrl_START (0)
#define SOC_LPM3_CFG_LPRAM_MULTI_CTRL_lpram_multi_ctrl_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypass_for_ssi1 : 1;
        unsigned int bypass_for_ddrc : 1;
        unsigned int bypass_for_tsen : 1;
        unsigned int bypass_for_pmc : 1;
        unsigned int bypass_for_uart : 1;
        unsigned int bypass_for_i2c : 1;
        unsigned int bypass_for_ssi0 : 1;
        unsigned int bypass_for_pcrg : 1;
        unsigned int bypass_for_wdog : 1;
        unsigned int bypass_for_timer : 1;
        unsigned int reserved_0 : 1;
        unsigned int bypass_for_cssys : 1;
        unsigned int bypass_for_pwm : 1;
        unsigned int bypass_for_rom : 1;
        unsigned int bypass_for_ram : 1;
        unsigned int bypass_for_nandc : 1;
        unsigned int bypass_for_ssi2 : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_LPM3_CFG_DLOCK_BYPASS_UNION;
#endif
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi1_START (0)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi1_END (0)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ddrc_START (1)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ddrc_END (1)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_tsen_START (2)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_tsen_END (2)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pmc_START (3)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pmc_END (3)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_uart_START (4)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_uart_END (4)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_i2c_START (5)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_i2c_END (5)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi0_START (6)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi0_END (6)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pcrg_START (7)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pcrg_END (7)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_wdog_START (8)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_wdog_END (8)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_timer_START (9)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_timer_END (9)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_cssys_START (11)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_cssys_END (11)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pwm_START (12)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_pwm_END (12)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_rom_START (13)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_rom_END (13)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ram_START (14)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ram_END (14)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_nandc_START (15)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_nandc_END (15)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi2_START (16)
#define SOC_LPM3_CFG_DLOCK_BYPASS_bypass_for_ssi2_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timclken_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_LPM3_CFG_TIMCLKEN_BYPASS_UNION;
#endif
#define SOC_LPM3_CFG_TIMCLKEN_BYPASS_timclken_bypass_START (0)
#define SOC_LPM3_CFG_TIMCLKEN_BYPASS_timclken_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int testpin_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_LPM3_CFG_TESTPIN_EN_UNION;
#endif
#define SOC_LPM3_CFG_TESTPIN_EN_testpin_en_START (0)
#define SOC_LPM3_CFG_TESTPIN_EN_testpin_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_nmi_soft : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_LPM3_CFG_NMI_SOFT_UNION;
#endif
#define SOC_LPM3_CFG_NMI_SOFT_intr_nmi_soft_START (0)
#define SOC_LPM3_CFG_NMI_SOFT_intr_nmi_soft_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int auto_clkgt_cfg_ddrc : 1;
        unsigned int reserved_1 : 1;
        unsigned int auto_clkgt_cfg_pmc : 1;
        unsigned int reserved_2 : 1;
        unsigned int auto_clkgt_cfg_i2c : 1;
        unsigned int reserved_3 : 1;
        unsigned int auto_clkgt_cfg_pcrg : 1;
        unsigned int auto_clkgt_cfg_wdog : 1;
        unsigned int auto_clkgt_cfg_timer : 1;
        unsigned int auto_clkgt_cfg_cssys : 1;
        unsigned int reserved_4 : 1;
        unsigned int auto_clkgt_cfg_rom : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int auto_clkgt_cfg_ahb : 1;
        unsigned int auto_clkgt_cfg_apb : 1;
        unsigned int reserved_8 : 14;
    } reg;
} SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_ddrc_START (1)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_ddrc_END (1)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_pmc_START (3)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_pmc_END (3)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_i2c_START (5)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_i2c_END (5)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_pcrg_START (7)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_pcrg_END (7)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_wdog_START (8)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_wdog_END (8)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_timer_START (9)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_timer_END (9)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_cssys_START (10)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_cssys_END (10)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_rom_START (12)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_rom_END (12)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_ahb_START (16)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_ahb_END (16)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_apb_START (17)
#define SOC_LPM3_CFG_LPMCU_ATCLKCG_CTRL_auto_clkgt_cfg_apb_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp2ddr_dfs_int_en : 1;
        unsigned int isp2ddr_dfs_int_clr : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_isp2ddr_dfs_int_en_START (0)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_isp2ddr_dfs_int_en_END (0)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_isp2ddr_dfs_int_clr_START (1)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_CTRL_isp2ddr_dfs_int_clr_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp2ddr_dfs_int_raw : 1;
        unsigned int isp2ddr_dfs_int_msk : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_isp2ddr_dfs_int_raw_START (0)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_isp2ddr_dfs_int_raw_END (0)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_isp2ddr_dfs_int_msk_START (1)
#define SOC_LPM3_CFG_LPMCU_ISP_INT_STAT_isp2ddr_dfs_int_msk_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr0 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR0_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR0_icfg_addr_scr0_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR0_icfg_addr_scr0_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr1 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR1_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR1_icfg_addr_scr1_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR1_icfg_addr_scr1_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr2 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR2_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR2_icfg_addr_scr2_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR2_icfg_addr_scr2_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr3 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR3_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR3_icfg_addr_scr3_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR3_icfg_addr_scr3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr4 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR4_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR4_icfg_addr_scr4_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR4_icfg_addr_scr4_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr5 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR5_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR5_icfg_addr_scr5_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR5_icfg_addr_scr5_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr6 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR6_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR6_icfg_addr_scr6_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR6_icfg_addr_scr6_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr7 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR7_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR7_icfg_addr_scr7_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_SCR7_icfg_addr_scr7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len0 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN0_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN0_icfg_addr_len0_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN0_icfg_addr_len0_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len1 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN1_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN1_icfg_addr_len1_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN1_icfg_addr_len1_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len2 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN2_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN2_icfg_addr_len2_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN2_icfg_addr_len2_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len3 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN3_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN3_icfg_addr_len3_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN3_icfg_addr_len3_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len4 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN4_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN4_icfg_addr_len4_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN4_icfg_addr_len4_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len5 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN5_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN5_icfg_addr_len5_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN5_icfg_addr_len5_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len6 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN6_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN6_icfg_addr_len6_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN6_icfg_addr_len6_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len7 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN7_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN7_icfg_addr_len7_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_LEN7_icfg_addr_len7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst0 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST0_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST0_icfg_addr_dst0_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST0_icfg_addr_dst0_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst1 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST1_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST1_icfg_addr_dst1_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST1_icfg_addr_dst1_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst2 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST2_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST2_icfg_addr_dst2_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST2_icfg_addr_dst2_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst3 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST3_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST3_icfg_addr_dst3_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST3_icfg_addr_dst3_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst4 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST4_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST4_icfg_addr_dst4_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST4_icfg_addr_dst4_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst5 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST5_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST5_icfg_addr_dst5_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST5_icfg_addr_dst5_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst6 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST6_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST6_icfg_addr_dst6_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST6_icfg_addr_dst6_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst7 : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST7_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST7_icfg_addr_dst7_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DST7_icfg_addr_dst7_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_default : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DEFAULT_UNION;
#endif
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DEFAULT_icfg_addr_default_START (0)
#define SOC_LPM3_CFG_LPMCU_FAMA_ICFG_ADDR_DEFAULT_icfg_addr_default_END (6)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
