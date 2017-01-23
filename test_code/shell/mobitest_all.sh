#! /bin/bash

DEV=(/dev/sdb1 /dev/nvme0n1)
ORG=(org_3 org_5 org_7 org_9)
MFAW=(MFAW_3 MFAW_5 MFAW_7 MFAW_9)

for dev in ${DEV[@]}
do
	case $dev in
		"/dev/sdb1")
			dev_str="840"
			;;
		"/dev/nvme0n1")
			dev_str="950"
			;;
	esac

	for org in ${ORG[@]}
	do
		./mkext4.sh $dev
		./mobitest_org.sh mobibench_$org out_ext4_$dev_str$org.txt
	done

	for org in ${ORG[@]}
	do
		./mkf2fs.sh $dev
		./mobitest_org.sh mobibench_$org out_f2fs_$dev_str$org.txt
	done

	for mfaw in ${MFAW[@]}
	do
		./mkf2fs.sh $dev
		./mobitest_MFAW.sh mobibench_$mfaw out_f2fs_$dev_str$mfaw.txt
	done
done
