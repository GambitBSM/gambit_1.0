#include <stdexcept>
#include "gambit/ColliderBit/colliders/SpecializablePythia.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @name PythiaSpec subclass definitions
    //@{
      void Pythia_SUSY_LHC_8TeV::initBySpec() {
        // Basic setup for a general SUSY LHC run
        _pythiaToSpec->addToSettings("Beams:eCM = 8000");
        _pythiaToSpec->addToSettings("Main:numberOfEvents = 1000");
        _pythiaToSpec->addToSettings("Main:timesAllowErrors = 1000");
        _pythiaToSpec->addToSettings("Print:quiet = on");
        _pythiaToSpec->addToSettings("Init:showProcesses = on");
        // Default to SUSY with all subprocesses
        _pythiaToSpec->addToSettings("SUSY:all = on");

        // Random seed setup
        _pythiaToSpec->addToSettings("Random:setSeed = on");
      }

      void Pythia_glusq_LHC_8TeV::initBySpec() {
        /// @note "Inherit" another specialization by calling it also.
        Pythia_SUSY_LHC_8TeV::initBySpec();

        _pythiaToSpec->addToSettings("SUSY:idA = 1000021");
        _pythiaToSpec->addToSettings("SUSY:idVecB = 1000001, 1000002, 1000003, 1000004, 2000001, 2000002, 2000003, 2000004");
      }
    //@}


    /// @name SpecializablePythia definitions
    //@{
      void SpecializablePythia::recycle(const std::string& name,
                                        const std::vector<std::string>& externalSettings) {
        // Recycle RecyclablePythia instance
        _recyclablePythia->recycle();

        // Activate Pythia specialization by name
        setActiveSpecialization(name);
        specialize();

        // Initialize Pythia instance with additional external settings
        _recyclablePythia->init(externalSettings);
      }

      void SpecializablePythia::setActiveSpecialization(const std::string& name) {
#define IF_X_SPECIALIZEX(X) if (name == #X) { _activeColliderSpec = _##X; return; }
        IF_X_SPECIALIZEX(pythia_external)
        IF_X_SPECIALIZEX(pythia_SUSY_LHC_8TeV)
        IF_X_SPECIALIZEX(pythia_glusq_LHC_8TeV)
#undef IF_X_SPECIALIZEX
        // default to a Pythia instance configured entirely by external (yaml) settings:
        _activeColliderSpec = _pythia_external;
        std::cout<<"\n\n\n"
                 <<"COLLIDERBIT WARNING: Pythia named "<<name<<" is not coded in SpecializablePythia."
                 <<"                     Now trying to configure Pythia entirely by yaml input..."
                 <<"\n\n\n";
      }
    //@}

  }
}
