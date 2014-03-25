#pragma once

#include "MCUtils/HepMCEventUtils.h"
#include "MCUtils/FastJet.h"
#include "fastjet/ClusterSequence.hh"

namespace MCUtils {


  /// @name Jet builders, from various input types
  //@{

  /// Construct pT-sorted jets using the @a alg measure with jet @a R parameter, and min pT @a ptmin (in MeV)
  inline std::vector<PseudoJet> get_jets(const std::vector<PseudoJet>& particles, double R, double ptmin,
                                         fastjet::JetAlgorithm alg=fastjet::antikt_algorithm) {
    const fastjet::JetDefinition jet_def(alg, R);
    /// @todo Add area definition?
    fastjet::ClusterSequence cseq(particles, jet_def); //< @todo Need new + auto_ptr?
    return sorted_by_pt(cseq.inclusive_jets(ptmin));
  }


  /// Construct pT-sorted jets using the @a alg measure with jet @a R parameter, and min pT @a ptmin (in MeV)
  inline std::vector<PseudoJet> get_jets(const GenParticlesC& particles, double R, double ptmin,
                                         fastjet::JetAlgorithm alg=fastjet::antikt_algorithm) {
    /// @todo Convert to use filter_jet_inputs
    return get_jets(mk_pseudojets(filter_stable(particles)), R, ptmin, alg);
  }


  /// Construct pT-sorted jets using the @a alg measure with jet @a R parameter, and min pT @a ptmin (in MeV)
  inline std::vector<PseudoJet> get_jets(const HepMC::GenEvent* evt, double R, double ptmin,
                                         fastjet::JetAlgorithm alg=fastjet::antikt_algorithm) {
    /// @todo Convert to use get_jet_inputs
    return get_jets(mk_pseudojets(get_stable(evt)), R, ptmin, alg);
  }

  //@}


  /// @todo Make safe photon clustering for charged leptons

  /// @todo Make tau, B, top and W/Z finders (both safe and direct versions)


}
