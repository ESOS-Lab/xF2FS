#ifndef __SOC_PCIECTRL_INTERFACE_H__
#define __SOC_PCIECTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl0_ADDR(base) ((base) + (0x000))
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_ADDR(base) ((base) + (0x004))
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_ADDR(base) ((base) + (0x008))
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_ADDR(base) ((base) + (0x00C))
#define SOC_PCIECTRL_sc_pciectrl_ctrl4_ADDR(base) ((base) + (0x010))
#define SOC_PCIECTRL_sc_pciectrl_ctrl5_ADDR(base) ((base) + (0x014))
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_ADDR(base) ((base) + (0x018))
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_ADDR(base) ((base) + (0x01C))
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_ADDR(base) ((base) + (0x020))
#define SOC_PCIECTRL_sc_pciectrl_ctrl9_ADDR(base) ((base) + (0x024))
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_ADDR(base) ((base) + (0x028))
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_ADDR(base) ((base) + (0x02C))
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_ADDR(base) ((base) + (0x030))
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_ADDR(base) ((base) + (0x034))
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_ADDR(base) ((base) + (0x038))
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_ADDR(base) ((base) + (0x03C))
#define SOC_PCIECTRL_sc_pciectrl_ctrl16_ADDR(base) ((base) + (0x040))
#define SOC_PCIECTRL_sc_pciectrl_ctrl17_ADDR(base) ((base) + (0x044))
#define SOC_PCIECTRL_sc_pciectrl_ctrl18_ADDR(base) ((base) + (0x048))
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_ADDR(base) ((base) + (0x04C))
#define SOC_PCIECTRL_sc_pciectrl_ctrl20_ADDR(base) ((base) + (0x050))
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_ADDR(base) ((base) + (0x054))
#define SOC_PCIECTRL_sc_pciectrl_stat0_ADDR(base) ((base) + (0x400))
#define SOC_PCIECTRL_sc_pciectrl_stat1_ADDR(base) ((base) + (0x404))
#define SOC_PCIECTRL_sc_pciectrl_stat2_ADDR(base) ((base) + (0x408))
#define SOC_PCIECTRL_sc_pciectrl_stat3_ADDR(base) ((base) + (0x40C))
#define SOC_PCIECTRL_sc_pciectrl_stat4_ADDR(base) ((base) + (0x410))
#define SOC_PCIECTRL_sc_pciectrl_stat5_ADDR(base) ((base) + (0x414))
#define SOC_PCIECTRL_sc_pciectrl_stat6_ADDR(base) ((base) + (0x418))
#define SOC_PCIECTRL_sc_pciectrl_stat7_ADDR(base) ((base) + (0x41C))
#define SOC_PCIECTRL_sc_pciectrl_stat8_ADDR(base) ((base) + (0x420))
#define SOC_PCIECTRL_sc_pciectrl_stat9_ADDR(base) ((base) + (0x424))
#define SOC_PCIECTRL_sc_pciectrl_stat10_ADDR(base) ((base) + (0x428))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_slv_awmisc_info : 22;
        unsigned int reserved : 6;
        unsigned int pcie_device_type : 4;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl0_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl0_pcie_slv_awmisc_info_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl0_pcie_slv_awmisc_info_END (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl0_pcie_device_type_START (28)
#define SOC_PCIECTRL_sc_pciectrl_ctrl0_pcie_device_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_slv_armisc_info : 22;
        unsigned int reserved : 1;
        unsigned int pcie_app_clk_req_n : 1;
        unsigned int pcie_ven_msg_code : 8;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl1_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_slv_armisc_info_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_slv_armisc_info_END (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_app_clk_req_n_START (23)
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_app_clk_req_n_END (23)
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_ven_msg_code_START (24)
#define SOC_PCIECTRL_sc_pciectrl_ctrl1_pcie_ven_msg_code_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 14;
        unsigned int pcie_mstr_rmisc_info : 12;
        unsigned int pcie_ven_msi_req : 1;
        unsigned int pcie_ven_msi_vector : 5;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl2_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_mstr_rmisc_info_START (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_mstr_rmisc_info_END (25)
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_ven_msi_req_START (26)
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_ven_msi_req_END (26)
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_ven_msi_vector_START (27)
#define SOC_PCIECTRL_sc_pciectrl_ctrl2_pcie_ven_msi_vector_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_ven_msg_req : 1;
        unsigned int pcie_ven_msg_fmt : 2;
        unsigned int pcie_ven_msg_type : 5;
        unsigned int pcie_ven_msg_td : 1;
        unsigned int pcie_ven_msg_ep : 1;
        unsigned int pcie_ven_msg_attr : 2;
        unsigned int pcie_ven_msg_len : 10;
        unsigned int pcie_ven_msg_tag : 8;
        unsigned int reserved : 2;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl3_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_req_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_req_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_fmt_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_fmt_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_type_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_type_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_td_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_td_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_ep_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_ep_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_attr_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_attr_END (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_len_START (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_len_END (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_tag_START (22)
#define SOC_PCIECTRL_sc_pciectrl_ctrl3_pcie_ven_msg_tag_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pice_ven_msg_data_low : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl4_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl4_pice_ven_msg_data_low_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl4_pice_ven_msg_data_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pice_ven_msg_data_high : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl5_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl5_pice_ven_msg_data_high_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl5_pice_ven_msg_data_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_postpone_hotreset : 1;
        unsigned int sc_postpone_retrain : 1;
        unsigned int sc_exit_flushing : 1;
        unsigned int sc_link_retrain : 1;
        unsigned int reserved_0 : 4;
        unsigned int sc_app_xfer_pending : 1;
        unsigned int reserved_1 : 7;
        unsigned int wake_deass_pulse : 1;
        unsigned int wake_deass_sel : 2;
        unsigned int reserved_2 : 1;
        unsigned int wake_mask_for_obff_dec : 1;
        unsigned int wake_intr_clear_sel : 1;
        unsigned int reserved_3 : 10;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl6_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_postpone_hotreset_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_postpone_hotreset_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_postpone_retrain_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_postpone_retrain_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_exit_flushing_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_exit_flushing_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_link_retrain_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_link_retrain_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_app_xfer_pending_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_sc_app_xfer_pending_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_deass_pulse_START (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_deass_pulse_END (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_deass_sel_START (17)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_deass_sel_END (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_mask_for_obff_dec_START (20)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_mask_for_obff_dec_END (20)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_intr_clear_sel_START (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl6_wake_intr_clear_sel_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_app_init_rst : 1;
        unsigned int pcie_app_req_entr_l1 : 1;
        unsigned int pcie_app_ready_entr_l23 : 1;
        unsigned int pcie_app_req_exit_l1 : 1;
        unsigned int pcie_app_req_retry_en : 1;
        unsigned int pcie_sys_int : 1;
        unsigned int pcie_outband_pwrup_cmd : 1;
        unsigned int pcie_app_unlock_msg : 1;
        unsigned int pcie_apps_pm_xmt_turnoff : 1;
        unsigned int pcie_apps_pm_xmt_pme : 1;
        unsigned int pcie_sys_aux_pwr_det : 1;
        unsigned int pcie_app_ltssm_enable : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int pcie_sys_mrl_sensor_state : 1;
        unsigned int pcie_sys_pwr_fault_det : 1;
        unsigned int pcie_sys_mrl_sensor_chged : 1;
        unsigned int reserved_2 : 1;
        unsigned int pcie_sys_cmd_cpled_int : 1;
        unsigned int pcie_sys_eml_interlock_engaged : 1;
        unsigned int reserved_3 : 1;
        unsigned int pcie_int_ctrl : 8;
        unsigned int reserved_4 : 1;
        unsigned int pcie_err_bresp_enable : 1;
        unsigned int cipe_err_rresp_enable : 1;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl7_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_init_rst_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_init_rst_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_entr_l1_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_entr_l1_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_ready_entr_l23_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_ready_entr_l23_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_exit_l1_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_exit_l1_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_retry_en_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_req_retry_en_END (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_int_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_int_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_outband_pwrup_cmd_START (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_outband_pwrup_cmd_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_unlock_msg_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_unlock_msg_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_apps_pm_xmt_turnoff_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_apps_pm_xmt_turnoff_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_apps_pm_xmt_pme_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_apps_pm_xmt_pme_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_aux_pwr_det_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_aux_pwr_det_END (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_ltssm_enable_START (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_app_ltssm_enable_END (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_mrl_sensor_state_START (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_mrl_sensor_state_END (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_pwr_fault_det_START (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_pwr_fault_det_END (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_mrl_sensor_chged_START (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_mrl_sensor_chged_END (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_cmd_cpled_int_START (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_cmd_cpled_int_END (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_eml_interlock_engaged_START (19)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_sys_eml_interlock_engaged_END (19)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_int_ctrl_START (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_int_ctrl_END (28)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_err_bresp_enable_START (30)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_pcie_err_bresp_enable_END (30)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_cipe_err_rresp_enable_START (31)
#define SOC_PCIECTRL_sc_pciectrl_ctrl7_cipe_err_rresp_enable_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 3;
        unsigned int cfg_l1_aux_clk_switch_core_clk_gate_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int pcie_state2_sel : 2;
        unsigned int pcie_state3_sel : 2;
        unsigned int reserved_2 : 23;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl8_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_cfg_l1_aux_clk_switch_core_clk_gate_en_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_cfg_l1_aux_clk_switch_core_clk_gate_en_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_pcie_state2_sel_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_pcie_state2_sel_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_pcie_state3_sel_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl8_pcie_state3_sel_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl9_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_aer_rc_err_msi_mask : 1;
        unsigned int cfg_sys_err_rc_mask : 1;
        unsigned int radm_correctable_err_mask : 1;
        unsigned int radm_nonfatal_err_mask : 1;
        unsigned int radm_fatal_err_mask : 1;
        unsigned int radm_pm_pme_mask : 1;
        unsigned int radm_pm_to_ack_mask : 1;
        unsigned int ven_msg_int_mask : 1;
        unsigned int radm_cpl_timeout_mask : 1;
        unsigned int radm_msg_unlock_mask : 1;
        unsigned int cfg_pme_msi_mask : 1;
        unsigned int smlh_req_rst_not_intr_mask : 1;
        unsigned int link_req_rst_not_mask : 1;
        unsigned int pcie_p2_exit_reg_mask : 1;
        unsigned int reserved_0 : 7;
        unsigned int pcie_radm_pm_turnoff_mask : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl10_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_aer_rc_err_msi_mask_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_aer_rc_err_msi_mask_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_sys_err_rc_mask_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_sys_err_rc_mask_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_correctable_err_mask_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_correctable_err_mask_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_nonfatal_err_mask_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_nonfatal_err_mask_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_fatal_err_mask_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_fatal_err_mask_END (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_pm_pme_mask_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_pm_pme_mask_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_pm_to_ack_mask_START (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_pm_to_ack_mask_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_ven_msg_int_mask_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_ven_msg_int_mask_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_cpl_timeout_mask_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_cpl_timeout_mask_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_msg_unlock_mask_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_radm_msg_unlock_mask_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_pme_msi_mask_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_cfg_pme_msi_mask_END (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_smlh_req_rst_not_intr_mask_START (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_smlh_req_rst_not_intr_mask_END (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_link_req_rst_not_mask_START (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_link_req_rst_not_mask_END (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_pcie_p2_exit_reg_mask_START (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_pcie_p2_exit_reg_mask_END (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_pcie_radm_pm_turnoff_mask_START (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl10_pcie_radm_pm_turnoff_mask_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_cfg_aer_rc_msi_clr : 1;
        unsigned int pcie_cfg_sys_err_rc_clr : 1;
        unsigned int pcie_radm_corretable_err_clr : 1;
        unsigned int pcie_radm_nonfatal_err_clr : 1;
        unsigned int pcie_radm_fatal_err_clr : 1;
        unsigned int pcie_radm_pm_pme_clr : 1;
        unsigned int pcie_radm_pm_to_ack_clr : 1;
        unsigned int pcie_ven_msg_int_clr : 1;
        unsigned int pcie_radm_cpl_timeout_clr : 1;
        unsigned int pcie_radm_msg_unlock_clr : 1;
        unsigned int pcie_cfg_pme_msi_clr : 1;
        unsigned int shlm_req_rst_not_intr_clr : 1;
        unsigned int pcie_link_req_rst_not_clr : 1;
        unsigned int pcie_p2_exit_int_clr : 1;
        unsigned int pcie_slv_err_int_clr : 1;
        unsigned int pcie_ven_msi_func_num : 3;
        unsigned int pcie_ven_msg_func_num : 3;
        unsigned int pcie_radm_pm_turnoff_clr : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl11_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_aer_rc_msi_clr_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_aer_rc_msi_clr_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_sys_err_rc_clr_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_sys_err_rc_clr_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_corretable_err_clr_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_corretable_err_clr_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_nonfatal_err_clr_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_nonfatal_err_clr_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_fatal_err_clr_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_fatal_err_clr_END (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_pme_clr_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_pme_clr_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_to_ack_clr_START (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_to_ack_clr_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msg_int_clr_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msg_int_clr_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_cpl_timeout_clr_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_cpl_timeout_clr_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_msg_unlock_clr_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_msg_unlock_clr_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_pme_msi_clr_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_cfg_pme_msi_clr_END (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_shlm_req_rst_not_intr_clr_START (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_shlm_req_rst_not_intr_clr_END (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_link_req_rst_not_clr_START (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_link_req_rst_not_clr_END (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_p2_exit_int_clr_START (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_p2_exit_int_clr_END (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_slv_err_int_clr_START (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_slv_err_int_clr_END (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msi_func_num_START (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msi_func_num_END (17)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msg_func_num_START (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_ven_msg_func_num_END (20)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_turnoff_clr_START (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl11_pcie_radm_pm_turnoff_clr_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_perst_out_n : 1;
        unsigned int pcie_perst_oe : 1;
        unsigned int pcie_perst_in_n_ctrl : 2;
        unsigned int reserved_0 : 8;
        unsigned int rc_wake_n_ctrl : 1;
        unsigned int ep_wake_n_ctrl : 1;
        unsigned int obff_enc_owre_wake_ctrl : 1;
        unsigned int dwc_pcie_dm_wake_n_ctrl : 2;
        unsigned int reserved_1 : 3;
        unsigned int reserved_2 : 5;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl12_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_out_n_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_out_n_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_oe_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_oe_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_in_n_ctrl_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_pcie_perst_in_n_ctrl_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_rc_wake_n_ctrl_START (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_rc_wake_n_ctrl_END (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_ep_wake_n_ctrl_START (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_ep_wake_n_ctrl_END (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_obff_enc_owre_wake_ctrl_START (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_obff_enc_owre_wake_ctrl_END (14)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_dwc_pcie_dm_wake_n_ctrl_START (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl12_dwc_pcie_dm_wake_n_ctrl_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obff_dec_app_init : 1;
        unsigned int obff_dec_app_idle : 1;
        unsigned int obff_dec_app_obff : 1;
        unsigned int obff_dec_app_cpu_act : 1;
        unsigned int obff_enc_app_owre_idle : 1;
        unsigned int obff_enc_app_owre_obff : 1;
        unsigned int obff_enc_app_owre_cpu_act : 1;
        unsigned int app_obff_idle_msg_req : 1;
        unsigned int app_obff_obff_msg_req : 1;
        unsigned int app_obff_cpu_active_msg_req : 1;
        unsigned int app_ltr_msg_req : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl13_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_init_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_init_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_idle_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_idle_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_obff_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_obff_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_cpu_act_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_dec_app_cpu_act_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_idle_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_idle_END (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_obff_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_obff_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_cpu_act_START (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_obff_enc_app_owre_cpu_act_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_idle_msg_req_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_idle_msg_req_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_obff_msg_req_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_obff_msg_req_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_cpu_active_msg_req_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_obff_cpu_active_msg_req_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_ltr_msg_req_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl13_app_ltr_msg_req_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obff_cfg_wk_max_pls_wdt : 8;
        unsigned int obff_cfg_wk_min_pls_wdt : 8;
        unsigned int obff_cfg_wk_max_f2f_wdt : 8;
        unsigned int obff_cfg_wk_min_f2f_wdt : 8;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl14_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_max_pls_wdt_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_max_pls_wdt_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_min_pls_wdt_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_min_pls_wdt_END (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_max_f2f_wdt_START (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_max_f2f_wdt_END (23)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_min_f2f_wdt_START (24)
#define SOC_PCIECTRL_sc_pciectrl_ctrl14_obff_cfg_wk_min_f2f_wdt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obff_dec_idle_intr_mask : 1;
        unsigned int obff_dec_obff_intr_mask : 1;
        unsigned int obff_dec_cpu_active_intr_mask : 1;
        unsigned int obff_dec_err_intr_mask : 1;
        unsigned int obff_msg_idle_intr_mask : 1;
        unsigned int obff_msg_obff_intr_mask : 1;
        unsigned int obff_msg_cpu_active_intr_mask : 1;
        unsigned int radm_msg_ltr_intr_mask : 1;
        unsigned int cfg_msi_mask_chg_intr_mask : 1;
        unsigned int radm_qoverflow_intr_mask : 1;
        unsigned int wake_intr_mask : 1;
        unsigned int pcie_clkreq_in_n_intr_mask : 1;
        unsigned int pcie_clkreq_in_n_inv_intr_mask : 1;
        unsigned int pcie_v721_intr_mask : 1;
        unsigned int reserved_0 : 2;
        unsigned int obff_dec_idle_intr_clear : 1;
        unsigned int obff_dec_obff_intr_clear : 1;
        unsigned int obff_dec_cpu_active_intr_clear : 1;
        unsigned int obff_dec_err_intr_clear : 1;
        unsigned int obff_msg_idle_intr_clear : 1;
        unsigned int obff_msg_obff_intr_clear : 1;
        unsigned int obff_msg_cpu_active_intr_clear : 1;
        unsigned int radm_msg_ltr_intr_clear : 1;
        unsigned int cfg_msi_mask_chg_intr_clear : 1;
        unsigned int radm_qoverflow_intr_clear : 1;
        unsigned int wake_intr_clear : 1;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl15_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_idle_intr_mask_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_idle_intr_mask_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_obff_intr_mask_START (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_obff_intr_mask_END (1)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_cpu_active_intr_mask_START (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_cpu_active_intr_mask_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_err_intr_mask_START (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_err_intr_mask_END (3)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_idle_intr_mask_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_idle_intr_mask_END (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_obff_intr_mask_START (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_obff_intr_mask_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_cpu_active_intr_mask_START (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_cpu_active_intr_mask_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_msg_ltr_intr_mask_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_msg_ltr_intr_mask_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_cfg_msi_mask_chg_intr_mask_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_cfg_msi_mask_chg_intr_mask_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_qoverflow_intr_mask_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_qoverflow_intr_mask_END (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_wake_intr_mask_START (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_wake_intr_mask_END (10)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_clkreq_in_n_intr_mask_START (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_clkreq_in_n_intr_mask_END (11)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_clkreq_in_n_inv_intr_mask_START (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_clkreq_in_n_inv_intr_mask_END (12)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_v721_intr_mask_START (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_pcie_v721_intr_mask_END (13)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_idle_intr_clear_START (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_idle_intr_clear_END (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_obff_intr_clear_START (17)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_obff_intr_clear_END (17)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_cpu_active_intr_clear_START (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_cpu_active_intr_clear_END (18)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_err_intr_clear_START (19)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_dec_err_intr_clear_END (19)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_idle_intr_clear_START (20)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_idle_intr_clear_END (20)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_obff_intr_clear_START (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_obff_intr_clear_END (21)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_cpu_active_intr_clear_START (22)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_obff_msg_cpu_active_intr_clear_END (22)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_msg_ltr_intr_clear_START (23)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_msg_ltr_intr_clear_END (23)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_cfg_msi_mask_chg_intr_clear_START (24)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_cfg_msi_mask_chg_intr_clear_END (24)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_qoverflow_intr_clear_START (25)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_radm_qoverflow_intr_clear_END (25)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_wake_intr_clear_START (26)
#define SOC_PCIECTRL_sc_pciectrl_ctrl15_wake_intr_clear_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_msi_pending : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl16_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl16_cfg_msi_pending_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl16_cfg_msi_pending_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int app_ltr_msg_latency : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl17_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl17_app_ltr_msg_latency_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl17_app_ltr_msg_latency_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_pwr_budget_data_reg : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl18_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl18_cfg_pwr_budget_data_reg_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl18_cfg_pwr_budget_data_reg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int app_ltr_msg_func_num : 3;
        unsigned int reserved_0 : 1;
        unsigned int cfg_pwr_budget_func_num : 3;
        unsigned int slv_awmisc_info_atu_bypass : 1;
        unsigned int slv_armisc_info_atu_bypass : 1;
        unsigned int app_clk_pm_en : 1;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl19_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_app_ltr_msg_func_num_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_app_ltr_msg_func_num_END (2)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_cfg_pwr_budget_func_num_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_cfg_pwr_budget_func_num_END (6)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_slv_awmisc_info_atu_bypass_START (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_slv_awmisc_info_atu_bypass_END (7)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_slv_armisc_info_atu_bypass_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_slv_armisc_info_atu_bypass_END (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_app_clk_pm_en_START (9)
#define SOC_PCIECTRL_sc_pciectrl_ctrl19_app_clk_pm_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl_d1w2r : 16;
        unsigned int mem_ctrl_s : 16;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl20_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl20_mem_ctrl_d1w2r_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl20_mem_ctrl_d1w2r_END (15)
#define SOC_PCIECTRL_sc_pciectrl_ctrl20_mem_ctrl_s_START (16)
#define SOC_PCIECTRL_sc_pciectrl_ctrl20_mem_ctrl_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_cio_cs : 1;
        unsigned int reserved_0 : 3;
        unsigned int pcie_cio_ds : 2;
        unsigned int reserved_1 : 2;
        unsigned int pcie_cio_tr : 3;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_ctrl21_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_cs_START (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_cs_END (0)
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_ds_START (4)
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_ds_END (5)
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_tr_START (8)
#define SOC_PCIECTRL_sc_pciectrl_ctrl21_pcie_cio_tr_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_gm_cmposer_lookup_err : 1;
        unsigned int reserved_0 : 1;
        unsigned int pcie_pm_xtlh_block_tlp : 1;
        unsigned int pcie_cfg_mem_space_en : 1;
        unsigned int pcie_cfg_rcb : 1;
        unsigned int pcie_rdlh_link_up : 1;
        unsigned int pcie_pm_curnt_state : 3;
        unsigned int pcie_cfg_aer_rc_err_int : 1;
        unsigned int pcie_cfg_aer_int_msg_num : 5;
        unsigned int pcie_xmlh_link_up : 1;
        unsigned int reserved_1 : 1;
        unsigned int pcie_cfg_eml_control : 1;
        unsigned int pcie_hp_pme : 1;
        unsigned int pcie_hp_int : 1;
        unsigned int pcie_hp_msi : 1;
        unsigned int pcie_pm_status : 1;
        unsigned int pcie_ref_clk_req_n : 1;
        unsigned int mac_phy_powerdown_p2_exit_reg : 1;
        unsigned int radm_msg_req_id_low : 8;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat0_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_gm_cmposer_lookup_err_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_gm_cmposer_lookup_err_END (0)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_xtlh_block_tlp_START (2)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_xtlh_block_tlp_END (2)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_mem_space_en_START (3)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_mem_space_en_END (3)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_rcb_START (4)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_rcb_END (4)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_rdlh_link_up_START (5)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_rdlh_link_up_END (5)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_curnt_state_START (6)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_curnt_state_END (8)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_aer_rc_err_int_START (9)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_aer_rc_err_int_END (9)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_aer_int_msg_num_START (10)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_aer_int_msg_num_END (14)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_xmlh_link_up_START (15)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_xmlh_link_up_END (15)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_eml_control_START (17)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_cfg_eml_control_END (17)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_pme_START (18)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_pme_END (18)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_int_START (19)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_int_END (19)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_msi_START (20)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_hp_msi_END (20)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_status_START (21)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_pm_status_END (21)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_ref_clk_req_n_START (22)
#define SOC_PCIECTRL_sc_pciectrl_stat0_pcie_ref_clk_req_n_END (22)
#define SOC_PCIECTRL_sc_pciectrl_stat0_mac_phy_powerdown_p2_exit_reg_START (23)
#define SOC_PCIECTRL_sc_pciectrl_stat0_mac_phy_powerdown_p2_exit_reg_END (23)
#define SOC_PCIECTRL_sc_pciectrl_stat0_radm_msg_req_id_low_START (24)
#define SOC_PCIECTRL_sc_pciectrl_stat0_radm_msg_req_id_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_parity_errs_reg : 4;
        unsigned int app_parity_errs_reg : 3;
        unsigned int pm_linkst_in_l1 : 1;
        unsigned int pm_linkst_in_l2 : 1;
        unsigned int pm_linkst_l2_exit : 1;
        unsigned int mac_phy_power_down : 2;
        unsigned int radm_correctabl_err_reg : 1;
        unsigned int radm_nonfatal_err_reg : 1;
        unsigned int radm_fatal_err_reg : 1;
        unsigned int radm_pm_to_pme_reg : 1;
        unsigned int radm_pm_to_ack_reg : 1;
        unsigned int radm_cpl_timeout_reg : 1;
        unsigned int radm_msg_unlock_reg : 1;
        unsigned int cfg_pme_msi_reg : 1;
        unsigned int smlh_req_rst_not_intr_status : 1;
        unsigned int link_req_rst_not_reg : 1;
        unsigned int pcie_cfg_aer_rc_err_msi : 1;
        unsigned int pcie_cfg_sys_err_rc : 1;
        unsigned int radm_msg_req_id_high : 8;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat1_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat1_axi_parity_errs_reg_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat1_axi_parity_errs_reg_END (3)
#define SOC_PCIECTRL_sc_pciectrl_stat1_app_parity_errs_reg_START (4)
#define SOC_PCIECTRL_sc_pciectrl_stat1_app_parity_errs_reg_END (6)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_in_l1_START (7)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_in_l1_END (7)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_in_l2_START (8)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_in_l2_END (8)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_l2_exit_START (9)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pm_linkst_l2_exit_END (9)
#define SOC_PCIECTRL_sc_pciectrl_stat1_mac_phy_power_down_START (10)
#define SOC_PCIECTRL_sc_pciectrl_stat1_mac_phy_power_down_END (11)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_correctabl_err_reg_START (12)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_correctabl_err_reg_END (12)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_nonfatal_err_reg_START (13)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_nonfatal_err_reg_END (13)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_fatal_err_reg_START (14)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_fatal_err_reg_END (14)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_pm_to_pme_reg_START (15)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_pm_to_pme_reg_END (15)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_pm_to_ack_reg_START (16)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_pm_to_ack_reg_END (16)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_cpl_timeout_reg_START (17)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_cpl_timeout_reg_END (17)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_msg_unlock_reg_START (18)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_msg_unlock_reg_END (18)
#define SOC_PCIECTRL_sc_pciectrl_stat1_cfg_pme_msi_reg_START (19)
#define SOC_PCIECTRL_sc_pciectrl_stat1_cfg_pme_msi_reg_END (19)
#define SOC_PCIECTRL_sc_pciectrl_stat1_smlh_req_rst_not_intr_status_START (20)
#define SOC_PCIECTRL_sc_pciectrl_stat1_smlh_req_rst_not_intr_status_END (20)
#define SOC_PCIECTRL_sc_pciectrl_stat1_link_req_rst_not_reg_START (21)
#define SOC_PCIECTRL_sc_pciectrl_stat1_link_req_rst_not_reg_END (21)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pcie_cfg_aer_rc_err_msi_START (22)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pcie_cfg_aer_rc_err_msi_END (22)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pcie_cfg_sys_err_rc_START (23)
#define SOC_PCIECTRL_sc_pciectrl_stat1_pcie_cfg_sys_err_rc_END (23)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_msg_req_id_high_START (24)
#define SOC_PCIECTRL_sc_pciectrl_stat1_radm_msg_req_id_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_stat2 : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat2_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat2_pcie_stat2_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat2_pcie_stat2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcie_stat3 : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat3_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat3_pcie_stat3_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat3_pcie_stat3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ltssm_state : 6;
        unsigned int mac_phy_rate : 2;
        unsigned int pcie_slv_err_int : 1;
        unsigned int trgt_lookup_empty : 1;
        unsigned int trgt_cpl_timeout_reg : 1;
        unsigned int reserved_0 : 8;
        unsigned int brdg_slv_xfer_pending : 1;
        unsigned int brdg_dbi_xfer_pending : 1;
        unsigned int edma_xfer_pending : 1;
        unsigned int radm_xfer_pending : 1;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat4_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat4_ltssm_state_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat4_ltssm_state_END (5)
#define SOC_PCIECTRL_sc_pciectrl_stat4_mac_phy_rate_START (6)
#define SOC_PCIECTRL_sc_pciectrl_stat4_mac_phy_rate_END (7)
#define SOC_PCIECTRL_sc_pciectrl_stat4_pcie_slv_err_int_START (8)
#define SOC_PCIECTRL_sc_pciectrl_stat4_pcie_slv_err_int_END (8)
#define SOC_PCIECTRL_sc_pciectrl_stat4_trgt_lookup_empty_START (9)
#define SOC_PCIECTRL_sc_pciectrl_stat4_trgt_lookup_empty_END (9)
#define SOC_PCIECTRL_sc_pciectrl_stat4_trgt_cpl_timeout_reg_START (10)
#define SOC_PCIECTRL_sc_pciectrl_stat4_trgt_cpl_timeout_reg_END (10)
#define SOC_PCIECTRL_sc_pciectrl_stat4_brdg_slv_xfer_pending_START (19)
#define SOC_PCIECTRL_sc_pciectrl_stat4_brdg_slv_xfer_pending_END (19)
#define SOC_PCIECTRL_sc_pciectrl_stat4_brdg_dbi_xfer_pending_START (20)
#define SOC_PCIECTRL_sc_pciectrl_stat4_brdg_dbi_xfer_pending_END (20)
#define SOC_PCIECTRL_sc_pciectrl_stat4_edma_xfer_pending_START (21)
#define SOC_PCIECTRL_sc_pciectrl_stat4_edma_xfer_pending_END (21)
#define SOC_PCIECTRL_sc_pciectrl_stat4_radm_xfer_pending_START (22)
#define SOC_PCIECTRL_sc_pciectrl_stat4_radm_xfer_pending_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obff_dec_idle_intr_status : 1;
        unsigned int obff_dec_obff_intr_status : 1;
        unsigned int obff_dec_cpu_active_intr_status : 1;
        unsigned int obff_dec_err_intr_status : 1;
        unsigned int obff_msg_idle_intr_status : 1;
        unsigned int obff_msg_obff_intr_status : 1;
        unsigned int obff_msg_cpu_active_intr_status : 1;
        unsigned int radm_msg_ltr_intr_status : 1;
        unsigned int cfg_msi_mask_chg_intr_status : 1;
        unsigned int radm_qoverflow_intr_status : 1;
        unsigned int wake_intr_status : 1;
        unsigned int pcie_clkreq_in_n_intr_status : 1;
        unsigned int pcie_clkreq_in_n_inv_intr_status : 1;
        unsigned int radm_vendor_msg_intr_status : 1;
        unsigned int mac_phy_rxelecidle_disable : 1;
        unsigned int mac_phy_txcommonmode_disable : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat5_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_idle_intr_status_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_idle_intr_status_END (0)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_obff_intr_status_START (1)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_obff_intr_status_END (1)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_cpu_active_intr_status_START (2)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_cpu_active_intr_status_END (2)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_err_intr_status_START (3)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_dec_err_intr_status_END (3)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_idle_intr_status_START (4)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_idle_intr_status_END (4)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_obff_intr_status_START (5)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_obff_intr_status_END (5)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_cpu_active_intr_status_START (6)
#define SOC_PCIECTRL_sc_pciectrl_stat5_obff_msg_cpu_active_intr_status_END (6)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_msg_ltr_intr_status_START (7)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_msg_ltr_intr_status_END (7)
#define SOC_PCIECTRL_sc_pciectrl_stat5_cfg_msi_mask_chg_intr_status_START (8)
#define SOC_PCIECTRL_sc_pciectrl_stat5_cfg_msi_mask_chg_intr_status_END (8)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_qoverflow_intr_status_START (9)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_qoverflow_intr_status_END (9)
#define SOC_PCIECTRL_sc_pciectrl_stat5_wake_intr_status_START (10)
#define SOC_PCIECTRL_sc_pciectrl_stat5_wake_intr_status_END (10)
#define SOC_PCIECTRL_sc_pciectrl_stat5_pcie_clkreq_in_n_intr_status_START (11)
#define SOC_PCIECTRL_sc_pciectrl_stat5_pcie_clkreq_in_n_intr_status_END (11)
#define SOC_PCIECTRL_sc_pciectrl_stat5_pcie_clkreq_in_n_inv_intr_status_START (12)
#define SOC_PCIECTRL_sc_pciectrl_stat5_pcie_clkreq_in_n_inv_intr_status_END (12)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_vendor_msg_intr_status_START (13)
#define SOC_PCIECTRL_sc_pciectrl_stat5_radm_vendor_msg_intr_status_END (13)
#define SOC_PCIECTRL_sc_pciectrl_stat5_mac_phy_rxelecidle_disable_START (14)
#define SOC_PCIECTRL_sc_pciectrl_stat5_mac_phy_rxelecidle_disable_END (14)
#define SOC_PCIECTRL_sc_pciectrl_stat5_mac_phy_txcommonmode_disable_START (15)
#define SOC_PCIECTRL_sc_pciectrl_stat5_mac_phy_txcommonmode_disable_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obff_dec_owrd_cur_state : 4;
        unsigned int obff_enc_owre_cur_state : 4;
        unsigned int cfg_obff_en : 2;
        unsigned int cfg_ltr_m_en : 1;
        unsigned int cfg_pwr_budget_sel : 1;
        unsigned int smlh_in_rl0s : 1;
        unsigned int radm_qoverflow : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat6_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat6_obff_dec_owrd_cur_state_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat6_obff_dec_owrd_cur_state_END (3)
#define SOC_PCIECTRL_sc_pciectrl_stat6_obff_enc_owre_cur_state_START (4)
#define SOC_PCIECTRL_sc_pciectrl_stat6_obff_enc_owre_cur_state_END (7)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_obff_en_START (8)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_obff_en_END (9)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_ltr_m_en_START (10)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_ltr_m_en_END (10)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_pwr_budget_sel_START (11)
#define SOC_PCIECTRL_sc_pciectrl_stat6_cfg_pwr_budget_sel_END (11)
#define SOC_PCIECTRL_sc_pciectrl_stat6_smlh_in_rl0s_START (12)
#define SOC_PCIECTRL_sc_pciectrl_stat6_smlh_in_rl0s_END (12)
#define SOC_PCIECTRL_sc_pciectrl_stat6_radm_qoverflow_START (13)
#define SOC_PCIECTRL_sc_pciectrl_stat6_radm_qoverflow_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_msi_mask : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat7_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat7_cfg_msi_mask_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat7_cfg_msi_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_ltr_max_latency : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat8_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat8_cfg_ltr_max_latency_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat8_cfg_ltr_max_latency_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int app_ltr_latency : 32;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat9_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat9_app_ltr_latency_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat9_app_ltr_latency_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int link_down_flushing_fsm_state : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_PCIECTRL_sc_pciectrl_stat10_UNION;
#endif
#define SOC_PCIECTRL_sc_pciectrl_stat10_link_down_flushing_fsm_state_START (0)
#define SOC_PCIECTRL_sc_pciectrl_stat10_link_down_flushing_fsm_state_END (3)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
