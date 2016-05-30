// -*- C++ -*-
//
// This file is part of MCUtils -- https://bitbucket.org/andybuckley/mcutils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of MCUtils code in other projects is permitted provided this
// notice is retained and the MCUtils namespace and include path are changed.
//
#pragma once

/// @file Functions for navigating HepMC record contents
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "HepMC/GenEvent.h"
#include <vector>
#include <stdexcept>

#include "HEPUtils/Utils.h"
#include "MCUtils/HepMCParticleUtils.h"
#include "MCUtils/HepMCVertexUtils.h"

namespace MCUtils {


  /// @name Event constness converters
  ///
  /// @note These are just syntactic sugar: this is already not so inconvenient!
  //@{
  inline const HepMC::GenEvent* mk_const(HepMC::GenEvent* ge) { return const_cast<const HepMC::GenEvent*>(ge); }
  inline HepMC::GenEvent* mk_unconst(const HepMC::GenEvent* const_ge) { return const_cast<HepMC::GenEvent*>(const_ge); }
  //@}


  /// @brief Get the event weight
  ///
  /// Defaults to the first weight if there are several, 1 if there are none.
  ///
  /// @note Events may increasingly have multiple physically meaningful weights,
  /// expressing scale, PDF, etc. systematic variations.
  ///
  /// @todo Generalise/overload for string indices
  inline double get_weight(const HepMC::GenEvent* evt, size_t index=0) {
    if (evt->weights().empty()) return 1.0;
    if (index >= evt->weights().size()) throw std::runtime_error("Requested weight array index out of bounds");
    return evt->weights()[index];
  }


  /// @name Convenience functions for particle/vertex looping
  /// @todo Provide functions for particles in/out, different relations, only gen-stable particles, accepting predicates, etc.
  //@{

  /// @todo Remove reference-based functions -- always use pointers for HepMC objects?

  /// Get a vector of GenParticle pointers on which to iterate as an alternative to HepMC iterators
  inline GenParticles particles(const HepMC::GenEvent& ge) {
    GenParticles rtn;
    for (HepMC::GenEvent::particle_const_iterator pi = ge.particles_begin(); pi != ge.particles_end(); ++pi) {
      rtn.push_back(*pi);
    }
    return rtn;
  }
  /// Get a vector of GenParticle pointers on which to iterate as an alternative to HepMC iterators
  inline GenParticles particles(const HepMC::GenEvent* ge) {
    assert(ge);
    return particles(*ge);
  }


  /// Get a vector of const GenParticle pointers on which to iterate as an alternative to HepMC iterators
  inline GenParticlesC const_particles(const HepMC::GenEvent& ge) {
    GenParticlesC rtn;
    for (HepMC::GenEvent::particle_const_iterator pi = ge.particles_begin(); pi != ge.particles_end(); ++pi) {
      rtn.push_back(*pi);
    }
    return rtn;
  }
  /// Get a vector of const GenParticle pointers on which to iterate as an alternative to HepMC iterators
  inline GenParticlesC const_particles(const HepMC::GenEvent* ge) {
    assert(ge);
    return const_particles(*ge);
  }



  /// Get a vector of GenVertex pointers on which to iterate as an alternative to HepMC iterators
  inline GenVertices vertices(const HepMC::GenEvent& ge) {
    GenVertices rtn;
    for (HepMC::GenEvent::vertex_const_iterator vi = ge.vertices_begin(); vi != ge.vertices_end(); ++vi) {
      rtn.push_back(*vi);
    }
    return rtn;
  }
  /// Get a vector of GenVertex pointers on which to iterate as an alternative to HepMC iterators
  inline GenVertices vertices(const HepMC::GenEvent* ge) {
    assert(ge);
    return vertices(*ge);
  }


  /// Get a vector of const GenVertex pointers on which to iterate as an alternative to HepMC iterators
  inline GenVerticesC const_vertices(const HepMC::GenEvent& ge) {
    GenVerticesC rtn;
    for (HepMC::GenEvent::vertex_const_iterator vi = ge.vertices_begin(); vi != ge.vertices_end(); ++vi) {
      rtn.push_back(*vi);
    }
    return rtn;
  }
  /// Get a vector of const GenVertex pointers on which to iterate as an alternative to HepMC iterators
  inline GenVerticesC const_vertices(const HepMC::GenEvent* ge) {
    assert(ge);
    return const_vertices(*ge);
  }



  /// Get a vector of GenParticle pointers on which to iterate as an alternative to HepMC iterators
  ///
  /// @a range is one of HepMC::relatives, HepMC::descendants, HepMC::children, HepMC::ancestors, HepMC::parents
  inline GenParticles particles(HepMC::GenVertex& gv, HepMC::IteratorRange range) {
    GenParticles rtn;
    for (HepMC::GenVertex::particle_iterator pi = gv.particles_begin(range); pi != gv.particles_end(range); ++pi) {
      rtn.push_back(*pi);
    }
    return rtn;
  }
  /// Get a vector of GenParticle pointers on which to iterate as an alternative to HepMC iterators
  ///
  /// @a range is one of HepMC::relatives, HepMC::descendants, HepMC::children, HepMC::ancestors, HepMC::parents
  inline GenParticles particles(HepMC::GenVertex* gv, HepMC::IteratorRange range) {
    assert(gv);
    return particles(*gv, range);
  }

  /// Get a vector of const GenParticle pointers on which to iterate as an alternative to HepMC iterators
  ///
  /// @a range is one of HepMC::relatives, HepMC::descendants, HepMC::children, HepMC::ancestors, HepMC::parents
  inline GenParticlesC const_particles(const HepMC::GenVertex& gv, HepMC::IteratorRange range) {
    GenParticlesC rtn;
    HepMC::GenVertex& gv2 = const_cast<HepMC::GenVertex&>(gv);
    for (HepMC::GenVertex::particle_iterator pi = gv2.particles_begin(range); pi != gv2.particles_end(range); ++pi) {
      rtn.push_back(*pi);
    }
    return rtn;
  }
  /// Get a vector of const GenParticle pointers on which to iterate as an alternative to HepMC iterators
  ///
  /// @a range is one of HepMC::relatives, HepMC::descendants, HepMC::children, HepMC::ancestors, HepMC::parents
  inline GenParticlesC const_particles(const HepMC::GenVertex* gv, HepMC::IteratorRange range) {
    assert(gv);
    return const_particles(*gv, range);
  }


  /// @name Convenience-named particle relative access functions
  //@{

  inline GenParticles children(HepMC::GenVertex& gv) { return particles(gv, HepMC::children); }
  inline GenParticles children(HepMC::GenVertex* gv) { return particles(gv, HepMC::children); }
  inline GenParticlesC const_children(const HepMC::GenVertex& gv) { return const_particles(gv, HepMC::children); }
  inline GenParticlesC const_children(const HepMC::GenVertex* gv) { return const_particles(gv, HepMC::children); }
  //
  inline GenParticles parents(HepMC::GenVertex& gv) { return particles(gv, HepMC::parents); }
  inline GenParticles parents(HepMC::GenVertex* gv) { return particles(gv, HepMC::parents); }
  inline GenParticlesC const_parents(const HepMC::GenVertex& gv) { return const_particles(gv, HepMC::parents); }
  inline GenParticlesC const_parents(const HepMC::GenVertex* gv) { return const_particles(gv, HepMC::parents); }
  //
  inline GenParticles descendants(HepMC::GenVertex& gv) { return particles(gv, HepMC::descendants); }
  inline GenParticles descendants(HepMC::GenVertex* gv) { return particles(gv, HepMC::descendants); }
  inline GenParticlesC const_descendants(const HepMC::GenVertex& gv) { return const_particles(gv, HepMC::descendants); }
  inline GenParticlesC const_descendants(const HepMC::GenVertex* gv) { return const_particles(gv, HepMC::descendants); }
  //
  inline GenParticles ancestors(HepMC::GenVertex& gv) { return particles(gv, HepMC::ancestors); }
  inline GenParticles ancestors(HepMC::GenVertex* gv) { return particles(gv, HepMC::ancestors); }
  inline GenParticlesC const_ancestors(const HepMC::GenVertex& gv) { return const_particles(gv, HepMC::ancestors); }
  inline GenParticlesC const_ancestors(const HepMC::GenVertex* gv) { return const_particles(gv, HepMC::ancestors); }

  /// Similar functions for particle relative access direct from GenParticle rather than GenVertex
  inline GenParticles children(HepMC::GenParticle& gp) { return (gp.end_vertex() != NULL) ? particles(gp.end_vertex(), HepMC::children) : GenParticles(); }
  inline GenParticles children(HepMC::GenParticle* gp) { return MCUtils::children(*gp); }
  inline GenParticlesC const_children(const HepMC::GenParticle& gp) { return (gp.end_vertex() != NULL) ? const_particles(gp.end_vertex(), HepMC::children) : GenParticlesC(); }
  inline GenParticlesC const_children(const HepMC::GenParticle* gp) { return const_children(*gp); }
  //
  inline GenParticles parents(HepMC::GenParticle& gp) { return (gp.production_vertex() != NULL) ? particles(gp.production_vertex(), HepMC::parents) : GenParticles(); }
  inline GenParticles parents(HepMC::GenParticle* gp) { return MCUtils::parents(*gp); }
  inline GenParticlesC const_parents(const HepMC::GenParticle& gp) { return (gp.production_vertex() != NULL) ? const_particles(gp.production_vertex(), HepMC::parents) : GenParticlesC(); }
  inline GenParticlesC const_parents(const HepMC::GenParticle* gp) { return const_parents(*gp); }
  //
  inline GenParticles descendants(HepMC::GenParticle& gp) { return (gp.end_vertex() != NULL) ? particles(gp.end_vertex(), HepMC::descendants) : GenParticles(); }
  inline GenParticles descendants(HepMC::GenParticle* gp) { return MCUtils::descendants(*gp); }
  inline GenParticlesC const_descendants(const HepMC::GenParticle& gp) { return (gp.end_vertex() != NULL) ? const_particles(gp.end_vertex(), HepMC::descendants) : GenParticlesC(); }
  inline GenParticlesC const_descendants(const HepMC::GenParticle* gp) { return const_descendants(*gp); }
  //
  inline GenParticles ancestors(HepMC::GenParticle& gp) { return (gp.production_vertex() != NULL) ? particles(gp.production_vertex(), HepMC::ancestors) : GenParticles(); }
  inline GenParticles ancestors(HepMC::GenParticle* gp) { return MCUtils::ancestors(*gp); }
  inline GenParticlesC const_ancestors(const HepMC::GenParticle& gp) { return (gp.production_vertex() != NULL) ? const_particles(gp.production_vertex(), HepMC::ancestors) : GenParticlesC(); }
  inline GenParticlesC const_ancestors(const HepMC::GenParticle* gp) { return const_ancestors(*gp); }

  //@}


  /// @name High-level event handling functions
  //@{

  /// Find the (most likely) primary vertex position for this event
  inline HepMC::ThreeVector primaryVertex(const HepMC::GenEvent* genEvent) {
    // Get the decay vertex of the beam particle
    if (genEvent->valid_beam_particles()) {
      HepMC::GenParticle* p = genEvent->beam_particles().first;
      HepMC::GenVertex* v = p->end_vertex();
      if (v != NULL) return v->point3d();
      else std::cout << "The beam particles have no end vertex" << std::endl;
    }
    // Or get the signal process vertex position
    else if (genEvent->signal_process_vertex() != NULL) {
      return genEvent->signal_process_vertex()->point3d();
    }
    // Or get the production vertex of a final particle whose status is not 1 or 2
    else if (!genEvent->particles_empty()) {
      for (HepMC::GenEvent::particle_const_iterator ip = genEvent->particles_begin(); ip != genEvent->particles_end(); ++ip) {
        if ((*ip)->status() != 1 && (*ip)->status() != 2) {
          const HepMC::GenParticle* p = *ip;
          if (p->production_vertex() != NULL) return p->production_vertex()->point3d();
        }
      }
    }
    // Or get the vertex (either begin or end!) of the particle with barcode == 1
    else {
      HepMC::GenParticle* p = genEvent->barcode_to_particle(1);
      if (p != NULL) {
        if (p->production_vertex() != NULL) return p->production_vertex()->point3d();
        else if (p->end_vertex() != NULL) return p->end_vertex()->point3d();
        else std::cerr << "The first particle has no production vertex and no end vertex" << std::endl;
      }
      else std::cerr << "No particle with barcode 1" << std::endl;
    }
    // No particle with a primary vertex was found, hence returning pv(0,0,0)
    std::cerr << "Primary vertex could not be determined" << std::endl;
    return HepMC::ThreeVector(0., 0., 0.);
  }

  //@}


}
