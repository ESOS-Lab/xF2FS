#include "bsp_trace.h"
#include "bsp_hds_ind.h"
#include "bsp_hds_service.h"
#include <osl_types.h>


extern s32 bsp_transreport(TRANS_IND_STRU *pstData);

void bsp_trace_test0(u32 data1, u32 data2,u32 data3,u32 data4,u32 data5)
{
   u64 data = 4294967300;
   bsp_trace(BSP_LOG_LEVEL_NOTICE, BSP_MODU_LOG,"%d,%lld,%d,%d,%d,%d\n",data1,data,data2,data3,data4,data5);
}

void bsp_trace_test0_1(u32 data1, u32 data, u32 data2,u32 data3,u32 data4,u32 data5)
{
   bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"%d,%d,%d,%d,%d,%d\n",data1,data,data2,data3,data4,data5);
}

void bsp_trace_test0_2(u32 data2,u32 data3,u32 data4,u32 data5)
{
   u64 data = 4294967300;
   u64 data1 = 4294967333;
   bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"%lld,%d,%d,%d,%d,%d\n",data1,data,data2,data3,data4,data5);
}

void bsp_trace_test1(u32 data1, u32 data2)
{
   u64 data = 4294967300;
   bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"data1:%d, data:%lld, data2:%d\n",data1,(u64)data,data2);
}

void bsp_trace_test1_1(u32 data1, u32 data2)
{
   bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"data1:%d, data:%lld, data2:%d\n",data1,(u64)4294967300,data2);
}

void bsp_trace_test1_2(u32 data1, u32 data2)
{
   bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"data1:%d, data:%lld, data2:%d\n",data1,4294967300,data2);
}

/*fail*/
void bsp_trace_test2_1(u64 data)
{
    u64 data1;
    data1 = data;
    bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"data:%lld\n", (u64)data1);
}

void bsp_print_report_test0(void)
{
    bsp_trace(BSP_LOG_LEVEL_FATAL, BSP_MODU_LOG,"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa!\n");
}
void bsp_print_report_test1(void)
{
    bsp_trace(BSP_LOG_LEVEL_WARNING, BSP_MODU_LOG,"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb\n");
}
void bsp_print_report_test2(void)
{
    bsp_trace(BSP_LOG_LEVEL_DEBUG, BSP_MODU_DLOCK,"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc\n");
}

typedef struct
{
    u32 temperater;
    u32 time;
}trans_report_stru;

int bsp_trans_report_test0(void)
{
    trans_report_stru trans = {0,0};
    TRANS_IND_STRU pstdata = {0};
    int ret;

    trans.temperater = 9;
    trans.time = 10;

    // ( 31-24:modemid,23-16:modeid )
    pstdata.ulModule = 0x01000000;
    pstdata.ulMsgId = 0x00001234;
    pstdata.ulPid = 0x8003;
    pstdata.ulLength= sizeof(trans_report_stru);
    pstdata.pData = (void*)(&trans);

    ret = bsp_transreport(&pstdata);

    if (HDS_TRANS_RE_SUCC != ret)
    {
        printk("trans data report test fail!\n");
        return ret;
    }

    return ret;
}

int bsp_trans_report_test1(void)
{
    void *pstdata = NULL;
    int ret;
    ret = bsp_transreport((TRANS_IND_STRU *)pstdata);
    return ret;
}







