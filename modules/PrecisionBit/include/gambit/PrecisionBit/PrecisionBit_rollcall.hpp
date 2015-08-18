//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for PrecisionBit.
///
///  Compile-time registration of available 
///  observables and likelihoods for (mostly 
///  electroweak) precision observables.
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
///  \date 2015 Aug
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  *********************************************


#ifndef __EWPOBit_rollcall_hpp__
#define __EWPOBit_rollcall_hpp__


#define MODULE PrecisionBit
START_MODULE


  // FeynHiggs EWK precision observables
  #define CAPABILITY FH_Precision            
  START_CAPABILITY
    #define FUNCTION FH_PrecisionObs
    START_FUNCTION(fh_PrecisionObs)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    BACKEND_REQ(FHConstraints, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,
                fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,int&))
    BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    ALLOW_MODELS(MSSM25atQ, MSSM25atMGUT)
    #undef FUNCTION
  #undef CAPABILITY
  
  // Extractors for FeynHiggs EWK precision observables
  QUICK_FUNCTION(PrecisionBit, muon_gm2,       NEW_CAPABILITY, FH_precision_gm2,      double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, deltarho,       NEW_CAPABILITY, FH_precision_deltarho, double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, prec_mw,        NEW_CAPABILITY, FH_precision_mw,       double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, prec_sinw2_eff, NEW_CAPABILITY, FH_precision_sinw2,    double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_e,          NEW_CAPABILITY, FH_precision_edm_e,    double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_n,          NEW_CAPABILITY, FH_precision_edm_n,    double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))
  QUICK_FUNCTION(PrecisionBit, edm_hg,         NEW_CAPABILITY, FH_precision_edm_hg,   double, (MSSM25atQ, MSSM25atMGUT), (FH_Precision, fh_PrecisionObs))

  // Precision spectrum manufacturer
  #define CAPABILITY improved_mssm_spectrum
  START_CAPABILITY
    #define FUNCTION precision_spectrum
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(mssm_spectrum, const Spectrum*)
    DEPENDENCY(prec_mw, double)
    DEPENDENCY(prec_sinw2_eff, double)
    DEPENDENCY(prec_mh, double)
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
    ALLOW_MODELS(MSSM25atQ, MSSM25atMGUT)
    #undef FUNCTION
  #undef CAPABILITY 


#undef MODULE


#endif /* defined(__PrecisionBit_rollcall_hpp__) */

