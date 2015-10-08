#pragma once

/// Implementation of DelphesVanilla, in the PIMPL sense
///  => NOT to be #include'd into public header files!
///
/// @author Andy Buckley

#include "TROOT.h"
#include "TTask.h"
#include "TApplication.h"
#include "TObjArray.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "TLorentzVector.h"
#include "modules/Delphes.h"
#include "classes/DelphesClasses.h"
#include "classes/DelphesFactory.h"
#include "ExRootAnalysis/ExRootConfReader.h"

namespace Gambit {
  namespace ColliderBit {


    /// Container for external types, allowing them to be decoupled from public headers cf. the PIMPL idiom
    /// @todo Use smart ptrs to get automatic clean-up?
    struct DelphesVanillaImpl {

      DelphesVanillaImpl() :
        modularDelphes(nullptr),
        confReader(nullptr),
        factory(nullptr),
        allParticleOutputArray(nullptr),
        stableParticleOutputArray(nullptr),
        partonOutputArray(nullptr),
        pdg(nullptr) {}

      ~DelphesVanillaImpl() {
        delete confReader; confReader=nullptr;
        /// @todo Hmm... I wonder whether or not Delphes cleans up its own memory?
        delete factory; factory=nullptr;
        delete allParticleOutputArray; allParticleOutputArray=nullptr;
        delete stableParticleOutputArray; stableParticleOutputArray=nullptr;
        delete partonOutputArray; partonOutputArray=nullptr;
        delete pdg; pdg=nullptr;
        delete modularDelphes; modularDelphes = nullptr;
      }


      ////////////////////


      // Modularity of Delphes is set by Config File.
      /// @note: init of _modularDelphes left to subclasses.
      Delphes* modularDelphes;

      // To read Delphes Config File
      ExRootConfReader *confReader;

      // Factory production of particle "candidates"
      DelphesFactory *factory;

      // Delphes particle arrays: Pre-Detector-Sim
      TObjArray *allParticleOutputArray;
      TObjArray *stableParticleOutputArray;
      TObjArray *partonOutputArray;

      // Database of PDG codes and particle info
      TDatabasePDG *pdg;

    };


  }
}

#endif
