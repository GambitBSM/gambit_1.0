//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Module function declarations for SpecBit_tests.cpp (new tests)
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Aug
///  
///  \author Tomas Gonzalo
///	     (t.e.gonzalo@fys.uio.no)
///  \date 2016 Mar - June
/// 
///  *********************************************

#ifndef __SpecBit_tests_hpp__
#define __SpecBit_tests_hpp__

   /// @{ Functions to test Spectrum objects
   
   #define CAPABILITY run_MSSMspectrum_test
   START_CAPABILITY                          
   
     #define FUNCTION MSSMspectrum_test            
     START_FUNCTION(bool)                  
     DEPENDENCY(unimproved_MSSM_spectrum, const Spectrum*)
     #undef FUNCTION
 
     #define FUNCTION SPheno_MSSM_test
     START_FUNCTION(bool)
     DEPENDENCY(unimproved_MSSM_spectrum, const Spectrum*)
     #undef FUNCTION

     #define FUNCTION SPheno_CMSSM_test
     START_FUNCTION(bool)
     DEPENDENCY(SMINPUTS, SMInputs)
     ALLOW_MODELS(CMSSM)
     BACKEND_REQ(SPheno_MSSMspectrum, (libSPheno), int, (Spectrum&, const SMInputs&, const std::map<str, safe_ptr<double> >&) )
     BACKEND_OPTION((SPheno, 3.3.8), (libSPheno))
     #undef FUNCTION
  
     #define FUNCTION SPheno_MSSM63atMGUT_test
     START_FUNCTION(bool)
     DEPENDENCY(SMINPUTS, SMInputs)
     ALLOW_MODELS(MSSM63atMGUT)
     BACKEND_REQ(SPheno_MSSMspectrum, (libSPheno), int, (Spectrum&, const SMInputs&, const std::map<str, safe_ptr<double> >&) )
     BACKEND_OPTION((SPheno, 3.3.8), (libSPheno))
     #undef FUNCTION

     #define FUNCTION SPheno_MSSM63atQ_test
     START_FUNCTION(bool)
     DEPENDENCY(SMINPUTS, SMInputs)
     ALLOW_MODELS(MSSM63atQ)
     BACKEND_REQ(SPheno_MSSMspectrum, (libSPheno), int, (Spectrum&, const SMInputs&, const std::map<str, safe_ptr<double> >&) )
     BACKEND_OPTION((SPheno, 3.3.8), (libSPheno))
     #undef FUNCTION

  
   #undef CAPABILITY
 
   #define CAPABILITY run_light_quark_test
   START_CAPABILITY                          
   
     #define FUNCTION light_quark_test            
     START_FUNCTION(bool)                  
     DEPENDENCY(qedqcd_subspectrum, const SubSpectrum*)
     #undef FUNCTION
   
   #undef CAPABILITY
  
   /// @}

#endif
