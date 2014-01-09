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
//  //
//  //  ********************************************

#include "Pythia8Backend.hpp"

namespace Gambit {
  namespace HEColliderBit {


    Pythia8Backend::Pythia8Backend(int seed) {
      _initialized = false;
      _pythiaInstance = new Pythia8::Pythia("DUMMYPATH", false);

      // Basic setup
      set("Beams:eCM", 8000);
      set("Main:numberOfEvents", 1000);
      set("Main:timesAllowErrors", 1000);
      set("Print:quiet", true);
      set("SLHA:verbose", 0);
      // set("Init:showProcesses", true);
      // set("Init:showMultipartonInteractions", false);
      // set("Init:showChangedSettings", false);
      // set("Init:showChangedParticleData", false);
      // set("Next:numberShowEvent", 10);
      // set("Next:numberShowInfo", 0);
      // set("Next:numberShowProcess", 0);

      // Default to SUSY with precise subprocess control
      set("SUSY:all", true);
      // set("SUSY:idA", 1);

      // Modelling elements
      set("PartonLevel:MPI", false);
      // set("PartonLevel:ISR", false);
      // set("PartonLevel:FSR", false);
      // set("HadronLevel:all", false);

      // Random seed setup
      set("Random:setSeed", true);
      set("Random:seed", seed);
    }


    void Pythia8Backend::nextEvent(PythiaEvent& event) {
      // Automatically initialize when a first event is requested
      if (!_initialized) {
        _pythiaInstance->init();
        _initialized = true;
      }
      // Try to make and populate an event
      if (!_pythiaInstance->next()) throw EventFailureError();
      event = _pythiaInstance->event;
    }


    void Pythia8Backend::nextEvent(Event& event) {
      // Automatically initialize when a first event is requested
      if (!_initialized) {
        _pythiaInstance->init();
        _initialized = true;
      }
      // Try to make and populate an event
      if (!_pythiaInstance->next()) throw EventFailureError();
      event.clear();
      convertOutput(_pythiaInstance->event, event);
    }


    /// Fill a Gambit::HECollider::Event from a Pythia8 event
    void Pythia8Backend::convertOutput(const PythiaEvent& pevt, Event& gevt) const {
      Pythia8::Vec4 ptot;
      vector<fastjet::PseudoJet> jetparticles;
      vector<fastjet::PseudoJet> bhadrons, taus;

      // cout << 1 << endl;

      // Make a first pass to gather unstable final B hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
        if (isFinalB(i, pevt)) bhadrons.push_back(vec4_to_pseudojet(p.p()));

        // Find last tau in tau replica chains as a proxy for tau-tagging
        // Also require that the tau are prompt
        /// @todo Only accept hadronically decaying taus?
        if (isFinalTau(i, pevt) && !fromHadron(i, pevt)) {
          taus.push_back(vec4_to_pseudojet(p.p()));
          Particle* gp = new Particle(vec4_to_p4(p.p()), p.id());
          gp->set_prompt();
          gevt.add_particle(gp); // Will be automatically categorised
        }
      }

      // cout << 2 << endl;

      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Only consider final state particles within ATLAS/CMS acceptance
        if (!p.isFinal()) continue;
        if (abs(p.eta()) > 5.0) continue;
        // Add to total final state momentum
        ptot += p.p();

        // Promptness: for leptons and photons we're only interested if they don't come from hadron/tau decays
        const bool prompt = !fromHadron(i, pevt) && !fromTau(i, pevt);

        if (prompt) {
          Particle* gp = new Particle(vec4_to_p4(p.p()), p.id());
          gp->set_prompt();
          gevt.add_particle(gp); // Will be automatically categorised
        } else {
          // Choose jet constituents (should include neutrinos?)
          /// @todo Don't exclude tau decay products, apparently: ATLAS treats them as jets
          /// @todo Use ghost tagging! For fun...
          jetparticles.push_back(vec4_to_pseudojet(p.p()));
        }

      }

      // cout << 3 << endl;

      // Jet finding
      // Currently hard-coded to use anti-kT R=0.4 jets above 30 GeV
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(30));

      // Do jet b-tagging, etc. and add to the Event
      foreach (const fastjet::PseudoJet& pj, pjets) {
        /// @todo Use ghost tagging! For fun...
        bool isB = false;
        foreach (const fastjet::PseudoJet& pb, bhadrons) {
          if (pj.delta_R(pb) < 0.3) {
            isB = true;
            break;
          }
        }
        /// Add to the event
        gevt.addJet(new Jet(pseudojet_to_p4(pj), isB));
      }

      // cout << 4 << endl;

      // MET (not equal to sum of prompt invisibles)
      gevt.set_missingmom(-vec4_to_p4(ptot));
    }


  }
}
