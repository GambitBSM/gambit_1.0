//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for EWPOBit.
///
///  Compile-time registration of available 
///  observables and likelihoods for electroweak
///  precision observables.
///
///  Don't put typedefs or other type definitions
///  in this file; see 
///  Core/include/types_rollcall.hpp for further
///  instructions on how to add new types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2014 Nov
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Feb
///
///  *********************************************


#ifndef __EWPOBit_rollcall_hpp__
#define __EWPOBit_rollcall_hpp__

#include "EWPOBit_types.hpp"

#define MODULE EWPOBit
START_MODULE

  #define CAPABILITY FH_PrecisionObs            // FeynHiggs EWK precision observables
  START_CAPABILITY
    #define FUNCTION FH_PrecisionObs
    START_FUNCTION(fh_PrecisionObs)
    DEPENDENCY(FH_Couplings, fh_Couplings)
      BACKEND_REQ(FHConstraints, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,
							fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,int&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 


  #define CAPABILITY SP_PrecisionObs // SUSYPOPE EWK precision observables
  START_CAPABILITY
    #define FUNCTION SP_PrecisionObs
    START_FUNCTION(double)
      BACKEND_REQ(CalcObs_SUSYPOPE, (libSUSYPOPE), void, (int&,
                                                          Farray<Fdouble,1,35>&,
                                                          Farray<Fdouble,1,35>&))
      BACKEND_OPTION( (SUSYPOPE, 0.2), (libSUSYPOPE) )
    #undef FUNCTION
  #undef CAPABILITY 


  #define CAPABILITY FH_MSSMMasses              // FeynHiggs SUSY masses and mixings
  START_CAPABILITY
    #define FUNCTION FH_MSSMMasses
    START_FUNCTION(fh_MSSMMassObs)
      BACKEND_REQ(FHGetPara, (libfeynhiggs), void, (int&,int&,
						    Farray<fh_real, 1,2, 1,5, 1,3>&, Farray<fh_complex, 1,2, 1,2, 1,5, 1,3>&,
						    Farray<fh_real, 1,6, 1,5>&, Farray<fh_complex, 1,36, 1,5>&,
						    Farray< fh_real,1,2>&, Farray< fh_complex,1,4>&,
						    Farray< fh_complex,1,4>&, Farray< fh_real,1,4>&,
						    Farray< fh_complex,1,16>&, fh_complex&, fh_real&,
						    Farray< fh_real,1,4>&, fh_real&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_FlavorObs               // FeynHiggs flavor observables
  START_CAPABILITY
    #define FUNCTION FH_FlavorObs
    START_FUNCTION(fh_FlavorObs)
    DEPENDENCY(FH_HiggsMasses, fh_HiggsMassObs)
      BACKEND_REQ(FHFlavour, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_HiggsMasses               // Higgs masses and mixings with theoretical uncertainties
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
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_Couplings            // FeynHiggs Higgs couplings
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
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY FH_HiggsProd            // FeynHiggs Higgs prod xsecs
  START_CAPABILITY
    #define FUNCTION FH_HiggsProd
    START_FUNCTION(fh_HiggsProd)
    DEPENDENCY(FH_Couplings, fh_Couplings)
      BACKEND_REQ(FHHiggsProd, (libfeynhiggs), void, (int&, fh_real&, Farray< fh_real,1,52>&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE


#endif /* defined(__EWPOBit_rollcall_hpp__) */

