//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module
///  HEColliderBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with HEColliderBit.
///
///  Add to this if you want to define a new type
///  for the functions in HEColliderBit to return,
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


#ifndef __HEColliderBit_types_hpp__
#define __HEColliderBit_types_hpp__

/// \todo Some of these includes may eventually need to be in shared_types
/// \note They may be shared between backends, depending on how we backend Pythia, Delphes, FastSim, etc...
#include "Pythia8Backend.hpp"
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Event.hpp"

namespace Gambit {
  namespace HEColliderBit {
    
    // This typedef is here for verbosity and readability.
    typedef Pythia8::Event PythiaEvent;
    // All of the other types are in Gambit::HEColliderBit within the includes
    // above, so there should be no more ambiguity.

    struct SubprocessGroup {
      SubprocessGroup()
        : xsec(-1), nevts(-1) { }
      SubprocessGroup(double xs, const vector<int>& parts1,
                      const vector<int>& parts2)
        : xsec(xs), nevts(-1), particlesInProcess1(parts1),
          particlesInProcess2(parts2) { }
      void addAnalysis(Analysis* a) { analyses.push_back(shared_ptr<Analysis>(a)); }
      double xsec;
      // string name; // or int id = 1000*sp_type + sp_instance
      int nevts;
      /// @todo Add some metric of CPU cost per event for this process type?
      /// The processes are selected by the IDs of the particles which
      /// must be in the process.
      vector<int> particlesInProcess1;
      vector<int> particlesInProcess2;
      vector<shared_ptr<Analysis>> analyses;
    };

 }
}

#endif /* defined __HEColliderBit_types_hpp__ */
