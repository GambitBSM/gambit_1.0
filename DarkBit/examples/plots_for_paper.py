#!/usr/bin/env python

from __future__ import division
from numpy import *
import pylab as plt
from scipy.integrate import trapz

def plotSpectra():
    plt.clf()
    plt.figure(figsize=(5, 4))
    for filename, label in [ 
            ['dNdE1.dat', 'Zg'],
            ['dNdE2.dat', 'gg'],
            ['dNdE3.dat', 'phi phi->gggg'],
            ['dNdE4.dat', '2 x phi1 -> 4 x phi2 -> 8 x g'],
            ['dNdE5.dat', '3-body'],
            ['dNdE_MSSM.dat', 'input.slha'],
#            ['FMCp03000765.gaspec', 'input.slha'],
            ]:
        x, y = loadtxt(filename).T
        print trapz(y, x)/(3e-26/100**2)
#        if filename[0] == "F":
#            factor = 1/250**2
#        else:
#            factor = 1.
        plt.loglog(x, y*x*x+1e-50, label=label)
    plt.ylim([1e-36, 1e-23])
    plt.xlim([1e0, 5e2])
    plt.xlabel("E [GeV]")
    plt.ylabel("E^2 dN/dE")
    plt.tight_layout(pad=0.3)
    plt.legend(loc=2, frameon=False, fontsize=11)
    plt.savefig("DarkBit_spectra.eps")

def plotLimits():
    plt.clf()
    plt.figure(figsize=(5, 4))
    data = loadtxt("Fermi_table.dat")
    sv = data[1:, 0]
    m = data[0, 1:]
    lnL = -data[1:, 1:]
    lnL -= lnL.min()
    plt.contour(m, sv, lnL, levels = [2.71], colors='r')

    data = loadtxt("oh2_table.dat")
    sv = data[1:, 0]
    m = data[0, 1:]
    oh2 = data[1:, 1:]
    plt.contour(m, sv, oh2, levels = [0.1], colors='k')

    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')

    plt.xlabel("m [GeV]")
    plt.ylabel("sv [cm3/s]")
    plt.ylim([1e-27, 1e-24])
    plt.tight_layout(pad=0.3)
    plt.savefig("DarkBit_limits.eps")

def plotLUX():
    plt.clf()
    plt.figure(figsize=(5, 4))
    data = loadtxt("../LUX2013_table.dat")
    s = data[1:, 0]
    m = data[0, 1:]
    lnL = -data[1:, 1:]
    lnL -= lnL.min()
    plt.contour(m, s, lnL, levels = [2.71], colors='r')

    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')

    plt.xlabel("m [GeV]")
    plt.ylabel("gps [GeV-2]")
    plt.tight_layout(pad=0.3)
    plt.savefig("DarkBit_LUX2013.eps")

if __name__ == '__main__':
    #plotLimits()
    plotSpectra()
    #plotLUX()
