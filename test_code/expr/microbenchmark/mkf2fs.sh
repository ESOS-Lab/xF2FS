umount $1 > /dev/null
umount $2 > /dev/null

mkfs.f2fs -f $1 > /dev/null

mount -t f2fs -o mode=lfs $1 $2 > /dev/null
#mount -t f2fs $1 $2
