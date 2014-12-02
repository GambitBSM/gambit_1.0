#pragma once

#include "shared_types.hpp"
#include "HEPUtils/Event.h"
#include "HEPUtils/Vectors.h"
#include "HEPUtils/FastJet.h"
#include "MCUtils/PIDUtils.h"

using namespace HEPUtils;
using namespace MCUtils;

namespace Gambit {
  namespace ColliderBit {


    /// @name Converters to/from Pythia8's native 4-vector
    //@{

    inline fastjet::PseudoJet mk_pseudojet(const Pythia8::Vec4& p) {
      return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.e());
    }

    using HEPUtils::mk_p4;

    inline P4 mk_p4(const Pythia8::Vec4& p) {
      const double m = p.mCalc();
      assert(m > -1e-3 && "Negative mass vector from Pythia8");
      return P4::mkXYZM(p.px(), p.py(), p.pz(), (m >= 0) ? m : 0);
    }

    inline P4 mk_p4(const Pythia8::Particle& p) {
      assert(p.m() >= 0);
      return P4::mkXYZM(p.px(), p.py(), p.pz(), p.m());
    }

    inline Pythia8::Vec4 mk_vec4(const fastjet::PseudoJet& p) {
      Pythia8::Vec4 rtn;
      rtn.p(p.px(), p.py(), p.pz(), p.e());
      return rtn;
    }

    //@}


    /// @name Convenience functions on Py8 objects
    //@{

    inline double deltaPhi(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
      return HEPUtils::deltaphi(a.phi(), b.phi());
    }

    inline double deltaR(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
      const double deta = fabs(a.eta() - b.eta());
      const double dphi = deltaPhi(a, b);
      return deta*deta + dphi*dphi;
    }

    //@}


    /// @name Detailed Pythia8 event record walking/mangling functions
    //@{


    /// @todo Rewrite using the Py8 > 176 particle-based methods
    inline bool fromBottom(int n, const Pythia8::Event& evt) {
      const Pythia8::Particle& p = evt[n];
      if (abs(p.id()) == 5 || MCUtils::PID::hasBottom(p.id())) return true;
      /// @todo What about partonic decays?
      if (p.isParton()) return false; // stop the walking at hadron level
      for (int m : evt.motherList(n)) {
        if (fromBottom(m, evt)) return true;
      }
      return false;
    }


    /// @todo Rewrite using the Py8 > 176 particle-based methods
    inline bool fromTau(int n, const Pythia8::Event& evt) {
      const Pythia8::Particle& p = evt[n];
      if (abs(p.id()) == 15) return true;
      if (p.isParton()) return false; // stop the walking at the end of the hadron level
      for (int m : evt.motherList(n)) {
        if (fromTau(m, evt)) return true;
      }
      return false;
    }


    /// @todo Rewrite using the Py8 > 176 particle-based methods
    inline bool fromHadron(int n, const Pythia8::Event& evt) {
      const Pythia8::Particle& p = evt[n];
      if (p.isHadron()) return true;
      if (p.isParton()) return false; // stop the walking at the end of the hadron level
      for (int m : evt.motherList(n)) {
        if (fromHadron(m, evt)) return true;
      }
      return false;
    }


    inline bool isReplica(int n, const Pythia8::Event& evt) {
      const Pythia8::Particle& p = evt[n];
      return p.daughter1() != 0 && p.daughter1() == p.daughter2();
    }


    inline void finalDescendants(int n, const Pythia8::Event& evt, std::vector<int>& rtn) {
      const Pythia8::Particle& p = evt[n];
      //assert(!p.isParton());
      if (p.isParton()) std::cerr << "PARTON IN DESCENDANT CHAIN FROM HADRON! NUM, ID = " << n << ", " << p.id() << std::endl;
      for (int m : evt.daughterList(n)) {
        if (evt[m].isFinal()) {
          rtn.push_back(m);
        } else {
          finalDescendants(m, evt, rtn);
        }
      }
    }


    inline bool isFinalB(int n, const Pythia8::Event& evt) {
      // *This* particle must be a b or b-hadron
      if (!MCUtils::PID::hasBottom(evt[n].id())) return false;
      // Daughters must *not* include a b or b-hadron
      for (int m : evt.daughterList(n)) {
        if (MCUtils::PID::hasBottom(evt[m].id())) return false;
      }
      return true;
    }


    inline bool isFinalTau(int n, const Pythia8::Event& evt) {
      // *This* particle must be a tau
      if (abs(evt[n].id()) != 15) return false;
      // Daughters must *not* include a tau
      for (int m : evt.daughterList(n)) {
        if (abs(evt[m].id()) == 15) return false;
      }
      return true;
    }


    // inline vector<int> get_anaparticles(const Pythia8::Event& evt) {
    //   // Get the most physical b hadron and tau IDs
    //   vector<int> unstables;
    //   for (int n = 0; n < evt.size(); ++n) {
    //     if (isFinalB(n, evt)) unstables.push_back(n);
    //     if (isFinalTau(n, evt)) unstables.push_back(n);
    //   }
    //   // Identify the final state particles from those decays
    //   vector<int> rmparticles;
    //   // for (int n : unstables) finalDescendants(n, evt, rmparticles);
    //   for (size_t i = 0; i < unstables.size(); ++i) finalDescendants(unstables[i], evt, rmparticles);
    //   // Identify all final state particles, except those from b and tau decays where the parents are used
    //   vector<int> rtn = unstables;
    //   for (int n = 0; n < evt.size(); ++n) {
    //     if (!evt[n].isFinal()) continue;
    //     if (find(rmparticles.begin(), rmparticles.end(), n) == rmparticles.end()) rtn.push_back(n);
    //   }
    //   sort(rtn.begin(), rtn.end());
    //   return rtn;
    // }

    //@}






    /// Fill a Gambit::Event from a Pythia8 event
    inline void fillGambitEvent(const Pythia8::Event& pevt, HEPUtils::Event& gevt) {
      Pythia8::Vec4 ptot;
      std::vector<fastjet::PseudoJet> jetparticles;
      std::vector<fastjet::PseudoJet> bhadrons, taus;

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
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
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
        /// @todo Don't exclude tau decay products, apparently: ATLAS treats them as jets
        const bool prompt = !fromHadron(i, pevt) && !fromTau(i, pevt);

        if (prompt) {
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          gevt.add_particle(gp); // Will be automatically categorised
        } else {
          jetparticles.push_back(mk_pseudojet(p.p()));
        }

      }

      // Jet finding
      // Currently hard-coded to use anti-kT R=0.4 jets above 30 GeV
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      std::vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(30));

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
        const P4 p4 = mk_p4(pj);
        gevt.addJet(new HEPUtils::Jet(p4, isB));
      }

      // MET (not equal to sum of prompt invisibles)
      gevt.set_missingmom(-mk_p4(ptot));
    }

  }
}
