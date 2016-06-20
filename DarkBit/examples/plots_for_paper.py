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

    SingletDM1_1 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/SingletDM1.out_0")
    SingletDM1_1_param = "m_S"
    SingletDM1_2 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/SingletDM2.out_0")
    SingletDM1_2_param = "lambda"

    MSSM1_1=genfromtxt("runs/MSSM9/JE56C_003717/samples/M2.out_0")
    MSSM1_1_param = "M_2"
    #MSSM1_2=genfromtxt("runs/MSSM9/JE56C_003717/samples/mHd2.out_0")
    #MSSM1_2=genfromtxt("runs/MSSM9/JE56C_003717/samples/mHu2.out_0")
    #MSSM1_2=genfromtxt("runs/MSSM9/JE56C_003717/samples/TanBeta.out_0")
    MSSM1_2=genfromtxt("runs/MSSM9/JE56C_003717/samples/M1.out_0")
    #MSSM1_2=genfromtxt("runs/MSSM9/JE56C_003717/samples/mf2.out_0")
    MSSM1_2_param = "M_1"

    CMSSM1_1 = genfromtxt("runs/CMSSM/FMCp03000765/samples/M12.out_0")
    CMSSM1_1_param = "M_1/2"
    #CMSSM1_2 = genfromtxt("runs/CMSSM/FMCp03000765/samples/TanBeta.out_0")
    CMSSM1_2 = genfromtxt("runs/CMSSM/FMCp03000765/samples/M0_flat.out_0")
    #CMSSM1_2 = genfromtxt("runs/CMSSM/FMCp03000765/samples/A0.out_0")
    CMSSM1_2_param = "M_0"

    mwimp_SingletDM1 = concatenate((SingletDM1_1[:,46], SingletDM1_2[:,46]))
    sigma_SI_p_SingletDM1 = concatenate((SingletDM1_1[:,48], SingletDM1_2[:,48]))
    sigma_SD_SingletDM1 = concatenate((SingletDM1_1[:,50], SingletDM1_2[:,50]))
    sigmav_SingletDM1 = concatenate((SingletDM1_1[:,47], SingletDM1_2[:,47]))
    LUXlnL_SingletDM1 = concatenate((SingletDM1_1[:,53], SingletDM1_2[:,53]))
    FermiDwarflnL_SingletDM1 = concatenate((SingletDM1_1[:,44], SingletDM1_2[:,44]))
    IceCubelnL_SingletDM1 = concatenate((SingletDM1_1[:,54], SingletDM1_2[:,54]))

    mwimp_MSSM1 = concatenate((MSSM1_1[:,54], MSSM1_2[:,54]))
    sigma_SI_p_MSSM1 = concatenate((MSSM1_1[:,56], MSSM1_2[:,56]))
    sigma_SD_p_MSSM1 = concatenate((MSSM1_1[:,58], MSSM1_2[:,58]))
    sigmav_MSSM1 = concatenate((MSSM1_1[:,55], MSSM1_2[:,55]))
    LUXlnL_MSSM1 = concatenate((MSSM1_1[:,61], MSSM1_2[:,61]))
    FermiDwarflnL_MSSM1 = concatenate((MSSM1_1[:,52], MSSM1_2[:,52]))
    SIMPLE_MSSM1 = concatenate((MSSM1_1[:,62], MSSM1_2[:,62]))
    IceCubelnL_MSSM1 = concatenate((MSSM1_1[:,63], MSSM1_2[:,63]))

    mwimp_CMSSM1 = concatenate((CMSSM1_1[:,48], CMSSM1_2[:,48]))
    sigma_SI_p_CMSSM1 = concatenate((CMSSM1_1[:,50], CMSSM1_2[:,50]))
    sigma_SD_p_CMSSM1 = concatenate((CMSSM1_1[:,52], CMSSM1_2[:,52]))
    sigmav_CMSSM1 = concatenate((CMSSM1_1[:,49], CMSSM1_2[:,49]))
    LUXlnL_CMSSM1 = concatenate((CMSSM1_1[:,55], CMSSM1_2[:,55]))
    FermiDwarflnL_CMSSM1 = concatenate((CMSSM1_1[:,46], CMSSM1_2[:,46]))
    SIMPLE_CMSSM1 = concatenate((CMSSM1_1[:,56], CMSSM1_2[:,56]))
    IceCubelnL_CMSSM1 = concatenate((CMSSM1_1[:,57], CMSSM1_2[:,57]))
    
    
    # Spin Independent Direct Detection
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
#    cmin = min(concatenate((LUXlnL_SingletDM1,LUXlnL_MSSM1)))
    cmax = max(concatenate((LUXlnL_SingletDM1,LUXlnL_MSSM1,LUXlnL_CMSSM1)))
    cmin = max(min(
        concatenate((LUXlnL_SingletDM1,LUXlnL_MSSM1,LUXlnL_CMSSM1))),(cmax-1)*10**2)
    plt.plot(mwimp_SingletDM1[:9],sigma_SI_p_SingletDM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_SingletDM1[9:],sigma_SI_p_SingletDM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_MSSM1[:9],sigma_SI_p_MSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_MSSM1[9:],sigma_SI_p_MSSM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1[:9],sigma_SI_p_CMSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_CMSSM1[9:],sigma_SI_p_CMSSM1[9:],c='k',zorder=1,ls="--")
    sc1 = ax1.scatter(mwimp_SingletDM1,sigma_SI_p_SingletDM1,c=LUXlnL_SingletDM1,
        s=40,zorder=2,edgecolors="none",marker="o",label="Singlet DM")
    sc2 = ax1.scatter(mwimp_MSSM1,sigma_SI_p_MSSM1,c=LUXlnL_MSSM1,
        s=40,zorder=2,edgecolors="none",marker="s", label="MSSM 11")
    sc3 = ax1.scatter(mwimp_CMSSM1,sigma_SI_p_CMSSM1,c=LUXlnL_CMSSM1,
        s=40,zorder=2,edgecolors="none",marker="^", label="cMSSM")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit curves
    limit = genfromtxt("DarkBit/examples/LUX_2013_85d_118kg_SI_95CL.txt")
    plt.plot(limit[:,0],limit[:,1]*10**-36,label="LUX 2013")

    # Axes, legend, and colorbar
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_SI_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=6000)
    #plt.gca().set_ylim(ymin=10**-49,ymax=10**-38)
    plt.text(mwimp_SingletDM1[1]*1.1,sigma_SI_p_SingletDM1[1]*1.1,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1[10]*1.1,sigma_SI_p_SingletDM1[10]*1.1,SingletDM1_2_param)
    plt.text(mwimp_MSSM1[1]*1.1,sigma_SI_p_MSSM1[1]*1.1,MSSM1_1_param)
    plt.text(mwimp_MSSM1[10]*1.1,sigma_SI_p_MSSM1[10]*1.1,MSSM1_2_param)
    plt.text(mwimp_CMSSM1[1]*1.1,sigma_SI_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1[10]*1.1,sigma_SI_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    cbar = plt.colorbar(sc1)
    cbar.set_label('ln L_LUX')
    plt.legend()

    plt.savefig("SI_DD.eps")
    plt.show()

    # Spin Dependent Direct Detection
    plt.clf()  
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    #cmin = min(concatenate((SIMPLE_MSSM1)))
    #cmax = max(concatenate((SIMPLE_MSSM1)))
    cmax = max(concatenate((SIMPLE_MSSM1,SIMPLE_CMSSM1)))
    #cmin = max(min(concatenate((SIMPLE_MSSM1))),(cmax-1)*10**2)
    cmin = max(min(concatenate((SIMPLE_MSSM1,SIMPLE_CMSSM1))),(cmax-1)*10**2)

    plt.plot(mwimp_MSSM1[:9],sigma_SD_p_MSSM1[:9],c="k",zorder=1,ls="-")
    plt.plot(mwimp_MSSM1[9:],sigma_SD_p_MSSM1[9:],c="k",zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1[:9],sigma_SD_p_CMSSM1[:9],c="k",zorder=1,ls="-")
    plt.plot(mwimp_CMSSM1[9:],sigma_SD_p_CMSSM1[9:],c="k",zorder=1,ls="--")    
    sc1 = ax1.scatter(mwimp_MSSM1,sigma_SD_p_MSSM1,c=SIMPLE_MSSM1,
        s=40,zorder=2,edgecolors="none",marker="s",label="MSSM 11")
    sc2 = ax1.scatter(mwimp_CMSSM1,sigma_SD_p_CMSSM1,c=SIMPLE_CMSSM1,
        s=40,zorder=2,edgecolors="none",marker="^",label="cMSSM")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])

    # Limit curves
    limit = genfromtxt("DarkBit/examples/SIMPLE_2011_PhaseII_SDp.txt")
    plt.plot(limit[:,0],limit[:,1]*10**-36,label="SIMPLE 2011")

    # Axes, legend, and colorbar
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_SD_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=3000)
    #plt.gca().set_ylim(ymin=10**-41,ymax=10**-31)
    plt.text(mwimp_MSSM1[1]*1.1,sigma_SD_p_MSSM1[1]*1.1,MSSM1_1_param)
    plt.text(mwimp_MSSM1[10]*1.1,sigma_SD_p_MSSM1[10]*1.1,MSSM1_2_param)
    plt.text(mwimp_CMSSM1[1]*1.1,sigma_SD_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1[10]*1.1,sigma_SD_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    cbar = plt.colorbar(sc1)
    cbar.set_label('ln L_SIMPLE')
    plt.legend()

    plt.savefig("SD_DD.eps")
    plt.show()

    # Ice Cube
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    #cmin = min(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1)))
    cmax = max(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1,IceCubelnL_CMSSM1)))
    cmin = max(min(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1,IceCubelnL_CMSSM1))),(cmax-1)*10**2)
    plt.plot(mwimp_SingletDM1[:9],sigma_SI_p_SingletDM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_SingletDM1[9:],sigma_SI_p_SingletDM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_MSSM1[:9],sigma_SD_p_MSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_MSSM1[9:],sigma_SD_p_MSSM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1[:9],sigma_SD_p_CMSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_CMSSM1[9:],sigma_SD_p_CMSSM1[9:],c='k',zorder=1,ls="--")
    sc1 = ax1.scatter(mwimp_SingletDM1,sigma_SI_p_SingletDM1,c=IceCubelnL_SingletDM1,
        s=40,zorder=2,edgecolors="none",marker="o",label="Singlet DM (sigma_SI)")
    sc2 = ax1.scatter(mwimp_MSSM1,sigma_SD_p_MSSM1,c=IceCubelnL_MSSM1,s=40,zorder=2,
        edgecolors="none",marker="s",label="MSSM 11 (sigma_SD)")
    sc3 = ax1.scatter(mwimp_CMSSM1,sigma_SD_p_CMSSM1,c=IceCubelnL_CMSSM1,s=40,zorder=2,
        edgecolors="none",marker="^",label="cMSSM (sigma_SD)")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit curves
    bbSI = genfromtxt("DarkBit/examples/IC79_bb_SI.dat", comments="#")
    tautauSI = genfromtxt("DarkBit/examples/IC79_tautau_SI.dat", comments="#")
    bbSD = genfromtxt("DarkBit/examples/IC79_bb_SD.dat", comments="#")
    tautauSD = genfromtxt("DarkBit/examples/IC79_tautau_SD.dat", comments="#")
    plt.plot(bbSI[:,0],bbSI[:,2], label="IC SI bb")
    plt.plot(tautauSI[:,0],tautauSI[:,2], label="IC SI tau+ tau-")
    plt.plot(bbSD[:,0],bbSD[:,2], label="IC SD bb")
    plt.plot(tautauSD[:,0],tautauSD[:,2], label="IC SD tau+ tau-")
    
    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label('ln L_Ice Cube 79')
    plt.xlabel("m [GeV]")
    plt.ylabel("sigma_p [cm^2]")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_ylim(ymin=10**-49,ymax=10**-27)
    plt.text(mwimp_SingletDM1[1]*1.1,sigma_SI_p_SingletDM1[1]*1.1,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1[10]*1.1,sigma_SI_p_SingletDM1[10]*1.1,SingletDM1_2_param)
    plt.text(mwimp_MSSM1[1]*1.1,sigma_SD_p_MSSM1[1]*1.1,MSSM1_1_param)
    plt.text(mwimp_MSSM1[10]*1.1,sigma_SD_p_MSSM1[10]*1.1,MSSM1_2_param)
    plt.text(mwimp_CMSSM1[1]*1.1,sigma_SD_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1[10]*1.1,sigma_SD_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    plt.legend()

    plt.savefig("IC.eps")
    plt.show()

    # Fermi Dwarf Galaxy Limits
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    #cmin = min(concatenate((FermiDwarflnL_SingletDM1,FermiDwarflnL_MSSM1)))
    cmax = max(concatenate((FermiDwarflnL_SingletDM1,FermiDwarflnL_MSSM1,FermiDwarflnL_CMSSM1)))
    cmin = max(min(concatenate((FermiDwarflnL_SingletDM1,FermiDwarflnL_MSSM1,FermiDwarflnL_CMSSM1))),(cmax-1)*10)
    plt.plot(mwimp_SingletDM1[:9],sigmav_SingletDM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_SingletDM1[9:],sigmav_SingletDM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_MSSM1[:9],sigmav_MSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_MSSM1[9:],sigmav_MSSM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1[:9],sigmav_CMSSM1[:9],c='k',zorder=1,ls="-")
    plt.plot(mwimp_CMSSM1[9:],sigmav_CMSSM1[9:],c='k',zorder=1,ls="--")
    sc1 = ax1.scatter(mwimp_SingletDM1,sigmav_SingletDM1,c=FermiDwarflnL_SingletDM1,
        s=40,zorder=2,edgecolors="none",label="Singlet DM",marker="o")
    sc2 = ax1.scatter(mwimp_MSSM1,sigmav_MSSM1,c=FermiDwarflnL_MSSM1,
        s=40,zorder=2,edgecolors="none",label="MSSM 11",marker="s")
    sc3 = ax1.scatter(mwimp_CMSSM1,sigmav_CMSSM1,c=FermiDwarflnL_CMSSM1,
        s=40,zorder=2,edgecolors="none",label="cMSSM",marker="^")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit Curves
    bb = genfromtxt("DarkBit/examples/FermiLAT_limits_bb.txt")
    tautau = genfromtxt("DarkBit/examples/FermiLAT_limits_tautau.txt")
    plt.plot(bb[:,0],bb[:,26], label="Fermi 2015 bb")
    plt.plot(tautau[:,0],tautau[:,26],label="Fermi 2015 tau+ tau-")

    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label("ln L_Fermi")
    plt.xlabel("m [GeV]")
    plt.ylabel("<sigma v>")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_ylim(ymin=10**-32,ymax=10**-19)
    plt.text(mwimp_SingletDM1[1]*1.1,sigmav_SingletDM1[1]*1.1,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1[10]*1.1,sigmav_SingletDM1[10]*1.1,SingletDM1_2_param)
    plt.text(mwimp_MSSM1[1]*1.1,sigmav_MSSM1[1]*1.1,MSSM1_1_param)
    plt.text(mwimp_MSSM1[10]*1.1,sigmav_MSSM1[10]*1.1,MSSM1_2_param)
    plt.text(mwimp_CMSSM1[1]*1.1,sigmav_CMSSM1[1]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1[10]*1.1,sigmav_CMSSM1[10]*1.1,CMSSM1_2_param)
    plt.legend()

    plt.savefig("Fermi.eps")
    plt.show()

if __name__ == '__main__':
    plotMSSM7()
    spokePlots()
    #plotLimits()
    #plotSpectraValidation()
    #plotSpectraCascade()
    #plotLUX()
