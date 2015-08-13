//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall declarations for module functions
///  contained in SpecBit_SM.cpp
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  *********************************************

#ifndef __SpecBit_Higgs_hpp__
#define __SpecBit_Higgs_hpp__


  // Higgs masses and mixings with theoretical uncertainties
  #define CAPABILITY FH_HiggsMasses
  START_CAPABILITY
    #define FUNCTION FH_HiggsMasses
    START_FUNCTION(fh_HiggsMassObs)
    DEPENDENCY(FH_MSSMMasses, fh_MSSMMassObs)
    BACKEND_REQ(FHHiggsCorr, (libfeynhiggs), void, (int&, Farray< fh_real,1,4>&, fh_complex&, 
                Farray<fh_complex, 1,3, 1,3>&, 
                Farray<fh_complex, 1,3, 1,3>&))
    BACKEND_REQ(FHUncertainties, (libfeynhiggs), void, (int&, Farray< fh_real,1,4>&, fh_complex&, 
                Farray<fh_complex, 1,3, 1,3>&, 
                Farray<fh_complex, 1,3, 1,3>&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 

  // FeynHiggs Higgs couplings
  #define CAPABILITY FH_Couplings
  START_CAPABILITY
    #define FUNCTION FH_Couplings
    START_FUNCTION(fh_Couplings)
    DEPENDENCY(FH_HiggsMasses, fh_HiggsMassObs)
    BACKEND_REQ(FHSelectUZ, (libfeynhiggs), void, (int&,int&,int&,int&))
    BACKEND_REQ(FHCouplings, (libfeynhiggs), void, (int&, Farray< fh_complex,1,681>&,
                                                    Farray< fh_complex,1,231>&,
                                                    Farray< fh_real,1,978>&,
                                                    Farray< fh_real,1,250>&, int&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY


#endif

