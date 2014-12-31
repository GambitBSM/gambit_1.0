
/** \file rpvsusypars.cpp
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/
   - Description: Superpotential parameters and gauge couplings

*/

#include "rpvsusypars.h"

namespace softsusy {

RpvSusyPars::RpvSusyPars()
  :   lu(), ld(), le(), kappa(3) {}

RpvSusyPars::RpvSusyPars(const RpvSusyPars &r)
  : lu(r.lu), ld(r.ld), le(r.le), kappa(r.kappa) {}

const RpvSusyPars & RpvSusyPars::operator=(const RpvSusyPars & s) {
  if (this == &s) return *this;
  lu = s.lu; ld = s.ld; le = s.le;
  kappa = s.kappa; 
  return *this;
}

// Only outputs matrices with non-zero elements (given by tol)
void RpvSusyPars::checkOut(double tol) const {
  cout << "(tolerance=" << tol << ")\n"; 
  cout << "kappa" << kappa;
  cout << " Lambda_U:\n"; lu.checkOut(tol);
  cout << " Lambda_D:\n"; ld.checkOut(tol);
  cout << " Lambda_E:\n"; le.checkOut(tol);
}

const Tensor & RpvSusyPars::displayLambda(RpvCouplings k) const {
  switch(k) {
    case LU: return lu;
    case LD: return ld;
    case LE: return le;
  default: 
    ostringstream ii;
    cout << "Wrong input to RpvSusyPars::displayLambda(" << k << ")\n";
    throw ii.str();
    }
}

// Runs through v(n)..v(n+k), leaving k=n+k+1
void RpvSusyPars::set(const DoubleVector & v, int & k){
  DoubleVector y(v);

  int l, m, n;
  // First do LU
  for (l=1; l<=3; l++) {
    setLambda(LU, l, 1, 2, y(k));
    setLambda(LU, l, 1, 3, y(k+1));
    setLambda(LU, l, 2, 3, y(k+2));
    k = k + 3;
  }
  // LD
  for (l=1; l<=3; l++) 
    for (m=1; m<=3; m++) 
      for (n=1; n<=3; n++) {
	setLambda(LD, l, m, n, y(k));
	k = k + 1;
      }
  // Now LE
  for (l=1; l<=3; l++) {
    setLambda(LE, l, 1, 2, y(k));
    setLambda(LE, l, 1, 3, y(k+1));
    setLambda(LE, l, 2, 3, y(k+2));
    k = k + 3;
  }
  for (l=1; l<=3; l++) { 
    setKappa(l, y(k));
    k = k + 1; 
  }
}

// Sets elements of k to k+numRpvSusyPars to be their displayed values
// returns k at end
void RpvSusyPars::display(DoubleVector & v, int & k) const {
  int l, m, n;
  Tensor lu = displayLambda(LU), ld = displayLambda(LD), 
    le = displayLambda(LE);
  DoubleVector kap(displayKappa());
  // First do LU
  for (l=1; l<=3; l++) {
    v(k)   = lu(l, 1, 2);
    v(k+1) = lu(l, 1, 3);
    v(k+2) = lu(l, 2, 3);
    k = k + 3;
  }
  // LD
  for (l=1; l<=3; l++) 
    for (m=1; m<=3; m++) 
      for (n=1; n<=3; n++) {
	v(k) = ld(l, m, n);
	k = k + 1;
      }
  // Now LE
  for (l=1; l<=3; l++) {
    v(k)   = le(l, 1, 2);
    v(k+1) = le(l, 1, 3);
    v(k+2) = le(l, 2, 3);
    k = k + 3;
  }
  for (l=1; l<=3; l++) { 
    v(k) = kap(l);  
    k = k + 1; 
  }
}

// Any couplings that are zero will not be output
ostream & operator << (ostream &left, const RpvSusyPars &r)
{
  left << "kappa" << r.displayKappa();
  left << "Lambda_U:\n" << r.displayLambda(LU);
  left << "Lambda_D:\n" << r.displayLambda(LD);
  left << "Lambda_E:\n" << r.displayLambda(LE);
  //  left << r.displaySusy();
  return left;
}

void RpvSusyPars::setLambda(const RpvCouplings & r, const Tensor & t) {
  switch(r) {
    case LU: lu = t;
    case LD: ld = t;
    case LE: le = t;
    }  
}

// set (k, l)th element of j-th matrix of i=LU, LD, LE RPV couplings to be f.
void RpvSusyPars::setLambda(RpvCouplings i, int j, int k, int l, double f) {
  if (j > 3 || k > 3 || j < 0 || k < 0 || l < 0 || l > 3) {
    ostringstream ii;
    ii << "Trying to access (" << j << "," << k << "," << l 
	 << ") element of RpvSusyPars tensor " << int(i) 
	 << " in RpvSusyPars::set\n";
    throw ii.str();
  }
  // Diagonal Elements of LU, LE should be zero
  if (k == l && i != LD) {
    ostringstream ii;
    ii << "Error. RPV matrix " << int(i) << " is antisymmetric.\n";
    ii << "Trying to set (" << k << ", " << l << ")th element";
    ii << "of matrix " << j << "\n";
    throw ii.str();
  }
  switch(i) {
    // LU, LE are antisymmetric matrices
  case LU: 
    lu(j, k, l) = f; 
    lu(j, l, k) = -f; 
    break;
  case LD: 
    ld(j, k, l) = f; 
    break;
  case LE: 
    le(j, k, l) = f; 
    le(j, l, k) = -f; 
    break;
  }
}

/*
// Performs a field redefinition on H_1 to rotate away the bi-linear terms
// encoded in kappa. Both of the L violating terms are affected in general
void RpvSusy:rotateBilinears() {
  int i;

  // new mu parameter: checked
  double muprime = sqrt(sqr(displaySusyMu()) + kappa.dot(kappa));

  // new LQD term: checked
  Tensor ldnew = displaySusyMu() / muprime * 
    (ld + outerProduct(kappa, displayYukawaMatrix(YD), 2) 
     / displaySusyMu());

  // new LLE term: checked
  Tensor lenew = sqr(displaySusyMu() / muprime) *
    (le + (outerProduct(kappa, displayYukawaMatrix(YE), 2) -
	   outerProduct(kappa, displayYukawaMatrix(YE).transpose(), 3)) /
     displaySusyMu() );
  
  // new YE term: checked
  DoubleMatrix yenew = sqr(displaySusyMu() / muprime) *
    (displayYukawaMatrix(YE) + outerProduct(kappa, kappa *
					   displayYukawaMatrix(YE)) /
     sqr(displaySusyMu()) + (le.dotProd(kappa, 3)).transpose() /
     displaySusyMu());

  // new YD term: checked
  DoubleMatrix ydnew = displaySusyMu() / muprime * 
    (displayYukawaMatrix(YD) - ld.dotProd(kappa, 2) /
     displaySusyMu());

  // change couplings to their rotated values:
  setSusyMu(muprime);
  ld = ldnew;
  le = lenew;
  setYukawaMatrix(YD, ydnew);
  setYukawaMatrix(YE, yenew);

  // set rotated RPV bilinears to zero
  for (i=1; i<=3; i++) 
    kappa(i) = 0.0;
}
*/

// methods for soft parameters are here
RpvSoftPars::RpvSoftPars()
  : mH1lsq(3), hur(), hdr(), her(), dr(3) {}

RpvSoftPars::RpvSoftPars(const RpvSoftPars &r)
  : mH1lsq(r.mH1lsq), hur(r.hur), hdr(r.hdr), her(r.her), dr(r.dr) {}

const RpvSoftPars & RpvSoftPars::operator=(const RpvSoftPars & s) {
  if (this == &s) return *this;
  hur = s.hur; hdr = s.hdr; her = s.her;
  dr = s.dr; mH1lsq = s.mH1lsq;
  return *this;
}

void RpvSoftPars::setHr(RpvCouplings r, const Tensor & t) {
  switch(r) {
  case LU: hur = t; break;
  case LD: hdr = t; break;
  case LE: her = t; break;
  }
}

// Runs through v(n)..v(n+k), leaving k=n+k+1
void RpvSoftPars::set(const DoubleVector & v, int & k){
  int l, m, n;
  DoubleVector y(v);
  // First do LU
  for (l=1; l<=3; l++) {
    setHr(LU, l, 1, 2, y(k));
    setHr(LU, l, 1, 3, y(k+1));
    setHr(LU, l, 2, 3, y(k+2));
    k = k + 3;
  }
  // LD
  for (l=1; l<=3; l++) 
    for (m=1; m<=3; m++) 
      for (n=1; n<=3; n++) {
	setHr(LD, l, m, n, y(k));
	k = k + 1;
      }
  // Now LE
  for (l=1; l<=3; l++) {
    setHr(LE, l, 1, 2, y(k));
    setHr(LE, l, 1, 3, y(k+1));
    setHr(LE, l, 2, 3, y(k+2));
    k = k + 3;
  }
  for (l=1; l<=3; l++) { 
    setD(l, y(k));
    k = k + 1; 
  }
  for (l=1; l<=3; l++) { 
    setMh1lSquared(l, y(k));
    k = k + 1; 
  }
}

// Sets elements of k to k+numRpvSoftPars to be their displayed values
// returns k at end
void RpvSoftPars::display(DoubleVector & v, int & k) const {
  int l, m, n;
  Tensor hu(displayHr(LU)), hd(displayHr(LD)), he(displayHr(LE));
  DoubleVector d(displayDr()), mh1l(displayMh1lSquared());
  // First do LU
  for (l=1; l<=3; l++) {
    v(k)   = hu(l, 1, 2);
    v(k+1) = hu(l, 1, 3);
    v(k+2) = hu(l, 2, 3);
    k = k + 3;
  }
  // LD
  for (l=1; l<=3; l++) 
    for (m=1; m<=3; m++) 
      for (n=1; n<=3; n++) {
	v(k) = hd(l, m, n);
	k = k + 1;
      }
  // Now LE
  for (l=1; l<=3; l++) {
    v(k)   = he(l, 1, 2);
    v(k+1) = he(l, 1, 3);
    v(k+2) = he(l, 2, 3);
    k = k + 3;
  }
  for (l=1; l<=3; l++) { 
    v(k) = d(l);  
    k = k + 1; 
  }
  for (l=1; l<=3; l++) { 
    v(k) = mh1l(l);  
    k = k + 1; 
  }
}

// Only outputs matrices with non-zero elements (given by tol)
void RpvSoftPars::checkOut(double tol) const {
  cout << "(tolerance=" << tol << ")\n"; 
  cout << "Dr" << displayDr();
  cout << "mh1lsq" << displayMh1lSquared();
  cout << "hur:\n"; hur.checkOut(tol);
  cout << "hdr:\n"; hdr.checkOut(tol);
  cout << "her:\n"; her.checkOut(tol);
}

const Tensor & RpvSoftPars::displayHr(RpvCouplings k) const {
  switch(k) {
  case LU: return hur; break;
  case LD: return hdr; break;
  case LE: return her; break;
  default: 
    ostringstream ii;    
    ii << "Error calling RpvSoftPars::display\n";
    throw ii.str();
    break; 
  }
}

ostream & operator << (ostream &left, const RpvSoftPars &r) {
  left << "Dr" << r.displayDr();
  left << "mH1lsq" << r.displayMh1lSquared();
  left << "hur:\n" << r.displayHr(LU);
  left << "hdr:\n" << r.displayHr(LD);
  left << "her:\n" << r.displayHr(LE);
  return left;
}

// set (k, l)th element of j-th matrix of i=LU, LD, LE RPV couplings to be f.
void RpvSoftPars::setHr(RpvCouplings i, int j, int k, int l, double f) {
  if (j > 3 || k > 3 || j < 0 || k < 0 || l < 0 || l > 3) {
    ostringstream ii;
    ii << "Trying to access (" << j << "," << k << "," << l 
       << ") element of RpvSoftPars tensor " << int(i) 
       << " in  RpvSoftPars::set\n"; 
    throw ii.str();
  }
  // Diagonal Elements of LU, LE should be zero
  if (k == l && i != LD) {
    ostringstream ii;
    ii << "Error. RPV matrix " << int(i) << " is antisymmetric.\n";
    ii << "Trying to set (" << k << ", " << l << ")th element";
    ii << "of matrix " << j << "\n";
    throw ii.str();
  }
  switch(i) {
    // LU, LE are antisymmetric matrices
  case LU: 
    hur(j, k, l) = f; 
    hur(j, l, k) = -f; 
    break;
  case LD: 
    hdr(j, k, l) = f; 
    break;
  case LE: 
    her(j, k, l) = f; 
    her(j, l, k) = -f; 
    break;
  }
}


// sets an input vector boundary condition from the RPV bits of the following:
DoubleVector boundaryCondition(double m0, double m12, double a0, 
			       const RpvSusyPars & r) {
  DoubleVector a(52);
  a(1) = m0; a(2) = m12; a(3) = a0;
  int k;
  k = 4;
  r.display(a, k);

  return a;
}

} // namespace softsusy
