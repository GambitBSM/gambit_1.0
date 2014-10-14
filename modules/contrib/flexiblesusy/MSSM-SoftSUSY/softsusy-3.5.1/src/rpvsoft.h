
/** \file rpvsoft.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach, Markus Bernhardt
   - Manual:      arXiv:0903.1805, Comp. Phys. Comm. 181 (2010) 232
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/

   \brief R-Parity violating MSSM object including real params/masses. Use
   RpvNeutrino for lepton-number violation (includes one-loop neutrino mass
   corrections), or RpvSoftsusy for baryon number  violation.
*/

#ifndef RPVSOFT_H
#define RPVSOFT_H

#include <iostream>
#include <math.h>
#include <cstring>
#include <sstream>
#include <fstream>
#include "def.h"
#include "flavoursoft.h"
#include "softsusy.h"
#include "linalg.h"
#include "rpvsusypars.h"

namespace softsusy {

/// Number of independent parameters for RGE
static const int numRpvSoftPars = 99 + numSoftParsMssm; 

/// Real valued R-Parity violating MSSM object: use for UDD couplings
class RpvSoftsusy: public FlavourMssmSoftsusy, public RpvSoftPars, 
		   public RpvSusyPars {
/// Contains all relevant data,
/// masses, and routines for calculating REWSB and masses etc.
/// Note that \f$ \cos^2 \beta (v_u^2 + v_d^2) = v_u^2 \f$, and 
/// \f$ \sin^2 \beta (v_u^2 + v_d^2) = v_d^2 \f$.
private:
  /// Vector of DRbar 3 sneutrino vacuum expectation values
  DoubleVector snuVevs;
  /// Vector of DRbar 3 tree-level neutrino mass values
  DoubleVector nuMasses;
  /// Matrix including the tree-level 7 by 7 DRbar mixing matrix of neutral
  /// fermions 
  DoubleMatrix neutralFermMixing;
  /// Matrices describing the tree-level 5 by 5 chargino-lepton mixing
  DoubleMatrix Uch, Vch;
  /// Describes how many parameters are required for R-parity conserving BCs
  int numRpcBcs;
public:
  /// Default constructor fills object with zeroes
  RpvSoftsusy();
  /// Constructor initialises object equal to another one
  RpvSoftsusy(const RpvSoftsusy &);
  /// All data in object set equal to another one
  const RpvSoftsusy & operator = (const RpvSoftsusy &);

  /// Displays all RGE parameters in a double vector
  const DoubleVector display() const;
  /// Sets all RGE parameters from elements of v
  void set(const DoubleVector & v);
  /// Beta functions of RPV MSSM
  DoubleVector beta() const;
  /// Beta functions of RPV MSSM
  RpvSoftsusy beta2() const;

  /// Returns object as a const
  inline const RpvSoftsusy & displayRpvSoftsusy() const { return *this; }  
  /// Sets whole object equal to another  
  void setRpvSoftsusy(const RpvSoftsusy & s) { *this = s; };

  /// returns double vector of 9 (untouched) free entries followed by 112 RPV
  /// parameters the 9 entries are left free for general cmssmBcs, amsbBcs,
  /// If you need *more parameters left, reserve the first pos (optional
  /// argument) 
  void rpvDisplay(DoubleVector & parameters) const;
  
  /// sets RPV parameters from entry 10 onwards
  /// using vector produced by RpvSoftsusy::rpvDisplay()
  /// the 9 entries are left free for general cmssmBcs, amsbBcs, ...
  /// parameters
  virtual void rpvSet(const DoubleVector & parameters);

  /// Returns the vacuum expectation values of sneutrinos
  const DoubleVector & displaySneutrinoVevs() const { return snuVevs; };
  /// Returns the neutrino masses
  const DoubleVector & displayNeutrinoMasses() const { return nuMasses; };
  /// Returns the full neutral mixing matrix
  const DoubleMatrix & displayNeutralMixing() const { 
    return neutralFermMixing; };
  /// 5 x 5 charged fermion mixing
  const DoubleMatrix & displayUch() const { return Uch; };
  /// 5 x 5 charged fermion mixing
  const DoubleMatrix & displayVch() const { return Vch; };
  /// Displays number of parameters in R-parity conserving BCs
  int displayNumRpcBcs() const { return numRpcBcs; };

  /// Sets number of parameters in R-parity conserving BCs
  void setNumRpcBcs(int pos) { numRpcBcs = pos; };
  /// Set vacuum expectation values of sneutrinos
  void setSneutrinoVevs(DoubleVector & v) { snuVevs = v; };
  /// Set neutrino masses
  void setNeutrinoMasses(DoubleVector & v) { nuMasses = v; };
  /// Set neutral fermion mixing matrix
  void setNeutralMixing(DoubleMatrix & v) { neutralFermMixing = v; };
  /// Set charged fermion mixing matrix
  void setUch(DoubleMatrix & v) { Uch = v; };
  /// Set charged fermion mixing matrix
  void setVch(DoubleMatrix & v) { Vch = v; }; 
  /// Checks to what extent REWSB conditions are satisfied
  void check(const DoubleVector & sneutrinoVevs) const;
  /// Anomalous dimensions of fields in RPV MSSM
  void rpvAnomalousDimension(DoubleMatrix & gEE, DoubleMatrix & gLL,
			  DoubleMatrix & gQQ, DoubleMatrix & gUU,
			  DoubleMatrix & gDD, 
			  double & gH1H1, double & gH2H2,
			  DoubleVector & gH1L)  const;

  /// Derivative of anomalous dimensions of fields with respect to
  /// renormalisation scale of RPV parts of RPV MSSM.
  void rpvAnomalousDeriv(DoubleMatrix & gEE, DoubleMatrix & gLL,
			 DoubleMatrix & gQQ, DoubleMatrix & gUU,
			 DoubleMatrix & gDD, 
			 double & gH1H1, double & gH2H2,
			 DoubleVector & gH1L) const;

  /// Ytilde quantities are for calculational brevity in beta functions. They
  /// are all outputs here. This function returns the RPV parts (only) of the
  /// ytildes
  void rpvyTildes(DoubleMatrix & ye, DoubleMatrix & yd, Tensor & letilde,
		  Tensor & ldtilde, Tensor & lutilde) const;

  /// Performs radiative electroweak symmetry breaking.
  /// IO parameters: sgnMu is +/-1, the sign of mu
  /// mt is the RUNNING DRbar top mass
  virtual void rewsb(int sgnMu, double mt, const DoubleVector & pars, 
		     double muOld = -6.66e66, double eps = 0.);
  /// Iterative solution to electroweak symmetry breaking boundary conditions.
  /// IO parameters: mu, m3sq are input and output Higgs potential parameters,
  /// iterated along with the sneutrino Vevs. Input sgnMu is the sign of mu,
  /// maxTries is the maximum number of iterations, tol is the desired
  /// fractional accuracy and mt is the DRbar running top mass
  void iterateRewsb(double & mu, double & m3sq, DoubleVector & sneutrinoVevs,
		     int sgnMu, int & numTries, int maxTries, double tol, 
		    double mt, double oldMu, double eps);
  /// Returns value of mu consistent with sneutrino vevs given
  /// (which should be a length-3 vector)
  /// IO parameters: sgnMu=+/-1, sign of Higgs potential mu parameter, v1 and
  /// v2 are the two Higgs doublet VEVs and must be input
  double calculateMu(const DoubleVector & sneutrinoVevs, int sgnMu,
		     double v1, double v2);  
  /// Calculates pole Higgs masses and mixings: old feynHiggsfast calculation
  /// IO parameters: piwwt is the W self-energy at M_SUSY, accuracy is number
  /// of loops (0 or 1) to use and pizzt is the Z self-energy at M_SUSY
  virtual void higgs(int accuracy, double piwwtMS, double pizztMS);  
  /// Returns value of m3sq consistent with sneutrino vevs given
  /// (which should be a length-3 vector)
  /// IO parameters: sgnMu=+/-1, sign of Higgs potential mu parameter, v1 and
  /// v2 are the two Higgs doublet VEVs and must be input and snuSq is the sum
  /// of squares of sneutrino VEVs
  double calculateM3sq(const DoubleVector & sneutrinoVevs,
		       double snuSq, double v1, double v2);
  virtual DoubleVector calculateSneutrinoVevs(const DoubleVector & sneutrinoVevs,
				      double tol,
				      double snuSq, double v1, double v2);
  /// Input a set of values for sneutrino VEVs and it returns a more accurate
  /// set - the next step in the iteration. 
  void rotateAwayVevs(DoubleVector & snVevs);

  // Returns some functions of VEVs, gives 1 if there's a problem with the
  // sneutrino VEVs (if they are incompatible with the W and Z masses)
  /// IO parameters: vSM = total VEVs of Higgs+sneutrinos (added in
  // quadrature), v1 and
  /// v2 are the two Higgs doublet VEVs and snuSq is the sum
  /// of squares of sneutrino VEVs: all arguments are outputs except for the
  // inputs vSM and sneutrinoVevs.
  /// The VEVs that come out are in SOFTSUSY notation
  int usefulVevs(double vSM, const DoubleVector & sneutrinoVevs, 
		 double & snuSq, double & v1, double & v2) const; 

  /// Theoretical boundary condition upon SUSY breaking terms. SUSY RPV
  /// parameters must be set before this is applied
  /// IO parameters: m0=scalar mass, m12=gaugino mass, a0=trilinear coupling
  void standardSugra(double m0,  double m12, double a0);
  
  /// Returns the 7 by 7 general RPV neutralino mass matrix
  DoubleMatrix neutralinoMassMatrix() const;

  /// Calculates neutralino masses. Uses RPC approximation for the 4
  /// neutralinos then diagonalises the full 7 by 7 case for the neutrinos.
  void neutralinos(int accuracy, double piwwtMS, double pizztMS);
  /// This is used to set both GUT-scale RPV parameters v(i=4,...) and the 
  /// SUSY breaking ones: v(1)=m0, v(2)=m12, v(3)=a0 where 
  /// IO parameters: m0=scalar mass, m12=gaugino mass, a0=trilinear coupling
  void methodBoundaryCondition(const DoubleVector & v);
  /// Calculates DRbar values of gauge and Yukawa couplings from data,
  /// depending upon the spectrum and input value of tan beta=tb
  /// pars contains RPV SUSY parameters for the point in question
  virtual void sparticleThresholdCorrections(double tb);

  /// Calculates the charged lepton mass matrix once the leptonic Yukawas have
  /// been set. IO parameters: vev is um of slepton+Higgs Vevs in quadrature
  DoubleMatrix chargedLeptons(double vev);
  /// Iterates the charged lepton mass matrix in order to get pole lepton
  /// masses and sneutrino VEVs etc correct.
  /// IO: yeOld is input and a better approximation to it is output.
  /// vev is sum of slepton+Higgs Vevs in quadrature
  /// tol=desired fractional accuracy, maxTries=maximum number of iterations
  /// after which it bails out with zeroes in yeOld and an error flag in
  /// err!=0. mtau=the running DRbar tau mass
  void iterateChargedLeptons(double vev, DoubleMatrix & yeOld, double tol, 
			     int maxTries, int & err, double mtau);

  /// Writes a file for input to ISAWIG, which will write HERWIG information
  /// on a file called herwigInputFile, ISAJET output in isajetOutputFile.
  /// The input file for ISAWIG is called softOutputFile.
  /// The RPV couplings will not be output if they are smaller than eps.
  void isawigInterface764(char herwigInputFile [80], 
			  char isajetOutputFile [80],
			  char softOutputFile [80], double eps = 0.) const; 
  /// For SLHA output: prints out the non-zero values of the inputted SUSY RPV
  /// couplings 
  void outputNonZeroInputs(ostream & out);
  /// Outputs with close to SLHA1 conventions to standard output. 
  /// Inputs:
  /// out should be something like cout or fout depending on whether you want
  /// output in a file or not.
  /// model contains what form of model is used for the SUSY breaking terms
  /// (eg cmssm, gmsb, amsb, nonUniversal). qMax is only relevant if you want
  /// a gridded output of running parameters up to some scale qMax. Put
  /// numPoints = 1 if you don't want to use this option - then qMaz is
  /// immaterial. mb is mb(mb) in the MSbar scheme used to produce the output,
  /// whereas mtau is the pole mass used (eg 1.777). mgut is the GUT scale
  /// that has been determined, and altEwsb is true if you specified mu and mA
  /// as input parameters (not tan beta and mH1, mH2).
  void slha1(ostream & out, const char model[], 
	     const DoubleVector & pars, int sgnMu, 
	     double tanb, double qMax, int numPoints);
  /// Does the RPV coupling SLHA1 outputs
  void drbarRpv(ostream & out);
  bool leptonNumberViolation() const;
};

/// Formatted input
ostream & operator <<(ostream &left, const RpvSoftsusy & r);

/// Sums up neutrino masses valid for cosmological bound
double neutrinoSum(const RpvSoftsusy & r);

inline RpvSoftsusy::RpvSoftsusy()
  : FlavourMssmSoftsusy(), RpvSoftPars(), RpvSusyPars(), snuVevs(3), 
    nuMasses(3), neutralFermMixing(7, 7), Uch(5, 5), Vch(5, 5), numRpcBcs(10) {
      setPars(numRpvSoftPars);
      setMu(0.0);
      setLoops(0);
      setThresholds(0);
}

inline RpvSoftsusy::RpvSoftsusy(const RpvSoftsusy & s)
  : FlavourMssmSoftsusy(s.displayFlavourSoftsusy()), 
    RpvSoftPars(s.displayRpvSoft()), 
    RpvSusyPars(s.displayRpvSusy()), snuVevs(s.displaySneutrinoVevs()),
    nuMasses(s.displayNeutrinoMasses()), 
    neutralFermMixing(s.displayNeutralMixing()), 
    Uch(s.displayUch()),
    Vch(s.displayVch()), numRpcBcs(s.displayNumRpcBcs()) {

  setPars(numRpvSoftPars);
  setMu(s.displayMu()); 
  setLoops(s.displayLoops());
  setThresholds(s.displayThresholds());
}

/// universal mSUGRA boundary conditions for RPV
void rpvSugraBcs(MssmSoftsusy & m, const DoubleVector & inputParameters);
void rpvAmsbBcs(MssmSoftsusy & m, const DoubleVector & inputParameters);
void rpvGmsbBcs(MssmSoftsusy & m, const DoubleVector & inputParameters);
void rpvExtendedSugraBcs(MssmSoftsusy & m, 
			 const DoubleVector & inputParameters);

} // namespace softsusy

#endif
