// -*- C++ -*-
//
// This file is part of MCUtils -- https://bitbucket.org/andybuckley/mcutils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of MCUtils code in other projects is permitted provided this
// notice is retained and the MCUtils namespace and include path are changed.
//
#pragma once

#if __cplusplus <= 199711L
#error "This library needs at least a C++11 compliant compiler: are you using -std=c++11?"
#endif

/// @file Functions for working with HepMC particles
/// @author Andy Buckley <andy.buckley@cern.ch>
/// @author Nataliia Kondrashova <nataliia.kondrashova@cern.ch>

#include "HepMC/GenEvent.h"
#include <vector>

#include "HEPUtils/Utils.h"
#include "HEPUtils/MathUtils.h"

namespace MCUtils {

  using HEPUtils::sqr;


  /// @name Friendlier HepMC type typedefs
  //@{
  typedef std::vector<HepMC::GenParticle*> GenParticles;
  typedef std::vector<const HepMC::GenParticle*> GenParticlesC;
  //@}


  /// @name Particle constness converters
  ///
  /// @note These are just syntactic sugar: this is already not so inconvenient!
  //@{
  inline const HepMC::GenParticle* mk_const(HepMC::GenParticle* gp) { return const_cast<const HepMC::GenParticle*>(gp); }
  inline HepMC::GenParticle* mk_unconst(const HepMC::GenParticle* const_gp) { return const_cast<HepMC::GenParticle*>(const_gp); }
  //@}


  /// @name Container constness converters
  ///
  /// @note Pointers in containers will still point to the same objects after
  /// const conversion!
  ///
  /// @note Due to constness rules, new vectors have to be made and
  /// populated. So this is not super-efficient, but seems to be necessary.
  //@{

  inline GenParticlesC mk_const(const GenParticles& gps) {
    GenParticlesC rtn;
    rtn.reserve(gps.size());
    for (const HepMC::GenParticle* gp : gps) {
      rtn.push_back(gp);
    }
    return rtn;
  }

  inline GenParticles mk_unconst(const GenParticlesC& const_gps) {
    GenParticles rtn;
    rtn.reserve(const_gps.size());
    for (const HepMC::GenParticle* const_gp : const_gps) {
      rtn.push_back(const_cast<HepMC::GenParticle*>(const_gp));
    }
    return rtn;
  }

  //@}


  /// @name Convenience functions for finding interesting particle relatives
  //@{

  /// Find the first particle with the same PID (first replica)
  /// @todo Make arg const
  inline HepMC::GenParticle* findFirstReplica(HepMC::GenParticle* p) {
    // If no prod vtx or either zero or many incoming, return p itself
    HepMC::GenVertex* prod_vertex = p->production_vertex();
    if (prod_vertex == NULL || prod_vertex->particles_in_size() != 1) return p;
    // There is only one outgoing particle (assumed valid): return p if it has a different PID
    HepMC::GenParticle* pnext = *prod_vertex->particles_begin(HepMC::parents);
    if (pnext->pdg_id() != p->pdg_id()) return p;
    // The next particle is a replica: find *its* first replica recursively
    return findFirstReplica(pnext);
  }


  /// Find the last particle with the same PID (last replica)
  /// @todo Make arg const
  inline HepMC::GenParticle* findLastReplica(HepMC::GenParticle* p) {
    // If no decay vtx or either zero or many outgoing, return p itself
    HepMC::GenVertex* decay_vertex = p->end_vertex();
    if (decay_vertex == NULL || decay_vertex->particles_out_size() != 1) return p;
    // There is only one outgoing particle (assumed valid): return p if it has a different PID
    HepMC::GenParticle* pnext = *decay_vertex->particles_begin(HepMC::children);
    if (pnext->pdg_id() != p->pdg_id()) return p;
    // The next particle is a replica: find *its* last replica recursively
    return findLastReplica(pnext);
  }


  /// Find the mother particles with a PID different to the one of the starting point
  /// @todo Make arg const
  inline std::vector<HepMC::GenParticle*> findParents(HepMC::GenParticle* p) {
    GenParticles rtn;
    if (!p->production_vertex()) return rtn;
    HepMC::GenParticle* fr = findFirstReplica(p);
    //return MCUtils::parents(fr);
    if (!fr || !fr->production_vertex()) return rtn;
    HepMC::GenVertex* v = fr->production_vertex();
    for (HepMC::GenVertex::particle_iterator ip = v->particles_begin(HepMC::parents); ip != v->particles_end(HepMC::parents); ++ip)
      rtn.push_back(*ip);
    return rtn;
  }


  /// Find the daughter particles with a PID different to the one of the starting point
  /// @todo Make arg const
  inline std::vector<HepMC::GenParticle*> findChildren(HepMC::GenParticle* p) {
    GenParticles rtn;
    if (!p->end_vertex()) return rtn;
    HepMC::GenParticle* lr = findLastReplica( p );
    //return children(lr);
    if (!lr || !lr->production_vertex()) return rtn;
    HepMC::GenVertex* v = lr->end_vertex();
    for (HepMC::GenVertex::particle_iterator ip = v->particles_begin(HepMC::children); ip != v->particles_end(HepMC::children); ++ip)
      rtn.push_back(*ip);
    return rtn;
  }


  /// @brief Calculate flight length before decay
  ///
  /// Returns -1 for stable (or weird) particles!
  inline double flightLength(const HepMC::GenParticle* p) {
    if (!p->production_vertex() || !p->end_vertex()) return -1;
    const HepMC::FourVector& birth = p->production_vertex()->position();
    const HepMC::FourVector& decay = p->end_vertex()->position();
    return sqrt( sqr(decay.x()-birth.x()) + sqr(decay.y()-birth.y()) + sqr(decay.z()-birth.z()) );
  }

  //@}


}
