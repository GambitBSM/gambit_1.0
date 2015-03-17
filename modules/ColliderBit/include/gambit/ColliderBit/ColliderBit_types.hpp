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

#include "gambit/ColliderBit/Collider.hpp"
#include "gambit/ColliderBit/Detector.hpp"
#include "gambit/ColliderBit/Analysis.hpp"

#include "HEPUtils/Event.h"

namespace Gambit {
  
  namespace ColliderBit {

    /// @brief Container for log likelihoods from multiple Analyses and SRs
    typedef std::vector<std::vector<SignalRegionData>> ColliderLogLikes;
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
