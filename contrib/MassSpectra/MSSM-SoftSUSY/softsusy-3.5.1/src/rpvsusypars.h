
/** \file rpvsusypars.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach , Markus Bernhardt
   - Manual:      arXiv:0903.1805, Comp. Phys. Comm. 181 (2010) 232
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

   \brief Contains all supersymmetric RPVMSSM parameters
*/

#ifndef RPVSUSYPARS_H
#define RPVSUSYPARS_H

#include <iostream>
#include <cmath>
#include <fstream>
#include "linalg.h"
#include "tensor.h"

namespace softsusy {

/// Which flavour of coupling: UDD, LQD or LLE operator?
typedef enum {LU=1, LD, LE} RpvCouplings;

/// Contains RPV MSSM supersymmetric parameters.
class RpvSusyPars {
private:
  /// RPV MSSM parameters, match up to Lambda_U,D,E in Allanach Dedes and
  /// Dreiner 
  Tensor lu, ld, le; 
  DoubleVector kappa; /// bilinear RPV parameters
  
public:
  /// Default constructor fills object with zeroes
  RpvSusyPars();
  /// Constructor copies another object
  RpvSusyPars(const RpvSusyPars &);
  /// Constructor copies \f$ \Lambda_U \f$=hu, \f$ \Lambda_D \f$=hd, 
  /// \f$\Lambda_e \f$=he, \f$ \kappa \f$=d
  RpvSusyPars(const Tensor & hu, const Tensor & hd, const
	      Tensor & he, const DoubleVector & d);

  /// Set all data in the object equal to another
  const RpvSusyPars & operator=(const RpvSusyPars & s);

  virtual ~RpvSusyPars() {};
  
  /// Conventional couplings: lambda_{ijk}
  inline void setLam(int i, int j, int k, double f);
  /// Conventional couplings: lambda'_{ijk}
  inline void setLamPrime(int i, int j, int k, double f);
  /// Conventional couplings: lambda'_{ijk}
  inline void setLamPrimePrime(int i, int j, int k, double f);
  /// Set one kappa value
  inline void setKappa(int, double);
  /// Set a single element of a lambda tensor
  void setLambda(RpvCouplings, int, int, int, double);
  /// Set all kappa values
  inline void setKappa(const DoubleVector & k) { kappa = k; }
  /// Set all of one tensor
  void setLambda(const RpvCouplings & r, const Tensor & t);
  /// Obligatory set function sets data to be elements of input vector v. k is
  /// incremented so that k(out)=k(in) + number of parameters
  void set(const DoubleVector & v, int & k);
  /// sets all parameters to be those in s
  void setRpvSusyPars(const RpvSusyPars & s) { *this = s; };
  
  /// Returns one of the tensors LU, LD or LE
  const Tensor & displayLambda(RpvCouplings) const;
  /// Returns all kappa values in a vector
  inline const DoubleVector & displayKappa() const { return kappa; }
  /// Conventional couplings: lambda_{ijk}
  inline double displayLam(int i, int j, int k) const;
  /// Conventional couplings: lambda'_{ijk}
  inline double displayLamPrime(int i, int j, int k) const;
  /// Conventional couplings: lambda''_{ijk}
  inline double displayLamPrimePrime(int i, int j, int k) const;
  /// Returns all object as a const
  inline const RpvSusyPars & displayRpvSusy() const;
  /// Obligatory function that outputs contents in v, k is incremented on
  /// output by the number of inputs. 
  void display(DoubleVector & v, int & k) const;
  /// Only outputs matrices with non-zero elements (ie with at least one
  /// element higher than tol)
  void checkOut(double tol) const;
};

/// Returns a vector boundary condition from the RPV bits, for RPV SUGRA-type
/// boundary conditions. 
/// IO parameters: m0=universal scalar mass, m12=universal gaugino mass,
/// a0=universal scalar trilinear, r is 
DoubleVector boundaryCondition(double m0, double m12, double a0, 
			       const RpvSusyPars & r);

inline void RpvSusyPars::setKappa(int i, double f) { kappa(i) = f; }

inline double RpvSusyPars::displayLam(int i, int j, int k) const
{ return displayLambda(LE).display(k, i, j); }
inline double RpvSusyPars::displayLamPrime(int i, int j, int k) const
{ return displayLambda(LD).display(k, i, j); }
inline double RpvSusyPars::displayLamPrimePrime(int i, int j, int k) const
{ return displayLambda(LU).display(i, j, k); }
inline void RpvSusyPars::setLam(int i, int j, int k, double f) 
{ setLambda(LE, k, i, j, f); }
inline void RpvSusyPars::setLamPrime(int i, int j, int k, double f) 
{ setLambda(LD, k, i, j, f); }
inline void RpvSusyPars::setLamPrimePrime(int i, int j, int k, double f) 
{ setLambda(LU, i, j, k, f); }

inline RpvSusyPars::RpvSusyPars(const Tensor & hu, const Tensor & hd, const
				Tensor & he, const DoubleVector & d) 
  : lu(hu), ld(hd), le(he), kappa(d) {}

inline const RpvSusyPars & RpvSusyPars::displayRpvSusy() const { return *this; }

/// Formatted output of object
ostream & operator << (ostream &, const RpvSusyPars &);

/// Contains RPV MSSM soft SUSY breaking parameters.
class RpvSoftPars {
private:
  DoubleVector mH1lsq; ///< \f$ m_{H_1 L_i}^2 \f$
  /// RPV MSSM parameters, match up to h_U,D,E in Allanach, Dedes and Dreiner 
  Tensor hur, hdr, her; 
  DoubleVector dr; /// bilinear RPV parameters: 1..3
  
public:
  RpvSoftPars(); ///< Default constructor contains zeroes
  /// Constructor sets object with another as copy
  RpvSoftPars(const RpvSoftPars &);
  /// \f$ m_{H_1 L}^2 \f$=m, \f$ h_U \f$=hu, \f$ h_D \f$=hd, \f$ h_E \f$=he,
  /// \f$ D \f$=d
  RpvSoftPars(const DoubleVector &m, const Tensor & hu, const Tensor & hd,
	      const Tensor & he, const DoubleVector & d); 
  virtual ~RpvSoftPars() {};
  /// Sets contents of operator equal to those of another
  const RpvSoftPars & operator=(const RpvSoftPars & s);
  
  /// Sets bilinear RPV D parameters equal to a vector
  inline void setDr(const DoubleVector & V);
  /// Sets an individual bilinear RPV D parameter 
  inline void setD(int, double);
  /// Sets a single \f$ m_{H_1 L_i}^2 \f$
  inline void setMh1lSquared(int i, double f) { mH1lsq(i) = f; };
  /// Sets all \f$ m_{H_1 L_i}^2 \f$
  inline void setMh1lSquared(const DoubleVector & v) { mH1lsq = v; };
  /// Sets an element of \f$ h_U \f$=hu, \f$ h_D \f$=hd or \f$ h_E \f$=he
  void setHr(RpvCouplings, int, int, int, double);
  /// Sets all elements of \f$ h_U \f$=hu, \f$ h_D \f$=hd or \f$ h_E \f$=he
  void setHr(RpvCouplings, const Tensor &);
  /// Obligatory set function which sets all parameters to be equal to
  /// elements of the vector v. k is incremented by the number of parameters
  /// contained
  void set(const DoubleVector & v, int & k);
  /// Sets all parameters in object equal to those in another
  void setRpvSoftPars(const RpvSoftPars & s) { *this = s; };
  /// Returns object as a const
  const RpvSoftPars & displayRpvSoft() const { return *this; };

  /// Returns one of RPV \f$ h_{U,D,E} \f$ parameter tensors
  const Tensor & displayHr(RpvCouplings) const;
  /// Returns vector of \f$ m_{H_1 L_i}^2 \f$
  inline const DoubleVector & displayMh1lSquared() const { return mH1lsq; }
  /// Returns vector of $D$ parameters
  inline const DoubleVector & displayDr() const;
  /// Only outputs matrices with non-zero elements (ie with at least one
  /// element higher than tol)
  void checkOut(double tol) const;
  
  /// Returns whole object as a vector, and adds number of contained
  /// parameters to k
  void display(DoubleVector & v, int & k) const;
};

inline void RpvSoftPars::setDr(const DoubleVector & V) { dr = V; }

inline void RpvSoftPars::setD(int i, double f) { dr(i) = f; }

inline const DoubleVector & RpvSoftPars::displayDr() const { return dr; }

inline RpvSoftPars::RpvSoftPars(const DoubleVector & m, const Tensor & hu,
				const Tensor & hd, const Tensor & he, const
				DoubleVector & d) 
  : mH1lsq(m), hur(hu), hdr(hd), her(he), dr(d) {}

/// Formatted output
ostream & operator << (ostream &, const RpvSoftPars &);

} // namespace softsusy

#endif

