#!/usr/bin/env python

from __future__ import division
from numpy import *
#import pylab as plt
import matplotlib.pyplot as plt
from scipy.integrate import trapz
from scipy.interpolate import griddata

def plotSpectraCascade():
    plt.clf()
    plt.figure(figsize=(5, 4))
    for filename, label in [ 
            ['dNdE_FCMC_10.dat',   ''],
#                r'$\chi\chi\to\phi_1\phi_2$; $\phi_1\to\gamma\gamma$; '+
                #r'$\phi_2\to\bar b b$'],
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
        factor = (3e-26/100**2)**-1
        print trapz(y, x)/(3e-26/100**2)
#        if filename[0] == "F":
#            factor = 1/250**2
#        else:
#            factor = 1.
        plt.loglog(x, factor*y*x*x+1e-50, label=label)
    plt.text(1.3, 2e-2, r'$\chi\chi\to\phi_1\phi_2$; $\phi_1\to\gamma\gamma$; '+ r'$\phi_2\to\bar b b$')
    plt.ylim([1e-3, 1e3])
    plt.xlim([1e0, 2e2])
    plt.xlabel(r"$E\, [\rmGeV]$")
    plt.ylabel(r"$E^2 dN/dE$ $[\rm GeV]$")
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
            ['dNdE_VIB.dat', r'$\rm exemplary\, neutralino\, coannihilation$'],
#            ['dNdE3.dat', 'phi phi->gggg'],
#            ['dNdE4.dat', '2 x phi1 -> 4 x phi2 -> 8 x g'],
#            ['dNdE5.dat', r'$\chi\chi\to\gamma\nu\nu$'],
#            ['dNdE_MSSM.dat', 'input.slha'],
#            ['FMCp03000765.gaspec', 'input.slha'],
            ]:
        x, y = loadtxt(filename).T
        print trapz(y, x)/(3e-26/100**2)
        if "VIB" in filename:
            factor = 1/(5.468e-29/225.8**2)
        else:
            factor = 1/(3e-26/100**2)
#        if filename[0] == "F":
#            factor = 1/250**2
#        else:
#            factor = 1.
        factor *= 2 if "MO" in filename else 1
        plt.loglog(x, factor*y*x*x+1e-50, label=label)
    plt.ylim([1e-3, 1e4])
    plt.xlim([1e0, 3e2])
    plt.xlabel(r"$E\, [\rmGeV]$")
    plt.ylabel(r"$E^2 dN/dE$ $[\rm GeV]$")
    plt.tight_layout(pad=0.3)
    plt.legend(loc=3, frameon=False, fontsize=11)
    plt.savefig("DarkBit_spectra_validation.eps")

def plotLimits():

    import matplotlib
    matplotlib.rcParams['mathtext.fontset'] = 'stix'
    matplotlib.rcParams['font.family'] = 'STIXGeneral'
    matplotlib.rcParams['font.size'] = 15

    # DarkBit limits from dwarf spheroidal observations
    plt.clf()
    plt.figure(figsize=(5, 4))
    data_b = loadtxt("Fermi_b_table.dat")
    data_tau = loadtxt("Fermi_tau_table.dat")
    sv_b = data_b[1:, 0]
    m_b = data_b[0, 1:]
    lnL_b = -data_b[1:, 1:]
    lnL_b -= lnL_b.min()
    sv_tau = data_tau[1:, 0]
    m_tau = data_tau[0, 1:]
    lnL_tau = -data_tau[1:, 1:]
    lnL_tau -= lnL_tau.min()

    # Omega h^2 calculated by DarkBit
    data = loadtxt("oh2_table.dat")
    sv = data[1:, 0]
    m = data[0, 1:]
    oh2 = data[1:, 1:]
    oh2_plt=plt.contour(m, sv, oh2, levels = [0.1188], colors='k')
    oh2_plt.collections[0].set_label(r'$\Omega_c h^2 = .1188$')

    # Plot DarkBit dwarf spheroidal limits
    b_plt=plt.contour(m_b, sv_b, lnL_b, levels = [3.84/2], colors='r')
    tau_plt=plt.contour(m_tau, sv_tau, lnL_tau, levels = [3.84/2], colors='g')
    b_plt.collections[0].set_label(r'$b \bar b$')
    tau_plt.collections[0].set_label(r'$\tau^- \tau^+$')

    # Limit curves from Fermi Collaboration
    bb = genfromtxt("DarkBit/examples/limits/FermiLAT_limits_bb.txt")
    tautau = genfromtxt("DarkBit/examples/limits/FermiLAT_limits_tautau.txt")
    plt.plot(bb[:,0],bb[:,26], color='r', ls="--")
    plt.plot(tautau[:,0],tautau[:,26], color='g', ls="--")

    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')

    plt.xlabel(r"$m_\chi$ [GeV]")
    plt.ylabel(r"$\langle \sigma v \rangle$ [${\rm cm^3/s}$]")
    plt.xlim([.1,10000])
    plt.ylim([1e-27, 1e-23])
    plt.legend(loc="best",frameon=False,fontsize='medium')

    #plt.tight_layout(pad=0.3)
    plt.savefig("DarkBit_limits.eps",bbox_inches="tight")

def plotLUX():

    import matplotlib
    matplotlib.rcParams['mathtext.fontset'] = 'stix'
    matplotlib.rcParams['font.family'] = 'STIXGeneral'
    matplotlib.rcParams['font.size'] = 15

    # SI scattering

    lux2013 = loadtxt("./LUX_2013_SI_table.dat")
    lux2016 = loadtxt("./LUX_2016_SI_prelim_table.dat")
    pandaX = loadtxt("./PandaX_2016_table.dat")
    xenon100 = loadtxt("./XENON100_2012_table.dat")
    cdms = loadtxt("./SuperCDMS_2014_table.dat")
    
    s_LUX2013 = lux2013[1:, 0]
    m_LUX2013 = lux2013[0, 1:]
    lnL_LUX2013 = -lux2013[1:, 1:]
    lnL_LUX2013 -= lnL_LUX2013.min()
    s_PandaX = pandaX[1:, 0]
    m_PandaX = pandaX[0, 1:]
    lnL_PandaX = -pandaX[1:, 1:]
    lnL_PandaX -= lnL_PandaX.min()
    s_LUX2016 = lux2016[1:, 0]
    m_LUX2016= lux2016[0, 1:]
    lnL_LUX2016 = -lux2016[1:, 1:]
    lnL_LUX2016 -= lnL_LUX2016.min()
    s_XENON100 = xenon100[1:, 0]
    m_XENON100 = xenon100[0, 1:]
    lnL_XENON100 = -xenon100[1:, 1:]
    lnL_XENON100 -= lnL_XENON100.min()
    s_CDMS = cdms[1:, 0]
    m_CDMS = cdms[0, 1:]
    lnL_CDMS = -cdms[1:, 1:]
    lnL_CDMS -= lnL_CDMS.min()

    plt.clf()
    plt.figure(figsize=(5, 4))

    lux2013_lim = concatenate((genfromtxt("./DarkBit/examples/limits/LUX_2013_85d_118kg_SI_90CL_lowM.csv",delimiter = ","),
        genfromtxt("./DarkBit/examples/limits/LUX_2013_85d_118kg_SI_90CL_highM.csv",delimiter = ",")))
    lux2016_lim = genfromtxt("./DarkBit/examples/limits/LUX_2016_IDM_332d.txt")
    pandaX_lim = genfromtxt("./DarkBit/examples/limits/PandaX_2016_98d_SI_90CL.csv",delimiter = ",")
    xenon100_lim = genfromtxt("./DarkBit/examples/limits/Xenon100_2012_225d_SI_90CL.csv",delimiter = ",")
    cdms_lim = genfromtxt("./DarkBit/examples/limits/SuperCDMS_Soudan_LT_90CL.txt")

    lux2013_plt = plt.contour(m_LUX2013, s_LUX2013, lnL_LUX2013, levels = [2.71/2], colors='r')
    lux2013_plt.collections[0].set_label("LUX 2013")
    cdms_plt = plt.contour(m_CDMS, s_CDMS, lnL_CDMS, levels = [2.71/2], colors='k')
    cdms_plt.collections[0].set_label("SuperCDMS")
    lux2016_plt = plt.contour(m_LUX2016, s_LUX2016, lnL_LUX2016, levels = [2.71/2], colors='g')
    lux2016_plt.collections[0].set_label("LUX 2016")
    pandaX_plt = plt.contour(m_PandaX, s_PandaX, lnL_PandaX, levels = [2.71/2], colors='b')
    pandaX_plt.collections[0].set_label("PandaX")
    #xenon100_plt = plt.contour(m_XENON100, s_XENON100, lnL_XENON100, levels = [2.71/2], colors='k')
    #xenon100_plt.collections[0].set_label("XENON100 2012")

    plt.plot(lux2013_lim[:,0],lux2013_lim[:,1]*10**-44,ls="--", color='r')
    plt.plot(cdms_lim[:,0],cdms_lim[:,1],ls="--",color='k')
    plt.plot(lux2016_lim[:,0],lux2016_lim[:,1]*10**-45,ls="--", color='g')
    plt.plot(pandaX_lim[:,0],pandaX_lim[:,1]*10**-44,ls="--", color='b')
    #plt.plot(xenon100_lim[:,0],xenon100_lim[:,1]*10**-44,ls="--", color='k')
    
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=3,xmax=2000)
    plt.gca().set_ylim(ymin=10**-46,ymax=10**-42)
    plt.gca().tick_params(which='both', direction='in',bottom='on',top='on',left='on',right='on')
    
    plt.xlabel(r'$m_\chi$ [GeV]')
    plt.ylabel(r'$\sigma_{{\rm SI},N}$ [${\rm cm^2}$]')
    #plt.legend(loc="best",frameon=False,fontsize='medium')
    plt.legend(bbox_to_anchor=(.5,.5),frameon=False,fontsize='medium')

    #plt.show()
    plt.savefig("DarkBit_SI_sigma_m.eps",bbox_inches="tight")
  
    # SD proton scattering
    plt.clf()
    plt.figure(figsize=(5, 4))

    luxsd = loadtxt("./LUX_2013_SDp_table.dat")
    pico60 = loadtxt("./PICO_60_F_table.dat")
    simple = loadtxt("./SIMPLE_2014_table.dat")
    pico2L = loadtxt("./PICO_2L_table.dat")

    s_LUX = luxsd[1:, 0]
    m_LUX = luxsd[0, 1:]
    lnL_LUX = -luxsd[1:, 1:]
    lnL_LUX -= lnL_LUX.min()
    s_PICO60 = pico60[1:, 0]
    m_PICO60 = pico60[0, 1:]
    lnL_PICO60 = -pico60[1:, 1:]
    lnL_PICO60 -= lnL_PICO60.min()
    s_PICO2L = pico2L[1:, 0]
    m_PICO2L = pico2L[0, 1:]
    lnL_PICO2L = -pico2L[1:, 1:]
    lnL_PICO2L -= lnL_PICO2L.min()
    s_SIMPLE = simple[1:, 0]
    m_SIMPLE = simple[0, 1:]
    lnL_SIMPLE = -simple[1:, 1:]
    lnL_SIMPLE -= lnL_SIMPLE.min()

    #simple_lim = genfromtxt("./DarkBit/examples/limits/SIMPLE_2014_SDp.csv",delimiter=",")
    pico60_lim = genfromtxt("./DarkBit/examples/limits/PICO60_SDp_2015Oct16_90CL.csv",delimiter=",")
    pico2L_lim = genfromtxt("./DarkBit/examples/limits/PICO_2L_2016_SDp.txt")
    luxsd_lim = genfromtxt("./DarkBit/examples/limits/LUX_2013_SD_proton.txt")

 
    # I'm not sure about the CL in the SIMPLE analysis!
    #simple_plt = plt.contour(m_SIMPLE, s_SIMPLE, lnL_SIMPLE, levels = [2.71/2], colors='r')
    #simple_plt.collections[0].set_label("SIMPLE")
    lux_plt = plt.contour(m_LUX, s_LUX, lnL_LUX, levels = [2.71/2], colors='r')
    lux_plt.collections[0].set_label("LUX")
    pico60_plt = plt.contour(m_PICO60, s_PICO60, lnL_PICO60, levels = [2.71/2], colors='g')
    pico60_plt.collections[0].set_label("PICO 60")
    pico2L_plt = plt.contour(m_PICO2L, s_PICO2L, lnL_PICO2L, levels = [2.71/2], colors='k')
    pico2L_plt.collections[0].set_label("PICO 2L")

    #plt.plot(simple_lim[:,0],simple_lim[:,1]*10**-36,ls="--", color='r')
    plt.plot(luxsd_lim[:,0],luxsd_lim[:,1]*10**-36,ls="--", color='r')
    plt.plot(pico60_lim[:,0],pico60_lim[:,1]*10**-40,ls="--",color='g')
    plt.plot(pico2L_lim[:,0],pico2L_lim[:,1],ls="--",color='k')

    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=3,xmax=2000)
    plt.gca().set_ylim(ymin=10**-40,ymax=10**-37)
    plt.gca().tick_params(which='both', direction='in',bottom='on',top='on',left='on',right='on')

    plt.xlabel(r'$m_\chi$ [GeV]')
    plt.ylabel(r'$\sigma_{{\rm SD},p}$ [${\rm cm^2}$]')
    #plt.legend(loc='best',frameon=False,fontsize='medium')
    plt.legend(bbox_to_anchor=(.45,.65),frameon=False,fontsize='medium')

    #plt.show()
    plt.savefig("DarkBit_SD_sigma_m.eps",bbox_inches="tight")


def plotMSSM7():
    data = genfromtxt("runs/MSSM7/samples/runs/MSSM7/samples/MSSM7.hdf5_0")[2]
    mwimp = data[49]
    oh2 = data[47]
    sigma_SI_p, sigma_SI_n, sigma_SD_p, sigma_SD_n = data[51:55]
    sigmav = data[50]
    print mwimp, oh2, sigma_SI_p, sigmav


def spokePlots():

    import matplotlib
    matplotlib.style.use('classic')
    matplotlib.rcParams['mathtext.fontset'] = 'stix'
    matplotlib.rcParams['font.family'] = 'STIXGeneral'
    matplotlib.rcParams['font.size'] = 15

    # Arrows option doesn't work quite right for log plots yet
    arrows_opt = False

#    SingletDM1_1 = genfromtxt("DarkBit/examples/runs/DarkBitSpokeSingletDM/samples/SingletDM1.out_0")
    SingletDM1_1 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/Small_mS.out_0")
    SingletDM1_1_param = r'$m_S$'
#    SingletDM1_2 = genfromtxt("DarkBit/examples/runs/DarkBitSpokeSingletDM/samples/SingletDM2.out_0")
    SingletDM1_2 = genfromtxt("runs/DarkBitSpokeSingletDM/samples/Small_lambda_hs.out_0")
    SingletDM1_2_param = r'$\lambda$'

    #MSSM1_1=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/M2.out_0")
    MSSM1_1=genfromtxt("runs/MSSM7_spoke/samples/M2.txt_0")
    MSSM1_1_param = r'$M_2$'
    #MSSM1_2=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/mHd2.out_0")
    #MSSM1_2=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/mHu2.out_0")
    #MSSM1_2=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/TanBeta.out_0")
    #MSSM1_2=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/M1.out_0")
    #MSSM1_2=genfromtxt("DarkBit/examples/runs/MSSM9/JE56C_003717/samples/mf2.out_0")
    MSSM1_2=genfromtxt("runs/MSSM7_spoke/samples/mHd2.txt_0")
    #MSSM1_2_param = r'$M_1$'
    MSSM1_2_param = r'${M_{H_d}}^2$'

    #CMSSM1_1 = genfromtxt("DarkBit/examples/runs/CMSSM/FMCp03000765/samples/M12.out_0")
    CMSSM1_1 = genfromtxt("runs/CMSSM_spoke/samples/M12.txt_0")
    CMSSM1_1_param = r'$M_{1/2}$'
    #CMSSM1_2 = genfromtxt("DarkBit/examples/runs/CMSSM/FMCp03000765/samples/TanBeta.out_0")
    #CMSSM1_2 = genfromtxt("DarkBit/examples/runs/CMSSM/FMCp03000765/samples/M0_flat.out_0")
    #CMSSM1_2 = genfromtxt("DarkBit/examples/runs/CMSSM/FMCp03000765/samples/A0.out_0")
    CMSSM1_2 = genfromtxt("runs/CMSSM_spoke/samples/M0.txt_0")
    CMSSM1_2_param = r'$M_0$'

    mwimp_SingletDM1_1 = SingletDM1_1[:,50]
    mwimp_SingletDM1_2 = SingletDM1_2[:,50]
    sigma_SI_p_SingletDM1_1 = SingletDM1_1[:,52]
    sigma_SI_p_SingletDM1_2 = SingletDM1_2[:,52]
    sigma_SD_p_SingletDM1_1 = SingletDM1_1[:,54]
    sigma_SD_p_SingletDM1_2 = SingletDM1_2[:,54]
    sigmav_SingletDM1_1 = SingletDM1_1[:,51]
    sigmav_SingletDM1_2 = SingletDM1_2[:,51]
    LUXlnL_SingletDM1_1 = SingletDM1_1[:,57]
    LUXlnL_SingletDM1_2 = SingletDM1_2[:,57]
    FermiDwarflnL_SingletDM1_1 = SingletDM1_1[:,48]
    FermiDwarflnL_SingletDM1_2 = SingletDM1_2[:,48]
    IceCubelnL_SingletDM1_1 = SingletDM1_1[:,58]
    IceCubelnL_SingletDM1_2 = SingletDM1_2[:,58]
    RD_oh2_SingletDM1_1 = SingletDM1_1[:,47]
    RD_oh2_SingletDM1_2 = SingletDM1_2[:,47]
    lnL_oh2_SingletDM1_1 = SingletDM1_1[:,49]
    lnL_oh2_SingletDM1_2 = SingletDM1_2[:,49]

    mwimp_MSSM1_1 = MSSM1_1[:,56]
    mwimp_MSSM1_2 = MSSM1_2[:,56]
    sigma_SI_p_MSSM1_1 = MSSM1_1[:,58]
    sigma_SI_p_MSSM1_2 = MSSM1_2[:,58]
    sigma_SD_p_MSSM1_1 = MSSM1_1[:,59]
    sigma_SD_p_MSSM1_2 = MSSM1_2[:,59]
    sigmav_MSSM1_1 = MSSM1_1[:,57]
    sigmav_MSSM1_2 = MSSM1_2[:,57]
    LUXlnL_MSSM1_1 = MSSM1_1[:,60]
    LUXlnL_MSSM1_2 = MSSM1_2[:,60]
    FermiDwarflnL_MSSM1_1 = MSSM1_1[:,54]
    FermiDwarflnL_MSSM1_2 = MSSM1_2[:,54]
    IceCubelnL_MSSM1_1 = MSSM1_1[:,61]
    IceCubelnL_MSSM1_2 = MSSM1_2[:,61]
    RD_oh2_MSSM1_1 = MSSM1_1[:,53]
    RD_oh2_MSSM1_2 = MSSM1_2[:,53]
    lnL_oh2_MSSM1_1 = MSSM1_1[:,55]
    lnL_oh2_MSSM1_2 = MSSM1_2[:,55]        

    mwimp_CMSSM1_1 = CMSSM1_1[:,52]
    mwimp_CMSSM1_2 = CMSSM1_2[:,52]
    sigma_SI_p_CMSSM1_1 = CMSSM1_1[:,54]
    sigma_SI_p_CMSSM1_2 = CMSSM1_2[:,54]
    sigma_SD_p_CMSSM1_1 = CMSSM1_1[:,55]
    sigma_SD_p_CMSSM1_2 = CMSSM1_2[:,55]
    sigmav_CMSSM1_1 = CMSSM1_1[:,53]
    sigmav_CMSSM1_2 = CMSSM1_2[:,53]
    LUXlnL_CMSSM1_1 = CMSSM1_1[:,56]
    LUXlnL_CMSSM1_2 = CMSSM1_2[:,56]
    FermiDwarflnL_CMSSM1_1 = CMSSM1_1[:,50]
    FermiDwarflnL_CMSSM1_2 = CMSSM1_2[:,50]
    IceCubelnL_CMSSM1_1 = CMSSM1_1[:,57]
    IceCubelnL_CMSSM1_2 = CMSSM1_2[:,57]
    RD_oh2_CMSSM1_1 = CMSSM1_1[:,49]
    RD_oh2_CMSSM1_2 = CMSSM1_2[:,49]
    lnL_oh2_CMSSM1_1 = CMSSM1_1[:,51]
    lnL_oh2_CMSSM1_2 = CMSSM1_2[:,51] 

    # Spin Independent Direct Detection
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    cmax = max(concatenate((LUXlnL_SingletDM1_1,LUXlnL_SingletDM1_2,
        LUXlnL_MSSM1_1,LUXlnL_MSSM1_2,LUXlnL_CMSSM1_1,LUXlnL_CMSSM1_2)))
    cmin = max(min(concatenate((LUXlnL_SingletDM1_1,LUXlnL_SingletDM1_2,
        LUXlnL_MSSM1_1,LUXlnL_MSSM1_2,LUXlnL_CMSSM1_2,LUXlnL_CMSSM1_2))),cmax-21)
    plt.plot(mwimp_SingletDM1_1,sigma_SI_p_SingletDM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_SingletDM1_2,sigma_SI_p_SingletDM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_SingletDM1_1, sigma_SI_p_SingletDM1_1, [2,7])
        arrows(mwimp_SingletDM1_2, sigma_SI_p_SingletDM1_2, [2,7])
    plt.plot(mwimp_MSSM1_1,sigma_SI_p_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,sigma_SI_p_MSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_MSSM1_1,sigma_SI_p_MSSM1_1, [3])
        arrows(mwimp_MSSM1_2,sigma_SI_p_MSSM1_2, [8])
    plt.plot(mwimp_CMSSM1_1,sigma_SI_p_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigma_SI_p_CMSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_CMSSM1_1,sigma_SI_p_CMSSM1_1, [2,7])
        arrows(mwimp_CMSSM1_2,sigma_SI_p_CMSSM1_2, [2,7])

    sc1 = ax1.scatter(concatenate((mwimp_SingletDM1_1,mwimp_SingletDM1_2)),
        concatenate((sigma_SI_p_SingletDM1_1,sigma_SI_p_SingletDM1_2)),
        c=concatenate((LUXlnL_SingletDM1_1,LUXlnL_SingletDM1_2)),
        s=40,zorder=2,edgecolors="none",marker="o",label="Singlet DM")
    sc2 = ax1.scatter(concatenate((mwimp_MSSM1_1, mwimp_MSSM1_2)),
        concatenate((sigma_SI_p_MSSM1_1,sigma_SI_p_MSSM1_2)),
        c=concatenate((LUXlnL_MSSM1_1,LUXlnL_MSSM1_2)),
        s=40,zorder=2,edgecolors="none",marker="s", label="MSSM 7")
    sc3 = ax1.scatter(concatenate((mwimp_CMSSM1_1,mwimp_CMSSM1_2)),
        concatenate((sigma_SI_p_CMSSM1_1,sigma_SI_p_CMSSM1_2)),
        c=concatenate((LUXlnL_CMSSM1_1,LUXlnL_CMSSM1_2)),
        s=40,zorder=2,edgecolors="none",marker="^", label="CMSSM")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit curves
    limit = genfromtxt("DarkBit/examples/limits/LUX_2013_85d_118kg_SI_95CL.txt")
    plt.plot(limit[:,0],limit[:,1]*10**-36,label="LUX 2013 95% CL")

    # Axes, legend, and colorbar
    plt.xlabel(r'$m_\chi$ [GeV]')
    plt.ylabel(r'$\sigma_{{\rm SI},p}$ [${\rm cm^2}$]')
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=60,xmax=500)
    plt.gca().set_ylim(ymin=3*10**-47,ymax=3*10**-43)
    plt.gca().set_xticks([60,70,80,90,100,200,300,400,500])
    plt.gca().set_xticklabels(["60","","80","","100","200","300","400","500"])
    plt.text(mwimp_SingletDM1_1[8]*1.05,sigma_SI_p_SingletDM1_1[8]*1.05,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1_2[8]*1.05,sigma_SI_p_SingletDM1_2[8]*1.05,SingletDM1_2_param)
    plt.text(mwimp_MSSM1_1[1]*1.05,sigma_SI_p_MSSM1_1[1]*.95,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[9]*1.05,sigma_SI_p_MSSM1_2[9]*.9,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[6]*1.05,sigma_SI_p_CMSSM1_1[6]*1.05,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[8]*1.05,sigma_SI_p_CMSSM1_2[8]*1.05,CMSSM1_2_param)
    cbar = plt.colorbar(sc1)
    cbar.set_label(r'$\ln \, \mathcal{L}_{\rm LUX}$')
    plt.legend(loc="best",frameon=False,fontsize='medium')

    plt.savefig("SI_DD_Spokes.eps")
    plt.show()

    # # Spin Dependent Direct Detection
    # plt.clf()  
    # fig = plt.figure()
    # ax1 = fig.add_subplot(111)

    # # Spokes
    # #cmin = min(concatenate((SIMPLE_MSSM1)))
    # #cmax = max(concatenate((SIMPLE_MSSM1)))
    # cmax = max(concatenate((SIMPLE_MSSM1,SIMPLE_CMSSM1)))
    # #cmin = max(min(concatenate((SIMPLE_MSSM1))),(cmax-1)*10**2)
    # cmin = max(min(concatenate((SIMPLE_MSSM1,SIMPLE_CMSSM1))),(cmax-1)*10**2)

    # plt.plot(mwimp_MSSM1[:9],sigma_SD_p_MSSM1[:9],c="k",zorder=1,ls="-")
    # plt.plot(mwimp_MSSM1[9:],sigma_SD_p_MSSM1[9:],c="k",zorder=1,ls="--")
    # plt.plot(mwimp_CMSSM1[:9],sigma_SD_p_CMSSM1[:9],c="k",zorder=1,ls="-")
    # plt.plot(mwimp_CMSSM1[9:],sigma_SD_p_CMSSM1[9:],c="k",zorder=1,ls="--")    
    # sc1 = ax1.scatter(mwimp_MSSM1,sigma_SD_p_MSSM1,c=SIMPLE_MSSM1,
    #     s=40,zorder=2,edgecolors="none",marker="s",label="MSSM 11")
    # sc2 = ax1.scatter(mwimp_CMSSM1,sigma_SD_p_CMSSM1,c=SIMPLE_CMSSM1,
    #     s=40,zorder=2,edgecolors="none",marker="^",label="cMSSM")
    # sc1.set_clim([cmin,cmax])
    # sc2.set_clim([cmin,cmax])

    # # Limit curves
    # limit = genfromtxt("DarkBit/examples/SIMPLE_2011_PhaseII_SDp.txt")
    # plt.plot(limit[:,0],limit[:,1]*10**-36,label="SIMPLE 2011")

    # # Axes, legend, and colorbar
    # plt.xlabel("m [GeV]")
    # plt.ylabel("sigma_SD_p [cm^2]")
    # plt.gca().set_xscale('log')
    # plt.gca().set_yscale('log')
    # plt.gca().set_xlim(xmin=5,xmax=3000)
    # #plt.gca().set_ylim(ymin=10**-41,ymax=10**-31)
    # plt.text(mwimp_MSSM1[1]*1.1,sigma_SD_p_MSSM1[1]*1.1,MSSM1_1_param)
    # plt.text(mwimp_MSSM1[10]*1.1,sigma_SD_p_MSSM1[10]*1.1,MSSM1_2_param)
    # plt.text(mwimp_CMSSM1[1]*1.1,sigma_SD_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    # plt.text(mwimp_CMSSM1[10]*1.1,sigma_SD_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    # cbar = plt.colorbar(sc1)
    # cbar.set_label('ln L_SIMPLE')
    # plt.legend()

    # plt.savefig("SD_DD.eps")
    # plt.show()

    # Ice Cube
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    #cmin = min(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1)))
    cmax = max(concatenate((IceCubelnL_MSSM1_1,IceCubelnL_MSSM1_2,IceCubelnL_CMSSM1_1,IceCubelnL_CMSSM1_2)))
    cmin = max(min(concatenate((IceCubelnL_MSSM1_1,IceCubelnL_MSSM1_2,IceCubelnL_CMSSM1_1,IceCubelnL_CMSSM1_2))),cmax-21)
    plt.plot(mwimp_MSSM1_1,sigma_SD_p_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,sigma_SD_p_MSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_MSSM1_1, sigma_SD_p_MSSM1_1, [3])
        arrows(mwimp_MSSM1_2, sigma_SD_p_MSSM1_2, [8])
    plt.plot(mwimp_CMSSM1_1,sigma_SD_p_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigma_SD_p_CMSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_CMSSM1_1, sigma_SD_p_CMSSM1_1, [2,7])
        arrows(mwimp_CMSSM1_2, sigma_SD_p_CMSSM1_2, [2,7])
    sc2 = ax1.scatter(concatenate((mwimp_MSSM1_1,mwimp_MSSM1_2)),
        concatenate((sigma_SD_p_MSSM1_1,sigma_SD_p_MSSM1_2)),
        c=concatenate((IceCubelnL_MSSM1_1,IceCubelnL_MSSM1_2)),s=40,zorder=2,
        edgecolors="none",marker="s",label="MSSM 7")
    sc3 = ax1.scatter(concatenate((mwimp_CMSSM1_1,mwimp_CMSSM1_2)),
        concatenate((sigma_SD_p_CMSSM1_1,sigma_SD_p_CMSSM1_2)),
        c=concatenate((IceCubelnL_CMSSM1_1,IceCubelnL_CMSSM1_2)),
        s=40,zorder=2,edgecolors="none",marker="^",label="CMSSM")
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit curves
    bbSD = genfromtxt("DarkBit/examples/limits/IC79_bb_SD.dat", comments="#")
    tautauSD = genfromtxt("DarkBit/examples/limits/IC79_tautau_SD.dat", comments="#")
    plt.plot(bbSD[:,0],bbSD[:,2], label=r"IceCube 79 $\barb b$ 90% CL")
    plt.plot(tautauSD[:,0],tautauSD[:,2], label=r"IceCube 79 $\tau^+ \tau^-$ 90% CL")
    
    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label(r'$\ln \mathcal{L}_{\rm IceCube}$')
    plt.xlabel(r"$m_\chi$ [GeV]")
    plt.ylabel(r"$\sigma_{{\rm SD},p}$ ${\rm [cm^2]}$")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=60,xmax=500)
    plt.gca().set_ylim(ymin=3*10**-42,ymax=10**-37)
    plt.gca().set_xticks([60,70,80,90,100,200,300,400,500])
    plt.gca().set_xticklabels(["60","","80","","100","200","300","400","500"])
    plt.text(mwimp_MSSM1_1[3]*.87,sigma_SD_p_MSSM1_1[3]*1.05,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[10]*1.05,sigma_SD_p_MSSM1_2[10]*.8,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[0]*1.05,sigma_SD_p_CMSSM1_1[0]*1.05,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[8]*1.05,sigma_SD_p_CMSSM1_2[8]*1.05,CMSSM1_2_param)
    plt.legend(loc="best",ncol=2,frameon=False,fontsize='medium')

    plt.savefig("IC_Spokes.eps")
    plt.show()

    # Fermi Dwarf Galaxy Limits
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
    #cmin = min(concatenate((FermiDwarflnL_SingletDM1,FermiDwarflnL_MSSM1)))
    cmax = max(concatenate((FermiDwarflnL_SingletDM1_1,FermiDwarflnL_SingletDM1_2,
        FermiDwarflnL_MSSM1_1,FermiDwarflnL_MSSM1_2,FermiDwarflnL_CMSSM1_1,FermiDwarflnL_CMSSM1_2)))
    cmin = max(min(concatenate((FermiDwarflnL_SingletDM1_1,FermiDwarflnL_SingletDM1_2,
        FermiDwarflnL_MSSM1_1,FermiDwarflnL_MSSM1_2,FermiDwarflnL_CMSSM1_1,FermiDwarflnL_CMSSM1_2))),cmax-21)
    plt.plot(mwimp_SingletDM1_1,sigmav_SingletDM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_SingletDM1_2,sigmav_SingletDM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_SingletDM1_1,sigmav_SingletDM1_1,[2,7])
        arrows(mwimp_SingletDM1_2,sigmav_SingletDM1_2,[2,7])
    plt.plot(mwimp_MSSM1_1,sigmav_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,sigmav_MSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_MSSM1_1,sigmav_MSSM1_1,[2,8])
        arrows(mwimp_MSSM1_2,sigmav_MSSM1_2,[2,8])
    plt.plot(mwimp_CMSSM1_1,sigmav_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigmav_CMSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_CMSSM1_1,sigmav_CMSSM1_1,[2,7])
        arrows(mwimp_CMSSM1_2,sigmav_CMSSM1_2,[2,7])
    sc1 = ax1.scatter(concatenate((mwimp_SingletDM1_1,mwimp_SingletDM1_2)),
        concatenate((sigmav_SingletDM1_1,sigmav_SingletDM1_2)),
        c=concatenate((FermiDwarflnL_SingletDM1_1,FermiDwarflnL_SingletDM1_2)),
        s=40,zorder=2,edgecolors="none",label="Singlet DM",marker="o")
    sc2 = ax1.scatter(concatenate((mwimp_MSSM1_1,mwimp_MSSM1_2)),
        concatenate((sigmav_MSSM1_1,sigmav_MSSM1_2)),
        c=concatenate((FermiDwarflnL_MSSM1_1,FermiDwarflnL_MSSM1_2)),
        s=40,zorder=2,edgecolors="none",label="MSSM 7",marker="s")
    sc3 = ax1.scatter(concatenate((mwimp_CMSSM1_1,mwimp_CMSSM1_2)),
        concatenate((sigmav_CMSSM1_1,sigmav_CMSSM1_2)),
        c=concatenate((FermiDwarflnL_CMSSM1_1,FermiDwarflnL_CMSSM1_2)),
        s=40,zorder=2,edgecolors="none",label="CMSSM",marker="^")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])

    # Limit Curves
    bb = genfromtxt("DarkBit/examples/limits/FermiLAT_limits_bb.txt")
    tautau = genfromtxt("DarkBit/examples/limits/FermiLAT_limits_tautau.txt")
    plt.plot(bb[:,0],bb[:,26], label=r"Fermi 2015 $\bar b b$ 95% CL")
    plt.plot(tautau[:,0],tautau[:,26],label=r"Fermi 2015 $\tau^+ \tau^-$ 95% CL")

    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label(r"$\ln \, \mathcal{L}_{\rm Fermi}$")
    plt.xlabel(r"$m_\chi$ [GeV]")
    plt.ylabel(r"$\langle \sigma v \rangle$ ${\rm [cm^3 / s]}$")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=60,xmax=500)
    plt.gca().set_ylim(ymin=10**-28,ymax=10**-24)
    plt.gca().set_xticks([60,70,80,90,100,200,300,400,500])
    plt.gca().set_xticklabels(["60","","80","","100","200","300","400","500"])
    plt.text(mwimp_SingletDM1_1[8]*1.05,sigmav_SingletDM1_1[8]*1.05,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1_2[8]*1.05,sigmav_SingletDM1_2[8]*1.05,SingletDM1_2_param)
    plt.text(mwimp_MSSM1_1[4]*.85,sigmav_MSSM1_1[4]*1.05,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[10]*1.05,sigmav_MSSM1_2[10]*.8,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[1]*1,sigmav_CMSSM1_1[1]*1.08,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[7]*1.05,sigmav_CMSSM1_2[7]*1.05,CMSSM1_2_param)
    plt.legend(loc="best",frameon=False,fontsize='medium')

    plt.savefig("Fermi_Spokes.eps")
    plt.show()

    # Relic Density
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

     # Spokes

    cmax = max(concatenate((lnL_oh2_SingletDM1_1,lnL_oh2_SingletDM1_2,lnL_oh2_MSSM1_1,lnL_oh2_MSSM1_2,lnL_oh2_CMSSM1_1,lnL_oh2_CMSSM1_2)))
    cmin = max(min(concatenate((lnL_oh2_SingletDM1_1,lnL_oh2_SingletDM1_2,lnL_oh2_MSSM1_1,lnL_oh2_MSSM1_2,lnL_oh2_CMSSM1_1,lnL_oh2_CMSSM1_2))),cmax-21)
    plt.plot(mwimp_SingletDM1_1,RD_oh2_SingletDM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_SingletDM1_2,RD_oh2_SingletDM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_SingletDM1_1,RD_oh2_SingletDM1_1,[2,7])
        arrows(mwimp_SingletDM1_2,RD_oh2_SingletDM1_2,[2,7])
    plt.plot(mwimp_MSSM1_1,RD_oh2_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,RD_oh2_MSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_MSSM1_1,RD_oh2_MSSM1_1,[2,7])
        arrows(mwimp_MSSM1_2,RD_oh2_MSSM1_2,[2,7])
    plt.plot(mwimp_CMSSM1_1,RD_oh2_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,RD_oh2_CMSSM1_2,c='k',zorder=1,ls="--")
    if arrows_opt == True:
        arrows(mwimp_CMSSM1_1,RD_oh2_CMSSM1_1,[2,7])
        arrows(mwimp_CMSSM1_2,RD_oh2_CMSSM1_2,[2,7])
    sc1 = ax1.scatter(concatenate((mwimp_SingletDM1_1,mwimp_SingletDM1_2)),
        concatenate((RD_oh2_SingletDM1_1,RD_oh2_SingletDM1_2)),
        c=concatenate((lnL_oh2_SingletDM1_1,lnL_oh2_SingletDM1_2)),
        s=40,zorder=2,edgecolors="none",label="Singlet DM",marker="o")
    sc2 = ax1.scatter(concatenate((mwimp_MSSM1_1,mwimp_MSSM1_2)),
        concatenate((RD_oh2_MSSM1_1,RD_oh2_MSSM1_2)),
        c=concatenate((lnL_oh2_MSSM1_1,lnL_oh2_MSSM1_2)),s=40,zorder=2,
        edgecolors="none",marker="s",label="MSSM 7")
    sc3 = ax1.scatter(concatenate((mwimp_CMSSM1_1,mwimp_CMSSM1_2)),
        concatenate((RD_oh2_CMSSM1_1,RD_oh2_CMSSM1_2)),
        c=concatenate((lnL_oh2_CMSSM1_1,lnL_oh2_CMSSM1_2)),
        s=40,zorder=2,edgecolors="none",marker="^",label="CMSSM")
    sc1.set_clim([cmin,cmax])
    sc2.set_clim([cmin,cmax])
    sc3.set_clim([cmin,cmax])


    # Planck best fit + error bars
    l1=plt.plot((.1,10**10),(.1188,.1188),color='black',label=r"Planck 2015 $\Omega h^2$")

    ax1.fill_between((.1,10**10),(.1178,.1178),(.1198,.1198), facecolor='LightGreen',edgecolor='LightGreen')
    l2=ax1.fill_between((.1,10**10),(.1198,.1198),(.1208,.1208), facecolor='yellow',edgecolor='yellow', label=r"Planck $\Omega h^2$ $2 \sigma$")
    ax1.fill_between((.1,10**10),(.1168,.1168),(.1178,.1178), facecolor='yellow',edgecolor='yellow')

    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label(r"$\ln \, \mathcal{L}_{\rm Planck}$")
    plt.xlabel(r"$m_\chi$ [GeV]")
    plt.ylabel(r"$\Omega h^2$")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=60,xmax=500)
    plt.gca().set_ylim(ymin=0.01,ymax=5.)
    plt.gca().set_xticks([60,70,80,90,100,200,300,400,500])
    plt.gca().set_xticklabels(["60","","80","","100","200","300","400","500"])
    plt.text(mwimp_SingletDM1_1[9]*1.05,RD_oh2_SingletDM1_1[9]*.85,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1_2[3]*1.05,RD_oh2_SingletDM1_2[3]*1.05,SingletDM1_2_param)
    plt.text(mwimp_MSSM1_1[2]*1.05,RD_oh2_MSSM1_1[2]*1.05,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[2]*.85,RD_oh2_MSSM1_2[3]*1,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[2]*.85,RD_oh2_CMSSM1_1[2]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[8]*1.05,RD_oh2_CMSSM1_2[8]*1,CMSSM1_2_param)
    plt.legend(handles=[sc1,sc2,sc3,l1[0],l2],loc="best",ncol=2,frameon=False,fontsize='medium')

    plt.savefig("RD_Spokes.eps")
    plt.show()

# Adds arrows along spokes
# x: array of x values of data points
# y: array of y values of data points
# points: data points where arrows appear
# Needs to be modified to work correctly on log plots
def arrows(x, y, points):
    for i in points:
        norm = sqrt((x[i+1] - x[i])**2 + (y[i+1] - y[i])**2)
        plt.quiver(x[i],y[i], (x[i+1] - x[i])/norm, (y[i+1] - y[i])/norm,
            angles='xy', scale_units='inches', scale=7, headwidth=9, headaxislength=3)


if __name__ == '__main__':
    #plotMSSM7()
    spokePlots()
    #plotLimits()
    #plotSpectraValidation()
    #plotSpectraCascade()
    #plotLUX()
