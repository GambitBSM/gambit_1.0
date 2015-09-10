#include "gambit/ColliderBit/detectors/BuckFastSmear.hpp"
#include "gambit/ColliderBit/ATLASEfficiencies.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @name BuckFastSmear definitions.
    //@{
      void BuckFastSmear::processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) const {
        /// Clone the input event.
        eventIn.cloneTo(eventOut);

        // Electron smearing and efficiency
        applyDelphesElectronTrackingEff(eventOut.electrons());
        smearElectronEnergy(eventOut.electrons());
        applyDelphesElectronEff(eventOut.electrons());

        // Muon smearing and efficiency
        applyDelphesMuonTrackEff(eventOut.muons());
        smearMuonMomentum(eventOut.muons());
        applyDelphesMuonEff(eventOut.muons());

        // Apply hadronic tau BR * reco efficiency
        //MJW remove for now
        applyTauEfficiency(eventOut.taus());
        //Smear taus
        smearTaus(eventOut.taus());

        // Smear jet momenta
        smearJets(eventOut.jets());

        // Unset b-tags outside |eta|=5 (same as DELPHES)
        for (HEPUtils::Jet* j : eventOut.jets()) {
          if (j->abseta() > 5.0) j->set_btag(false);
        }
      }
    //@}

  }
}
