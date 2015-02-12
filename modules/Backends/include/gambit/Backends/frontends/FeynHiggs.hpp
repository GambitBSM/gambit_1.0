/* 
 * Frontend for FeynHiggs backend
 * 
 * Last modified:
 * Christopher Rogan 2015-02-04
 */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME FeynHiggs
#endif
#define VERSION 2.10
#define SAFE_VERSION 2_10

/* The following macro loads the library using dlopen 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * These functions are then wrapped in functors that the core can connect 
 * to the modules via the rollcall system */
 
/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability")  */


BE_FUNCTION(FHSetFlags, void, (int&,int&,int&,int&,int&,int&,int&,int&,int&,int&), "fhsetflags_", "FHSetFlags")
BE_FUNCTION(FHSetSMPara, void, (int&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
				fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
				fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&), "fhsetsmpara_", "FHSetSMPara")
BE_FUNCTION(FHSetPara, void, (int&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
			      fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
			      fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
			      fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_creal&,fh_creal&,fh_creal&), "fhsetpara_", "FHSetPara")
BE_FUNCTION(FHSetNMFV, void, (int&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			      fh_ccomplex&,fh_ccomplex&), "fhsetnmfv_", "FHSetNMFV")
BE_FUNCTION(FHSetLFV, void, (int&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			     fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,
			     fh_ccomplex&,fh_ccomplex&,fh_ccomplex&,fh_ccomplex&), "fhsetlfv_", "FHSetLFV")
BE_FUNCTION(FHGetPara, void, (int&,int&,fh_real*,fh_complex*,fh_real*,fh_complex*,
			      fh_real*,fh_complex*,fh_complex*,fh_real*,fh_complex*,
			      fh_complex&,fh_real&,fh_real*,fh_real&), "fhgetpara_", "FHGetPara")
BE_FUNCTION(FHConstraints, void, (int&,fh_creal&,fh_creal&,fh_creal&,fh_creal&,
				  fh_creal&,fh_creal&,fh_creal&,fh_creal&,fh_creal&), "fhconstraints_", "FHConstraints")
BE_FUNCTION(FHFlavour, void , (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&), "fhflavour_", "FHFlavour")
BE_FUNCTION(FHHiggsCorr, void, (int&,fh_real*,fh_complex&,fh_complex*,fh_complex*), "fhhiggscorr_", "FHHiggsCorr")
BE_FUNCTION(FHUncertainties, void, (int&,fh_real*,fh_complex&,fh_complex*,fh_complex*), "fhuncertainties_", "FHUncertainties")


BE_INI_FUNCTION{

  // Scan-level initialisation
  static bool scan_level = true;
  if(scan_level){
    
  }
  scan_level = false;

  // initialize FeynHiggs flags
  int mssmpart = 4;  // scope of calculation (4 -> full MSSM, recommended)
  int fieldren = 0;  // one-loop field-renormalization constants (0 -> DRbar, strongly recommended))
  int tanbren = 0;   // one-loop one-loop tanBeta counter-term (0 -> DRbar, strongly recommended))
  int higgsmix = 2;  // mixing in Higgs sector (3 -> full 3 x 3 in neutral sector)
  int p2approx = 0;  // 1-loop approximation (4 -> none, UHiggs eval. at p^2=0, recommended)
  int looplevel = 2; // higher-order corrections? (2 -> various 2-loop contrib., recommended)
  int runningMT = 1; // top mass for 1/2-loop corr. (1 -> m_t^{run}, recommended)
  int botResum = 1;  // O(tan^n Beta) corr. ressummed? (1 -> yes, recommended)
  int tlCplxApprox = 3; // determines how 2-loop corr. are treated with complex param
  
  int error = 1;
  FHSetFlags(error, mssmpart, fieldren, tanbren, higgsmix,
	     p2approx, looplevel, runningMT, botResum, tlCplxApprox);

  //
  // SM input parameters:   -1 gives default value
  //
  fh_real invAlfa = -1; // 1/alpha_{QED}
  fh_real AlfasMZ = -1; // alpha_s @ MZ
  fh_real GF = -1;      // Fermi constant

  fh_real ME = -1;      // electron mass
  fh_real MU = -1;      // up quark mass @ 2 GeV
  fh_real MD = -1;      // down quark mass @ 2 GeV
  fh_real MM = -1;      // muon mass
  fh_real MC = -1;      // charm mass at m_c
  fh_real MS = -1;      // stange mass @ 2 GeV
  fh_real ML = -1;      // tau mass
  fh_real MB = -1;      // bottom mass at m_b
  fh_real MW = -1;      // W boson mass
  fh_real MZ = -1;      // Z boson mass

  // CKM input parameters in Wolfenstein parameterization
  fh_real CKMlambda = -1;
  fh_real CKMA = -1;
  fh_real CKMrhobar = -1;
  fh_real CKMetabar = -1;

  error = 1;
  FHSetSMPara(error, invAlfa, AlfasMZ, GF,
	      ME, MU, MD, MM, MC, MS, ML, MB,
	      MW, MZ,
	      CKMlambda, CKMA, CKMrhobar, CKMetabar);

  fh_real MT = 172;  // top quark mass
  fh_real TB = 5;    // tan Beta
  fh_real MA0 = 250; // masses of CP-odd and 
  fh_real MHp = -1;  // charged Higgs (only one should be given)

  // soft-SUSY breaking parameters for g=1,2,3 generation sfermions
  fh_real MSusy = 1000;
  fh_real M3SL = MSusy, M2SL = M3SL, M1SL = M2SL; // slepton doublet
  fh_real M3SE = MSusy, M2SE = M3SE, M1SE = M2SE; // slepton singlet
  fh_real M3SQ = MSusy, M2SQ = M3SQ, M1SQ = M2SQ; // squark doublet
  fh_real M3SU = MSusy, M2SU = M3SU, M1SU = M2SU; // up-type squark singlet
  fh_real M3SD = MSusy, M2SD = M3SD, M1SD = M2SD; // down-type squark singlet

  // soft-SUSY breaking parameters
  fh_complex Af = 2000;
  fh_complex At = Af, Ac = At, Au = Ac;
  fh_complex Ab = Af, As = Ab, Ad = As;
  fh_complex Atau = Af, Amu = Atau, Ae = Amu;

  fh_complex MUE = 200;   // Higgs mixing parameter mu
  // gaugino mass parameters. M_1 == 0 => GUT relation is used
  fh_complex M_1 = 0;
  fh_complex M_2 = 500;
  fh_complex M_3 = 800;

  // the scales at which the sfermion input parameters M3S are given
  // 0 indicates on-shell parameters
  fh_real Qtau = 0;
  fh_real Qt = 0;
  fh_real Qb = 0;

  fh_real scalefactor = 1;

  error = 1;
  FHSetPara(error, scalefactor, MT, TB, MA0, MHp,
	    M3SL, M3SE, M3SQ, M3SU, M3SD,
	    M2SL, M2SE, M2SQ, M2SU, M2SD,
	    M1SL, M1SE, M1SQ, M1SU, M1SD,
	    MUE,
	    Atau, At, Ab,
	    Amu, Ac, As,
	    Ae, Au, Ad,
	    M_1, M_2, M_3,
	    Qtau, Qt, Qb);

  //
  // Set NMFV parameters
  //
  /*
  fh_ccomplex deltaQLL12, deltaQLL23, deltaQLL13;
  fh_ccomplex deltaULR12, deltaULR23, deltaULR13;
  fh_ccomplex deltaURL12, deltaURL23, deltaURL13;
  fh_ccomplex deltaURR12, deltaURR23, deltaURR13;
  fh_ccomplex deltaDLR12, deltaDLR23, deltaDLR13;
  fh_ccomplex deltaDRL12, deltaDRL23, deltaDRL13;
  fh_ccomplex deltaDRR12, deltaDRR23, deltaDRR13;
  FHSetNMFV(error,
	    deltaQLL12, deltaQLL23, deltaQLL13,
	    deltaULR12, deltaULR23, deltaULR13,
	    deltaURL12, deltaURL23, deltaURL13,
	    deltaURR12, deltaURR23, deltaURR13,
	    deltaDLR12, deltaDLR23, deltaDLR13,
	    deltaDRL12, deltaDRL23, deltaDRL13,
	    deltaDRR12, deltaDRR23, deltaDRR13);
  */
  //
  // Set LFV parameters
  //
  /*
  fh_ccomplex deltaLLL12, deltaLLL23, deltaLLL13;
  fh_ccomplex deltaELR12, deltaELR23, deltaELR13;
  fh_ccomplex deltaERL12, deltaERL23, deltaERL13;
  fh_ccomplex deltaERR12, deltaERR23, deltaERR13;
  FHSetLFV(error,
	   deltaLLL12, deltaLLL23, deltaLLL13,
	   deltaELR12, deltaELR23, deltaELR13,
	   deltaERL12, deltaERL23, deltaERL13,
	   deltaERR12, deltaERR23, deltaERR13);
  */
  
}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

