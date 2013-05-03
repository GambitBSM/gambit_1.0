#pragma once

#include "MathUtils.hpp"
#include "Vectors.hpp"

namespace GAMBIT {


  /// Simple jet class, encapsulating a momentum 4-vector and with some extra b-tag info
  class Jet {
  public:

    /// @name Constructors
    //@{

    /// Constructor for a light jet without explicit constituents
    Jet(const P4& mom, bool isB=false)
      : _p4(mom), _isB(isB) {  }

    /// "Cartesian" constructor
    Jet(double px, double py, double pz, double E, bool isB=false)
      : _p4(px, py, pz, E), _isB(isB) {  }
    //@}


    /// @name Momentum
    //@{

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

    //@}


    /// @name Tagging
    //@{

    /// Is this particle connected to the hard process or from a hadron/tau decay?
    bool isBJet() const { return _isB; }
    /// Set promptness
    void setBJet(bool isb=true) { _isB = isb; }

    //@}


  private:

    /// Momentum vector
    P4 _p4;
    /// B tag
    bool _isB;

  };


  /// Function/functor for container<const Jet*> sorting (cf. std::less)
  inline bool _cmpPtDesc(const Jet* a, const Jet* b) {
    return a->pT2() >= b->pT2();
  }


}
