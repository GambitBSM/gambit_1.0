
/** \file utils.cpp
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

 */

#include "utils.h"

double frexp(const Complex & c, int * i) {
  int a, b;
  frexp(c.real(), &a);
  frexp(c.imag(), &b);
  if (fabs(a) > fabs(b)) return *i = a; 
  *i = b;
  return 0.;
}

void FPE_ExceptionHandler(int /* nErrType */) {
  throw "SIGFPE"; ///< This reverts back to softsusy code!
}

int theta(double a) {
  int temp = 0;
  if (a > 0.0) temp = 1;
  return temp;
}

// Just sets precision and format of outputs
void outputCharacteristics(int n) {
  cin.setf(ios::scientific, ios::floatfield);
  cin.precision(n);
  cout.setf(ios::scientific, ios::floatfield);
  cout.precision(n);
  cerr.setf(ios::scientific, ios::floatfield);
  cerr.precision(n);
}

// Finds fractional difference between |a| and |b|
double toleranceCheck(double a, double b) {
  double sTin = fabs(a), sTout = fabs(b);
  double maxx = maximum(sTin, sTout);

  const double underflow = 1.0e-20;

  if (maxx < underflow) return 0.0;
  return fabs(1.0 - minimum(sTin, sTout) / maxx);
}

// Outputs a space if greater than zero, a minus otherwise.
// Useful for outputting negative numbers in rows
void printRow(ostream & out, double x) {

  // make it return a character when you've worked out the equivalent of printf

  double underflow = 1.0e-120;
  if (fabs(x) < underflow) x = 0.0; // Traps -0.0
  if (x >= 0.0) out << " " << x;
  else out << x;
}

bool testNan(double f) {
  return (f != f);
}

bool close(double m1, double m2, double tol) {
  double mmax = fabs(maximum(fabs(m1), fabs(m2)));
  double mmin = fabs(minimum(fabs(m1), fabs(m2)));
  double max_tol = tol * mmax;
  if (max_tol == 0.0 && mmax != 0.0 && tol != 0.0)
    return (mmax - mmin <= tol);

  return (mmax - mmin <= tol * mmax);
}

bool close(Complex m1, Complex m2, double tol) {
  return (close(m1.real(), m2.real(), tol) && close(m1.imag(), m2.imag(), tol));
}
