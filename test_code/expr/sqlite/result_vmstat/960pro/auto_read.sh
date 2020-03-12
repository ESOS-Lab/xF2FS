#!/bin/bash

for i in 1 3 5 7 9
do
	cat qtxfs/vmstat_j14_fsext4_D${i}_d0_iter1.dat | grep "0 " | awk '{print $6+$5}'
	echo "========"
done
