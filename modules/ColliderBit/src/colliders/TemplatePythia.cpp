#include <stdexcept>
#include "gambit/ColliderBit/Collider.hpp"

/// TODO Because ColliderSpec functors are better than templates and function pointers...

/// @note To configure a new collider, follow these steps:
/// @note STEP1)  BOSS / Backend your favorite collider simulator.
/// @note STEP2)  [Start in the Collider.hpp header.]
/// @note STEP3)  [Start in the Collider.hpp header.]
/// @note STEP4)  Define the Sub-class of BaseCollider. [See here the TemplatePythia example.]
/// @note STEP5)  Define the Recycler. [See here the TemplatePythia example.]

namespace Gambit {
  namespace ColliderBit {

    class TemplatePythia : public BaseCollider<Pythia8::Event> {
/// @note STEP4b) Specialization functor subclasses for TemplatePythia.
        class Pythia_SUSY_LHC_8TeV: public BaseColliderSpec {
          public:
            virtual void initBySpec() {
              // Basic setup for a general SUSY LHC run
              _settings.push_back("Beams:eCM = 8000");
              _settings.push_back("Main:numberOfEvents = 1000");
              _settings.push_back("Main:timesAllowErrors = 1000");
              _settings.push_back("Print:quiet = on");
              _settings.push_back("Init:showProcesses = on");
              // Default to SUSY with all subprocesses
              _settings.push_back("SUSY:all = on");

              // Random seed setup
              _settings.push_back("Random:setSeed = on");
            };
        } pythia_SUSY_LHC_8TeV();

        class Pythia_glusq_LHC_8TeV : public BaseColliderSpec {
          public:
            virtual void initBySpec() {
              /// @note "Inherit" another specialization by calling it also.
              pythia_SUSY_LHC_8TeV.specialize();

              _settings.push_back("SUSY:idA = 1000021");
              _settings.push_back("SUSY:idVecB = 1000001, 1000002, 1000003, 1000004, 2000001, 2000002, 2000003, 2000004");
            }
        } pythia_glusq_LHC_8TeV();
      //@}

      /// @name (Re-)Initialization functions
      //@{
/// @note STEP4c) Define activeColliderSpec setter
        void setActiveSpecialization(const std::string& name) {
#define IF_X_SPECIALIZEX(X) if (name == #X) activeColliderSpec = &X;
          IF_X_SPECIALIZEX(pythia_SUSY_LHC_8TeV)
          IF_X_SPECIALIZEX(pythia_glusq_LHC_8TeV)
#undef IF_X_SPECIALIZEX
        };
/// @note STEP4c) General init, used by all specializations -after- their specialize functions
        void init(const std::vector<std::string>& externalSettings) {
        /// @note As long as the settings are pythia commands, no parsing!
          for(const auto command : externalSettings) {
            _settings.push_back(command);
          }
          for(const auto command : _settings)
            if(command.find(":") == (size_t) -1)
              _pythiaInstance = new Pythia8::Pythia(command, false);
            else
              set(command);

          if(!_pythiaInstance) throw InitializationError();
          _pythiaInstance->init();
        }
      //@}

/// @note STEP4d) Default event gen. Used when specializations don't overwrite nextEvent.
      /// @name Event generation functions - Required to be const by Gambit
      //@{
        /// @brief Fill in the next collider event by reference without a specialization.
        virtual void nextEventDefault(EventType& event) const {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }
      //@}
    };


/// @note STEP5)  Define the recycler with your specializations via the IF_X_SPECIALIZEX macro.
    void recycleTemplatePythia(TemplatePythia& tPythia, const std::string& name,
                               const std::vector<std::string>& settings) {
      tPythia.clear();
      tPythia.setActiveSpecialization(name);
      tPythia.specialize();
      tPythia.init(settings);
    }

  }
}
