#ifndef __OSL_MEM_H
#define __OSL_MEM_H

#if defined(__OS_RTOSCK__)||defined(__OS_RTOSCK_SMP__)
#include <product_config.h>
#include <sre_buildef.h>

/*
*���ڱ����Ҫ�ڲ���ϵͳ����֮ǰ�ĳ�ʼ����ģ��
*
*PS:һ������ǾͲ������޸Ĵ���ͱ���
*/
#define  __sys_entry_init   __attribute__((section(".text.entry.init")))

#ifdef CONFIG_CCPU_HAS_TCM
/*
*���ڱ�Ǵ����TCM�еĺ���������
*__tcmdata                ���ڱ�Ƿ�����DTCM�е�����
*__tcmfunc                ���ڱ�Ƿ�����ITCM�еĺ�����֧����ͨ��������
*__tcmlocalfunc          ���ڱ�Ƿ�����ITCM�еĺ�������֧����ͨ��������
*
*PS:�����TCM�еĺ���������Ҫ����δ��__tcmlocalfunc��ǵĺ���
*/
#define __tcmdata           __attribute__((section(".tcm.data")))

#define __tcmfunc          __attribute__((long_call)) __attribute__((section(".tcm.text"))) 

#define __tcmlocalfunc  __attribute__((section(".tcm.text")))

#else
#define __tcmdata
#define __tcmfunc
#define __tcmlocalfunc
#endif

#ifdef CONFIG_CCPU_HAS_LLRAM
/*
*���ڱ�Ǵ����LLRAM������
*__llramdata                ���ڱ�Ƿ�����LLRAM�е�����
*
*PS:LLRAM�в����ú�����ֻ��������
*/

#define __llramdata         __attribute__((section(".llram.data"))) 
#else
#define __llramdata
#endif
#else
#define __sys_entry_init
#define __tcmdata  
#define __tcmfunc       
#define __tcmlocalfunc
#define __llramdata    
#endif
#endif
