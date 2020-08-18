#! /bin/bash

# MODE
# - 2: PERSIST
# - 3: WAL
# - 6: TxFS (Kernel 3.18.22)
# - 7: exF2FS (Kernel 4.18.0)
# - 8: LS-MVBT
# - 9: F2FS Atomic
# -10: exF2FS-NOFLUSH (Kernel 4.18.0)
# -11: exF2FS-NODMA (Kernel 4.18.0)
# -12: exF2FS-NOFLUSHDMA (Kernel 4.18.0)
# -13: F2FS Durable Atomic
# -14: Quasi TxFS

# Device
# - /dev/sdb: SAMSUNG 850 PRO 256 GB
# - /dev/sdc: SAMSUNG 843tn 256 GB
# - /dev/nvme0n1: INTEL Optane 280 GB
# - /dev/nvme1n1: SAMSUNG 960PRO 512 GB

OUTPUT_DIR="result_`date "+%Y%m%d%H%M"`"
#DEV=(/dev/sdb /dev/sdc /dev/nvme0n1 /dev/nvme1n1)
#DEV=(/home/jata/ramdisk/disk.img)
DEV=(/dev/sdb /dev/nvme0n1)
MNT=/mnt
#MODE=(2 3 6 7 8 9 10 11 12 13)
#MODE=(2 3 7 8 9 10 11 12 13 14)
MODE=(7 14)
ITER=1
OPERATIONS=(0)
NTX=10000
NDB=(1 3 5 7 9)
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
			PERF_CMD="/home/jata/xF2FS/kernel/x86_64/linux/tools/perf/perf record -e cycles:k"
			;;
		"3.18.22")
			PERF_CMD="/home/jata/txfs/linux-3.18.22-mod/tools/perf/perf record"
			;;
	esac

	echo "Workload start..."
	for operation in ${OPERATIONS[@]}
	do
		OUTPUT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/result_j$2_fs$3_D$4_d${operation}.dat
		CMDSET_FILE=${OUTPUT_DIR_DEV_MODE_FS}/result_j$2_fs$3_D$4_d${operation}.cmdset

		STAT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/stat_j$2_fs$3_D$4_d${operation}
		VMSTAT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/vmstat_j$2_fs$3_D$4_d${operation}
		LOCKSTAT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/lockstat_j$2_fs$3_D$4_d${operation}
		BLKTRACE_FILE=${OUTPUT_DIR_DEV_MODE_FS}/blktrace_j$2_fs$3_D$4_d${operation}

		CMD="./bin/$1 -p ${MNT} -d ${operation} -n ${NTX} -j $2 -s 2 -T 1 -D $4"
		echo "Command: $CMD"
		echo ${CMD} >> ${CMDSET_FILE}
		for run_i in `seq 1 $ITER`
		do
			echo "Iteration $run_i start"
			sleep 5

			# blktrace
			#mkdir ${BLKTRACE_FILE}_${run_i}
			#blktrace -d ${dev} -o ${BLKTRACE_FILE}_${run_i}/result &
			#BLKTRACE_PID=$!
			#sleep 1

			# lock_stat
			echo 0 > /proc/lock_stat

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
			cp /proc/lock_stat ${LOCKSTAT_FILE}_${operation}_${run_i}.dat

			# Kill blktrace
			#kill -INT ${BLKTRACE_PID}
			#sleep 5
			#blkparse -i ${BLKTRACE_FILE}_${run_i}/result -o ${BLKTRACE_FILE}_${run_i}/result.p

			# Get perf data
			#mv perf.data ${OUTPUT_DIR_DEV_MODE_FS}/perf_${run_i}.data

			echo "Iteration $run_i End"
		done
	done
}

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
			;;
	esac

	mkdir ${OUTPUT_DIR_DEV}

	for mode in ${MODE[@]}
	do
		case $mode in
			2) #PERSIST
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/persist
				mkdir ${OUTPUT_DIR_DEV_MODE}

				for fs in ${FS[@]}
				do
					OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}/${fs}
					mkdir ${OUTPUT_DIR_DEV_MODE_FS}

					for ndb in ${NDB[@]}
					do 
						./mk${fs}.sh ${dev} ${MNT}
						run_operations mobibench ${mode} ${fs} ${ndb}
					done
				done
				;;
			3) #WAL
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/wal
				mkdir ${OUTPUT_DIR_DEV_MODE}

				for fs in ${FS[@]}
				do
					OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}/${fs}
					mkdir ${OUTPUT_DIR_DEV_MODE_FS}

					for ndb in ${NDB[@]}
					do 
						./mk${fs}.sh ${dev} ${MNT}
						run_operations mobibench_WAL ${mode} ${fs} ${ndb}
					done
				done
				;;
			6) #TxFS
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/txfs
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkext4.sh ${dev} ${MNT}
					run_operations mobibench_TxFS ${mode} ext4 ${ndb}
				done
				;;
			7) #exF2FS
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/exf2fs
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_MFAW 5 f2fs ${ndb}
				done
				;;
			8) #LS-MVBT
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/lsmvbt
				mkdir ${OUTPUT_DIR_DEV_MODE}

				for fs in ${FS[@]}
				do
					OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}/${fs}
					mkdir ${OUTPUT_DIR_DEV_MODE_FS}

					for ndb in ${NDB[@]}
					do 
						./mk${fs}.sh ${dev} ${MNT}
						run_operations mobibench_lsmvbt 5 ${fs} ${ndb}
					done
				done
				;;
			9) #SFAw 
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/f2fsatomic
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_atomic ${mode} f2fs ${ndb}
				done
				;;
			10) #exF2FS-noflush
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/exf2fs_noflush
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_MFAW_NOFLUSH 5 f2fs ${ndb}
				done
				;;
			11) #exF2FS-nodma
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/exf2fs_nodma
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_MFAW_NODMA 5 f2fs ${ndb}
				done
				;;
			12) #exF2FS-noflushdma
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/exf2fs_noflushdma
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_MFAW_NOFLUSHDMA 5 f2fs ${ndb}
				done
				;;
			13) #durable atomic
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/f2fsdatomic
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					./mkf2fs.sh ${dev} ${MNT}
					run_operations mobibench_datomic 5 f2fs ${ndb}
				done
				;;
			14) #TxFS
				OUTPUT_DIR_DEV_MODE=${OUTPUT_DIR_DEV}/qtxfs
				mkdir ${OUTPUT_DIR_DEV_MODE}

				OUTPUT_DIR_DEV_MODE_FS=${OUTPUT_DIR_DEV_MODE}

				for ndb in ${NDB[@]}
				do 
					#./mkext4.sh ${dev} ${MNT}
					./mkqtxfs.sh ${dev} ${MNT}
					run_operations mobibench_QTxFS ${mode} ext4 ${ndb}
				done
				;;
		esac
	done
done

chown -R jata:jata ${OUTPUT_DIR}
