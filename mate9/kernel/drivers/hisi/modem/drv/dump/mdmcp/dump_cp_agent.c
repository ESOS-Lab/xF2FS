/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include <linux/delay.h>
#include <linux/errno.h>
#include "osl_types.h"
#include "bsp_sysctrl.h"
#include "bsp_slice.h"
#include "bsp_wdt.h"
#include "bsp_ipc.h"
#include "bsp_fiq.h"
#include "bsp_coresight.h"
#include "bsp_dump.h"
#include "bsp_adump.h"
#include "bsp_ddr.h"
#include "bsp_slice.h"
#include "bsp_om.h"
#include "dump_modem_field.h"
#include "dump_print.h"
#include "dump_cp_agent.h"
#include "dump_cp_wdt.h"
#include "dump_config.h"
#include "dump_modem_baseinfo.h"
#include "dump_modem_rdr.h"
#include "dump_cp_etb.h"
#include "dump_lphy_tcm.h"
#include "dump_cphy_tcm.h"
#include "dump_modem_rdr.h"
#include "dump_exc_ctrl.h"
#include "dump_file.h"

u8*      g_modem_ddr_map_addr = NULL;

/*****************************************************************************
* �� �� ��  : dump_memcpy
* ��������  : �����Ĵ�������
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_memcpy(u32 * dst, const u32 * src, u32 len)
{
    while(len-- > 0)
    {
        *dst++ = *src++;
    }
}
/*****************************************************************************
* �� �� ��  : dump_save_modem_sysctrl
* ��������  : ����modem��ϵͳ���ƼĴ���
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_save_modem_sysctrl(void)
{
    u32 * field_addr = NULL;
    u32 * reg_addr = NULL;
    u32 reg_size = 0;

    field_addr = (u32 *)bsp_dump_get_field_addr(DUMP_CP_SYSCTRL);
    if(field_addr == NULL)
    {
        dump_fetal("SYSCTRL field addr is NULL\n");
        return;
    }

    /* sysctrl mdm */
    reg_addr = (u32 *)bsp_sysctrl_addr_byindex(sysctrl_mdm);
    reg_size = 0x1000;

    /* coverity[dereference] */
    dump_memcpy(field_addr, reg_addr, reg_size >> 2);
    *(field_addr + (reg_size >> 2) - 4) = (u32)OM_SYSCTRL_MAGIC;
    *(field_addr + (reg_size >> 2) - 3) = (uintptr_t)bsp_sysctrl_addr_phy_byindex(sysctrl_mdm);
    *(field_addr + (reg_size >> 2) - 2) = reg_size;
    *(field_addr + (reg_size >> 2) - 1) = 0;
    //field_addr = field_addr + (reg_size >> 2);

    dump_fetal("dump_save_modem_sysctrl finish\n");
}

/*****************************************************************************
* �� �� ��  : dump_memmap_modem_ddr
* ��������  : ӳ��modem ddr���ڴ棬ֻ���ֻ��汾��ʹ�ã�mbbƽ̨����fastboot����
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_map_mdm_ddr(void)
{
    dump_product_type_t type = dump_get_product_type();
    DUMP_FILE_CFG_STRU* cfg = dump_get_file_cfg();

    dump_fetal("mdm_ddr= %d,type=%d\n",cfg->file_list.file_bits.mdm_ddr,type);

    if(cfg->file_list.file_bits.mdm_ddr == 1 && type == DUMP_PHONE )
    {
        g_modem_ddr_map_addr = (u8 *)ioremap_wc((phys_addr_t)(MDDR_FAMA(DDR_MCORE_ADDR)), (size_t)(DDR_MCORE_SIZE));

        if(g_modem_ddr_map_addr == NULL)
        {
            dump_fetal("map g_modem_ddr_map_addr fail\n");
        }
    }
    dump_fetal("dump_memmap_modem_ddr finish\n");
}

/*****************************************************************************
* �� �� ��  : dump_save_mdm_ddr_file
* ��������  : ����modem��ddr
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_save_mdm_ddr_file(char* dir_name)
{
    char file_name[MODEM_DUMP_FILE_NAME_LENGTH] = {0,};
    DUMP_FILE_CFG_STRU* cfg = dump_get_file_cfg();

    if(cfg->file_list.file_bits.mdm_ddr == 1
        && (dump_get_product_type() == DUMP_PHONE)
        && (EDITION_INTERNAL_BETA == dump_get_edition_type()))
    {
        /*coverity[secure_coding]*/
        memset(file_name, 0, sizeof(file_name));
        /*coverity[secure_coding]*/
        snprintf(file_name, sizeof(file_name), "%smodem_ddr.bin", dir_name);

        if(NULL == g_modem_ddr_map_addr)
        {
            dump_fetal("ioremap MODEM DDR fail\n");
        }
        else
        {
            dump_save_file(file_name, g_modem_ddr_map_addr, DDR_MCORE_SIZE);
            dump_fetal("[dump]: save %s finished\n", file_name);
        }
    }
}

/*****************************************************************************
* �� �� ��  : dump_save_mdm_ddr_file
* ��������  : ����modem��ddr
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_save_mdm_dts_file(char* dir_name)
{
    char file_name[MODEM_DUMP_FILE_NAME_LENGTH] = {0,};
    DUMP_FILE_CFG_STRU* cfg = dump_get_file_cfg();
    u8* addr = (u8 *)ioremap_wc((phys_addr_t)(MDDR_FAMA(DDR_MCORE_DTS_ADDR)), (size_t)(DDR_MCORE_DTS_SIZE));

    if(cfg->file_list.file_bits.mdm_dts == 1
        && (dump_get_product_type() == DUMP_PHONE)
        && (EDITION_INTERNAL_BETA == dump_get_edition_type()))
    {
        memset(file_name, 0, sizeof(file_name));
        snprintf(file_name, sizeof(file_name), "%smodem_dts.bin", dir_name);

        if(NULL == addr)
        {
            dump_fetal("ioremap DDR_MCORE_DTS_ADDR fail\n");
        }
        else
        {
            dump_save_file(file_name, addr, DDR_MCORE_DTS_SIZE);
            dump_fetal("[dump]: save %s finished\n", file_name);
        }
    }
}
/*****************************************************************************
* �� �� ��  : dump_cp_wdt_hook
* ��������  : cp ���Ź��ص�����
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_cp_wdt_hook(void)
{
    system_error(DRV_ERRNO_DUMP_CP_WDT, DUMP_REASON_WDT, 0, 0, 0);
}


/*****************************************************************************
* �� �� ��  : dump_get_cp_task_name_by_id
* ��������  : ͨ������id����������
*
* �������  :task_id
* �������  :task_name

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_get_cp_task_name_by_id(u32 task_id, char* task_name)
{
    dump_task_info_s * temp_task_name = NULL;
    u8* task_name_table = NULL;
    u32 task_cnt = 0;
    u32 task_index = 0;


    /*CP�洢������������*/
    task_name_table = bsp_dump_get_field_addr(DUMP_CP_ALLTASK_NAME);
    if(NULL == task_name_table)
    {
        dump_fetal("get cp task name ddr fail\n");
        return;
    }

    task_cnt = *((u32 *)task_name_table + 3)/4;

    /* ƫ��10�ֽڣ�ȥ������ͷ */
    task_name_table += 0x10;
    temp_task_name = (dump_task_info_s *)task_name_table;
    dump_fetal("task_cnt:0x%x\n", task_cnt);

    /*����������*/
    for(task_index = 0;task_index < task_cnt; task_index++)
    {
        if(temp_task_name->task_id == task_id)
        {
            dump_fetal("reboot task:%s\n", temp_task_name->task_name);
            /*coverity[secure_coding]*/
            memcpy(task_name,temp_task_name->task_name,12);
            break;
        }
        temp_task_name++;
    }

}

/*****************************************************************************
* �� �� ��  : dump_save_cp_base_info
* ��������  : ����modem ap�Ļ�����Ϣ
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_save_cp_base_info(u32 mod_id, u32 arg1, u32 arg2, char *data, u32 length)
{
    dump_base_info_t* modem_cp_base_info = NULL;
    dump_base_info_t* kernel_base_info = NULL;

    modem_cp_base_info = (dump_base_info_t*)bsp_dump_get_field_addr(DUMP_CP_BASE_INFO);
    if(modem_cp_base_info == NULL)
    {
        dump_fetal("get cp base info fail\n");
        return;
    }
    modem_cp_base_info->modId = mod_id;
    modem_cp_base_info->arg1 = arg1;
    modem_cp_base_info->arg2 = arg2;
    modem_cp_base_info->arg3 = (u32)(uintptr_t)data;
    modem_cp_base_info->arg3_length = length;
    modem_cp_base_info->exc_time = bsp_get_slice_value();

    if(modem_cp_base_info->reboot_context == DUMP_CTX_TASK)
    {
        modem_cp_base_info->reboot_task = modem_cp_base_info->current_task_id;
        dump_get_cp_task_name_by_id( modem_cp_base_info->current_task_id,(char*)(modem_cp_base_info->taskName));
        modem_cp_base_info->reboot_int = (u32)(-1);
    }
    else
    {
        modem_cp_base_info->reboot_task = (u32)(-1);
        modem_cp_base_info->reboot_int = modem_cp_base_info->current_int;

    }

    if(dump_get_product_type() == DUMP_MBB)
    {
        kernel_base_info = (dump_base_info_t*)bsp_dump_get_field_addr(DUMP_KERNEL_BASE_INFO);
        if(kernel_base_info == NULL)
        {
            dump_fetal("get kernel base info fail\n");
            return;
        }
        kernel_base_info->reboot_int = (u32)(-1);
        kernel_base_info->reboot_task = (u32)(-1);
    }

    dump_fetal("save cp base info finish\n");
    return;
}


/*****************************************************************************
* �� �� ��  : dump_wait_cp_save_done
* ��������  : ����modem cp������
*
* �������  : u32 ms  �ȴ��ĺ�����
              bool wait �Ƿ�ѭ���ȴ�
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
s32 dump_wait_cp_save_done(u32 ms,bool wait)
{
    u32 time_start = 0;

    time_start = bsp_get_elapse_ms();

    do{

        if( BSP_OK == dump_get_cp_save_done())
        {
            dump_fetal("cp save done\n");
            return BSP_OK;
        }

        if(ms <= (bsp_get_elapse_ms()-time_start))
        {
            dump_fetal("dump save max time out\n");
            return BSP_ERROR;
        }

        if(wait)
        {
            msleep(10);
        }

    }while(1);

    return BSP_ERROR;
}

/*****************************************************************************
* �� �� ��  : dump_int_handle
* ��������  : ����modem cp���͹������ж�
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_cp_agent_handle(s32 param)
{
    dump_base_info_t* modem_cp_base_info = NULL;
    u32 rdr_mod_id = 0;
    dump_reboot_reason_t reboot_reason ;

    dump_fetal("[0x%x]================ modem ccore enter system error! ================\n", bsp_get_slice_value());

    if(true == dump_check_has_error())
    {
        return;
    }

    bsp_wdt_irq_disable(WDT_CCORE_ID);
    dump_fetal("stop cp wdt finish\n");

    bsp_coresight_disable();

    modem_cp_base_info = (dump_base_info_t*)bsp_dump_get_field_addr(DUMP_CP_BASE_INFO);

    if(modem_cp_base_info != NULL)
    {
        reboot_reason = modem_cp_base_info->modId != DRV_ERRNO_DUMP_ARM_EXC ? DUMP_REASON_NORMAL : DUMP_REASON_ARM;
    }
    else
    {
        return;
    }

    dump_set_reboot_contex(DUMP_CPU_COMM, reboot_reason);

    dump_fetal("exc core is = 0x%x,exc reason is 0x%x,modid = 0x%x\n",DUMP_CPU_COMM,reboot_reason,modem_cp_base_info->modId);

    if(DUMP_MBB == dump_get_product_type())
    {
        if(modem_cp_base_info != NULL)
        {
            rdr_mod_id = modem_cp_base_info->modId & 0xF0000000;
        }
    }
    else
    {
        rdr_mod_id = RDR_MODEM_CP_MOD_ID;
    }

    dump_save_base_info(BSP_MODU_OTHER_CORE,0,0,0,0);

    if(DUMP_PHONE == dump_get_product_type())
    {
        dump_save_modem_sysctrl();

        dump_save_balong_rdr_info(rdr_mod_id);
    }
    rdr_system_error(rdr_mod_id, 0, 0);

    return;
}



/*****************************************************************************
* �� �� ��  : dump_notify_cp
* ��������  : ֪ͨmodem cp
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_notify_cp(u32 mod_id)
{
    s32 ret ;
    dump_reboot_cpu_t core =  DUMP_CPU_BUTTON;
    dump_reboot_reason_t reason = DUMP_REASON_UNDEF;

    dump_get_reboot_contex((u32*)&core, (u32*)&reason);

    if(core == DUMP_CPU_COMM && (reason != DUMP_REASON_WDT && reason != DUMP_REASON_DLOCK))
    {
        dump_fetal("CP exception ,no need to notify C core 0x%x\n", mod_id);
    }
    else
    {
        ret = bsp_ipc_int_send(IPC_CORE_CCORE, IPC_CCPU_SRC_ACPU_DUMP);
        if(ret == BSP_OK)
        {
            dump_fetal("notify modem ccore success \n");
        }
        else
        {
            dump_fetal("notify modem ccore fail,please let ipc check \n");
        }
    }
}

/*****************************************************************************
* �� �� ��  : dump_cp_wdt_proc
* ��������  : ���Ź��쳣����
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_cp_wdt_proc(void)
{
    dump_save_cp_etb(WDT_CCORE_ID);
    dump_save_cp_base_info(DRV_ERRNO_DUMP_CP_WDT, DUMP_REASON_WDT, 0, NULL, 0);
    dump_set_reboot_contex(DUMP_CPU_COMM,DUMP_REASON_WDT);
    dump_fetal("dump_cp_wdt_proc finish \n");
}
/*****************************************************************************
* �� �� ��  : dump_cp_wdt_proc
* ��������  : ���Ź��쳣����
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_cp_dlock_proc(void)
{
    dump_save_cp_etb(WDT_CCORE_ID);
    dump_save_cp_base_info(DRV_ERRNO_DLOCK, DUMP_REASON_DLOCK, 0, NULL, 0);
    dump_set_reboot_contex(DUMP_CPU_COMM,DUMP_REASON_DLOCK);
    dump_fetal("dump_cp_dlock_proc finish \n");
}

/*****************************************************************************
* �� �� ��  : dump_cp_wdt_proc
* ��������  : ���Ź��쳣����
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
s32 dump_cp_agent_init(void)
{
    int ret ;

    dump_map_mdm_ddr();

    ret = bsp_ipc_int_connect(IPC_ACPU_SRC_CCPU_DUMP, (voidfuncptr)dump_cp_agent_handle, 0);
    if(BSP_OK != ret)
    {
        dump_error("bsp_ipc_int_connect fail\n");
        return BSP_ERROR;
    }

    ret = bsp_ipc_int_enable(IPC_ACPU_SRC_CCPU_DUMP);
    if(BSP_OK != ret)
    {
        dump_error("bsp_ipc_int_enable fail\n");
        return BSP_ERROR;
    }

    ret = dump_cp_coresight_init();
    if(ret == BSP_ERROR)
    {
        dump_fetal("dump_cp_coresight_init fail\n");
    }

    ret = bsp_wdt_register_hook(WDT_CCORE_ID,dump_cp_wdt_hook);

    if(ret == BSP_ERROR)
    {
        dump_fetal("dump_register_hook fail\n");
    }

    return BSP_OK;

}
/*****************************************************************************
* �� �� ��  : dump_cp_save_logs
* ��������  : ����c�˵�log
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_save_cp_logs(char* dir_name)
{
    dump_save_mdm_ddr_file(dir_name);

    dump_save_cp_etb_file(dir_name);

    dump_save_mdm_dts_file(dir_name);

    dump_save_lphy_tcm(dir_name);

    dump_save_cphy_tcm(dir_name);


}
/*****************************************************************************
* �� �� ��  : dump_cp_timeout_proc
* ��������  : IPC�жϳ�ʱ�Ĵ���
*
* �������  :
* �������  :

* �� �� ֵ  :

*
* �޸ļ�¼  : 2016��1��4��17:05:33   lixiaofan  creat
*
*****************************************************************************/
void dump_cp_timeout_proc(void)
{
    s32 ret ;

    ret = bsp_send_cp_fiq(FIQ_DUMP);
    if(ret == BSP_ERROR)
    {
       dump_save_cp_etb(WDT_CCORE_ID);
       dump_fetal("send fiq fail\n");
    }
    else
    {
        dump_fetal("trig fiq process success\n");
    }
    ret = dump_wait_cp_save_done(5000, true);
    if(ret == BSP_ERROR)
    {
        dump_fetal("ipc fiq save log both fail\n");
    }
    else
    {
        dump_fetal("fiq save log success\n");
    }
}

