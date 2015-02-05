// -*- C++ -*-
//
// This file is part of HEPUtils -- https://bitbucket.org/andybuckley/heputils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of HEPUtils code in other projects is permitted provided this
// notice is retained and the HEPUtils namespace and include path are changed.
//
#pragma once

#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"
#include <algorithm>

namespace HEPUtils {


  /// Simple event class, separating into various classes of particle
  class Event {
  private:

    /// @name Internal particle / vector containers
    //@{

    /// @name Separate particle collections
    //@{
    std::vector<Particle*> _photons, _electrons, _muons, _taus, _invisibles;
    //@}

    /// Jets collection (mutable to allow sorting)
    mutable std::vector<Jet*> _jets;

    /// Missing momentum vector
    P4 _pmiss;

    //@}

  public:

    /// @todo Need separate types of event (subclasses?) for what gets passed to detsim and to analysis?

    /// @todo Should Event be able to do its own MET and SET calculations & jet construction? Defns differ...


    /// @name Constructors
    //@{

    /// Default constructor
    Event() { clear(); }

    /// Constructor from a list of Particles
    Event(const std::vector<Particle*>& ps) {
      clear();
      add_particles(ps);
    }

    /// Destructor (cleans up all passed Particles and calculated Jets)
    ~Event() {
      clear();
    }

    /// Copy assignment (shallow-copies Particle pointers)
    void operator = (const Event& e) {
      clear(); //< Delete current particles
      _photons = e._photons;
      _electrons = e._electrons;
      _muons = e._muons;
      _taus = e._taus;
      _invisibles = e._invisibles;
      _jets = e._jets;
      _pmiss = e._pmiss;
      //return *this;
    }

    /// Clone a copy on the heap
    Event* clone() const {
      Event* rtn = new Event();
      std::vector<Particle*> ps = particles();
      for (size_t i = 0; i < ps.size(); ++i) {
        rtn->add_particle(new Particle(*ps[i]));
      }
      std::vector<Jet*> js = jets();
      for (size_t i = 0; i < js.size(); ++i) {
        rtn->add_jet(new Jet(*js[i]));
      }
      rtn->_pmiss = _pmiss;
      return rtn;
    }

    //@}


    /// Empty the event's particle, jet and MET collections
    void clear() {
      /// @todo Prefer this form when we can use C++11's range-for
      // for (Particle* p : particles()) delete p;
      std::vector<Particle*> ps = particles();
      for (size_t i = 0; i < ps.size(); ++i) { delete ps[i]; }
      ps.clear();
      _photons.clear();
      _electrons.clear();
      _muons.clear();
      _taus.clear();
      /// @todo Really need to store invisibles when we have a dedicated MET variable?
      _invisibles.clear();

      /// @todo Prefer this form when we can use C++11's range-for
      // if (!_jets.empty()) for (Jet* j : jets()) delete j;
      if (!_jets.empty()) for (size_t i = 0; i < _jets.size(); ++i) delete _jets[i];
      _jets.clear();

      _pmiss.clear();
    }


    /// Add a final state particle to the event
    /// @todo Clarify ownership/lifetimes -- owned by outside code, or *to be cleaned up by the event on deletion*? THE LATTER
    /// @todo What about taus and Bs?
    /// @todo "Lock" at some point so that jet finding etc. only get done once
    void add_particle(Particle* p) {
      if (p->is_prompt()) {
        if (p->pid() == 22) _photons.push_back(p);
        if (p->abspid() == 11) _electrons.push_back(p);
        if (p->abspid() == 13) _muons.push_back(p);
        if (p->abspid() == 15) _taus.push_back(p);
        if (p->abspid() == 12 || p->abspid() == 14 || p->abspid() == 16 || p->pid() == 1000022) _invisibles.push_back(p);
      }
    }


    /// Add a collection of final state particles to the event
    /// @todo Should be vector<const Particle*>?
    void add_particles(const std::vector<Particle*>& ps) {
      for (size_t i = 0; i < ps.size(); ++i) add_particle(ps[i]);
    }


    /// Get all final state particles
    /// @todo Note the return by value: it's not efficient yet!
    /// @note Overlap of taus and e/mu
    std::vector<Particle*> particles() const {
      // Add together all the vectors of the different particle types
      std::vector<Particle*> rtn;
      // rtn.reserve(visible_particles().size() + _invisibles.size());
      rtn.reserve(_photons.size() + _electrons.size() + _muons.size() + _taus.size() + _invisibles.size());
      #define APPEND_VEC(vec) rtn.insert(rtn.end(), vec.begin(), vec.end())
      // APPEND_VEC(visible_particles());
      APPEND_VEC(_photons);
      APPEND_VEC(_electrons);
      APPEND_VEC(_muons);
      APPEND_VEC(_taus);
      APPEND_VEC(_invisibles);
      #undef APPEND_VEC
      return rtn;
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
      /// @todo Cache, or otherwise think about efficiency since this gets called by the destructor
    }


    /// Get visible state particles
    /// @todo Note the return by value: it's not efficient yet!
    /// @note Overlap of taus and e/mu
    std::vector<Particle*> visible_particles() const {
      // Add together all the vectors of the different particle types
      std::vector<Particle*> rtn;
      rtn.reserve(_photons.size() + _electrons.size() + _muons.size() + _taus.size());
      #define APPEND_VEC(vec) rtn.insert(rtn.end(), vec.begin(), vec.end() )
      APPEND_VEC(_photons);
      APPEND_VEC(_electrons);
      APPEND_VEC(_muons);
      APPEND_VEC(_taus);
      #undef APPEND_VEC
      return rtn;
      /// @todo Add together all the vectors of the different particle types
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
    }


    /// Get invisible final state particles
    const std::vector<Particle*>& invisible_particles() const {
      return _invisibles;
    }
    /// Get invisible final state particles (non-const)
    std::vector<Particle*>& invisible_particles() {
      return _invisibles;
    }


    /// Get prompt electrons
    const std::vector<Particle*>& electrons() const {
      return _electrons;
    }
    /// Get prompt electrons (non-const)
    std::vector<Particle*>& electrons() {
      return _electrons;
    }


    /// Get prompt muons
    const std::vector<Particle*>& muons() const {
      return _muons;
    }
    /// Get prompt muons (non-const)
    std::vector<Particle*>& muons() {
      return _muons;
    }


    /// Get prompt (hadronic) taus
    const std::vector<Particle*>& taus() const {
      return _taus;
    }
    /// Get prompt (hadronic) taus (non-const)
    std::vector<Particle*>& taus() {
      return _taus;
    }


    /// Get prompt photons
    const std::vector<Particle*>& photons() const {
      return _photons;
    }
    /// Get prompt photons (non-const)
    std::vector<Particle*>& photons() {
      return _photons;
    }


    /// @name Jets
    /// @todo Why the new'ing? Can we use references more?
    //@{

    /// @brief Get anti-kT 0.4 jets (not including charged leptons or photons)
    const std::vector<Jet*>& jets() const {
      std::sort(_jets.begin(), _jets.end(), _cmpPtDesc);
      return _jets;
    }

    /// @brief Get anti-kT 0.4 jets (not including charged leptons or photons) (non-const)
    std::vector<Jet*>& jets()  {
      std::sort(_jets.begin(), _jets.end(), _cmpPtDesc);
      return _jets;
    }

    /// @brief Set the jets collection
    ///
    /// The Jets should be new'd; Event will take ownership.
    void set_jets(const std::vector<Jet*>& jets) {
      _jets = jets;
    }

    /// @brief Add a jet to the jets collection
    ///
    /// The Jet should be new'd; Event will take ownership.
    void add_jet(Jet* j) {
      _jets.push_back(j);
    }

    //@}


    /// @name Missing energy
    //@{

    /// @brief Get the missing energy vector
    ///
    /// Not _necessarily_ the sum over momenta of final state invisibles
    const P4& missingmom() const {
      return _pmiss;
    }

    /// @brief Set the missing energy vector
    ///
    /// Not _necessarily_ the sum over momenta of final state invisibles
    void set_missingmom(const P4& pmiss) {
      _pmiss = pmiss;
    }

    /// Get the missing ET in GeV
    double met() const {
      /// @todo Any energy term needed? Most mass will be longitudinal: zero/subtract pz first?
      return missingmom().pT();
    }

    //@}


  };


}
