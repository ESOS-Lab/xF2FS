umount $1
umount $2
mkfs.f2fs -f $1
mount -t f2fs -o mode=lfs $1 $2
