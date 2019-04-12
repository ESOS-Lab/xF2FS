#ifndef __SOC_IOC_MMC0_INTERFACE_H__
#define __SOC_IOC_MMC0_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IOC_MMC0_IOMG_000_ADDR(base) ((base) + (0x000))
#define SOC_IOC_MMC0_IOMG_001_ADDR(base) ((base) + (0x004))
#define SOC_IOC_MMC0_IOMG_002_ADDR(base) ((base) + (0x008))
#define SOC_IOC_MMC0_IOMG_003_ADDR(base) ((base) + (0x00C))
#define SOC_IOC_MMC0_IOMG_004_ADDR(base) ((base) + (0x010))
#define SOC_IOC_MMC0_IOMG_005_ADDR(base) ((base) + (0x014))
#define SOC_IOC_MMC0_IOCG_000_ADDR(base) ((base) + (0x800))
#define SOC_IOC_MMC0_IOCG_001_ADDR(base) ((base) + (0x804))
#define SOC_IOC_MMC0_IOCG_002_ADDR(base) ((base) + (0x808))
#define SOC_IOC_MMC0_IOCG_003_ADDR(base) ((base) + (0x80C))
#define SOC_IOC_MMC0_IOCG_004_ADDR(base) ((base) + (0x810))
#define SOC_IOC_MMC0_IOCG_005_ADDR(base) ((base) + (0x814))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_000 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_000_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_000_iomg_000_START (0)
#define SOC_IOC_MMC0_IOMG_000_iomg_000_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_001 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_001_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_001_iomg_001_START (0)
#define SOC_IOC_MMC0_IOMG_001_iomg_001_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_002 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_002_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_002_iomg_002_START (0)
#define SOC_IOC_MMC0_IOMG_002_iomg_002_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_003 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_003_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_003_iomg_003_START (0)
#define SOC_IOC_MMC0_IOMG_003_iomg_003_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_004 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_004_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_004_iomg_004_START (0)
#define SOC_IOC_MMC0_IOMG_004_iomg_004_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iomg_005 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IOC_MMC0_IOMG_005_UNION;
#endif
#define SOC_IOC_MMC0_IOMG_005_iomg_005_START (0)
#define SOC_IOC_MMC0_IOMG_005_iomg_005_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_000_pu : 1;
        unsigned int iocg_000_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_000_st : 1;
        unsigned int iocg_000_ds0 : 1;
        unsigned int iocg_000_ds1 : 1;
        unsigned int iocg_000_ds2 : 1;
        unsigned int iocg_000_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_000_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_000_iocg_000_pu_START (0)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_pu_END (0)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_pd_START (1)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_pd_END (1)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_st_START (3)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_st_END (3)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_000_iocg_000_ds3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_001_pu : 1;
        unsigned int iocg_001_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_001_st : 1;
        unsigned int iocg_001_ds0 : 1;
        unsigned int iocg_001_ds1 : 1;
        unsigned int iocg_001_ds2 : 1;
        unsigned int iocg_001_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_001_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_001_iocg_001_pu_START (0)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_pu_END (0)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_pd_START (1)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_pd_END (1)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_st_START (3)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_st_END (3)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_001_iocg_001_ds3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_002_pu : 1;
        unsigned int iocg_002_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_002_st : 1;
        unsigned int iocg_002_ds0 : 1;
        unsigned int iocg_002_ds1 : 1;
        unsigned int iocg_002_ds2 : 1;
        unsigned int iocg_002_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_002_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_002_iocg_002_pu_START (0)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_pu_END (0)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_pd_START (1)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_pd_END (1)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_st_START (3)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_st_END (3)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_002_iocg_002_ds3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_003_pu : 1;
        unsigned int iocg_003_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_003_st : 1;
        unsigned int iocg_003_ds0 : 1;
        unsigned int iocg_003_ds1 : 1;
        unsigned int iocg_003_ds2 : 1;
        unsigned int iocg_003_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_003_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_003_iocg_003_pu_START (0)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_pu_END (0)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_pd_START (1)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_pd_END (1)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_st_START (3)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_st_END (3)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_003_iocg_003_ds3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_004_pu : 1;
        unsigned int iocg_004_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_004_st : 1;
        unsigned int iocg_004_ds0 : 1;
        unsigned int iocg_004_ds1 : 1;
        unsigned int iocg_004_ds2 : 1;
        unsigned int iocg_004_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_004_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_004_iocg_004_pu_START (0)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_pu_END (0)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_pd_START (1)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_pd_END (1)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_st_START (3)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_st_END (3)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_004_iocg_004_ds3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iocg_005_pu : 1;
        unsigned int iocg_005_pd : 1;
        unsigned int reserved_0 : 1;
        unsigned int iocg_005_st : 1;
        unsigned int iocg_005_ds0 : 1;
        unsigned int iocg_005_ds1 : 1;
        unsigned int iocg_005_ds2 : 1;
        unsigned int iocg_005_ds3 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_IOC_MMC0_IOCG_005_UNION;
#endif
#define SOC_IOC_MMC0_IOCG_005_iocg_005_pu_START (0)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_pu_END (0)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_pd_START (1)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_pd_END (1)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_st_START (3)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_st_END (3)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds0_START (4)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds0_END (4)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds1_START (5)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds1_END (5)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds2_START (6)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds2_END (6)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds3_START (7)
#define SOC_IOC_MMC0_IOCG_005_iocg_005_ds3_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
