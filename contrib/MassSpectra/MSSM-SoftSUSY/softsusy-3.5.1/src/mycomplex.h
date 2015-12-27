
/** \file mycomplex.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://allanach.home.cern.ch/allanach/softsusy.html
   \brief complex numbers and operators between them
*/

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iosfwd>
#include <complex>

///drop-in replacement for the original home-grown Complex class
class Complex : public std::complex<double> {
public:
  /// General constructor
  Complex(double r = 0.0, double i = 0.0) : std::complex<double>(r,i) {}
  /// Constructor from C++ standard complex class
  Complex(const std::complex<double> & cc) : std::complex<double>(cc) {}

  //Copy constructor and assignment operator are automatically created from base class
  //real() and imag() taken from base class

  /**** never used, can be replaced with call to constructor if needed in future***
  void setRe(double a) { *this = Complex(a,imag()); }///< sets real part
  void setIm(double a) { *this = Complex(real(),a); }///< sets imaginary part
  *********************************************************************************/

  double mod() const { return std::abs(*this); }///< returns modulus of number
  double arg() const { return std::arg(*this); }///< returns angle (in Argand diagram): theta=-pi->pi

  Complex conj() const { return std::conj(*this); }///< Complex conjugate
  Complex cc()   const { return std::conj(*this); }///< Complex conjugate
 
  /// Returns true if either real part or imaginary part is bigger than
  /// relevant bit of a
  //David: careful, unusual definition!
  bool operator>=(const Complex & a) const { 
    return (this->real() >= a.real() || this->imag() >= a.imag()); 
  }

  //David: this makes valarray<Complex>::max() in linalg.cpp work Ben's way
  bool operator<(const Complex & b) const { return (std::abs(*this) < std::abs(b)); }
};

/// Formatted output
inline std::ostream & operator <<(std::ostream & left, const Complex & s) {
  left << s.real();
  if (s.imag() >= 0.0) left << "+";
  left << s.imag() << "i";
  return left;
}

///Formatted input
inline std::istream & operator >> (std::istream & left, Complex & v) {
  double r, i;
  left >> r >> i;
  v = Complex(r,i);
  return left;
}

//David: the std:: versions of these work fine
inline Complex conj(const Complex &a) { return std::conj(a); }
inline Complex log(const Complex &a) { return std::log(a); } ///< Principal log
inline Complex exp(const Complex &a) { return std::exp(a); }
inline Complex sqrt(const Complex &a) { return std::sqrt(a); }

#endif
