#!/usr/bin/env python

from __future__ import division
from numpy import *
#import pylab as plt
import matplotlib.pyplot as plt
from scipy.integrate import trapz

def plotSpectraCascade():
    plt.clf()
    plt.figure(figsize=(5, 4))
    for filename, label in [ 
            ['dNdE_FCMC_10.dat',  
                r'$\chi\chi\to\phi_1\phi_2$; $\phi_1\to\gamma\gamma$; '+
                r'$\phi_2\to\bar b b$'],
#            ['dNdE_FCMC_20.dat',  ''],
            ['dNdE_FCMC_30.dat',  ''],
#            ['dNdE_FCMC_40.dat',  ''],
            ['dNdE_FCMC_50.dat',  ''],
#            ['dNdE_FCMC_60.dat',  ''],
            ['dNdE_FCMC_70.dat',  ''],
#            ['dNdE_FCMC_80.dat',  ''],
            ['dNdE_FCMC_90.dat',  ''],
            ]:
        x, y = loadtxt(filename).T
        print trapz(y, x)/(3e-26/100**2)
#        if filename[0] == "F":
#            factor = 1/250**2
#        else:
#            factor = 1.
        plt.loglog(x, y*x*x+1e-50, label=label)
    plt.ylim([1e-33, 1e-26])
    plt.xlim([1e0, 2e2])
    plt.xlabel(r"$E\, [\rmGeV]$")
    plt.ylabel("$E^2 d\Phi/dE$")
    plt.tight_layout(pad=0.3)
    plt.legend(loc=2, frameon=False, fontsize=11, ncol=3)
    plt.savefig("DarkBit_spectra_FCMC.eps")

def plotSpectraValidation():
    plt.clf()
    plt.figure(figsize=(5, 4))
    for filename, label in [ 
            ['dNdE0_DS.dat', r'$\chi\chi\to \bar b b\rm\, (DS)$'],
            ['dNdE0_MO.dat', r'$\chi\chi\to \bar b b\rm\, (MO) \times\, 2$'],
            ['dNdE1.dat', r'$\chi\chi\to Z^0\!\gamma$'],
            ['dNdE2.dat', r'$\chi\chi\to \gamma\gamma$'],
#            ['dNdE3.dat', 'phi phi->gggg'],
#            ['dNdE4.dat', '2 x phi1 -> 4 x phi2 -> 8 x g'],
            ['dNdE5.dat', r'$\chi\chi\to\gamma\nu\nu$'],
#            ['dNdE_MSSM.dat', 'input.slha'],
#            ['FMCp03000765.gaspec', 'input.slha'],
            ]:
        x, y = loadtxt(filename).T
        print trapz(y, x)/(3e-26/100**2)
#        if filename[0] == "F":
#            factor = 1/250**2
#        else:
#            factor = 1.
        factor = 2 if "MO" in filename else 1
        plt.loglog(x, factor*y*x*x+1e-50, label=label)
    plt.ylim([1e-32, 1e-26])
    plt.xlim([1e0, 2e2])
    plt.xlabel(r"$E\, [\rmGeV]$")
    plt.ylabel("$E^2 d\Phi/dE$")
    plt.tight_layout(pad=0.3)
    plt.legend(loc=3, frameon=False, fontsize=11)
    plt.savefig("DarkBit_spectra_validation.eps")

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

def plotMSSM7():
    data = genfromtxt("runs/MSSM7/samples/runs/MSSM7/samples/MSSM7.hdf5_0")[2]
    mwimp = data[49]
    oh2 = data[47]
    sigma_SI_p, sigma_SI_n, sigma_SD_p, sigma_SD_n = data[51:55]
    sigmav = data[50]
    print mwimp, oh2, sigma_SI_p, sigmav


def spokePlots():

    data1 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/SingletDM1.out_0")
    data2 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/SingletDM2.out_0")
    
    mwimp = concatenate((data1[:,46], data2[:,46]))
    sigma_SI_p = concatenate((data1[:,48], data2[:,48]))
    sigma_SD_p = concatenate((data1[:,50], data2[:,50]))
    sigmav = concatenate((data1[:,47], data2[:,47]))
    LUXlnL = concatenate((data1[:,53], data2[:,53]))
    FermiDwarflnL = concatenate((data1[:,44], data2[:,44]))
    IceCubelnL = concatenate((data1[:,54], data2[:,54]))

    # Spin Independent Direct Detection
    plt.clf()
    limit = genfromtxt("DarkBit/examples/LUX_2013_85d_118kg_SI_95CL.txt")
    sc = plt.scatter(mwimp,sigma_SI_p,c=LUXlnL,s=30)
    cbar=plt.colorbar(sc)
    cbar.set_label('ln L_LUX')
    plt.plot(limit[:,0],limit[:,1]*10**-36)
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_SI_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_ylim(ymin=10**-49,ymax=10**-39)
    plt.show()

    # Spin Dependent Direct Detection
    plt.clf()   
#    plt.scatter(mwimp,sigma_SD_p)
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_SD_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_ylim(ymin=10**-41,ymax=10**-31)
    limit = genfromtxt("DarkBit/examples/SIMPLE_2011_PhaseII_SDp.txt")
    plt.plot(limit[:,0],limit[:,1]*10**-36)
    plt.show()

    # Ice Cube
    plt.clf()   
    sc = plt.scatter(mwimp,sigma_SI_p,c=IceCubelnL,s=30,label="sigma_p_SI")
    cbar=plt.colorbar(sc)
    cbar.set_label('ln L_Ice Cube 79')
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_ylim(ymin=10**-49,ymax=10**-31)
    bbSI = genfromtxt("DarkBit/examples/IC79_bb_SI.dat", comments="#")
    tautauSI = genfromtxt("DarkBit/examples/IC79_tautau_SI.dat", comments="#")
    bbSD = genfromtxt("DarkBit/examples/IC79_bb_SD.dat", comments="#")
    tautauSD = genfromtxt("DarkBit/examples/IC79_tautau_SD.dat", comments="#")
    plt.plot(bbSI[:,0],bbSI[:,2], label="SI bb")
    plt.plot(tautauSI[:,0],tautauSI[:,2], label="SI tau+ tau-")
    plt.plot(bbSD[:,0],bbSD[:,2], label="SD bb")
    plt.plot(tautauSD[:,0],tautauSD[:,2], label="SD tau+ tau-")
    plt.legend()
    plt.show()


if __name__ == '__main__':
    plotMSSM7()
    spokePlots()
    #plotLimits()
    #plotSpectraValidation()
    #plotSpectraCascade()
    #plotLUX()
