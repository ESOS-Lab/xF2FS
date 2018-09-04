#!/bin/bash

umount /exhdd

rmmod f2fs
rmmod fscrypto

insmod /home/cheon/MUFIT/kernel/linux-4.8/fs/crypto/fscrypto.ko
insmod /home/cheon/MUFIT/src/modified/fs/f2fs/f2fs.ko

/sbin/mkfs.f2fs $1

mount -t f2fs -o mode=lfs $1 /exhdd
mkdir /exhdd/cheon
chown cheon:cheon /exhdd/cheon
