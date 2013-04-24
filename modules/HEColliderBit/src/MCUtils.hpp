#pragma once

#include "Math.hpp"
#include "Vectors.hpp"

#include "Pythia.h"
#include "fastjet/PseudoJet.hh"


namespace GAMBIT {


  inline fastjet::PseudoJet vec4_to_pseudojet(const Pythia8::Vec4& p) {
    return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.e());
  }

  inline Pythia8::Vec4 pseudojet_to_vec4(const fastjet::PseudoJet& p) {
    Pythia8::Vec4 rtn;
    rtn.p(p.px(), p.py(), p.pz(), p.e());
    return rtn;
  }

  /// @todo Available as a Py::Vec4 member from 8.175 onwards? REMOVE
  inline double eta(const Pythia8::Vec4& p) {
    return -log(tan( 0.5 * p.theta() ));
  }

  inline double deltaPhi(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
    return deltaPhi(a.phi(), b.phi());
  }


  inline double deltaR(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
    const double deta = fabs(eta(a) - eta(b));
    const double dphi = deltaPhi(a, b);
    return deta*deta + dphi*dphi;
  }


  //////////////////////////////////////////////////////////

  // PID stuff

  template<size_t D> unsigned int digit(unsigned int val)    { return digit<D-1>(val/10); }
  template<>         unsigned int digit<1>(unsigned int val) { return val % 10; }

  inline bool hasQuark(unsigned int qid, int pid) {
    const unsigned int apid = abs(pid);
    if (apid == qid) return true;
    if (apid < 100 || abs(pid) > 10000) return false;
    return digit<2>(apid) == qid || digit<3>(apid) == qid || digit<4>(apid) == qid;
  }

  inline bool hasCharm(int pid) { return hasQuark(4, pid); }
  inline bool hasBottom(int pid) { return hasQuark(5, pid); }


  ////////////////////////////////////////////////////////////

  // bool fromBottom(int n, const Event& evt) {
  //   const Particle& p = evt[n];
  //   if (abs(p.id()) == 5 || hasBottom(p.id())) return true;
  //   /// @todo What about partonic decays?
  //   if (p.isParton()) return false; // stop the walking at hadron level
  //   for (int m : evt.motherList(n)) {
  //     if (fromBottom(m, evt)) return true;
  //   }
  //   return false;
  // }


  // bool fromTau(int n, const Event& evt) {
  //   const Particle& p = evt[n];
  //   if (abs(p.id()) == 15) return true;
  //   if (p.isParton()) return false; // stop the walking at hadron level
  //   for (int m : evt.motherList(n)) {
  //     if (fromBottom(m, evt)) return true;
  //   }
  //   return false;
  // }


  bool isReplica(int n, const Event& evt) {
    const Particle& p = evt[n];
    return p.daughter1() != 0 && p.daughter1() == p.daughter2();
  }


  void finalDescendants(int n, const Event& evt, vector<int>& rtn) {
    const Particle& p = evt[n];
    //assert(!p.isParton());
    if (p.isParton()) cerr << "PARTON IN DESCENDANT CHAIN FROM HADRON! NUM, ID = " << n << ", " << p.id() << endl;
    for (int m : evt.daughterList(n)) {
      if (evt[m].isFinal()) {
        rtn.push_back(m);
      } else {
        finalDescendants(m, evt, rtn);
      }
    }
  }


  bool isFinalB(int n, const Event& evt) {
    // *This* particle must be a b or b-hadron
    if (!hasBottom(evt[n].id())) return false;
    // Daughters must *not* include a b or b-hadron
    for (int m : evt.daughterList(n)) {
      if (hasBottom(evt[m].id())) return false;
    }
    return true;
  }


  bool isFinalTau(int n, const Event& evt) {
    // *This* particle must be a b or b-hadron
    if (abs(evt[n].id()) != 15) return false;
    // Daughters must *not* include a tau
    for (int m : evt.daughterList(n)) {
      if (abs(evt[m].id()) == 15) return false;
    }
    return true;
  }


  vector<int> get_anaparticles(const Event& evt) {
    // Get the most physical b hadron and tau IDs
    vector<int> unstables;
    for (int n = 0; n < evt.size(); ++n) {
      if (isFinalB(n, evt)) unstables.push_back(n);
      if (isFinalTau(n, evt)) unstables.push_back(n);
    }
    // Identify the final state particles from those decays
    vector<int> rmparticles;
    for (int n : unstables) finalDescendants(n, evt, rmparticles);
    // Identify all final state particles, except those from b and tau decays where the parents are used
    vector<int> rtn = unstables;
    for (int n = 0; n < evt.size(); ++n) {
      if (!evt[n].isFinal()) continue;
      if (find(rmparticles.begin(), rmparticles.end(), n) == rmparticles.end()) rtn.push_back(n);
    }
    sort(rtn.begin(), rtn.end());
    return rtn;
  }


}
