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
   
   #undef CAPABILITY
   
   /// @}

#endif
