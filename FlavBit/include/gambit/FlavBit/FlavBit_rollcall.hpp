//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module FlavBit.
///
///  Compile-time registration of available
///  observables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Nazila Mahmoudi
///  \date 2013 Oct
///  \date 2014 Jun
///  \date 2014 Sep
///  \date 2015 Feb
///  \date 2016 Jul
///
///  \author Pat Scott
///  \date 2015 May
///  \date 2016 Aug
///
///  \author Marcin Chrzaszcz
///  \date 2015 May
///  \date 2016 Aug
///  \date 2016 Oct
///
///  *********************************************


#ifndef __FlavBit_rollcall_hpp__
#define __FlavBit_rollcall_hpp__
#include "gambit/FlavBit/FlavBit_types.hpp"


#define MODULE FlavBit
START_MODULE

  // Initialization capability (fill the SuperIso structure)
  #define CAPABILITY SuperIso_modelinfo
  START_CAPABILITY
    #define FUNCTION SI_fill
    START_FUNCTION(parameters)
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT, WC)
    BACKEND_REQ(Init_param, (libsuperiso), void, (struct parameters*))
    BACKEND_REQ(slha_adjust, (libsuperiso), void, (struct parameters*))
    BACKEND_REQ(mt_mt, (libsuperiso),double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    MODEL_CONDITIONAL_DEPENDENCY(MSSM_spectrum, Spectrum, MSSM63atQ, MSSM63atMGUT)
//DEPENDENCY(SMINPUTS, SMInputs)
    MODEL_CONDITIONAL_DEPENDENCY(SMINPUTS, SMInputs, WC)  
    #undef FUNCTION
  #undef CAPABILITY


  // Observable: BR(B -> Xs gamma)
  #define CAPABILITY bsgamma
  START_CAPABILITY
    #define FUNCTION SI_bsgamma
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(bsgamma_CONV, (libsuperiso), double,(struct parameters*, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Bs -> mu+ mu-)_untag
  #define CAPABILITY Bsmumu_untag
  START_CAPABILITY
    #define FUNCTION SI_Bsmumu_untag
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Bsll_untag_CONV, (libsuperiso),  double, (struct parameters*, int))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Bs -> e+ e-)_untag
  #define CAPABILITY Bsee_untag
  START_CAPABILITY
    #define FUNCTION SI_Bsee_untag
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Bsll_untag_CONV, (libsuperiso),  double, (struct parameters*, int))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY
  // Observable: BR(Bd -> mu+ mu-)
  #define CAPABILITY Bdmumu
  START_CAPABILITY
    #define FUNCTION SI_Bdmumu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Bdll_CONV, (libsuperiso),  double, (struct parameters*, int))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> tau nu)
  #define CAPABILITY Btaunu
  START_CAPABILITY
    #define FUNCTION SI_Btaunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Btaunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D tau nu)/BR(B->D e nu)
  #define CAPABILITY RD
  START_CAPABILITY
    #define FUNCTION SI_RD
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BDtaunu_BDenu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

// Observable: BR(B->D tau nu)/BR(B->D e nu)                                  
  #define CAPABILITY RDstar
  START_CAPABILITY
    #define FUNCTION SI_RDstar
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BDstartaunu_BDstarenu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY


  // Observable: BR(K->mu nu)/BR(pi->mu nu)
  #define CAPABILITY Kmunu_pimunu
  START_CAPABILITY
    #define FUNCTION SI_Kmunu_pimunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Kmunu_pimunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: Rmu23
  #define CAPABILITY Rmu23
  START_CAPABILITY
    #define FUNCTION SI_Rmu23
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Rmu23, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Ds->tau nu)
  #define CAPABILITY Dstaunu
  START_CAPABILITY
    #define FUNCTION SI_Dstaunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Dstaunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(Ds->mu nu)
  #define CAPABILITY Dsmunu
  START_CAPABILITY
    #define FUNCTION SI_Dsmunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Dsmunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(D->mu nu)
  #define CAPABILITY Dmunu
  START_CAPABILITY
    #define FUNCTION SI_Dmunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(Dmunu, (libsuperiso), double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
   #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D tau nu)
   #define CAPABILITY BDtaunu
   START_CAPABILITY
     #define FUNCTION SI_BDtaunu
     START_FUNCTION(double)
     DEPENDENCY(SuperIso_modelinfo, parameters)
     BACKEND_REQ(BRBDlnu, (libsuperiso), double, (int, int, double,  double, double*,  struct parameters*))
     BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D mu nu)
  #define CAPABILITY BDmunu
  START_CAPABILITY
    #define FUNCTION SI_BDmunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBDlnu, (libsuperiso), double, (int, int, double,  double, double*,  struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D* tau nu)
  #define CAPABILITY BDstartaunu
  START_CAPABILITY
    #define FUNCTION SI_BDstartaunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBDstarlnu, (libsuperiso), double, (int, int, double,  double, double*,  struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B->D* mu nu)
  #define CAPABILITY BDstarmunu
  START_CAPABILITY
    #define FUNCTION SI_BDstarmunu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBDstarlnu, (libsuperiso), double, (int, int, double,  double, double*,  struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: Delta0(B -> K* gamma)
  #define CAPABILITY delta0
  START_CAPABILITY
    #define FUNCTION SI_delta0
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(delta0_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs mu mu)_lowq2
  #define CAPABILITY BRBXsmumu_lowq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_lowq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBXsmumu_lowq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs mu mu)_highq2
  #define CAPABILITY BRBXsmumu_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXsmumu_highq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBXsmumu_highq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY


  // Observable: AFB(B -> Xs mu mu)_lowq2
  #define CAPABILITY A_BXsmumu_lowq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_lowq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(A_BXsmumu_lowq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: AFB(B -> Xs mu mu)_highq2
  #define CAPABILITY A_BXsmumu_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_highq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(A_BXsmumu_highq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: zero of AFB(B -> Xs mu mu)
  #define CAPABILITY A_BXsmumu_zero
  START_CAPABILITY
    #define FUNCTION SI_A_BXsmumu_zero
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(A_BXsmumu_zero_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> Xs tau tau)_highq2
  #define CAPABILITY BRBXstautau_highq2
  START_CAPABILITY
    #define FUNCTION SI_BRBXstautau_highq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBXstautau_highq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: AFB(B -> Xs tau tau)_highq2
  #define CAPABILITY A_BXstautau_highq2
  START_CAPABILITY
    #define FUNCTION SI_A_BXstautau_highq2
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(A_BXstautau_highq2_CONV, (libsuperiso),  double, (struct parameters*))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> K* mu mu)_lowq2
  #define CAPABILITY BRBKstarmumu_11_25
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY BRBKstarmumu_11_25_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


  #define CAPABILITY BRBKstarmumu_11_25_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

*/
   #define CAPABILITY BRBKstarmumu_11_25_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

   #define CAPABILITY BRBKstarmumu_11_25_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_11_25_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_11_25_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


  // Observable: BR(B -> K* mu mu)
  #define CAPABILITY BRBKstarmumu_25_40
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

/*
  #define CAPABILITY BRBKstarmumu_25_40_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY
*/
   #define CAPABILITY BRBKstarmumu_25_40_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

   #define CAPABILITY BRBKstarmumu_25_40_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_25_40_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_25_40_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> K* mu mu)
  #define CAPABILITY BRBKstarmumu_40_60
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY BRBKstarmumu_40_60_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY
*/

   #define CAPABILITY BRBKstarmumu_40_60_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


   #define CAPABILITY BRBKstarmumu_40_60_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_40_60_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_40_60_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


  // Observable: BR(B -> K* mu mu)
  #define CAPABILITY BRBKstarmumu_60_80
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY BRBKstarmumu_60_80_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY
*/

   #define CAPABILITY BRBKstarmumu_60_80_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


  #define CAPABILITY BRBKstarmumu_60_80_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_60_80_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_60_80_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: BR(B -> K* mu mu)
  #define CAPABILITY BRBKstarmumu_15_17
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

/*

  #define CAPABILITY BRBKstarmumu_15_17_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

*/

   #define CAPABILITY BRBKstarmumu_15_17_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

   #define CAPABILITY BRBKstarmumu_15_17_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_15_17_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_15_17_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY


  // Observable: BR(B -> K* mu mu)
  #define CAPABILITY BRBKstarmumu_17_19
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

/*

  #define CAPABILITY BRBKstarmumu_17_19_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_WC
    START_FUNCTION(Flav_KstarMuMu_obs)
    DEPENDENCY(SuperIso_modelinfo_WC, parameters)
    BACKEND_REQ(BRBKstarmumu_CONV_WC, (libsuperiso),  Flav_KstarMuMu_obs,(struct parameters*, double, double))
    BACKEND_OPTION( (SuperIso, 3.6), (libsuperiso) )
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_BR_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_BR_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_FL_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_FL_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S3_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S3_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S4_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S4_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S5_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S5_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_AFB_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_AFB_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S7_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S7_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S8_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S8_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S9_WC
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S9_WC
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

*/

  #define CAPABILITY BRBKstarmumu_17_19_BR
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_BR
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

   #define CAPABILITY BRBKstarmumu_17_19_FL
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_FL
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S3
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S3
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S4
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S4
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S5
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S5
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_AFB
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_AFB
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S7
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S7
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S8
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S8
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY BRBKstarmumu_17_19_S9
  START_CAPABILITY
    #define FUNCTION SI_BRBKstarmumu_17_19_S9
    START_FUNCTION(double)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: A_I(B -> K* mu mu)
  #define CAPABILITY AI_BKstarmumu
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(SI_AI_BKstarmumu_CONV, (libsuperiso),  double, (struct parameters*))
    #undef FUNCTION
  #undef CAPABILITY

  // Observable: zero of A_I(B -> K* mu mu)
  #define CAPABILITY AI_BKstarmumu_zero
  START_CAPABILITY
    #define FUNCTION SI_AI_BKstarmumu_zero
    START_FUNCTION(double)
    DEPENDENCY(SuperIso_modelinfo, parameters)
    BACKEND_REQ(SI_AI_BKstarmumu_zero_CONV, (libsuperiso),  double, (struct parameters*))
    #undef FUNCTION
  #undef CAPABILITY

  // All FeynHiggs flavour observables
  #define CAPABILITY FH_FlavorObs
  START_CAPABILITY
    #define FUNCTION FH_FlavorObs
    START_FUNCTION(fh_FlavorObs)
    DEPENDENCY(FH_HiggsMasses, fh_HiggsMassObs)
    BACKEND_REQ(FHFlavour, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
    #undef FUNCTION
  #undef CAPABILITY


  //###############################################
  //  Likelihoods
  //###############################################

  #define CAPABILITY b2sgamma_LL
  START_CAPABILITY
    #define FUNCTION b2sgamma_likelihood
    START_FUNCTION(double)
    DEPENDENCY(bsgamma, double)
    #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY b2sgamma_LL_WC
  START_CAPABILITY
    #define FUNCTION b2sgamma_likelihood_WC
    START_FUNCTION(double)
    DEPENDENCY(bsgamma_WC, double)
    #undef FUNCTION
  #undef CAPABILITY
*/
  #define CAPABILITY b2sll_M
  START_CAPABILITY
    #define FUNCTION b2sll_measurements
    START_FUNCTION(FlavBit::Flav_measurement_assym)
    DEPENDENCY(BRBKstarmumu_11_25, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_25_40, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_40_60, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_60_80, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_15_17, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_17_19, Flav_KstarMuMu_obs)
   #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY b2sll_M_WC
  START_CAPABILITY
    #define FUNCTION b2sll_measurements_WC
    START_FUNCTION(FlavBit::Flav_measurement_assym)
    DEPENDENCY(BRBKstarmumu_11_25_WC, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_25_40_WC, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_40_60_WC, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_60_80_WC, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_15_17_WC, Flav_KstarMuMu_obs)
    DEPENDENCY(BRBKstarmumu_17_19_WC, Flav_KstarMuMu_obs)
   #undef FUNCTION
  #undef CAPABILITY
*/

  #define CAPABILITY b2sll_LL
  START_CAPABILITY
    #define FUNCTION b2sll_likelihood
    START_FUNCTION(double)
    DEPENDENCY(b2sll_M, FlavBit::Flav_measurement_assym)
    #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY b2sll_LL_WC
  START_CAPABILITY
    #define FUNCTION b2sll_likelihood_WC
    START_FUNCTION(double)
    DEPENDENCY(b2sll_M_WC, FlavBit::Flav_measurement_assym)
    #undef FUNCTION
  #undef CAPABILITY
*/

  #define CAPABILITY b2ll_LL
  START_CAPABILITY
    #define FUNCTION b2ll_likelihood
    START_FUNCTION(double)
    DEPENDENCY(b2ll_M, FlavBit::Flav_measurement_assym)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY b2ll_M
  START_CAPABILITY
    #define FUNCTION b2ll_measurements
    START_FUNCTION(FlavBit::Flav_measurement_assym)
    DEPENDENCY(Bsmumu_untag, double)
    DEPENDENCY(Bdmumu, double )
   #undef FUNCTION
  #undef CAPABILITY
/*
  #define CAPABILITY b2ll_LL_WC
  START_CAPABILITY
    #define FUNCTION b2ll_likelihood_WC
    START_FUNCTION(double)
    DEPENDENCY(b2ll_M_WC, FlavBit::Flav_measurement_assym)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY b2ll_M_WC
  START_CAPABILITY
    #define FUNCTION b2ll_measurements_WC
    START_FUNCTION(FlavBit::Flav_measurement_assym)
    DEPENDENCY(Bsmumu_untag_WC, double)
    DEPENDENCY(Bdmumu_WC, double )
   #undef FUNCTION
  #undef CAPABILITY

*/

  #define CAPABILITY SL_M
  START_CAPABILITY
    #define FUNCTION SL_measurements
    START_FUNCTION(FlavBit::Flav_measurement_assym)
    DEPENDENCY(Btaunu, double )
    DEPENDENCY(Kmunu_pimunu, double )
    DEPENDENCY(Dstaunu, double )
    DEPENDENCY(Dsmunu, double )
    DEPENDENCY(Dmunu, double )
    DEPENDENCY(BDtaunu, double)
    DEPENDENCY(BDmunu, double)
    DEPENDENCY(BDstartaunu, double)
    DEPENDENCY(BDstarmunu, double)
    DEPENDENCY(RD, double)
    DEPENDENCY(RDstar, double)
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY SL_LL
  START_CAPABILITY
    #define FUNCTION SL_likelihood
    START_FUNCTION(double)
    DEPENDENCY(SL_M, FlavBit::Flav_measurement_assym)
    #undef FUNCTION
  #undef CAPABILITY


#undef MODULE


#endif // defined(__FlavBit_rollcall_hpp__)
