#------------------key 
#set terminal postscript eps enhanced color size 36cm, 18cm rounded linewidth 0.5 dashlength 1.5 font "Arial, 60"
set terminal postscript eps enhanced monochrome size 30cm, 18cm rounded linewidth 2 dashed dashlength 3 font "Arial, 60"

set key inside right bottom vertical samplen 5 spacing 10 font "Arial, 60"

set style function linespoints
set style data linespoints

#set lmargin 15
#set rmargin 5
#set bmargin 7

#set xlabel "mj File IO Count" font "Arial, 60" offset 0,-2
set xlabel "The number of multi-database transaction per day" font "Arial, 60"
set xtics font "Arial, 60"

set ylabel "CDF(%)" font "Arial, 60" offset 2
set yrange[0:110]
set ytics 20 font "Arial, 60"

in1 = "mj_info_daily_dev_1/count_per_day_dev_1.dat"
in2 = "mj_info_daily_dev_2/count_per_day_dev_2.dat"
in4 = "mj_info_daily_dev_4/count_per_day_dev_4.dat"
in5 = "mj_info_daily_dev_5/count_per_day_dev_5.dat"

num1=system("wc -l mj_info_daily_dev_1/count_per_day_dev_1.dat | awk '{print $1}'")
num2=system("wc -l mj_info_daily_dev_2/count_per_day_dev_2.dat | awk '{print $1}'")
num4=system("wc -l mj_info_daily_dev_4/count_per_day_dev_4.dat | awk '{print $1}'")
num5=system("wc -l mj_info_daily_dev_5/count_per_day_dev_5.dat | awk '{print $1}'")

set output "CDF_mj_file_io_count.eps"

plot in1 using ($2):(1./num1*100) s cumul t 'dev1' ls 1 lc rgb "black" lw 5, \
in2 using ($2):(1./num2*100) s cumul t 'dev2' ls 3 lc rgb "black" lw 5, \
in4 using ($2):(1./num4*100) s cumul t 'dev3' ls 5 lc rgb "black" lw 5, \
in5 using ($2):(1./num5*100) s cumul t 'dev4' ls 8 lc rgb "black" lw 5
