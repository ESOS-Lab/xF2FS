#! /bin/bash

# Device
# - /dev/sdb: SAMSUNG 850 PRO 256 GB
# - /dev/sdc: SAMSUNG 843tn 256 GB
# - /dev/nvme0n1: INTEL Optane 280 GB (Sometimes, it is changed with /dev/nvme1n1 after reboot)
# - /dev/nvme1n1: SAMSUNG 960PRO 512 GB
# - /home/jata/ramdisk/disk.img: RAMDISK

# Access Mode
# - 0: Sequential Write
# - 1: Random Write
# - 2: Sequential Read
# - 3: Random Read

# Sync Mode
# - 0: Buffered Write
# - 1: O_SYNC
# - 2: fsync
# - 3: O_DIRECT
# - 4: Sync+direct
# - 5: mmap
# - 6: mmap+MS_ASYNC
# - 7: mmap+MS_SYNC
# - 8: fdatasync

OUTPUT_DIR="result_`date "+%Y%m%d%H%M"`"
DEV=(/dev/sdb /dev/sdc /dev/nvme0n1 /dev/nvme1n1 /home/jata/ramdisk/disk.img)
FILE_SIZE_1K=$((1 * 1024 * 1024)) 	# 1GB
IO_SIZE_1K=(4)
ACCESS_MODE=(0 1)
SYNC_MODE=(0 8)
NUM_OF_THREADS=(1)
MNT=/mnt
ITER=5
FS=(ext4 f2fs)

parse_stat()
{
	NUM_CORE=`cat $1 | grep cpu | wc -l`

	for parse_i in `seq 1 $NUM_CORE`
	do
		STAT_USER_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $2}'`
		STAT_NICE_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $3}'`
		STAT_SYSTEM_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $4}'`
		STAT_IDLE_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $5}'`
		STAT_IOWAIT_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $6}'`
		STAT_IRQ_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $7}'`
		STAT_SOFT_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $8}'`
		STAT_STEAL_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $9}'`
		STAT_GUEST_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $10}'`
		STAT_GNICE_START=`cat $1 | head -n $parse_i | tail -n 1 | awk '{print $11}'`

		STAT_USER_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $2}'`
		STAT_NICE_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $3}'`
		STAT_SYSTEM_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $4}'`
		STAT_IDLE_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $5}'`
		STAT_IOWAIT_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $6}'`
		STAT_IRQ_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $7}'`
		STAT_SOFT_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $8}'`
		STAT_STEAL_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $9}'`
		STAT_GUEST_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $10}'`
		STAT_GNICE_END=`cat $2 | head -n $parse_i | tail -n 1 | awk '{print $11}'`

		STAT_USER_RESULT=`expr $STAT_USER_END - $STAT_USER_START`
		STAT_NICE_RESULT=`expr $STAT_NICE_END - $STAT_NICE_START`
		STAT_SYSTEM_RESULT=`expr $STAT_SYSTEM_END - $STAT_SYSTEM_START`
		STAT_IDLE_RESULT=`expr $STAT_IDLE_END - $STAT_IDLE_START`
		STAT_IOWAIT_RESULT=`expr $STAT_IOWAIT_END - $STAT_IOWAIT_START`
		STAT_IRQ_RESULT=`expr $STAT_IRQ_END - $STAT_IRQ_START`
		STAT_SOFT_RESULT=`expr $STAT_SOFT_END - $STAT_SOFT_START`
		STAT_STEAL_RESULT=`expr $STAT_STEAL_END - $STAT_STEAL_START`
		STAT_GUEST_RESULT=`expr $STAT_GUEST_END - $STAT_GUEST_START`
		STAT_GNICE_RESULT=`expr $STAT_GNICE_END - $STAT_GNICE_START`

		if [ "$parse_i" -eq "1" ]; then
			STAT_CPU="cpu"
		else
			STAT_CPU="cpu`expr $parse_i - 2`"
		fi

		echo $STAT_CPU $STAT_USER_RESULT $STAT_NICE_RESULT $STAT_SYSTEM_RESULT $STAT_IDLE_RESULT \
		$STAT_IOWAIT_RESULT $STAT_IRQ_RESULT $STAT_SOFT_RESULT $STAT_STEAL_RESULT \
		$STAT_GUEST_RESULT $STAT_GNICE_RESULT >> $3
	done
}

run_operations()
{
	KERNEL_VERSION=`uname -r`
	case $KERNEL_VERSION in
		"4.18.0-rc6-exf2fs")
			#PERF_CMD="/home/jata/xF2FS/kernel/x86_64/linux/tools/perf/perf record -e cycles:k"
			PERF_CMD="/home/jata/xF2FS/kernel/x86_64/linux/tools/perf/perf record"
			;;
		"3.18.22")
			PERF_CMD="/home/jata/txfs/linux-3.18.22-mod/tools/perf/perf record"
			;;
	esac

	echo "Workload start..."

	for io_size_1k in ${IO_SIZE_1K[@]}
	do
		OUTPUT_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/result_fs$2_a$3_y$4_IO${io_size_1k}.dat
		CMDSET_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/result_fs$2_a$3_y$4_IO${io_size_1k}.cmdset

		STAT_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/stat_fs$2_a$3_y$4_IO${io_size_1k}
		VMSTAT_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/vmstat_fs$2_a$3_y$4_IO${io_size_1k}
		LOCKSTAT_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/lockstat_fs$2_a$3_y$4_IO${io_size_1k}
		BLKTRACE_FILE=${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}/blktrace_fs$2_a$3_y$4_IO${io_size_1k}

		CMD="$1 -p ${MNT} -f ${FILE_SIZE_1K} -r ${io_size_1k} -a $3 -y $4"
		echo "Command: $CMD"
		echo ${CMD} >> ${CMDSET_FILE}
		for run_i in `seq 1 $ITER`
		do
			echo "Iteration $run_i start"

			# blktrace
			#mkdir ${BLKTRACE_FILE}_${run_i}
			#blktrace -d ${dev} -o ${BLKTRACE_FILE}_${run_i}/result &
			#BLKTRACE_PID=$!
			#sleep 1

			# lock_stat
			#echo 0 > /proc/lock_stat

			# stat (CPU Utilization)
			#cat /proc/stat > ${STAT_FILE}_iter${run_i}_start.dat

			# vmstat
			#vmstat > /dev/null
			#vmstat 1 > ${VMSTAT_FILE}_iter${run_i}.dat &
			#VMSTAT_PID=$!

			# Normal Command
			${CMD} | grep TIME >> ${OUTPUT_FILE}

			# Command with perf
			#${PERF_CMD} ${CMD}

			# Kill vmstat
			#kill ${VMSTAT_PID}

			# Get stat (CPU Utilization)
			#cat /proc/stat > ${STAT_FILE}_iter${run_i}_end.dat

			# Calculate stat (CPU Utilization)
			# User	Nice	System	Idle	IO Wait	IRQ	Soft	Steal	Guest	Gnice
			#parse_stat ${STAT_FILE}_iter${run_i}_start.dat ${STAT_FILE}_iter${run_i}_end.dat ${STAT_FILE}_iter${run_i}_result.dat

			# Get lock_stat
			#cp /proc/lock_stat ${LOCKSTAT_FILE}_${operation}_${run_i}.dat

			# Kill blktrace
			#kill -INT ${BLKTRACE_PID}
			#sleep 5
			#blkparse -i ${BLKTRACE_FILE}_${run_i}/result -o ${BLKTRACE_FILE}_${run_i}/result.p

			# Get perf data
			#mv perf.data ${OUTPUT_DIR_DEV_MODE_FS}/perf_j$2_fs$3_D$4_d${operation}_${run_i}.data

			echo "Iteration $run_i End"
		done
	done
}

# Here is entry point

mkdir ${OUTPUT_DIR}
cp $0 ${OUTPUT_DIR}

for dev in ${DEV[@]}
do
	case $dev in 
		"/dev/sdb") #850PRO
			OUTPUT_DIR_DEV=${OUTPUT_DIR}/850pro
			;;
		"/dev/sdc") #843TN
			OUTPUT_DIR_DEV=${OUTPUT_DIR}/843tn
			;;
		"/dev/nvme0n1") #Optane
			OUTPUT_DIR_DEV=${OUTPUT_DIR}/optane
			;;
		"/dev/nvme1n1") #960PRO
			OUTPUT_DIR_DEV=${OUTPUT_DIR}/960pro
			;;
		"/home/jata/ramdisk/disk.img") #RAMDISK
			OUTPUT_DIR_DEV=${OUTPUT_DIR}/ramdisk
			mount -t ramfs ramfs /home/jata/ramdisk
			dd if=/dev/zero of=/home/jata/ramdisk/disk.img bs=1G count=5
			;;
	esac

	mkdir ${OUTPUT_DIR_DEV}

	for fs in ${FS[@]}
	do
		OUTPUT_DIR_DEV_FS=${OUTPUT_DIR_DEV}/${fs}
		mkdir ${OUTPUT_DIR_DEV_FS}

		./mk${fs}.sh ${dev} ${MNT}

		for access_mode in ${ACCESS_MODE[@]}
		do
			case ${access_mode} in
				0)
					OUTPUT_DIR_DEV_FS_ACCESSMODE=${OUTPUT_DIR_DEV_FS}/sequential_write
					;;
				1)
					OUTPUT_DIR_DEV_FS_ACCESSMODE=${OUTPUT_DIR_DEV_FS}/random_write
					;;
				2)
					OUTPUT_DIR_DEV_FS_ACCESSMODE=${OUTPUT_DIR_DEV_FS}/sequential_read
					;;
				3)
					OUTPUT_DIR_DEV_FS_ACCESSMODE=${OUTPUT_DIR_DEV_FS}/random_read
					;;
			esac
			mkdir ${OUTPUT_DIR_DEV_FS_ACCESSMODE}

			for sync_mode in ${SYNC_MODE[@]}
			do
				case ${sync_mode} in
					0)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/buffered_write
						;;
					1)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/o_sync
						;;
					2)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/fsync
						;;
					3)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/o_direct
						;;
					4)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/sync_direct
						;;
					5)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/mmap
						;;
					6)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/mmap_ms_async
						;;
					7)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/mmap_ms_sync
						;;
					8)
						OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE=${OUTPUT_DIR_DEV_FS_ACCESSMODE}/fdatasync
						;;
				esac
				mkdir ${OUTPUT_DIR_DEV_FS_ACCESSMODE_SYNCMODE}
				run_operations ./mobibench ${fs} ${access_mode} ${sync_mode}
			done

		done
	done
done

chown -R jata:jata ${OUTPUT_DIR}
