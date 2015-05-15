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
      /// @name Member variables
      //@{
      protected:
        // Modularity of Delphes is set by Config File.
        /// @note: init of _modularDelphes left to subclasses.
        Delphes* _modularDelphes;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        DelphesBase() : _modularDelphes(nullptr) {}
        virtual ~DelphesBase() { delete _modularDelphes; }
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() { delete _modularDelphes; _modularDelphes = nullptr; }
      //@}

      /// @name Initialization functions
      //@{
      public:
        /// @brief Settings parsing and initialization for each sub-class.
        virtual void init(const std::vector<std::string>&) = 0;
      //@}

      /// @name Event detection simulation.
      //@{
      public:
        /// @brief Convert the input event to a format Delphes can use.
        virtual void convertInput(const Pythia8::Event&) = 0;
        /// @brief Convert the output event to the standard type used in Gambit.
        virtual void convertOutput(HEPUtils::Event&) = 0;
        /// @brief Process the event with the detector simulation.
        virtual void processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut)  {
          try {
            _modularDelphes->Clear();
            convertInput(eventIn);
            _modularDelphes->ProcessTask();
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
