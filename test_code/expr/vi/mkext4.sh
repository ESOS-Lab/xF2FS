umount $1 > /dev/null
umount $2 > /dev/null

mkfs.ext4 -F -E lazy_journal_init=0,lazy_itable_init=0 $1 > /dev/null

mount -t ext4 $1 $2 > /dev/null
#mount -t ext4 -o nobarrier $1 $2
