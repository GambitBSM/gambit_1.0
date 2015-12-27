/** \file rpvneut.h
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach, Marja Hanussek and Steve Kom
   - Manual:      arXiv:1109.3735, Comp. Phys. Comm. 183 (2012) 785
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/
   - Description: Calculates neutrino masses to 1-loop in the RPV MSSM

   \brief Generalisation of RpvMssmSoftsusy object to include the loop
   corrections to neutrino masses and to the one-loop sneutrino VEVs
*/


#ifndef RPVNEUT_H
#define RPVNEUT_H

#include <iostream>
#include <math.h>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include "def.h"
#include "softsusy.h"
#include "linalg.h"
#include "rpvsusypars.h"
#include "lowe.h"
#include "rpvsoft.h"

namespace softsusy {

/// Updates an RPV object with loop-corrected neutrino data: use for L violation
class RpvNeutrino : public RpvSoftsusy {
  /// Vector of 3 pole neutrino mass values
  DoubleVector physNuMasses;
  /// Leptonic mixing angles encoded in PMNS matrix
  DoubleMatrix uPmns;
  /// Fully one-loop corrected 7x7 neutralino mixing matrix at p=0
  DoubleMatrix physNeutMix;
  /// Is the physical neutrino spectrum output in inverted hierarchy form?
  /// Returns true if the object is displaying the neutrino data in inverted
  /// output mode, false for normal output mode (default)
  bool invertedOutput;
  /// The 5 tree-level CP even/odd scalar masses  (higgs--neutral sleptons):
  /// (Hu,Hd,snu_i)  
  DoubleVector CPEmasses, CPOmasses;
  /// The 5x5 CP even/odd tree-level scalar mass^2 matrices (higgs--neutral
  /// sleptons) 
  DoubleMatrix CPEscalars, CPOscalars;
  /// The 5x5 CP even/odd scalar mass tree-level mixing (higgs--neutral
  /// sleptons) 
  DoubleMatrix CPEscalarMixing, CPOscalarMixing;
public:  
  /// Default constructor fills object with zeroes
  RpvNeutrino();
  /// Constructor initialises object equal to another one
  RpvNeutrino(const RpvNeutrino &);
  /// All data in object set equal to another one
  const RpvNeutrino & operator = (const RpvNeutrino &);

  /// Display functions to read data
  inline const DoubleVector & displayPhysNuMasses() const { 
    return physNuMasses; 
  }
  inline const DoubleMatrix & displayUpmns() const { return uPmns; }
  inline const DoubleMatrix & displayPhysNeutMix() const { 
    return physNeutMix;  }
  inline bool displayInvertedOutput() const { return invertedOutput; }
  inline const DoubleVector & displayCPEMasses() const { return CPEmasses; }
  inline const DoubleVector & displayCPOMasses() const { return CPOmasses; }
  inline const DoubleMatrix & displayCPEMassSq() const { return CPEscalars; }
  inline const DoubleMatrix & displayCPOMassSq() const { return CPOscalars; }
  inline const DoubleMatrix & displayCPEMix() const { return CPEscalarMixing; }
  inline const DoubleMatrix & displayCPOMix() const { return CPOscalarMixing; }

  inline void setInvertedOutput() { invertedOutput = true; }
  inline void setNormalOutput() { invertedOutput = false; }
  inline void setCPEMasses(const DoubleVector & a) { CPEmasses = a; }
  inline void setCPOMasses(const DoubleVector & a) { CPOmasses = a; }
  inline void setCPEMassSq(const DoubleMatrix & a) { CPEscalars = a; }
  inline void setCPOMassSq(const DoubleMatrix & a) { CPOscalars = a; }
  inline void setCPEMix(const DoubleMatrix & a) { CPEscalarMixing = a; }
  inline void setCPOMix(const DoubleMatrix & a) { CPOscalarMixing = a; }
  inline void setUpmns(const DoubleMatrix & a) { uPmns = a; }

  /// replaces tree-level routine in rpvsoft.cpp - now includes 1-loop tadpoles
  DoubleVector calculateSneutrinoVevs(const DoubleVector & sneutrinoVevs, 
				      double tol, double snuSq, double v1, 
				      double v2);
	
  /** next 3 routines calculate snu_i,h_d^0, h_u^0 tadpoles for minimisation
	 of one-loop scalar potential snu_i tadpoles are also used for
	 corrections to sneutrino vevs procedure: get full LNV mass matrices
	 from routines below, for 1. CPE/CPO scalars 2. charged higgs-sleptons
	 3. up- and down-type squarks 4. quarks 5. gauge bosons
	 6. charginos-charged leptons 7. neutralinos-neutrinos then
	 diagonalise to obtain mass eigenvalues and mixings then set-up
	 couplings snu_i XY (or corresponding for h_d^0, h_u^0) in format
	 matrix(X,Y) for 1. to 7. 	 Use mixing matrices to rotate
	 couplings to mass eigenbasis calculate tadpoles: for scalars: 
	 Sum (rotatedCoupling* a0(massEigenvalue)) 
	 - for fermions: Sum (rotatedCoupling* massEigenvalue * 
	 a0(massEigenvalue)) /
	 (tadpoles calculated with DRbar parameters and in the Feynman gauge
	 (xi=1)) */
  DoubleVector calculateSneutrinoTadpoles(double sinthDRbar);
  virtual double doCalcTadpole1oneLoop(double mt, double sinthDRbar);
  virtual double doCalcTadpole2oneLoop(double mt, double sinthDRbar);
	
  ///  LNV neutral scalar mass matrices (CPE/CPO) in Feynman gauge (xi=1),
  ///  c.f. paper Allanach Kom 
  void calculateLNVNeutralScalarMassMatrix(double sinthDRbar);
	
  /// charged higgs - slepton mass matrix in xi=1 (feynman) gauge
  /// order: Hu1, Hd2, tildeLi, tildeEbarj
  /// gauge can be changed in the code
  DoubleMatrix calculateLNVSleptonMassMatrix(double sinthDRbar);
  
  /// down squark mass matrix - order: q2_i, d_j
  DoubleMatrix calculateLNVDownSquarkMassMatrix(double sinthDRbar);
	
  /// up squark mass matrix - order: q1_i, u_j
  DoubleMatrix calculateLNVUpSquarkMassMatrix(double sinthDRbar);
	
  /// using Steve's neutrino routine to obtain 3x3 effective 
  /// neutrino mass matrix via seesaw
  DoubleMatrix neutrinoSeesaw();

  /// returns neutrino mixing angles and sets mass eigenstates to one loop. 
  void neutrinoData();
		
  /// routines defined specifically for "neutrino" below.
  /// Given a DoubleMatrix (Mass), perform analytic diagonalisation,
  /// assuming all off diagonal elements are much smaller than the
  /// difference between any diagonal entries.  The resulting mixing
  /// matrices are returned
  /// used in RpvNeutrino::neutrino
  void AnalyticDiagonalise(DoubleMatrix & Mass, DoubleMatrix & MassMix, 
			   DoubleMatrix & MassMix0, DoubleMatrix & MassMix1, 
			   DoubleMatrix & MassMix2);
  void Positivise(DoubleMatrix & A);
  /// given a symmetric fermion mass matrix, output mixing matrix, 
  /// mass eigenvector, positive mass eigenvector, squared mass eigenvector
  /// used in RpvNeutrino::neutrino
  void FermionMassSym(DoubleMatrix & MM, ComplexMatrix & Z, 
		      DoubleVector & MassVector, 
		      DoubleVector & PositiveMassVector, 
		      DoubleVector & SquaredVector, DoubleMatrix & mix);
  /// given an asymmetric fermion mass matrix, output mixing matrix, 
  /// mass eigenvector, positive mass eigenvector, squared mass eigenvector
  /// used in RpvNeutrino::neutrino
  void FermionMassAsym(DoubleMatrix & MM, ComplexMatrix & M, 
		       ComplexMatrix & P, DoubleVector & MassVector, 
		       DoubleVector & PositiveMassVector, 
		       DoubleVector & SquaredVector, DoubleMatrix & mixM, 
		       DoubleMatrix & mixP);
/// given squared mass matrix (MM), output mixing matrix, 
/// mass eigenvector, positive mass eigenvector, squared mass eigenvector
/// used in RpvNeutrino::neutrino
  void ScalarMass(DoubleMatrix & MM, ComplexMatrix & Z, 
		  DoubleVector & MassVector, 
		  DoubleVector & PositiveMassVector, 
		  DoubleVector & SquaredVector, DoubleMatrix & mix);
	
  /// Steve's "neutrino" calculates the full 1 loop 7x7 neutralino-neutrino
  /// mass matrix (now in rpvsoft.cpp basis) 
  /// MH: corrected Higgs vevs; now in rpvsoftsusy basis
  /// Return tree + 1 loop neutrino--neutralino masses and mixings.
  /// calculation performed in ADD basis where Hd and L_i fields are on equal
  /// footing. At the end of the code the results are rotated to the rpvsoftsusy
  /// basis 
  void neutrino(DoubleVector & neutrino, DoubleMatrix & mixMnu, 
		DoubleMatrix & mNeutrino);

  /// next two routines are copy of old code which was taken out of the
  /// softsusy version when flavorsoft was implemented for objects
  /// RpvSoftsusy2, MIXING=1 sets CKM mixing in the up-sector, MIXING=2 sets
  /// CKM mixing in the down-sector 
  /// pars contains RPV SUSY parameters for the point in question
  void sparticleThresholdCorrections(double tb, const DoubleVector & pars);
  virtual void physical(int accuracy);
  //  virtual void rpvSet(const DoubleVector & parameters) { RpvSoftsusy::rpvSet(parameters); };

  /// Outputs with Les Houches accord conventions to standard output. 
  /// Inputs:
  /// out should be something like cout or fout depending on whether you want
  /// output in a file or not.
  /// model contains what form of model is used for the SUSY breaking terms
  /// (eg sugra, gmsb, amsb, nonUniversal). qMax is only relevant if you want
  /// a gridded output of running parameters up to some scale qMax. Put
  /// numPoints = 1 if you don't want to use this option - then qMaz is
  /// immaterial. mb is mb(mb) in the MSbar scheme used to produce the output,
  /// whereas mtau is the pole mass used (eg 1.777). mgut is the GUT scale
  /// that has been determined, and altEwsb is true if you specified mu and mA
  /// as input parameters (not tan beta and mH1, mH2).
  virtual void lesHouchesAccordOutput(ostream & out, const char model[], 
				      const DoubleVector & pars, 
				      int sgnMu, double tanb, double qMax, 
				      int numPoints, 
				      bool ewsbBCscale); 
  /// SPINFO block of SLHA output
  void spinfoSLHA(ostream & out);
  /// Header part of SLHA output
  void headerSLHA(ostream & out);
  /// modsel block of SLHA output  
  void modselSLHA(ostream & out, const char model[]);
  /// mass block of SLHA2 output
  void massSLHA(ostream & out);
  /// neutralino/chargino mixing for RPV
  void inomixingSLHA(ostream & out);
  /// CP-even higgs mixing for RPV SLHA2
  void rvhmixSLHA(ostream & out); 
  /// CP-odd higgs mixing for RPV SLHA2
  void rvamixSLHA(ostream & out);
  /// charged slepton-higgs mixing for RPV SLHA2
  virtual void selmixSLHA(ostream & out);
  /// uncharged slepton-higgs mixing for RPV SLHA2
  virtual void snumixSLHA(ostream & out);
  /// higgs part of DRbar couplings
  virtual void hmixSLHA(ostream & out);
  /// higgs part of mass block of SLHA
  virtual void higgsMSLHA(ostream & out);
  /// slepton part of mass block output of SLHA2
  virtual void sleptonsSLHA(ostream & out);
};

inline RpvNeutrino::RpvNeutrino()
  : RpvSoftsusy(), physNuMasses(3), uPmns(3, 3), physNeutMix(7, 7), 
    invertedOutput(false), CPEmasses(5), CPOmasses(5), 
    CPEscalars(5, 5), CPOscalars(5, 5), 
    CPEscalarMixing(5, 5), CPOscalarMixing(5, 5) {};

inline RpvNeutrino::RpvNeutrino(const RpvNeutrino & s) 
  : RpvSoftsusy(s.displayRpvSoftsusy()), 
    physNuMasses(s.displayPhysNuMasses()),
    uPmns(s.displayUpmns()),
    physNeutMix(s.displayPhysNeutMix()), 
    invertedOutput(s.displayInvertedOutput()), 
    CPEmasses(s.displayCPEMasses()), CPOmasses(s.displayCPOMasses()),
    CPEscalars(s.displayCPEMassSq()), CPOscalars(s.displayCPOMassSq()),
    CPEscalarMixing(s.displayCPEMix()), CPOscalarMixing(s.displayCPOMix())
{};

/// Formatted input
ostream & operator <<(ostream &left, const RpvNeutrino & r);

} // namespace softsusy

#endif
