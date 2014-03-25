#pragma once

/// @file FastJet helper routines
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "MCUtils/Utils.h"
#include "MCUtils/Vectors.h"
#include "fastjet/PseudoJet.hh"
#include "fastjet/ClusterSequence.hh"

namespace MCUtils {


  /// Use FastJet's namespace implicitly
  //using namespace fastjet;


  /// @name Converters between MCUtils, HepMC and FastJet momentum types
  //@{


  /// @todo Enable... conditionally on FJ version?
  // /// For attaching the GenParticle provenance info to a PseudoJet
  // struct HepMCInfo : public PseudoJet::UserInfoBase {
  //     HepMCInfo(const HepMC::GenParticle* gp) : genparticle(gp) { }
  //     const HepMC::GenParticle* genparticle;
  // };
  //
  // // Usage: const GenParticle* gp = pj.user_info<HepMCInfo>().genparticle;


  /// Convert a P4 to a FastJet PseudoJet
  inline fastjet::PseudoJet p4_to_pseudojet(const P4& p) {
    return fastjet::PseudoJet(p.px(), p.py(), p.pz(), p.E());
  }

  /// Convert a FastJet PseudoJet to a P4
  inline P4 pseudojet_to_p4(const fastjet::PseudoJet& p) {
    const double m = p.m();
    assert(m > -1e-3 && "Negative mass vector from FastJet");
    return P4::mkXYZM(p.px(), p.py(), p.pz(), (m >= 0) ? m : 0);
  }

  /// Convert a HepMC FourVector to a FastJet PseudoJet
  inline fastjet::PseudoJet fourvec_to_pseudojet(const HepMC::FourVector& p4) {
    return fastjet::PseudoJet(p4.px(), p4.py(), p4.pz(), p4.e());
  }

  /// Convert a HepMC GenParticle to a FastJet PseudoJet
  inline fastjet::PseudoJet genparticle_to_pseudojet(const HepMC::GenParticle* gp) {
    fastjet::PseudoJet pj = mk_pseudojet(gp->momentum());
    //pj.set_user_info(new HepMCInfo(p));
    return pj;
  }



  /// Convert a vector of HepMC GenParticles to a vector of FastJet PseudoJets
  inline std::vector<fastjet::PseudoJet> genparticles_to_pseudojets(const std::vector<const HepMC::GenParticle*>& gps) {
    std::vector<fastjet::PseudoJet> pjs;
    foreach (const HepMC::GenParticle* gp, gps) {
      pjs.push_back( mk_pseudojet(gp) );
    }
    return pjs;
  }

  //@}


}
