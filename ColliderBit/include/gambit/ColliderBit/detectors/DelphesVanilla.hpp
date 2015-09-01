#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

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

    /// @note Abstract base class Delphes_ToHEPUtilsBase
    class DelphesVanilla : public BaseDetector<Pythia8::Event, HEPUtils::Event> {
      /// @name Member variables
      //@{
      protected:
        // Modularity of Delphes is set by Config File.
        /// @note: init of _modularDelphes left to subclasses.
        Delphes* _modularDelphes;
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
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        DelphesVanilla() : _modularDelphes(nullptr), confReader(nullptr),
                factory(nullptr), allParticleOutputArray(nullptr),
                stableParticleOutputArray(nullptr), partonOutputArray(nullptr),
                pdg(nullptr) { }
        ~DelphesVanilla() { clear(); }
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        void clear() {
          delete confReader; confReader=nullptr;
          // hmm... I wonder whether or not Delphes cleans up its own memory?
          delete factory; factory=nullptr;
          delete allParticleOutputArray; allParticleOutputArray=nullptr;
          delete stableParticleOutputArray; stableParticleOutputArray=nullptr;
          delete partonOutputArray; partonOutputArray=nullptr;
          delete pdg; pdg=nullptr;
          delete _modularDelphes; _modularDelphes = nullptr;
        }
      //@}

      /// @name Initialization functions
      //@{
      public:
        /// @brief Settings parsing and initialization for each sub-class.
        void init(const std::vector<std::string>&);
      //@}

      /// @name Event detection simulation.
      //@{
      public:
        /// @brief Convert the input event to a format Delphes can use.
        void convertInput(const Pythia8::Event&) const;
        /// @brief Convert the output event to the standard type used in Gambit.
        void convertOutput(HEPUtils::Event&) const;
        /// @brief Process the event with the detector simulation.
        void processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut) const;
      //@}

    };

  }
}
