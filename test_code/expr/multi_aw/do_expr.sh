NTHREADS=8
NRUNS=10
#TOTAL_SIZE_1K=524288	# 512 MB
#TOTAL_SIZE_1K=1024576	# 1 GB
TOTAL_SIZE_1K=131072	# 128 MB

case $1 in
	multi)
		rm result_multi.dat
		for t in `seq 1 $NTHREADS`
		do
			./mkf2fs.sh /dev/sdb /mnt
			echo "Threads ${t}" >> result_multi.dat
			for i in `seq 1 $NRUNS`
			do
				./multi_aw /mnt ${TOTAL_SIZE_1K} 4 ${t} | grep "Total time" | awk '{print $3}' >> result_multi.dat
			done
		done
		;;
	single)
		rm result_single.dat
		for t in `seq 1 $NTHREADS`
		do
			./mkf2fs.sh /dev/sdb /mnt
			echo "Threads ${t}" >> result_single.dat
			for i in `seq 1 $NRUNS`
			do
				./single_aw /mnt ${TOTAL_SIZE_1K} 4 ${t} | grep "Total time" | awk '{print $3}' >> result_single.dat
			done
		done
		;;
esac
