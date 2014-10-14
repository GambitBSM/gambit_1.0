
/**
   Project:     SOFTSUSY 
   File:        rpvmain.cpp
   Authors:     B.C. Allanach, Markus Bernhardt 
   Manual:      B.C. Allanach and M.A. Bernhardt, CPC 181 (2010) 232, 
                arXiv:0903.1805  and
   Webpage:     http://projects.hepforge.org/softsusy/
   Description: main calling program example:
                - scanning CMSSM10.1 with one varying RPV coupling
*/

#include "rpvmain.h"

int main() {
  /// Sets up exception handling
  signal(SIGFPE, FPE_ExceptionHandler); 


  bool gaugeUnification = true, ewsbBCscale = false;

  /// Do we include 2-loop RGEs of *all* scalar masses and A-terms, or only the
  /// scalar mass Higgs parameters? (Other quantities all 2-loop anyway): the
  /// default in SOFTSUSY 3 is to include all 2-loop terms, except for RPV,
  /// which is already slow and calculated to less accuracy than the R-parity
  /// conserving version
  INCLUDE_2_LOOP_SCALAR_CORRECTIONS = false;

  /// Sets format of output: 6 decimal places
  outputCharacteristics(6);

  /// Header  
  cerr << "SOFTSUSY" << SOFTSUSY_VERSION 
       << " Ben Allanach, Markus Bernhardt 2009\n";
  cerr << "If you use SOFTSUSY, please refer to B.C. Allanach, ";
  cerr << "Comput. Phys. Commun. 143 (2002) 305, hep-ph/0104145;\n";
  cerr << "For RPV aspects, B.C. Allanach and M.A. Bernhardt, ";
  cerr << "Comp. Phys. Commun. 181 (2010) 232, ";
  cerr << "arXiv:0903.1805.\n";

  /// "try" catches errors in main program and prints them out
  try {

    /// Contains default quark and lepton masses and gauge coupling
    /// information 
    QedQcd oneset;      ///< See "lowe.h" for default parameter definitions 
    oneset.toMz();      ///< Runs SM fermion masses to MZ
    
    /// Print out the Standard Model data being used, as well as quark mixing
    /// assumption and the numerical accuracy of the solution
    cerr << "Low energy data in SOFTSUSY: MIXING=" << MIXING << " TOLERANCE=" 
         << TOLERANCE << endl << oneset << endl;
    /// set parameters
    double tanb = 10.;
    int sgnMu = 1;
    double mgutGuess = 2.e16; 
    double a0 = 0.0, m12 = 500.0, m0 = 125.0; 
    
    /// number of points for scan
    const int numPoints = 20; 
    
    /// parameter region
    double Start = 0. , End = 0.4;
    
    DoubleVector pars(3);
    /// set basic entries in pars
    pars(1) = m0; pars(2) = m12; pars(3) = a0;
      
    cout << "# l''_{323}(M_X) m_stop_R     # Problem flag" << endl;
    /// loop over parameter space region
    int ii; for (ii=0; ii<=numPoints; ii++){
      double lambda = Start + ((End - Start) / double(numPoints) * double(ii));
      
      /// define rpvSoftsusy object
      RpvSoftsusy kw;
      
      /// set lambda coupling at mgut
      kw.setLamPrimePrime(3, 2, 3, lambda); 
      
      /// output parameters into double vector pars used by lowOrg
      kw.rpvDisplay(pars);
      
      /// generate spectrum in RpvSoftsusy object kw
      kw.lowOrg(rpvSugraBcs, mgutGuess, pars, sgnMu,
                tanb, oneset, gaugeUnification, ewsbBCscale);
      
      /// outputs for this scan
      cout << lambda << "  " << kw.displayPhys().mu(2, 3) << " # " 
           << kw.displayProblem() << endl;
    }
  }
  catch(const string & a) {
    cout << a; return -1;
  }
  catch(const char *a) {
    printf("%s", a); return -1;
  }
  return 0;
}
