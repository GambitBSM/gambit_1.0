//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module HEColliderBit.
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
///  \author Abram Krislock
///  \date 2013 Sep 
///
///  *********************************************


#ifndef __HEColliderBit_rollcall_hpp__
#define __HEColliderBit_rollcall_hpp__

#include <string>

#define MODULE HEColliderBit
START_MODULE

  /// @todo flesh out the following with some actual analyses
  #define CAPABILITY nevents__some__analysis
  START_CAPABILITY

    #define FUNCTION nevents_dbl
    START_FUNCTION(double)
    ALLOW_MODELS(MSSM)
    DEPENDENCY(slhaFilename, string)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY like__some__analysis
  START_CAPABILITY

    #define FUNCTION like_dbl
    START_FUNCTION(double)
    DEPENDENCY(nevents__some__analysis, double)
    #undef FUNCTION

  #undef CAPABILITY

#undef MODULE

#endif /* defined(__HEColliderBit_rollcall_hpp__) */
