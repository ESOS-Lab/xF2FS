#include <linux/string.h>
#include <linux/delay.h>
#include <of.h>
#include <n_bsp_ipf.h>
#include <ipf_balong.h>
//#include <bsp_slice.h>
//#include <bsp_ipc.h>
#include <bsp_module.h>
#include <osl_malloc.h>
#include <osl_spinlock.h>

#define FILTER_RIP  10
extern struct ipf_ctx g_ipf_ctx;
/*
static void ipf_write_basic_filter(unsigned int id, IPF_MATCH_INFO_S* match_infos);
static void ipf_read_basic_filter(unsigned int id, IPF_MATCH_INFO_S* filter);
static void ipf_set_next_basic_filter(unsigned int id, unsigned int next);
*/
static void ipf_write_basic_filter_ex(unsigned int id, IPF_MATCH_INFO_S* match_infos);
static void ipf_read_basic_filter_ex(unsigned int id, IPF_MATCH_INFO_S* filter);
static void ipf_set_next_basic_filter_ex(unsigned int id, unsigned int next);

struct ipf_filter_handler handler[] = {
/*
    {
        .bf_num = IPF_BF_NUM,
        .total = IPF_TOTAL_FILTER_NUM,
        .tail = IPF_TAIL_INDEX,
        .basic_write = ipf_write_basic_filter,
        .basic_read = ipf_read_basic_filter,
        .launched = {0},
        .free = 0,
        .basic_set_next = ipf_set_next_basic_filter,
    },
    */
    {
        .bf_num = IPF_BF_NUM_EX,
        .total = IPF_TOTAL_FILTER_NUM_EX,
        .tail = IPF_TAIL_INDEX_EX,
        .basic_write = ipf_write_basic_filter_ex,
        .basic_read = ipf_read_basic_filter_ex,
        .launched = {0},
        .free = 0,
        .basic_set_next = ipf_set_next_basic_filter_ex,
    },
};

struct ipf_filter_handler* ipf_get_filter_handler(unsigned int version)
{
    if(version>IPF_VERSION_140a)
        return (struct ipf_filter_handler*)&handler[0];
    else
        return (struct ipf_filter_handler*)&handler[0];
}
/*
static void ipf_write_basic_filter(unsigned int id, IPF_MATCH_INFO_S* filter)
{
    unsigned int i;
    unsigned int* reg = (unsigned int*)filter;

    ipf_writel(id, g_ipf_ctx.regs + HI_BFLT_INDEX_OFFSET);
    for(i=0; i<(sizeof(IPF_MATCH_INFO_S)/sizeof(unsigned int)); i++)
    {
        ipf_writel(reg[i], (g_ipf_ctx.regs+HI_FLT_LOCAL_ADDR0_OFFSET+i*4)); 
    }
}

static void ipf_read_basic_filter(unsigned int id, IPF_MATCH_INFO_S* filter)
{
    int i;
    unsigned int* reg = (unsigned int*)filter;
  
    ipf_writel(id, g_ipf_ctx.regs + HI_BFLT_INDEX_OFFSET);
    for(i=0; i<(sizeof(IPF_MATCH_INFO_S)/sizeof(unsigned int)); i++)
    {
        reg[i] = ipf_readl((g_ipf_ctx.regs+HI_FLT_LOCAL_ADDR0_OFFSET+i*4)); 
    }
}
*/
static void ipf_write_basic_filter_ex(unsigned int id, IPF_MATCH_INFO_S* filter)
{
    unsigned int i;
    unsigned int* reg = (unsigned int*)filter;

    for(i=0; i<(sizeof(IPF_MATCH_INFO_S)/sizeof(unsigned int)); i++)
    {
        ipf_writel(reg[i], (g_ipf_ctx.regs+HI_IPF_FLTN_LOCAL_ADDR0_OFFSET(id)+i*4)); 
    }
}

static void ipf_read_basic_filter_ex(unsigned int id, IPF_MATCH_INFO_S* filter)
{
    int i;
    unsigned int* reg = (unsigned int*)filter;
  
    for(i=0; i<(sizeof(IPF_MATCH_INFO_S)/sizeof(unsigned int)); i++)
    {
        reg[i] = ipf_readl((g_ipf_ctx.regs+HI_IPF_FLTN_LOCAL_ADDR0_OFFSET(id)+i*4)); 
    }
}
/*
static void ipf_set_next_basic_filter(unsigned int id, unsigned int next)
{
    unsigned int reg;
    
    ipf_writel(id, g_ipf_ctx.regs + HI_BFLT_INDEX_OFFSET);
    reg = ipf_readl(g_ipf_ctx.regs  + HI_FLT_CHAIN_OFFSET);
    reg = next + (reg&0xffff0000);
    ipf_writel(reg, g_ipf_ctx.regs  + HI_FLT_CHAIN_OFFSET);
}
*/
static void ipf_set_next_basic_filter_ex(unsigned int id, unsigned int next)
{
    HI_IPF_FLTN_CHAIN_0_T fltn_chain;
    
    fltn_chain.u32 = ipf_readl(g_ipf_ctx.regs  + HI_IPF_FLTN_CHAIN_OFFSET(id));
    fltn_chain.bits.fltn_next_index = next;
    ipf_writel(fltn_chain.u32, g_ipf_ctx.regs  + HI_IPF_FLTN_CHAIN_OFFSET(id));
}

static void ipf_set_next_filter(unsigned int id, unsigned int next)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
    
    if(id< fh->bf_num){
        fh->basic_set_next(id, next);
    }

    sm->filter[id].unFltChain.Bits.u16NextIndex = next;

    cache_sync();
}

static void ipf_write_filter(unsigned int id, IPF_MATCH_INFO_S* match_infos)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
    
    if(id< fh->bf_num){
        fh->basic_write(id, match_infos);
    }

    memcpy(&sm->filter[id], match_infos, sizeof(IPF_MATCH_INFO_S));

    cache_sync();
}

static void ipf_read_filter(unsigned int id, IPF_MATCH_INFO_S * filter)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();
    
    if(id< fh->bf_num){
        fh->basic_read(id, filter);
    }else{
        memcpy(filter, &sm->filter[id], sizeof(IPF_MATCH_INFO_S));
    }

    cache_sync();
}


__init int ipf_filterlist_init(void)
{
    int i;
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    
    fh->free = osl_malloc(fh->total*sizeof(filter_map));
    if(NULL == fh->free){
        bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF, "\r IPF_FilterList_Init malloc ERROR! \n");
        return -ENOMEM;
    }

    for(i=0;i<fh->total-1;i++)
    {
        fh->free[i].index = i;
        fh->free[i].ps_id = 0;
        fh->free[i].next = &fh->free[i+1];
    }
    fh->free[fh->total-1].index = fh->total-1;
    fh->free[fh->total-1].ps_id = 0;
    fh->free[fh->total-1].next = NULL;

    for(i=0;i<IPF_FILTER_CHAIN_MAX_NUM;i++)
    {
        fh->launched[i] = &fh->free[i];
        fh->launched[i]->next = NULL;
    }
    fh->free = &fh->free[IPF_FILTER_CHAIN_MAX_NUM];

    return 0;    
}

__init int ipf_filter_init(void)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    struct ipf_share_mem_map* sm = bsp_ipf_get_sharemem();

    memset(sm->filter, 0, sizeof(IPF_MATCH_INFO_S)*fh->total);

    return ipf_filterlist_init();
}

static void ipf_filter_freelist_enqueue(filter_map* map)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    filter_map* node = fh->free;
    filter_map* pre_node = 0;

    if(!fh->free){
        fh->free = map;
        map->next = 0;
    }

    while(node->index < map->index)
    {
        pre_node = node;
        node = node->next;
        if(!node) break;
    }
    
    if(!pre_node){
        map->next = fh->free;
        fh->free = map;
    }
    else{
        map->next = node;
        pre_node->next = map;
    }
}

void ipf_filter_tail_add(filter_map* head, filter_map* map)
{
    filter_map* node = head;

    while(node->next)
    {
        node = node->next;
    }

    node->next = map;
    map->next = NULL;
}

filter_map* ipf_filter_freelist_dequeue(void)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    filter_map* node = fh->free;

    fh->free = fh->free->next;
    node->next = NULL;
    
    return node;
}

void ipf_filter_list_clear(IPF_FILTER_CHAIN_TYPE_E type)
{
    IPF_MATCH_INFO_S filter;
    filter_map* next;
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    filter_map* node = fh->launched[type]->next;
    
    ipf_read_filter(type, &filter);
    filter.unFltChain.Bits.u16NextIndex = fh->tail;
    filter.unFltRuleCtrl.u32FltRuleCtrl = IPF_DISABLE_FILTER;
    ipf_write_filter(type, &filter);
    
    fh->launched[type]->next = NULL;
    while(node)
    {
        next = node->next;
        ipf_filter_freelist_enqueue(node);
        node = next;
    }

    udelay(FILTER_RIP);
}

int mdrv_ipf_set_filter(IPF_FILTER_CHAIN_TYPE_E type, 
	IPF_FILTER_CONFIG_S *pstFilterInfo, unsigned int u32FilterNum)
{
	int i = 0;
	filter_map* map= NULL;
	unsigned long flags;
	struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;

	if((type >= IPF_FILTER_CHAIN_MAX_NUM) || (NULL == pstFilterInfo))
	{
 		g_ipf_ctx.status->invalid_para++;
		bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r mdrv_ipf_set_filter invalid para\n");
		return BSP_ERR_IPF_INVALID_PARA;
	}

	spin_lock_irqsave(&g_ipf_ctx.filter_spinlock, flags);
	bsp_ipc_spin_lock(IPC_SEM_IPF_PWCTRL);

	ipf_filter_list_clear(type);

	for(i = 0; i < u32FilterNum; i++)
	{
        map = ipf_filter_freelist_dequeue();
        if(!map){
            spin_unlock_irqrestore(&g_ipf_ctx.filter_spinlock, flags);
            bsp_ipc_spin_unlock(IPC_SEM_IPF_PWCTRL);
            return BSP_ERR_IPF_FILTER_NOT_ENOUGH;
        }
        map->ps_id = pstFilterInfo[i].u32FilterID &0xffff;
        ipf_filter_tail_add(fh->launched[type], map);
	}

    i=0;
    map = fh->launched[type]->next;
	while(map)
	{
	    ipf_write_filter(map->index, &pstFilterInfo[i].stMatchInfo);
	    
	    if(map->next){
	        ipf_set_next_filter(map->index, map->next->index);
	        printk("map_index:%d\n",map->index);
	    }else{
	        ipf_set_next_filter(map->index, fh->tail);
	        printk("map_index:%d end\n",map->index);
	    }
	    map = map->next;
	    i++;
	}

    if(fh->launched[type]->next)
	    ipf_set_next_filter(type, fh->launched[type]->next->index);
	else
	    ipf_set_next_filter(type, fh->tail);

	bsp_ipc_spin_unlock(IPC_SEM_IPF_PWCTRL);
	spin_unlock_irqrestore(&g_ipf_ctx.filter_spinlock, flags);

	return IPF_SUCCESS;
}

int mdrv_ipf_get_filter(IPF_FILTER_CHAIN_TYPE_E type, unsigned int ps_id, IPF_FILTER_CONFIG_S *pstFilterInfo)
{
    struct ipf_filter_handler* fh = g_ipf_ctx.filter_handler;
    filter_map* map= fh->launched[type];

    if(NULL == pstFilterInfo)
    {
 		g_ipf_ctx.status->invalid_para++;
		bsp_trace(BSP_LOG_LEVEL_ERROR, BSP_MODU_IPF,"\r mdrv_ipf_get_filter invalid para\n");
		return BSP_ERR_IPF_INVALID_PARA;
	}

    while(map)
    {
        if(ps_id == map->ps_id)
            break;
        map= map->next;
    }
    
    if(!map)
        return IPF_ERROR;
        
    ipf_read_filter(map->index, &pstFilterInfo->stMatchInfo);
    pstFilterInfo->u32FilterID = ps_id;
    return IPF_SUCCESS;
}

