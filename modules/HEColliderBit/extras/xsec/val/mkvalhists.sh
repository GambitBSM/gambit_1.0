#! /usr/bin/env bash

proc=gq
cat xseccmp.txt | awk '{ print $4 }' | lesterhist mode hist title "$proc xsec devs" xname dev_$proc lx 0 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print $1, $4 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname m0 lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
cat xseccmp.txt | awk '{ print $2, $4 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname m12 lx 0 n 20 pdf xseccmp_${proc}_m12.pdf

proc=gg
cat xseccmp.txt | awk '{ print $6 }' | lesterhist mode hist title "$proc xsec devs" xname dev_$proc lx 0 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print $1, $6 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname m0 lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
cat xseccmp.txt | awk '{ print $2, $6 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname m12 lx 0 n 20 pdf xseccmp_${proc}_m12.pdf

proc=qq
cat xseccmp.txt | awk '{ print $8 }' | lesterhist mode hist title "$proc xsec devs" xname dev_$proc lx 0 n 50 pdf xseccmp_${proc}_devs.pdf
cat xseccmp.txt | awk '{ print $1, $8 }' | lesterhist mode hist2D title "$proc xsec dev vs. m0" xname m0 lx 0 n 20 pdf xseccmp_${proc}_m0.pdf
cat xseccmp.txt | awk '{ print $2, $8 }' | lesterhist mode hist2D title "$proc xsec dev vs. m12" xname m12 lx 0 n 20 pdf xseccmp_${proc}_m12.pdf
