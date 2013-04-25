#pragma once

#include "FastJetUtils.hpp"
#include "Vectors.hpp"
#include "Event.hpp"
#include "Pythia.h"


namespace GAMBIT {


  /// @name Converters to/from Pythia8's native 4-vector
  //@{

  inline fastjet::PseudoJet vec4_to_pseudojet(const Pythia8::Vec4& p) {
    return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.e());
  }

  inline P4 vec4_to_p4(const Pythia8::Vec4& p) {
    return P4(p.px(), p.py(), p.pz(), p.e());
  }

  inline Pythia8::Vec4 pseudojet_to_vec4(const fastjet::PseudoJet& p) {
    Pythia8::Vec4 rtn;
    rtn.p(p.px(), p.py(), p.pz(), p.e());
    return rtn;
  }

  //@}


  /// @name Convenience functions on Py8 objects
  //@{

  inline double deltaPhi(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
    return deltaPhi(a.phi(), b.phi());
  }

  inline double deltaR(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
    const double deta = fabs(eta(a) - eta(b));
    const double dphi = deltaPhi(a, b);
    return deta*deta + dphi*dphi;
  }

  //@}


  /// @name Detailed Pythia8 event record walking/mangling functions
  //@{

  // bool fromBottom(int n, const Pythia8::Event& evt) {
  //   const Pythia8::Particle& p = evt[n];
  //   if (abs(p.id()) == 5 || hasBottom(p.id())) return true;
  //   /// @todo What about partonic decays?
  //   if (p.isParton()) return false; // stop the walking at hadron level
  //   for (int m : evt.motherList(n)) {
  //     if (fromBottom(m, evt)) return true;
  //   }
  //   return false;
  // }


  // bool fromTau(int n, const Pythia8::Event& evt) {
  //   const Pythia8::Particle& p = evt[n];
  //   if (abs(p.id()) == 15) return true;
  //   if (p.isParton()) return false; // stop the walking at hadron level
  //   for (int m : evt.motherList(n)) {
  //     if (fromBottom(m, evt)) return true;
  //   }
  //   return false;
  // }


  bool isReplica(int n, const Pythia8::Event& evt) {
    const Pythia8::Particle& p = evt[n];
    return p.daughter1() != 0 && p.daughter1() == p.daughter2();
  }


  void finalDescendants(int n, const Pythia8::Event& evt, vector<int>& rtn) {
    const Pythia8::Particle& p = evt[n];
    //assert(!p.isParton());
    if (p.isParton()) cerr << "PARTON IN DESCENDANT CHAIN FROM HADRON! NUM, ID = " << n << ", " << p.id() << endl;
    // for (int m : evt.daughterList(n)) {
    vector<int> daughters = evt.daughterList(n);
    for (size_t i = 0; i < daughters.size(); ++i) {
      int m = daughters[i];
      if (evt[m].isFinal()) {
        rtn.push_back(m);
      } else {
        finalDescendants(m, evt, rtn);
      }
    }
  }


  bool isFinalB(int n, const Pythia8::Event& evt) {
    // *This* particle must be a b or b-hadron
    if (!hasBottom(evt[n].id())) return false;
    // Daughters must *not* include a b or b-hadron
    // for (int m : evt.daughterList(n)) {
    vector<int> daughters = evt.daughterList(n);
    for (size_t i = 0; i < daughters.size(); ++i) {
      int m = daughters[i];
      if (hasBottom(evt[m].id())) return false;
    }
    return true;
  }


  bool isFinalTau(int n, const Pythia8::Event& evt) {
    // *This* particle must be a b or b-hadron
    if (abs(evt[n].id()) != 15) return false;
    // Daughters must *not* include a tau
    // for (int m : evt.daughterList(n)) {
    vector<int> daughters = evt.daughterList(n);
    for (size_t i = 0; i < daughters.size(); ++i) {
      int m = daughters[i];
      if (abs(evt[m].id()) == 15) return false;
    }
    return true;
  }


  vector<int> get_anaparticles(const Pythia8::Event& evt) {
    // Get the most physical b hadron and tau IDs
    vector<int> unstables;
    for (int n = 0; n < evt.size(); ++n) {
      if (isFinalB(n, evt)) unstables.push_back(n);
      if (isFinalTau(n, evt)) unstables.push_back(n);
    }
    // Identify the final state particles from those decays
    vector<int> rmparticles;
    // for (int n : unstables) finalDescendants(n, evt, rmparticles);
    for (size_t i = 0; i < unstables.size(); ++i) finalDescendants(unstables[i], evt, rmparticles);
    // Identify all final state particles, except those from b and tau decays where the parents are used
    vector<int> rtn = unstables;
    for (int n = 0; n < evt.size(); ++n) {
      if (!evt[n].isFinal()) continue;
      if (find(rmparticles.begin(), rmparticles.end(), n) == rmparticles.end()) rtn.push_back(n);
    }
    sort(rtn.begin(), rtn.end());
    return rtn;
  }

  //@}


  /// Fill a GAMBIT::Event from a Pythia8 event
  inline void fillGambitEvent(const Pythia8::Event& pevt, GAMBIT::Event& gevt) {
    for (int i = 0; i < pevt.size(); ++i) {
      if (!evt[i].isFinal()) continue;
      Particle* p = new Particle(vec4_to_p4(evt[i].mom(), evt[i].id()));
      /// @todo Promptness
      /// @todo b-tagging and taus
      e.addParticle(p);
    }
    /// @todo Jets
    /// @todo MET
  }


}
