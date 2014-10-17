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
///          (ben.farmer@gmail.com)
///    \date 2014 Sep
///  
///  *********************************************

#ifndef __SpecBit_rollcall_hpp__
#define __SpecBit_rollcall_hpp__

#define MODULE SpecBit
START_MODULE

  // Functions to supply particle spectra in various forms

  #define CAPABILITY particle_spectrum   // Supplies the physical mass spectrum of a particle model
  START_CAPABILITY                          

    #define FUNCTION make_test_spectrum  // Get (pointer to) test MSSM spectrum
    START_FUNCTION(Spectrum*)
    #undef FUNCTION

    #define FUNCTION get_lowE_MSSM_spectrum            // Get (pointer to) MSSM spectrum as a Spectrum object
    START_FUNCTION(Spectrum*)                  
    ALLOW_MODELS(MSSM24, CMSSM)
    #undef FUNCTION

    // #define FUNCTION get_lowE_MSSM_spectrum_as_SLHAea  // Get MSSM spectrum as an SLHAea object
    // START_FUNCTION(eaSLHA)                  
    // DEPENDENCY(particle_spectrum, SpectrumPtr)           // Takes a (pointer to a) Spectrum object and returns an eaSLHA object
    // ALLOW_MODELS(MSSM24, CMSSM)
    // #undef FUNCTION

    // #define FUNCTION get_lowE_NMSSM_spectrum           // Get (pointer to a) NMSSM spectrum as a Spectrum object
    // START_FUNCTION(SpectrumPtr)                  
    // ALLOW_MODELS(NMSSM24, CNMSSM)
    // #undef FUNCTION

  #undef CAPABILITY


  // 'Convenience' functions to retrieve certain particle properities in a simple format

  // #define CAPABILITY LSP_mass   // Supplies the mass of the lightest supersymmetric particle
  // START_CAPABILITY

  //   #define FUNCTION get_LSP_mass                      // Retrieves the LSP mass from a Spectrum object
  //   START_FUNCTION(double)                  
  //   DEPENDENCY(particle_spectrum, SpectrumPtr)            // Takes a Spectrum object and returns an eaSLHA object
  //   ALLOW_MODELS(MSSM24, CMSSM)
  //   #undef FUNCTION

  // #undef CAPABILITY
    

  /// TEST FUNCTIONS
  // Just some functions for testing SpecBit and Spectrum object components

  #define CAPABILITY specbit_tests
  START_CAPABILITY

     #define FUNCTION specbit_test_func
     START_FUNCTION(double)
     DEPENDENCY(particle_spectrum, Spectrum*)            // Takes a Spectrum object and returns an eaSLHA object
     #undef FUNCTION

 #undef CAPABILITY


#undef MODULE

#endif /* defined(__SpecBit_rollcall_hpp__) */



