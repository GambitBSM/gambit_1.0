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
///  Authors (add name and date if you modify):
///   
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
///
///  *********************************************


#ifndef __ColliderBit_types_hpp__
#define __ColliderBit_types_hpp__

/// \todo Some of these includes may eventually need to be in shared_types
/// \note They may be shared between backends, depending on how we backend Pythia, Delphes, FastSim, etc...
#include "Delphes3Backend.hpp"
#include "Pythia8Backend.hpp"

namespace Gambit {
  
  namespace ColliderBit {
    
    struct AnalysisList {
      AnalysisList() {}
      
      void addAnalysis(Analysis* a) { analyses.push_back(shared_ptr<Analysis>(a)); }
      vector<shared_ptr<Analysis>> analyses;
    };
    
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
