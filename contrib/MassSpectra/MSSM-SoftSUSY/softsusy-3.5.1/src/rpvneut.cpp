/** \file rpvneut.cpp 
   - Project:     SOFTSUSY 
   - Author:      Ben Allanach 
   - Manual:      hep-ph/0104145, Comp. Phys. Comm. 143 (2002) 305 
   - Webpage:     http://hepforge.cedar.ac.uk/softsusy/
*/

#include "rpvneut.h"

namespace softsusy {

const RpvNeutrino & RpvNeutrino::operator = (const RpvNeutrino &s) {
  if (this == &s) return *this;
  setRpvSoftsusy(s.displayRpvSoftsusy());
  physNuMasses = s.physNuMasses;
  uPmns = s.uPmns;
  physNeutMix  = s.physNeutMix;
  invertedOutput = s.invertedOutput;
  CPEmasses = s.CPEmasses;
  CPOmasses = s.CPOmasses;
  CPEscalars = s.CPEscalars;
  CPOscalars = s.CPOscalars; 
  CPEscalarMixing = s.CPEscalarMixing;
  CPOscalarMixing = s.CPOscalarMixing;
  return * this;
}


/// An adaption of the original rpvsoftsusy version (Input a set of values for
/// sneutrino VEVs and it returns a more accurate set) 
DoubleVector RpvNeutrino::calculateSneutrinoVevs
(const DoubleVector & /* sneutrinoVevs */, double /* tol */, double snuSq, double v1, 
 double v2) { 
  
  double tb = displayTanb(), beta = atan(tb);
  double vSM = displayHvev();
  double mz = displayMzRun(); 
  double sinthDRbar = calcSinthdrbar();
    
  DoubleVector n(3);
  DoubleMatrix m(3, 3), mInverse(3, 3);
  
  /// Identity matrix
  DoubleMatrix i(3, 3);
  i(1, 1) = i(2, 2) = i(3, 3) = 1.0;

  /// tree level sneutrino vevs (as before)
  n = displayDr() * v2 - displaySusyMu() * v1 * displayKappa() 
    - displayMh1lSquared() * v1;
  m = displaySoftMassSquared(mLl).transpose()
    + (0.5 * sqr(mz) * cos(2.0 * beta) 
       + sqr(sin(beta)) * sqr(mz) / sqr(vSM) * snuSq) * i +
    outerProduct(displayKappa(), displayKappa());
	
  mInverse = m.inverse();
	
  /// adding the 1-loop correction
  n = n + calculateSneutrinoTadpoles(sinthDRbar);
	
  return mInverse * n;
}


DoubleVector RpvNeutrino::calculateSneutrinoTadpoles(double sinthDRbar) {
  double g2 = displayGaugeCoupling(2);
  double costhDRbar = sqrt(1.0 - sqr(sinthDRbar)), 
    tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
	
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2; 
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  double mw = displayMwRun();
  double mz = displayMzRun();
  double q = displayMu();
	
  double smu = displaySusyMu(); 
  DoubleVector kappa =  displayKappa();
  DoubleVector Dr =  displayDr();
  
  DoubleMatrix ye = displayYukawaMatrix(YE); 
  DoubleMatrix he = displayTrilinear(EA);
  DoubleMatrix yd = displayYukawaMatrix(YD);
  DoubleMatrix hd = displayTrilinear(DA);
  DoubleMatrix yu = displayYukawaMatrix(YU);
  
  /// CPE/CPO scalar couplings
  DoubleMatrix CPECoupling(5,5), CPOCoupling(5,5); 
  vector<DoubleMatrix> CPECouplings, CPOCouplings;
  
  for (int family=1; family <=3; family++) {
    //initialise
    for (int ii=1; ii<=5; ii++) {
      for (int jj=1; jj<=5; jj++) {
	CPECoupling(ii,jj) = 0.;
	CPOCoupling(ii,jj) = 0.;
      }}
		
    for (int ii=1; ii<=3; ii++) {  //sneutrinos
			
      CPECoupling(ii+2, ii+2) = sqr(g2 / costhDRbar) /8.0 * vi(family); 
      CPOCoupling(ii+2, ii+2) = sqr(g2 / costhDRbar) /8.0 * vi(family);  
      
      if ((ii)==family) {
	CPECoupling(1, ii+2) = - sqr(g2 / costhDRbar)/ 8.0 * v2; 
	CPECoupling(2, ii+2) = sqr(g2 / costhDRbar)/ 8.0 * v1; 
	CPECoupling(ii+2, 1) = CPECoupling(1, ii+2);
	CPECoupling(ii+2, 2) = CPECoupling(2, ii+2);
	
	for (int jj=1; jj<=3; jj++) { 
	  CPECoupling(family+2, jj+2) = CPECoupling(family+2, jj+2) + 
	    sqr(g2 / costhDRbar) /8.0 * vi(jj);
	  CPECoupling(jj+2, family+2) = CPECoupling(jj+2, family+2) + 
	    sqr(g2 / costhDRbar) /8.0 * vi(jj); 
	}
      }
    }
	
    /// snu-higgs1-higg1 (down-type)
    CPECoupling(2, 2) = sqr(g2 / costhDRbar) / 8.0 * vi(family); 
    CPOCoupling(2, 2) = sqr(g2 / costhDRbar) / 8.0 * vi(family); 	
    
    /// snu-higgs2-higg2 (up-type)
    CPECoupling(1, 1) = - sqr(g2 / costhDRbar) / 8.0 * vi(family); 
    CPOCoupling(1, 1) = - sqr(g2 / costhDRbar) / 8.0 * vi(family);
    
    CPECoupling = CPEscalarMixing.transpose() * CPECoupling * CPEscalarMixing;
    CPOCoupling = CPOscalarMixing.transpose() * CPOCoupling * CPOscalarMixing;
	
    CPECouplings.push_back(CPECoupling);
    CPOCouplings.push_back(CPOCoupling);
  }
	
  DoubleVector neutralCPEscalars(3), neutralCPOscalars(3);
  for (int family=1; family <=3; family++) {
    for (int ii=1; ii<=5; ii++) {
      neutralCPEscalars(family) = neutralCPEscalars(family) + 
	CPECouplings[family-1](ii, ii)  * a0(CPEmasses(ii), q);
      neutralCPOscalars(family) = neutralCPOscalars(family) + 
	CPOCouplings[family-1](ii, ii)  * a0(CPOmasses(ii), q);
    }
  }

  CPECouplings.clear();
  CPOCouplings.clear();	
  
  DoubleVector tadpole = neutralCPEscalars + neutralCPOscalars;

  ///charged higgs-slepton mass matrix - order: Hu1, Hd2, tildeLi, tildeEbarj
  DoubleMatrix Sleptons = calculateLNVSleptonMassMatrix(sinthDRbar);
	
  DoubleVector SleptonMasses(8);
  DoubleMatrix SleptonMixing(8, 8);
  
  Sleptons.diagonaliseSym(SleptonMixing, SleptonMasses);
  
  SleptonMasses = SleptonMasses.apply(ccbSqrt);
  
  ///slepton couplings
  DoubleMatrix SleptonCoupling(8, 8);
  vector<DoubleMatrix> SleptonCouplings;
  
  for (int family=1; family <=3; family++) {
    //initialise
    for (int ii=1; ii<=8; ii++) { 
      for (int jj=1; jj<=8; jj++) SleptonCoupling(ii, jj) = 0.;}
    SleptonCoupling(1, 1) = sqr(g2 / 2.0) * (1. - tanthDRbar2) * vi(family);
    SleptonCoupling(2, 2) = -sqr(g2 / 2.0) * (1. - tanthDRbar2) * vi(family); 
		
    for (int ii=1; ii<=3; ii++) { 
			
      if (family == ii) {
	SleptonCoupling(1, ii+2) = 0.25 * sqr(g2) * v2; 
	SleptonCoupling(2, ii+2) = 0.25 * sqr(g2) * v1; 
	SleptonCoupling(ii+2, 2) = 0.25 * sqr(g2) * v1; 
      }
			
      SleptonCoupling(2, ii+5) = - he(family, ii) / root2;
      SleptonCoupling(ii+2, ii+2) = - sqr(g2 / 2.0) * (1. - tanthDRbar2) * 
	vi(family);
      SleptonCoupling(ii+5, ii+5) = - 0.5 * sqr(g2) * tanthDRbar2 * vi(family); 
      SleptonCoupling(1, ii+5) = SleptonCoupling(1, ii+5) - smu / 
	root2 * ye(family, ii);
			
      for (int jj=1; jj<=3; jj++) {
				
	if (family == jj) { 
	  SleptonCoupling(ii+2, family+2) = SleptonCoupling(ii+2, family+2) + 
	    sqr(g2) * 0.25 * vi(ii);
	  SleptonCoupling(family+2, ii+2) = SleptonCoupling(family+2, ii+2) + 
	    sqr(g2) * 0.25 * vi(ii);
	}
				
	SleptonCoupling(1, ii+5) = SleptonCoupling(1, ii+5) + 
	  displayLam(family, jj, ii) / root2 * kappa(jj);
	SleptonCoupling(ii+2, 2) = SleptonCoupling(ii+2, 2) - 
	  ye(family, jj) * ye(ii, jj) * v1;
	SleptonCoupling(2, 2) = SleptonCoupling(2, 2) + 
	  ye(family, jj) * ye(ii, jj) * vi(ii);
				
	SleptonCoupling(ii+2, jj+5) = SleptonCoupling(ii+2, jj+5) + 
	  displayHr(LE).display(jj, family, ii) / root2;

	for (int kk=1; kk<=3; kk++) {
	  SleptonCoupling(2, ii+2) = SleptonCoupling(2, ii+2) - 
	    ye(kk, jj) * displayLam(family, ii, jj) * vi(kk);
	  SleptonCoupling(ii+2, 2) = SleptonCoupling(ii+2, 2) - 
	    ye(family, jj) * displayLam(kk, ii, jj) * vi(kk);
	  SleptonCoupling(ii+2, jj+2) = SleptonCoupling(ii+2, jj+2) + 
	    ye(ii, kk)  * displayLam(family, jj, kk) * v1;
	  SleptonCoupling(ii+5, jj+5) = SleptonCoupling(ii+5, jj+5) + 
	    ye(family, jj) * ye(kk, ii) * vi(kk)  + 
	    ye(kk, ii) * v1 * displayLam(family, kk, jj);
	  
	  for (int ll=1; ll<=3; ll++) {
	    SleptonCoupling(ii+2, jj+2) = SleptonCoupling(ii+2, jj+2) + 
	      displayLam(kk, ii, ll) * displayLam(family, jj, ll) * vi(kk);
	    SleptonCoupling(ii+5, jj+5) = SleptonCoupling(ii+5, jj+5) + 
	      displayLam(kk, ll, ii) * displayLam(family, ll, jj) * vi(kk);
	  }
	}
	SleptonCoupling(jj+5, ii+2) = SleptonCoupling(ii+2, jj+5);
      }
      SleptonCoupling(ii+2, 1) = SleptonCoupling(1, ii+2);
      SleptonCoupling(ii+5, 1) = SleptonCoupling(1, ii+5);
      SleptonCoupling(ii+5, 2) = SleptonCoupling(2, ii+5);
    }
		
    SleptonCoupling = SleptonMixing.transpose() * SleptonCoupling * 
      SleptonMixing;
    SleptonCouplings.push_back(SleptonCoupling);
  }
  
  DoubleVector sleptons(3), cgb(3), chiggs(3), sleps(3);
  for (int family=1; family<=3; family++) {
    for (int II=1; II<=8; II++) { 
      sleptons(family) = sleptons(family) + 
	SleptonCouplings[family-1](II, II) * a0(SleptonMasses(II), q);
			
      if (II>=2 && II<=7) sleps(family) = sleps(family) + 
			    SleptonCouplings[family-1](II, II) * 
			    a0(SleptonMasses(II), q);
    }
    cgb(family)=cgb(family) + SleptonCouplings[family-1](1, 1) * 
      a0(SleptonMasses(1), q);
    chiggs(family)=chiggs(family) + SleptonCouplings[family-1](8, 8) * 
      a0(SleptonMasses(8), q);
  }
  
  tadpole = tadpole + sleptons;
  
  SleptonCouplings.clear();	
	
  /// squark mass matrices
	
  DoubleMatrix UpSquarks = calculateLNVUpSquarkMassMatrix(sinthDRbar), 
    DownSquarks = calculateLNVDownSquarkMassMatrix(sinthDRbar);
	
  DoubleVector UpSquarkMasses(6), DownSquarkMasses(6);
  DoubleMatrix UpSquarkMixing(6, 6), DownSquarkMixing(6, 6);
  UpSquarks.diagonaliseSym(UpSquarkMixing, UpSquarkMasses);
  DownSquarks.diagonaliseSym(DownSquarkMixing, DownSquarkMasses);
	
  UpSquarkMasses = UpSquarkMasses.apply(ccbSqrt);
  DownSquarkMasses = DownSquarkMasses.apply(ccbSqrt); 
  
  /// squark couplings
  DoubleMatrix UpSquarkCoupling(6, 6), DownSquarkCoupling(6, 6);
  vector<DoubleMatrix> UpSquarkCouplings, DownSquarkCouplings;
  
  for (int family=1; family <=3; family++) {
    /// initialise
    for (int ii=1; ii<=6; ii++) {
      for (int jj=1; jj<=6; jj++) {
	UpSquarkCoupling(ii, jj) = 0.;
	DownSquarkCoupling(ii, jj) = 0.;}}
    
    for (int ii=1; ii<=3; ii++) {
      UpSquarkCoupling(ii, ii) = sqr(g2 / 2.0) * (1. - tanthDRbar2 / 3.0) * 
	vi(family);
      UpSquarkCoupling(ii+3, ii+3) = sqr(g2) * tanthDRbar2 / 3.0 * vi(family); 
      
      DownSquarkCoupling(ii,ii) = - sqr(g2 / 2.0) * (1. + tanthDRbar2 / 3.0) * 
	vi(family);
      DownSquarkCoupling(ii+3,ii+3) = - sqr(g2) * tanthDRbar2 / 6.0 * 
	vi(family); 
      
      for (int jj=1; jj<=3; jj++) {
	UpSquarkCoupling(ii, jj+3) = - kappa(family) / root2 * yu(ii, jj);
	UpSquarkCoupling(jj+3, ii) = UpSquarkCoupling(ii, jj+3);
	DownSquarkCoupling(ii, jj+3) = displayHr(LD).display(jj, family, ii) / 
	  root2; 
	DownSquarkCoupling(jj+3, ii) = DownSquarkCoupling(ii, jj+3);
	
	for (int kk=1; kk<=3; kk++) {
	  DownSquarkCoupling(ii, jj) = DownSquarkCoupling(ii, jj) + 
	    displayLamPrime(family, ii, kk) * yd(jj, kk) * v1;
	  DownSquarkCoupling(ii+3, jj+3) = DownSquarkCoupling(ii+3, jj+3) + 
	    yd(kk, jj) * displayLamPrime(family, kk, ii) * v1;
	  
	  for (int ll=1; ll<=3; ll++) {
	    DownSquarkCoupling(ii, jj) = DownSquarkCoupling(ii, jj) + 
	      displayLamPrime(ll, jj, kk) * vi(ll) * 
	      displayLamPrime(family, ii, kk);
	    DownSquarkCoupling(ii+3, jj+3) = DownSquarkCoupling(ii+3, jj+3) + 
	      displayLamPrime(kk, ll, ii) * vi(kk) * 
	      displayLamPrime(family, ll, jj);
	  }
	}
      }
    }
	
    UpSquarkCoupling = UpSquarkMixing.transpose() * UpSquarkCoupling * 
      UpSquarkMixing;
    DownSquarkCoupling = DownSquarkMixing.transpose() * 
      DownSquarkCoupling * DownSquarkMixing;
    
    UpSquarkCouplings.push_back(UpSquarkCoupling);
    DownSquarkCouplings.push_back(DownSquarkCoupling);
  }
  
  DoubleVector squarks(3);
  for (int II=1; II<=6; II++) {
    for (int family=1; family<=3; family++) {
      squarks(family)	= squarks(family) + 3.0 * 
	UpSquarkCouplings[family-1](II, II) * a0(UpSquarkMasses(II),  q);
      squarks(family) = squarks(family) + 3.0 * 
	DownSquarkCouplings[family-1](II, II) * a0(DownSquarkMasses(II), q);
    }
  }
  tadpole = tadpole + squarks; 
	
  UpSquarkCouplings.clear();
  DownSquarkCouplings.clear();

  ///Quarks
  DoubleVector quarks(3), DownMasses(3); 
  DoubleMatrix DownMixingU(3, 3), DownMixingV(3, 3), DownCoupling(3, 3);
  vector<DoubleMatrix> DownCouplings;
  
  /// root2 in last term?? (not in softsusy manual - I think we discussed this
  ///issue last year and 
  ///agreed that it was missing in the manual)
  DoubleMatrix md = (yd * v1 + displayLambda(LD).dotProd(vi, 2)) / root2;  
	
  md.diagonalise(DownMixingU, DownMixingV, DownMasses);
  
  for (int family=1; family<=3; family++) {		
    for (int ii=1; ii<=3; ii++) {
      for (int jj=1; jj<=3; jj++) {
	DownCoupling(ii, jj) = displayLamPrime(family, ii,jj) / root2;
      }
    }
    DownCoupling = DownMixingU.transpose() * DownCoupling * DownMixingV;
    DownCouplings.push_back(DownCoupling);
  }
	
  for (int family=1; family<=3; family++) {		
    for (int ii=1; ii<=3; ii++) {
      quarks(family) = quarks(family) - 6.0 * DownCouplings[family-1](ii, ii) * 
	DownMasses(ii) * a0(DownMasses(ii), q) * 2.0;
    }
  }
  tadpole = tadpole + quarks;
  DownCouplings.clear();
	
  /// Weak bosons
  DoubleVector gaugeBosons(3);
  gaugeBosons = vi * (3.0 * sqr(g2) / 
		      4.0 * (2.0 * a0(mw, q) + a0(mz, q) / sqr(costhDRbar)));
  tadpole = tadpole + gaugeBosons;
  
  /// chargino-charged lepton mass matrix
  /// in basis (W-, Hd-, l-) M (W+, hu+, ebar+) 
  DoubleMatrix Charginos = chargedLeptons(vSM); 
  DoubleVector CharginoMasses(5);
  DoubleMatrix CharginoMixingU(5, 5), CharginoMixingV(5, 5);
  Charginos.diagonalise(CharginoMixingU, CharginoMixingV, CharginoMasses);
  	
  /// chargino couplings
  DoubleMatrix CharginoCoupling(5, 5);
  vector<DoubleMatrix> CharginoCouplings;
  
  for (int family=1; family<=3; family++) {
    //initialise
    for (int ii=1; ii<=5; ii++) { for (int jj=1; jj<=5; jj++) {
	CharginoCoupling(ii, jj) = 0.0; }
    }
		
    CharginoCoupling(family+2, 1) = 2.0 * g2 / root2;  	
    for (int ii=1; ii<=3; ii++) {
      CharginoCoupling(2, ii+2) = - 2.0 * ye(family, ii) / root2; 		
      for (int jj=1; jj<=3; jj++) {
	CharginoCoupling(ii+2, jj+2) = 2.0 * displayLam(family, ii, jj) / root2;
      }
    }
    
    CharginoCoupling = CharginoMixingU.transpose() * CharginoCoupling * 
      CharginoMixingV;
    CharginoCouplings.push_back(CharginoCoupling);
  }
	
  DoubleVector charginos(3);
  for (int family=1; family<=3; family++) {
    for (int II=1; II<=5; II++) { 
      charginos(family) = charginos(family) - 
	2.0 * CharginoCouplings[family-1](II, II) * 
	CharginoMasses(II) * a0(CharginoMasses(II),  q); 
    }	
  }

  tadpole = tadpole + charginos;
	
  CharginoCouplings.clear();

  /// neutralino-neutrino mass matrix
  DoubleMatrix Neutralinos = neutralinoMassMatrix(); 
  
  /// Swap rows and columns to the format (Bino, Wino,  Hu, Hd,  nui)
  Neutralinos.swaprows(1, 4); Neutralinos.swapcols(1, 4);
  Neutralinos.swaprows(2, 5); Neutralinos.swapcols(2, 5);
  Neutralinos.swaprows(3, 7); Neutralinos.swapcols(3, 7);
  Neutralinos.swaprows(6, 4); Neutralinos.swapcols(6, 4);
  Neutralinos.swaprows(6, 5); Neutralinos.swapcols(6, 5);
  
  DoubleVector NeutralinoMasses(7);
  DoubleMatrix NeutralinoMixing(7, 7);
	
  Neutralinos.diagonaliseSym(NeutralinoMixing, NeutralinoMasses);
  
  
  /// neutralino couplings
  DoubleMatrix NeutralinoCoupling(7, 7); 
  vector<DoubleMatrix> NeutralinoCouplings;

	
  for (int family=1; family<=3; family++) {
    //initialise
    for (int ii=1; ii<=7; ii++) { for (int jj=1; jj<=7; jj++) {
	NeutralinoCoupling(ii, jj) = 0.0; }
    }
    NeutralinoCoupling(1, family+4) = - g2 * tanthDRbar;
    NeutralinoCoupling(2, family+4) = g2;
    
    NeutralinoCoupling.symmetrise();
    NeutralinoCoupling = NeutralinoMixing.transpose() * NeutralinoCoupling * 
      NeutralinoMixing;
    
    NeutralinoCouplings.push_back(NeutralinoCoupling);
  }
  
  DoubleVector neutralinos(3);
  for (int family=1; family<=3; family++) {
    for (int II=1; II<=7; II++) { 
      neutralinos(family) = neutralinos(family) - 
	NeutralinoCouplings[family-1](II, II) * NeutralinoMasses(II) * 
	a0(NeutralinoMasses(II), q);
    }	
  }	
  tadpole = tadpole + neutralinos;
  
  NeutralinoCouplings.clear();
  
	
  for (int family = 1; family<=3; family++) {
    tadpole(family) = tadpole(family) / (16.0 * sqr(PI));
  }
	
  return tadpole;
}


double RpvNeutrino::doCalcTadpole1oneLoop(double /* mt */, double sinthDRbar) {
	
  double     g2 = displayGaugeCoupling(2);
  double tanb = displayTanb();
  double costhDRbar = sqrt(1.0 - sqr(sinthDRbar)), 
	  tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
  
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2; 
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  double mw = displayMwRun();
  double mz = displayMzRun();
  double q = displayMu();
  
  double smu = displaySusyMu();  
  DoubleVector kappa =  displayKappa();
  DoubleVector Dr =  displayDr();
  
  DoubleMatrix ye = displayYukawaMatrix(YE); 
  DoubleMatrix he = displayTrilinear(EA);
  DoubleMatrix yd = displayYukawaMatrix(YD);
  DoubleMatrix hd = displayTrilinear(DA);
  DoubleMatrix yu = displayYukawaMatrix(YU);
 
  /// CPE/CPO scalar masses in order (Hu,Hd,snu_i) 
  calculateLNVNeutralScalarMassMatrix(sinthDRbar);
  CPEscalars.diagonaliseSym(CPEscalarMixing, CPEmasses);

  CPOscalars.diagonaliseSym(CPOscalarMixing, CPOmasses);  
  CPEmasses = CPEmasses.apply(ccbSqrt);
  CPOmasses = CPOmasses.apply(ccbSqrt);
  
  ///neutral scalar couplings
  DoubleMatrix CPECoupling(5, 5), CPOCoupling(5, 5); 
  
  for (int ii=1; ii<=3; ii++) {  //sneutrinos
    CPECoupling(ii+2, ii+2) = sqr(g2 / costhDRbar) / 8.0;  
    CPOCoupling(ii+2, ii+2) = sqr(g2 / costhDRbar) / 8.0;
    
    CPECoupling(2, ii+2) = sqr(g2 / costhDRbar) / 8.0 * vi(ii) / v1;
    CPECoupling(ii+2, 2) = CPECoupling(2, ii+2); 
  }
  
  //higgs1-higgs1-higg1 (down-type)
  CPECoupling(2, 2) = 3.0 * sqr(g2 / costhDRbar) / 8.0; 
  CPOCoupling(2, 2) = sqr(g2 / costhDRbar) / 8.0;  
  
  ///higgs1-higgs2-higg2 (up-type)
  CPECoupling(1, 1) = -sqr(g2 / costhDRbar) / 8.0;
  CPOCoupling(1, 1) = -sqr(g2 / costhDRbar) / 8.0; 
  
  //higgs1-higgs1-higgs2
  CPECoupling(1, 2) = -sqr(g2 / costhDRbar) / 8.0 * tanb; 
  CPECoupling(2, 1) = CPECoupling(1, 2);
  
  CPECoupling = CPEscalarMixing.transpose() * CPECoupling * CPEscalarMixing;
  CPOCoupling = CPOscalarMixing.transpose() * CPOCoupling * CPOscalarMixing;
  
  double neutralCPEscalars = 0.0, neutralCPOscalars = 0.0;
  for (int ii=1; ii<=5; ii++) {
    neutralCPEscalars = neutralCPEscalars + CPECoupling(ii, ii)  * 
      a0(CPEmasses(ii), q);
    neutralCPOscalars = neutralCPOscalars + CPOCoupling(ii, ii)  * 
      a0(CPOmasses(ii), q); 
  }

  double tadpoleOVd = neutralCPEscalars + neutralCPOscalars;
  ///charged higgs-slepton mass matrix - order: Hu1, Hd2, tildeLi, tildeEbarj
  DoubleMatrix Sleptons = calculateLNVSleptonMassMatrix(sinthDRbar);
  
  DoubleVector SleptonMasses(8);
  DoubleMatrix SleptonMixing(8, 8);
  Sleptons.diagonaliseSym(SleptonMixing, SleptonMasses);
  
  SleptonMasses = SleptonMasses.apply(ccbSqrt);
  
  ///slepton couplings
  DoubleMatrix SleptonCouplings(8, 8);
  
  SleptonCouplings(1, 1) = sqr(g2 / 2.0) * (1. - tanthDRbar2);
  SleptonCouplings(1, 2) = sqr(g2) * 0.25 * v2 / v1;  
  SleptonCouplings(2, 1) = SleptonCouplings(1, 2);  
  SleptonCouplings(2, 2) = sqr(g2 / 2.0) * (1. + tanthDRbar2); 
  
  for (int ii=1; ii<=3; ii++) {
    SleptonCouplings(2, ii+2) = sqr(g2) * 0.25 * vi(ii) / v1; 
    SleptonCouplings(ii+2, ii+2) = - sqr(g2 / 2.0) * (1. - tanthDRbar2); 
    SleptonCouplings(ii+5, ii+5) = - 0.5 * sqr(g2) * tanthDRbar2; 
    
    for (int jj=1; jj<=3; jj++) {
      SleptonCouplings(1, ii+5) = SleptonCouplings(1, ii+5) + kappa(jj) / 
	root2 / v1 * ye(jj, ii);
      SleptonCouplings(ii+2, jj+5) = SleptonCouplings(ii+2, jj+5) + 
	he(ii, jj) / root2 / v1; 
      SleptonCouplings(jj+5, ii+2) = SleptonCouplings(ii+2, jj+5);
      
      for (int kk=1; kk<=3; kk++) {
	SleptonCouplings(2, ii+2) = SleptonCouplings(2, ii+2) - 
	  0.5 * vi(jj) / v1 * ye(jj, kk) * ye(ii, kk);
	SleptonCouplings(ii+2, jj+2) = SleptonCouplings(ii+2, jj+2) + 
	  ye(ii, kk) * ye(jj, kk); 
	SleptonCouplings(ii+5, jj+5) = SleptonCouplings(ii+5, jj+5) + 
	  ye(kk, ii) * ye(kk, jj); 
	
	for (int ll=1; ll<=3; ll++) {
	  SleptonCouplings(ii+2, jj+2) = SleptonCouplings(ii+2, jj+2) +
	    vi(ll) / v1 * ye(jj, kk) * displayLam(ll, ii, kk);
	  SleptonCouplings(ii+5, jj+5) = SleptonCouplings(ii+5, jj+5) + 
	    vi(ll) / v1 * ye(kk, ii) * displayLam(ll, kk, jj);
	}
      }
    }
    SleptonCouplings(ii+5, 1) = SleptonCouplings(1, ii+5);
    SleptonCouplings(ii+2, 2) = SleptonCouplings(2, ii+2);
  }
  
  SleptonCouplings = SleptonMixing.transpose() * SleptonCouplings * 
    SleptonMixing;

  double sleptons = 0.0, sleps=0.0;
  for (int II=1; II<=8; II++) { 
    sleptons = sleptons + SleptonCouplings(II, II) * a0(SleptonMasses(II), q);
    if (II>=2 && II<=7) {
      sleps = sleps + SleptonCouplings(II, II) * a0(SleptonMasses(II), q);
    }
  }
  
  tadpoleOVd = tadpoleOVd + sleptons;

  ///squark mass matrices
  DoubleMatrix UpSquarks = calculateLNVUpSquarkMassMatrix(sinthDRbar), 
    DownSquarks = calculateLNVDownSquarkMassMatrix(sinthDRbar);
  
  DoubleVector UpSquarkMasses(6), DownSquarkMasses(6);
  DoubleMatrix UpSquarkMixing(6, 6), DownSquarkMixing(6, 6);
  UpSquarks.diagonaliseSym(UpSquarkMixing, UpSquarkMasses);
  DownSquarks.diagonaliseSym(DownSquarkMixing, DownSquarkMasses);
  
  UpSquarkMasses = UpSquarkMasses.apply(ccbSqrt);
  DownSquarkMasses = DownSquarkMasses.apply(ccbSqrt); 
  
  ///squark couplings
  DoubleMatrix UpSquarkCoupling(6, 6), DownSquarkCoupling(6, 6);
  
  for (int ii=1; ii<=3; ii++) {
    UpSquarkCoupling(ii, ii) = sqr(g2 / 2.0) * (1. - tanthDRbar2 / 3.0);
    UpSquarkCoupling(ii+3, ii+3) = sqr(g2) * tanthDRbar2 / 3.0; 
    
    DownSquarkCoupling(ii, ii) = - sqr(g2 / 2.0) * (1. + tanthDRbar2 / 3.0);
    DownSquarkCoupling(ii+3, ii+3) = - sqr(g2) * tanthDRbar2 / 6.0; 
    
    for (int jj=1; jj<=3; jj++) {
      UpSquarkCoupling(ii, jj+3) = - smu / root2 / v1 * yu(ii, jj);   
      DownSquarkCoupling(ii, jj+3) = hd(ii, jj) / root2 / v1; 
      UpSquarkCoupling(jj+3, ii) = UpSquarkCoupling(ii, jj+3);
      DownSquarkCoupling(jj+3, ii) = DownSquarkCoupling(ii, jj+3);
      
      for (int kk=1; kk<=3; kk++) {
	/// if I include kk=1,2 3 and not only kk=3 as in softsusy.cpp,  
	/// result changes by 0.6%. Keep this??
	DownSquarkCoupling(ii, jj) = DownSquarkCoupling(ii, jj) + 
	  yd(ii, kk) * yd(jj, kk); 
	DownSquarkCoupling(ii+3, jj+3) = DownSquarkCoupling(ii+3, jj+3) + 
	  yd(kk, ii) * yd(kk, jj);
	
	for (int ll=1; ll<=3; ll++) {
	  DownSquarkCoupling(ii, jj) = DownSquarkCoupling(ii, jj) + 
	    displayLamPrime(ll, ii, kk) * vi(ll) / v1 * yd(jj, kk);
	  DownSquarkCoupling(ii+3, jj+3) = DownSquarkCoupling(ii+3, jj+3) + 
	    displayLamPrime(kk, ll, ii) * vi(kk) / v1 * yd(ll, jj);
	}
      }
    }
  }
  
  UpSquarkCoupling = UpSquarkMixing.transpose() * UpSquarkCoupling * 
    UpSquarkMixing;
  DownSquarkCoupling = DownSquarkMixing.transpose() * DownSquarkCoupling * 
    DownSquarkMixing;
  
  double squarks = 0.0;
  for (int II=1; II<=6; II++) { 
    squarks = squarks + 3.0 * UpSquarkCoupling(II, II) * 
      a0(UpSquarkMasses(II),  q);
    squarks = squarks + 3.0 * DownSquarkCoupling(II, II) * 
      a0(DownSquarkMasses(II),  q);
  }
  tadpoleOVd = tadpoleOVd + squarks;
  
  /// SM quarks 
  double quarks = 0.0;
  DoubleMatrix DownMixingU(3, 3), DownMixingV(3, 3), DownCoupling(3, 3);
  DoubleVector DownMasses(3);
  
  DoubleMatrix md = (yd * v1 + displayLambda(LD).dotProd(vi, 2)) / root2; 
  md.diagonalise(DownMixingU,  DownMixingV,  DownMasses);
  
  DownCoupling = yd / root2 / v1;
  DownCoupling = DownMixingU.transpose() * DownCoupling * DownMixingV;
  
  for (int ii=1; ii<=3; ii++) {
    quarks = quarks - 6.0 * DownCoupling(ii, ii) * DownMasses(ii) * 
      a0(DownMasses(ii), q) * 2.0; 
  }
  
  tadpoleOVd = tadpoleOVd + quarks;
  
  /// Weak bosons
  double gaugeBosons = 0.0;
  gaugeBosons = 3.0 / 4.0 * sqr(g2) * (2.0 * a0(mw, q) + a0(mz, q) / 
				       sqr(costhDRbar));
  tadpoleOVd = tadpoleOVd + gaugeBosons;

  /// chargino-charged lepton mass matrix
  /// in basis (W-,  Hd-,  l-) M (W+, hu+, ebar+)
  DoubleMatrix Charginos = chargedLeptons(vSM); 
  DoubleVector CharginoMasses(5);
  DoubleMatrix CharginoMixingU(5, 5), CharginoMixingV(5, 5);
  Charginos.diagonalise(CharginoMixingU, CharginoMixingV, CharginoMasses);
  
  ///chargino couplings
  DoubleMatrix CharginoCouplings(5, 5);
  CharginoCouplings(2, 1) = 2.0 * g2 / v1 / root2;  	
  for (int ii=1; ii<=3; ii++) {
    for (int jj=1; jj<=3; jj++) {
      CharginoCouplings(ii+2, jj+2) = 2.0 * ye(ii, jj) / root2 / v1;     
    }
  }
  
  CharginoCouplings = CharginoMixingU.transpose() * CharginoCouplings * 
    CharginoMixingV;
  
  double charginos = 0.0;
  for (int II=1; II<=5; II++) { 
    charginos = charginos - 2.0 * CharginoCouplings(II, II) * 
      CharginoMasses(II) * a0(CharginoMasses(II),  q); 
  }	
  
  tadpoleOVd = tadpoleOVd + charginos;
  
  ///neutralino-neutrino mass matrix  
  DoubleMatrix Neutralinos = neutralinoMassMatrix(); 
  
  // Swap rows and columns to the format (Bino, Wino,  Hu, Hd,  nui)
  Neutralinos.swaprows(1, 4); Neutralinos.swapcols(1, 4);
  Neutralinos.swaprows(2, 5); Neutralinos.swapcols(2, 5);
  Neutralinos.swaprows(3, 7); Neutralinos.swapcols(3, 7);
  Neutralinos.swaprows(6, 4); Neutralinos.swapcols(6, 4);
  Neutralinos.swaprows(6, 5); Neutralinos.swapcols(6, 5);
  
  DoubleVector NeutralinoMasses(7);
  DoubleMatrix NeutralinoMixing(7, 7);
  
  Neutralinos.diagonaliseSym(NeutralinoMixing, NeutralinoMasses);
  ///neutralino couplings
  DoubleMatrix NeutralinoCouplings(7, 7); 
  
  NeutralinoCouplings(1, 4) = - g2 / v1 * tanthDRbar;
  NeutralinoCouplings(2, 4) = g2 / v1;
  NeutralinoCouplings.symmetrise();
  
  NeutralinoCouplings = NeutralinoMixing.transpose() * NeutralinoCouplings * 
    NeutralinoMixing;
  
  double neutralinos = 0.0;
  for (int II=1; II<=7; II++) { 
    neutralinos = neutralinos - NeutralinoCouplings(II, II) * 
      NeutralinoMasses(II) * a0(NeutralinoMasses(II),  q);
  }	
  
  tadpoleOVd = tadpoleOVd + neutralinos;
  
  return tadpoleOVd / (16.0 * sqr(PI)); 	
}

double RpvNeutrino::doCalcTadpole2oneLoop(double /* mt */, double sinthDRbar) {
  
  double g2 = displayGaugeCoupling(2);
  double tanb = displayTanb();
  double costhDRbar = sqrt(1.0 - sqr(sinthDRbar)), 
    tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
  
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2; 
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  double mw = displayMwRun();
  double mz = displayMzRun();
  double q = displayMu();
  
  double smu = displaySusyMu(); 
  DoubleVector kappa =  displayKappa();
  DoubleVector Dr =  displayDr();
  
  DoubleMatrix ye = displayYukawaMatrix(YE); 
  DoubleMatrix he = displayTrilinear(EA);
  DoubleMatrix yd = displayYukawaMatrix(YD);
  DoubleMatrix hd = displayTrilinear(DA);
  DoubleMatrix yu = displayYukawaMatrix(YU);
  DoubleMatrix hu = displayTrilinear(UA);
  
  ///neutral scalar couplings
  DoubleMatrix CPECoupling(5, 5), CPOCoupling(5, 5); 
  
  for (int ii=1; ii<=3; ii++) {  //sneutrinos
    CPECoupling(ii+2, ii+2) = - sqr(g2 / costhDRbar) / 8.0;  
    CPOCoupling(ii+2, ii+2) = - sqr(g2 / costhDRbar) / 8.0;
    
    CPECoupling(1, ii+2) = - sqr(g2 / costhDRbar) / 8.0 * vi(ii) / v2;
    CPECoupling(ii+2, 1) = CPECoupling(1, ii+2); 
  }
  
  CPECoupling(2, 2) = - sqr(g2 / costhDRbar) / 8.0; 
  CPOCoupling(2, 2) = - sqr(g2 / costhDRbar) / 8.0;  
  CPECoupling(1, 1) = 3.0 * sqr(g2 / costhDRbar) / 8.0;
  CPOCoupling(1, 1) = sqr(g2 / costhDRbar) / 8.0; 
  CPECoupling(1, 2) = - sqr(g2 / costhDRbar) / 8.0 / tanb; 
  CPECoupling(2, 1) = CPECoupling(1, 2);
  CPECoupling = CPEscalarMixing.transpose() * CPECoupling * CPEscalarMixing;
  CPOCoupling = CPOscalarMixing.transpose() * CPOCoupling * CPOscalarMixing;
  
  double neutralCPEscalars = 0.0, neutralCPOscalars = 0.0;
  for (int ii=1; ii<=5; ii++) {
    neutralCPEscalars = neutralCPEscalars + 
      CPECoupling(ii, ii)  * a0(CPEmasses(ii), q);
    neutralCPOscalars = neutralCPOscalars + 
      CPOCoupling(ii, ii)  * a0(CPOmasses(ii), q); 
  }
  
  double tadpoleOVd = neutralCPEscalars + neutralCPOscalars;

  ///charged higgs-slepton mass matrix
  ///order: Hu1, Hd2, tildeLi, tildeEbarj
  DoubleMatrix Sleptons = calculateLNVSleptonMassMatrix(sinthDRbar);
  DoubleVector SleptonMasses(8);
  DoubleMatrix SleptonMixing(8, 8);
  Sleptons.diagonaliseSym(SleptonMixing, SleptonMasses);
  
  SleptonMasses = SleptonMasses.apply(ccbSqrt);  
  ///slepton couplings
  DoubleMatrix SleptonCouplings(8, 8);
  
  SleptonCouplings(1, 1) = sqr(g2 / 2.0 / costhDRbar);
  SleptonCouplings(1, 2) = sqr(g2) * 0.25 / tanb;  
  SleptonCouplings(2, 1) = SleptonCouplings(1, 2);  
  SleptonCouplings(2, 2) = sqr(g2 / 2.0) * (1. - tanthDRbar2); 
  
  for (int ii=1; ii<=3; ii++) {
    SleptonCouplings(1, ii+2) = sqr(g2) * 0.25 * vi(ii) / v2; 
    SleptonCouplings(ii+2, ii+2) = sqr(g2 / 2.0) * (1. - tanthDRbar2); 
    SleptonCouplings(ii+5, ii+5) = 0.5 * sqr(g2) * tanthDRbar2; 
    
    for (int jj=1; jj<=3; jj++) {
      
      SleptonCouplings(2, ii+5) = SleptonCouplings(2, ii+5) + 
	kappa(jj) / root2 / v2 * ye(jj, ii);
      
      SleptonCouplings(ii+2, jj+5) = SleptonCouplings(ii+2, jj+5) - 
	smu * ye(ii, jj) / root2 / v2; 
      
      for (int kk=1; kk<=3; kk++) {
	SleptonCouplings(ii+2, jj+5) = SleptonCouplings(ii+2, jj+5) - 
	  kappa(kk) * displayLam(kk, ii, jj) / root2 / v2;
      }
      SleptonCouplings(jj+5, ii+2) = SleptonCouplings(ii+2, jj+5);
    }
    SleptonCouplings(ii+5, 2) = SleptonCouplings(2, ii+5);
    SleptonCouplings(ii+2, 1) = SleptonCouplings(1, ii+2);
  }
  
  SleptonCouplings = SleptonMixing.transpose() * SleptonCouplings * 
    SleptonMixing;

  double sleptons = 0.0,  sleps=0.0;
  for (int II=1; II<=8; II++) { 
    sleptons = sleptons + SleptonCouplings(II, II) * a0(SleptonMasses(II),  q);
    if (II>=2 && II<=7) {
      sleps = sleps + SleptonCouplings(II, II) * a0(SleptonMasses(II),  q);
    }
  }
  tadpoleOVd = tadpoleOVd + sleptons;
  
  ///squark mass matrices
  DoubleMatrix UpSquarks = calculateLNVUpSquarkMassMatrix(sinthDRbar), 
    DownSquarks = calculateLNVDownSquarkMassMatrix(sinthDRbar);
  
  DoubleVector UpSquarkMasses(6), DownSquarkMasses(6);
  DoubleMatrix UpSquarkMixing(6, 6), DownSquarkMixing(6, 6);
  UpSquarks.diagonaliseSym(UpSquarkMixing, UpSquarkMasses);
  DownSquarks.diagonaliseSym(DownSquarkMixing, DownSquarkMasses);
  
  UpSquarkMasses = UpSquarkMasses.apply(ccbSqrt);
  DownSquarkMasses = DownSquarkMasses.apply(ccbSqrt); 
  
  ///squark couplings
  DoubleMatrix UpSquarkCoupling(6, 6), DownSquarkCoupling(6, 6);
  
  for (int ii=1; ii<=3; ii++) {
    UpSquarkCoupling(ii, ii) = - sqr(g2 / 2.0) * (1. - tanthDRbar2 / 3.0);
    UpSquarkCoupling(ii+3, ii+3) = - sqr(g2) * tanthDRbar2 / 3.0; 
    
    DownSquarkCoupling(ii, ii) =  sqr(g2 / 2.0) * (1. + tanthDRbar2 / 3.0);
    DownSquarkCoupling(ii+3, ii+3) = sqr(g2) * tanthDRbar2 / 6.0; 
    
    for (int jj=1; jj<=3; jj++) {
      UpSquarkCoupling(ii, jj+3) = hu(ii, jj) / root2 / v2;
      DownSquarkCoupling(ii, jj+3) =  - smu / root2 / v2 * yd(ii, jj); 
      UpSquarkCoupling(jj+3, ii) = UpSquarkCoupling(ii, jj+3);
      
      for (int kk=1; kk<=3; kk++) {
	UpSquarkCoupling(ii, jj) = UpSquarkCoupling(ii, jj) + 
	  yu(ii, kk) * yu(jj, kk); 
	UpSquarkCoupling(ii+3, jj+3) = UpSquarkCoupling(ii+3, jj+3) + 
	  yu(kk, ii) * yu(kk, jj);
	
	DownSquarkCoupling(ii, jj+3) = DownSquarkCoupling(ii, jj+3) - 
	  kappa(kk) / root2 / v2 * displayLamPrime(kk,  ii,  jj);  
      }
      DownSquarkCoupling(jj+3, ii) = DownSquarkCoupling(ii, jj+3);
    }
  }
  
  UpSquarkCoupling = UpSquarkMixing.transpose() * UpSquarkCoupling * 
    UpSquarkMixing;
  DownSquarkCoupling = DownSquarkMixing.transpose() * DownSquarkCoupling * 
    DownSquarkMixing;
  
  double squarks = 0.0;
  for (int II=1; II<=6; II++) { 
    squarks = squarks + 3.0 * UpSquarkCoupling(II, II) * 
      a0(UpSquarkMasses(II), q);
    squarks = squarks + 3.0 * DownSquarkCoupling(II, II) * 
      a0(DownSquarkMasses(II), q);
  }
  tadpoleOVd = tadpoleOVd + squarks;
  
  /// SM quarks 
  double quarks = 0.0; 
  DoubleMatrix UpMixingU(3, 3), UpMixingV(3, 3), UpCoupling(3, 3);
  DoubleVector UpMasses(3);
  
  DoubleMatrix mu = (yu * v2) / root2; 
  mu.diagonalise(UpMixingU, UpMixingV,  UpMasses);
  
  UpCoupling = yu / root2 / v2;
  UpCoupling = UpMixingU.transpose() * UpCoupling * UpMixingV;
  
  for (int ii=1; ii<=3; ii++) {
    quarks = quarks - 6.0 * UpCoupling(ii, ii) * UpMasses(ii) * 
      a0(UpMasses(ii), q) * 2.0;		
  }
  tadpoleOVd = tadpoleOVd + quarks;
  
  
  /// Weak bosons
  double gaugeBosons = 0.0;
  gaugeBosons = 3.0 / 4.0 * sqr(g2) * (2.0 * a0(mw, q) + a0(mz, q) / 
				       sqr(costhDRbar));
  tadpoleOVd = tadpoleOVd + gaugeBosons;

  ///chargino-charged lepton mass matrix
  /// in basis (W-, Hd-, l-) M (W+,hu+,ebar+)
  DoubleMatrix Charginos = chargedLeptons(vSM); 
  DoubleVector CharginoMasses(5);
  DoubleMatrix CharginoMixingU(5, 5), CharginoMixingV(5, 5);
  Charginos.diagonalise(CharginoMixingU, CharginoMixingV, CharginoMasses);
  
  
  ///chargino couplings
  DoubleMatrix CharginoCouplings(5, 5);
  CharginoCouplings(1, 2) = 2.0 * g2 / v2 / root2; 
  CharginoCouplings = CharginoMixingU.transpose() * CharginoCouplings * 
    CharginoMixingV;
  
  double charginos = 0.0;
  for (int II=1; II<=5; II++) { 
    charginos = charginos - 2.0 * CharginoCouplings(II, II) * 
	  CharginoMasses(II) * a0(CharginoMasses(II), q); 
  }	
  
  tadpoleOVd = tadpoleOVd + charginos;
  
  ///neutralino-neutrino mass matrix
  DoubleMatrix Neutralinos = neutralinoMassMatrix();
  DoubleVector NeutralinoMasses(7);
  DoubleMatrix NeutralinoMixing(7, 7);
  
  /// Swap rows and columns to the format (Bino,Wino,  Hu, Hd,  nui)
  Neutralinos.swaprows(1, 4); Neutralinos.swapcols(1, 4);
  Neutralinos.swaprows(2, 5); Neutralinos.swapcols(2, 5);
  Neutralinos.swaprows(3, 7); Neutralinos.swapcols(3, 7);
  Neutralinos.swaprows(6, 4); Neutralinos.swapcols(6, 4);
  Neutralinos.swaprows(6, 5); Neutralinos.swapcols(6, 5);
  
  Neutralinos.diagonaliseSym(NeutralinoMixing, NeutralinoMasses);

  ///neutralino couplings
  DoubleMatrix NeutralinoCouplings(7, 7); 
  
  NeutralinoCouplings(1, 3) = g2 / v2 * tanthDRbar;
  NeutralinoCouplings(2, 3) = - g2 / v2;
  
  NeutralinoCouplings.symmetrise();
  
  NeutralinoCouplings = NeutralinoMixing.transpose() * NeutralinoCouplings * 
    NeutralinoMixing;
  
  double neutralinos = 0.0;
  for (int II=1; II<=7; II++) { 
    neutralinos = neutralinos - NeutralinoCouplings(II, II) * 
      NeutralinoMasses(II) * a0(NeutralinoMasses(II), q);
  }	
  
  tadpoleOVd = tadpoleOVd + neutralinos;
  
  return tadpoleOVd / (16.0 * sqr(PI)); 	
}


void RpvNeutrino::calculateLNVNeutralScalarMassMatrix(double sinthDRbar) {
  
  double g2 = displayGaugeCoupling(2);
  double tanb = displayTanb();
  double costhDRbar = sqrt(1.0 - sqr(sinthDRbar));
  
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2;
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  
  double smu = displaySusyMu();  
  DoubleVector kappa =  displayKappa();
  double Btilde =  displayM3Squared();
  DoubleVector Dr =  displayDr();
  
  DoubleMatrix mLijsq =  displaySoftMassSquared(mLl);
  DoubleVector mH1Lisq =  displayMh1lSquared();   
  double mH1sq =  displayMh1Squared() - displayTadpole1Ms();
  
  DoubleMatrix MSnuSq(3, 3); 
  DoubleMatrix id(3, 3); ///< Identity matrix
  id(1, 1) = id(2, 2) = id(3, 3) = 1.0;
  
  CPEscalars(1, 1) = Btilde / tanb + vi.dot(Dr)/v2 + 
    sqr(g2 / costhDRbar / 2.0 * v2);
  CPEscalars(1, 2) = - Btilde - sqr(g2 / costhDRbar / 2.0) * v2 * v1;
  CPEscalars(2, 2) = mH1sq + sqr(smu) - sqr(g2 / costhDRbar) / 8.0 * 
    (sqr(v2) - 3.* sqr(v1) - vi.dot(vi));
  
  CPOscalars(1, 1) = CPEscalars(1, 1);
  CPOscalars(1, 2) = Btilde - sqr(g2 / costhDRbar / 2.0) * v2 * v1;
  CPOscalars(2, 2) = CPEscalars(2, 2);
  
  MSnuSq = mLijsq + outerProduct(kappa, kappa) - sqr(g2 / costhDRbar) / 8.0 
    * (sqr(v2) - sqr(v1) - snuSq) * id + sqr(g2 / costhDRbar / 2.0) * 
    outerProduct(vi, vi);
  
  for (int ii=3; ii<=5; ii++) {
    //off diagonal 2x3 matrix
    CPEscalars(1, ii) = - Dr(ii-2) - sqr(g2 / costhDRbar / 2.0) * v2 * vi(ii-2);
    CPEscalars(2, ii) = mH1Lisq(ii-2) + smu* kappa(ii-2) + 
      sqr(g2 / costhDRbar / 2.0) * v1 * vi(ii-2) ;
    CPOscalars(1, ii) = Dr(ii-2)  - sqr(g2 / costhDRbar / 2.0) * v2 * vi(ii-2);
    CPOscalars(2, ii) = CPEscalars(2, ii);
    
    ///lower 3x3 part (sneutrinos)
    CPEscalars(3, ii) = MSnuSq(1, ii-2);
    CPEscalars(4, ii) = MSnuSq(2, ii-2);
    CPEscalars(5, ii) = MSnuSq(3, ii-2);
    CPOscalars(3, ii) = MSnuSq(1, ii-2);
    CPOscalars(4, ii) = MSnuSq(2, ii-2);
    CPOscalars(5, ii) = MSnuSq(3, ii-2);
  }
  
  CPEscalars.symmetrise();
  CPOscalars.symmetrise();	
}


DoubleMatrix RpvNeutrino::calculateLNVSleptonMassMatrix(double sinthDRbar) {
  /// xi=1 Feynman gauge for loop calculations (m_G+=m+W); xi=0 gauge - m_G+=0
  double xiGauge = 1.0;  
  
  double g2 = displayGaugeCoupling(2);
  double costhDRbar = sqrt(1.0 - sqr(sinthDRbar)), 
    tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
  
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2; 
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  
  double smu = displaySusyMu(); 
  DoubleVector kappa =  displayKappa();
  double Btilde =  displayM3Squared();
  DoubleVector Dr =  displayDr();
  
  DoubleMatrix ye = displayYukawaMatrix(YE);
  DoubleMatrix he = displayTrilinear(EA);
  
  DoubleMatrix mLijsq =  displaySoftMassSquared(mLl), 
    mEijsq =  displaySoftMassSquared(mEr);
  DoubleVector mH1Lisq =  displayMh1lSquared();   
  double mH1sq =  displayMh1Squared() - displayTadpole1Ms();
  double mH2sq =  displayMh2Squared() - displayTadpole2Ms();
  
  DoubleMatrix Sleptons(8, 8); 	
  
  Sleptons(1, 1) = mH2sq + sqr(smu) + kappa.dot(kappa) + sqr(g2 / costhDRbar) / 
    8.0 * (sqr(v2) - sqr(v1) - snuSq) + sqr(g2 / 2.0 ) * (sqr(v1) + snuSq) +
    xiGauge * sqr(g2 / 2.0 * v2); 
  Sleptons(1, 2) = sqr(g2 / 2.0) * v1 * v2 + Btilde - 
    xiGauge * sqr(g2 / 2.0) * v2 * v1;
  Sleptons(2, 2) = mH1sq + sqr(smu) + sqr(g2 * v1 / 2.0) + (1. - tanthDRbar2) * 
    sqr(g2) / 8.0 * (sqr(v2) - sqr(v1) - snuSq) + xiGauge * sqr(g2 / 2.0 * v1);	
  
  for (int ii= 1; ii <= 3; ii++) {
    Sleptons(1, ii+2) = Sleptons(1, ii+2) + sqr(g2 / 2.0) * vi(ii) * v2 + 
      Dr(ii) - xiGauge * sqr(g2 / 2.0) * v2 * vi(ii); 
    Sleptons(2, ii+2) = Sleptons(2, ii+2) + mH1Lisq(ii) + smu * kappa(ii) + 
      sqr(g2 / 2.0) * v1 * vi(ii) + xiGauge * sqr(g2 / 2.0) * v1 * vi(ii); 
    Sleptons(ii+2, ii+2) = Sleptons(ii+2, ii+2) + sqr(g2) / 8.0 * 
      (1. - tanthDRbar2) * (sqr(v2) - sqr(v1) - snuSq);
    Sleptons(ii+5, ii+5) = Sleptons(ii+5, ii+5) + sqr(g2 / 2.0) * 
      tanthDRbar2 * (sqr(v2) - sqr(v1) - snuSq);
    
    for (int jj= 1; jj <= 3; jj++) {
      Sleptons(1, ii+5) = Sleptons(1, ii+5) - ye(jj,  ii) / root2 * 
	(smu  * vi(jj) - kappa(jj) * v1); 
      Sleptons(2, ii+5) = Sleptons(2, ii+5) + 1./ root2 * 
	(v2 * kappa(jj) * ye(jj, ii) - vi(jj) * he(jj, ii)); 
      Sleptons(ii+2, jj+2) = Sleptons(ii+2, jj+2) + mLijsq(ii, jj) + 
	kappa(ii) * kappa(jj) + sqr(g2 / 2.0) * vi(ii) * vi(jj) + 
	xiGauge * sqr(g2 / 2.0) * vi(ii) * vi(jj) ;
      Sleptons(ii+2, jj+5) = Sleptons(ii+2, jj+5) + 1. / root2 * 
	(he(ii, jj) * v1 - smu * v2 * ye(ii, jj));
      Sleptons(ii+5, jj+5) = Sleptons(ii+5, jj+5) + mEijsq(ii, jj);
      
      for (int kk= 1; kk <= 3; kk++) {
	Sleptons(1, ii+5) = Sleptons(1, ii+5) + kappa(jj) / root2 * vi(kk) * 
	  displayLam(kk,  jj,  ii);
	Sleptons(2, 2) = Sleptons(2, 2) + 0.5 * vi(ii) * vi(jj) * ye(ii, kk) * 
	  ye(jj, kk); 
	Sleptons(2, ii+2) = Sleptons(2, ii+2) - 0.5 * vi(jj) * ye(jj, kk) * v1 *
	  ye(ii, kk); 
	Sleptons(ii+2, jj+2) = Sleptons(ii+2, jj+2) + 0.5 * sqr(v1) * 
	  ye(ii, kk) * ye(jj, kk);
	Sleptons(ii+2, jj+5) = Sleptons(ii+2, jj+5) + 1./ root2 * 
	  (vi(kk) * displayHr(LE).display(jj, kk, ii) - kappa(kk) * v2 * 
	   displayLam(kk, ii, jj));
	Sleptons(ii+5, jj+5) = Sleptons(ii+5, jj+5) + 
	  0.5 * sqr(v1) * ye(kk, ii) * ye(kk, jj);
	
	for (int ll= 1; ll <= 3; ll++) {
	  Sleptons(2, ii+2) = Sleptons(2, ii+2) - 
	    0.5 * vi(jj) * ye(jj, kk) * vi(ll) * displayLam(ll, ii, kk); 
	  
	  Sleptons(ii+2, jj+2) = Sleptons(ii+2, jj+2) + 
	    0.5 * v1 * (ye(ii, kk) * vi(ll) * displayLam(ll, jj, kk) + 
			ye(jj, kk) * vi(ll) * displayLam(ll, ii, kk));
	  Sleptons(ii+5, jj+5) = Sleptons(ii+5, jj+5) + 
	    0.5 * vi(kk) * vi(ll) * ye(kk, ii) * ye(ll, jj) + 
	    0.5 * v1 * (ye(kk, ii) * vi(ll) * displayLam(ll, kk, jj) + 
			ye(kk, jj) * vi(ll) * displayLam(ll, kk, ii));
	  
	  for (int mm=1; mm<= 3; mm++) {
	    Sleptons(ii+2, jj+2) = Sleptons(ii+2, jj+2) +
	      0.5 * vi(ll) * vi(mm) * displayLam(ll, ii, kk) * 
	      displayLam(mm, jj, kk);
	    Sleptons(ii+5, jj+5) = Sleptons(ii+5, jj+5) + 
	      0.5 * vi(ll) * vi(mm) * displayLam(ll, kk, ii) * 
	      displayLam(mm, kk, jj);
	  }
	}
      }
    }
  }
  
  Sleptons.symmetrise();
  return Sleptons;	
}	


DoubleMatrix RpvNeutrino::calculateLNVDownSquarkMassMatrix(double sinthDRbar) {
  double g2 = displayGaugeCoupling(2);
  
  double tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
  
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2;
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  
  double smu = displaySusyMu(); 
  DoubleVector kappa =  displayKappa();
  
  DoubleMatrix yd = displayYukawaMatrix(YD);
  DoubleMatrix hd = displayTrilinear(DA);
  
  DoubleMatrix mQijsq =  displaySoftMassSquared(mQl),
    mDijsq =  displaySoftMassSquared(mDr);
  
  DoubleMatrix Squarks(6,6); 
  
  for (int ii= 1; ii <= 3; ii++) {
    
    Squarks(ii, ii) = Squarks(ii, ii) + sqr(g2) / 8.0 *
      (1. + tanthDRbar2/ 3.0) * (sqr(v2) - sqr(v1) - snuSq);
    
    Squarks(ii+3, ii+3) = Squarks(ii+3, ii+3) + sqr(g2) / 12.0 * tanthDRbar2 * 
      (sqr(v2) - sqr(v1) - snuSq);
    
    for (int jj= 1; jj <= 3; jj++) {
      Squarks(ii, jj) = Squarks(ii, jj) + mQijsq(ii, jj); 
      Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) + mDijsq(ii, jj); 
      Squarks(ii, jj+3) = Squarks(ii, jj+3) + 1./root2 * (hd(ii, jj) * v1 - 
							yd(ii, jj) * smu * v2);
      
      for (int kk= 1; kk <= 3; kk++) {
	Squarks(ii, jj) = Squarks(ii, jj) + 
	  0.5 * sqr(v1) * yd(ii, kk) * yd(jj, kk);
	Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) +
	  0.5 * sqr(v1) * yd(kk, ii) * yd(kk, jj);
	Squarks(ii, jj+3) = Squarks(ii, jj+3) +  
	  1. / root2 * (displayHr(LD).display(jj, kk, ii) * vi(kk) - 
		       kappa(kk) * v2 * displayLamPrime(kk, ii, jj));
	
	for (int ll= 1; ll <= 3; ll++) {
	  Squarks(ii, jj) = Squarks(ii, jj) + 
	    0.5 * v1 * (yd(ii, kk) * vi(ll) * displayLamPrime(ll, jj, kk) + 
			yd(jj, kk) * vi(ll) * displayLamPrime(ll, ii, kk));
	  Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) + 
	    0.5 * v1 * (yd(kk, ii) * vi(ll) * displayLamPrime(ll, kk, jj) + 
			yd(kk, jj) * vi(ll) * displayLamPrime(ll, kk, ii));
	  
	  for (int mm=1; mm<= 3; mm++) {
	    Squarks(ii, jj) = Squarks(ii, jj) + 
	      0.5 * vi(ll) * vi(mm) * displayLamPrime(ll, ii, kk) * 
	      displayLamPrime(mm, jj, kk);
	    Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) + 
	      0.5 * vi(ll) * vi(mm) * displayLamPrime(ll, kk, ii) * 
	      displayLamPrime(mm, kk, jj);
	  }
	}
      }
    }
  }
  
  Squarks.symmetrise();
  return Squarks;	
}	


DoubleMatrix RpvNeutrino::calculateLNVUpSquarkMassMatrix(double sinthDRbar) {
  double g2 = displayGaugeCoupling(2);
  double tanthDRbar = tan(asin(sinthDRbar)), tanthDRbar2 = sqr(tanthDRbar);
  double vSM = displayHvev();
  DoubleVector vi = displaySneutrinoVevs();
  double snuSq, v1, v2; 
  if (usefulVevs(vSM, vi, snuSq, v1, v2)) {
    cout << "sneutrino VEVs incompatible with MZ, MW!\n" << endl;}
  
  double smu = displaySusyMu();  
  DoubleVector kappa =  displayKappa();
  
  DoubleMatrix yu = displayYukawaMatrix(YU);
  DoubleMatrix hu = displayTrilinear(UA);
  
  DoubleMatrix mQijsq =  displaySoftMassSquared(mQl), 
    mUijsq =  displaySoftMassSquared(mUr);
  
  DoubleMatrix Squarks(6, 6); 
  
  for (int ii= 1; ii <= 3; ii++) {
    Squarks(ii, ii) = Squarks(ii, ii) - sqr(g2) / 8.0 * 
      (1. - tanthDRbar2/ 3.0) * (sqr(v2) - sqr(v1) - snuSq); 
    Squarks(ii+3, ii+3) = Squarks(ii+3, ii+3) - sqr(g2) / 6.0 * tanthDRbar2 * 
      (sqr(v2) - sqr(v1) - snuSq);
    
    for (int jj= 1; jj <= 3; jj++) {      
      Squarks(ii, jj) = Squarks(ii, jj) + mQijsq(ii, jj); 
      Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) + mUijsq(ii, jj); 
      Squarks(ii, jj+3) = Squarks(ii, jj+3) + 1./ root2 * 
	(hu(ii, jj) * v2 - yu(ii, jj) * 
	 (smu * v1 + kappa.dot(vi)));
      
      for (int kk= 1; kk <= 3; kk++) {	
	Squarks(ii, jj) = Squarks(ii, jj) + 
	  0.5 * sqr(v2) * yu(ii, kk) * yu(jj, kk);
	Squarks(ii+3, jj+3) = Squarks(ii+3, jj+3) +
	  0.5 * sqr(v2) * yu(kk, ii) * yu(kk, jj);
      }
    }
  } 
  
  Squarks.symmetrise();
  return Squarks;	
}	


/// calculate 3x3 effective neutrino mass matrix via seesaw from 7x7 neutralino
/// matrix 
DoubleMatrix RpvNeutrino::neutrinoSeesaw(){
  DoubleVector MassEigenvector7(7);
  DoubleMatrix MixingMatrix7x7(7, 7), MassMatrix7x7(7, 7), 
    NeutrinoMassMatrix(3, 3), NeutralinoMassM(4, 4), MixingMatrix(4, 3);
  
  neutrino(MassEigenvector7, MixingMatrix7x7, MassMatrix7x7);
  
  for (int i=1; i<=4; i++) {
    for (int j=1; j<=4; j++) {
      NeutralinoMassM(i, j) = MassMatrix7x7(3+i,3+j);
      if (j<4) MixingMatrix(i, j) = MassMatrix7x7(3+i, j);
      if ((i < 4) && (j < 4)) NeutrinoMassMatrix(i, j) = MassMatrix7x7(i, j);
    }	
  }
  
  NeutrinoMassMatrix = NeutrinoMassMatrix - MixingMatrix.transpose() *
    (NeutralinoMassM.inverse()) * MixingMatrix;
  
  /// Set full 7 by 7 physical mixing matrix: defined at zero external momentum
  physNeutMix = MixingMatrix7x7;

  return NeutrinoMassMatrix;
}


void RpvNeutrino::neutrinoData() {   
  
  DoubleMatrix NeutrinoMassMatrix = neutrinoSeesaw(), U(3, 3);
  DoubleVector NeutrinoMasses(3);
  NeutrinoMassMatrix.diagonaliseSym(U, NeutrinoMasses);

  /// in case of IH, swapping of rows in U & NeutrinoMasses needed
  if (invertedOutput) {
    DoubleMatrix Ur(3, 3);
    Ur(2, 1) = Ur(3, 2) = Ur(1, 3) = 1;
    U = U * Ur; 
    
    double tmp=NeutrinoMasses(1);
    NeutrinoMasses(1) = abs(NeutrinoMasses(2));
    NeutrinoMasses(2) = abs(NeutrinoMasses(3));
    NeutrinoMasses(3) = abs(tmp);
  }
  
  /// Calculate PMNS matrix by multiplying U by the
  /// charged lepton mixing matrix (transposed).
  DoubleMatrix u(3, 3), v(3, 3); 
  DoubleVector w(3);
  displayYukawaMatrix(YE).diagonalise(u, v, w);
  U = u.transpose() * U;

  /// We may re-organise the signs in the mixing matrices to keep the diagonal
  /// elements positive
  int i; for (i=1; i<=3; i++) 
	   if (U(i, i) < 0.) {
	     int j; for (j=1; j<=3; j++) U(i, j) = -U(i, j); 
	   }
  
  uPmns = U;
  physNuMasses = NeutrinoMasses;
  
  return;
}

void RpvNeutrino::sparticleThresholdCorrections(double tb, 
						const DoubleVector & pars) {
  double mz = displayMz();
  if (displayMu() != mz) {
    ostringstream ii;
    ii << "Called MssmSoftsusy::sparticleThresholdCorrections "
       << "with scale" << displayMu() << endl;
    throw ii.str();
  }
  
  setTanb(tb);
  
  double alphaDrbar = 
    qedSusythresh(displayDataSet().displayAlpha(ALPHA), displayMu());
  
  double alphasMZDRbar =
    qcdSusythresh(displayDataSet().displayAlpha(ALPHAS), displayMu());
  
  // Do gauge couplings
  double outrho = 1.0, outsin = 0.48, tol = TOLERANCE * 1.0e-3; 
  int maxTries = 20;
  double pizztMZ = piZZT(mz, displayMu());
  double piwwt0 = piWWT(0., displayMu());
  double piwwtMW = piWWT(displayMw(), displayMu());
  rhohat(outrho, outsin, alphaDrbar, pizztMZ, piwwt0, piwwtMW, tol, maxTries);
  if (displayProblem().noRhoConvergence) 
    outsin = sqrt(1.0 - sqr(displayMw() / mz)); 
  
  double eDR = sqrt(4.0 * PI * alphaDrbar), costhDR = cos(asin(outsin));
  
  DoubleVector newGauge(3);
  newGauge(1) = eDR / costhDR * sqrt(5.0 / 3.0);
  newGauge(2) = eDR / outsin;
  newGauge(3) = sqrt(4.0 * PI * alphasMZDRbar);
  
  setGaugeCoupling(1, newGauge(1));
  setGaugeCoupling(2, newGauge(2));
  setGaugeCoupling(3, newGauge(3));
  
  double vev = displayHvev();
  
  setMw(sqrt(0.25 * sqr(newGauge(2)) * sqr(vev) - piwwtMW));
  
  if (MIXING < 0 || MIXING > 2) {
    ostringstream ii;
    ii << "In MssmSoftsusy::sparticleThresholdCorrections(double tb) ";
    ii << "\n MIXING=" << MIXING << " is out of range (0 -> 2)\n";
    throw ii.str();
  }
  
  DoubleMatrix mUq(3, 3), mDq(3, 3), mLep(3, 3);
  massFermions(displayDataSet(), mDq, mUq, mLep);
  double mtau = calcRunningMtau();
  mDq(3, 3) = calcRunningMb();
  mUq(3, 3) = calcRunningMt();
  mLep(3, 3) = mtau;
  
  doQuarkMixing(mDq, mUq); 
  
  double snuSq, v1, v2;
  if (usefulVevs(vev, displaySneutrinoVevs(), snuSq, v1, v2) == 1) 
    flagHiggsufb(true);
  
  setYukawaMatrix(YU, mUq * root2 / v2);
  setYukawaMatrix(YD, 
		  (mDq - displayLambda(LD).dotProd(displaySneutrinoVevs(), 1)) 
		  * root2 / v1);
  setYukawaMatrix(YE, mLep * root2 / v1);
  
  // MB uncommented these three lines when adding iterateChargedLeptons
  int errSignal = 0; DoubleMatrix e(displayYukawaMatrix(YE));
  iterateChargedLeptons(vev, e, tol, maxTries, errSignal, mtau);
  if (errSignal == 1) flagNoRhoConvergence(true); 
  /// Set the RPV couplings here if we need to: currently only works with
  /// CMSSM 
  if (susyRpvBCatMSUSY) RpvSoftsusy::rpvSet(pars);
}



void RpvNeutrino::FermionMassSym(DoubleMatrix & MM, ComplexMatrix & Z, 
				 DoubleVector & MassVector,
				 DoubleVector & PositiveMassVector, 
				 DoubleVector & SquaredVector, 
				 DoubleMatrix & mix) {     
  int size = MM.displayRows();
  MM.diagonaliseSym(mix, MassVector);
  Positivise(mix);
  
  DoubleVector tempMassVector(MassVector);  
  ComplexMatrix KK(size,size);
  for (int i=1; i<=size; i++) 
    {if (MassVector(i) < 0.0) 
	KK(i, i) = Complex(0.0, 1.0);
      else
	KK(i, i) = Complex(1.0, 0.0);
      SquaredVector(i) = tempMassVector(i)*tempMassVector(i);
    }
  PositiveMassVector = tempMassVector.apply(fabs);
  Z = mix * KK;
}

void RpvNeutrino::FermionMassAsym(DoubleMatrix & MM, ComplexMatrix & M, 
				  ComplexMatrix & P, DoubleVector & MassVector, 
				  DoubleVector & PositiveMassVector, 
				  DoubleVector & SquaredVector, 
				  DoubleMatrix & mixM, DoubleMatrix & mixP) {
  int size=MM.displayRows();
  MM.diagonalise(mixM, mixP, MassVector);
  
  /// force the largest component of every mass eigenvector in the mixing
  /// matrices P and M to be positive. Since an asymmetric matrix is
  /// diagonalised by a bi-unitary diagonalisation, the diagonal values can
  /// always be made positive by changing phases of the mixing matrices.  What
  /// we are really doing here is to 'un-do' these phase changes, and
  /// compensate this by forcing the mixing matrices to be imaginary. 
  /// In this case the matrix MM is diagonalised by
  /// M.hermitianConjugate * MM * P = diag MM, where all eigenvalues are
  /// positive. 
  
  Positivise(mixM);
  Positivise(mixP);
  
  DoubleMatrix tempMM=mixM.transpose() * MM * mixP;
  DoubleVector tempMassVector(size);
  for (int ii=1; ii<=size; ii++)     {
    tempMassVector(ii)=tempMM(ii, ii);
  }
  
  ComplexMatrix KK(size, size);
  for (int i=1; i<=size; i++) {
    if (tempMassVector(i) < 0.0) 
	KK(i,  i) = Complex(0.0, 1.0);
      else
	KK(i, i) = Complex(1.0, 0.0);
      SquaredVector(i) = tempMassVector(i)*tempMassVector(i);
    }
  PositiveMassVector = tempMassVector.apply(fabs);
  P = mixP * KK;
  M = mixM * (KK.hermitianConjugate());
}

void RpvNeutrino::ScalarMass(DoubleMatrix & MM, ComplexMatrix & Z, 
			     DoubleVector & MassVector, 
			     DoubleVector & PositiveMassVector, 
			     DoubleVector & SquaredVector, DoubleMatrix & mix) {
  int size = MM.displayRows();
  MM.diagonaliseSym(mix, SquaredVector);
  DoubleVector tempMassVector = SquaredVector;
  /// FORCE the squared mass vector to be positive.
  /// This does not change anything if renormalization is done in Msusy.
  /// However this is potentially inconsistent if renormalization done at MZ !
  /// This can be traced as the SquaredVector is still negative.
  /// At Mu(~MZ), some elements of wsa2, wsr2, wsch2 may become negative.
  tempMassVector = tempMassVector.apply(fabs);
  
  Positivise(mix);
  
  ComplexMatrix KK(size, size);
  for (int i=1; i<=size; i++) 
    { KK(i, i) = Complex(1.0, 0.0);
      PositiveMassVector(i) = sqrt(tempMassVector(i));
      MassVector(i) = PositiveMassVector(i);
    }
  Z = mix * KK;
}


void RpvNeutrino::Positivise(DoubleMatrix & A) {
  int size = A.displayRows();
  for (int masslab = 1; masslab<=size; masslab++) {
      int maxCpt = 0;;  double maxCptSize = 0.;
      for (int maxM=1; maxM<=size; maxM++) {
	  if (abs(A(maxM, masslab)) > maxCptSize) {
	      maxCpt = maxM;
	      maxCptSize = abs(A(maxM, masslab));
	  }
      }
      if (A(maxCpt, masslab) < 0.0) {
	for (int ii=1; ii<=size; ii++)
	  A(ii, masslab) = -1.* A(ii, masslab);
	} 
    }
  
}

void RpvNeutrino::AnalyticDiagonalise
(DoubleMatrix & Mass, DoubleMatrix & MassMix, DoubleMatrix & MassMix0, 
 DoubleMatrix & MassMix1, DoubleMatrix & MassMix2) {
  int size = Mass.displayRows();
  DoubleMatrix TestD(size, size);
  DoubleMatrix TestOffD(size, size);
  
  for (int ii=1; ii<=size; ii++) {
      TestD(ii, ii) = Mass(ii, ii);
    }
  for (int ii=1; ii<=size; ii++) 
    for (int jj=1; jj<=size; jj++) {
	if (ii != jj) {
	    TestOffD(ii, jj) = Mass(ii, jj);
	  }
      }
  
  DoubleMatrix TestMix(size, size);
  DoubleMatrix TestMix0(size, size);
  DoubleMatrix TestMix1(size, size);
  DoubleMatrix TestMix2(size, size);
  
  /// Unit mixing matrix
  for (int ii=1; ii<=size; ii++)
    {
      TestMix0(ii, ii) = 1.;
    }
  
  /// Corrections of order (OffD/D) to the off diagonal entries
  for (int ii=1; ii<=size; ii++)
    for (int jj=1; jj<=size; jj++) {
      if (ii != jj) {
	TestMix1(ii, jj) += TestOffD(ii, jj)/(TestD(jj, jj)-TestD(ii, ii));
      }
    }
  
  /// Corrections of order (OffD^2/D^2) to the diagonal entries
  for (int ii=1; ii<=size; ii++)
    for (int kk=1; kk<=size; kk++) {
      if (kk != ii)
	{
	  TestMix2(ii, ii) += -0.5 * TestOffD(ii, kk) * TestOffD(kk, ii) /
	    (TestD(ii, ii)-TestD(kk, kk))/(TestD(ii, ii)-TestD(kk, kk));
	}
    }
  
  /// Off diagonal terms required to diagonalize completely to order OffD^2/D
  for (int ii=1; ii<=size; ii++)
    for (int jj=1; jj<=size; jj++)
      for (int kk=1; kk<=size; kk++) {
	if ((kk != jj) && (ii != jj)) {
	  TestMix2(ii, jj) += TestOffD(ii, kk) * TestOffD(kk, jj) /
	    (TestD(jj, jj)-TestD(kk, kk))/(TestD(jj, jj)-TestD(ii, ii));
	}
      }
  
  TestMix = TestMix0 + TestMix1 + TestMix2;
  MassMix = TestMix;
  MassMix0 = TestMix0;
  MassMix1 = TestMix1;
  MassMix2 = TestMix2;
}

void RpvNeutrino::neutrino(DoubleVector & neutrino, DoubleMatrix & mixMnu, 
			   DoubleMatrix & mNeutrino) {
  const int pstart = 1;
  const int pend = 7;
  const int qstart = pstart;
  const int qend = pend;
  
  /// square root of -1.
  Complex rtm1(0.0, 1.0);
  /// 'zero'
  double zero = 1.0e-16; zero = 0.;
  /// loop integral external momentum scale
  double pp = zero;
  /// no. of colours
  double nc = 3.;
  /// gauge fixing parameter (for reference only so do not change !)
  const double gfix = 1.;
  
  /// OBTAIN TREE LEVEL PARAMETERS FROM MAIN SOFTSUSY CODE
  
  /// gauge couplings and EW mixing angles
  double g1 = displayGaugeCoupling(1) * sqrt(0.6);
  double g2 = displayGaugeCoupling(2);
  double sw = g1/sqrt(g1 * g1 + g2 * g2); ///< = sqrt(oneset.displayAlpha(ALPHA)
					/// * 4. * PI)/g2;
  double cw = sqrt(1. - sw * sw);
  /// the Yukawa matrices
  DoubleMatrix yu = displayYukawaMatrix(YU);
  DoubleMatrix yd = displayYukawaMatrix(YD);
  DoubleMatrix ye = displayYukawaMatrix(YE);
  /// third family approximation:
  /// Useful when cross checked with RPC softsusy
  ///   yu(1, 1) = 0.; yu(2, 2) = 0.;
  ///   yd(1, 1) = 0.; yd(2, 2) = 0.;
  ///   ye(1, 1) = 0.; ye(2, 2) = 0.;
  /// the VEVs
  double beta = atan(displayTanb());
  
  /// various VEVs
  DoubleVector snuvev = displaySneutrinoVevs();
  double vSM = displayHvev();
  DoubleVector v4(4);
  double vup = sqrt(sqr(vSM) - snuvev.dot(snuvev)) * sin(beta);
  double vdown = sqrt(sqr(vSM) - snuvev.dot(snuvev)) * cos(beta);
  v4(1) = vdown; v4(2) = snuvev(1); v4(3) = snuvev(2); v4(4) = snuvev(3);
  
  /// the tree level gauge boson msasses
  double mw = g2/2. * vSM;
  double mz = sqrt(g1 * g1+g2 * g2) / 2. * vSM;
  /// the supersymmetric bilinear parameters
  double susymu = displaySusyMu();  ///< (susy.h)
  DoubleVector kappa = displayKappa(); ///< (rpvsusypars.h)
  DoubleVector mu4(4);
  mu4(1) = susymu; mu4(2) = kappa(1); mu4(3) = kappa(2); mu4(4) = kappa(3);
  /// the soft bilinear parameters
  DoubleVector Dr = displayDr();  ///< (rpvsusypars.h)
  double Br = displayM3Squared();  ///< (softpars.h)
  DoubleVector B4(4);
  B4(1) = Br; B4(2) = Dr(1); B4(3) = Dr(2); B4(4) = Dr(3);
  /// the msass mixing between down-higgs and sleptons
  DoubleVector HL = displayMh1lSquared();  ///< (rpvsusypars.h)
  /// the up- and down- type higgs squared, tadpoles included
  double mdowns = displayMh1Squared()-displayTadpole1Ms();
  double mups = displayMh2Squared()-displayTadpole2Ms();
  
  /// the 4x4x3 lamda and 4x3x3 lamda' tensors
  double lam[4][4][4];
  double lamp[4][4][4];
  for (int a = 0; a<= 3; a++) {
    for (int c=0; c<=3; c++) {
      for (int b=0; b<=3; b++) {
	lam[a][b][c] = 0.;
	lamp[a][b][c] = 0.;
      }
    }
  }
  for (int j=1; j<=3; j++) {
    for (int k=1; k<=3; k++) {
      lam[0][j][k] = ye(j, k);
      lam[j][0][k] = -lam[0][j][k];
      lamp[0][j][k] = yd(j, k);
      for (int i=1; i<=3; i++) {
	lam[i][j][k] = displayLam(i, j, k);
	lamp[i][j][k] = displayLamPrime(i, j, k);
      }
    }
  }
  /// the 4x4x3 lambda and 4x3x3 lambda' rpv soft trilinear tensors
  double hlam[4][4][4];
  double hlamp[4][4][4];
  for (int a=0; a<=3; a++) {
    for (int c=0; c<=3; c++) {
      for (int b=0; b<=3; b++) {
	hlam[a][b][c] = 0.;
	hlamp[a][b][c] = 0.;
      }
    }
  }
  for (int j=1; j<=3; j++) {
    for (int k=1; k<=3; k++) {
      hlam[0][j][k] = displayTrilinear(EA, j, k);
      hlam[j][0][k] = -hlam[0][j][k];
      hlamp[0][j][k] = displayTrilinear(DA, j, k);
      for (int i=1; i<=3; i++) {
	hlam[i][j][k] = displayHr(LE).display(k, i, j);
	hlamp[i][j][k] = displayHr(LD).display(k, i, j);
      }
    }
  }
  
  /// DEFINE TREE LEVEL MASS MATRICES
  /// up type quarks
  DoubleMatrix mfu(3, 3);
  mfu = yu * vup / root2;
  
  /// down type quarks
  DoubleMatrix mfd(3, 3);
  mfd = (yd * vdown +
	 displayLambda(LD).dotProd(displaySneutrinoVevs(), 2)) / root2;
  
  /// up type squarks
  DoubleMatrix msu(6, 6);
  for (int i=1; i<=3; i++)
    {msu(i, i) += -(g2 * g2 / 8. - g1 * g1 / 24.) * (vup * vup - v4.dot(v4));
      msu(3+i, 3+i) += -g1 * g1 * (vup * vup- v4.dot(v4)) / 6.;
      for (int j=1; j<=3; j++)
	{msu(i, j) += displaySoftMassSquared(mQl, i, j);
	  msu(i, j) += vup * vup * (yu * yu.transpose())(j, i) / 2.;
	  msu(3+i, 3+j) += displaySoftMassSquared(mUr, i, j);
	  msu(3+i, 3+j) += vup * vup * (yu.transpose() * yu)(j, i) / 2.;
	  msu(i, 3+j) += displayTrilinear(UA, i, j) * vup / root2;
	  msu(i, 3+j) += -yu(i, j) * mu4.dot(v4) / root2;
	}
    }
  msu.symmetrise();
  
  /// down type squarks
  DoubleMatrix msd(6, 6);
  for (int i=1; i<=3; i++) {
    msd(i, i) += (g2 * g2 / 8. + g1 * g1 / 24.) * (vup * vup - v4.dot(v4));
    msd(3+i, 3+i) += g1 * g1 * (vup * vup - v4.dot(v4)) / 12.;
    for (int j=1; j<=3; j++) {
      msd(i, j) += displaySoftMassSquared(mQl, i, j);
      msd(3+i, 3+j) += displaySoftMassSquared(mDr, i, j);
      for (int A=1; A<=4; A++) {
	msd(i, 3+j) += hlamp[A-1][i][j] * v4(A) / root2;
	msd(i, 3+j) += -lamp[A-1][i][j] * mu4(A) * vup / root2;
	for (int B=1; B<=4; B++) {
	  for (int m=1; m<=3; m++) {
	    msd(i, j) += lamp[A-1][i][m] * lamp[B-1][j][m] * 
	      v4(A) * v4(B)/2.;
	    msd(3+i, 3+j) += lamp[A-1][m][j] * lamp[B-1][m][i] * 
	      v4(A) * v4(B)/2.;
	  } 
	}
      }
    }
  }
  msd.symmetrise();
  
  /// neutralino-neutrino
  DoubleMatrix mfn(7, 7);
  for (int i=5; i<=7; i++)
    {mfn(1, i) = -g1 / 2. * snuvev(i-4);
      mfn(2, i) = g2 / 2. * snuvev(i-4);
      mfn(3, i) = -kappa(i-4);
    }
  mfn(1, 1) = displayGaugino(1);
  mfn(1, 3) = g1 / 2. * vup;
  mfn(1, 4) = -g1 / 2. * vdown;
  mfn(2, 2) = displayGaugino(2); 
  mfn(2, 3) = -g2 / 2. * vup;
  mfn(2, 4) = g2 / 2. * vdown;
  mfn(3, 4) = -susymu;
  mfn.symmetrise();
  
  /// a modified chargino-charged lepton matrix,  Hd and Leptons are on
  /// equal footing
  DoubleMatrix mfch(5, 5);
  mfch(1, 1) = displayGaugino(2);
  mfch(1, 2) = g2 * vup/root2;
  for (int ii=2; ii<=5; ii++) {
    mfch(ii, 1)  =  g2  *  v4(ii-1) / root2;
    mfch(ii, 2)  =  mu4(ii-1);
  }
  for (int ii=2; ii<=5; ii++) 
    for (int kk=3; kk<=5; kk++)
      for (int bb=1; bb<=4; bb++) {
	mfch(ii, kk) += lam[bb-1][ii-2][kk-2]  *  v4(bb) / root2;
      }
  
  /// 4x4 lepton doublet - down higgs doublet for CPeven, CPodd, and Charged
  /// scalar matrices
  DoubleMatrix mL(4, 4);
  mL(1, 1) = mdowns;
  for (int i=1; i<=3; i++) {
    mL(1, 1+i) = HL(i);
    mL(1+i, 1) = HL(i);
    for (int j=1; j<=3; j++) {
      mL(1+i, 1+j) = displaySoftMassSquared(mLl, i, j);
    }
  }
  
  /// 4x4 'sneutrino-neutral down higgs matrix for CPeven and CPodd msasses
  DoubleMatrix msch1snu = mL;
  for (int a=1; a<=4; a++) {
    msch1snu(a, a) += -(g1 * g1+g2 * g2) / 8. * (vup * vup-v4.dot(v4));
    for (int b=1; b<=4; b++) {
      msch1snu(a, b) += mu4(a) * mu4(b);
    }
  }
  
  /// CP even scalars
  DoubleMatrix msr(5, 5);
  msr(1, 1) = B4.dot(v4)/vup + (g1 * g1 + g2 * g2) / 4. * vup * vup;
  for (int a=1; a<=4; a++) {
    msr(1, 1+a) = -B4(a) -(g1 * g1 + g2 * g2) / 4. * vup * v4(a);
    msr(1+a, 1) = -B4(a) -(g1 * g1+g2 * g2) / 4. * vup * v4(a);
    for (int b=1; b<=4; b++) {
      msr(1+a, 1+b) = msch1snu(a, b) + (g1 * g1+g2 * g2) / 4. * v4(a) * v4(b);
    }
  }
  
  /// CP odd scalars (gauge-independent part)
  DoubleMatrix msa(5, 5);
  msa(1, 1) = B4.dot(v4) / vup;
  for (int a=1; a<=4; a++) {
    msa(1, 1+a) = B4(a);
    msa(1+a, 1) = B4(a);
    for (int b=1; b<=4; b++) {
      msa(1+a, 1+b) = msch1snu(a, b);
    }
  }
  
  /// Charged scalars (gauge-independent part)
  DoubleMatrix msch(8, 8);
  msch(1, 1) = mups + mu4.dot(mu4);
  msch(1, 1) += (g1 * g1 + g2 * g2) / 8. * 
    (vup * vup - v4.dot(v4)) + g2 * g2 * v4.dot(v4) / 4.;
  for (int a=1; a<=4; a++) {
    msch(1, 1+a) = B4(a) + g2 * g2 * vup * v4(a) / 4.;
    msch(1+a, 1) = msch(1, 1+a);
    msch(1+a, 1+a) = (g2 * g2 - g1 * g1) * (vup * vup - v4.dot(v4))/8.;
    for (int b=1; b<=4; b++) {
      msch(1+a, 1+b) += mL(b, a)+mu4(a) * mu4(b)+g2 * g2 * v4(a) * v4(b) / 4.;
      for (int A=1; A<=4; A++) {
	for (int B=1; B<=4; B++) {
	  for (int l=1; l<=3; l++) {
	    msch(1+a, 1+b) += lam[A-1][a-1][l] * lam[B-1][b-1][l] * 
	      v4(A) * v4(B) / 2.;
	  }
	}
      }
    }
  }
  for (int l=1; l<=3; l++)
    for (int A=1; A<=4; A++)
      for (int B=1; B<=4; B++) {
	msch(1, 5+l) += lam[B-1][A-1][l] * mu4(A) * v4(B) / root2;
	msch(5+l, 1) = msch(1, 5+l);
      }
    
  for (int l=1; l<=3; l++) {
    for (int a=1; a<=4; a++) {
      for (int A=1; A<=4; A++) {
	msch(1+a, 5+l) += hlam[A-1][a-1][l] * v4(A) / root2 - 
	  lam[A-1][a-1][l] * mu4(A) * vup / root2;
      }
      msch(5+l, 1+a) = msch(1+a, 5+l);
    }
  }
  for (int l=1; l<=3; l++) {
    msch(5+l, 5+l) = g1 * g1 * (vup * vup - v4.dot(v4)) / 4.;
    for (int k=1; k<=3; k++) {
      msch(5+l, 5+k) += displaySoftMassSquared(mEr, l, k);
      for (int A=1; A<=4; A++) {
	for (int B=1; B<=4; B++) {
	  for (int C=1; C<=4; C++) {
	    msch(5+l, 5+k) += lam[A-1][B-1][k] * lam[A-1][C-1][l] * 
	      v4(B) * v4(C) / 2.;
	  }
	}
      }
    }
  }
  
  /// gauge DEPENDENT part of the mass matrices (CP odd and charged scalars)
  DoubleMatrix mga(5, 5);
  mga(1, 1) = (g1 * g1+g2 * g2) / 4. * vup * vup; 
  for (int a=1; a<=4; a++) {
    mga(1, 1+a) =-(g1 * g1+g2 * g2) / 4. * vup * v4(a);
    mga(1+a, 1)=mga(1, 1+a);
    for (int b=1; b<=4; b++)
      mga(1+a, 1+b)=(g1 * g1+g2 * g2) / 4. * v4(a) * v4(b);
  }
  
  DoubleMatrix mgch(8, 8);
  for (int x=1; x<=5; x++) {
    for (int y=1; y<=5; y++) {
      mgch(x, y) = mga(x, y) * (g2 * g2) / (g1 * g1 + g2 * g2);
    }
  }
  
  /// combine the gauge dependent and the gauge independent parts
  DoubleMatrix msga = msa;
  DoubleMatrix msgch = msch;
  
  msga  = msa  + gfix * mga;
  msgch = msch + gfix * mgch;
  
  /// OBTAIN THE MIXING MATRICES AND MASS EIGENVALUES 
  /// convention as in Dedes et al,  hep-ph/0603225
  ComplexMatrix zsr(5, 5), zsa(5, 5), zsch(8, 8), zsd(6, 6), zsu(6, 6), 
    zfn(7, 7);
  ComplexMatrix zfchp(5, 5), zfchm(5, 5);
  ComplexMatrix zfuL(3, 3), zfuR(3, 3), zfdL(3, 3), zfdR(3, 3);
  ComplexMatrix ID(3, 3);
  
  DoubleMatrix mixsr(5, 5);
  DoubleVector wsr1(5),  wsr1p(5),  wsr2(5);
  ScalarMass(msr,  zsr,  wsr1,  wsr1p,  wsr2,  mixsr);

  DoubleMatrix mixsa(5, 5);
  DoubleVector wsa1(5),  wsa1p(5),  wsa2(5);
  ScalarMass(msga,  zsa,  wsa1, wsa1p, wsa2, mixsa);
  
  DoubleMatrix mixsch(8,8);
  DoubleVector wsch1(8), wsch1p(8), wsch2(8);
  ScalarMass(msgch, zsch, wsch1, wsch1p, wsch2, mixsch);
  
  DoubleMatrix mixsd(6,6);
  DoubleVector wsd1(6), wsd1p(6), wsd2(6);
  ScalarMass(msd, zsd, wsd1, wsd1p, wsd2, mixsd);
  zsd = zsd.complexConjugate();  /// get to the same convention as Dedes
  
  DoubleMatrix mixsu(6,6);
  DoubleVector wsu1(6), wsu1p(6), wsu2(6);
  ScalarMass(msu, zsu, wsu1, wsu1p, wsu2, mixsu);
  
  DoubleMatrix mixfn(7,7);
  DoubleVector wfn1(7), wfn1p(7), wfn2(7);
  FermionMassSym(mfn, zfn, wfn1, wfn1p, wfn2, mixfn);
  
  DoubleMatrix mixfchm(5,5), mixfchp(5,5);
  DoubleVector wfch1(5), wfch1p(5), wfch2(5);
  FermionMassAsym(mfch, zfchm, zfchp, wfch1, wfch1p, wfch2, mixfchm, mixfchp);
  
  /// SET ELECTRON AND MUON MASSES TO ZERO
  /// for easy comparison with BPMZ
  //wfch1(1) = 0.;      wfch1(2) = 0.;
  //wfch1p(1)= 0.;     wfch1p(2) = 0.;
  //wfch2(1) = 0.;      wfch2(2) = 0.;
  
  DoubleVector wfd1p(3), wfu1p(3), wfu2(3), wfd2(3);      
  DoubleMatrix mixfuL(3,3), mixfuR(3,3), mixfdL(3,3), mixfdR(3,3);
  DoubleVector wfu1(3), wfd1(3);
  FermionMassAsym(mfu, zfuL, zfuR, wfu1, wfu1p, wfu2, mixfuL, mixfuR);
  FermionMassAsym(mfd, zfdL, zfdR, wfd1, wfd1p, wfd2, mixfdL, mixfdR);
  zfdL = zfdL.complexConjugate();  ///< get to the same notation as Dedes
				   ///(hep-ph/0603225) 
  zfdR = zfdR.complexConjugate();  ///< get to the same notation as Dedes 
  
  /// define the renormalization scales
  /// note actual renormalisation needs to be done at msusy
  /// otherwise get negative goldstone masses
  double qq = displayMu(); //used in addNeutralinoLoop
  
  /// define neutral fermion feynman rules
  /// all external neutrino/neutralino legs are in flavour basis
  /// all internal legs are in mass basis  
  /// in these feynman rules, 'k' denotes neutral fermion
  /// the first index correspond to a scalar, while the next two indices are
  /// fermions for vector boson feynman rules, only two indices, and both are
  /// fermions 
  /// CP even neutral scalar -- neutral fermion(external) -- neutral
  /// fermion(internal) 
  Complex rkk[6][8][8];
  for (int i=0; i<=5; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	rkk[i][j][k] = 0.;
  
  for (int q=1; q<=5; q++) {
    for (int r=1; r<=7; r++) {
      rkk[q][3][r] = rkk[q][3][r] - g1/2. * zsr(1, q) * zfn(1, r);
      rkk[q][2][r] = rkk[q][2][r] + g2/2. * zsr(1, q) * zfn(3, r);
      rkk[q][1][r] = rkk[q][1][r] - g1/2. * zsr(1, q) * zfn(3, r);
      rkk[q][3][r] = rkk[q][3][r] + g2/2. * zsr(1, q) * zfn(2, r);
      for (int a=0; a<=3; a++) {
	rkk[q][4+a][r] = rkk[q][4+a][r] + g1/2. * zsr(2+a, q) * zfn(1, r);
	rkk[q][2][r]   = rkk[q][2][r]   - g2/2. * zsr(2+a, q) * zfn(4+a, r);
	rkk[q][1][r]   = rkk[q][1][r]   + g1/2. * zsr(2+a, q) * zfn(4+a, r);
	rkk[q][4+a][r] = rkk[q][4+a][r] - g2/2. * zsr(2+a, q) * zfn(2, r);
      }
    }
  }
  
  /// CP odd neutral scalar -- neutral fermion(external) -- neutral
  /// fermion(internal) 
  Complex akk[6][8][8];
  for (int i=0; i<=5; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	akk[i][j][k] = 0.;
  
  for (int q=1; q<=5; q++) {
    for (int r=1; r<=7; r++) {
      akk[q][3][r] = akk[q][3][r] + g1 / 2. * zsa(1, q) * zfn(1, r);
      akk[q][2][r] = akk[q][2][r] - g2 / 2. * zsa(1, q) * zfn(3, r);
      akk[q][1][r] = akk[q][1][r] + g1 / 2. * zsa(1, q) * zfn(3, r);
      akk[q][3][r] = akk[q][3][r] - g2 / 2. * zsa(1, q) * zfn(2, r);
      for (int a=0; a<=3; a++) {
	akk[q][4+a][r] = akk[q][4+a][r] - g1 / 2. * zsa(2+a, q) * zfn(1, r);
	akk[q][2][r]   = akk[q][2][r]   + g2 / 2. * zsa(2+a, q) * zfn(4+a, r);
	akk[q][1][r]   = akk[q][1][r]   - g1 / 2. * zsa(2+a, q) * zfn(4+a, r);
	akk[q][4+a][r] = akk[q][4+a][r] + g2 / 2. * zsa(2+a, q) * zfn(2, r);
      }
    }
  }
  
  for (int i=1; i<=5; i++)
    for (int j=1; j<=7; j++)
      for (int k=1; k<=7; k++)
	akk[i][j][k] = rtm1 * akk[i][j][k];
  
  /// in +ve scalar -- in -ve LH fermion -- neutral fermion 
  Complex HChmk[9][6][8];
  for (int q=0; q<=8; q++)
    for (int p=0; p<=5; p++)
      for (int r=0; r<=7; r++)
	HChmk[q][p][r]=0.;
  
  for (int q=1; q<=8; q++) {
    for (int p=1; p<=5; p++) {
      for (int a=0; a<=3; a++) {
	HChmk[q][p][4+a] = HChmk[q][p][4+a] - 
	  g2 * zsch(2+a, q) * zfchm.complexConjugate()(1, p);
	HChmk[q][p][1]   = HChmk[q][p][1] + 
	  g1 / root2 * zsch(2+a, q) * zfchm.complexConjugate()(2+a, p);
	HChmk[q][p][2]   = HChmk[q][p][2] + 
	  g2/root2 * zsch(2+a, q) * zfchm.complexConjugate()(2+a, p);
	for (int b=0; b<=3; b++) {
	  for (int j=0; j<=3; j++) {
	    HChmk[q][p][4+a] = HChmk[q][p][4+a] - 
	      lam[a][b][j] * zsch(5+j, q) * zfchm.complexConjugate()(2+b, p);
	  }
	}
      }
    }
  }
  
  /// in -ve scalar -- in +ve LH fermion -- neutral fermion
  Complex HChpk[9][6][8];
  for (int i=0; i<=8; i++)
    for (int j=0; j<=5; j++)
      for (int k=0; k<=7; k++)
	HChpk[i][j][k]=0.;
  
  for (int q=1; q<=8; q++)
    for (int p=1; p<=5; p++) {
	HChpk[q][p][3] = HChpk[q][p][3] - g2 * zsch.complexConjugate()(1, q) * 
	  zfchp(1, p);
	HChpk[q][p][1] = HChpk[q][p][1] - g1 / root2 * 
	  zsch.complexConjugate()(1, q) * zfchp(2, p);
	HChpk[q][p][2] = HChpk[q][p][2] - g2 / root2 *
	  zsch.complexConjugate()(1, q) * zfchp(2, p);
	for (int i=1; i<=3; i++) {
	  HChpk[q][p][1] = HChpk[q][p][1] - 
	    root2 * g1 * zsch.complexConjugate()(5+i, q) * zfchp(2+i, p);
	  for (int a=0; a<=3; a++) {
	    for (int b=0; b<=3; b++) {
	      HChpk[q][p][4+a] = HChpk[q][p][4+a] - 
		lam[a][b][i] * zsch.complexConjugate()(2+b, q) * zfchp(2+i, p);
	    }
	  }
	}
    }

  //out -ve scalar down -- neutral fermion -- in -ve LH down type quarks
  Complex sdkdL[7][8][4];
  for (int i=0; i<=6; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=3; k++)
	sdkdL[i][j][k]=0.;
  
  for (int q=1; q<=6; q++)
    for (int r=1; r<=3; r++)
      for (int j=1; j<=3; j++) {
	sdkdL[q][1][r] = sdkdL[q][1][r] - 
	  g1 / 3. / root2 * zsd(j, q) * zfdL.complexConjugate()(j, r);
	sdkdL[q][2][r] = sdkdL[q][2][r] + 
	  g2 / root2 * zsd(j, q) * zfdL.complexConjugate()(j, r);
	for (int a=0; a<=3; a++) {
	  for (int k=1; k<=3; k++) {
	    sdkdL[q][4+a][r] = sdkdL[q][4+a][r] - 
	      lamp[a][j][k] * zsd(3+k, q) * zfdL.complexConjugate()(j, r);
	  }
	}
      }
  
  /// in -ve scalar down -- neutral fermion -- in +ve LH down type (anti) quark
  Complex sdkdR[7][8][4];
  for (int i=0; i<=6; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=3; k++)
	sdkdR[i][j][k] = 0.;
  
  for (int q=1; q<=6; q++)
    for (int r=1; r<=3; r++)
      for (int j=1; j<=3; j++) {
	sdkdR[q][1][r] = sdkdR[q][1][r] - 
	  g1 * root2 / 3. * zsd.complexConjugate()(3+j, q) * zfdR(j, r);
	for (int i=1; i<=3; i++) {
	  for (int a=0; a<=3; a++) {
	    sdkdR[q][4+a][r] = sdkdR[q][4+a][r] - 
	      lamp[a][i][j] * zsd.complexConjugate()(i, q) * zfdR(j, r);
	  }
	}
      }
  
  /// out +ve scalar up -- neutral fermion -- in +ve LH up type quark
  Complex sukuL[7][8][4];
  for (int i=0; i<=6; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=3; k++)
	sukuL[i][j][k] = 0.;
  
  for (int q=1; q<=6; q++)
    for (int r=1; r<=3; r++)
      for (int j=1; j<=3; j++) {
	sukuL[q][1][r] = sukuL[q][1][r] - 
	  g1 / 3. / root2 * zsu.complexConjugate()(j, q) * zfuL(j, r);
	sukuL[q][2][r] = sukuL[q][2][r] - 
	  g2 / root2 * zsu.complexConjugate()(j, q) * zfuL(j, r);
	  for (int k=1; k<=3; k++) {
	    sukuL[q][3][r] = sukuL[q][3][r] - 
	      yu(j, k) * zsu.complexConjugate()(3+k, q) * zfuL(j, r);
	  }
      }

  /// in +ve scalar up -- neutral fermion -- in -ve LH up type (anti) quark
  Complex sukuR[7][8][4];
  for (int i=0; i<=6; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=3; k++)
	sukuR[i][j][k] = 0.;
  
  for (int q=1; q<=6; q++) {
    for (int r=1; r<=3; r++) {
      for (int k=1; k<=3; k++) {
	sukuR[q][1][r] = sukuR[q][1][r] + 
	  g1 * 2. * root2 / 3. * zsu(3+k, q) * zfuR.complexConjugate()(k, r);
	for (int i=1; i<=3; i++) {
	  sukuR[q][3][r] = sukuR[q][3][r] - 
	    yu(i, k) * zsu(i, q) * zfuR.complexConjugate()(k, r);
	}
      }
    }
  }
  
  /// Z -- neutral fermion(external) -- neutral fermion(internal)
  ComplexMatrix Zkk(7, 7);
  for (int r=1; r<=7; r++) {
    Zkk(3, r) = Zkk(3, r) - g2/cw/2. * zfn.complexConjugate()(3, r);
    for (int a=0; a<=3; a++) {
      Zkk(4+a, r) = Zkk(4+a, r) + g2/cw/2. * zfn.complexConjugate()(4+a, r);
    }
  }
  
  /// in W+ -- in -ve LH fermion -- out neutral fermion
  ComplexMatrix Wpfk(5, 7);
  for (int q=1; q<=5; q++) {
    Wpfk(q, 2) = Wpfk(q, 2) + g2 * zfchm.complexConjugate()(1, q);
    for (int a=0; a<=3; a++) {
      Wpfk(q, 4+a) = Wpfk(q, 4+a) + g2/root2 * zfchm.complexConjugate()(2+a, q);
    }
  }
  
  /// in W- -- in +ve LH fermion -- out neutral fermion
  ComplexMatrix Wmfk(5, 7);
  for (int q=1; q<=5; q++) {
    Wmfk(q, 2) = Wmfk(q, 2) - g2 * zfchp(1, q);
    Wmfk(q, 3) = Wmfk(q, 3) + g2/root2 * zfchp(2, q);
  }
  
  /// calculate the loop corrections
  /// note in rpc softsusy a different qq is used
  /// for neutrino mass calculation pp=0 is a suitable choice
  /// in fact, pp=0 must be used in the present calculation, 
  /// for consistency with mia approx.
  /// (we only have c0 at zero external momentum)
  /// sigma d, scalar contribution
  Complex SigmaDphi[9][8][8];
  for (int i=0; i<=8; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	SigmaDphi[i][j][k] = 0.;
 
  /// CP even/odd scalar -neutral fermion -neutral fermion
  /// because the large cancellation between these two
  /// contributions lead to numerical instability in the 3x3
  /// neutrino--neutrino block. that part will later be replaced
  /// by a cpe-cpo analytic mia calculation
  DoubleMatrix loopCPE(7, 5),  loopCPO(7, 5);
  for (int rr=1; rr<=7; rr++)
    for (int ss=1; ss<=5; ss++) {
      loopCPE(rr, ss) = wfn1p(rr) * b0(pp, wfn1p(rr), wsr1(ss), qq);
      loopCPO(rr, ss) = wfn1p(rr) * b0(pp, wfn1p(rr), wsa1p(ss), qq);
    }
  
  for (int r=1; r<=7; r++)
    for (int s=1; s<=5; s++) {
      for (int p=pstart; p<=pend; p++)
	for (int q=qstart; q<=qend; q++) {
	  SigmaDphi[1][p][q] += rkk[s][p][r] * rkk[s][q][r] * loopCPE(r, s);
	  SigmaDphi[2][p][q] += akk[s][p][r] * akk[s][q][r] * loopCPO(r, s);
	}	      
    }
  
  /// charged scalar -charged fermion -neutral fermion
  DoubleMatrix loopCH(5, 8);
  for (int rr=1; rr<=5; rr++)
    for (int ss=1; ss<=8; ss++)
      loopCH(rr, ss)=wfch1p(rr) * b0(pp, wfch1p(rr), wsch1(ss), qq);
  
  for (int r=1; r<=5; r++)
    for (int s=1; s<=8; s++) {
      for (int q=qstart; q<=qend; q++)
	for (int p=pstart; p<=pend; p++) {
	  SigmaDphi[3][p][q] += HChpk[s][r][p] * HChmk[s][r][q] * loopCH(r, s);
	  SigmaDphi[4][p][q] += HChmk[s][r][p] * HChpk[s][r][q] * loopCH(r, s);
	}
    }
  
  /// down squark -neutral fermion - down quark
  DoubleMatrix loopDN(3, 6);
  for (int rr=1; rr<=3; rr++)
    for (int ss=1; ss<=6; ss++)
      loopDN(rr, ss)=wfd1p(rr) * b0(pp, wfd1p(rr), wsd1(ss), qq);
  
  for (int s=1; s<=6; s++)
    for (int r=1; r<=3; r++) {
	for (int p=pstart; p<=pend; p++)
	  for (int q=qstart; q<=qend; q++) {
	    SigmaDphi[5][p][q] += nc * sdkdL[s][p][r] * 
	      sdkdR[s][q][r] * loopDN(r,  s);
	    SigmaDphi[6][p][q] += nc * sdkdR[s][p][r] * 
	      sdkdL[s][q][r] * loopDN(r,  s);
	  }
    }
  
  /// up squark -neutral fermion -up quark
  DoubleMatrix loopUP(3, 6);
  for (int rr=1; rr<=3; rr++)
    for (int ss=1; ss<=6; ss++)
      loopUP(rr, ss)=wfu1p(rr) * b0(pp,  wfu1p(rr),  wsu1(ss),  qq);
  
  for (int s=1; s<=6; s++)
    for (int r=1; r<=3; r++) {
	for (int p=pstart; p<=pend; p++)
	  for (int q=qstart; q<=qend; q++) {
	    SigmaDphi[7][p][q] += nc * sukuL[s][p][r] * 
	      sukuR[s][q][r] * loopUP(r, s);
	      SigmaDphi[8][p][q] += nc * sukuR[s][p][r] * 
		sukuL[s][q][r] * loopUP(r, s);
	  }	     
    }
  
  //sigma l, scalar contribution
  Complex SigmaLphi[9][8][8];
  for (int i=0; i<=8; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	SigmaLphi[i][j][k] = 0.;
  
  /// CPE+CPO scalar -neutral fermion -neutral fermion
  DoubleMatrix loopLCPE(7, 5),  loopLCPO(7, 5);
  for (int rr=1; rr<=7; rr++)
    for (int ss=1; ss<=5; ss++) {
      loopLCPE(rr, ss) = b1(pp,  wfn1p(rr),  wsr1(ss),  qq);
      loopLCPO(rr, ss) = b1(pp, wfn1p(rr), wsa1p(ss), qq);
    }
  
  for (int s=1; s<=5; s++)
    for (int r=1; r<=7; r++) {
      for (int p=pstart; p<=pend; p++)
	for (int q=qstart; q<=qend; q++) {
	  SigmaLphi[1][p][q] += rkk[s][p][r].conj() * 
	    rkk[s][q][r] * loopLCPE(r, s);
	      SigmaLphi[2][p][q] += akk[s][p][r].conj() * 
		akk[s][q][r] * loopLCPO(r, s);
	}
    }
  
  /// charged scalar -charged fermion -neutral fermion
  DoubleMatrix loopLCH(5, 8);
  for (int rr=1; rr<=5; rr++)
    for (int ss=1; ss<=8; ss++)
      loopLCH(rr, ss)=b1(pp, wfch1p(rr), wsch1(ss), qq);
  
  for (int s=1; s<=8; s++)
    for (int r=1; r<=5; r++)
      {
	for (int p=pstart; p<=pend; p++)
	  for (int q=qstart; q<=qend; q++)
	    {
	      SigmaLphi[3][p][q] += HChmk[s][r][p].conj() * 
		HChmk[s][r][q] * loopLCH(r, s);
	      SigmaLphi[4][p][q] += HChpk[s][r][p].conj() * 
		HChpk[s][r][q] * loopLCH(r, s);
	    }
      }
  
  /// down squark -neutral fermion - down quark
  DoubleMatrix loopLDN(3, 6);
  for (int rr=1; rr<=3; rr++)
    for (int ss=1; ss<=6; ss++)
      loopLDN(rr, ss)=b1(pp, wfd1p(rr), wsd1(ss), qq);
  
  for (int s=1; s<=6; s++)
    for (int r=1; r<=3; r++) {
	for (int p=pstart; p<=pend; p++)
	  for (int q=qstart; q<=qend; q++) {
	    SigmaLphi[5][p][q] += nc * sdkdL[s][p][r].conj() * 
	      sdkdL[s][q][r] * loopLDN(r,s);
	    SigmaLphi[6][p][q] += nc * sdkdR[s][p][r].conj() * 
	      sdkdR[s][q][r] * loopLDN(r,s);
	  }
    }
  
  /// up squark -neutral fermion -up quark
  DoubleMatrix loopLUP(3, 6);
  for (int rr=1; rr<=3; rr++)
    for (int ss=1; ss<=6; ss++)
      loopLUP(rr, ss)=b1(pp, wfu1p(rr), wsu1(ss), qq);
  
  for (int s=1; s<=6; s++)
    for (int r=1; r<=3; r++) {
      for (int p=pstart; p<=pend; p++)
	for (int q=qstart; q<=qend; q++) {
	      SigmaLphi[7][p][q] += nc * 
		sukuL[s][p][r].conj() * sukuL[s][q][r] * loopLUP(r, s);
	      SigmaLphi[8][p][q] += nc * 
		sukuR[s][p][r].conj() * sukuR[s][q][r] * loopLUP(r, s);
	}
    }
  
  /// Sigma D, gauge boson contribution
  /// initializsation
  Complex SigmaDV[4][8][8];
  for (int i=0; i<=3; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	SigmaDV[i][j][k] = 0.;
  
  /// Z boson -neutral fermion -neutral fermion
  DoubleVector loopZ(7);
  for (int rr=1; rr<=7; rr++)
    loopZ(rr) = 4. * wfn1p(rr) * b0(pp, wfn1p(rr), mz, qq);
  
  for (int r=1; r<=7; r++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++) {
	SigmaDV[1][p][q] += Zkk(p, r) * Zkk(q, r) * loopZ(r);
      }
  
  /// W boson -charged fermion -neutral fermion
  DoubleVector loopW(5);
  for (int rr=1; rr<=5; rr++)
    loopW(rr)=4. * wfch1p(rr) * b0(pp, wfch1p(rr), mw, qq);
  
  for (int r=1; r<=5; r++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++) {
	SigmaDV[2][p][q] += Wpfk(r, p).conj() * Wmfk(r, q).conj() * loopW(r);
	SigmaDV[3][p][q] += Wmfk(r, p).conj() * Wpfk(r, q).conj() * loopW(r);
      }
  
  /// Sigma L, gauge boson contribution
  Complex SigmaLV[4][8][8];
  for (int i=0; i<=3; i++)
    for (int j=0; j<=7; j++)
      for (int k=0; k<=7; k++)
	SigmaLV[i][j][k] = 0.;
  
  /// Z boson -neutral fermion -neutral fermion
  DoubleVector loopLZ(7);
  for (int rr=1; rr<=7; rr++)
    loopLZ(rr) = 2. * b1(pp, wfn1p(rr), mz, qq);
  
  for (int r=1; r<=7; r++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++) {
	SigmaLV[1][p][q] += Zkk(p, r).conj() * Zkk(q, r) * loopLZ(r);
      }      
  
  /// W boson -charged fermion -neutral fermion
  DoubleVector loopLW(5);
  for (int rr=1; rr<=5; rr++)
    loopLW(rr) = 2. * b1(pp, wfch1p(rr), mw, qq);
  
  for (int r=1; r<=5; r++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++) {
	SigmaLV[2][p][q] += Wpfk(r, p) * Wpfk(r, q).conj() * loopLW(r);
	SigmaLV[3][p][q] += Wmfk(r, p) * Wmfk(r, q).conj() * loopLW(r);
      }
  
  
  /// mia approximation for the cpe+cpo contribution to the 3x3
  /// neutrino-neutrino block
  /// This is a systematic procedure to expand the combined
  /// CPE+CPO contributions in powers of RPV parameters (call it
  /// B), that is the (2x3) off block-diagonal part of the full
  /// 5x5 mass matrix.  Currently the approximation is to order
  /// B^2, but is generalisable to include higher corrections if
  /// desired.  The external mass scale is set to zero.
  /// CPE MIA approximation
  DoubleMatrix hH(2, 2), hHMix(2, 2);
  DoubleMatrix hHsneut(3, 3), hHsneutMix(3, 3);
  DoubleMatrix hHRPV(2, 3);
  DoubleVector whH(2), whHsneut(3);
  
  /// put the h-H, sneutrinos and RPV contributions to different blocks
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=3; jj++)
	hHRPV(ii, jj) = msr(ii, 2+jj);

  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=2; jj++)
      hH(ii, jj) = msr(ii, jj);
      
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++)
      hHsneut(ii, jj) = msr(2+ii, 2+jj);
  
  hH.diagonaliseSym(hHMix,  whH);
  hHsneut.diagonaliseSym(hHsneutMix, whHsneut);
  DoubleMatrix hHRPVMIA(2, 3);
  /// RPC rotation
  hHRPVMIA = hHMix.transpose() * hHRPV * hHsneutMix;
  
  /// the 5x5 mass matrix to be further diagonalised, 
  /// after the RPC rotation
  DoubleMatrix hHMIA(5, 5);
  for (int ii=1; ii<=2; ii++)
    hHMIA(ii, ii) = whH(ii);

  for (int jj=1; jj<=3; jj++)
    hHMIA(2+jj, 2+jj) = whHsneut(jj);

  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=3; jj++) {
      hHMIA(ii, 2+jj) = hHRPVMIA(ii, jj);
      hHMIA(2+jj, ii) = hHMIA(ii, 2+jj);
    }
  
  /// the 5x5 mixing (RPC part) (h-H mixing, sneutrino mixing)
  DoubleMatrix hHRPCMix(5, 5);
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=2; jj++) {
      hHRPCMix(ii, jj) = hHMix(ii, jj);
    }
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++) {
      hHRPCMix(2+ii, 2+jj) = hHsneutMix(ii, jj);
    }
  
  /// CPO MIA approximation
  DoubleMatrix GA(2, 2), GAMix(2, 2);
  DoubleMatrix GAsneut(3, 3), GAsneutMix(3, 3);
  DoubleMatrix GARPV(2, 3);
  DoubleVector wGA(2), wGAsneut(3);
  
  /// put the G-A, sneutrinos and RPV contributions to different blocks
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=3; jj++) {
      GARPV(ii, jj) = msga(ii, 2+jj);
    }
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=2; jj++) {
      GA(ii, jj) = msga(ii, jj);
    }
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++) {
      GAsneut(ii, jj) = msga(2+ii, 2+jj);
    }
  
  GA.diagonaliseSym(GAMix, wGA);
  GAsneut.diagonaliseSym(GAsneutMix, wGAsneut);
  DoubleMatrix GARPVMIA(2, 3);
  /// RPC rotation
  GARPVMIA = GAMix.transpose() * GARPV * GAsneutMix;
  
  /// the 5x5 mass matrix to be further diagonalised, 
  /// after the RPC rotation
  DoubleMatrix GAMIA(5, 5);
  for (int ii=1; ii<=2; ii++)
      GAMIA(ii, ii) = wGA(ii);
  for (int jj=1; jj<=3; jj++)
      GAMIA(2+jj, 2+jj) = wGAsneut(jj);
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=3; jj++) {
      GAMIA(ii, 2+jj) = GARPVMIA(ii, jj);
      GAMIA(2+jj, ii) = GAMIA(ii, 2+jj);
    }
  
  /// the 5x5 mixing (RPC part) (G-A mixing, sneutrino mixing)
  DoubleMatrix GARPCMix(5, 5);
  for (int ii=1; ii<=2; ii++)
    for (int jj=1; jj<=2; jj++) {
      GARPCMix(ii, jj) = GAMix(ii, jj);
    }
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++) 
	GARPCMix(2+ii, 2+jj) = GAsneutMix(ii, jj);
  
  /// define the full (RPC + RPV using MIA) mixing matrices in
  /// different orders of perturbations
  DoubleMatrix  hHMIAMix(5, 5), hHMIAMix0(5, 5);
  DoubleMatrix  hHMIAMix1(5, 5), hHMIAMix2(5, 5);
  AnalyticDiagonalise(hHMIA, hHMIAMix, hHMIAMix0, hHMIAMix1, hHMIAMix2);
  DoubleMatrix GAMIAMix(5, 5), GAMIAMix0(5, 5);
  DoubleMatrix GAMIAMix1(5, 5), GAMIAMix2(5, 5);
  AnalyticDiagonalise(GAMIA, GAMIAMix, GAMIAMix0, GAMIAMix1, GAMIAMix2);
  
  DoubleMatrix hHRPVMix0 = hHRPCMix * hHMIAMix0;
  DoubleMatrix hHRPVMix1 = hHRPCMix * hHMIAMix1;
  DoubleMatrix hHRPVMix2 = hHRPCMix * hHMIAMix2;
  DoubleMatrix GARPVMix0 = GARPCMix * GAMIAMix0;
  DoubleMatrix GARPVMix1 = GARPCMix * GAMIAMix1;
  DoubleMatrix GARPVMix2 = GARPCMix * GAMIAMix2;
  
  /// define the sneutrino mass^2 differences (CPE minus CPO)
  DoubleVector wDeltaSneutrino2(3);
  /// compatibility with wsr2-wsa2 : CHECKED
  for (int ii=1; ii<=3; ii++)
    for (int kk=1; kk<=2; kk++)
      {
	wDeltaSneutrino2(ii) += hHRPVMIA(kk, ii) * hHRPVMIA(kk, ii)/
	  (hHMIA(2+ii, 2+ii) - hHMIA(kk, kk)) 
	  - GARPVMIA(kk, ii) * GARPVMIA(kk, ii)/
	  (GAMIA(2+ii, 2+ii) - GAMIA(kk, kk));
      }
  
  /// define the hH, GA, CPE-sneutrino, CPO-sneutrino masses after MIA
  DoubleVector whHtot(2), wGAtot(2), wCPEsneuttot(3), wCPOsneuttot(3);
  for (int ii=1; ii<=2; ii++) {
    whHtot(ii) = (hHMIAMix.transpose() * hHMIA * hHMIAMix)(ii, ii);
    wGAtot(ii) = (GAMIAMix.transpose() * GAMIA * GAMIAMix)(ii, ii);
  }
  for (int ii=1; ii<=3; ii++) {
    wCPEsneuttot(ii) = (hHMIAMix.transpose() * hHMIA * hHMIAMix)(2+ii, 2+ii);
    wCPOsneuttot(ii) = (GAMIAMix.transpose() * GAMIA * GAMIAMix)(2+ii, 2+ii);
  }
  
  /// Check for Tachyonic states
  bool TachyonCheck=false;
  for (int ii=1; ii<=2; ii++) {
    if (whHtot(ii) < 0.) TachyonCheck = true;
    if (wGAtot(ii) < 0.) TachyonCheck = true;
  }
  for (int ii=1; ii<=3; ii++) {
    if (wCPEsneuttot(ii) < 0.) TachyonCheck = true;
    if (wCPOsneuttot(ii) < 0.) TachyonCheck = true;
  }
  
  ComplexMatrix GMassMIA2(3, 3);
  if (TachyonCheck) {
    GMassMIA2 = 0.;
    //    cout << "neutrino.cpp: CPE/CPO tachyons" << endl;
  }
  else {
    /// sum over the loop contributions (the 3x3 block)
    for (int ii=1; ii<=3; ii++)
      for (int jj=1; jj<=3; jj++) {
	    for (int rr=4; rr<=7; rr++)
	      {
		GMassMIA2(ii, jj) = GMassMIA2(ii, jj) + 
		  0.25 * wfn1p(rr) * 
		  (g1 * zfn(1, rr) - g2 * zfn(2, rr)) * 
		  (g1 * zfn(1, rr) - g2 * zfn(2, rr)) * 
		  (
		   
		   /// sneutrino mixing difference contributions
		   /// wCPOsneuttot is used here, while using wCPEsneuttot
		   /// will give practically the same results
		   (hHRPVMix0(2+ii, 3) * hHRPVMix2(2+jj, 3)
		    + hHRPVMix2(2+ii, 3) * hHRPVMix0(2+jj, 3) 
		    - GARPVMix0(2+ii, 3) * GARPVMix2(2+jj, 3)
		    - GARPVMix2(2+ii, 3) * GARPVMix0(2+jj, 3))
		   * b0(0.,  wfn1p(rr),  sqrt(wCPOsneuttot(1)), qq)
		   + (hHRPVMix0(2+ii, 4) * hHRPVMix2(2+jj, 4)
		      + hHRPVMix2(2+ii, 4) * hHRPVMix0(2+jj, 4) 
		      - GARPVMix0(2+ii, 4) * GARPVMix2(2+jj, 4)
		      - GARPVMix2(2+ii, 4) * GARPVMix0(2+jj, 4))
		   * b0(0.,  wfn1p(rr),  sqrt(wCPOsneuttot(2)), qq)
		   + (hHRPVMix0(2+ii, 5) * hHRPVMix2(2+jj, 5)
		      + hHRPVMix2(2+ii, 5) * hHRPVMix0(2+jj, 5) 
		      - GARPVMix0(2+ii, 5) * GARPVMix2(2+jj, 5)
		      - GARPVMix2(2+ii, 5) * GARPVMix0(2+jj, 5))
		   * b0(0.,  wfn1p(rr), sqrt(wCPOsneuttot(3)), qq)
		   
		   /// sneutrino mass difference contributions
		   + (wDeltaSneutrino2(1)) * hHRPVMix0(2+ii, 3) 
		   * hHRPVMix0(2+jj, 3) *
		   c0(sqrt(wCPOsneuttot(1)), sqrt(wCPOsneuttot(1)), wfn1p(rr))
		   + (wDeltaSneutrino2(2)) * hHRPVMix0(2+ii, 4) * 
		   hHRPVMix0(2+jj, 4) * 
		   c0(sqrt(wCPOsneuttot(2)), sqrt(wCPOsneuttot(2)), wfn1p(rr))
		   + (wDeltaSneutrino2(3)) * hHRPVMix0(2+ii, 5) * 
		   hHRPVMix0(2+jj, 5) *
		   c0(sqrt(wCPOsneuttot(3)), sqrt(wCPOsneuttot(3)), wfn1p(rr))
		   
		   /// H, h, A cancellations.
		   + hHRPVMix1(2+ii, 1) * hHRPVMix1(2+jj, 1) *
		   b0(0., wfn1p(rr), sqrt(whHtot(1)), qq)
		   + hHRPVMix1(2+ii, 2) * hHRPVMix1(2+jj, 2) *
		   b0(0., wfn1p(rr), sqrt(whHtot(2)), qq)
		   - GARPVMix1(2+ii, 1) * GARPVMix1(2+jj, 1) *
		   b0(0., wfn1p(rr), sqrt(wGAtot(1)), qq)
		   - GARPVMix1(2+ii, 2) * GARPVMix1(2+jj, 2) *
		   b0(0., wfn1p(rr), sqrt(wGAtot(2)), qq));
	      }
      }
  }
  
  DoubleMatrix realGMassMIA2(3, 3);
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++)
      realGMassMIA2(ii, jj) = GMassMIA2(ii, jj).real();
  
  /// combine all the loop corrections and obtain the corrected mass matrix
  /// the output loop corrected mass matrix is in flavour basis  
  /// combine the sigma D CPE+CPO scalar contribution ONLY
  ComplexMatrix SigmaDaCPECPO(7, 7);
  for (int i=1; i<=2; i++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++)
	  SigmaDaCPECPO(p, q) = SigmaDaCPECPO(p, q) + SigmaDphi[i][p][q];
  
  /// combine all the sigma D scalar contribution
  /// except the cpe+cpo contributions (i=1, 2)
  for (int i=3; i<=8; i++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++)
	  SigmaDphi[0][p][q] = SigmaDphi[0][p][q] + SigmaDphi[i][p][q];
  
  /// combine all the sigma L scalar contribution
  for (int i=1; i<=8; i++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++)
	SigmaLphi[0][p][q] = SigmaLphi[0][p][q] + SigmaLphi[i][p][q];
  
  /// combine all the (sigma D+L) gauge boson contribution
  for (int i=1; i<=3; i++)
    for (int p=pstart; p<=pend; p++)
      for (int q=qstart; q<=qend; q++) {
	SigmaDV[0][p][q] = SigmaDV[0][p][q] + SigmaDV[i][p][q];
	SigmaLV[0][p][q] = SigmaLV[0][p][q] + SigmaLV[i][p][q];
      }
  
  /// Use formal matrix manipulations to calc gauge basis correction
  ComplexMatrix SigmaLa(7, 7),  SigmaDa(7, 7);
  for (int i=1; i<=7; i++)
    for (int j=1; j<=7; j++) {
      SigmaDa(i, j) = SigmaDa(i, j) + SigmaDphi[0][i][j];
      SigmaDa(i, j) = SigmaDa(i, j) + SigmaDV[0][i][j];
      SigmaLa(i, j) = SigmaLa(i, j) + SigmaLphi[0][i][j];
      SigmaLa(i, j) = SigmaLa(i, j) + SigmaLV[0][i][j];
    }
  
  DoubleMatrix SigmaLGa(7, 7),  SigmaDGa(7, 7),  SigmaDGaCPECPO(7, 7);
  /// This is for FULL FLAVOR BASIS LOOP CALCULATION
  for (int ii=1; ii<=7; ii++)
    for (int jj=1; jj<=7; jj++) {
      SigmaDGaCPECPO(ii, jj) = SigmaDaCPECPO(ii, jj).real();
      SigmaDGa(ii, jj) = SigmaDa(ii, jj).real();
      SigmaLGa(ii, jj) = SigmaLa(ii, jj).real();
    }

  /// overwrite the neutrino-neutrino cpecpo part by the mia
  /// results
  for (int ii=1; ii<=3; ii++)
    for (int jj=1; jj<=3; jj++)
	SigmaDGaCPECPO(4+ii, 4+jj) = realGMassMIA2(ii, jj);
  
  /// combine all loop contributions
  DoubleMatrix mfntreeG(mfn);
  DoubleMatrix mfnloopG(7, 7);
  double loopfactor = -1./pow(4. * PI, 2);
  ///include CPE-CPO cancellations
  mfnloopG = loopfactor * (SigmaDGaCPECPO + SigmaDGa + mfntreeG * SigmaLGa); 
  
  /// Calculate the loop corrected neutrino-neutralino masses
  DoubleMatrix mfntotalG = mfntreeG + ( mfnloopG + mfnloopG.transpose() ) / 2.;
  
  /// rotate to the RPV softsusy basis
  mfntotalG.swaprows(4, 6);
  mfntotalG.swapcols(4, 6);
  mfntotalG.swaprows(3, 7);
  mfntotalG.swapcols(3, 7);
  mfntotalG.swaprows(1, 5);
  mfntotalG.swapcols(1, 5);
  mfntotalG.swaprows(2, 4);
  mfntotalG.swapcols(2, 4);
  mfntotalG.swaprows(5, 4);
  mfntotalG.swapcols(5, 4);
  
  /// obtain loop corrected eigenvalues etc
  DoubleVector wfntotalG1(7), wfntotalG1p(7), wfntotalG2(7);
  DoubleMatrix mixfntotalG(7, 7);
  ComplexMatrix zfntotalG(7, 7);
  FermionMassSym(mfntotalG, zfntotalG, wfntotalG1, wfntotalG1p, wfntotalG2, 
		 mixfntotalG);
  
  //return the 7x7 mixing matrix and mass vector
  neutrino = wfntotalG1;
  mixMnu = mixfntotalG;
  mNeutrino = mfntotalG;

  /// Main calculation ends here.
  return;
}


void RpvNeutrino::physical(int accuracy) {
  RpvSoftsusy::physical(accuracy);
  if (accuracy > 0 && leptonNumberViolation()) neutrinoData();
}

ostream & operator <<(ostream &left, const RpvNeutrino & r) {
  left << r.displayRpvSoftsusy();
  left << "Physical neutrino parameters:" << endl;
  if (r.displayInvertedOutput())
    cout << "Inverted ";
  else 
    cout << "Normal ";
 
  left << "hierarchy output convention. Neutrino masses" 
       << r.displayPhysNuMasses();
  left << "PMNS matrix " << r.displayUpmns();

  double t12, t13, t23, d;
  getAngles(r.displayUpmns(), t12, t13, t23, d);
  cout << " tan^2(t12)=" << sqr(tan(t12)) << endl;

  cout << " dm^2(solar)=" << 1.0e18 * (sqr(r.displayPhysNuMasses().display(1)) - 
				       sqr(r.displayPhysNuMasses().display(2))) << "eV^2" << endl;
  cout << " dm^2(atm)=" << 1.0e18 * sqr(r.displayPhysNuMasses().display(1)) << endl;

  left << HR;

  return left;
}

void RpvNeutrino::modselSLHA(ostream & out, const char model[]) {
  MssmSoftsusy::modselSLHA(out, model);
  out << "     4    1   # R-parity violating\n" ;  
}

void RpvNeutrino::headerSLHA(ostream & out) {
  MssmSoftsusy::headerSLHA(out);
  out << "# B.C. Allanach and M.A. Bernhardt, Comput. Phys. Commun. ";
  out << "181 (2010) 232,\n# arXiv:0903.1805\n";
  out << "# B.C. Allanach, M. Hanussek and C.H. Kom, arXiv:1109.3735\n";
}

void RpvNeutrino::massSLHA(ostream & out) {
  FlavourMssmSoftsusy::massSLHA(out);
  out << "        12    "; printRow(out, displayPhysNuMasses().display(1)); 
  out << "   # Mnu1";
  if (invertedOutput) out << " inverted hierarchy output\n";
  else out << " normal hierarchy output\n";
  out << "        14    "; printRow(out, displayPhysNuMasses().display(2)); 
  out << "   # Mnu2";
  if (invertedOutput) out << " inverted hierarchy output\n";
  else out << " normal hierarchy output\n";
  out << "        16    "; printRow(out, displayPhysNuMasses().display(3)); 
  out << "   # Mnu3";
  if (invertedOutput) out << " inverted hierarchy output\n";
  else out << " normal hierarchy output\n";  
}

void RpvNeutrino::spinfoSLHA(ostream & out) {
  out << "Block SPINFO          # Program information\n"
      << "     1    SOFTSUSY    # spectrum calculator\n";
  out << "     2    " << SOFTSUSY_VERSION << "       # version number\n";
  if (displayProblem().noConvergence)
    out << "     3   Possible problem: Not achieved desired accuracy of "
	<< TOLERANCE << "- got " 
	<< displayFracDiff() << endl;
  if (displayProblem().testSeriousProblem()) 
    out << "     4   Point invalid: " << displayProblem() << endl;
}

void RpvNeutrino::hmixSLHA(ostream & out) {
  MssmSoftsusy::hmixSLHA(out);
  const double tiny = 6.66e-66;
  //output RPV couplings LLE, LQD, UDD
  out << "Block RVLAMLLE Q= " << displayMu() <<  " # non-zero R-Parity violating LLE couplings \n";
  int i, j, k;
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayLambda(LE).display(k, i, j)) > tiny) {
	  out << "  " << i << " " << j << " " << k << "   "; 
	  printRow(out, displayLambda(LE).display(k, i, j));
	  out << "   # lambda_{" << i << j << k << "}\n";     
	} 
      }
  out << "Block RVLAMLQD Q= " << displayMu() <<  " # non-zero R-Parity violating LQD couplings \n";
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayLambda(LD).display(k, i, j)) > tiny) {
	  out << "  " << i << " " << j << " " << k << "   "; 
	  printRow(out, displayLambda(LD).display(k, i, j));
	  out << "   # lambda'_{" << i << j << k << "}\n";      
	}
      }
  
  out << "Block RVLAMUDD Q= " << displayMu() <<  " # non-zero R-Parity violating UDD couplings \n";
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayLambda(LU).display(i,j, k)) > tiny) {
	  out << "  " << i << " " << j << " " << k << "   "; 
	  printRow(out, displayLambda(LU).display(i, j, k));
	  out << "   # lambda''_{" << i << j << k << "}\n";      
	}
      }
  
  //output RPV trilinear soft-breaking terms
  out << "Block RVTLLE Q= " << displayMu() <<  " # non-zero R-Parity violating LLE soft terms \n";
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayHr(LE).display(k, i, j)) > tiny) {
	out << "  " << i << " " << j << " " << k << "   "; 
	printRow(out, displayHr(LE).display(k,i,j));
	out << "   # T_{" << i << j << k << "}\n";      
	}
      }
  out << "Block RVTLQD Q= " << displayMu() <<  " # non-zero R-Parity violating LQD soft terms \n";
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayHr(LD).display(k, i, j)) > tiny) {
	out << "  " << i << " " << j << " " << k << "   "; 
	printRow(out, displayHr(LD).display(k,i,j));
	out << "   # T'_{" << i << j << k << "}\n";      
	}
      }
  
  out << "Block RVTUDD Q= " << displayMu() <<  " # non-zero R-Parity violating UDD soft terms \n";
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) 
      for (k=1; k<=3; k++){
	if (fabs(displayHr(LU).display(i, j, k)) > tiny) {
	out << "  " << i << " " << j << " " << k << "   "; printRow(out, displayHr(LU).display(i,j,k));
	out << "   # T''_{" << i << j << k << "}\n";      
	}
      }
  
  
  // output RPV bilinear parameters
  out << "Block RVKAPPA Q= " << displayMu() <<  " # R-Parity violating kappa \n";
  for (i=1; i<=3; i++){
    out << "     " << i << "   "; printRow(out, displayKappa().display(i));
    out << "   # kappa_{" << i << "}\n";      
  }
  
  out << "Block RVD Q= " << displayMu() <<  " # R-Parity violating D \n";
  for (i=1; i<=3; i++){
    out << "     " << i << "   "; printRow(out, displayDr().display(i));
    out << "   # D_{" << i << "}\n";      
  }
  
  out << "Block RVSNVEV Q= " << displayMsusy() <<  " # sneutrino VEVs D \n";
  for (i=1; i<=3; i++){
    out << "     " << i << "   "; printRow(out, displaySneutrinoVevs().display(i));
    out << "   # SneutrinoVev_{" << i << "}\n";      
  }
  
  out << "Block RVM2LH1 Q= " << displayMu() <<  " # M2LH1 \n";
  for (i=1; i<=3; i++){
    out << "     " << i << "   "; printRow(out, displayMh1lSquared().display(i));
    out << "   # M2LH1_{" << i << "}\n";      
  }

  out << "Block UPMNS Q= " << MZ << " # neutrino mixing matrix (";
  if (displayInvertedOutput())
    out << "inverted ";
  else 
    out << "normal";
  out << " hierarchy)\n";  
  
  for (i=1; i<=3; i++)
    for (j=1; j<=3; j++) {
      out << "  " << i << "  " << j << "    "; printRow(out, uPmns(i, j));
      out << "   # UPMNS_{" << i << j << "} matrix element" << endl;
    }
}

void RpvNeutrino::rvhmixSLHA(ostream & out) {
  DoubleMatrix slhaMix(displayCPEMix().transpose());

  /// This is a check to see if the eigenvalues are in the right order
  ///  cout << slhaMix * CPEscalars * slhaMix.transpose(); 

  /// H1 <-> H2 difference in positioning of basis vectors
  slhaMix.swapcols(1, 2);

  out << "Block RVHMIX "<<  " # CP-even neutral scalar mixing matrix \n";
  for (int i=1; i<=5; i++)
    for (int j=1; j<=5; j++) {
      out << "  " << i << " " << j << "   ";
      printRow(out, slhaMix(i, j));
      out << "   # curlyN_{" << i << j << "}\n";
    }  
}

void RpvNeutrino::rvamixSLHA(ostream & out) {
  out << "Block RVAMIX " <<  " # CP-odd neutral scalar mixing matrix \n";
  /// Need to find out what basis ordering we should really be in for SLHA2.
  /// CP- scalars: find lightest boson that's not the goldstone etc
  DoubleVector pos(5);
  pos(1) = displayPhys().mA0(1);
  pos(2) = displayPhys().msnu(1);
  pos(3) = displayPhys().msnu(2);
  pos(4) = displayPhys().msnu(3);
  pos(5) = CPOmasses(CPOmasses.closest(displayMz()));

  DoubleMatrix slhaMix(displayCPOMix());

  DoubleMatrix o(5, 5);
  for (int i=1; i<=5; i++) o(i, i) = 1.;
  o.associateOrderAbs(pos);

  slhaMix = o * slhaMix.transpose(); 
  
  /// This is a check to see if the eigenvalues are in the right order
  ///  cout << slhaMix * CPOscalars * slhaMix.transpose(); 

  /// H1 <-> H2 difference in positioning of basis vectors
  slhaMix.swapcols(1, 2);

  for (int i=1; i<=4; i++)
    for (int j=1; j<=5; j++) {
	out << "  " << i << " " << j << "   ";
	printRow(out, slhaMix.display(i, j));
	out << "   # curlyN~_{" << i << j << "}\n";
    }  
}

void RpvNeutrino::snumixSLHA(ostream & out) {
  rvhmixSLHA(out);
  rvamixSLHA(out);  
}

void RpvNeutrino::selmixSLHA(ostream & out) {
  double sinthDRbar = calcSinthdrbar();
  /// charged higgs-slepton mass matrix - order: Hu, Hd, tildeLi, tildeEbarj
  DoubleMatrix Sleptons = calculateLNVSleptonMassMatrix(sinthDRbar);

  DoubleVector SleptonMasses(8);
  DoubleMatrix SleptonMixing(8, 8);
  
  Sleptons.diagonaliseSym(SleptonMixing, SleptonMasses);
  SleptonMasses = SleptonMasses.apply(ccbSqrt);

  out << "Block RVLMIX " <<  " # charged higgs-slepton mixing matrix \n";
  DoubleVector pos(8);
  pos(1) = displayPhys().mHpm;
  pos(2) = displayPhys().me(1, 1);
  pos(3) = displayPhys().me(1, 2);
  pos(4) = displayPhys().me(1, 3);
  pos(5) = displayPhys().me(2, 1);
  pos(6) = displayPhys().me(2, 2);
  pos(7) = displayPhys().me(2, 3);
  pos(8) = SleptonMasses(SleptonMasses.closest(displayMw()));

  DoubleMatrix o(8, 8);
  for (int i=1; i<=8; i++) o(i, i) = 1.;
  o.associateOrderAbs(pos);

  SleptonMixing = o * SleptonMixing.transpose();

  /* for checking the diagonalisation works
  DoubleMatrix m(SleptonMixing * Sleptons * SleptonMixing.transpose());
  DoubleVector v(8); for (int i=1; i<=8; i++) v(i) = m(i, i);
  cout << v.apply(sqrt); */

  /// swap to SLHA2 order: Hu, Hd, tildeLi, tildeEbarj
  SleptonMixing.swapcols(1, 2);

  /// Don't print out the line corresponding to the goldstone mode: line 8
  for (int i=1; i<=7; i++) 
      for (int j=1; j<=8; j++) {
	out << "  " << i << " " << j << "   ";
	printRow(out, SleptonMixing.display(i, j));
	out << "   # C_{" << i << j << "}\n";
    }
}

/// need charginos too
void RpvNeutrino::inomixingSLHA(ostream & out) {
  // output neutrino-neutralino mixing matrix  
  out << "Block RVNMIX " <<  " # neutrino-neutralino mixing matrix \n";
  for (int i=1; i<=7; i++)
    for (int j=1; j<=7; j++) {
      out << "  " << i << " " << j << "   ";
      printRow(out, displayPhysNeutMix().display(j, i));
      out << "   # N_{" << i << j << "}\n";
    }
  /// We must re-order the rows and columns of the chargino mass
  /// matrix. SOFTSUSY is in the basis U = [ wino higgsino e_Ri ], whereas SLHA2
  /// is in the basis U~ = [ e_Ri wino higgsino ].
  DoubleMatrix o(5, 5);
  o(1, 4) = 1.; o(2, 5) = 1.; o(3, 1) = 1.; o(4, 2) = 1.; o(5, 3) = 1.;
  DoubleMatrix slhaMix(displayUch() * o);

  out << "Block RVUMIX " <<  " # lepton-chargino mixing matrix U\n";
  for (int i=1; i<=5; i++)
    for (int j=1; j<=5; j++) {
      out << "  " << i << " " << j << "   ";
      printRow(out, slhaMix(i,j));
      out << "   # U_{" << i << j << "}\n";
    }

  slhaMix = displayVch() * o;
  out << "Block RVVMIX " <<  " # lepton-chargino mixing matrix V\n";
  for (int i=1; i<=5; i++)
    for (int j=1; j<=5; j++) {
      out << "  " << i << " " << j << "   ";
      printRow(out, slhaMix(i,j));
      out << "   # V_{" << i << j << "}\n";
    }
}

void RpvNeutrino::lesHouchesAccordOutput(ostream & out, 
					 const char model[], 
					 const DoubleVector & pars, 
					 int sgnMu, double tanb, double qMax, 
					 int numPoints, 
					 bool ewsbBCscale) {
  if (forceSlha1) {
    RpvSoftsusy::slha1(cout, model, pars, sgnMu, tanb, 
		       qMax, numPoints);
    return;
  }
  int nn = out.precision();
  headerSLHA(out);
  spinfoSLHA(out);
  modselSLHA(out, model);
  FlavourMssmSoftsusy::sminputsSLHA(out);
  vckminSLHA(out);
  MssmSoftsusy::minparSLHA(out, model, pars, tanb, sgnMu, ewsbBCscale);  

  RpvSoftsusy kw;
  kw.RpvSoftsusy::rpvSet(pars);
  kw.outputNonZeroInputs(out);
  
  softsusySLHA(out);

  RpvNeutrino rr;
  rr=*this;

  /// There are some re-orderings of masses required in the SLHA 2 version.
  /// CP+ scalars  
  DoubleVector m(5);
  m(1) = displayPhys().mh0(1);
  m(2) = displayPhys().mh0(2);
  m(3) = displayPhys().msnu(1);
  m(4) = displayPhys().msnu(2);
  m(5) = displayPhys().msnu(3);
  DoubleVector newCpEvens(m.sort());
  sPhysical s(rr.displayPhys());
  s.mh0(1) = newCpEvens(1); s.mh0(2) = newCpEvens(2); 
  s.msnu(1) = newCpEvens(3); s.msnu(2) = newCpEvens(4); 
  s.msnu(3) = newCpEvens(5);

  m(1) = displayPhys().mA0(1);
  m(2) = displayPhys().msnu(1);
  m(3) = displayPhys().msnu(2);
  m(4) = displayPhys().msnu(3);
  m(5) = 6.66e66; /// goldstone boson in last place

  DoubleVector newCpOdds(m.sort());
  s.mA0(1) = newCpOdds(1);
  s.msnu(1) = newCpOdds(2); 
  s.msnu(2) = newCpOdds(3);
  s.msnu(3) = newCpOdds(4);

  /// charged scalars excluding goldstone
  m.setEnd(7);
  m(1) = displayPhys().mHpm;
  m(2) = displayPhys().me(1, 1);
  m(3) = displayPhys().me(1, 2);
  m(4) = displayPhys().me(1, 3);
  m(5) = displayPhys().me(2, 1);
  m(6) = displayPhys().me(2, 2);
  m(7) = displayPhys().me(2, 3);
  DoubleVector chSc(m.sort());
  s.mHpm = chSc(1);
  s.me(1, 1) = chSc(2);   s.me(1, 2) = chSc(3);   s.me(1, 3) = chSc(4);
  s.me(2, 1) = chSc(5);   s.me(2, 2) = chSc(6);   s.me(2, 3) = chSc(7);
  
  rr.setPhys(s);

  if (!displayProblem().testSeriousProblem() || printRuledOutSpectra) {
    rr.massSLHA(out);
    rr.inomixingSLHA(out);
    if (susyRpvBCatMSUSY) { 
      rr.runto(rr.displayMsusy()); rr.rpvSet(pars); 
    }
    
    int n = 0; while (n < numPoints) {
      n++; drbarSLHA(out, numPoints, qMax, n);
    }
    rr.runto(displayMsusy());
    rr.FlavourMssmSoftsusy::sfermionmixSLHA(out);
  } else {
    out << "# Declining to write spectrum because of serious problem"
	<< " with point" << endl;
  }  
  out.precision(nn);
}

void RpvNeutrino::higgsMSLHA(ostream & out) {
  out << "        25    "; printRow(out, displayPhys().mh0(1)); 
  out << "   # CP even neutral scalar\n";
  out << "        35    "; printRow(out, displayPhys().mh0(2)); 
  out << "   # CP even neutral scalar\n";
  out << "        36    "; printRow(out, displayPhys().mA0(1)); 
  out << "   # CP odd neutral scalar\n";
  out << "        37    "; printRow(out, displayPhys().mHpm); 
  out << "   # charged scalar\n";
}

void RpvNeutrino::sleptonsSLHA(ostream & out) {
  DoubleVector m(6); int count = 0, i, j;
  for (i=1; i<=2; i++)
    for (j=1; j<=3; j++) {
      count++;
      m(count) = displayPhys().me(i, j);
    }
  m = m.sort();
  out << "   1000011    "; printRow(out, m(1)); 
  out << "   # charged scalar\n";
  out << "   1000013    "; printRow(out, m(2)); 
  out << "   # charged scalar\n";
  out << "   1000015    "; printRow(out, m(3)); 
  out << "   # charged scalar\n";
  out << "   2000011    "; printRow(out, m(4)); 
  out << "   # charged scalar\n";
  out << "   2000013    "; printRow(out, m(5)); 
  out << "   # charged scalar\n";
  out << "   2000015    "; printRow(out, m(6)); 
  out << "   # charged scalar\n";
  
  m.setEnd(3); 
  for (i=1; i<=3; i++) m(i) = displayPhys().msnu(i);
  m = m.sort();
  out << "   1000012    "; printRow(out, m(1)); 
  out << "   # CP even neutral scalar\n";
  out << "   1000014    "; printRow(out, m(2)); 
  out << "   # CP even neutral scalar\n";
  out << "   1000016    "; printRow(out, m(3)); 
  out << "   # CP even neutral scalar\n";
  out << "   1000017    "; printRow(out, m(1)); 
  out << "   # CP odd neutral scalar\n";
  out << "   1000018    "; printRow(out, m(2)); 
  out << "   # CP odd neutral scalar\n";
  out << "   1000019    "; printRow(out, m(3)); 
  out << "   # CP odd neutral scalar\n";
}

} // namespace softsusy
