#! /bin/bash

MOBIBENCH=mobibench_MFAW
TESTDIR=/exhdd/cheon/test_org
NUM_TRAN=1000
OUTFILE=out_950_f2fs_MFAW.txt
ITER=5

#OPER=(0 1 2)
OPER=0
#MODE=(0 1 2 3 5)
MODE=5

rm $TESTDIR/*

echo -e "MODE\tINS\t\tUPD\t\tDEL" > $OUTFILE

for mode in ${MODE[@]}
do
	case $mode in
		"0")
			echo DEL >> $OUTFILE
			echo Test delete mode
			;;
		"1")
			echo TRU >> $OUTFILE
			echo Test truncate mode
			;;
		"2")
			echo PER >> $OUTFILE
			echo Test persist mode
			;;
		"3")
			echo WAL >> $OUTFILE
			echo Test WAL mode
			;;
		"5")
			echo OFF >> $OUTFILE
			echo Test OFF mode
			;;
		*)
			;;
	esac

	i=1

	while [ $i -le $ITER ]
	do
		echo -n $i >> $OUTFILE
		echo Iteration $i
		for oper in ${OPER[@]}
		do
			case $oper in
				"0")
					echo -n Insert...
					;;
				"1")
					echo -n Update...
					;;
				"2")
					echo -n Delete...
					;;
				*)
					;;
			esac

			echo -e -n "\t" >> $OUTFILE
			RESULT=( $(./$MOBIBENCH -p $TESTDIR -n $NUM_TRAN -d $oper -j $mode | grep TIME) )
			echo -n ${RESULT[5]} >> $OUTFILE

			echo done
		done

		i=$(expr $i + 1)
		echo >> $OUTFILE
	done

done
