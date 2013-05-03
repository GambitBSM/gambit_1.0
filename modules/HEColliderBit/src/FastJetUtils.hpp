#pragma once

#include "MathUtils.hpp"
#include "Vectors.hpp"

#include "fastjet/PseudoJet.hh"
#include "fastjet/ClusterSequence.hh"

namespace GAMBIT {


  /// @name Converters to/from the Gambit 4-vector
  //@{

  inline fastjet::PseudoJet p4_to_pseudojet(const P4& p) {
    return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.E());
  }

  inline P4 pseudojet_to_p4(const fastjet::PseudoJet& p) {
    return P4(p.px(), p.py(), p.pz(), p.e());
  }

  //@}


  /// Construct pT-sorted jets using the @a alg measure with jet @a R parameter, and min pT @a ptmin (in MeV)
  inline std::vector<fastjet::PseudoJet> get_jets(const std::vector<fastjet::PseudoJet>& particles,
                                                  double R, double ptmin, fastjet::JetAlgorithm alg=fastjet::antikt_algorithm) {
    const fastjet::JetDefinition jet_def(alg, R);
    fastjet::ClusterSequence cseq(particles, jet_def);
    return fastjet::sorted_by_pt(cseq.inclusive_jets(ptmin));
  }



  inline double deltaPhi(const fastjet::PseudoJet& a, const fastjet::PseudoJet& b) {
    return deltaPhi(a.phi(), b.phi());
  }


  inline double deltaR(const fastjet::PseudoJet& a, const fastjet::PseudoJet& b) {
    const double deta = fabs(a.eta() - b.eta());
    const double dphi = deltaPhi(a, b);
    return deta*deta + dphi*dphi;
  }


}
