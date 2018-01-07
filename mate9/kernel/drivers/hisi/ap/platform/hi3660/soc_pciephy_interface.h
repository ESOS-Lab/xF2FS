#ifndef __SOC_PCIEPHY_INTERFACE_H__
#define __SOC_PCIEPHY_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PCIEPHY_sc_pciephy_ctrl0_ADDR(base) ((base) + (0x000))
#define SOC_PCIEPHY_sc_pciephy_ctrl1_ADDR(base) ((base) + (0x004))
#define SOC_PCIEPHY_sc_pciephy_ctrl2_ADDR(base) ((base) + (0x008))
#define SOC_PCIEPHY_sc_pciephy_ctrl3_ADDR(base) ((base) + (0x00C))
#define SOC_PCIEPHY_sc_pciephy_stat0_ADDR(base) ((base) + (0x400))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pipe_tx2rx_loopbk : 1;
        unsigned int pipe_pclkreq_n_cfg_1 : 1;
        unsigned int pipe_pclkreq_n_cfg : 1;
        unsigned int pipe_pclkreq_n_sel : 1;
        unsigned int pcs_clk_req : 1;
        unsigned int pcs_common_clocks : 1;
        unsigned int pipe_port_sel : 1;
        unsigned int pipe_pclkreq_n_sel_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int pipe_clkreq_n_cfg : 1;
        unsigned int pipe_clkreq_n_sel : 1;
        unsigned int reserved_2 : 2;
        unsigned int reserved_3 : 2;
        unsigned int phy_res_ack_in_cfg : 1;
        unsigned int phy_res_ack_in_sel : 1;
        unsigned int phy_res_req_in : 1;
        unsigned int phy_rtune_req : 1;
        unsigned int phy_test_burnin : 1;
        unsigned int phy_test_bypass : 1;
        unsigned int phy_test_powerdown : 1;
        unsigned int reserved_4 : 9;
    } reg;
} SOC_PCIEPHY_sc_pciephy_ctrl0_UNION;
#endif
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_tx2rx_loopbk_START (0)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_tx2rx_loopbk_END (0)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_cfg_1_START (1)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_cfg_1_END (1)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_cfg_START (2)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_cfg_END (2)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_sel_START (3)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_sel_END (3)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pcs_clk_req_START (4)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pcs_clk_req_END (4)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pcs_common_clocks_START (5)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pcs_common_clocks_END (5)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_port_sel_START (6)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_port_sel_END (6)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_sel_1_START (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_pclkreq_n_sel_1_END (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_clkreq_n_cfg_START (10)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_clkreq_n_cfg_END (10)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_clkreq_n_sel_START (11)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_pipe_clkreq_n_sel_END (11)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_ack_in_cfg_START (16)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_ack_in_cfg_END (16)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_ack_in_sel_START (17)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_ack_in_sel_END (17)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_req_in_START (18)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_res_req_in_END (18)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_rtune_req_START (19)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_rtune_req_END (19)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_burnin_START (20)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_burnin_END (20)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_bypass_START (21)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_bypass_END (21)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_powerdown_START (22)
#define SOC_PCIEPHY_sc_pciephy_ctrl0_phy_test_powerdown_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_mpll_multiplier : 7;
        unsigned int phy_ref_clkdiv2 : 1;
        unsigned int phy_ref_use_pad : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 6;
        unsigned int phy_reset : 1;
        unsigned int phy_reset_sel : 1;
        unsigned int pipe_reset_n_cfg : 1;
        unsigned int pipe_reset_sel : 1;
        unsigned int reserved_2 : 12;
    } reg;
} SOC_PCIEPHY_sc_pciephy_ctrl1_UNION;
#endif
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_mpll_multiplier_START (0)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_mpll_multiplier_END (6)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_ref_clkdiv2_START (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_ref_clkdiv2_END (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_ref_use_pad_START (8)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_ref_use_pad_END (8)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_reset_START (16)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_reset_END (16)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_reset_sel_START (17)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_phy_reset_sel_END (17)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_pipe_reset_n_cfg_START (18)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_pipe_reset_n_cfg_END (18)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_pipe_reset_sel_START (19)
#define SOC_PCIEPHY_sc_pciephy_ctrl1_pipe_reset_sel_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_los_bias : 3;
        unsigned int phy_los_level : 5;
        unsigned int phy_rx_eq : 3;
        unsigned int pcs_tx_deemph_gen2_3p5db : 6;
        unsigned int pcs_tx_deemph_gen2_6db : 6;
        unsigned int reserved_0 : 1;
        unsigned int pcs_tx_deemph_gen1 : 6;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PCIEPHY_sc_pciephy_ctrl2_UNION;
#endif
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_los_bias_START (0)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_los_bias_END (2)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_los_level_START (3)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_los_level_END (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_rx_eq_START (8)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_phy_rx_eq_END (10)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen2_3p5db_START (11)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen2_3p5db_END (16)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen2_6db_START (17)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen2_6db_END (22)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen1_START (24)
#define SOC_PCIEPHY_sc_pciephy_ctrl2_pcs_tx_deemph_gen1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcs_tx_swing_full : 7;
        unsigned int pcs_tx_swing_low : 7;
        unsigned int phy_tx_term_offset : 5;
        unsigned int reserved_0 : 5;
        unsigned int phy_tx_vboost_lvl : 3;
        unsigned int reserved_1 : 1;
        unsigned int vreg_bypass : 1;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_PCIEPHY_sc_pciephy_ctrl3_UNION;
#endif
#define SOC_PCIEPHY_sc_pciephy_ctrl3_pcs_tx_swing_full_START (0)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_pcs_tx_swing_full_END (6)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_pcs_tx_swing_low_START (7)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_pcs_tx_swing_low_END (13)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_phy_tx_term_offset_START (14)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_phy_tx_term_offset_END (18)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_phy_tx_vboost_lvl_START (24)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_phy_tx_vboost_lvl_END (26)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_vreg_bypass_START (28)
#define SOC_PCIEPHY_sc_pciephy_ctrl3_vreg_bypass_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PCIEPHY_sc_pciephy_stat0_UNION;
#endif
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
