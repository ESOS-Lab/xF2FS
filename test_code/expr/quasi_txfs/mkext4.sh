umount $1
umount $2
mkfs.ext4 -F -E lazy_journal_init=0,lazy_itable_init=0 $1
mount -t ext4 $1 $2
#mount -t ext4 -o nobarrier $1 $2
