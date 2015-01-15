#include "Detector.hpp"
#include "buckfast.hpp"

namespace Gambit {
  namespace ColliderBit {

    DECLARE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)
    DECLARE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastSmear, BuckFastBase)

    class BuckFastIdentity : public BuckFastBase {
    public:
      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) { 
        convertInput(eventIn);
        ///
        /// Do stuff with _processedEvent...
        ///
        convertOutput(eventOut);
      }
      //@}
    };

    class BuckFastSmear : public BuckFastBase {
    public:
      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) { 
        convertInput(eventIn);
	
	ApplyDelphesElectronTrackingEff(_processedEvent->electrons());
	SmearElectronEnergy(_processedEvent->electrons());
	ApplyDelphesElectronEff(_processedEvent->electrons());

	ApplyDelphesMuonTrackEff(_processedEvent->muons());
	SmearMuonMomentum(_processedEvent->muons());
	ApplyDelphesMuonEff(_processedEvent->muons());
	
	ApplyTauEfficiency(_processedEvent->taus());

	SmearJets(_processedEvent->jets());
	
	convertOutput(eventOut);
      }
      //@}
    };

    BuckFastBase* mkBuckFast(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) \
              return create_ ## A()
      IF_X_RTN_CREATEX(BuckFastIdentity);
      IF_X_RTN_CREATEX(BuckFastSmear);
      throw std::runtime_error(name + " isn't a known Delphes configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    DEFINE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)
    DEFINE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastSmear, BuckFastBase)
  }
}
