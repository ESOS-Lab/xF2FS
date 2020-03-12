#! /bin/bash

# MODE
# - 2: PERSIST
# - 3: WAL
# - 6: TxFS
# - 7: exF2FS
# - 8: LS-MVBT
# - 9: F2FS Atomic
# -10: exF2FS-NOFLUSH
# -11: exF2FS-NODMA
# -12: exF2FS-NOFLUSHDMA
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
DEV=(/dev/nvme0n1)
MNT=/mnt
#MODE=(2 3 6 7 8 9 10 11 12 13)
MODE=(6 14)
ITER=15
OPERATIONS=(0)
NTX=10000
#NDB=(1 3 5 7 9)
NDB=(1 3 5 7 9)
FS=(ext4 f2fs)

run_operations()
{
	echo "Workload start..."
	for operation in ${OPERATIONS[@]}
	do
		OUTPUT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/result_j$2_fs$3_D$4_d${operation}.dat
		CMDSET_FILE=${OUTPUT_DIR_DEV_MODE_FS}/result_j$2_fs$3_D$4_d${operation}.cmdset

		MPSTAT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/mpstat_j$2_fs$3_D$4_d${operation}
		#LOCKSTAT_FILE=${OUTPUT_DIR_DEV_MODE_FS}/lockstat
		#BLKTRACE_FILE=${OUTPUT_DIR_DEV_MODE_FS}/blktrace_${operation}

		CMD="./bin/$1 -p ${MNT} -d ${operation} -n ${NTX} -j $2 -s 2 -T 1 -D $4"
		echo ${CMD} >> ${CMDSET_FILE}
		for i in `seq 1 $ITER`
		do
			#mkdir ${BLKTRACE_FILE}_${i}
			#blktrace -d ${dev} -o ${BLKTRACE_FILE}_${i}/blktrace &
			#BLKTRACE_PID=$!
			#echo 0 > /proc/lock_stat
			cat /proc/stat > ${MPSTAT_FILE}_${operation}_iter${i}_start.dat

			${CMD} | grep TIME >> ${OUTPUT_FILE}
			#sleep 1

			cat /proc/stat > ${MPSTAT_FILE}_${operation}_iter${i}_end.dat
			#kill -INT ${BLKTRACE_PID}
			#cp /proc/lock_stat ${LOCKSTAT_FILE}_${operation}_${i}.dat
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
