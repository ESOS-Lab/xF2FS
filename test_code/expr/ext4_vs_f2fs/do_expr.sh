#! /bin/bash
# Usage: ./expr <Path> <Total Size> <IO Size> <# of IO> <fsync: 0 or atomic write: 1>

EXEC_BIN="./expr"
#DEV=(/dev/sdb /dev/nvme0n1)
DEV=(/dev/sdb)
MNT="/mnt"
TOTAL_SIZE=$((1 * 1024 * 1024))		# 1 MB
IO_SIZE=$((12 * 1024))
N_IO=10
IS_ATOMIC=(0)
#FS=(ext4 qtxfs f2fs)
FS=(ext4)


for dev in ${DEV[@]}
do
	for fs in ${FS[@]}
	do
		echo "./mk${fs}.sh $dev $MNT"
		./mk${fs}.sh $dev $MNT
		echo "=== ${dev}, ${fs} Workload Start ==="
		case $fs in
			ext4)
				echo "${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} 0"
				${EXEC_BIN} ${MNT} ${TOTAL_SIZE} ${IO_SIZE} ${N_IO} 0
				;;
			qtxfs)
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
		echo "=== ${dev}, ${fs} Workload End ==="
	done
done
