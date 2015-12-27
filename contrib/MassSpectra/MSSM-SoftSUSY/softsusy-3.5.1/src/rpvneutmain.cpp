
/**
   Project:     SOFTSUSY 
   File:        rpvmain.cpp
   Authors:     B.C. Allanach, Steve Kom and Marja Hanussek
   Manual:      B.C. Allanach, M. Hanussek and S. Kom, Comput. Phys. Commun. 
                183 (2012) 785, arXiv:1109.3735
   Webpage:     http://projects.hepforge.org/softsusy/
   Description: main calling program example:
		calculates neutrino masses for a certain RPV point
*/


#include "rpvmain.h"

int main() {
  /// Header  
  cerr << "SOFTSUSY" << SOFTSUSY_VERSION 
       << " Ben Allanach, Markus Bernhardt 2009\n";
  cerr << "If you use SOFTSUSY, please refer to B.C. Allanach, ";
  cerr << "Comput. Phys. Commun. 143 (2002) 305, hep-ph/0104145;\n";
  cerr << "For RPV aspects, B.C. Allanach and M.A. Bernhardt, ";
  cerr << "Comp. Phys. Commun. 181 (2010) 232, ";
  cerr << "arXiv:0903.1805.\n";
  cerr << "For RPV neutrino masses, B.C. Allanach, M. Hanussek and S. Kom,\n";
  cerr << "Comput. Phys. Commun. 183 (2012) 785, arXiv:1109.3735 [hep-ph]\n";

  /// Sets up exception handling
  signal(SIGFPE, FPE_ExceptionHandler); 


  /// MIXING=1: CKM-mixing in up-sector
  MIXING = 1; 

  /// Apply SUSY breaking conditions at GUT scale, where g_1=g_2
  bool gaugeUnification = true;

  /// Sets format of output: 3 decimal places
  outputCharacteristics(3);
  
  /// "try" catches errors in main program and prints them out
  try {
    QedQcd oneset;      ///< See "lowe.h" for default parameter definitions 
    oneset.toMz();      ///< Runs SM fermion masses to MZ

    /// Guess at GUT scale
    double mxGuess = 2.e16;
    
    /// Close to scenario IH S2 from arXiv:1106.4338
    int sgnMu = 1;
    double tanb	= 20., a0 = 924., m12 = 500., m0 = 100.;

    /// Define RpvNeutrino object    
    RpvNeutrino kw;

    /// Set the CKM angles in Wolfenstein parameterisation
    double lambda = 0.2272, aCkm = 0.818, rhobar = 0.221, etabar = 0.34;
    kw.setAngles(lambda, aCkm, rhobar, etabar);

    /// Set the GUT scale RPV SUSY couplings
    kw.setLamPrime(1, 1, 1,  0.0395);
    kw.setLamPrime(2, 1, 1, -0.018);
    kw.setLamPrime(3, 1, 1,  0.019);	
    kw.setLamPrime(1, 3, 3,  3.0e-5);
    kw.setLamPrime(2, 3, 3,  3.2e-5);
    kw.setLamPrime(3, 3, 3, -3.5e-5);
		
    /// Store inputs into one vector
    DoubleVector pars(3); pars(1) = m0; pars(2) = m12; pars(3) = a0;

    /// Outputs the RPV couplings required into the vector pars used by lowOrg
    kw.rpvDisplay(pars);
    /// Makes sure the neutrino mass ordering will be as expected in inverted
    /// hierarchy output. If required, must be set before lowOrg is called 
    kw.setInvertedOutput();

    /// Main driver routine: do the calculation
    kw.lowOrg(rpvSugraBcs, mxGuess, pars, sgnMu, tanb, oneset, 
	      gaugeUnification);

    /// Output the results in SLHA2 format
    double qMax = 0.;  char * modelIdent = (char *)"sugra"; 
    int numPoints = 1; bool ewsbBCscale = false;

    kw.lesHouchesAccordOutput(cout, modelIdent, pars, sgnMu, tanb, qMax,  
			      numPoints, ewsbBCscale);
  }
  catch(const string & a) {
    cout << a; return -1;
  }
  catch(const char *a) {
    cout << a; return -1;
  }
  return 0;
}
