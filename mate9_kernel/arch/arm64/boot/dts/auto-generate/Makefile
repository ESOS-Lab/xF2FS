dtb-y += hi3660_udp_EVB2_VERC_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_v110_config.dtb
dtb-y += hi3660_udp_default_config.dtb
dtb-y += hi3660_udp_EVB8_VERC_DSDA_config.dtb
dtb-y += hi3660_fpga_010_config.dtb
dtb-y += hi3660_emulator_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_config.dtb
dtb-y += hi3660_udp_EVB8_VERC_v110_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_v120_config.dtb
dtb-y += hi3660_udp_EVB2_VERA_config.dtb
dtb-y += hi3660_udp_v110_config.dtb
dtb-y += hi3660_udp_v120_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_ET_v120_config.dtb
dtb-y += hi3660_udp_EVB8_VERC_v120_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_ET_config.dtb
dtb-y += hi3660_udp_UFS_only_config.dtb
dtb-y += hi3660_udp_EVB8_VERC_config.dtb
dtb-y += hi3660_udp_EVB2_VERB_config.dtb
dtb-y += hi3660_udp_EVB8_VERD_ET_v110_config.dtb
dtb-y += hi3660_fpga_020_config.dtb

targets += dtbs

dtbs: $(addprefix $(obj)/, $(dtb-y))
	$(Q)rm -f $(obj)/../*.dtb

clean-files := *.dtb
