/* 
 * Frontend for FeynHiggs backend
 * 
 * Last modified:
 * Christopher Rogan Apr 2015
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

BE_FUNCTION(FHSetDebug, void, (int&), "fhsetdebug_", "FHSetDebug")

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

BE_FUNCTION(FHConstraints, void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,
          fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,int&), "fhconstraints_", "FHConstraints")

BE_FUNCTION(FHFlavour, void, (int&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&,fh_real&), "fhflavour_", "FHFlavour")

BE_FUNCTION(FHGetPara, void, (int&,int&,
            Farray<fh_real, 1,2, 1,5, 1,3>&, Farray<fh_complex, 1,2, 1,2, 1,5, 1,3>&,
            Farray<fh_real, 1,6, 1,5>&, Farray<fh_complex, 1,36, 1,5>&,
            Farray< fh_real,1,2>&, Farray< fh_complex,1,4>&,
            Farray< fh_complex,1,4>&, Farray< fh_real,1,4>&,
            Farray< fh_complex,1,16>&, fh_complex&, fh_real&,
            Farray< fh_real,1,4>&, fh_real&), "fhgetpara_", "FHGetPara")

BE_FUNCTION(FHHiggsCorr, void, (int&, Farray< fh_real,1,4>&, fh_complex&, Farray<fh_complex, 1,3, 1,3>&, 
        Farray<fh_complex, 1,3, 1,3>&), "fhhiggscorr_", "FHHiggsCorr")

BE_FUNCTION(FHUncertainties, void, (int&, Farray< fh_real,1,4>&, fh_complex&, Farray<fh_complex, 1,3, 1,3>&, 
            Farray<fh_complex, 1,3, 1,3>&), "fhuncertainties_", "FHUncertainties")

BE_FUNCTION(FHSelectUZ, void, (int&,int&,int&,int&), "fhselectuz_", "FHSelectUZ")

BE_FUNCTION(FHCouplings, void, (int&, Farray< fh_complex,1,681>&, Farray< fh_complex,1,231>&,
                                Farray< fh_real,1,978>&, Farray< fh_real,1,250>&, int&), "fhcouplings_", "FHCouplings")

BE_FUNCTION(FHHiggsProd, void, (int&, fh_real&, Farray< fh_real,1,52>&), "fhhiggsprod_", "FHHiggsProd")

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(SMINPUTS, SMInputs)                          // Need SLHA2 SMINPUTS to initialize FH
BE_INI_DEPENDENCY(unimproved_MSSM_spectrum, const Spectrum*)   // Need MSSM spectrum inputs to initialize FH

BE_INI_FUNCTION{
   int error = 1;

  // Scan-level initialisation
  static bool scan_level = true;
  if(scan_level){
    // initialize FeynHiggs flags
    int mssmpart = 4;  // scope of calculation (4 -> full MSSM, recommended)
    int fieldren = 0;  // one-loop field-renormalization constants (0 -> DRbar, strongly recommended))
    int tanbren = 0;   // one-loop one-loop tanBeta counter-term (0 -> DRbar, strongly recommended))
    int higgsmix = 3;  // mixing in Higgs sector (3 -> full 3 x 3 in neutral sector)
    int p2approx = 4;  // 1-loop approximation (4 -> none, UHiggs eval. at p^2=0, recommended)
    int looplevel = 2; // higher-order corrections? (2 -> various 2-loop contrib., recommended)
    int runningMT = 1; // top mass for 1/2-loop corr. (1 -> m_t^{run}, recommended)
    int botResum = 1;  // O(tan^n Beta) corr. ressummed? (1 -> yes, recommended)
    int tlCplxApprox = 3; // determines how 2-loop corr. are treated with complex param
    
    FHSetFlags(error, mssmpart, fieldren, tanbren, higgsmix,
         p2approx, looplevel, runningMT, botResum, tlCplxApprox);
  }
  scan_level = false;

  // retrive SMInputs dependency 
  const SMInputs& sminputs = *Dep::SMINPUTS;

  // retrieve MSSM_spectrum dependency
  const Spectrum* fullspectrum = *Dep::unimproved_MSSM_spectrum;
  const SubSpectrum* spec = fullspectrum->get_UV();
  SLHAea::Coll slhaea = fullspectrum->getSLHAea();

  SLHAea::Block spinfo = slhaea.at("SPINFO");
  std::vector<std::string> k3(1, "3");
  std::vector<std::string> k4(1, "4");

  if(spinfo.find(k3) != spinfo.end() || spinfo.find(k4) != spinfo.end()){
    // throw an error?
  }

  //
  // SM input parameters: -1 gives default value
  //
  fh_real invAlfa = sminputs.alphainv; // 1/alpha_{QED}
  fh_real AlfasMZ = sminputs.alphaS;   // alpha_s @ MZ
  fh_real GF = sminputs.GF;            // Fermi constant
    
  fh_real ME = sminputs.mE;      // electron mass
  fh_real MU = sminputs.mU;      // up quark mass @ 2 GeV
  fh_real MD = sminputs.mD;      // down quark mass @ 2 GeV
  fh_real MM = sminputs.mMu;     // muon mass
  fh_real MC = sminputs.mCmC;    // charm mass at m_c
  fh_real MS = sminputs.mS;      // stange mass @ 2 GeV
  fh_real ML = sminputs.mTau;    // tau mass
  fh_real MB = sminputs.mBmB;    // bottom mass at m_b
    
  fh_real MW = fullspectrum->get_Pole_Mass("W+");  // W boson mass
  fh_real MZ = sminputs.mZ;                        // Z boson mass

  // CKM input parameters in Wolfenstein parameterization
  fh_real CKMlambda = sminputs.CKM.lambda;
  fh_real CKMA = sminputs.CKM.A;
  fh_real CKMrhobar = sminputs.CKM.rhobar;
  fh_real CKMetabar = sminputs.CKM.etabar;

  error = 1;
  FHSetSMPara(error, invAlfa, AlfasMZ, GF,
        ME, MU, MD, MM, MC, MS, ML, MB,
        MW, MZ,
        CKMlambda, CKMA, CKMrhobar, CKMetabar);

  //
  // SM input parameters: -1 gives default value
  //

  fh_real MT = fullspectrum->get_Pole_Mass("t");                      // top quark mass
  fh_real TB = SLHAea::to<double>( slhaea.at("MINPAR").at(3).at(1) ); // tan Beta
  fh_real MA0 = fullspectrum->get_Pole_Mass("A0");                    // masses of CP-odd and 
  fh_real MHp = -1;                                                   // charged Higgs (only one should be given)

  // soft-SUSY breaking parameters for g=1,2,3 generation sfermions
  // slepton doublet
  fh_real M1SL = SLHAea::to<double>( slhaea.at("MSOFT").at(31).at(1) );
  fh_real M2SL = SLHAea::to<double>( slhaea.at("MSOFT").at(32).at(1) );
  fh_real M3SL = SLHAea::to<double>( slhaea.at("MSOFT").at(33).at(1) );  
  // slepton singlet
  fh_real M1SE = SLHAea::to<double>( slhaea.at("MSOFT").at(34).at(1) );
  fh_real M2SE = SLHAea::to<double>( slhaea.at("MSOFT").at(35).at(1) );
  fh_real M3SE = SLHAea::to<double>( slhaea.at("MSOFT").at(36).at(1) ); 
  // squark doublet
  fh_real M1SQ = SLHAea::to<double>( slhaea.at("MSOFT").at(41).at(1) );
  fh_real M2SQ = SLHAea::to<double>( slhaea.at("MSOFT").at(42).at(1) );
  fh_real M3SQ = SLHAea::to<double>( slhaea.at("MSOFT").at(43).at(1) ); 
  // up-type squark singlet
  fh_real M1SU = SLHAea::to<double>( slhaea.at("MSOFT").at(44).at(1) );
  fh_real M2SU = SLHAea::to<double>( slhaea.at("MSOFT").at(45).at(1) );
  fh_real M3SU = SLHAea::to<double>( slhaea.at("MSOFT").at(46).at(1) ); 
  // down-type squark singlet
  fh_real M1SD = SLHAea::to<double>( slhaea.at("MSOFT").at(47).at(1) );
  fh_real M2SD = SLHAea::to<double>( slhaea.at("MSOFT").at(48).at(1) );
  fh_real M3SD = SLHAea::to<double>( slhaea.at("MSOFT").at(49).at(1) ); 

  // soft-SUSY breaking parameters
  fh_complex Af; 
  Af.re = 0.; 
  Af.im = 0.;
  fh_complex At = Af, Ac = At, Au = Ac;
  fh_complex Ab = Af, As = Ab, Ad = As;
  fh_complex Atau = Af, Amu = Atau, Ae = Amu;

  Au.re   = SLHAea::to<double>( slhaea.at("Au").at(1,1).at(2) );
  Ac.re   = SLHAea::to<double>( slhaea.at("Au").at(2,2).at(2) );
  At.re   = SLHAea::to<double>( slhaea.at("Au").at(3,3).at(2) );
  Ad.re   = SLHAea::to<double>( slhaea.at("Ad").at(1,1).at(2) );
  As.re   = SLHAea::to<double>( slhaea.at("Ad").at(2,2).at(2) );
  Ab.re   = SLHAea::to<double>( slhaea.at("Ad").at(3,3).at(2) );
  Ae.re   = SLHAea::to<double>( slhaea.at("Ae").at(1,1).at(2) );
  Amu.re  = SLHAea::to<double>( slhaea.at("Ae").at(2,2).at(2) );
  Atau.re = SLHAea::to<double>( slhaea.at("Ae").at(3,3).at(2) );

  fh_complex MUE;  // Higgs mixing parameter mu
  MUE.re = spec->runningpars.get_mass_parameter("Mu"); 
  MUE.im = 0;
  // gaugino mass parameters. M_1 == 0 => GUT relation is used
  fh_complex M_1, M_2, M_3; 
  M_1.re = spec->runningpars.get_mass_parameter("M1");   
  M_1.im = 0;
  M_2.re = spec->runningpars.get_mass_parameter("M2"); 
  M_2.im = 0;
  M_3.re = spec->runningpars.get_mass_parameter("M3"); 
  M_3.im = 0;

  // the scales at which the sfermion input parameters M3S are given
  // 0 indicates on-shell parameters
  double SCALE = spec->runningpars.GetScale();
  
  fh_real Qtau = SCALE;
  fh_real Qt = SCALE;
  fh_real Qb = SCALE;

  // the renormalization scale is Mtop times the 'scalefactor'
  fh_real scalefactor = 1.;

  error = 1;
  FHSetPara(error, scalefactor, MT, TB, MA0, MHp,
      M3SL, M3SE, M3SQ, M3SU, M3SD,
      M2SL, M2SE, M2SQ, M2SU, M2SD,
      M1SL, M1SE, M1SQ, M1SU, M1SD,
      MUE,
      Atau, At, Ab,
      Amu,  Ac, As,
      Ae,   Au, Ad,
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
END_BE_INI_FUNCTION

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

