#pragma once

#include "MathUtils.hpp"
#include "Vectors.hpp"

namespace GAMBIT {


  /// Simple particle class, encapsulating a momentum 4-vector and adding some extra ID info
  class Particle {
  public:

    /// @name Constructors
    //@{

    /// Default constructor
    Particle()
      : _pdgId(0) {  }

    /// "Cartesian" constructor
    Particle(double px, double py, double pz, double E, int pdgid)
      : _p4(px, py, pz, E), _pdgId(pdgid) {  }

    /// 4-mom + PDG ID constructor
    Particle(const P4& mom, int pdgid)
      : _p4(mom), _pdgId(pdgid) {  }

    /// Copy constructor
    Particle(const Particle& p)
      : _p4(p.mom()), _pdgId(p.pid()) {  }

    /// Copy constructor from a pointer
    Particle(const Particle* p)
      : _p4(p->mom()), _pdgId(p->pid()) {  }

    /// Copy assignment operator
    Particle& operator=(const Particle& p) {
      _p4 = p.mom();
      _pdgId = p.pid();
      return *this;
    }

    //@}


    /// Get PDG ID code
    int pid() const { return _pdgId; }
    /// Set PDG ID code
    void setPid(int pid) { _pdgId = pid; }

    /// Get the 4 vector
    const P4& mom() const { return _p4; }
    /// Set the 4 vector
    void setMom(const P4& p4) { _p4 = p4; }

    /// @name Convenience mapping of a few popular momentum properties
    //@{
    double eta() const { return mom().eta(); }
    double rap() const { return mom().rap(); }
    double phi() const { return mom().phi(); }
    double E() const { return mom().E(); }
    double pT2() const { return mom().pT2(); }
    double pT() const { return mom().pT(); }
    //@}

  private:

    /// Momentum vector
    P4 _p4;
    /// PDG ID code
    int _pdgId;

  };


}
