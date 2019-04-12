-include $(srctree)/drivers/hisi/modem/config/product/$(OBB_PRODUCT_NAME)/config/balong_product_config.mk

ifeq ($(strip $(llt_gcov)),y)
GCOV_PROFILE := y
endif

obj-$(CONFIG_IPF_SUPPORT)           += ipf_balong.o ipf_pm.o ipf_filter.o
obj-$(CONFIG_ENABLE_TEST_CODE)   	+= ipf_balong_test.o

ifeq ($(strip $(CFG_CONFIG_MODULE_BUSSTRESS)),YES)
#obj-$(CONFIG_IPF_SUPPORT) 		    += ipf_stress_test.o
endif

