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

    addParticle();
    addParticles();

  private:
    // ...

  };


}
