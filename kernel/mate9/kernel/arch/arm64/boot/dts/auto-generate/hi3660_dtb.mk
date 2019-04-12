#Copyright Huawei Technologies Co., Ltd. 1998-2011. All rights reserved.
#This file is Auto Generated 

dtb-y += hi3660/VICTORIA_LX9_V3_BACKLIGHT_config.dtb
dtb-y += hi3660/VICTORIA_LX9_V3_V101_config.dtb
dtb-y += hi3660/VICTORIA_TUGL_V3_V101_config.dtb
dtb-y += hi3660/VICTORIA_TUGL_V3_config.dtb
dtb-y += hi3660/VICTORIA_TUGL_V3_BACKLIGHT_config.dtb
dtb-y += hi3660/VICTORIA_LX9_V3_config.dtb
dtb-y += hi3660/VICTORIA_TUGL_V3_DPD_SKY2_5_config.dtb
dtb-y += hi3660/VICTORIA_TUGL_V1_config.dtb
dtb-y += hi3660/CMB_TUCL_ES_V3_config.dtb
dtb-y += hi3660/CMB_TUCL_CS_V3_config.dtb
dtb-y += hi3660/CMB_TUCL_FHD_V3_config.dtb
dtb-y += hi3660/CMB_L09_V1_config.dtb
dtb-y += hi3660/CMB_TUCL_V1_config.dtb
dtb-y += hi3660/hi3660_udp_EVB2_VERC_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_v110_config.dtb
dtb-y += hi3660/hi3660_udp_default_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERC_DSDA_config.dtb
dtb-y += hi3660/hi3660_fpga_010_config.dtb
dtb-y += hi3660/hi3660_emulator_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERC_v110_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_v120_config.dtb
dtb-y += hi3660/hi3660_udp_EVB2_VERA_config.dtb
dtb-y += hi3660/hi3660_udp_v110_config.dtb
dtb-y += hi3660/hi3660_udp_v120_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_ET_v120_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERC_v120_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_ET_config.dtb
dtb-y += hi3660/hi3660_udp_UFS_only_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERC_config.dtb
dtb-y += hi3660/hi3660_udp_EVB2_VERB_config.dtb
dtb-y += hi3660/hi3660_udp_EVB8_VERD_ET_v110_config.dtb
dtb-y += hi3660/hi3660_fpga_020_config.dtb
dtb-y += hi3660/VICKY_LX9_V3_DPD_SKY2_0_config.dtb
dtb-y += hi3660/VICKY_TUGL_V3_V101_config.dtb
dtb-y += hi3660/VICKY_TUGL_V3_config.dtb
dtb-y += hi3660/VICKY_TUGL_V3_DPD_SKY2_0_config.dtb
dtb-y += hi3660/VICKY_LX9_V3_config.dtb
dtb-y += hi3660/VICKY_TUGL_V3_DPD_SKY2_5_config.dtb
dtb-y += hi3660/VICKY_TUGL_V1_config.dtb
dtb-y += hi3660/MHA_TUGL_V4_RF_config.dtb
dtb-y += hi3660/MHA_TUGL_LV_buckboost_smartpa_config.dtb
dtb-y += hi3660/MHA_TUGL_V3_POWER_BOARD_config.dtb
dtb-y += hi3660/MHA_TUGL_V4_config.dtb
dtb-y += hi3660/MHA_TUGL_V3_POWER_BOARD_V110_config.dtb
dtb-y += hi3660/MHA_TUGL_V3_CS_PA_config.dtb
dtb-y += hi3660/MHA_TUGL_LV_RF_ULTRA25_config.dtb
dtb-y += hi3660/MHA_TUGL_VN1_config.dtb
dtb-y += hi3660/MHA_TUGL_V3_CS_config.dtb
dtb-y += hi3660/MHA_TUGL_MP_CHINA_config.dtb
dtb-y += hi3660/MHA_TUGL_VN1_120SOC_config.dtb
dtb-y += hi3660/MHA_TUGL_V1_config.dtb
dtb-y += hi3660/MHA_TUGL_VN2_config.dtb
dtb-y += hi3660/MHA_TUGL_V3_ES_config.dtb
dtb-y += hi3660/LON_TUGL_V4_2_config.dtb
dtb-y += hi3660/LON_TUGL_V3_CS_2_config.dtb
dtb-y += hi3660/LON_TUGL_VN1_2_config.dtb
dtb-y += hi3660/LON_TUGL_V1_2_config.dtb
dtb-y += hi3660/LON_TUGL_VN1_config.dtb
dtb-y += hi3660/LON_TUGL_V3_CS_config.dtb
dtb-y += hi3660/LON_TUGL_V1_config.dtb
dtb-y += hi3660/LON_TUGL_V4_A_config.dtb
dtb-y += hi3660/LON_TUGL_V3_ES_config.dtb
dtb-y += hi3660/DUKE_TUCL_V0_config.dtb

targets += hi3660_dtb
targets += $(dtb-y)

# *.dtb used to be generated in the directory above. Clean out the
# old build results so people don't accidentally use them.
hi3660_dtb: $(addprefix $(obj)/, $(dtb-y))
	$(Q)rm -f $(obj)/../*.dtb

clean-files := *.dtb

#end of file
