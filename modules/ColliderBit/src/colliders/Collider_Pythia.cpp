/// @note STEP1-3)  How to configure a new collider: Start in Collider.hpp
/// @note (To configure a new subprocess group, only do STEPS >= 4) 
#include "Collider.hpp"
#include <stdexcept>

namespace Gambit {
  namespace ColliderBit {

/// @note STEP4)  Create factory functions for further subclasses.
    // Fwd declaration by macros
    DECLARE_COLLIDER_FACTORY(Pythia_SUSY_LHC_8TeV, PythiaBase)
    DECLARE_COLLIDER_FACTORY(Pythia_glusq_LHC_8TeV, PythiaBase)
    
    PythiaBase* mkPythia(const std::string& name,
                         const std::vector<std::string>& settings) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) \
              return create_ ## A(settings)
      IF_X_RTN_CREATEX(Pythia_SUSY_LHC_8TeV);
      IF_X_RTN_CREATEX(Pythia_glusq_LHC_8TeV);
      throw std::runtime_error(name + " isn't a known Pythia configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

/// @note STEP5)  Set up the subclasses themselves, with more specific settings.
    /// @brief Most general 8TeV SUSY LHC simulator
    class Pythia_SUSY_LHC_8TeV : public PythiaBase {
      public:
        virtual void defaults() {
          // Basic setup for a general SUSY LHC run
          set("Beams:eCM = 8000");
          set("Main:numberOfEvents = 1000");
          set("Main:timesAllowErrors = 1000");
          set("Print:quiet = on");
          set("Init:showProcesses = on");
          // Default to SUSY with all subprocesses
          set("SUSY:all = on");

          // Random seed setup
          set("Random:setSeed = on");
        }
    };


    /// @brief One way to make a subprocess group generator: Hard code it
    class Pythia_glusq_LHC_8TeV : public Pythia_SUSY_LHC_8TeV {
      public:
        virtual void defaults() {
          Pythia_SUSY_LHC_8TeV::defaults();

          set("SUSY:idA = 1000021");
          set("SUSY:idVecB = 1000001, 1000002, 1000003, 1000004, 2000001, 2000002, 2000003, 2000004");
        }
    };

    DEFINE_COLLIDER_FACTORY(Pythia_SUSY_LHC_8TeV, PythiaBase)
    DEFINE_COLLIDER_FACTORY(Pythia_glusq_LHC_8TeV, PythiaBase)
  }
}
