#ifndef __OSL_MEM_H
#define __OSL_MEM_H

#if defined(__OS_RTOSCK__)||defined(__OS_RTOSCK_SMP__)
#include <product_config.h>
#include <sre_buildef.h>

/*
*用于标记需要在操作系统启动之前的初始化的模块
*
*PS:一旦被标记就不允许修改代码和变量
*/
#define  __sys_entry_init   __attribute__((section(".text.entry.init")))

#ifdef CONFIG_CCPU_HAS_TCM
/*
*用于标记存放在TCM中的函数和数据
*__tcmdata                用于标记放置在DTCM中的数据
*__tcmfunc                用于标记放置在ITCM中的函数，支持普通函数调用
*__tcmlocalfunc          用于标记放置在ITCM中的函数，不支持普通函数调用
*
*PS:存放在TCM中的函数尽量不要调用未加__tcmlocalfunc标记的函数
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
*用于标记存放在LLRAM中数据
*__llramdata                用于标记放置在LLRAM中的数据
*
*PS:LLRAM中不放置函数，只放置数据
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
