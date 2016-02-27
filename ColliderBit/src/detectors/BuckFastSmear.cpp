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
      ATLAS::applyElectronTrackingEff(eventOut.electrons());
      ATLAS::smearElectronEnergy(eventOut.electrons());
      ATLAS::applyElectronEff(eventOut.electrons());

      // Muon smearing and efficiency
      ATLAS::applyMuonTrackEff(eventOut.muons());
      ATLAS::smearMuonMomentum(eventOut.muons());
      ATLAS::applyMuonEff(eventOut.muons());

      // Apply hadronic tau BR * reco efficiency
      //MJW remove for now
      ATLAS::applyTauEfficiency(eventOut.taus());
      //Smear taus
      ATLAS::smearTaus(eventOut.taus());

      // Smear jet momenta
      ATLAS::smearJets(eventOut.jets());

      // Unset b-tags outside |eta|=5
      /// @todo Same as DELPHES... but surely we can't actually do b-tags outside |eta| < 2.5? (or even less, due to jet radius)
      for (HEPUtils::Jet* j : eventOut.jets()) {
        if (j->abseta() > 5.0) j->set_btag(false);
      }
    }


    /// BuckFastSmearCMS definition
    void BuckFastSmearCMS::processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) const {
      /// Clone the input event.
      eventIn.cloneTo(eventOut);

      // Electron smearing and efficiency
      ATLAS::applyElectronTrackingEff(eventOut.electrons());
      ATLAS::smearElectronEnergy(eventOut.electrons());
      ATLAS::applyElectronEff(eventOut.electrons());

      // Muon smearing and efficiency
      ATLAS::applyMuonTrackEff(eventOut.muons());
      ATLAS::smearMuonMomentum(eventOut.muons());
      ATLAS::applyMuonEff(eventOut.muons());

      // Apply hadronic tau BR * reco efficiency
      //MJW remove for now
      ATLAS::applyTauEfficiency(eventOut.taus());
      //Smear taus
      ATLAS::smearTaus(eventOut.taus());

      // Smear jet momenta
      ATLAS::smearJets(eventOut.jets());

      // Unset b-tags outside |eta|=5
      /// @todo Same as DELPHES... but surely we can't actually do b-tags outside |eta| < 2.5? (or even less, due to jet radius)
      for (HEPUtils::Jet* j : eventOut.jets()) {
        if (j->abseta() > 5.0) j->set_btag(false);
      }
    }


  }
}
