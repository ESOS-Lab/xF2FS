#ifndef __SOC_ATG_INTERFACE_H__
#define __SOC_ATG_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ATG_ATGM0_MODE_CTRL_ADDR(base) ((base) + (0x000))
#define SOC_ATG_ATGM0_WBURST_MODE_ADDR(base) ((base) + (0x004))
#define SOC_ATG_ATGM0_WBURST_ADDR_LOW_ADDR(base) ((base) + (0x008))
#define SOC_ATG_ATGM0_WBURST_ADDR_HIGH_ADDR(base) ((base) + (0x00c))
#define SOC_ATG_ATGM0_WADDR_NUM_ADDR(base) ((base) + (0x010))
#define SOC_ATG_ATGM0_WDATA00_ADDR(base) ((base) + (0x020))
#define SOC_ATG_ATGM0_WDATA01_ADDR(base) ((base) + (0x024))
#define SOC_ATG_ATGM0_WDATA02_ADDR(base) ((base) + (0x028))
#define SOC_ATG_ATGM0_WDATA03_ADDR(base) ((base) + (0x02C))
#define SOC_ATG_ATGM0_WDATA10_ADDR(base) ((base) + (0x030))
#define SOC_ATG_ATGM0_WDATA11_ADDR(base) ((base) + (0x034))
#define SOC_ATG_ATGM0_WDATA12_ADDR(base) ((base) + (0x038))
#define SOC_ATG_ATGM0_WDATA13_ADDR(base) ((base) + (0x03C))
#define SOC_ATG_ATGM0_WDATA20_ADDR(base) ((base) + (0x040))
#define SOC_ATG_ATGM0_WDATA21_ADDR(base) ((base) + (0x044))
#define SOC_ATG_ATGM0_WDATA22_ADDR(base) ((base) + (0x048))
#define SOC_ATG_ATGM0_WDATA23_ADDR(base) ((base) + (0x04C))
#define SOC_ATG_ATGM0_WDATA30_ADDR(base) ((base) + (0x050))
#define SOC_ATG_ATGM0_WDATA31_ADDR(base) ((base) + (0x054))
#define SOC_ATG_ATGM0_WDATA32_ADDR(base) ((base) + (0x058))
#define SOC_ATG_ATGM0_WDATA33_ADDR(base) ((base) + (0x05C))
#define SOC_ATG_ATGM0_RBURST_MODE_ADDR(base) ((base) + (0x060))
#define SOC_ATG_ATGM0_RBURST_ADDR_LOW_ADDR(base) ((base) + (0x064))
#define SOC_ATG_ATGM0_RBURST_ADDR_HIGH_ADDR(base) ((base) + (0x068))
#define SOC_ATG_ATGM0_RADDR_NUM_ADDR(base) ((base) + (0x06c))
#define SOC_ATG_ATGM1_MODE_CTRL_ADDR(base) ((base) + (0x100))
#define SOC_ATG_ATGM1_WBURST_MODE_ADDR(base) ((base) + (0x104))
#define SOC_ATG_ATGM1_WBURST_ADDR_LOW_ADDR(base) ((base) + (0x108))
#define SOC_ATG_ATGM1_WBURST_ADDR_HIGH_ADDR(base) ((base) + (0x10c))
#define SOC_ATG_ATGM1_WADDR_NUM_ADDR(base) ((base) + (0x110))
#define SOC_ATG_ATGM1_WDATA00_ADDR(base) ((base) + (0x120))
#define SOC_ATG_ATGM1_WDATA01_ADDR(base) ((base) + (0x124))
#define SOC_ATG_ATGM1_WDATA02_ADDR(base) ((base) + (0x128))
#define SOC_ATG_ATGM1_WDATA03_ADDR(base) ((base) + (0x12C))
#define SOC_ATG_ATGM1_WDATA10_ADDR(base) ((base) + (0x130))
#define SOC_ATG_ATGM1_WDATA11_ADDR(base) ((base) + (0x134))
#define SOC_ATG_ATGM1_WDATA12_ADDR(base) ((base) + (0x138))
#define SOC_ATG_ATGM1_WDATA13_ADDR(base) ((base) + (0x13C))
#define SOC_ATG_ATGM1_WDATA20_ADDR(base) ((base) + (0x140))
#define SOC_ATG_ATGM1_WDATA21_ADDR(base) ((base) + (0x144))
#define SOC_ATG_ATGM1_WDATA22_ADDR(base) ((base) + (0x148))
#define SOC_ATG_ATGM1_WDATA23_ADDR(base) ((base) + (0x14C))
#define SOC_ATG_ATGM1_WDATA30_ADDR(base) ((base) + (0x150))
#define SOC_ATG_ATGM1_WDATA31_ADDR(base) ((base) + (0x154))
#define SOC_ATG_ATGM1_WDATA32_ADDR(base) ((base) + (0x158))
#define SOC_ATG_ATGM1_WDATA33_ADDR(base) ((base) + (0x15C))
#define SOC_ATG_ATGM1_RBURST_MODE_ADDR(base) ((base) + (0x160))
#define SOC_ATG_ATGM1_RBURST_ADDR_LOW_ADDR(base) ((base) + (0x164))
#define SOC_ATG_ATGM1_RBURST_ADDR_HIGH_ADDR(base) ((base) + (0x168))
#define SOC_ATG_ATGM1_RADDR_NUM_ADDR(base) ((base) + (0x16c))
#define SOC_ATG_ATGM2_MODE_CTRL_ADDR(base) ((base) + (0x200))
#define SOC_ATG_ATGM2_WBURST_MODE_ADDR(base) ((base) + (0x204))
#define SOC_ATG_ATGM2_WBURST_ADDR_LOW_ADDR(base) ((base) + (0x208))
#define SOC_ATG_ATGM2_WBURST_ADDR_HIGH_ADDR(base) ((base) + (0x20c))
#define SOC_ATG_ATGM2_WADDR_NUM_ADDR(base) ((base) + (0x210))
#define SOC_ATG_ATGM2_WDATA00_ADDR(base) ((base) + (0x220))
#define SOC_ATG_ATGM2_WDATA01_ADDR(base) ((base) + (0x224))
#define SOC_ATG_ATGM2_WDATA02_ADDR(base) ((base) + (0x228))
#define SOC_ATG_ATGM2_WDATA03_ADDR(base) ((base) + (0x22C))
#define SOC_ATG_ATGM2_WDATA10_ADDR(base) ((base) + (0x230))
#define SOC_ATG_ATGM2_WDATA11_ADDR(base) ((base) + (0x234))
#define SOC_ATG_ATGM2_WDATA12_ADDR(base) ((base) + (0x238))
#define SOC_ATG_ATGM2_WDATA13_ADDR(base) ((base) + (0x23C))
#define SOC_ATG_ATGM2_WDATA20_ADDR(base) ((base) + (0x240))
#define SOC_ATG_ATGM2_WDATA21_ADDR(base) ((base) + (0x244))
#define SOC_ATG_ATGM2_WDATA22_ADDR(base) ((base) + (0x248))
#define SOC_ATG_ATGM2_WDATA23_ADDR(base) ((base) + (0x24C))
#define SOC_ATG_ATGM2_WDATA30_ADDR(base) ((base) + (0x250))
#define SOC_ATG_ATGM2_WDATA31_ADDR(base) ((base) + (0x254))
#define SOC_ATG_ATGM2_WDATA32_ADDR(base) ((base) + (0x258))
#define SOC_ATG_ATGM2_WDATA33_ADDR(base) ((base) + (0x25C))
#define SOC_ATG_ATGM2_RBURST_MODE_ADDR(base) ((base) + (0x260))
#define SOC_ATG_ATGM2_RBURST_ADDR_LOW_ADDR(base) ((base) + (0x264))
#define SOC_ATG_ATGM2_RBURST_ADDR_HIGH_ADDR(base) ((base) + (0x268))
#define SOC_ATG_ATGM2_RADDR_NUM_ADDR(base) ((base) + (0x26c))
#define SOC_ATG_ATGS0_MODE_CTRL_ADDR(base) ((base) + (0x300))
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_ADDR(base) ((base) + (0x304))
#define SOC_ATG_ATGS0_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x308))
#define SOC_ATG_ATGS0_DDR_RADDR0_ADDR(base) ((base) + (0x310))
#define SOC_ATG_ATGS0_DDR_RADDR1_ADDR(base) ((base) + (0x314))
#define SOC_ATG_ATGS0_DDR_RADDR2_ADDR(base) ((base) + (0x318))
#define SOC_ATG_ATGS0_DDR_RADDR3_ADDR(base) ((base) + (0x31C))
#define SOC_ATG_ATGS0_DDR_RADDR4_ADDR(base) ((base) + (0x320))
#define SOC_ATG_ATGS0_DDR_RADDR5_ADDR(base) ((base) + (0x324))
#define SOC_ATG_ATGS0_DDR_RADDR6_ADDR(base) ((base) + (0x328))
#define SOC_ATG_ATGS0_DDR_RADDR7_ADDR(base) ((base) + (0x32C))
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ADDR(base) ((base) + (0x330))
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ADDR(base) ((base) + (0x334))
#define SOC_ATG_ATGS0_DUMMY_READ_STAT_ADDR(base) ((base) + (0x338))
#define SOC_ATG_ATGS0_RDATA00_ADDR(base) ((base) + (0x340))
#define SOC_ATG_ATGS0_RDATA01_ADDR(base) ((base) + (0x344))
#define SOC_ATG_ATGS0_RDATA02_ADDR(base) ((base) + (0x348))
#define SOC_ATG_ATGS0_RDATA03_ADDR(base) ((base) + (0x34C))
#define SOC_ATG_ATGS0_RDATA10_ADDR(base) ((base) + (0x350))
#define SOC_ATG_ATGS0_RDATA11_ADDR(base) ((base) + (0x354))
#define SOC_ATG_ATGS0_RDATA12_ADDR(base) ((base) + (0x358))
#define SOC_ATG_ATGS0_RDATA13_ADDR(base) ((base) + (0x35C))
#define SOC_ATG_ATGS0_RDATA20_ADDR(base) ((base) + (0x360))
#define SOC_ATG_ATGS0_RDATA21_ADDR(base) ((base) + (0x364))
#define SOC_ATG_ATGS0_RDATA22_ADDR(base) ((base) + (0x368))
#define SOC_ATG_ATGS0_RDATA23_ADDR(base) ((base) + (0x36C))
#define SOC_ATG_ATGS0_RDATA30_ADDR(base) ((base) + (0x370))
#define SOC_ATG_ATGS0_RDATA31_ADDR(base) ((base) + (0x374))
#define SOC_ATG_ATGS0_RDATA32_ADDR(base) ((base) + (0x378))
#define SOC_ATG_ATGS0_RDATA33_ADDR(base) ((base) + (0x37C))
#define SOC_ATG_ATGS1_MODE_CTRL_ADDR(base) ((base) + (0x400))
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_ADDR(base) ((base) + (0x404))
#define SOC_ATG_ATGS1_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x408))
#define SOC_ATG_ATGS1_DDR_RADDR0_ADDR(base) ((base) + (0x410))
#define SOC_ATG_ATGS1_DDR_RADDR1_ADDR(base) ((base) + (0x414))
#define SOC_ATG_ATGS1_DDR_RADDR2_ADDR(base) ((base) + (0x418))
#define SOC_ATG_ATGS1_DDR_RADDR3_ADDR(base) ((base) + (0x41C))
#define SOC_ATG_ATGS1_DDR_RADDR4_ADDR(base) ((base) + (0x420))
#define SOC_ATG_ATGS1_DDR_RADDR5_ADDR(base) ((base) + (0x424))
#define SOC_ATG_ATGS1_DDR_RADDR6_ADDR(base) ((base) + (0x428))
#define SOC_ATG_ATGS1_DDR_RADDR7_ADDR(base) ((base) + (0x42C))
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ADDR(base) ((base) + (0x430))
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ADDR(base) ((base) + (0x434))
#define SOC_ATG_ATGS1_DUMMY_READ_STAT_ADDR(base) ((base) + (0x438))
#define SOC_ATG_ATGS1_RDATA00_ADDR(base) ((base) + (0x440))
#define SOC_ATG_ATGS1_RDATA01_ADDR(base) ((base) + (0x444))
#define SOC_ATG_ATGS1_RDATA02_ADDR(base) ((base) + (0x448))
#define SOC_ATG_ATGS1_RDATA03_ADDR(base) ((base) + (0x44C))
#define SOC_ATG_ATGS1_RDATA10_ADDR(base) ((base) + (0x450))
#define SOC_ATG_ATGS1_RDATA11_ADDR(base) ((base) + (0x454))
#define SOC_ATG_ATGS1_RDATA12_ADDR(base) ((base) + (0x458))
#define SOC_ATG_ATGS1_RDATA13_ADDR(base) ((base) + (0x45C))
#define SOC_ATG_ATGS1_RDATA20_ADDR(base) ((base) + (0x460))
#define SOC_ATG_ATGS1_RDATA21_ADDR(base) ((base) + (0x464))
#define SOC_ATG_ATGS1_RDATA22_ADDR(base) ((base) + (0x468))
#define SOC_ATG_ATGS1_RDATA23_ADDR(base) ((base) + (0x46C))
#define SOC_ATG_ATGS1_RDATA30_ADDR(base) ((base) + (0x470))
#define SOC_ATG_ATGS1_RDATA31_ADDR(base) ((base) + (0x474))
#define SOC_ATG_ATGS1_RDATA32_ADDR(base) ((base) + (0x478))
#define SOC_ATG_ATGS1_RDATA33_ADDR(base) ((base) + (0x47C))
#define SOC_ATG_ATGS2_MODE_CTRL_ADDR(base) ((base) + (0x500))
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_ADDR(base) ((base) + (0x504))
#define SOC_ATG_ATGS2_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x508))
#define SOC_ATG_ATGS2_DDR_RADDR0_ADDR(base) ((base) + (0x510))
#define SOC_ATG_ATGS2_DDR_RADDR1_ADDR(base) ((base) + (0x514))
#define SOC_ATG_ATGS2_DDR_RADDR2_ADDR(base) ((base) + (0x518))
#define SOC_ATG_ATGS2_DDR_RADDR3_ADDR(base) ((base) + (0x51C))
#define SOC_ATG_ATGS2_DDR_RADDR4_ADDR(base) ((base) + (0x520))
#define SOC_ATG_ATGS2_DDR_RADDR5_ADDR(base) ((base) + (0x524))
#define SOC_ATG_ATGS2_DDR_RADDR6_ADDR(base) ((base) + (0x528))
#define SOC_ATG_ATGS2_DDR_RADDR7_ADDR(base) ((base) + (0x52C))
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ADDR(base) ((base) + (0x530))
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ADDR(base) ((base) + (0x534))
#define SOC_ATG_ATGS2_DUMMY_READ_STAT_ADDR(base) ((base) + (0x538))
#define SOC_ATG_ATGS2_RDATA00_ADDR(base) ((base) + (0x540))
#define SOC_ATG_ATGS2_RDATA01_ADDR(base) ((base) + (0x544))
#define SOC_ATG_ATGS2_RDATA02_ADDR(base) ((base) + (0x548))
#define SOC_ATG_ATGS2_RDATA03_ADDR(base) ((base) + (0x54C))
#define SOC_ATG_ATGS2_RDATA10_ADDR(base) ((base) + (0x550))
#define SOC_ATG_ATGS2_RDATA11_ADDR(base) ((base) + (0x554))
#define SOC_ATG_ATGS2_RDATA12_ADDR(base) ((base) + (0x558))
#define SOC_ATG_ATGS2_RDATA13_ADDR(base) ((base) + (0x55C))
#define SOC_ATG_ATGS2_RDATA20_ADDR(base) ((base) + (0x560))
#define SOC_ATG_ATGS2_RDATA21_ADDR(base) ((base) + (0x564))
#define SOC_ATG_ATGS2_RDATA22_ADDR(base) ((base) + (0x568))
#define SOC_ATG_ATGS2_RDATA23_ADDR(base) ((base) + (0x56C))
#define SOC_ATG_ATGS2_RDATA30_ADDR(base) ((base) + (0x570))
#define SOC_ATG_ATGS2_RDATA31_ADDR(base) ((base) + (0x574))
#define SOC_ATG_ATGS2_RDATA32_ADDR(base) ((base) + (0x578))
#define SOC_ATG_ATGS2_RDATA33_ADDR(base) ((base) + (0x57C))
#define SOC_ATG_ATGS3_MODE_CTRL_ADDR(base) ((base) + (0x600))
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_ADDR(base) ((base) + (0x604))
#define SOC_ATG_ATGS3_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x608))
#define SOC_ATG_ATGS3_DDR_RADDR0_ADDR(base) ((base) + (0x610))
#define SOC_ATG_ATGS3_DDR_RADDR1_ADDR(base) ((base) + (0x614))
#define SOC_ATG_ATGS3_DDR_RADDR2_ADDR(base) ((base) + (0x618))
#define SOC_ATG_ATGS3_DDR_RADDR3_ADDR(base) ((base) + (0x61C))
#define SOC_ATG_ATGS3_DDR_RADDR4_ADDR(base) ((base) + (0x620))
#define SOC_ATG_ATGS3_DDR_RADDR5_ADDR(base) ((base) + (0x624))
#define SOC_ATG_ATGS3_DDR_RADDR6_ADDR(base) ((base) + (0x628))
#define SOC_ATG_ATGS3_DDR_RADDR7_ADDR(base) ((base) + (0x62C))
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ADDR(base) ((base) + (0x630))
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ADDR(base) ((base) + (0x634))
#define SOC_ATG_ATGS3_DUMMY_READ_STAT_ADDR(base) ((base) + (0x638))
#define SOC_ATG_ATGS3_RDATA00_ADDR(base) ((base) + (0x640))
#define SOC_ATG_ATGS3_RDATA01_ADDR(base) ((base) + (0x644))
#define SOC_ATG_ATGS3_RDATA02_ADDR(base) ((base) + (0x648))
#define SOC_ATG_ATGS3_RDATA03_ADDR(base) ((base) + (0x64C))
#define SOC_ATG_ATGS3_RDATA10_ADDR(base) ((base) + (0x650))
#define SOC_ATG_ATGS3_RDATA11_ADDR(base) ((base) + (0x654))
#define SOC_ATG_ATGS3_RDATA12_ADDR(base) ((base) + (0x658))
#define SOC_ATG_ATGS3_RDATA13_ADDR(base) ((base) + (0x65C))
#define SOC_ATG_ATGS3_RDATA20_ADDR(base) ((base) + (0x660))
#define SOC_ATG_ATGS3_RDATA21_ADDR(base) ((base) + (0x664))
#define SOC_ATG_ATGS3_RDATA22_ADDR(base) ((base) + (0x668))
#define SOC_ATG_ATGS3_RDATA23_ADDR(base) ((base) + (0x66C))
#define SOC_ATG_ATGS3_RDATA30_ADDR(base) ((base) + (0x670))
#define SOC_ATG_ATGS3_RDATA31_ADDR(base) ((base) + (0x674))
#define SOC_ATG_ATGS3_RDATA32_ADDR(base) ((base) + (0x678))
#define SOC_ATG_ATGS3_RDATA33_ADDR(base) ((base) + (0x67C))
#define SOC_ATG_ATGS4_MODE_CTRL_ADDR(base) ((base) + (0x700))
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_ADDR(base) ((base) + (0x704))
#define SOC_ATG_ATGS4_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x708))
#define SOC_ATG_ATGS4_DDR_RADDR0_ADDR(base) ((base) + (0x710))
#define SOC_ATG_ATGS4_DDR_RADDR1_ADDR(base) ((base) + (0x714))
#define SOC_ATG_ATGS4_DDR_RADDR2_ADDR(base) ((base) + (0x718))
#define SOC_ATG_ATGS4_DDR_RADDR3_ADDR(base) ((base) + (0x71C))
#define SOC_ATG_ATGS4_DDR_RADDR4_ADDR(base) ((base) + (0x720))
#define SOC_ATG_ATGS4_DDR_RADDR5_ADDR(base) ((base) + (0x724))
#define SOC_ATG_ATGS4_DDR_RADDR6_ADDR(base) ((base) + (0x728))
#define SOC_ATG_ATGS4_DDR_RADDR7_ADDR(base) ((base) + (0x72C))
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ADDR(base) ((base) + (0x730))
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ADDR(base) ((base) + (0x734))
#define SOC_ATG_ATGS4_DUMMY_READ_STAT_ADDR(base) ((base) + (0x738))
#define SOC_ATG_ATGS4_RDATA00_ADDR(base) ((base) + (0x740))
#define SOC_ATG_ATGS4_RDATA01_ADDR(base) ((base) + (0x744))
#define SOC_ATG_ATGS4_RDATA02_ADDR(base) ((base) + (0x748))
#define SOC_ATG_ATGS4_RDATA03_ADDR(base) ((base) + (0x74C))
#define SOC_ATG_ATGS4_RDATA10_ADDR(base) ((base) + (0x750))
#define SOC_ATG_ATGS4_RDATA11_ADDR(base) ((base) + (0x754))
#define SOC_ATG_ATGS4_RDATA12_ADDR(base) ((base) + (0x758))
#define SOC_ATG_ATGS4_RDATA13_ADDR(base) ((base) + (0x75C))
#define SOC_ATG_ATGS4_RDATA20_ADDR(base) ((base) + (0x760))
#define SOC_ATG_ATGS4_RDATA21_ADDR(base) ((base) + (0x764))
#define SOC_ATG_ATGS4_RDATA22_ADDR(base) ((base) + (0x768))
#define SOC_ATG_ATGS4_RDATA23_ADDR(base) ((base) + (0x76C))
#define SOC_ATG_ATGS4_RDATA30_ADDR(base) ((base) + (0x770))
#define SOC_ATG_ATGS4_RDATA31_ADDR(base) ((base) + (0x774))
#define SOC_ATG_ATGS4_RDATA32_ADDR(base) ((base) + (0x778))
#define SOC_ATG_ATGS4_RDATA33_ADDR(base) ((base) + (0x77C))
#define SOC_ATG_ATGS5_MODE_CTRL_ADDR(base) ((base) + (0x800))
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_ADDR(base) ((base) + (0x804))
#define SOC_ATG_ATGS5_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x808))
#define SOC_ATG_ATGS5_DDR_RADDR0_ADDR(base) ((base) + (0x810))
#define SOC_ATG_ATGS5_DDR_RADDR1_ADDR(base) ((base) + (0x814))
#define SOC_ATG_ATGS5_DDR_RADDR2_ADDR(base) ((base) + (0x818))
#define SOC_ATG_ATGS5_DDR_RADDR3_ADDR(base) ((base) + (0x81C))
#define SOC_ATG_ATGS5_DDR_RADDR4_ADDR(base) ((base) + (0x820))
#define SOC_ATG_ATGS5_DDR_RADDR5_ADDR(base) ((base) + (0x824))
#define SOC_ATG_ATGS5_DDR_RADDR6_ADDR(base) ((base) + (0x828))
#define SOC_ATG_ATGS5_DDR_RADDR7_ADDR(base) ((base) + (0x82C))
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ADDR(base) ((base) + (0x830))
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ADDR(base) ((base) + (0x834))
#define SOC_ATG_ATGS5_DUMMY_READ_STAT_ADDR(base) ((base) + (0x838))
#define SOC_ATG_ATGS5_RDATA00_ADDR(base) ((base) + (0x840))
#define SOC_ATG_ATGS5_RDATA01_ADDR(base) ((base) + (0x844))
#define SOC_ATG_ATGS5_RDATA02_ADDR(base) ((base) + (0x848))
#define SOC_ATG_ATGS5_RDATA03_ADDR(base) ((base) + (0x84C))
#define SOC_ATG_ATGS5_RDATA10_ADDR(base) ((base) + (0x850))
#define SOC_ATG_ATGS5_RDATA11_ADDR(base) ((base) + (0x854))
#define SOC_ATG_ATGS5_RDATA12_ADDR(base) ((base) + (0x858))
#define SOC_ATG_ATGS5_RDATA13_ADDR(base) ((base) + (0x85C))
#define SOC_ATG_ATGS5_RDATA20_ADDR(base) ((base) + (0x860))
#define SOC_ATG_ATGS5_RDATA21_ADDR(base) ((base) + (0x864))
#define SOC_ATG_ATGS5_RDATA22_ADDR(base) ((base) + (0x868))
#define SOC_ATG_ATGS5_RDATA23_ADDR(base) ((base) + (0x86C))
#define SOC_ATG_ATGS5_RDATA30_ADDR(base) ((base) + (0x870))
#define SOC_ATG_ATGS5_RDATA31_ADDR(base) ((base) + (0x874))
#define SOC_ATG_ATGS5_RDATA32_ADDR(base) ((base) + (0x878))
#define SOC_ATG_ATGS5_RDATA33_ADDR(base) ((base) + (0x87C))
#define SOC_ATG_ATGS6_MODE_CTRL_ADDR(base) ((base) + (0x900))
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_ADDR(base) ((base) + (0x904))
#define SOC_ATG_ATGS6_DDR_CHECK_PERIOD_ADDR(base) ((base) + (0x908))
#define SOC_ATG_ATGS6_DDR_RADDR0_ADDR(base) ((base) + (0x910))
#define SOC_ATG_ATGS6_DDR_RADDR1_ADDR(base) ((base) + (0x914))
#define SOC_ATG_ATGS6_DDR_RADDR2_ADDR(base) ((base) + (0x918))
#define SOC_ATG_ATGS6_DDR_RADDR3_ADDR(base) ((base) + (0x91C))
#define SOC_ATG_ATGS6_DDR_RADDR4_ADDR(base) ((base) + (0x920))
#define SOC_ATG_ATGS6_DDR_RADDR5_ADDR(base) ((base) + (0x924))
#define SOC_ATG_ATGS6_DDR_RADDR6_ADDR(base) ((base) + (0x928))
#define SOC_ATG_ATGS6_DDR_RADDR7_ADDR(base) ((base) + (0x92C))
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ADDR(base) ((base) + (0x930))
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ADDR(base) ((base) + (0x934))
#define SOC_ATG_ATGS6_DUMMY_READ_STAT_ADDR(base) ((base) + (0x938))
#define SOC_ATG_ATGS6_RDATA00_ADDR(base) ((base) + (0x940))
#define SOC_ATG_ATGS6_RDATA01_ADDR(base) ((base) + (0x944))
#define SOC_ATG_ATGS6_RDATA02_ADDR(base) ((base) + (0x948))
#define SOC_ATG_ATGS6_RDATA03_ADDR(base) ((base) + (0x94C))
#define SOC_ATG_ATGS6_RDATA10_ADDR(base) ((base) + (0x950))
#define SOC_ATG_ATGS6_RDATA11_ADDR(base) ((base) + (0x954))
#define SOC_ATG_ATGS6_RDATA12_ADDR(base) ((base) + (0x958))
#define SOC_ATG_ATGS6_RDATA13_ADDR(base) ((base) + (0x95C))
#define SOC_ATG_ATGS6_RDATA20_ADDR(base) ((base) + (0x960))
#define SOC_ATG_ATGS6_RDATA21_ADDR(base) ((base) + (0x964))
#define SOC_ATG_ATGS6_RDATA22_ADDR(base) ((base) + (0x968))
#define SOC_ATG_ATGS6_RDATA23_ADDR(base) ((base) + (0x96C))
#define SOC_ATG_ATGS6_RDATA30_ADDR(base) ((base) + (0x970))
#define SOC_ATG_ATGS6_RDATA31_ADDR(base) ((base) + (0x974))
#define SOC_ATG_ATGS6_RDATA32_ADDR(base) ((base) + (0x978))
#define SOC_ATG_ATGS6_RDATA33_ADDR(base) ((base) + (0x97C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGM0_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGM0_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGM0_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGM0_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGM0_MODE_CTRL_power_test_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awlen_cfg : 3;
        unsigned int wburst_en : 1;
        unsigned int wmode : 1;
        unsigned int wgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM0_WBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM0_WBURST_MODE_awlen_cfg_START (0)
#define SOC_ATG_ATGM0_WBURST_MODE_awlen_cfg_END (2)
#define SOC_ATG_ATGM0_WBURST_MODE_wburst_en_START (3)
#define SOC_ATG_ATGM0_WBURST_MODE_wburst_en_END (3)
#define SOC_ATG_ATGM0_WBURST_MODE_wmode_START (4)
#define SOC_ATG_ATGM0_WBURST_MODE_wmode_END (4)
#define SOC_ATG_ATGM0_WBURST_MODE_wgap_time_START (5)
#define SOC_ATG_ATGM0_WBURST_MODE_wgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM0_WBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM0_WBURST_ADDR_LOW_awaddr_cfg_low_START (0)
#define SOC_ATG_ATGM0_WBURST_ADDR_LOW_awaddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM0_WBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM0_WBURST_ADDR_HIGH_awaddr_cfg_high_START (0)
#define SOC_ATG_ATGM0_WBURST_ADDR_HIGH_awaddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr_num : 32;
    } reg;
} SOC_ATG_ATGM0_WADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM0_WADDR_NUM_waddr_num_START (0)
#define SOC_ATG_ATGM0_WADDR_NUM_waddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata00 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA00_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA00_wdata00_START (0)
#define SOC_ATG_ATGM0_WDATA00_wdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata01 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA01_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA01_wdata01_START (0)
#define SOC_ATG_ATGM0_WDATA01_wdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata02 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA02_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA02_wdata02_START (0)
#define SOC_ATG_ATGM0_WDATA02_wdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata03 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA03_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA03_wdata03_START (0)
#define SOC_ATG_ATGM0_WDATA03_wdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata10 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA10_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA10_wdata10_START (0)
#define SOC_ATG_ATGM0_WDATA10_wdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata11 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA11_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA11_wdata11_START (0)
#define SOC_ATG_ATGM0_WDATA11_wdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata12 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA12_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA12_wdata12_START (0)
#define SOC_ATG_ATGM0_WDATA12_wdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata13 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA13_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA13_wdata13_START (0)
#define SOC_ATG_ATGM0_WDATA13_wdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata20 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA20_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA20_wdata20_START (0)
#define SOC_ATG_ATGM0_WDATA20_wdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata21 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA21_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA21_wdata21_START (0)
#define SOC_ATG_ATGM0_WDATA21_wdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata22 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA22_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA22_wdata22_START (0)
#define SOC_ATG_ATGM0_WDATA22_wdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata23 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA23_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA23_wdata23_START (0)
#define SOC_ATG_ATGM0_WDATA23_wdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata30 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA30_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA30_wdata30_START (0)
#define SOC_ATG_ATGM0_WDATA30_wdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata31 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA31_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA31_wdata31_START (0)
#define SOC_ATG_ATGM0_WDATA31_wdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata32 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA32_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA32_wdata32_START (0)
#define SOC_ATG_ATGM0_WDATA32_wdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata33 : 32;
    } reg;
} SOC_ATG_ATGM0_WDATA33_UNION;
#endif
#define SOC_ATG_ATGM0_WDATA33_wdata33_START (0)
#define SOC_ATG_ATGM0_WDATA33_wdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int arlen_cfg : 3;
        unsigned int rburst_en : 1;
        unsigned int rmode : 1;
        unsigned int rgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM0_RBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM0_RBURST_MODE_arlen_cfg_START (0)
#define SOC_ATG_ATGM0_RBURST_MODE_arlen_cfg_END (2)
#define SOC_ATG_ATGM0_RBURST_MODE_rburst_en_START (3)
#define SOC_ATG_ATGM0_RBURST_MODE_rburst_en_END (3)
#define SOC_ATG_ATGM0_RBURST_MODE_rmode_START (4)
#define SOC_ATG_ATGM0_RBURST_MODE_rmode_END (4)
#define SOC_ATG_ATGM0_RBURST_MODE_rgap_time_START (5)
#define SOC_ATG_ATGM0_RBURST_MODE_rgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM0_RBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM0_RBURST_ADDR_LOW_araddr_cfg_low_START (0)
#define SOC_ATG_ATGM0_RBURST_ADDR_LOW_araddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM0_RBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM0_RBURST_ADDR_HIGH_araddr_cfg_high_START (0)
#define SOC_ATG_ATGM0_RBURST_ADDR_HIGH_araddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr_num : 32;
    } reg;
} SOC_ATG_ATGM0_RADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM0_RADDR_NUM_raddr_num_START (0)
#define SOC_ATG_ATGM0_RADDR_NUM_raddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGM1_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGM1_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGM1_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGM1_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGM1_MODE_CTRL_power_test_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awlen_cfg : 3;
        unsigned int wburst_en : 1;
        unsigned int wmode : 1;
        unsigned int wgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM1_WBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM1_WBURST_MODE_awlen_cfg_START (0)
#define SOC_ATG_ATGM1_WBURST_MODE_awlen_cfg_END (2)
#define SOC_ATG_ATGM1_WBURST_MODE_wburst_en_START (3)
#define SOC_ATG_ATGM1_WBURST_MODE_wburst_en_END (3)
#define SOC_ATG_ATGM1_WBURST_MODE_wmode_START (4)
#define SOC_ATG_ATGM1_WBURST_MODE_wmode_END (4)
#define SOC_ATG_ATGM1_WBURST_MODE_wgap_time_START (5)
#define SOC_ATG_ATGM1_WBURST_MODE_wgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM1_WBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM1_WBURST_ADDR_LOW_awaddr_cfg_low_START (0)
#define SOC_ATG_ATGM1_WBURST_ADDR_LOW_awaddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM1_WBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM1_WBURST_ADDR_HIGH_awaddr_cfg_high_START (0)
#define SOC_ATG_ATGM1_WBURST_ADDR_HIGH_awaddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr_num : 32;
    } reg;
} SOC_ATG_ATGM1_WADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM1_WADDR_NUM_waddr_num_START (0)
#define SOC_ATG_ATGM1_WADDR_NUM_waddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata00 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA00_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA00_wdata00_START (0)
#define SOC_ATG_ATGM1_WDATA00_wdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata01 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA01_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA01_wdata01_START (0)
#define SOC_ATG_ATGM1_WDATA01_wdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata02 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA02_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA02_wdata02_START (0)
#define SOC_ATG_ATGM1_WDATA02_wdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata03 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA03_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA03_wdata03_START (0)
#define SOC_ATG_ATGM1_WDATA03_wdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata10 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA10_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA10_wdata10_START (0)
#define SOC_ATG_ATGM1_WDATA10_wdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata11 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA11_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA11_wdata11_START (0)
#define SOC_ATG_ATGM1_WDATA11_wdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata12 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA12_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA12_wdata12_START (0)
#define SOC_ATG_ATGM1_WDATA12_wdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata13 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA13_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA13_wdata13_START (0)
#define SOC_ATG_ATGM1_WDATA13_wdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata20 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA20_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA20_wdata20_START (0)
#define SOC_ATG_ATGM1_WDATA20_wdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata21 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA21_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA21_wdata21_START (0)
#define SOC_ATG_ATGM1_WDATA21_wdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata22 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA22_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA22_wdata22_START (0)
#define SOC_ATG_ATGM1_WDATA22_wdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata23 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA23_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA23_wdata23_START (0)
#define SOC_ATG_ATGM1_WDATA23_wdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata30 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA30_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA30_wdata30_START (0)
#define SOC_ATG_ATGM1_WDATA30_wdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata31 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA31_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA31_wdata31_START (0)
#define SOC_ATG_ATGM1_WDATA31_wdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata32 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA32_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA32_wdata32_START (0)
#define SOC_ATG_ATGM1_WDATA32_wdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata33 : 32;
    } reg;
} SOC_ATG_ATGM1_WDATA33_UNION;
#endif
#define SOC_ATG_ATGM1_WDATA33_wdata33_START (0)
#define SOC_ATG_ATGM1_WDATA33_wdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int arlen_cfg : 3;
        unsigned int rburst_en : 1;
        unsigned int rmode : 1;
        unsigned int rgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM1_RBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM1_RBURST_MODE_arlen_cfg_START (0)
#define SOC_ATG_ATGM1_RBURST_MODE_arlen_cfg_END (2)
#define SOC_ATG_ATGM1_RBURST_MODE_rburst_en_START (3)
#define SOC_ATG_ATGM1_RBURST_MODE_rburst_en_END (3)
#define SOC_ATG_ATGM1_RBURST_MODE_rmode_START (4)
#define SOC_ATG_ATGM1_RBURST_MODE_rmode_END (4)
#define SOC_ATG_ATGM1_RBURST_MODE_rgap_time_START (5)
#define SOC_ATG_ATGM1_RBURST_MODE_rgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM1_RBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM1_RBURST_ADDR_LOW_araddr_cfg_low_START (0)
#define SOC_ATG_ATGM1_RBURST_ADDR_LOW_araddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM1_RBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM1_RBURST_ADDR_HIGH_araddr_cfg_high_START (0)
#define SOC_ATG_ATGM1_RBURST_ADDR_HIGH_araddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr_num : 32;
    } reg;
} SOC_ATG_ATGM1_RADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM1_RADDR_NUM_raddr_num_START (0)
#define SOC_ATG_ATGM1_RADDR_NUM_raddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGM2_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGM2_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGM2_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGM2_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGM2_MODE_CTRL_power_test_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awlen_cfg : 3;
        unsigned int wburst_en : 1;
        unsigned int wmode : 1;
        unsigned int wgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM2_WBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM2_WBURST_MODE_awlen_cfg_START (0)
#define SOC_ATG_ATGM2_WBURST_MODE_awlen_cfg_END (2)
#define SOC_ATG_ATGM2_WBURST_MODE_wburst_en_START (3)
#define SOC_ATG_ATGM2_WBURST_MODE_wburst_en_END (3)
#define SOC_ATG_ATGM2_WBURST_MODE_wmode_START (4)
#define SOC_ATG_ATGM2_WBURST_MODE_wmode_END (4)
#define SOC_ATG_ATGM2_WBURST_MODE_wgap_time_START (5)
#define SOC_ATG_ATGM2_WBURST_MODE_wgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM2_WBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM2_WBURST_ADDR_LOW_awaddr_cfg_low_START (0)
#define SOC_ATG_ATGM2_WBURST_ADDR_LOW_awaddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM2_WBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM2_WBURST_ADDR_HIGH_awaddr_cfg_high_START (0)
#define SOC_ATG_ATGM2_WBURST_ADDR_HIGH_awaddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr_num : 32;
    } reg;
} SOC_ATG_ATGM2_WADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM2_WADDR_NUM_waddr_num_START (0)
#define SOC_ATG_ATGM2_WADDR_NUM_waddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata00 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA00_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA00_wdata00_START (0)
#define SOC_ATG_ATGM2_WDATA00_wdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata01 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA01_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA01_wdata01_START (0)
#define SOC_ATG_ATGM2_WDATA01_wdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata02 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA02_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA02_wdata02_START (0)
#define SOC_ATG_ATGM2_WDATA02_wdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata03 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA03_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA03_wdata03_START (0)
#define SOC_ATG_ATGM2_WDATA03_wdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata10 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA10_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA10_wdata10_START (0)
#define SOC_ATG_ATGM2_WDATA10_wdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata11 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA11_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA11_wdata11_START (0)
#define SOC_ATG_ATGM2_WDATA11_wdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata12 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA12_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA12_wdata12_START (0)
#define SOC_ATG_ATGM2_WDATA12_wdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata13 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA13_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA13_wdata13_START (0)
#define SOC_ATG_ATGM2_WDATA13_wdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata20 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA20_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA20_wdata20_START (0)
#define SOC_ATG_ATGM2_WDATA20_wdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata21 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA21_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA21_wdata21_START (0)
#define SOC_ATG_ATGM2_WDATA21_wdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata22 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA22_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA22_wdata22_START (0)
#define SOC_ATG_ATGM2_WDATA22_wdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata23 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA23_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA23_wdata23_START (0)
#define SOC_ATG_ATGM2_WDATA23_wdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata30 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA30_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA30_wdata30_START (0)
#define SOC_ATG_ATGM2_WDATA30_wdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata31 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA31_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA31_wdata31_START (0)
#define SOC_ATG_ATGM2_WDATA31_wdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata32 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA32_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA32_wdata32_START (0)
#define SOC_ATG_ATGM2_WDATA32_wdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdata33 : 32;
    } reg;
} SOC_ATG_ATGM2_WDATA33_UNION;
#endif
#define SOC_ATG_ATGM2_WDATA33_wdata33_START (0)
#define SOC_ATG_ATGM2_WDATA33_wdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int arlen_cfg : 3;
        unsigned int rburst_en : 1;
        unsigned int rmode : 1;
        unsigned int rgap_time : 11;
        unsigned int reserved : 16;
    } reg;
} SOC_ATG_ATGM2_RBURST_MODE_UNION;
#endif
#define SOC_ATG_ATGM2_RBURST_MODE_arlen_cfg_START (0)
#define SOC_ATG_ATGM2_RBURST_MODE_arlen_cfg_END (2)
#define SOC_ATG_ATGM2_RBURST_MODE_rburst_en_START (3)
#define SOC_ATG_ATGM2_RBURST_MODE_rburst_en_END (3)
#define SOC_ATG_ATGM2_RBURST_MODE_rmode_START (4)
#define SOC_ATG_ATGM2_RBURST_MODE_rmode_END (4)
#define SOC_ATG_ATGM2_RBURST_MODE_rgap_time_START (5)
#define SOC_ATG_ATGM2_RBURST_MODE_rgap_time_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_low : 32;
    } reg;
} SOC_ATG_ATGM2_RBURST_ADDR_LOW_UNION;
#endif
#define SOC_ATG_ATGM2_RBURST_ADDR_LOW_araddr_cfg_low_START (0)
#define SOC_ATG_ATGM2_RBURST_ADDR_LOW_araddr_cfg_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int araddr_cfg_high : 32;
    } reg;
} SOC_ATG_ATGM2_RBURST_ADDR_HIGH_UNION;
#endif
#define SOC_ATG_ATGM2_RBURST_ADDR_HIGH_araddr_cfg_high_START (0)
#define SOC_ATG_ATGM2_RBURST_ADDR_HIGH_araddr_cfg_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr_num : 32;
    } reg;
} SOC_ATG_ATGM2_RADDR_NUM_UNION;
#endif
#define SOC_ATG_ATGM2_RADDR_NUM_raddr_num_START (0)
#define SOC_ATG_ATGM2_RADDR_NUM_raddr_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS0_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS0_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS0_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS0_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS0_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS0_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS0_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS0_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS0_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS0_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS0_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS0_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS0_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS0_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS0_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS0_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS0_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS0_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS0_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS0_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS0_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS0_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS0_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS0_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS0_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS0_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS0_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS0_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS0_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS0_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS0_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS0_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS0_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS0_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS0_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS0_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS1_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS1_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS1_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS1_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS1_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS1_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS1_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS1_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS1_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS1_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS1_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS1_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS1_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS1_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS1_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS1_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS1_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS1_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS1_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS1_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS1_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS1_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS1_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS1_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS1_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS1_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS1_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS1_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS1_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS1_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS1_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS1_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS1_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS1_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS1_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS1_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS2_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS2_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS2_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS2_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS2_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS2_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS2_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS2_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS2_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS2_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS2_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS2_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS2_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS2_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS2_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS2_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS2_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS2_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS2_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS2_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS2_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS2_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS2_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS2_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS2_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS2_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS2_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS2_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS2_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS2_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS2_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS2_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS2_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS2_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS2_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS2_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS3_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS3_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS3_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS3_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS3_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS3_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS3_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS3_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS3_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS3_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS3_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS3_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS3_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS3_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS3_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS3_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS3_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS3_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS3_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS3_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS3_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS3_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS3_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS3_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS3_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS3_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS3_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS3_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS3_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS3_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS3_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS3_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS3_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS3_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS3_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS3_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS4_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS4_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS4_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS4_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS4_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS4_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS4_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS4_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS4_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS4_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS4_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS4_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS4_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS4_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS4_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS4_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS4_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS4_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS4_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS4_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS4_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS4_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS4_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS4_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS4_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS4_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS4_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS4_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS4_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS4_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS4_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS4_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS4_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS4_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS4_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS4_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS5_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS5_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS5_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS5_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS5_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS5_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS5_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS5_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS5_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS5_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS5_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS5_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS5_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS5_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS5_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS5_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS5_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS5_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS5_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS5_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS5_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS5_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS5_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS5_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS5_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS5_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS5_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS5_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS5_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS5_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS5_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS5_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS5_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS5_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS5_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS5_RDATA33_rdata33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_test_bypass : 1;
        unsigned int power_test_en : 1;
        unsigned int axi_pend_bypass : 1;
        unsigned int dummy_read_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ATG_ATGS6_MODE_CTRL_UNION;
#endif
#define SOC_ATG_ATGS6_MODE_CTRL_power_test_bypass_START (0)
#define SOC_ATG_ATGS6_MODE_CTRL_power_test_bypass_END (0)
#define SOC_ATG_ATGS6_MODE_CTRL_power_test_en_START (1)
#define SOC_ATG_ATGS6_MODE_CTRL_power_test_en_END (1)
#define SOC_ATG_ATGS6_MODE_CTRL_axi_pend_bypass_START (2)
#define SOC_ATG_ATGS6_MODE_CTRL_axi_pend_bypass_END (2)
#define SOC_ATG_ATGS6_MODE_CTRL_dummy_read_bypass_START (3)
#define SOC_ATG_ATGS6_MODE_CTRL_dummy_read_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_rank_num : 3;
        unsigned int check_burst_len : 2;
        unsigned int reserved : 7;
        unsigned int arqos_cfg : 4;
        unsigned int arid_cfg : 16;
    } reg;
} SOC_ATG_ATGS6_DDR_CHECK_CFG_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_check_rank_num_START (0)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_check_rank_num_END (2)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_check_burst_len_START (3)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_check_burst_len_END (4)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_arqos_cfg_START (12)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_arqos_cfg_END (15)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_arid_cfg_START (16)
#define SOC_ATG_ATGS6_DDR_CHECK_CFG_arid_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_check_period : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_CHECK_PERIOD_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_CHECK_PERIOD_ddr_check_period_START (0)
#define SOC_ATG_ATGS6_DDR_CHECK_PERIOD_ddr_check_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR0_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR0_ddr_raddr0_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR0_ddr_raddr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr1_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR1_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR1_ddr_raddr1_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR1_ddr_raddr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr2_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR2_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR2_ddr_raddr2_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR2_ddr_raddr2_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr3_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR3_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR3_ddr_raddr3_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR3_ddr_raddr3_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR4_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR4_ddr_raddr4_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR4_ddr_raddr4_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr5_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR5_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR5_ddr_raddr5_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR5_ddr_raddr5_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr6_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR6_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR6_ddr_raddr6_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR6_ddr_raddr6_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr7_low : 32;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR7_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR7_ddr_raddr7_low_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR7_ddr_raddr7_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr0_high : 8;
        unsigned int ddr_raddr1_high : 8;
        unsigned int ddr_raddr2_high : 8;
        unsigned int ddr_raddr3_high : 8;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR_H0_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr0_high_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr0_high_END (7)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr1_high_START (8)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr1_high_END (15)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr2_high_START (16)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr2_high_END (23)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr3_high_START (24)
#define SOC_ATG_ATGS6_DDR_RADDR_H0_ddr_raddr3_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_raddr4_high : 8;
        unsigned int ddr_raddr5_high : 8;
        unsigned int ddr_raddr6_high : 8;
        unsigned int ddr_raddr7_high : 8;
    } reg;
} SOC_ATG_ATGS6_DDR_RADDR_H1_UNION;
#endif
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr4_high_START (0)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr4_high_END (7)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr5_high_START (8)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr5_high_END (15)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr6_high_START (16)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr6_high_END (23)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr7_high_START (24)
#define SOC_ATG_ATGS6_DDR_RADDR_H1_ddr_raddr7_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_read_stat : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ATG_ATGS6_DUMMY_READ_STAT_UNION;
#endif
#define SOC_ATG_ATGS6_DUMMY_READ_STAT_dummy_read_stat_START (0)
#define SOC_ATG_ATGS6_DUMMY_READ_STAT_dummy_read_stat_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata00 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA00_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA00_rdata00_START (0)
#define SOC_ATG_ATGS6_RDATA00_rdata00_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata01 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA01_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA01_rdata01_START (0)
#define SOC_ATG_ATGS6_RDATA01_rdata01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata02 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA02_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA02_rdata02_START (0)
#define SOC_ATG_ATGS6_RDATA02_rdata02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata03 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA03_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA03_rdata03_START (0)
#define SOC_ATG_ATGS6_RDATA03_rdata03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata10 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA10_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA10_rdata10_START (0)
#define SOC_ATG_ATGS6_RDATA10_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata11 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA11_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA11_rdata11_START (0)
#define SOC_ATG_ATGS6_RDATA11_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata12 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA12_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA12_rdata12_START (0)
#define SOC_ATG_ATGS6_RDATA12_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata13 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA13_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA13_rdata13_START (0)
#define SOC_ATG_ATGS6_RDATA13_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata20 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA20_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA20_rdata20_START (0)
#define SOC_ATG_ATGS6_RDATA20_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata21 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA21_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA21_rdata21_START (0)
#define SOC_ATG_ATGS6_RDATA21_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata22 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA22_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA22_rdata22_START (0)
#define SOC_ATG_ATGS6_RDATA22_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata23 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA23_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA23_rdata23_START (0)
#define SOC_ATG_ATGS6_RDATA23_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata30 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA30_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA30_rdata30_START (0)
#define SOC_ATG_ATGS6_RDATA30_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata31 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA31_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA31_rdata31_START (0)
#define SOC_ATG_ATGS6_RDATA31_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata32 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA32_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA32_rdata32_START (0)
#define SOC_ATG_ATGS6_RDATA32_rdata32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdata33 : 32;
    } reg;
} SOC_ATG_ATGS6_RDATA33_UNION;
#endif
#define SOC_ATG_ATGS6_RDATA33_rdata33_START (0)
#define SOC_ATG_ATGS6_RDATA33_rdata33_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
