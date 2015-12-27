
/** \file lowe.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/
   \brief QedQcd object contains Standard Model quark and lepton 
   masses. It integrates them using 3 loop qcd x 1 loop qed effective theory.

*/

#ifndef LOWE_H
#define LOWE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include "def.h"
#include "utils.h"
#include "linalg.h"
#include "rge.h"

namespace softsusy {
const double MUP = 2.4e-3; ///< default running quark mass from PDG
const double MDOWN = 4.75e-3; ///< default running quark mass from PDG
const double MSTRANGE = 0.104; ///< default running quark mass from PDG
const double MCHARM = 1.27; ///< default running quark mass from PDG
const double MBOTTOM = 4.18; ///< default running quark mass from PDG
const double MTOP = 165.0; ///< default running quark mass from PDG
/// default pole lepton mass from PDG
const double MELECTRON = 5.10998902e-4; 
const double MMUON = 1.05658357e-1; ///< default pole lepton mass from PDG
const double MTAU = 1.77699; ///< default pole lepton mass from PDG
const double ALPHASMZ = 0.1184; ///< default running value from PDG
const double ALPHAMZ = 1.0 / 127.916; ///< default running alpha(MZ) from PDG

  const double PMTOP = 173.5; ///< PDG 2012
const double PMBOTTOM = 4.9; ///< default pole mass from PDG
/// default central values of CKM matrix elements from PDG 2006 in radians
const double THETA12CKM = 0.229206; ///< From Vus/Vud in global CKM fit, PDG
const double THETA13CKM = 0.003960; ///< From Vub in global CKM fit, PDG
const double THETA23CKM = 0.042223; ///< From Vcb/Vtb in global CKM fit, PDG

/// used to give order of quark masses stored
typedef enum {mUp=1, mCharm, mTop, mDown, mStrange, mBottom, mElectron,
	      mMuon, mTau} mass;
/// order of gauge couplings stored in QedQcd
typedef enum {ALPHA=1, ALPHAS} leGauge;

/// Returns beta functions of alpha, alpha_s only
DoubleVector gaugeDerivs(double, const DoubleVector &);

/// Quark and lepton masses and gauge couplings in QEDxQCD effective theory
class QedQcd: public RGE 
{
private:
  DoubleVector a;   ///< gauge couplings
  DoubleVector mf;  ///< fermion running masses
  double mtPole, mbPole; ///< pole masses of third family quarks
  double mbMb; ///< mb(mb) in the MSbar scheme with only QCD corrections
  double mtauPole; ///< tau pole mass

public:
  QedQcd(); ///< Initialises with default values defined in lowe.h
  QedQcd(const QedQcd &); ///< Initialises object with another
  const QedQcd& operator=(const QedQcd & m); ///< Sets two objects equal
  virtual ~QedQcd() {};
  
  void setPoleMt(double mt) { mtPole = mt; }; ///< set pole top mass
  void setPoleMb(double mb) { mbPole = mb; }; ///< set pole bottom mass
  void setPoleMtau(double mtau) { mtauPole = mtau; }; ///< set pole tau mass
  void setMbMb(double mb)   { mbMb = mb;   }; ///< set mb(mb)
  /// sets a running quark mass
  void setMass(mass mno, double m) { mf(mno) = m; }; 
  /// sets QED or QCD structure constant
  void setAlpha(leGauge ai, double ap) { a(ai) = ap; }; 
  /// For exporting beta functions to Runge-Kutta
  void set(const DoubleVector &); 
  
  /// Display pole top mass
  double displayPoleMt() const { return mtPole; };
  /// Display pole tau mass
  double displayPoleMtau() const { return mtauPole; };
  /// Returns bottom "pole" mass
  double displayPoleMb() const { return mbPole; };
  /// Returns a vector of running fermion masses
  const DoubleVector & displayMass() const { return mf; };
  /// Returns a single running mass
  double displayMass(mass mno) const { return mf.display(mno); };
  /// Returns a single gauge structure constant
  double displayAlpha(leGauge ai) const { return a.display(ai); };
  /// Obgligatory: returns vector of all running parameters
  const DoubleVector display() const;
  /// Returns mb(mb) MSbar
  double displayMbMb() const { return mbMb; }
  
  int flavours(double) const;  /// returns number of active flavours
  
  double qedBeta() const;   ///< QED beta function
  double qcdBeta() const;   ///< QCD beta function
  void massBeta(DoubleVector &) const; ///< beta functions of masses
  /// Beta functions of both beta-functions and all MSbar masses
  DoubleVector beta() const; 
  
  /// Does not run the masses, just gauge couplings from start to end
  void runGauge(double start, double end);
  /// calculates pole bottom mass given alpha_s(Mb)^{MSbar} from running b mass
  double extractPoleMb(double asMb);
  /// Done at pole mb: extracts running mb(polemb)
  double extractRunningMb(double asMb);
  /// calculates running bottom mass given alpha_s(Mb)^{MSbar} from pole m_b
  void calcRunningMb();
  /// Calculates the pole mass from the running mass, which should be defined
  /// at mb
  void calcPoleMb();

  /// Evolves object to running top mass
  void toMt();
  /// Evolves object to MZ
  void toMz();
  /// This will calculate the three gauge couplings of the Standard Model at
  /// the scale m2.
  /// It's a simple one-loop calculation only and no
  /// thresholds are assumed. Range of validity is electroweak to top scale.
  // alpha1 is in the GUT normalisation. sinth = sin^2 thetaW(Q) in MSbar
  // scheme
  DoubleVector  getGaugeMu(const double m2, const
		     double sinth) const;
};

/// Input numbers into the object: by file stream
ostream & operator <<(ostream &, const QedQcd &);
/// Formatted output from QedQcd object
istream & operator >>(istream &left, QedQcd &m);

/// Reads in a QedQed-type object and returns it in oneset.
/// Call with fname "" if you want it to come from standard input
/// "massIn" is an example of a data initialisation file: 
void readIn(QedQcd & oneset, const char fname[80]); 
/// Input pole mass of top and alphaS(mt), outputs running mass mt(mt)
/// including one-loop standard model correction only
double getRunMt(double poleMt, double asmt);
/// Given a value of mt, and alphas(MZ), find alphas(mt) to 1 loops in qcd:
/// it's a very good approximation at these scales, better than 10^-3 accuracy
double getAsmt(double mtop, double alphasMz);
/// Given pole mass and alphaS(MZ), returns running top mass -- one loop qcd
double getRunMtFromMz(double poleMt, double asMZ);

inline QedQcd::QedQcd(const QedQcd &m)
  : RGE(), a(m.a), mf(m.mf), mtPole(m.mtPole), mbPole(m.mbPole), mbMb(m.mbMb), 
    mtauPole(m.mtauPole) { 
  setPars(11); 
  setMu(m.displayMu());
  setLoops(m.displayLoops());
  setThresholds(m.displayThresholds());
}

/// Returns diagonal fermion mass matrices given input object r
void massFermions(const QedQcd & r, DoubleMatrix & mDon, 
		  DoubleMatrix & mUpq, DoubleMatrix & mEle);

} // namespace softsusy

#endif

