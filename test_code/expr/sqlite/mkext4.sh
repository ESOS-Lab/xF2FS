#!/bin/bash

umount /home/jata/f2fs_mnt
mkfs -t ext4 -F $1
mount -t ext4 $1 /home/jata/f2fs_mnt
