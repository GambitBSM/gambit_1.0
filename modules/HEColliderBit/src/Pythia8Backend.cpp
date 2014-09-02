//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Functions for Pythia8Backend
//  //  (Based off of Andy's py8-bsm.cpp)
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Abram Krislock
//  //  2013 Apr 19, Apr 23
//  //  Andy Buckley
//  //  2013 July 18
//  //  Aldo Saavedra
//  //  2014 March 2nd
//  //
//  //  ********************************************

#include "Pythia8Backend.hpp"
using namespace std;

namespace Gambit {
  namespace HEColliderBit {


    Pythia8Backend::Pythia8Backend(int seed, const string& slhaFilename,
                                   const SubprocessGroup& subprocessGroup) {
      _pythiaInstance = new Pythia8::Pythia("DUMMYPATH", false);

      // Basic setup
      set("Beams:eCM = 8000");
      set("Main:numberOfEvents = 1000");
      set("Main:timesAllowErrors = 1000");
      set("Print:quiet = on");
      set("SLHA:file = " + slhaFilename);
      set("Init:showProcesses = on");
      // set("Init:showMultipartonInteractions", false);
      // set("Init:showChangedSettings", false);
      // set("Init:showChangedParticleData", false);
      // set("Next:numberShowEvent", 10);
      // set("Next:numberShowInfo", 0);
      // set("Next:numberShowProcess", 0);

      // Default to SUSY with precise subprocess control
      set("SUSY:all = on");
      set("SUSY:idVecA", subprocessGroup.particlesInProcess1);
      set("SUSY:idVecB", subprocessGroup.particlesInProcess2);
      // set("SUSY:idA", 1);

      // Modelling elements
      set("PartonLevel:MPI = off");
      // set("PartonLevel:ISR", false);
      // set("PartonLevel:FSR", false);
      // set("HadronLevel:all", false);

      // Random seed setup
      set("Random:setSeed = on");
      set("Random:seed", seed);
      _pythiaInstance->init();
    }


    void Pythia8Backend::nextEvent(Pythia8::Event& event) {
      // Try to make and populate an event
      if (!_pythiaInstance->next()) throw EventFailureError();
      event = _pythiaInstance->event;
    }


    void Pythia8Backend::nextEvent(HEP_Simple_Lib::Event& event) {
      // Try to make and populate an event
      if (!_pythiaInstance->next()) throw EventFailureError();
      event.clear();
      convertOutput(_pythiaInstance->event, event);
    }


    /// Fill a Gambit::HECollider::Event from a Pythia8 event
    void Pythia8Backend::convertOutput(const Pythia8::Event& pevt, HEP_Simple_Lib::Event& gevt) const {
      Pythia8::Vec4 ptot;
      vector<fastjet::PseudoJet> jetparticles;
      vector<fastjet::PseudoJet> bhadrons, taus;

      // Make a first pass to gather unstable final B hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
        if (isFinalB(i, pevt)) bhadrons.push_back(mk_pseudojet(p.p()));

        // Find last tau in tau replica chains as a proxy for tau-tagging
        // Also require that the tau are prompt
        /// @todo Only accept hadronically decaying taus?
        if (isFinalTau(i, pevt) && !fromHadron(i, pevt)) {
          taus.push_back(mk_pseudojet(p.p()));
          HEP_Simple_Lib::Particle* gp = new HEP_Simple_Lib::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          gevt.add_particle(gp); // Will be automatically categorised
        }
      }

      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Only consider final state particles within ATLAS/CMS acceptance
        if (!p.isFinal()) continue;
        if (abs(p.eta()) > 5.0) continue;
        // Add to total final state momentum
        ptot += p.p();

        // Promptness: for leptons and photons we're only interested if they don't come from hadron/tau decays
        /// @todo Don't exclude hadronic tau decay products from jet finding: ATLAS treats them as jets
        /// @todo Should we set up Pythia to make taus stable?
        const bool prompt = !fromHadron(i, pevt) && !fromTau(i, pevt);

        if (prompt) {
          HEP_Simple_Lib::Particle* gp = new HEP_Simple_Lib::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          gevt.add_particle(gp); // Will be automatically categorised
        } else {
          // Choose jet constituents
          jetparticles.push_back(mk_pseudojet(p.p()));
        }

      }

      // Jet finding
      // Currently hard-coded to use anti-kT R=0.4 jets above 30 GeV
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(30));

      // Do jet b-tagging, etc. and add to the Event
      for (auto& pj : pjets) {
        bool isB = false;
        for (auto& pb : bhadrons) {
          if (pj.delta_R(pb) < 0.3) {
            isB = true;
            break;
          }
        }
        /// Add to the event
        gevt.addJet(new HEP_Simple_Lib::Jet(MCUtils::mk_p4(pj), isB));
      }

      // MET (note: NOT just equal to sum of prompt invisibles)
      gevt.set_missingmom(-mk_p4(ptot));
    }


  }
}
