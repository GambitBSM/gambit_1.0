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

  #define CAPABILITY FH_Precision            // FeynHiggs EWK precision observables
  START_CAPABILITY
    #define FUNCTION FH_Precision
    START_FUNCTION(double)
      BACKEND_REQ(FHConstraints, (libfeynhiggs), void, (int&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
							fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_Masses               // FeynHiggs SUSY masses and mixings
  START_CAPABILITY
    #define FUNCTION FH_Masses
    START_FUNCTION(double)
      BACKEND_REQ(FHGetPara, (libfeynhiggs), void, (int&,int&,fh_real*,fh_complex*,fh_real*,fh_complex*,
						    fh_real*,fh_complex*,fh_complex*,fh_real*,fh_complex*,
						    fh_complex&,fh_real&,fh_real*,fh_real&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_Flavor               // FeynHiggs flavor observables
  START_CAPABILITY
    #define FUNCTION FH_Flavor
    START_FUNCTION(double)
      BACKEND_REQ(FHFlavour, (libfeynhiggs), void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

  #define CAPABILITY FH_Higgs               // Higgs observables with errors
  START_CAPABILITY
    #define FUNCTION FH_Higgs
    START_FUNCTION(double)
      BACKEND_REQ(FHHiggsCorr, (libfeynhiggs), void, (int&,fh_real*,fh_complex&,fh_complex*,fh_complex*))
      BACKEND_REQ(FHUncertainties, (libfeynhiggs), void, (int&,fh_real*,fh_complex&,fh_complex*,fh_complex*))
      BACKEND_OPTION( (FeynHiggs, 2.10), (libfeynhiggs) )
    #undef FUNCTION
  #undef CAPABILITY 

#undef MODULE


#endif /* defined(__EWPOBit_rollcall_hpp__) */

