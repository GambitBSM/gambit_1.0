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
///  \date 2015 Apr
///
///  *********************************************


#ifndef __EWPOBit_rollcall_hpp__
#define __EWPOBit_rollcall_hpp__


#define MODULE EWPOBit
START_MODULE


  // FeynHiggs EWK precision observables
  #define CAPABILITY FH_PrecisionObs            
  START_CAPABILITY
    #define FUNCTION FH_PrecisionObs
    START_FUNCTION(fh_PrecisionObs)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    BACKEND_REQ(FHConstraints, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,
                fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,int&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 

  // SUSYPOPE EWK precision observables
  #define CAPABILITY SP_PrecisionObs
  START_CAPABILITY
    #define FUNCTION SP_PrecisionObs
    START_FUNCTION(double)
    BACKEND_REQ(CalcObs_SUSYPOPE, (libSUSYPOPE), void, (int&,
                                                        Farray<Fdouble,1,35>&,
                                                        Farray<Fdouble,1,35>&))
    BACKEND_OPTION( (SUSYPOPE, 0.2), (libSUSYPOPE) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 


#undef MODULE


#endif /* defined(__EWPOBit_rollcall_hpp__) */

