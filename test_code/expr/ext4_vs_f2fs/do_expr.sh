#! /bin/bash
# Usage: ./expr <Path> <Total Size> <IO Size> <# of IO> <fsync: 0 or atomic write: 1>

EXEC_BIN="./expr"
#DEV=(/dev/sdb /dev/nvme0n1)
DEV=(/dev/sdb)
MNT="/mnt"
TOTAL_SIZE=`bc <<< "1024*128"`	# 1 MB
IO_SIZE=`bc <<< "4096*2"`
N_IO=10
IS_ATOMIC=(0 1)
FS=(f2fs)


for fs in ${FS[@]}
do
	for dev in ${DEV[@]}
	do
		echo "./mk${fs}.sh $dev $MNT"
		#./mk${fs}.sh $dev $MNT
		case $fs in
			ext4)
				echo "${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} 0"
				${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} 0
				;;
			f2fs)
				for is_atomic in ${IS_ATOMIC[@]}
				do			
					echo "${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} ${is_atomic}"
					${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} ${is_atomic}
					sleep 1
				done
				;;
		esac
	done
done
