#! /usr/bin/env bash

IN=xseccmp.txt
test "$1" && IN=$1

proc=gg
cat $IN | awk '{ print $4 }' | yodahist -- h1 40 -2 2 xlabel '$\Delta$' ylabel '$N$' out xseccmp_${proc}_dev.dat
cat $IN | awk '{ print $1, $4 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m0.dat
cat $IN | awk '{ print $2, $4 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m12.dat
cat $IN | awk '{ print log($3)/2.302585, $4 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_xsec.dat
cat $IN | awk '{ print log(2.000001+$4)/2.302585 }' | yodahist -- h1 50 "-0.2" 1 xlabel '$\log_{10}(2+\Delta)$' ylabel '$N$' out xseccmp_${proc}_logdev.dat
cat $IN | awk '{ print $1, log(2.000001+$4)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m0.dat
cat $IN | awk '{ print $2, log(2.000001+$4)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m12.dat
cat $IN | awk '{ print log($3)/2.302585, log(2.000001+$4)/2.302585 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_xsec.dat
# cat $IN | awk '{ print $1, log($3)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m0.dat
# cat $IN | awk '{ print $2, log($3)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m12.dat

proc=gq
cat $IN | awk '{ print $6 }' | yodahist -- h1 40 -2 2 xlabel '$\Delta$' ylabel '$N$' out xseccmp_${proc}_dev.dat
cat $IN | awk '{ print $1, $6 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m0.dat
cat $IN | awk '{ print $2, $6 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m12.dat
cat $IN | awk '{ print log($3)/2.302585, $6 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_xsec.dat
cat $IN | awk '{ print log(2.000001+$6)/2.302585 }' | yodahist -- h1 50 "-0.2" 1 xlabel '$\log_{10}(2+\Delta)$' ylabel '$N$' out xseccmp_${proc}_logdev.dat
cat $IN | awk '{ print $1, log(2.000001+$6)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m0.dat
cat $IN | awk '{ print $2, log(2.000001+$6)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m12.dat
cat $IN | awk '{ print log($5)/2.302585, log(2.000001+$6)/2.302585 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_xsec.dat
# cat $IN | awk '{ print $1, log($5)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m0.dat
# cat $IN | awk '{ print $2, log($5)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m12.dat

proc=qq
cat $IN | awk '{ print $8 }' | yodahist -- h1 60 -2 10 xlabel '$\Delta$' ylabel '$N$' out xseccmp_${proc}_dev.dat
cat $IN | awk '{ print $1, $8 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m0.dat
cat $IN | awk '{ print $2, $8 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_m12.dat
cat $IN | awk '{ print log($7)/2.302585, $8 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \Delta \rangle$' out xseccmp_${proc}_dev_vs_xsec.dat
cat $IN | awk '{ print log(2.000001+$8)/2.302585 }' | yodahist -- h1 50 -0.2 10 xlabel '$\log_{10}(2+\Delta)$' ylabel '$N$' out xseccmp_${proc}_logdev.dat
cat $IN | awk '{ print $1, log(2.000001+$8)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m0.dat
cat $IN | awk '{ print $2, log(2.000001+$8)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_m12.dat
cat $IN | awk '{ print log($7)/2.302585, log(2.000001+$8)/2.302585 }' | yodahist -- p1 16 -8 0 xlabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' ylabel '$\langle \log_{10}(2+\Delta) \rangle$' out xseccmp_${proc}_logdev_vs_xsec.dat
# cat $IN | awk '{ print $1, log($7)/2.302585 }' | yodahist -- p1 20 0 4000 xlabel '$m_0$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m0.dat
# cat $IN | awk '{ print $2, log($7)/2.302585 }' | yodahist -- p1 20 0 1000 xlabel '$m_{12}$ / GeV' ylabel '$\log_{10}(\sigma_\text{ref}/\text{pb})$' out xseccmp_${proc}_xsec_vs_m12.dat
