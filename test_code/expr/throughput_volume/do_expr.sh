NRUNS=10

case $1 in
	txfs)
		./mktxfs.sh /dev/sdb /mnt
		rm result_txfs.dat
		for i in `seq 1 $NRUNS`
		do
			./atomic_write_txfs /mnt | grep "Total time" >> result_txfs.dat
		done
		;;
	f2fs)
		./mkf2fs.sh /dev/sdb /mnt
		rm result_f2fs.dat
		for i in `seq 1 $NRUNS`
		do
			./atomic_write_f2fs /mnt | grep "Total time" >> result_f2fs.dat
		done
		;;
	exf2fs)
		./mkf2fs.sh /dev/sdb /mnt
		rm result_exf2fs.dat
		for i in `seq 1 $NRUNS`
		do
			./atomic_write_exf2fs /mnt | grep "Total time" >> result_exf2fs.dat
		done
		;;
esac
