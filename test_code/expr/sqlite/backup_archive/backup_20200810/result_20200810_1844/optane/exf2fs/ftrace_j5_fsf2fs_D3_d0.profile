 0)               |  do_syscall_64() {
 0)               |    __x64_sys_ioctl() {
 0)               |      ksys_ioctl() {
 0)               |        __fdget() {
 0)               |          __fget_light() {
 0)   0.035 us    |            __fget();
 0)   0.216 us    |          }
 0)   0.392 us    |        }
 0)   0.022 us    |        security_file_ioctl();
 0)               |        do_vfs_ioctl() {
 0)               |          f2fs_ioctl [f2fs]() {
========================================================================================
 0)               |            f2fs_ioc_commit_atomic_file_set.isra.45 [f2fs]() {
 0)               |              down_write() {
 0)   0.441 us    |              }
 0)   0.019 us    |              blk_start_plug();
 0)   0.038 us    |              f2fs_balance_fs [f2fs]();
 0)               |              down_read() {
 0)   0.389 us    |              }
========================================================================================
 0)               |              down_write() {
 0)   0.384 us    |              }
 0)               |              down_write() {
 0)   0.387 us    |              }
 0)               |              down_write() {
 0)   0.383 us    |              }
 0)               |              down_write() {
 0)   0.380 us    |              }
 0)               |              down_write() {
 0)   0.384 us    |              }
 0)               |              down_write() {
 0)   0.390 us    |              }
========================================================================================
 0)               |              _cond_resched() {
 0)   0.198 us    |              }
 0)               |              set_page_dirty() {
 0)   3.603 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.972 us    |              }
 0)   0.029 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 22.917 us   |              }
 0)   0.023 us    |              unlock_page();
 0)               |              _cond_resched() {
 0)   0.200 us    |              }
 0)               |              set_page_dirty() {
 0)   3.425 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.971 us    |              }
 0)   0.025 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 14.533 us   |              }
 0)   0.022 us    |              unlock_page();
 0)               |              _cond_resched() {
 0)   0.205 us    |              }
 0)               |              set_page_dirty() {
 0)   3.464 us    |              }
 0)   0.021 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.963 us    |              }
 0)   0.022 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 18.684 us   |              }
 0)   0.023 us    |              unlock_page();
 0)               |              _cond_resched() {
 0)   0.199 us    |              }
 0)               |              set_page_dirty() {
 0)   3.369 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.964 us    |              }
 0)   0.023 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 14.482 us   |              }
 0)   0.020 us    |              unlock_page();
 0)               |              _cond_resched() {
 0)   0.198 us    |              }
 0)               |              set_page_dirty() {
 0)   3.410 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.959 us    |              }
 0)   0.025 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 18.632 us   |              }
 0)   0.020 us    |              unlock_page();
 0)               |              _cond_resched() {
 0)   0.198 us    |              }
 0)               |              set_page_dirty() {
 0)   3.482 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.952 us    |              }
 0)   0.027 us    |              f2fs_remove_dirty_inode [f2fs]();
 0)               |              f2fs_do_write_data_page [f2fs]() {
 0) + 14.373 us   |              }
 0)   0.020 us    |              unlock_page();
========================================================================================
 0)   0.021 us    |              _raw_spin_lock();
 0)               |              mutex_unlock() {
 0)   0.237 us    |              }
 0)   0.025 us    |              up_write();
 0)   0.022 us    |              up_write();
 0)   0.021 us    |              _raw_spin_lock();
 0)               |              mutex_unlock() {
 0)   0.203 us    |              }
 0)   0.025 us    |              up_write();
 0)   0.026 us    |              up_write();
 0)   0.022 us    |              _raw_spin_lock();
 0)               |              mutex_unlock() {
 0)   0.201 us    |              }
 0)   0.021 us    |              up_write();
 0)   0.026 us    |              up_write();
========================================================================================
 0)   0.024 us    |              up_read();
 0)               |              _cond_resched() {
 0)   0.209 us    |              }
 0)   0.019 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.987 us    |              }
 0)               |              ____write_node_page [f2fs]() {
 0) + 19.326 us   |              }
 0)               |              f2fs_get_node_page [f2fs]() {
 0)   1.345 us    |              }
 0)               |              f2fs_get_node_info [f2fs]() {
 0)   0.755 us    |              }
 0)   0.020 us    |              unlock_page();
 0)   0.025 us    |              kmem_cache_free();
 0)               |              _cond_resched() {
 0)   0.199 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.961 us    |              }
 0)               |              ____write_node_page [f2fs]() {
 0) + 14.912 us   |              }
 0)               |              f2fs_get_node_page [f2fs]() {
 0)   1.302 us    |              }
 0)               |              f2fs_get_node_info [f2fs]() {
 0)   0.758 us    |              }
 0)   0.019 us    |              unlock_page();
 0)   0.024 us    |              kmem_cache_free();
 0)               |              _cond_resched() {
 0)   0.199 us    |              }
 0)   0.021 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.952 us    |              }
 0)               |              ____write_node_page [f2fs]() {
 0) + 14.863 us   |              }
 0)               |              f2fs_get_node_page [f2fs]() {
 0)   1.325 us    |              }
 0)               |              f2fs_get_node_info [f2fs]() {
 0)   0.764 us    |              }
 0)   0.020 us    |              unlock_page();
 0)   0.024 us    |              kmem_cache_free();
 0)               |              blk_finish_plug() {
 0)   0.219 us    |              }
 0)               |              ____revoke_inmem_pages [f2fs]() {
 ------------------------------------------
 0) mobiben-21997  =>    <idle>-0   
 ------------------------------------------

 0)               |  switch_mm_irqs_off() {
 0)   0.094 us    |    load_new_mm_cr3();
 0)   0.321 us    |  }
 ------------------------------------------
 0)    <idle>-0    => mobiben-21997 
 ------------------------------------------

 0) + 40.559 us   |              }
 0)               |              f2fs_wait_on_node_pages_writeback [f2fs]() {
 ------------------------------------------
 0) mobiben-21997  =>    <idle>-0   
 ------------------------------------------

 0)               |  switch_mm_irqs_off() {
 0)   0.082 us    |    load_new_mm_cr3();
 0)   0.304 us    |  }
 ------------------------------------------
 0)    <idle>-0    => mobiben-21997 
 ------------------------------------------

 0) + 33.652 us   |              }
 0)               |              ____revoke_inmem_pages [f2fs]() {
 0)   2.088 us    |              }
 0)               |              f2fs_wait_on_node_pages_writeback [f2fs]() {
 0)   0.579 us    |              }
 0)               |              ____revoke_inmem_pages [f2fs]() {
 0)   2.082 us    |              }
 0)               |              f2fs_wait_on_node_pages_writeback [f2fs]() {
 0)   0.564 us    |              }
 0)               |              f2fs_get_node_page [f2fs]() {
 0)   1.431 us    |              }
 0)               |              set_page_dirty() {
 0)   3.062 us    |              }
 0)   0.020 us    |              f2fs_wait_on_page_writeback [f2fs]();
 0)               |              clear_page_dirty_for_io() {
 0)   0.965 us    |              }
 0)               |              ____write_node_page [f2fs]() {
 0) + 19.310 us   |              }
 0)               |              f2fs_wait_on_page_writeback [f2fs]() {
 ------------------------------------------
 0) mobiben-21997  =>    <idle>-0   
 ------------------------------------------

 0)               |  switch_mm_irqs_off() {
 0)   0.083 us    |    load_new_mm_cr3();
 0)   0.308 us    |  }
 ------------------------------------------
 0)    <idle>-0    => mobiben-21997 
 ------------------------------------------

 0) + 26.255 us   |              }
 0)   0.023 us    |              up_write();
 0) ! 343.084 us  |            }
 0) ! 343.331 us  |          }
 0) ! 343.551 us  |        }
 0)   0.029 us    |        fput();
 0) ! 344.690 us  |      }
 0) ! 344.879 us  |    } /* __x64_sys_ioctl */
 0) ! 345.097 us  |  } /* do_syscall_64 */
