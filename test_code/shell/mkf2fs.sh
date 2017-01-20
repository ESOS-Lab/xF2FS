#!/bin/bash

umount /exhdd
~/f2fs-tools/mkfs/mkfs.f2fs $1
mount -t f2fs -o mode=lfs $1 /exhdd
mkdir /exhdd/cheon
chown cheon:cheon /exhdd/cheon
