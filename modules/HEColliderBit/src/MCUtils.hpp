#pragma once

#include "Pythia.h"
#include "fastjet/PseudoJet.hh"


inline fastjet::PseudoJet vec4_to_pseudojet(const Pythia8::Vec4& p) {
  return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.e());
}

inline Pythia8::Vec4 pseudojet_to_vec4(const fastjet::PseudoJet& p) {
  Pythia8::Vec4 rtn;
  rtn.p(p.px(), p.py(), p.pz(), p.e());
  return rtn;
}

inline double eta(const Pythia8::Vec4& p) {
  return -log(tan( 0.5 * p.theta() ));
}

inline double deltaPhi(const Pythia8::Vec4& a, const Pythia8::Vec4& b) {
  double rtn = a.phi() - b.phi();
  //cout << "A" << rtn << endl;
  rtn = fmod(rtn, 2*M_PI);
  if (rtn == 0) return 0;
  assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
  rtn = (rtn >   M_PI ? rtn-2*M_PI :
         rtn <= -M_PI ? rtn+2*M_PI : rtn);
  assert(rtn > -M_PI && rtn <= M_PI);
  if (rtn < 0) rtn += M_PI;
  //cout << "B" << rtn << endl;
  assert(rtn > 0 && rtn <= M_PI);
  return rtn;
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
