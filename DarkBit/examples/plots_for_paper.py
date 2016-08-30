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
    plt.xlim([10,3000])
    plt.ylim([1e-27, 1e-23])
    plt.legend(loc="best",frameon=False,fontsize='medium')

    #plt.tight_layout(pad=0.3)
    plt.savefig("DarkBit_limits.eps",bbox_inches="tight")

def plotLUX():

    import matplotlib
    matplotlib.rcParams['mathtext.fontset'] = 'stix'
    matplotlib.rcParams['font.family'] = 'STIXGeneral'
    matplotlib.rcParams['font.size'] = 15

    #data = loadtxt("../LUX2013_table.dat")
    # lnL(m, gps)
    data_lnL = loadtxt("../LUX2013_table.dat")
    # sigma_SI,p(m, gps)
    data_sigmaSIp = loadtxt("../sigmaSIp_table.dat")
    #s = data[1:, 0]
    #m = data[0, 1:]
    #lnL = -data[1:, 1:]
    #lnL -= lnL.min()
    lnL = -data_lnL[1:, 1:]
    lnL -= lnL.min()
    m = data_lnL[0, 1:]
    gps = data_lnL[1:,0]
    sigma = data_sigmaSIp[1:, 1:]
    m_grid = tile(m,(gps.size,1))

    # Exclusion plot in m/gps plane
    plt.contour(m, gps, lnL, levels = [2.71], colors='r')

    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')

    plt.xlabel("m [GeV]")
    plt.ylabel("gps [GeV-2]")
    plt.tight_layout(pad=0.3)
    plt.savefig("DarkBit_LUX2013_gps_m.eps")


    # Exclusion plot in m/sigma_SI,p plane
    plt.clf()
    plt.figure(figsize=(5, 4))

    # Interpolate likelihood into m/sigma_SI,p plane
    mi = logspace(log10(min(m)), log10(max(m)), num=100, base=10)
    sigmai = logspace(log10(min(sigma[:,-1])), log10(max(sigma[:,0])), num=80, base=10)
    lnL_interp=griddata((m_grid.flatten(),sigma.flatten()),lnL.flatten(),(mi[None,:],sigmai[:,None]),rescale=True,method='nearest')

    limit = genfromtxt("../DarkBit/examples/LUX_2013_85d_118kg_SI_95CL.txt")

    gambit = plt.contour(mi, sigmai, lnL_interp, levels = [2.71], colors='r')
    gambit.collections[0].set_label("DarkBit")
    plt.plot(limit[:,0],limit[:,1]*10**-36,label="Official",ls="--")
    
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    plt.gca().set_xlim(xmin=2,xmax=2000)
    plt.gca().set_ylim(ymin=10**-46,ymax=10**-39)
    
    plt.xlabel(r'$m_\chi$ [GeV]')
    plt.ylabel(r'$\sigma_{{\rm SI},N}$ [${\rm cm^2}$]')
    plt.legend(loc="best",frameon=False,fontsize='medium')
    plt.title("LUX 2013 95% CL")

    plt.savefig("DarkBit_LUX2013_sigma_m.eps",bbox_inches="tight")


def plotMSSM7():
    data = genfromtxt("runs/MSSM7/samples/runs/MSSM7/samples/MSSM7.hdf5_0")[2]
    mwimp = data[49]
    oh2 = data[47]
    sigma_SI_p, sigma_SI_n, sigma_SD_p, sigma_SD_n = data[51:55]
    sigmav = data[50]
    print mwimp, oh2, sigma_SI_p, sigmav


def spokePlots():

    import matplotlib
    matplotlib.rcParams['mathtext.fontset'] = 'stix'
    matplotlib.rcParams['font.family'] = 'STIXGeneral'
    matplotlib.rcParams['font.size'] = 15

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
    MSSM1_2=genfromtxt("runs/MSSM7_spoke/samples/Mhd2.txt_0")
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

    # mwimp_SingletDM1 = concatenate((SingletDM1_1[:,46], SingletDM1_2[:,46]))
    # sigma_SI_p_SingletDM1 = concatenate((SingletDM1_1[:,48], SingletDM1_2[:,48]))
    # sigma_SD_SingletDM1 = concatenate((SingletDM1_1[:,50], SingletDM1_2[:,50]))
    # sigmav_SingletDM1 = concatenate((SingletDM1_1[:,47], SingletDM1_2[:,47]))
    # LUXlnL_SingletDM1 = concatenate((SingletDM1_1[:,53], SingletDM1_2[:,53]))
    # FermiDwarflnL_SingletDM1 = concatenate((SingletDM1_1[:,44], SingletDM1_2[:,44]))
    # IceCubelnL_SingletDM1 = concatenate((SingletDM1_1[:,54], SingletDM1_2[:,54]))

    mwimp_SingletDM1_1 = SingletDM1_1[:,51]
    mwimp_SingletDM1_2 = SingletDM1_2[:,51]
    sigma_SI_p_SingletDM1_1 = SingletDM1_1[:,53]
    sigma_SI_p_SingletDM1_2 = SingletDM1_2[:,53]
    sigma_SD_p_SingletDM1_1 = SingletDM1_1[:,55]
    sigma_SD_p_SingletDM1_2 = SingletDM1_2[:,55]
    sigmav_SingletDM1_1 = SingletDM1_1[:,52]
    sigmav_SingletDM1_2 = SingletDM1_2[:,52]
    LUXlnL_SingletDM1_1 = SingletDM1_1[:,58]
    LUXlnL_SingletDM1_2 = SingletDM1_2[:,58]
    FermiDwarflnL_SingletDM1_1 = SingletDM1_1[:,49]
    FermiDwarflnL_SingletDM1_2 = SingletDM1_2[:,49]
    IceCubelnL_SingletDM1_1 = SingletDM1_1[:,59]
    IceCubelnL_SingletDM1_2 = SingletDM1_2[:,59]
    RD_oh2_SingletDM1_1 = SingletDM1_1[:,48]
    RD_oh2_SingletDM1_2 = SingletDM1_2[:,48]
    lnL_oh2_SingletDM1_1 = SingletDM1_1[:,50]
    lnL_oh2_SingletDM1_2 = SingletDM1_2[:,50]

    # mwimp_MSSM1 = concatenate((MSSM1_1[:,54], MSSM1_2[:,54]))
    # sigma_SI_p_MSSM1 = concatenate((MSSM1_1[:,56], MSSM1_2[:,56]))
    # sigma_SD_p_MSSM1 = concatenate((MSSM1_1[:,58], MSSM1_2[:,58]))
    # sigmav_MSSM1 = concatenate((MSSM1_1[:,55], MSSM1_2[:,55]))
    # LUXlnL_MSSM1 = concatenate((MSSM1_1[:,61], MSSM1_2[:,61]))
    # FermiDwarflnL_MSSM1 = concatenate((MSSM1_1[:,52], MSSM1_2[:,52]))
    # SIMPLE_MSSM1 = concatenate((MSSM1_1[:,62], MSSM1_2[:,62]))
    # IceCubelnL_MSSM1 = concatenate((MSSM1_1[:,63], MSSM1_2[:,63]))

    # mwimp_MSSM1 = concatenate((MSSM1_1[:,57], MSSM1_2[:,57]))
    # sigma_SI_p_MSSM1 = concatenate((MSSM1_1[:,59], MSSM1_2[:,59]))
    # sigma_SD_p_MSSM1 = concatenate((MSSM1_1[:,60], MSSM1_2[:,60]))
    # sigmav_MSSM1 = concatenate((MSSM1_1[:,58], MSSM1_2[:,58]))
    # LUXlnL_MSSM1 = concatenate((MSSM1_1[:,61], MSSM1_2[:,61]))
    # FermiDwarflnL_MSSM1 = concatenate((MSSM1_1[:,55], MSSM1_2[:,55]))
    # IceCubelnL_MSSM1 = concatenate((MSSM1_1[:,62], MSSM1_2[:,62]))

    mwimp_MSSM1_1 = MSSM1_1[:,57]
    mwimp_MSSM1_2 = MSSM1_2[:,57]
    sigma_SI_p_MSSM1_1 = MSSM1_1[:,59]
    sigma_SI_p_MSSM1_2 = MSSM1_2[:,59]
    sigma_SD_p_MSSM1_1 = MSSM1_1[:,60]
    sigma_SD_p_MSSM1_2 = MSSM1_2[:,60]
    sigmav_MSSM1_1 = MSSM1_1[:,58]
    sigmav_MSSM1_2 = MSSM1_2[:,58]
    LUXlnL_MSSM1_1 = MSSM1_1[:,61]
    LUXlnL_MSSM1_2 = MSSM1_2[:,61]
    FermiDwarflnL_MSSM1_1 = MSSM1_1[:,55]
    FermiDwarflnL_MSSM1_2 = MSSM1_2[:,55]
    IceCubelnL_MSSM1_1 = MSSM1_1[:,62]
    IceCubelnL_MSSM1_2 = MSSM1_2[:,62]
    RD_oh2_MSSM1_1 = MSSM1_1[:,54]
    RD_oh2_MSSM1_2 = MSSM1_2[:,54]
    lnL_oh2_MSSM1_1 = MSSM1_1[:,56]
    lnL_oh2_MSSM1_2 = MSSM1_2[:,56]        

    # mwimp_CMSSM1 = concatenate((CMSSM1_1[:,48], CMSSM1_2[:,48]))
    # sigma_SI_p_CMSSM1 = concatenate((CMSSM1_1[:,50], CMSSM1_2[:,50]))
    # sigma_SD_p_CMSSM1 = concatenate((CMSSM1_1[:,52], CMSSM1_2[:,52]))
    # sigmav_CMSSM1 = concatenate((CMSSM1_1[:,49], CMSSM1_2[:,49]))
    # LUXlnL_CMSSM1 = concatenate((CMSSM1_1[:,55], CMSSM1_2[:,55]))
    # FermiDwarflnL_CMSSM1 = concatenate((CMSSM1_1[:,46], CMSSM1_2[:,46]))
    # SIMPLE_CMSSM1 = concatenate((CMSSM1_1[:,56], CMSSM1_2[:,56]))
    # IceCubelnL_CMSSM1 = concatenate((CMSSM1_1[:,57], CMSSM1_2[:,57]))

    # mwimp_CMSSM1 = concatenate((CMSSM1_1[:,53], CMSSM1_2[:,53]))
    # sigma_SI_p_CMSSM1 = concatenate((CMSSM1_1[:,55], CMSSM1_2[:,55]))
    # sigma_SD_p_CMSSM1 = concatenate((CMSSM1_1[:,56], CMSSM1_2[:,56]))
    # sigmav_CMSSM1 = concatenate((CMSSM1_1[:,54], CMSSM1_2[:,54]))
    # LUXlnL_CMSSM1 = concatenate((CMSSM1_1[:,57], CMSSM1_2[:,57]))
    # FermiDwarflnL_CMSSM1 = concatenate((CMSSM1_1[:,51], CMSSM1_2[:,51]))
    # IceCubelnL_CMSSM1 = concatenate((CMSSM1_1[:,58], CMSSM1_2[:,58]))

    mwimp_CMSSM1_1 = CMSSM1_1[:,53]
    mwimp_CMSSM1_2 = CMSSM1_2[:,53]
    sigma_SI_p_CMSSM1_1 = CMSSM1_1[:,55]
    sigma_SI_p_CMSSM1_2 = CMSSM1_2[:,55]
    sigma_SD_p_CMSSM1_1 = CMSSM1_1[:,56]
    sigma_SD_p_CMSSM1_2 = CMSSM1_2[:,56]
    sigmav_CMSSM1_1 = CMSSM1_1[:,54]
    sigmav_CMSSM1_2 = CMSSM1_2[:,54]
    LUXlnL_CMSSM1_1 = CMSSM1_1[:,57]
    LUXlnL_CMSSM1_2 = CMSSM1_2[:,57]
    FermiDwarflnL_CMSSM1_1 = CMSSM1_1[:,51]
    FermiDwarflnL_CMSSM1_2 = CMSSM1_2[:,51]
    IceCubelnL_CMSSM1_1 = CMSSM1_1[:,58]
    IceCubelnL_CMSSM1_2 = CMSSM1_2[:,58]
    RD_oh2_CMSSM1_1 = CMSSM1_1[:,50]
    RD_oh2_CMSSM1_2 = CMSSM1_2[:,50]
    lnL_oh2_CMSSM1_1 = CMSSM1_1[:,52]
    lnL_oh2_CMSSM1_2 = CMSSM1_2[:,52] 

    # Spin Independent Direct Detection
    plt.clf()
    fig = plt.figure()
    ax1 = fig.add_subplot(111)

    # Spokes
#    cmin = min(concatenate((LUXlnL_SingletDM1,LUXlnL_MSSM1)))
    cmax = max(concatenate((LUXlnL_SingletDM1_1,LUXlnL_SingletDM1_2,
        LUXlnL_MSSM1_1,LUXlnL_MSSM1_2,LUXlnL_CMSSM1_1,LUXlnL_CMSSM1_2)))
    cmin = max(min(concatenate((LUXlnL_SingletDM1_1,LUXlnL_SingletDM1_2,
        LUXlnL_MSSM1_1,LUXlnL_MSSM1_2,LUXlnL_CMSSM1_2,LUXlnL_CMSSM1_2))),cmax-21)
    # plt.plot(mwimp_SingletDM1[:9],sigma_SI_p_SingletDM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_SingletDM1[9:],sigma_SI_p_SingletDM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_MSSM1[:9],sigma_SI_p_MSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_MSSM1[9:],sigma_SI_p_MSSM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_CMSSM1[:9],sigma_SI_p_CMSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_CMSSM1[9:],sigma_SI_p_CMSSM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_SingletDM1_1,sigma_SI_p_SingletDM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_SingletDM1_2,sigma_SI_p_SingletDM1_2,c='k',zorder=1,ls="--")
    plt.plot(mwimp_MSSM1_1,sigma_SI_p_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,sigma_SI_p_MSSM1_2,c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1_1,sigma_SI_p_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigma_SI_p_CMSSM1_2,c='k',zorder=1,ls="--")
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
    limit = genfromtxt("DarkBit/examples/LUX_2013_85d_118kg_SI_95CL.txt")
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
    #plt.gca().set_xticklabels([50,100,500])
    # plt.text(mwimp_SingletDM1[1]*1.1,sigma_SI_p_SingletDM1[1]*1.1,SingletDM1_1_param)
    # plt.text(mwimp_SingletDM1[10]*1.1,sigma_SI_p_SingletDM1[10]*1.1,SingletDM1_2_param)
    # plt.text(mwimp_MSSM1[1]*1.1,sigma_SI_p_MSSM1[1]*1.1,MSSM1_1_param)
    # plt.text(mwimp_MSSM1[10]*1.1,sigma_SI_p_MSSM1[10]*1.1,MSSM1_2_param)
    # plt.text(mwimp_CMSSM1[1]*1.1,sigma_SI_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    # plt.text(mwimp_CMSSM1[10]*1.1,sigma_SI_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    plt.text(mwimp_SingletDM1_1[8]*1.05,sigma_SI_p_SingletDM1_1[8]*1.05,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1_2[8]*1.05,sigma_SI_p_SingletDM1_2[8]*1.05,SingletDM1_2_param)
    plt.text(mwimp_MSSM1_1[1]*1.05,sigma_SI_p_MSSM1_1[1]*.95,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[9]*1.05,sigma_SI_p_MSSM1_2[9]*.9,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[8]*1.05,sigma_SI_p_CMSSM1_1[8]*1.05,CMSSM1_1_param)
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

    # # Ice Cube
    # plt.clf()
    # fig = plt.figure()
    # ax1 = fig.add_subplot(111)

    # # Spokes
    # #cmin = min(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1)))
    # cmax = max(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1,IceCubelnL_CMSSM1)))
    # cmin = max(min(concatenate((IceCubelnL_SingletDM1,IceCubelnL_MSSM1,IceCubelnL_CMSSM1))),(cmax-1)*10**2)
    # plt.plot(mwimp_SingletDM1[:9],sigma_SI_p_SingletDM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_SingletDM1[9:],sigma_SI_p_SingletDM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_MSSM1[:9],sigma_SD_p_MSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_MSSM1[9:],sigma_SD_p_MSSM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_CMSSM1[:9],sigma_SD_p_CMSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_CMSSM1[9:],sigma_SD_p_CMSSM1[9:],c='k',zorder=1,ls="--")
    # sc1 = ax1.scatter(mwimp_SingletDM1,sigma_SI_p_SingletDM1,c=IceCubelnL_SingletDM1,
    #     s=40,zorder=2,edgecolors="none",marker="o",label="Singlet DM (sigma_SI)")
    # sc2 = ax1.scatter(mwimp_MSSM1,sigma_SD_p_MSSM1,c=IceCubelnL_MSSM1,s=40,zorder=2,
    #     edgecolors="none",marker="s",label="MSSM 11 (sigma_SD)")
    # sc3 = ax1.scatter(mwimp_CMSSM1,sigma_SD_p_CMSSM1,c=IceCubelnL_CMSSM1,s=40,zorder=2,
    #     edgecolors="none",marker="^",label="cMSSM (sigma_SD)")
    # sc1.set_clim([cmin,cmax])
    # sc2.set_clim([cmin,cmax])
    # sc3.set_clim([cmin,cmax])

    # # Limit curves
    # bbSI = genfromtxt("DarkBit/examples/IC79_bb_SI.dat", comments="#")
    # tautauSI = genfromtxt("DarkBit/examples/IC79_tautau_SI.dat", comments="#")
    # bbSD = genfromtxt("DarkBit/examples/IC79_bb_SD.dat", comments="#")
    # tautauSD = genfromtxt("DarkBit/examples/IC79_tautau_SD.dat", comments="#")
    # plt.plot(bbSI[:,0],bbSI[:,2], label="IC SI bb")
    # plt.plot(tautauSI[:,0],tautauSI[:,2], label="IC SI tau+ tau-")
    # plt.plot(bbSD[:,0],bbSD[:,2], label="IC SD bb")
    # plt.plot(tautauSD[:,0],tautauSD[:,2], label="IC SD tau+ tau-")
    
    # # Axes, legend, and colorbar
    # cbar = plt.colorbar(sc1)
    # cbar.set_label('ln L_Ice Cube 79')
    # plt.xlabel("m [GeV]")
    # plt.ylabel("sigma_p [cm^2]")
    # plt.gca().set_xscale('log')
    # plt.gca().set_yscale('log')
    # plt.gca().set_xlim(xmin=5,xmax=10000)
    # plt.gca().set_ylim(ymin=10**-49,ymax=10**-27)
    # plt.text(mwimp_SingletDM1[1]*1.1,sigma_SI_p_SingletDM1[1]*1.1,SingletDM1_1_param)
    # plt.text(mwimp_SingletDM1[10]*1.1,sigma_SI_p_SingletDM1[10]*1.1,SingletDM1_2_param)
    # plt.text(mwimp_MSSM1[1]*1.1,sigma_SD_p_MSSM1[1]*1.1,MSSM1_1_param)
    # plt.text(mwimp_MSSM1[10]*1.1,sigma_SD_p_MSSM1[10]*1.1,MSSM1_2_param)
    # plt.text(mwimp_CMSSM1[1]*1.1,sigma_SD_p_CMSSM1[1]*1.1,CMSSM1_1_param)
    # plt.text(mwimp_CMSSM1[10]*1.1,sigma_SD_p_CMSSM1[10]*1.1,CMSSM1_2_param)
    # plt.legend()

    # plt.savefig("IC.eps")
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
    plt.plot(mwimp_CMSSM1_1,sigma_SD_p_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigma_SD_p_CMSSM1_2,c='k',zorder=1,ls="--")
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
    bbSD = genfromtxt("DarkBit/examples/IC79_bb_SD.dat", comments="#")
    tautauSD = genfromtxt("DarkBit/examples/IC79_tautau_SD.dat", comments="#")
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
    # plt.plot(mwimp_SingletDM1[:9],sigmav_SingletDM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_SingletDM1[9:],sigmav_SingletDM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_MSSM1[:9],sigmav_MSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_MSSM1[9:],sigmav_MSSM1[9:],c='k',zorder=1,ls="--")
    # plt.plot(mwimp_CMSSM1[:9],sigmav_CMSSM1[:9],c='k',zorder=1,ls="-")
    # plt.plot(mwimp_CMSSM1[9:],sigmav_CMSSM1[9:],c='k',zorder=1,ls="--")
    plt.plot(mwimp_SingletDM1_1,sigmav_SingletDM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_SingletDM1_2,sigmav_SingletDM1_2,c='k',zorder=1,ls="--")
    plt.plot(mwimp_MSSM1_1,sigmav_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,sigmav_MSSM1_2,c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1_1,sigmav_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,sigmav_CMSSM1_2,c='k',zorder=1,ls="--")
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
    bb = genfromtxt("DarkBit/examples/FermiLAT_limits_bb.txt")
    tautau = genfromtxt("DarkBit/examples/FermiLAT_limits_tautau.txt")
    plt.plot(bb[:,0],bb[:,26], label=r"Fermi 2015 $\bar b b$ 95% CL")
    plt.plot(tautau[:,0],tautau[:,26],label=r"Fermi 2015 $\tau^+ \tau^-$ 95% CL")

    # Axes, legend, and colorbar
    cbar = plt.colorbar(sc1)
    cbar.set_label(r"$\ln \, \mathcal{L}_{\rm Fermi}$")
    plt.xlabel(r"$m_\chi$ [GeV]")
    plt.ylabel(r"$\langle \sigma v \rangle$ ${\rm [cm^3 / s]}$")
    plt.gca().set_xscale('log')
    plt.gca().set_yscale('log')
    #plt.gca().set_xlim(xmin=5,xmax=10000)
    plt.gca().set_xlim(xmin=60,xmax=500)
    plt.gca().set_ylim(ymin=10**-28,ymax=10**-24)
    plt.gca().set_xticks([60,70,80,90,100,200,300,400,500])
    plt.gca().set_xticklabels(["60","","80","","100","200","300","400","500"])
    # plt.text(mwimp_SingletDM1[1]*1.1,sigmav_SingletDM1[1]*1.1,SingletDM1_1_param)
    # plt.text(mwimp_SingletDM1[10]*1.1,sigmav_SingletDM1[10]*1.1,SingletDM1_2_param)
    # plt.text(mwimp_MSSM1[1]*1.1,sigmav_MSSM1[1]*1.1,MSSM1_1_param)
    # plt.text(mwimp_MSSM1[10]*1.1,sigmav_MSSM1[10]*1.1,MSSM1_2_param)
    # plt.text(mwimp_CMSSM1[1]*1.1,sigmav_CMSSM1[1]*1.1,CMSSM1_1_param)
    # plt.text(mwimp_CMSSM1[10]*1.1,sigmav_CMSSM1[10]*1.1,CMSSM1_2_param)
    plt.text(mwimp_SingletDM1_1[8]*1.05,sigmav_SingletDM1_1[8]*1.05,SingletDM1_1_param)
    plt.text(mwimp_SingletDM1_2[8]*1.05,sigmav_SingletDM1_2[8]*1.05,SingletDM1_2_param)
    plt.text(mwimp_MSSM1_1[4]*.85,sigmav_MSSM1_1[4]*1.05,MSSM1_1_param)
    plt.text(mwimp_MSSM1_2[10]*1.05,sigmav_MSSM1_2[10]*.8,MSSM1_2_param)
    plt.text(mwimp_CMSSM1_1[1]*1,sigmav_CMSSM1_1[1]*1.08,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[9]*1.05,sigmav_CMSSM1_2[9]*1.05,CMSSM1_2_param)
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
    plt.plot(mwimp_MSSM1_1,RD_oh2_MSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_MSSM1_2,RD_oh2_MSSM1_2,c='k',zorder=1,ls="--")
    plt.plot(mwimp_CMSSM1_1,RD_oh2_CMSSM1_1,c='k',zorder=1,ls="-.")
    plt.plot(mwimp_CMSSM1_2,RD_oh2_CMSSM1_2,c='k',zorder=1,ls="--")
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
    plt.text(mwimp_CMSSM1_1[2]*.9,RD_oh2_CMSSM1_1[2]*1.1,CMSSM1_1_param)
    plt.text(mwimp_CMSSM1_2[8]*1.05,RD_oh2_CMSSM1_2[8]*1,CMSSM1_2_param)
    plt.legend(handles=[sc1,sc2,sc3,l1[0],l2],loc="best",ncol=2,frameon=False,fontsize='medium')

    plt.savefig("RD_Spokes.eps")
    plt.show()

if __name__ == '__main__':
    #plotMSSM7()
    #spokePlots()
    #plotLimits()
    #plotSpectraValidation()
    #plotSpectraCascade()
    plotLUX()
