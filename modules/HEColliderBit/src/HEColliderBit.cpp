//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module HEColliderBit.
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///    \date 2013 Sep
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "HEColliderBit_rollcall.hpp"

namespace Gambit {

  namespace HEColliderBit {
    // Local declarations
    // whatever variables and local functions we want 
    // - don't need to be in the rollcall

    // Initialization routine
    /// @todo is this automatically called by Gambit? or do we explicitly call it?
    void initialize() {
      // initialize some stuff
    }

    // Module functions - DO need to be in the rollcall
    void nevents_dbl (double &result) { result = 5.;}
    void like_dbl (double &result) { result = 1.;}
  }
}
