#ifndef __SOC_IOC_MMC1_INTERFACE_H__
#define __SOC_IOC_MMC1_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IOC_MMC1_IOMG_000_ADDR(base) ((base) + (0x000))
#define SOC_IOC_MMC1_IOMG_001_ADDR(base) ((base) + (0x004))
#define SOC_IOC_MMC1_IOMG_002_ADDR(base) ((base) + (0x008))
#define SOC_IOC_MMC1_IOMG_003_ADDR(base) ((base) + (0x00C))
#define SOC_IOC_MMC1_IOMG_004_ADDR(base) ((base) + (0x010))
#define SOC_IOC_MMC1_IOMG_005_ADDR(base) ((base) + (0x014))
#define SOC_IOC_MMC1_IOCG_000_ADDR(base) ((base) + (0x800))
#define SOC_IOC_MMC1_IOCG_001_ADDR(base) ((base) + (0x804))
#define SOC_IOC_MMC1_IOCG_002_ADDR(base) ((base) + (0x808))
#define SOC_IOC_MMC1_IOCG_003_ADDR(base) ((base) + (0x80C))
#define SOC_IOC_MMC1_IOCG_004_ADDR(base) ((base) + (0x810))
#define SOC_IOC_MMC1_IOCG_005_ADDR(base) ((base) + (0x814))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_000 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_000_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_000_iomg_000_START (0)
#define SOC_IOC_MMC1_IOMG_000_iomg_000_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_001 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_001_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_001_iomg_001_START (0)
#define SOC_IOC_MMC1_IOMG_001_iomg_001_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_002 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_002_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_002_iomg_002_START (0)
#define SOC_IOC_MMC1_IOMG_002_iomg_002_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_003 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_003_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_003_iomg_003_START (0)
#define SOC_IOC_MMC1_IOMG_003_iomg_003_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_004 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_004_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_004_iomg_004_START (0)
#define SOC_IOC_MMC1_IOMG_004_iomg_004_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_005 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IOC_MMC1_IOMG_005_UNION;
#endif
#define SOC_IOC_MMC1_IOMG_005_iomg_005_START (0)
#define SOC_IOC_MMC1_IOMG_005_iomg_005_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_000_pu : 1;
        unsigned int iocg_000_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_000_ds0 : 1;
        unsigned int iocg_000_ds1 : 1;
        unsigned int iocg_000_ds2 : 1;
        unsigned int iocg_000_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_000_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_000_iocg_000_pu_START (0)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_pu_END (0)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_pd_START (1)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_pd_END (1)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_sr_START (7)
#define SOC_IOC_MMC1_IOCG_000_iocg_000_sr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_001_pu : 1;
        unsigned int iocg_001_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_001_ds0 : 1;
        unsigned int iocg_001_ds1 : 1;
        unsigned int iocg_001_ds2 : 1;
        unsigned int iocg_001_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_001_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_001_iocg_001_pu_START (0)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_pu_END (0)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_pd_START (1)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_pd_END (1)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_sr_START (7)
#define SOC_IOC_MMC1_IOCG_001_iocg_001_sr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_002_pu : 1;
        unsigned int iocg_002_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_002_ds0 : 1;
        unsigned int iocg_002_ds1 : 1;
        unsigned int iocg_002_ds2 : 1;
        unsigned int iocg_002_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_002_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_002_iocg_002_pu_START (0)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_pu_END (0)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_pd_START (1)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_pd_END (1)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_sr_START (7)
#define SOC_IOC_MMC1_IOCG_002_iocg_002_sr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_003_pu : 1;
        unsigned int iocg_003_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_003_ds0 : 1;
        unsigned int iocg_003_ds1 : 1;
        unsigned int iocg_003_ds2 : 1;
        unsigned int iocg_003_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_003_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_003_iocg_003_pu_START (0)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_pu_END (0)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_pd_START (1)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_pd_END (1)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_sr_START (7)
#define SOC_IOC_MMC1_IOCG_003_iocg_003_sr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_004_pu : 1;
        unsigned int iocg_004_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_004_ds0 : 1;
        unsigned int iocg_004_ds1 : 1;
        unsigned int iocg_004_ds2 : 1;
        unsigned int iocg_004_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_004_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_004_iocg_004_pu_START (0)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_pu_END (0)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_pd_START (1)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_pd_END (1)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_sr_START (7)
#define SOC_IOC_MMC1_IOCG_004_iocg_004_sr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_005_pu : 1;
        unsigned int iocg_005_pd : 1;
        unsigned int reserved_0 : 2;
        unsigned int iocg_005_ds0 : 1;
        unsigned int iocg_005_ds1 : 1;
        unsigned int iocg_005_ds2 : 1;
        unsigned int iocg_005_sr : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC1_IOCG_005_UNION;
#endif
#define SOC_IOC_MMC1_IOCG_005_iocg_005_pu_START (0)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_pu_END (0)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_pd_START (1)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_pd_END (1)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds0_START (4)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds0_END (4)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds1_START (5)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds1_END (5)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds2_START (6)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_ds2_END (6)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_sr_START (7)
#define SOC_IOC_MMC1_IOCG_005_iocg_005_sr_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
