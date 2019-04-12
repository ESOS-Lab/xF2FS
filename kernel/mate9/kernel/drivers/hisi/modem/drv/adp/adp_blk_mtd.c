 
#include <linux/mtd/mtd.h>
#include <linux/err.h>
#include <linux/vmalloc.h>

#include <bsp_nandc.h>
/*lint --e{737,564,746,745,565,808,718,746}*/
#define MIN_BUF_LENGTH 128
int ptable_get_cdromiso_blkname(char *blk_path, int len)
{
    struct mtd_info *mtd;

	if(!blk_path || len < MIN_BUF_LENGTH) {
		printk(KERN_ERR "%s para err, %p %d\n", __func__, blk_path, len);
		return -1;
	}

    mtd = get_mtd_device_nm(PTABLE_CDROMISO_NM);
    if (IS_ERR(mtd)) {
        printk("get mtd name %s error.\n", PTABLE_CDROMISO_NM);
        return -1;
    }

    snprintf(blk_path, MIN_BUF_LENGTH - 1, "/dev/block/mtdblock%d", mtd->index);
    put_mtd_device(mtd);

	return 0;
}
EXPORT_SYMBOL_GPL(ptable_get_cdromiso_blkname);


/**
* ����:nandcģ�鰴��������ʹ��ECC���ܵĶ����ݲ���,ע��˺����Ķ��������ܶ�OOB����
*
* ����:
* @partition_name          		---Ҫ���ķ�����
* @partition_offset      	    ---Ҫ�����������ƫ�Ƶ�ַ
* @ptr_ram_addr      	        ---�����ڴ�ĵ�ַ
* @length      	        		---�������ݳ���
* @skip_len                     ---���˵ĳ���,���ڶ��Ĺ�������������ʱ����Ҫ���Ŀ飬�˽ṹ��¼�����ĳ���
*
*
* ����:���ݷ������ͷ�����ƫ�Ƶ�ַ��ȷ��Flash�ĵ�ַ,�Ѷ��������ݴ����ptr_ram_addr��ȥ
*/
int bsp_blk_read(const char *partition_name, loff_t partition_offset, void* ptr_ram_addr, size_t length, unsigned int *skip_len)
{
	int ret = 0;
	u32 retlen = 0;
	u32 offsetinblock;
	u32 readsize;
	u32 remainder = 0;
	char * dst_addr = ptr_ram_addr;

    /* coverity[assign_zero] */
    struct mtd_info *mtd = NULL;

    if(skip_len)
    {
        *skip_len = 0;
    }

    /* check param */
	if((!partition_name) || (!ptr_ram_addr))
	{
		printk(KERN_ERR"param error.\n");
		goto erro;
	}

	/* get mtd device */
	mtd = get_mtd_device_nm(partition_name);
	if (IS_ERR(mtd))
    {
		printk(KERN_ERR"get_mtd_device_nm error\n");
		ret = PTR_ERR(mtd);
		goto erro;
	}

	while(length > 0)
	{
	    if(partition_offset >= mtd->size)
        {
            printk(KERN_ERR"ERROR: invalid partition offset 0x%lld!\n", partition_offset);
            return EINVAL;
        }

        /* bad block management */
        div_u64_rem(partition_offset, mtd->erasesize, &remainder);  /* ���64λ���������� */
		ret = mtd_block_isbad(mtd, (long long)(partition_offset - remainder));
		if (ret)
		{
			printk(KERN_ERR"bad block detected, skip. partition offset is 0x%lld\n", partition_offset);
			goto skip;
		}

		/* read in block */
		offsetinblock = remainder;
        readsize = (offsetinblock + length < mtd->erasesize) ? length : (mtd->erasesize - offsetinblock);
        ret = mtd_read(mtd, (long long)partition_offset, readsize, &retlen, (unsigned char*)dst_addr);
        if(ret)
        {
            printk(KERN_ERR"mtd read error, ret = 0x%x.\n", ret);
            goto erro;
        }
        partition_offset += readsize;
        length         -= readsize;
        dst_addr       += readsize;
        continue;
skip:
        if(skip_len)
        {
            *skip_len    += mtd->erasesize;
        }
        partition_offset += mtd->erasesize;
	} /* while(length > 0) */

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        put_mtd_device(mtd);
    }

    return 0;

erro:

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }

    return ret;
}
EXPORT_SYMBOL_GPL(bsp_blk_read);
/**
* ����:nandcģ�鰴�������ͷ���ƫ�Ƶ�ַ������flash����
*
* ����:
* @partition_name          		---Ҫ�����ķ�����
* @partition_offset      	    ---Ҫ���������ƫ�Ƶ�ַ
*
*
* ����:���ݷ������ͷ�����ƫ�Ƶ�ַ��ȷ��Flash�ĵ�ַ,��������һ��block,ע���ǲ���һ��block���ݿ�
*/
int bsp_blk_erase(const char *partition_name, loff_t partition_offset)
{
	struct erase_info instr;
	u32 remainder = 0;
	int ret = 0;

    /* coverity[assign_zero] */
    struct mtd_info *mtd = NULL;

	if(!partition_name)
	{
		printk(KERN_ERR"param error.\n");
		goto out;
	}

	mtd = get_mtd_device_nm(partition_name);
	if (IS_ERR(mtd))
    {
		printk(KERN_ERR"get_mtd_device_nm error\n");
		ret = PTR_ERR(mtd);
		goto out;
	}

    div_u64_rem(partition_offset, mtd->erasesize, &remainder);
	instr.mtd = mtd;
	instr.addr = partition_offset - remainder;
	instr.len = mtd->erasesize;
	instr.time = 1000;
	instr.retries = 2;
	instr.callback = NULL;
	instr.priv = 0;

	ret = mtd_erase(mtd, &instr);
	if (0 != ret)
	{
		printk(KERN_ERR"mtd nand_erase error\n");
		goto out;
	}

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        put_mtd_device(mtd);
    }
    return ret;
out:

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }

    return ret;
}
EXPORT_SYMBOL_GPL(bsp_blk_erase);
/**
* ����:nandcģ�鰴�������ͷ������ƫ����ʹ��ECC���ܵ�д���ݲ���,ע��˺�����д������OOB��������д�Ĺ����л����nandflash
*
* ����:
* @partition_name          		---Ҫд���ݵķ�����
* @partition_offset      	    ---Ҫд���ݵķ������ƫ�Ƶ�ַ
* @ptr_ram_addr          		---Ҫд���ݵĵ�ַ
* @length      	    			---Ҫд���ݵĳ���
*
* ����:���ݷ������ͷ�����ƫ�Ƶ�ַ��ȷ��Flash�ĵ�ַ,����дFlash����
*/
s32 bsp_blk_write(const char *partition_name, loff_t partition_offset, void* ptr_ram_addr, u32 length)
{
    /* coverity[assign_zero] */
	long long addrblockalign;
	struct erase_info instr;
    struct mtd_info *mtd = NULL;
	int ret = 0;
	u32 retlen = 0;
	u32 offsetinblock;
	u32 writesize;
	u32 remainder = 0;

	unsigned char *ram_addr = ptr_ram_addr;
	unsigned char *buffer = NULL;
    unsigned char *tmp_buf = NULL;

    /* check param */
	if((!partition_name) || (!ptr_ram_addr))
	{
		printk(KERN_ERR"param error.\n");
		goto erro;
	}

	/* get mtd device */
	mtd = get_mtd_device_nm(partition_name);
	if (IS_ERR(mtd))
    {
		printk(KERN_ERR"get_mtd_device_nm error\n");
		ret = PTR_ERR(mtd);
		goto erro;
	}

	while(length > 0)
	{
	    if(partition_offset >= mtd->size)
        {
            printk(KERN_ERR"ERROR: invalid partition offset 0x%lld!\n", partition_offset);
            return EINVAL;
        }

		/* quary whether bad block */
        div_u64_rem(partition_offset, mtd->erasesize, &remainder);
		ret = mtd_block_isbad(mtd, (long long)(partition_offset - remainder));
		if (ret)
		{
		    /* bad block, skip */
			printk(KERN_ERR"bad block detected, skip. partition offset is 0x%lld\n", partition_offset);
            goto skip;
		}
        /* coverity[overflow_before_widen] */
		addrblockalign = (long long)(div_u64(partition_offset, mtd->erasesize) * mtd->erasesize); /*lint !e647*/

        /* not a whole block, need flash read and ddr copy */
        if((addrblockalign != partition_offset) || (length < mtd->erasesize))
        {
            /* get ram buffer */
            /* coverity[alloc_fn] */
        	/*��A�˵ĺ���û��������128K���ڴ�������,�����vmalloc�������ڴ�*/
        	tmp_buf = (unsigned char *)vmalloc(mtd->erasesize);
        	if(!tmp_buf)
        	{
        		printk(KERN_ERR"get ram buffer failed!\n");
        		goto erro;
        	}

    		/* read block into DDR */
    		ret = mtd_read(mtd, addrblockalign, mtd->erasesize, &retlen, (unsigned char*)tmp_buf);
    		if(ret)
            {
                ret = mtd_block_markbad(mtd, addrblockalign);
                if(ret)
            	{
            		printk(KERN_ERR"mtd mark block bad failed as reading!\n");
            		goto erro;
            	}
                /* bad block, skip */
                goto skip;
            }

            /* copy data to buffer */
    		offsetinblock = remainder;
            writesize     = (offsetinblock + length < mtd->erasesize) ? length : (mtd->erasesize - offsetinblock);
            memcpy(tmp_buf + offsetinblock, ram_addr, writesize);
            buffer = tmp_buf;
        }
        else
        {
            writesize = mtd->erasesize;
            buffer = ram_addr;
        }

		/* erase a block */
		instr.mtd      = mtd;
		instr.addr     = (unsigned long long)addrblockalign;
		instr.len      = mtd->erasesize;
		instr.time     = 1000;
		instr.retries  = 2;
		instr.callback = NULL;
		instr.priv     = 0;

		ret = mtd_erase(mtd, &instr);
		if(ret)
        {
            /* erase fail, mark bad */
            ret = mtd_block_markbad(mtd, (long long)instr.addr);
            if(ret)
        	{
        		printk(KERN_ERR"mtd mark block bad failed as erasing!\n");
        		goto erro;
        	}
            /* bad block, skip */
            goto skip;
        }

        /* write data to flash */
        /* coverity[noescape] */
        ret = mtd_write(mtd, addrblockalign, mtd->erasesize, &retlen, (unsigned char*)buffer);
        if(ret)
        {
            /* write failed, mark bad */
            ret = mtd_block_markbad(mtd, addrblockalign);
            if(ret)
        	{
        		printk(KERN_ERR"mtd mark block bad failed as writing!\n");
        		goto erro;
        	}
            goto skip;
        }

        partition_offset += writesize;
        length         -= writesize;
        ram_addr       += writesize;
        continue;
skip:
        partition_offset += mtd->erasesize;
    } /* while(length > 0) */

    if(tmp_buf)
    {
        vfree(tmp_buf);
    }

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }

    return 0;

erro:
    if(tmp_buf)
    {
        vfree(tmp_buf);
    }

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }

	return ret;
}
EXPORT_SYMBOL_GPL(bsp_blk_write);
/*�ṩ��NVģ��,��������nv dload����*/
/**
* ����:nandcģ��дdload�������ƫ����ʹ��ECC���ܵ�д���ݲ���
*
* ����:
* @partition_name          		---Ҫд���ݵķ�����
* @partition_offset      	    ---Ҫд���ݵķ������ƫ�Ƶ�ַ
* @ptr_ram_addr          		---Ҫд���ݵĵ�ַ
* @length      	    			---Ҫд���ݵĳ���
*
* ����:���ݷ������ͷ�����ƫ�Ƶ�ַ��ȷ��Flash�ĵ�ַ,����дFlash����
*/
s32 bsp_blk_write_dload(const char *partition_name, u32 partition_offset, void* ptr_ram_addr, u32 length)
{
    struct erase_info instr;
    struct mtd_info *mtd =(struct mtd_info * )-1; /*ע�������ֵ����Ϊ-1*/
    int ret = 0;
    unsigned int ret_len = 0;
    /*��nv dload����������ȫ����,Ȼ���ڸ���length*/
    unsigned int partition_offset_use = partition_offset;
    unsigned int length_use = length;

    unsigned char *ram_addr = ptr_ram_addr;
    unsigned char *buffer = NULL;
    unsigned char *tmp_buf = NULL;

    /* check param */
    if((!partition_name) || (!ptr_ram_addr))
    {
        printk(KERN_ERR "%s:param error.\n", __func__);
        goto erro;
    }

    /* get mtd device */
    mtd = get_mtd_device_nm(partition_name);
    if (IS_ERR(mtd))
    {
        printk(KERN_ERR"get_mtd_device_nm error\n");
        ret = PTR_ERR(mtd);
        goto erro;
    }

    /*���д��ʼ��ַ�Ƿ���blk�����*/
    ret_len = partition_offset % mtd->erasesize;
    if( 0 != ret_len )
    {
        printk(KERN_ERR "%s:partition_offset is 0x%08x.\n", __func__, partition_offset);
        goto erro;
    }

    /*erase first:������������*/
    while( partition_offset_use < ( mtd->size - 1 ) )
    {
        /* quary whether bad block */
        ret = mtd_block_isbad( mtd, (long long)(partition_offset_use) );
        if (ret)
        {
            /* bad block, skip */
            printk( KERN_ERR "%s: bad block skip. partition_offset_use is: 0x%x\n",
                __func__, partition_offset_use );
            goto erase_skip;
        }

        /* erase a block */
        instr.mtd      = mtd;
        instr.addr     = (unsigned long long)partition_offset_use;
        instr.len      = mtd->erasesize;
        instr.time     = 1000; /*ʱ��*/
        instr.retries  = 2;    /*���Դ���*/
        instr.callback = NULL;
        instr.priv     = 0;

        ret = mtd_erase(mtd, &instr);
        if(ret)
        {
            /* erase fail*/
            printk( KERN_ERR "%s: mtd erase fail, offset: 0x%x\n",
                __func__, partition_offset_use );

            /* erase fail, mark bad */
            ret = mtd_block_markbad(mtd, (long long)instr.addr);
            if(ret)
            {
                printk(KERN_ERR"mtd mark block bad failed as erasing!\n");
                goto erro;
            }
        }
erase_skip:
    partition_offset_use += mtd->erasesize;
    }

    partition_offset_use = partition_offset;

    /*then write*/
    while( length_use > 0 )
    {
        if( partition_offset_use >= mtd->size )
        {
            printk(KERN_ERR"ERROR: invalid partition offset 0x%x!\n",
                partition_offset_use);
            goto erro;
        }

        /* quary whether bad block */
        ret = mtd_block_isbad( mtd, ( long long )( partition_offset_use ) );
        if (ret)
        {
            /* bad block, skip */
            printk( KERN_ERR "bad block detected, skip. partition offset is 0x%x\n",
            partition_offset_use );
            goto write_skip;
        }

        if( length_use < mtd->erasesize )
        {
            /* get ram buffer, ����ʼ��Ϊȫ0 */
            if ( NULL == tmp_buf )
            {
                tmp_buf = (unsigned char *)vmalloc(mtd->erasesize);
            }

            if( NULL == tmp_buf )
            {
                printk( KERN_ERR "%s: malloc tem_buf failed!\n", __func__ );
                goto erro;
            }

            memset( (void *)tmp_buf, 0, mtd->erasesize );

            /* copy data to buffer */
            memcpy( (void *)tmp_buf, ( const void * )ram_addr, length_use);
            buffer = tmp_buf;
        }
        else
        {
            buffer = ram_addr;
        }

        /* write data to flash */
        /* coverity[noescape] */
        ret = mtd_write(mtd, (long long)partition_offset_use, mtd->erasesize, &ret_len, (unsigned char*)buffer);
        if(ret)
        {
            /*write fail*/
            printk( KERN_ERR "%s: mtd write fail, offset: 0x%x\n",
                __func__, partition_offset_use );

            /* write failed, mark bad */
            ret = mtd_block_markbad( mtd, (long long)partition_offset_use );
            if(ret)
            {
                /*д�Ĺ����г����쳣,���ұ껵��ʧ��*/
                printk( KERN_ERR "bad! mtd mark block bad failed as writing!\n");
                goto erro;
            }
            else
            {
                /*дʧ��,���Ǳ껵��ɹ�*/
                goto write_skip;
            }
        }

        if ( length_use < mtd->erasesize )
        {
            length_use = 0;
        }
        else
        {
            length_use -= mtd->erasesize;
        }
        ram_addr += mtd->erasesize;
        /*continue;*/

write_skip:
        /*��������*/
        partition_offset_use += mtd->erasesize;
        continue;
    } /* while(length > 0) */

erro:
    if(tmp_buf)
    {
        vfree(tmp_buf);
    }

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }

    return ret;
}
EXPORT_SYMBOL_GPL(bsp_blk_write_dload);

/**
* ����:nandcģ�鰴�������ͷ������ƫ����ȷ���˿��ǲ��ǻ���
*
* ����:
* @partition_name          		---��ѯ���ݿ�ķ�����
* @partition_offset      	    ---��ѯ���ݿ�ķ������ƫ�Ƶ�ַ
*
* ����:���ݷ������ͷ�����ƫ�Ƶ�ַ��ȷ��Flash�ĵ�ַ,�����жϴ�block�ǲ��ǻ���
����ֵ:
* 0��ʾ�˿��Ǻÿ�
* 1��ʾ�ǻ���
* �����ı�ʾ�д���
*/
int bsp_blk_isbad(const char *partition_name, loff_t partition_offset)
{
	int ret = -1;
	struct mtd_info *mtd = get_mtd_device_nm(partition_name);
	if (IS_ERR(mtd))
    {
		printk(KERN_ERR"get_mtd_device_nm error\n");
		ret = PTR_ERR(mtd);
		goto erro;
	}

	ret = mtd_block_isbad(mtd, (long long)partition_offset);

    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        put_mtd_device(mtd);
    }

    return ret;

erro:
    /*lint -save -e438 */
    /* release mtd device */
    if (!IS_ERR(mtd))
    {
        /* coverity[var_deref_model] */
        put_mtd_device(mtd);
    }
    return ret;
    /*lint -restore*/
}
EXPORT_SYMBOL_GPL(bsp_blk_isbad);

/*****************************************************************************
* ����  : bsp_blk_size
* ����  : ��ȡһ�������Ĵ�С
* ����  : part_name ��������
* ���  : size  �����Ĵ�Сֵ�����size
* ����  : С��0ʧ�ܣ����ڵ���0�ɹ�
*****************************************************************************/
int bsp_blk_size(const char *part_name, u32 *size)
{

    /* coverity[assign_zero] */
    struct mtd_info *mtd = NULL;

    /* check param */
    if((!part_name) || (!size))
    {
        printk(KERN_ERR"param error.\n");
        return -1;
    }

    /* get mtd device */
    mtd = get_mtd_device_nm(part_name);
    if (IS_ERR(mtd))
    {
        printk(KERN_ERR"get_mtd_device_nm error for partition %s\n", part_name);
        return -1;
    }
    *size =(u32)mtd->size;
    put_mtd_device(mtd);
    return 0;
}

EXPORT_SYMBOL_GPL(bsp_blk_size);

