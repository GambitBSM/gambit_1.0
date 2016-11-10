#!/usr/bin/env python

"""A script for MasterCode tests with our CMSSM hdf5 output"""

# Based on the original code by Ben Farmer
# Modified by Martin White
# You can assume that the mistakes are from Martin

#import numpy as np
import h5py
import numpy as np
import matplotlib
#matplotlib.use('Agg')
import matplotlib.pyplot as plt

# Put the path to the HDF5 file here (and specify the group)
f = h5py.File("/home/mwhi/GambitResults/MSSM7-Diver-MO/MSSM7.hdf5",'r')
group = f["/MSSM7"]

# Now extract the MSSM7 parameter arrays
Ad3 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::Ad_3"]
Ad3_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::Ad_3_isvalid"],dtype=np.bool)

Au3 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::Au_3"]
Au3_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::Au_3_isvalid"],dtype=np.bool)

M2 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::M2"]
M2_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::M2_isvalid"],dtype=np.bool)

tanB = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::TanBeta"]
tanB_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::TanBeta_isvalid"],dtype=np.bool)

MHd2 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mHd2"]
MHd2_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mHd2_isvalid"],dtype=np.bool)

MHu2 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mHu2"]
MHu2_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mHu2_isvalid"],dtype=np.bool)

Mf2 = group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mf2"]
Mf2_isvalid = np.array(group["#MSSM7atQ_parameters @MSSM7atQ::primary_parameters::mf2_isvalid"],dtype=np.bool)

# Get the SM nuisance parameters
mtop = group["#StandardModel_SLHA2_parameters @StandardModel_SLHA2::primary_parameters::mT"]
alphas = group["#StandardModel_SLHA2_parameters @StandardModel_SLHA2::primary_parameters::alphaS"]

# Now get some useful masses
mChi1 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~chi0_1 Pole_Mass"]
mChi1_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~chi0_1 Pole_Mass_isvalid"],dtype=np.bool)

mCharge1 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~chi+_1 Pole_Mass"]
mCharge1_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~chi+_1 Pole_Mass_isvalid"],dtype=np.bool)

mSlep = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~e-_1 Pole_Mass"]
mSlep_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::~e-_1 Pole_Mass_isvalid"],dtype=np.bool)

mHiggs1 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_1 Pole_Mass"]
mHiggs1_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_1 Pole_Mass_isvalid"],dtype=np.bool)

mHiggs2 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_2 Pole_Mass"]
mHiggs2_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_2 Pole_Mass_isvalid"],dtype=np.bool)

mA = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::A0 Pole_Mass"]

mstop1 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::mstop1"]

mu = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::Mu mass1"]

# Get some log likelihoods here
higgs_loglike = group["#LHC_Higgs_LogLike @ColliderBit::calc_HS_LHC_LogLike"]
oh2_loglike = group ["#lnL_oh2 @DarkBit::lnL_oh2_upperlimit"]

# Get the relic density
oh2 = group["#RD_oh2 @DarkBit::RD_oh2_MicrOmegas"]


L = group["LogLike"]
L_isvalid = np.array(group["LogLike_isvalid"],dtype=np.bool)

# Print some basic debugging info
print "Total number of 'M2' entries    : ", M2.shape[0]
print "Number of valid 'M2' entries    : ", np.sum(M2_isvalid), "(of ", M2_isvalid.shape[0], ")"
print "Index of last valid 'M2' entry (1-indexed) : ", np.max(np.arange(1,M2.shape[0]+1)[M2_isvalid])

# This applies validity conditions to a few parameters (and we assume the others follow suit)
mask = M2_isvalid & Au3_isvalid & tanB_isvalid & mChi1_isvalid & mHiggs1_isvalid
print "Number of valid combined entries: ", np.sum(mask)

# Place a cut on the likelihood of the points (or leave this very loose and apply it later on)
cuts = (-10000<L[mask])

Ad3_cuts = Ad3[mask][cuts]
Au3_cuts = Au3[mask][cuts]
M2_cuts = M2[mask][cuts] 
tanB_cuts = tanB[mask][cuts]
MHd2_cuts = MHd2[mask][cuts] 
MHu2_cuts = MHu2[mask][cuts]
Mf2_cuts = Mf2[mask][cuts]
mchi1_cuts = mChi1[mask][cuts]
mCharge1_cuts = mCharge1[mask][cuts]
mslep_cuts = mSlep[mask][cuts]
mhiggs1_cuts = mHiggs1[mask][cuts]
mhiggs2_cuts = mHiggs2[mask][cuts]
mA_cuts = mA[mask][cuts]
loglike_cuts = L[mask][cuts]
mtop_cuts = mtop[mask][cuts]
alphas_cuts = alphas[mask][cuts]
higgs_loglike_cuts = higgs_loglike[mask][cuts]
oh2_loglike_cuts = oh2_loglike[mask][cuts]
oh2_cuts = oh2[mask][cuts]
mstop1_cuts = mstop1[mask][cuts]
mu_cuts = mu[mask][cuts]

print "L range: ", np.min(loglike_cuts), np.max(loglike_cuts)

# Now loop over arrays and search for various regions

# These arrays hold selected points for plotting
selected_higgs_ll = []
selected_oh2_ll = []
selected_mh = []
selected_mchi1 = []

for Ad3, Au3, M2, tanB, MHd2, MHu2, Mf2, mchi1, mslep, mhiggs1, mhiggs2, mA, L, mtop, alphas, higgs_ll, oh2_ll, oh2, mCharge1, mstop1,mu in zip (Ad3_cuts, Au3_cuts, M2_cuts, tanB_cuts, MHd2_cuts, MHu2_cuts, Mf2_cuts, mchi1_cuts, mslep_cuts, mhiggs1_cuts, mhiggs2_cuts, mA_cuts, loglike_cuts, mtop_cuts, alphas_cuts, higgs_loglike_cuts, oh2_loglike_cuts, oh2_cuts, mCharge1_cuts,mstop1_cuts,mu_cuts):

#    if( ((mslep/mchi1) - 1) < 0.15 and L > -100):
#    if( ((mslep/mchi1) - 1) < 0.15 and mh > 123):

# Uncomment each section to get a particular region from the MasterCode paper
# See equation (1) of arXiv:1508.01173
# Note the likelihood case in each case

    ll_cut_value = -60
    classified = False
    # Stau coannihilation region (we use the lightest slepton assuming it is a stau)
    if( ((mslep/mchi1) - 1) < 0.15 and L > ll_cut_value):
        classified=True
        print "STAU COANNIHILATION POINT",mchi1,mslep,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "
        selected_higgs_ll.append(higgs_ll)
        selected_oh2_ll.append(oh2_ll)
        selected_mh.append(mhiggs1)
        selected_mchi1.append(mchi1)

        # Chargino coannihilation region
    if( ((mCharge1/mchi1) - 1) < 0.1 and L > ll_cut_value):
        classified=True
        print "CHARGINO COANNIHILATION POINT",mchi1,mCharge1,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

        # stop coannihilation region 
    if( ((mstop1/mchi1) - 1) < 0.2 and L > ll_cut_value):
        classified=True
        print "STOP COANNIHILATION POINT",mchi1,mstop1,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

        # A funnel
    if( (abs(mA/mchi1) - 2) < 0.4 and L > ll_cut_value):
        classified=True
        print "AFUNNEL COANNIHILATION POINT",mchi1,mA,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

        # H funnel
    if( (abs(mhiggs2/mchi1) - 2) < 0.4 and L > ll_cut_value):
        classified=True
        print "HFUNNEL POINT",mchi1,mhiggs2,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

        # Focus point (am assuming a mistake in the MasterCode paper)
    if( ((mu/mchi1) - 1) < 0.3 and L > ll_cut_value):
        classified=True
        print "FOCUS POINT",mchi1,mu,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

        # Print out unclassified points
    if(not classified):
        print "UNCLASSIFIED POINT",mchi1,mu,mhiggs1,oh2,L,higgs_ll,oh2_ll
        print "Ad3 = ",Ad3
        print "Au3 = ",Au3
        print "M2 = ",M2
        print "tanB = ",tanB
        print "MHd2 = ",MHd2
        print "MHu2 = ",MHu2
        print "Mf2 = ",Mf2
        print "mtop = ",mtop
        print "alphas = ",alphas
        print " "
        print " "

# Make some a plot down here        
fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(111)

ax.scatter(selected_mchi1,selected_oh2_ll,facecolor='k',edgecolor='',alpha=0.5,s=2)
ax.set_xlabel("mchi1 (GeV)")
ax.set_ylabel("oh2 loglike")

fig.savefig('stau_coann.pdf')
