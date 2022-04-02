                                                                      
set xlabel 'numerical distribution'
set ylabel 'time(cycles)'
set title 'Fibonacci Number Naive String Method'
set term png enhanced font 'Verdana,10'
set output 'runtime.png'
set xrange [1:100]


plot 'out' using 1 with points title 'kernel time', \
'out' using 2 with points title 'user to kernel time' 
# 'fib100' using 2 with points title 'user time'
