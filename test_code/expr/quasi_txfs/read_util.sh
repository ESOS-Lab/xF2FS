#!/bin/bash

FS=(txfs qtxfs)
ITER=15

for i in `seq 1 $ITER`
do
	for fs in ${FS[@]}
	do
		case $fs in
			txfs)
				jmode=6
				;;
			qtxfs)
				jmode=14
				;;
		esac
		cat result_optane/optane/${fs}/mpstat_j${jmode}_fsext4_D9_d0_0_iter${i}_start.dat | head -n 1
		cat result_optane/optane/${fs}/mpstat_j${jmode}_fsext4_D9_d0_0_iter${i}_end.dat | head -n 1
	done
done
