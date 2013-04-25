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

    //@}

    /// Add a final state particle to the event
    /// @todo Clarify ownership/lifetimes -- owned by outside code, or to be cleaned up by the event on deletion?
    /// @todo What about taus and Bs?
    /// @todo How to identify promptness?
    void addParticle(const Particle* p, bool prompt=false) {

    }

    /// Add a collection of final state particles to the event
    /// @todo Should be vector<const Particle*>?
    void addParticles(const vector<Particle*>& ps, bool prompt=false) {
      for (size_t i = 0; i < ps.size(); ++i) addParticle(ps[i], prompt);
    }

    /// Get all final state particles
    const vector<Particle*>& particles() const;

    /// Get visible state particles
    const vector<Particle*>& visible_particles() const;

    /// Get invisible final state particles
    const vector<Particle*>& invisible_particles() const;

    /// Get prompt electrons
    const vector<Particle*>& electrons() const;

    /// Get prompt muons
    const vector<Particle*>& muons() const;

    /// Get prompt photons
    const vector<Particle*>& prompt_photons() const;

    /// @brief Get the missing energy vector
    ///
    /// i.e. sum over momenta of final state invisibles
    ///
    /// @todo Take a lazy + caching approach
    const P4& missingMom() const;

    /// Get the missing ET in GeV
    double met() const { return missingMom().pT(); }

    /// Get the sum(ET) in GeV
    /// @todo Take a lazy + caching approach
    // double set() const;

    /// Get anti-kT 0.4 jets, with leptons and photons excluded
    /// @todo Take a lazy + caching approach
    const vector<P4>& jets() const;


  private:

    /// @name Internal particle / vector containers
    //@{

    /// @todo Separate the particles internally *and* keep overall list?
    vector<Particle*> _particles;

    /// Missing momentum vector
    mutable P4 _pmissing;
    mutable vector<P4> _jets;
    //@}

  };


}
