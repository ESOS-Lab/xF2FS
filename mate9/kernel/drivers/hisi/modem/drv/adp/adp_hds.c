

#include "bsp_diag_frame.h"
#include "bsp_hds_log.h"
#include "bsp_hds_ind.h"
#include "bsp_hds_service.h"
#include "bsp_slice.h"


void mdrv_hds_cmd_register(u32 cmdid, bsp_hds_func fn)
{
    bsp_hds_cmd_register(cmdid, fn);
}

void mdrv_hds_get_cmdlist(u32 *cmdlist, u32 *num)
{
    bsp_hds_get_cmdlist(cmdlist, num);
}

void mdrv_hds_cnf_register(hds_cnf_func fn)
{
    bsp_hds_cnf_register(fn);
}


int mdrv_hds_msg_proc(void *pstReq)
{
    return bsp_hds_msg_proc((diag_frame_head_stru *)pstReq);
}


/*************************************************************************
 �� �� ��	: mdrv_hds_translog_conn
 ��������	: �빤������״̬����
 �������	: ��
 �� �� ֵ	: �ɹ�����ʶ��
 �޸���ʷ	:
 ��    ��	: 2016��8��10��
 ��    ��	: l00354607
 �޸�����	:
*************************************************************************/
int mdrv_hds_translog_conn(void)
{
    return bsp_hds_translog_conn();
}


/*************************************************************************
 �� �� ��	: mdrv_hds_printlog_conn
 ��������	: �빤������״̬����
 �������	: ��
 �� �� ֵ	: �ɹ�����ʶ��
 �޸���ʷ	:
 ��    ��	: 2016��8��10��
 ��    ��	: l00354607
 �޸�����	:
*************************************************************************/
int mdrv_hds_printlog_conn(void)
{
    return bsp_hds_printlog_conn();
}






