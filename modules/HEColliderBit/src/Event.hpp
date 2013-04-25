#pragma once

#include "Particle.hpp"

namespace GAMBIT {


  /// Simple event class, separating into various classes of particle
  class Event {
  public:

    /// @todo Need separate types of event (subclasses?) for what gets passed to
    /// detsim and to analysis?

    /// @todo This class should be able to do its own MET and SET calculations,
    /// identify photons, electrons, muons, taus, charged and neutral hadrons, B
    /// hadrons/quarks, and construct jets (?)


    /// @name Constructors
    //@{

    /// Default constructor
    Event() {  }

    /// Constructor from a list of Particles
    Event(const vector<Particle*>& ps) {
      addParticles(ps);
    }

    /// Destructor (cleans up all passed Particles and calculated Jets)
    ~Event() {
      foreach (Particle* p, particles()) delete p;
      if (!_jets.empty()) foreach (Jet* j, jets()) delete j;
    }

    //@}

    /// Add a final state particle to the event
    /// @todo Clarify ownership/lifetimes -- owned by outside code, or *to be cleaned up by the event on deletion*? THE LATTER
    /// @todo What about taus and Bs?
    /// @todo "Lock" at some point so that jet finding etc. only get done once
    void addParticle(const Particle* p) {
      if (p.isPrompt()) {
        if (p.pid() == 22) _photons.push_back(p);
        if (abs(p.pid()) == 11) _electrons.push_back(p);
        if (abs(p.pid()) == 13) _muons.push_back(p);
        if (abs(p.pid()) == 15) _taus.push_back(p);
        if (abs(p.pid()) == 12 || abs(p.pid()) == 14 || abs(p.pid()) == 16 || abs(p.pid()) == 1000022) _invisibles.push_back(p);
      }
    }

    /// Add a collection of final state particles to the event
    /// @todo Should be vector<const Particle*>?
    void addParticles(const vector<Particle*>& ps) {
      for (size_t i = 0; i < ps.size(); ++i) addParticle(ps[i]);
    }

    /// Get all final state particles
    const vector<Particle*>& particles() const {
      /// @todo Add together all the vectors of the different particle types
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
      /// @todo Cache, or otherwise think about efficiency since this gets called by the destructor
    }

    /// Get visible state particles
    const vector<Particle*>& visible_particles() const {
      /// @todo Add together all the vectors of the different particle types
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
    }

    /// Get invisible final state particles
    const vector<Particle*>& invisible_particles() const {
      return _invisibles;
    }

    /// Get prompt electrons
    const vector<Particle*>& electrons() const {
      return _electrons;
    }

    /// Get prompt muons
    const vector<Particle*>& muons() const {
      return _muons;
    }

    /// Get prompt taus
    const vector<Particle*>& taus() const {
      return _taus;
    }

    /// Get prompt photons
    const vector<Particle*>& photons() const {
      return _photons;
    }

    /// @brief Get the missing energy vector
    ///
    /// i.e. sum over momenta of final state invisibles
    const P4& missingMom() const {
      if (_pmissing.E2() == 0) {
        for (size_t i = 0; i < _invisibles.size(); ++i) _pmissing += _invisibles[i]->mom();
      }
      return _pmissing;
    }

    /// Get the missing ET in GeV
    double met() const { return missingMom().pT(); }

    /// Get the sum(ET) in GeV
    /// @todo Take a lazy + caching approach
    // double set() const;

    /// Get anti-kT 0.4 jets, with leptons and photons excluded
    /// @todo Take a lazy + caching approach
    const vector<Jet*>& jets() const;


  private:

    /// @name Internal particle / vector containers
    //@{

    /// @todo Separate the particles internally *and* keep overall list?
    vector<Particle*> _photons, _electrons, _muons, _taus, _invisibles;

    /// Missing momentum vector
    mutable P4 _pmissing;
    mutable vector<Jet*> _jets;
    //@}

  };


}
