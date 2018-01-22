# !bin/sh

YEARS=(2015 200 201)
MONTHS=(01 02 03 04 05 06 07 08 09 10 11 12)
DAYS=(01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31)
ORI_FILE="mj_androtrace_IO_collect.dat"
TARGET_DIR="mj_info_daily"

mkdir ${TARGET_DIR}

for year in ${YEARS[@]}
do
	for month in ${MONTHS[@]}
	do
		for day in ${DAYS[@]}
		do
			cat ${ORI_FILE} | grep  "${year}-${month}-${day}" > ${TARGET_DIR}/${year}_${month}_${day}.dat
		done
	done
done
