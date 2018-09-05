#! /bin/bash

DEV=(/dev/sdb1 /dev/nvme0n1)
#ORG=(org_3 org_5 org_7 org_9)
#ORG=(org_3)
#ORG=(donut_3)
#ORG=(lsmvbt_3 lsmvbt_5 lsmvbt_7 lsmvbt_9)
#ORG=(lsmvbt_3)
MFAW=(MFAW_3 MFAW_5 MFAW_7 MFAW_9)
#MFAW=(MFAW_9)

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

	mkdir result

#	for org in ${ORG[@]}
#	do
#		./mkext4.sh $dev
#		#./mobitest_lsmvbt.sh bin/mobibench_$org result/out_ext4_$dev_str$org.txt
#		./mobitest_org.sh bin/mobibench_$org result/out_ext4_$dev_str$org.txt
#	done

#	for org in ${ORG[@]}
#	do
#		./mkf2fs.sh $dev
#		./mobitest_org.sh bin/mobibench_$org result/out_f2fs_$dev_str$org.txt
#		#./mobitest_lsmvbt.sh bin/mobibench_$org result/out_f2fs_$dev_str$org.txt
#	done

	for mfaw in ${MFAW[@]}
	do
		./mkf2fs.sh $dev
		./mobitest_MFAW.sh bin/mobibench_$mfaw result/out_f2fs_$dev_str$mfaw.txt
	done
done
