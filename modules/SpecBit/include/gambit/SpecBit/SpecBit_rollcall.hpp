//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module SpecBit
///
///  These functions link ModelParameters to 
///  Spectrum objects in various ways.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2014 Sep - Dec, 2015 Jan - Mar
///  
///  *********************************************

#ifndef __SpecBit_rollcall_hpp__
#define __SpecBit_rollcall_hpp__

#define MODULE SpecBit
START_MODULE

  // Capabilities used in more than one of the headers
  // below need to be declared up-front (and then not
  // declared in the header)

  /// Module function declarations for SpecBit_SM.cpp
  #include "gambit/SpecBit/SpecBit_SM.hpp"

  /// Module function declarations for SpecBit_MSSM.cpp
  #include "gambit/SpecBit/SpecBit_MSSM.hpp"

  /// Module function declarations for SpecBit_SingletDM.cpp
  #include "gambit/SpecBit/SpecBit_SingletDM.hpp"

  // For testing only
  #define CAPABILITY test_MSSM_spectrum   
  START_CAPABILITY                          
    #define FUNCTION make_test_spectrum  // Get (pointer to) test MSSM spectrum
    START_FUNCTION(SubSpectrum*)
    #undef FUNCTION
  #undef CAPABILITY

  // Functions to changes the capability associated with a Spectrum object to "SM_spectrum"
  ///TODO: CURRENTLY THERE SEEMS TO BE A BUG WITH RETRIEVING THESE DEPENDENCIES! SWITCHING BACK TO OLD METHOD
  //QUICK_FUNCTION(SpecBit, SM_spectrum, NEW_CAPABILITY, convert_MSSM_to_SM,   Spectrum*, (), (MSSM_spectrum, Spectrum*))
  //QUICK_FUNCTION(MODULE, SM_spectrum, OLD_CAPABILITY, convert_NMSSM_to_SM,  Spectrum*, (), (NMSSM_spectrum, Spectrum*))
  //QUICK_FUNCTION(MODULE, SM_spectrum, OLD_CAPABILITY, convert_E6MSSM_to_SM, Spectrum*, (), (E6MSSM_spectrum, Spectrum*))

  // Note: QUICK_FUNCTION usage:
  // Arguments: MODULE, CAPABILITY, NEW_CAPABILITY_FLAG, FUNCTION, TYPE, (n x ALLOWED_MODEL), m x (DEPENDENCY, DEPENDENCY_TYPE)
  //            The last two arguments are optional, and n and m can be anything from 0 to 10.
  //
  // equivalent to:
  /// @}

  // 'Convenience' functions to retrieve certain particle properities in a simple format

  // #define CAPABILITY LSP_mass   // Supplies the mass of the lightest supersymmetric particle
  // START_CAPABILITY

  //   #define FUNCTION get_LSP_mass                      // Retrieves the LSP mass from a Spectrum object
  //   START_FUNCTION(double)                  
  //   DEPENDENCY(particle_spectrum, SpectrumPtr)            // Takes a Spectrum object and returns an SLHAstruct
  //   ALLOW_MODELS(MSSM24, CMSSM)
  //   #undef FUNCTION

  // #undef CAPABILITY
    

  /// TEST FUNCTIONS
  // Just some functions for testing SpecBit and Spectrum object components


  #define CAPABILITY specbit_tests1
  START_CAPABILITY
     #define FUNCTION specbit_test_func1
     START_FUNCTION(double)
     DEPENDENCY(MSSM_spectrum, const Spectrum*)
     #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY specbit_tests2
  START_CAPABILITY
     #define FUNCTION specbit_test_func2
     START_FUNCTION(double)
     #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY specbit_tests3
  START_CAPABILITY
     #define FUNCTION specbit_test_func3
     START_FUNCTION(double)
     DEPENDENCY(SM_subspectrum, const SubSpectrum*)
     #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY specbit_test_Spectrum
  START_CAPABILITY
     #define FUNCTION specbit_test_Spectrum
     START_FUNCTION(double)
     DEPENDENCY(MSSM_spectrum, const Spectrum*)
     DEPENDENCY(SM_subspectrum, const SubSpectrum*)
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY specbit_test_show_SMInputs
  START_CAPABILITY
     #define FUNCTION specbit_test_show_SMInputs
     START_FUNCTION(double)
     DEPENDENCY(SMINPUTS, SMInputs)
   #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY dump_spectrum_slha
  START_CAPABILITY
  
      #define FUNCTION dump_spectrum
      START_FUNCTION(double)
      DEPENDENCY(SM_subspectrum, const SubSpectrum*)
      #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY SpecBit_examples
  START_CAPABILITY

      #define FUNCTION exampleRead
      START_FUNCTION(bool)
      DEPENDENCY(MSSM_spectrum, const Spectrum*)
      #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY test_Singlet_spectrum
  START_CAPABILITY

      #define FUNCTION test_Singlet_spectrum
      START_FUNCTION(bool)
      MODEL_GROUP(sm,      (StandardModel_SLHA2))
      MODEL_GROUP(higgs,   (StandardModel_Higgs))
      MODEL_GROUP(singlet, (SingletDM))
      ALLOW_MODEL_COMBINATION(sm, higgs, singlet)
      DEPENDENCY(SingletDM_spectrum, const Spectrum*)
      #undef FUNCTION

  #undef CAPABILITY

#undef MODULE

#endif /* defined(__SpecBit_rollcall_hpp__) */



