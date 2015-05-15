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
    class DelphesBase : public BaseDetector<Pythia8::Event, HEPUtils::Event> {
    protected:
      /// @name Class variables
      //@{
      // Modularity of Delphes is set by Config File.
      /// @note: init of modularDelphes left to subclasses.
      Delphes *modularDelphes;
      //@}

    public:

      /// @name Initialization functions
      //@{
      virtual void defaults() {}
      virtual void init(const std::vector<std::string>&) = 0; //< @note Pure virtual.
      //@}

      /// @name Event detection simulation.
      //@{
      virtual void convertInput(const Pythia8::Event&) = 0; //< @note Pure virtual.
      virtual void convertOutput(HEPUtils::Event&) = 0; //< @note Pure virtual.
      virtual void processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut)  {
        try {
          modularDelphes->Clear();
          convertInput(eventIn);
          modularDelphes->ProcessTask();
          convertOutput(eventOut);
        } catch(std::runtime_error &e) {
          std::cerr << "** ERROR: " << e.what() << endl;
          exit(EXIT_FAILURE);
        }
      }
      //@}

    };

    /// @TODO subclass further to configure different detector configurations?
    ///       Or just continue to use Delphes configuration file?
    DelphesBase* mkDelphes(const std::string&, const std::vector<std::string>&);

  }
}
