#! /bin/bash

FS=(exf2fs qtxfs)
NDB=(1 3 5 7 9)

for fs in ${FS[@]}
do
	case $fs in
		"exf2fs")
			jmode=5
			l_fs=f2fs
			;;
		"qtxfs")
			jmode=14
			l_fs=ext4
			;;
	esac

	echo "Filesystem: ${fs}"
	for ndb in ${NDB[@]}
	do
		cat ${fs}/blktrace_j${jmode}_fs${l_fs}_D${ndb}_d0_1/result.p | grep "Writes Completed" | tail -n 1
	done
done
