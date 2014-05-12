#! /usr/bin/env bash

LN10=2.302585

proc=gq
cat xseccmp.txt | awk '{ print $4 }' | lesterhist mode hist title "$proc xsec devs" xname "dev_$proc" yname "N" lx -0.5 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print log(1.000001+$4)/2.302585 }' | lesterhist mode hist title "$proc xsec log10(1+dev)s" xname "log10(1+dev_$proc)" yname "N" lx -0.2 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print $1, $4 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname "m0 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
cat xseccmp.txt | awk '{ print $2, $4 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname "m12 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m12.pdf
cat xseccmp.txt | awk '{ print log($3)/2.302585, $4 }' | lesterhist mode hist2D title "$proc xsec dev vs. ref log10(xsec)" xname "log10(xsec_ref/pb)" yname "dev_$proc" n 20 pdf xseccmp_${proc}_xsec.pdf

proc=gg
cat xseccmp.txt | awk '{ print $6 }' | lesterhist mode hist title "$proc xsec devs" xname "dev_$proc" yname "N" lx -0.5 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print log(1.000001+$6)/2.302585 }' | lesterhist mode hist title "$proc xsec log10(1+dev)s" xname "log10(1+dev_$proc)" yname "N" lx -0.2 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print $1, $6 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname "m0 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
cat xseccmp.txt | awk '{ print $2, $6 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname "m12 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m12.pdf
cat xseccmp.txt | awk '{ print log($5)/2.302585, $6 }' | lesterhist mode hist2D title "$proc xsec dev vs. ref log10(xsec)" xname "log10(xsec_ref/pb)" yname "dev_$proc" n 20 pdf xseccmp_${proc}_xsec.pdf

# proc=qq
# cat xseccmp.txt | awk '{ print $8 }' | lesterhist mode hist title "$proc xsec devs" xname "dev_$proc" yname "N" lx -0.5 n 50 pdf xseccmp_${proc}_devs.pdf
# cat xseccmp.txt | awk '{ print log(1.000001+$8)/2.302585 }' | lesterhist mode hist title "$proc xsec log10(1+dev)s" xname "log10(1+dev_$proc)" yname "N" lx -0.2 n 50 pdf xseccmp_${proc}_devs.pdf
# cat xseccmp.txt | awk '{ print $1, $8 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname "m0 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
# cat xseccmp.txt | awk '{ print $2, $8 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname "m12 / GeV" yname "dev_$proc" lx 0 n 20 pdf xseccmp_${proc}_m12.pdf
# cat xseccmp.txt | awk '{ print log($7)/2.302585, $8 }' | lesterhist mode hist2D title "$proc xsec dev vs. ref log10(xsec)" xname "log10(xsec_ref/pb)" yname "dev_$proc" n 20 pdf xseccmp_${proc}_xsec.pdf
