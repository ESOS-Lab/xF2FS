# !bin/sh

YEARS=(2015 200 201)
MONTHS=(01 02 03 04 05 06 07 08 09 10 11 12)
DAYS=(01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31)
TARGET_DIR="mj_info_daily_dev_6"

for year in ${YEARS[@]}
do
	for month in ${MONTHS[@]}
	do
		for day in ${DAYS[@]}
		do
			size=`ls -l ${TARGET_DIR}/${year}_${month}_${day}.dat | awk '{print $5}'`
			if [ "${size}" = "0" ] 
			then
				rm ${TARGET_DIR}/${year}_${month}_${day}.dat
			fi
		done
	done
done
