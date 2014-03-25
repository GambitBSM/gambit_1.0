#pragma once

/// @file FastJet helper routines
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "MCUtils/Utils.h"
#include "fastjet/PseudoJet.hh"

namespace MCUtils {


  /// Use FastJet's namespace implicitly
  using namespace fastjet;


  /// @name Converters between HepMC and FastJet momentum types
  //@{

  /// @todo Enable... conditionally on FJ version?
  // /// For attaching the GenParticle provenance info to a PseudoJet
  // struct HepMCInfo : public PseudoJet::UserInfoBase {
  //     HepMCInfo(const HepMC::GenParticle* gp) : genparticle(gp) { }
  //     const HepMC::GenParticle* genparticle;
  // };
  //
  // // Usage: const GenParticle* gp = pj.user_info<HepMCInfo>().genparticle;

  /// @todo Write a better Particle... maybe one that inherits from PseudoJet...

  /// Convert a HepMC FourVector to a FastJet PseudoJet
  inline PseudoJet mk_pseudojet(const HepMC::FourVector& p4) {
    return PseudoJet(p4.px(), p4.py(), p4.pz(), p4.e());
  }

  /// Convert a HepMC GenParticle to a FastJet PseudoJet
  inline PseudoJet mk_pseudojet(const HepMC::GenParticle* gp) {
    PseudoJet pj = mk_pseudojet(gp->momentum());
    //pj.set_user_info(new HepMCInfo(p));
    return pj;
  }

  /// Convert a vector of HepMC GenParticles to a vector of FastJet PseudoJets
  inline std::vector<PseudoJet> mk_pseudojets(const std::vector<const HepMC::GenParticle*>& gps) {
    std::vector<PseudoJet> pjs;
    foreach (const HepMC::GenParticle* gp, gps) {
      pjs.push_back( mk_pseudojet(gp) );
    }
    return pjs;
  }

  //@}


}
