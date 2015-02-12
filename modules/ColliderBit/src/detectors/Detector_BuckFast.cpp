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
        // Do nothing
        convertOutput(eventOut);
      }
      //@}
    };


    /// Detector simulation
    class BuckFastSmear : public BuckFastBase {
    public:

      virtual void processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) {
        convertInput(eventIn);

        // Electron smearing and efficiency

        applyDelphesElectronTrackingEff(_processedEvent->electrons());
        smearElectronEnergy(_processedEvent->electrons());
        applyDelphesElectronEff(_processedEvent->electrons());

        // Muon smearing and efficiency
        applyDelphesMuonTrackEff(_processedEvent->muons());
        smearMuonMomentum(_processedEvent->muons());
        applyDelphesMuonEff(_processedEvent->muons());

        // Apply hadronic tau BR * reco efficiency
        //MJW remove for now
        applyTauEfficiency(_processedEvent->taus());
        //Smear taus
        smearTaus(_processedEvent->taus());

        // Smear jet momenta
        smearJets(_processedEvent->jets());

        // Unset b-tags outside |eta|=5 (same as DELPHES)
        for (HEPUtils::Jet* j : _processedEvent->jets()) {
          if (j->abseta() > 5.0) j->set_btag(false);
        }


        convertOutput(eventOut);

      }



    };


    BuckFastBase* mkBuckFast(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A)   \
          return create_ ## A()
      IF_X_RTN_CREATEX(BuckFastIdentity);
      IF_X_RTN_CREATEX(BuckFastSmear);
      throw std::runtime_error(name + " isn't a known BuckFast configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    DEFINE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)
    DEFINE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastSmear, BuckFastBase)
  }


}
