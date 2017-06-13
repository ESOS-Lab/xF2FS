#!/bin/bash

umount /exhdd
mkfs.ext4 -F $1
mount -t ext4 $1 /exhdd
mkdir /exhdd/cheon
chown cheon:cheon /exhdd/cheon
