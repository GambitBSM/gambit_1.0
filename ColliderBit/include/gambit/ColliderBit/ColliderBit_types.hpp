//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module
///  ColliderBit.
///
///  Compile-time registration of type definitions
///  required for the rest of the code to
///  communicate with ColliderBit.
///
///  Add to this if you want to define a new type
///  for the functions in ColliderBit to return,
///  but you don't expect that type to be needed
///  by any other modules.
///
///  *********************************************
///
///  Authors (add name if you modify):
///
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  *********************************************


#ifndef __ColliderBit_types_hpp__
#define __ColliderBit_types_hpp__

#include <vector>

#include "gambit/ColliderBit/colliders/SpecializablePythia.hpp"
#include "gambit/ColliderBit/detectors/DelphesVanilla.hpp"
#include "gambit/ColliderBit/detectors/BuckFastSmear.hpp"
#include "gambit/ColliderBit/analyses/HEPUtilsAnalysisContainer.hpp"

#include "gambit/ColliderBit/limits/ALEPHSleptonLimits.hpp"
#include "gambit/ColliderBit/limits/L3GauginoLimits.hpp"
#include "gambit/ColliderBit/limits/L3SleptonLimits.hpp"
#include "gambit/ColliderBit/limits/OPALGauginoLimits.hpp"
/// TODO: see if we can use this one:
//#include "gambit/ColliderBit/limits/L3SmallDeltaMGauginoLimits.hpp"

#include "HEPUtils/Event.h"

namespace Gambit {

  namespace ColliderBit {

    /// @brief Container for log likelihoods from multiple Analyses and SRs
    /// @todo If we want to be able to handle correlations between analyses, we need some way to know which analysis number are at which outer-vector indices
    typedef std::vector<std::vector<SignalRegionData>> ColliderLogLikes;
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
