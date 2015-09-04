set terminal x11

set title "NSM renormalization group flow"
set xlabel "renormalization scale / GeV"
set logscale x

if (!exists("filename")) filename='NSM_rgflow.dat'

plot for [i=2:39+1] filename using 1:(column(i)) title columnhead(i)
