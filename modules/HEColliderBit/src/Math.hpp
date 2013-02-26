#pragma once

#include <cmath>


/// @todo Add GAMBIT namespace


template <typename N>
inline N sqr(const N& x) { return x*x; }


inline double deltaPhi(double a, double b) {
  double rtn = a - b;
  rtn = fmod(rtn, 2*M_PI);
  if (rtn == 0) return 0;
  assert(rtn >= -2*M_PI && rtn <= 2*M_PI);
  rtn = (rtn >   M_PI ? rtn-2*M_PI :
         rtn <= -M_PI ? rtn+2*M_PI : rtn);
  assert(rtn > -M_PI && rtn <= M_PI);
  if (rtn < 0) rtn += M_PI;
  assert(rtn > 0 && rtn <= M_PI);
  return rtn;
}


////////////////


class P4 {
public:

  P4()
    : _x(0), _y(0), _z(0), _m(0) {  }

  P4(double px, double py, double pz, double E) {
    setXYZE(px, py, pz, E);
  }

  P4(const P4& v)
    : _x(v._x), _y(v._y), _z(v._z), _m(v._m) {  }

  operator = (const P4& v) {
    _x = v._x;
    _y = v._y;
    _z = v._z;
    _m = v._m;
  }

  /////////


  static P4 mkXYZE(double px, double py, double pz, double E) {
    return P4(px, py, pz, E);
  }

  static P4 mkXYZM(double px, double py, double pz, double M) {
    P4 rtn;
    rtn.setPM(px, py, pz, m);
    return rtn;
  }

  static P4 mkEtaPhiME(double eta, double phi, double mass, double E) {
    // eta = -log(tan( 0.5 * theta() ))
    // theta = 2 atan(exp(-eta))
    const double theta = 2 * atan(exp(-eta));
    return P4::mkThetaPhiME(theta, phi, mass, E);
  }

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

  static P4 mkThetaPhiME(double theta, double phi, double mass, double E) {
    const double p = sqrt( sqr(E) - sqr(mass) );
    const double pz = p * cos(theta);
    const double prho = p * sin(theta);
    const double px = prho * cos(phi);
    const double py = prho * sin(phi);
    return P4(px, py, pz, E);
  }

  static P4 mkRhoPhiME(double prho, double phi, double mass, double E) {
    assert(prho >= 0);
    const double px = prho * cos(phi);
    const double py = prho * sin(phi);
    const double pz = sqrt(sqr(E) - sqr(mass) - sqr(prho));
    return P4(px, py, pz, E);
  }

  void setPx(double px) { _x = px; }
  void setPy(double py) { _y = py; }
  void setPz(double pz) { _z = pz; }
  void setM(double m) { _m = m; }
  void setPM(double px, double py, double pz, double m) {
    setPx(px); setPy(py); setPz(pz);
    setM(m);
  }
  void setPE(double px, double py, double pz, double E) {
    setPx(px); setPy(py); setPz(pz);
    setM(sqrt( sqr(E) - sqr(p()) ));
  }

  ////////////

  double px2() const { return sqr(_x); }
  double px() const { return _x; }
  double py2() const { return sqr(_y); }
  double py() const { return _y; }
  double pz2() const { return sqr(_z); }
  double pz() const { return _z; }
  double m2() const { return sqr(_m); }
  double m() const { return _m; }

  double E2() const { return p2() + sqr(_m); }
  double E() const { return sqrt(E2()); }
  double p2() const { return sqr(px()) + sqr(py()) + sqr(pz()); }
  double p() const { return sqrt(p2()); }
  double rho2() const { return sqr(px()) + sqr(py()); }
  double rho() const { return sqrt(rho2()); }

  double phi() const { return atan(py()/px()); }
  double theta() const { return atan(rho()/pz()); }
  double eta() const { return -log(tan( 0.5 * theta() )); } //< Optimise with a trig reln on tan(x/2) to avoid tan(atan(..)/2)?
  double rap() const { return 0.5 * (E() + pz()) / (E() - pz()); }

  double dot(const P4& v) const { return E()*v.E() - px()*v.px() - py()*v.py() - pz()*v.pz(); }
  double angleTo(const P4& v) const { acos(px()*v.px() + py()*v.py() + pz()*v.pz()) / ( p()*v.p() ); }
  double deltaPhi(const P4& v) const { return deltaPhi(phi(), v.phi()); }
  double deltaEta(const P4& v) const { return fabs(a.eta() - b.eta()); }
  double deltaRap(const P4& v) const { return fabs(a.rap() - b.rap()); }
  double deltaR2_eta(const P4& v) const { return sqr(deltaEta(v)) + sqr(deltaPhi(v)); }
  double deltaR_eta(const P4& v) const { return sqrt(deltaR2_eta); }
  double deltaR2_rap(const P4& v) const { return sqr(deltaRap(v)) + sqr(deltaPhi(v)); }
  double deltaR_rap(const P4& v) const { return sqrt(deltaR2_rap); }

  P4& operator - () { _x = -_x; _y = -_y; _z = -_z; return *this; }
  P4& operator += (const P4& v) { double e = E() + v.E(); _x += v.px(); _y += v.py(); _z += v.pz(); _m = sqrt( sqr(e) - p2() ); return *this; }
  P4& operator -= (const P4& v) { double e = E() - v.E(); _x -= v.px(); _y -= v.py(); _z -= v.pz(); _m = sqrt( sqr(e) - p2() ); return *this; }
  P4& operator *= (double a) { _x *= a; _y *= a; _z *= a; _m *= a; return *this; }
  P4& operator /= (double a) { _x /= a; _y /= a; _z /= a; _m /= a; return *this; }

};


inline double dot(const P4& a, const P4& b) {
  return a.dot(b);
}


inline double angle(const P4& a, const P4& b) {
  return a.angleTo(b);
}


inline double deltaPhi(const P4& a, const P4& b) {
  return a.deltaPhi(b);
}


inline double deltaEta(const P4& a, const P4& b) {
  return a.deltaEta(b);
}


inline double deltaRap(const P4& a, const P4& b) {
  return a.deltaRap(b);
}


inline double deltaR2_eta(const P4& a, const P4& b) {
  return a.deltaR2_eta(b);
}
inline double deltaR_eta(const P4& a, const P4& b) {
  return a.deltaR_eta(b);
}


inline double deltaR2_rap(const P4& a, const P4& b) {
  return a.deltaR2_rap(b);
}
inline double deltaR_rap(const P4& a, const P4& b) {
  return a.deltaR_rap(b);
}


inline P4 operator + (const P4& a, const P4& b) { P4 rtn = a; return rtn += b; }
inline P4 operator - (const P4& a, const P4& b) { P4 rtn = a; return rtn -= b; }
inline P4 operator * (const P4& a, double f) { P4 rtn = a; return rtn *= f; }
inline P4 operator * (double f, const P4& a) { P4 rtn = a; return rtn *= f; }
inline P4 operator / (const P4& a, double f) { P4 rtn = a; return rtn /= f; }
