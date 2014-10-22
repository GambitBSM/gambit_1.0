// -*- C++ -*-
//
// This file is part of HEPUtils -- https://bitbucket.org/andybuckley/heputils
// Copyright (C) 2013-2014 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of HEPUtils code in other projects is permitted provided this
// notice is retained and the HEPUtils namespace and include path are changed.
//
#pragma once

#include "HEPUtils/MathUtils.h"
#include "HEPUtils/Vectors.h"

namespace HEPUtils {


  /// Simple particle class, encapsulating a momentum 4-vector and adding some extra ID info
  class Particle {
  private:

    /// @name Storage
    //@{
    /// Momentum vector
    P4 _p4;
    /// PDG ID code
    int _pdgId;
    /// Promptness flag
    bool _prompt;
    /// Isolation value
    float _isol4;
    //@}

  public:

    /// @name Constructors
    //@{

    /// Default constructor
    Particle()
      : _pdgId(0), _prompt(false), _isol4(0.0) {  }

    /// "Cartesian" constructor
    Particle(double px, double py, double pz, double E, int pdgid)
      : _p4(px, py, pz, E), _pdgId(pdgid), _prompt(false), _isol4(0.0) {  }

    /// "Cartesian" constructor for massless particles - or close enough
    /// @todo AB: WTF?
    // Particle(double px, double py, double pz, int pdgid)
    //   : _p4(px, py, pz), _pdgId(pdgid), _prompt(false), _isol4(0.0) {  }

    /// 4-mom + PDG ID constructor
    Particle(const P4& mom, int pdgid)
      : _p4(mom), _pdgId(pdgid), _prompt(false), _isol4(0.0) {  }

    /// Copy constructor
    Particle(const Particle& p)
      : _p4(p.mom()), _pdgId(p.pid()), _prompt(p.is_prompt()), _isol4(p.isol()) {  }

    /// Copy constructor from a pointer
    Particle(const Particle* p)
      : _p4(p->mom()), _pdgId(p->pid()), _prompt(p->is_prompt()), _isol4(p->isol()) {  }

    /// Copy assignment operator
    Particle& operator=(const Particle& p) {
      _p4 = p.mom();
      _pdgId = p.pid();
      _prompt = p.is_prompt();
      _isol4 = p.isol();
      return *this;
    }

    //@}


    /// @name Momentum
    //@{

    /// Get the 4 vector
    const P4& mom() const { return _p4; }
    /// Set the 4 vector
    void set_mom(const P4& p4) { _p4 = p4; }

    //Set the mass of the 4 vector
    void set_mass(double mass) {_p4.setM(mass);}

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
    bool is_prompt() const { return _prompt; }
    /// Set promptness
    void set_prompt(bool isprompt=true) { _prompt = isprompt; }

    //@}


    /// @name Particle ID
    //@{

    /// Get PDG ID code
    int pid() const { return _pdgId; }
    /// Set PDG ID code
    void set_pid(int pid) { _pdgId = pid; }

    /// @ Isolation of particle
    //@{

    /// Get isolation
    double isol() const { return _isol4;}
    void set_isol(float isol) {_isol4 = isol;}


    //@}


  };


}
