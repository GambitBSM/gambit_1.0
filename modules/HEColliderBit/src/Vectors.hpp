#pragma once

#include "MathUtils.hpp"
#include <sstream>
#include <iostream>

#include "fastjet/PseudoJet.hh"


/// @file Physics vectors stuff
/// @author Andy Buckley <andy.buckley@cern.ch>

namespace GAMBIT {

  /// Use fastjet implicitly
  using fastjet::PseudoJet;


  // /// @name HepMC vector utils
  // //@{

  // /// Compute 3-vector magnitude from a HepMC FourVector
  // /// @todo This is from some ATLAS filter code -- is it really a good idea?
  // inline double mag(const HepMC::FourVector& v) {
  //   return std::sqrt( sqr(v.x()) + sqr(v.y()) + sqr(v.z()) );
  // }

  // //@}


  // /// @name Converters between HepMC and FastJet momentum types
  // //@{

  // // /// For attaching the GenParticle provenance info to a PseudoJet
  // // struct HepMCInfo : public PseudoJet::UserInfoBase {
  // //     HepMCInfo(const HepMC::GenParticle* gp) : genparticle(gp) { }
  // //     const HepMC::GenParticle* genparticle;
  // // };
  // //
  // // // Usage: const GenParticle* gp = pj.user_info<HepMCInfo>().genparticle;

  // /// @todo Write a better Particle... maybe one that inherits from PseudoJet...

  // /// Convert a HepMC FourVector to a FastJet PseudoJet
  // inline PseudoJet mk_pseudojet(const HepMC::FourVector& p4) {
  //   return PseudoJet(p4.px(), p4.py(), p4.pz(), p4.e());
  // }

  // /// Convert a HepMC GenParticle to a FastJet PseudoJet
  // inline PseudoJet mk_pseudojet(const HepMC::GenParticle* gp) {
  //   PseudoJet pj = mk_pseudojet(gp->momentum());
  //   //pj.set_user_info(new HepMCInfo(p));
  //   return pj;
  // }

  // /// Convert a vector of HepMC GenParticles to a vector of FastJet PseudoJets
  // inline std::vector<PseudoJet> mk_pseudojets(const std::vector<const HepMC::GenParticle*>& gps) {
  //   std::vector<PseudoJet> pjs;
  //   foreach (const HepMC::GenParticle* gp, gps) {
  //     pjs.push_back( mk_pseudojet(gp) );
  //   }
  //   return pjs;
  // }

  // //@}



  /// @brief An alternative 4-momentum class
  ///
  /// P4 is a typical 4-momentum class, cf. HepLorentzVector or TLorentzVector
  /// with the exception that the data member storage is specifically based on
  /// (px, py, pz, m) rather than (px, py, pz, E). This means that there are (or
  /// at least should) never be numerical precision problems due to calculations
  /// like m^2 = E^2 - p^2 when p^2 >> m^2: m^2 is always well-defined and the
  /// "symmetric" calculation is the numerically safe E^2 = p^2 + m^2. This
  /// restricts usage to on-shell vectors... which as far as I'm aware is not
  /// really a restriction in practice, but please let me know if it is!
  ///
  class P4 {
  public:

    /// @name Constructors etc.
    //@{

    /// Default constructor of a null vector
    P4()
      : _x(0), _y(0), _z(0), _m(0) {  }

    /// Constructor from Cartesian/Minkowski coordinates
    P4(double px, double py, double pz, double E) {
      setPE(px, py, pz, E);
    }

    /// Copy constructor
    P4(const P4& v)
      : _x(v._x), _y(v._y), _z(v._z), _m(v._m) {  }

    /// Copy assignment operator
    P4& operator = (const P4& v) {
      _x = v._x;
      _y = v._y;
      _z = v._z;
      _m = v._m;
      return *this;
    }

    //@}


    /// @name Static methods for vector making
    //@{

    /// Make a vector from (px,py,pz,E) coordinates
    static P4 mkXYZE(double px, double py, double pz, double E) {
      return P4(px, py, pz, E);
    }

    /// Make a vector from (px,py,pz) coordinates and the mass
    static P4 mkXYZM(double px, double py, double pz, double m) {
      P4 rtn;
      rtn.setPM(px, py, pz, m);
      return rtn;
    }

    /// Make a vector from (eta,phi,energy) coordinates and the mass
    static P4 mkEtaPhiME(double eta, double phi, double mass, double E) {
      // eta = -log(tan( 0.5 * theta() ))
      // -> theta = 2 atan(exp(-eta))
      const double theta = 2 * atan(exp(-eta));
      return P4::mkThetaPhiME(theta, phi, mass, E);
    }

    /// Make a vector from (y,phi,energy) coordinates and the mass
    static P4 mkRapPhiME(double y, double phi, double mass, double E) {
      // y = 0.5 * (E+pz)/(E-pz)
      // 2y(E-pz) = E + pz
      // -> E = pz (2y + 1)/(2y - 1)
      // -> pz = E (2y - 1)/(2y + 1)
      const double pz = E * (2*y - 1) / (2*y + 1);
      const double prho = sqrt(sqr(E) - sqr(mass) - sqr(pz));
      assert(prho >= 0);
      const double px = prho * cos(phi);
      const double py = prho * sin(phi);
      return P4(px, py, pz, E);
    }

    /// Make a vector from (theta,phi,energy) coordinates and the mass
    static P4 mkThetaPhiME(double theta, double phi, double mass, double E) {
      const double p = sqrt( sqr(E) - sqr(mass) );
      const double pz = p * cos(theta);
      const double prho = p * sin(theta);
      const double px = prho * cos(phi);
      const double py = prho * sin(phi);
      return P4(px, py, pz, E);
    }

    /// Make a vector from (rho,phi,energy) coordinates and the mass
    static P4 mkRhoPhiME(double prho, double phi, double mass, double E) {
      assert(prho >= 0);
      const double px = prho * cos(phi);
      const double py = prho * sin(phi);
      const double pz = sqrt(sqr(E) - sqr(mass) - sqr(prho));
      return P4(px, py, pz, E);
    }

    //@}


    /// @name Coordinate setters
    //@{

    /// Set the px coordinate
    void setPx(double px) { _x = px; }
    /// Set the py coordinate
    void setPy(double py) { _y = py; }
    /// Set the pz coordinate
    void setPz(double pz) { _z = pz; }
    /// Set the mass
    void setM(double m) { _m = m; }
    /// Set the p coordinates and mass simultaneously
    void setPM(double px, double py, double pz, double m) {
      setPx(px); setPy(py); setPz(pz);
      setM(m);
    }
    /// Set the p coordinates and energy simultaneously
    void setPE(double px, double py, double pz, double E) {
      setPx(px); setPy(py); setPz(pz);
      setM(sqrt( sqr(E) - sqr(p()) ));
    }

    //@}


    /// @name Coordinate getters
    //@{

    /// Get px^2
    double px2() const { return sqr(_x); }
    /// Get px
    double px() const { return _x; }
    /// Get py^2
    double py2() const { return sqr(_y); }
    /// Get py
    double py() const { return _y; }
    /// Get pz^2
    double pz2() const { return sqr(_z); }
    /// Get pz
    double pz() const { return _z; }
    /// Get m^2
    double m2() const { return sqr(_m); }
    /// Get m
    double m() const { return _m; }

    /// Get E^2
    double E2() const { return p2() + sqr(_m); }
    /// Get E
    double E() const { return sqrt(E2()); }
    /// Get the spatial 3-vector |p|^2
    double p2() const { return sqr(px()) + sqr(py()) + sqr(pz()); }
    /// Get the spatial 3-vector |p|
    double p() const { return sqrt(p2()); }
    /// Get the spatial 3-vector |px^2 + py^2|
    double rho2() const { return sqr(px()) + sqr(py()); }
    /// Get the spatial 3-vector sqrt|px^2 + py^2|
    double rho() const { return sqrt(rho2()); }

    /// Get the spatial phi
    double phi() const { return atan(py()/px()); }
    /// Get the spatial theta
    double theta() const { return atan(rho()/pz()); }
    /// Get the spatial vector pseudorapidity
    double eta() const { return -log(tan( 0.5 * theta() )); } //< Optimise with a trig reln on tan(x/2) to avoid tan(atan(..)/2)?
    /// Get the 4-momentum rapidity
    double rap() const { return 0.5 * (E() + pz()) / (E() - pz()); }

    //@}


    /// @name Calculations w.r.t. other P4 vectors
    //@{

    /// Lorentz dot product with the positive metric term on E
    double dot(const P4& v) const { return E()*v.E() - px()*v.px() - py()*v.py() - pz()*v.pz(); }
    /// Spatial angle to another P4 vector
    double angleTo(const P4& v) const { return acos(px()*v.px() + py()*v.py() + pz()*v.pz()) / ( p()*v.p() ); }
    /// Difference in phi between two vectors
    double deltaPhi(const P4& v) const { return GAMBIT::deltaPhi(phi(), v.phi()); }
    /// Difference in pseudorapidity between two vectors
    double deltaEta(const P4& v) const { return fabs(eta() - v.eta()); }
    /// Difference in rapidity between two vectors
    double deltaRap(const P4& v) const { return fabs(rap() - v.rap()); }
    /// Difference in pseudorapidity-based R^2 between two vectors
    double deltaR2_eta(const P4& v) const { return sqr(deltaEta(v)) + sqr(deltaPhi(v)); }
    /// Difference in pseudorapidity-based R between two vectors
    double deltaR_eta(const P4& v) const { return sqrt(deltaR2_eta(v)); }
    /// Difference in rapidity-based R^2 between two vectors
    double deltaR2_rap(const P4& v) const { return sqr(deltaRap(v)) + sqr(deltaPhi(v)); }
    /// Difference in rapidity-based R between two vectors
    double deltaR_rap(const P4& v) const { return sqrt(deltaR2_rap(v)); }

    //@}

    /// @name Self-modifying operators
    //@{
    P4& operator - () { _x = -_x; _y = -_y; _z = -_z; return *this; }
    P4& operator += (const P4& v) { double e = E() + v.E(); _x += v.px(); _y += v.py(); _z += v.pz(); _m = sqrt( sqr(e) - p2() ); return *this; }
    P4& operator -= (const P4& v) { double e = E() - v.E(); _x -= v.px(); _y -= v.py(); _z -= v.pz(); _m = sqrt( sqr(e) - p2() ); return *this; }
    P4& operator *= (double a) { _x *= a; _y *= a; _z *= a; _m *= a; return *this; }
    P4& operator /= (double a) { _x /= a; _y /= a; _z /= a; _m /= a; return *this; }
    //@}

  private:

    /// @name Storage
    //@{
    double _x, _y, _z, _m;
    //@}

  };


  /// @name String representations
  //@{

  /// Make a string representation of the vector
  inline std::string to_str(const P4& p4) {
    std::stringstream ss;
    ss << "(" << p4.px() << ", " << p4.py() << ", " << p4.pz() << "; " << p4.E() << ")";
    return ss.str();
  }

  /// Write a string representation of the vector to the provided stream
  inline std::ostream& operator <<(std::ostream& ostr, const P4& p4) {
    ostr << to_str(p4);
    return ostr;
  }

  //@}


  /// Convenience "external" functions
  //@{

  /// Lorentz inner product between two vectors
  inline double dot(const P4& a, const P4& b) {
    return a.dot(b);
  }


  /// Angle between two vectors
  inline double angle(const P4& a, const P4& b) {
    return a.angleTo(b);
  }


  /// Difference in phi between two vectors
  inline double deltaPhi(const P4& a, const P4& b) {
    return a.deltaPhi(b);
  }


  /// Difference in pseudorapidity between two vectors
  inline double deltaEta(const P4& a, const P4& b) {
    return a.deltaEta(b);
  }


  /// Difference in rapidity between two vectors
  inline double deltaRap(const P4& a, const P4& b) {
    return a.deltaRap(b);
  }


  /// Difference in pseudorapidity-based R^2 between two vectors
  inline double deltaR2_eta(const P4& a, const P4& b) {
    return a.deltaR2_eta(b);
  }
  /// Difference in pseudorapidity-based R between two vectors
  inline double deltaR_eta(const P4& a, const P4& b) {
    return a.deltaR_eta(b);
  }


  /// Difference in rapidity-based R^2 between two vectors
  inline double deltaR2_rap(const P4& a, const P4& b) {
    return a.deltaR2_rap(b);
  }
  /// Difference in rapidity-based R between two vectors
  inline double deltaR_rap(const P4& a, const P4& b) {
    return a.deltaR_rap(b);
  }

  //@}


  /// @name Operators taking two vectors
  //@{
  inline P4 operator + (const P4& a, const P4& b) { P4 rtn = a; return rtn += b; }
  inline P4 operator - (const P4& a, const P4& b) { P4 rtn = a; return rtn -= b; }
  inline P4 operator * (const P4& a, double f) { P4 rtn = a; return rtn *= f; }
  inline P4 operator * (double f, const P4& a) { P4 rtn = a; return rtn *= f; }
  inline P4 operator / (const P4& a, double f) { P4 rtn = a; return rtn /= f; }
  //@}


}
