#include <stdexcept>
#include "gambit/ColliderBit/Collider.hpp"

/// @note STEP1-3)  How to configure a new collider: Start in Collider.hpp
/// @note (To configure a new subprocess group, only do STEPS >= 4) 

namespace Gambit {
  namespace ColliderBit {

/// @note STEP5) Use "init" for general init, which you want for all Colliders of this class.
    void TemplatePythia::init(const std::vector<std::string>& settings) {
        /// @note As long as the settings are pythia commands, no parsing!
      for(const auto command : settings) {
        if(command.find(":") == (size_t) -1)
          _pythiaInstance = new Pythia8::Pythia(command, false);
        else
          _settings.push_back(command);
      }
      for(const auto command : _settings)
        set(command);

      _pythiaInstance->init();
    }

/// @note STEP6)  Set up the specializations themselves, with more specific settings.
    /// @brief Most general 8TeV SUSY LHC simulator
    struct Pythia_SUSY_LHC_8TeV {};
    template <> void TemplatePythia::specialize<Pythia_SUSY_LHC_8TeV>() {
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

    /// @brief One way to make a subprocess group generator: Hard code it
    struct Pythia_glusq_LHC_8TeV {};
    template <> void TemplatePythia::specialize<Pythia_glusq_LHC_8TeV>() {
      /// @note "Inherit" another specialization by calling it also.
      this->specialize<Pythia_SUSY_LHC_8TeV>();

      _settings.push_back("SUSY:idA = 1000021");
      _settings.push_back("SUSY:idVecB = 1000001, 1000002, 1000003, 1000004, 2000001, 2000002, 2000003, 2000004");
    };

/// @note STEP7) Define the recycler with your specializations via the IF_X_SPECIALIZEX macro.
    bool recycleTemplatePythia(TemplatePythia& tPythia, const std::string& name,
                               const std::vector<std::string>& settings) {
      bool result = false;
      tPythia.reset();
      #define IF_X_SPECIALIZEX(X) if (name == #X) { tPythia.specialize<X>(); result=true; }
      IF_X_SPECIALIZEX(Pythia_SUSY_LHC_8TeV)
      IF_X_SPECIALIZEX(Pythia_glusq_LHC_8TeV)
      #undef IF_X_RECYCLEX
      tPythia.init(settings);
      return result;
    }

  }
}
