#pragma once
#include <string>
#include <vector>
#include <exception>
#include <memory>

#include "gambit/Utils/shared_types.hpp"
#include "gambit/ColliderBit/Py8Utils.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

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
#include "HEPUtils/Event.h"
#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"
#include "MCUtils/PIDCodes.h"

namespace Gambit {
  namespace ColliderBit {


    /// @note Abstract base class Detector
    template <typename EventIn, typename EventOut>
    class Detector {
    public:

      typedef EventIn EventInType;
      typedef EventOut EventOutType;
      Detector() { }
      virtual ~Detector() { }

      /// @name Initialization functions
      //@{
      /// @brief Default settings for each sub-class.
      virtual void defaults() = 0;
      /// @brief Settings parsing and initialization for each sub-class.
      virtual void init(const std::vector<std::string>& settings) = 0;
      //@}

      /// @name Event detection simulation. Pure virtual; must override.
      //@{
      virtual void processEvent(const EventIn&, EventOut&) = 0;
      //@}

    };


    /// @note Abstract base class BuckFastBase
    class BuckFastBase : public Detector<HEPUtils::Event, HEPUtils::Event> {
    public:

      /// @name Initialization functions
      //@{
      virtual void defaults() {}
      virtual void init(const std::vector<std::string>&) {} // arg is a list of "settings"
      virtual void init() {}
      //@}

      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const HEPUtils::Event&, HEPUtils::Event&) = 0; //< @note Pure virtual.
      //@}
    };


    /// @note Abstract base class Delphes_ToHEPUtilsBase
    class DelphesBase : public Detector<Pythia8::Event, HEPUtils::Event> {
    protected:
      /// @name Class variables
      //@{
      // Modularity of Delphes is set by Config File.
      /// @note: init of modularDelphes left to subclasses.
      Delphes *modularDelphes;
      //@}

    public:

      /// @todo Move lots of this into the .cpp files
      ///   -- it shouldn't be in the interface/base-class definitions.

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
    BuckFastBase* mkBuckFast(const std::string&);


  }
}
