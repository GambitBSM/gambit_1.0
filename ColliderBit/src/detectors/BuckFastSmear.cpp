#include "gambit/ColliderBit/detectors/BuckFastSmear.hpp"
#include "gambit/ColliderBit/ATLASEfficiencies.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// BuckFastIdentity definition
    void BuckFastIdentity::processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) const {
      /// Clone the input event.
      eventIn.cloneTo(eventOut);
    }


    /// BuckFastSmear definitions
    void BuckFastSmearATLAS::processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) const {
      /// Clone the input event.
      eventIn.cloneTo(eventOut);

      // Electron smearing and efficiency
      ATLAS::applyDelphesElectronTrackingEff(eventOut.electrons());
      ATLAS::smearElectronEnergy(eventOut.electrons());
      ATLAS::applyDelphesElectronEff(eventOut.electrons());

      // Muon smearing and efficiency
      ATLAS::applyDelphesMuonTrackEff(eventOut.muons());
      ATLAS::smearMuonMomentum(eventOut.muons());
      ATLAS::applyDelphesMuonEff(eventOut.muons());

      // Apply hadronic tau BR * reco efficiency
      //MJW remove for now
      ATLAS::applyTauEfficiency(eventOut.taus());
      //Smear taus
      ATLAS::smearTaus(eventOut.taus());

      // Smear jet momenta
      ATLAS::smearJets(eventOut.jets());

      // Unset b-tags outside |eta|=5 (same as DELPHES)
      /// @todo Surely we can't actually do b-tags outside |eta| < 2.5?
      for (HEPUtils::Jet* j : eventOut.jets()) {
        if (j->abseta() > 5.0) j->set_btag(false);
      }
    }


    // /// BuckFastSmearCMS definition
    // void BuckFastSmearCMS::processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) const {
    //   // TODO
    // }


  }
}
