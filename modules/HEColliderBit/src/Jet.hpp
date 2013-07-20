#pragma once

#include <boost/serialization/access.hpp>
#include "MathUtils.hpp"
#include "Vectors.hpp"

namespace GAMBIT {


  /// Simple jet class, encapsulating a momentum 4-vector and with some extra b-tag info
  class Jet {
  private:

    /// @name Serialization
    //@{
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive & ar, const unsigned int version) {
      ar & _p4;
      ar & _pdgId;
      ar & _isB;
    }
    //@}

    /// @name Storage
    //@{
    /// Momentum vector
    P4 _p4;
    /// PDG ID code
    int _pdgId;
    /// B tag
    bool _isB;
    //@}

  public:

    /// @name Constructors
    //@{

    /// Constructor for a light jet without explicit constituents
    Jet(const P4& mom, bool isB=false)
      : _p4(mom), _pdgId(0), _isB(isB) {  }

    /// Constructor for a light jet without explicit constituents
    Jet(const P4& mom, int pdgId=0, bool isB=false)
      : _p4(mom), _pdgId(pdgId), _isB(isB) {  }

    /// "Cartesian" constructor
    Jet(double px, double py, double pz, double E, bool isB=false)
      : _p4(px, py, pz, E), _pdgId(0), _isB(isB) {  }

    /// "Cartesian" constructor
    Jet(double px, double py, double pz, double E, int pdgId=0, bool isB=false)
      : _p4(px, py, pz, E), _pdgId(pdgId), _isB(isB) {  }
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

    /// Is this particle tagged as a b?
    bool isBJet() const { return _isB; }
    /// Return the ID of the truth particle used to choose the btag efficiency function
    int getPdgId() const { return _pdgId; } 
    /// Set BTag value
    void setBJet(bool isb=true) { _isB = isb; }
    /// Set the ID of the truth particle used to choose the btag efficiency function
    void setPdgId(int pdgId=0) { _pdgId = pdgId; } 

    //@}


  };


  /// Function/functor for container<const Jet*> sorting (cf. std::less)
  inline bool _cmpPtDesc(const Jet* a, const Jet* b) {
    return a->pT2() >= b->pT2();
  }


}
