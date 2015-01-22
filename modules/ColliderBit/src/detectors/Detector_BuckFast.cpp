#include "Detector.hpp"
#include "BuckFast.hpp"

namespace Gambit {
  namespace ColliderBit {


    DECLARE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)
    DECLARE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastSmear, BuckFastBase)


    /// Pass-through detector simulation
    /// @todo No smearing... but should apply some acceptance cuts?
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


    /// Detector simulation
    class BuckFastSmear : public BuckFastBase {
    public:
      //@{
      virtual void processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) {
        convertInput(eventIn);

        applyDelphesElectronTrackingEff(_processedEvent->electrons());
        smearElectronEnergy(_processedEvent->electrons());
        applyDelphesElectronEff(_processedEvent->electrons());

        applyDelphesMuonTrackEff(_processedEvent->muons());
        smearMuonMomentum(_processedEvent->muons());
        applyDelphesMuonEff(_processedEvent->muons());

        applyTauEfficiency(_processedEvent->taus());

        smearJets(_processedEvent->jets());

        /// @todo Unset b-tags outside tracker range

        convertOutput(eventOut);
      }
      //@}
    };


    BuckFastBase* mkBuckFast(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A)   \
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
