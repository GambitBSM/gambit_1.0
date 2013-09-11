#pragma once

#include <boost/serialization/access.hpp>
#include "MathUtils.hpp"
#include "Vectors.hpp"

namespace Gambit {


  /// Simple particle class, encapsulating a momentum 4-vector and adding some extra ID info
  class Particle {
  private:

    /// @name Serialization
    //@{
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive & ar, const unsigned int version) {
      ar & _p4;
      ar & _pdgId;
      ar & _prompt;
    }
    //@}

    /// @name Storage
    //@{
    /// Momentum vector
    P4 _p4;
    /// PDG ID code
    int _pdgId;
    /// Promptness flag
    bool _prompt;
    //@}

  public:

    /// @name Constructors
    //@{

    /// Default constructor
    Particle()
      : _pdgId(0), _prompt(false) {  }

    /// "Cartesian" constructor
    Particle(double px, double py, double pz, double E, int pdgid)
      : _p4(px, py, pz, E), _pdgId(pdgid), _prompt(false) {  }

    /// 4-mom + PDG ID constructor
    Particle(const P4& mom, int pdgid)
      : _p4(mom), _pdgId(pdgid), _prompt(false) {  }

    /// Copy constructor
    Particle(const Particle& p)
      : _p4(p.mom()), _pdgId(p.pid()), _prompt(p.isPrompt()) {  }

    /// Copy constructor from a pointer
    Particle(const Particle* p)
      : _p4(p->mom()), _pdgId(p->pid()), _prompt(p->isPrompt()) {  }

    /// Copy assignment operator
    Particle& operator=(const Particle& p) {
      _p4 = p.mom();
      _pdgId = p.pid();
      _prompt = p.isPrompt();
      return *this;
    }

    //@}


    /// @name Momentum
    //@{

    /// Get the 4 vector
    const P4& mom() const { return _p4; }
    /// Set the 4 vector
    void setMom(const P4& p4) { _p4 = p4; }
    
    //Set the mass of the 4 vector
    void setM(double mass) {_p4.setM(mass);}

    /// @name Convenience mapping of a few popular momentum properties
    //@{
    double eta() const { return mom().eta(); }
    double rap() const { return mom().rap(); }
    double phi() const { return mom().phi(); }
    double E() const { return mom().E(); }
    double pT2() const { return mom().pT2(); }
    double pT() const { return mom().pT(); }
    //@}

    //@}


    /// @name Promptness
    //@{

    /// Is this particle connected to the hard process or from a hadron/tau decay?
    bool isPrompt() const { return _prompt; }
    /// Set promptness
    void setPrompt(bool isprompt=true) { _prompt = isprompt; }

    //@}


    /// @name Particle ID
    //@{

    /// Get PDG ID code
    int pid() const { return _pdgId; }
    /// Set PDG ID code
    void setPid(int pid) { _pdgId = pid; }

    //@}


  };


}
