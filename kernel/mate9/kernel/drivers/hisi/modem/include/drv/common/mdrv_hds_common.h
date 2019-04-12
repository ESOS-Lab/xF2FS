#ifndef __MDRV_HDS_COMMON_H__
#define __MDRV_HDS_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

typedef int (*bsp_hds_func)(unsigned char *pstReq);
typedef int (*hds_cnf_func)(void *hds_cnf, void *data, unsigned int len);
int mdrv_hds_printlog_conn(void);

int mdrv_hds_translog_conn(void);

int mdrv_hds_msg_proc(void *pstReq);

void mdrv_hds_cmd_register(unsigned int cmdid, bsp_hds_func fn);
void mdrv_hds_get_cmdlist(unsigned int *cmdlist, unsigned int *num);
void mdrv_hds_cnf_register(hds_cnf_func fn);

#ifdef __cplusplus
}
#endif
#endif

