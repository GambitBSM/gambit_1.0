//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of types
///  for the FeynHiggs backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christopher Rogan
///          (crogan@cern.ch)
///  \date 2015 Apr
///
///  *********************************************

#include "gambit/Utils/util_types.hpp"

#ifndef __FeynHiggs_types_hpp__
#define __FeynHiggs_types_hpp__

namespace Gambit
{
  // variables for input to FH backend sub-routines
  typedef Fdouble fh_real;
  typedef Fdouble_complex fh_complex;
  typedef const fh_real fh_creal;
  typedef const fh_complex fh_ccomplex;

  // Container for FeynHiggs Higgs mass/mixings information (from FHHiggsCorr and FHUncertainties backend functions)
  struct fh_HiggsMassObs
  {
    // Higgs mass with
    // 0 - m1 (Mh in rMSSM)
    // 1 - m2 (MH in rMSSM)
    // 2 - m3 (MA in rMSSM)
    // 3 - MHpm
    fh_real MH[4];
    fh_real deltaMH[4];

    // sine of effective Higgs mixing angle, alpha_eff
    fh_complex SinAlphaEff; 
    fh_complex deltaSinAlphaEff; 
    
    // matrix needed to rotate Higgs 
    // mass matrix to diagonal form
    fh_complex UH[3][3];
    fh_complex deltaUH[3][3];
    
    // matrix of Z-factors needed to combine 
    // amplitudes involving on-shell Higgs
    fh_complex ZH[3][3];
    fh_complex deltaZH[3][3];
  };

  // Container for FeynHiggs Flavor observable information (from FHFlavour backend function)
  struct fh_FlavorObs
  {
    fh_real Bsg_MSSM;     // B -> Xs gamma in MSSM
    fh_real Bsg_SM;       // B -> Xs gamma in SM
    fh_real deltaMs_MSSM; // delta Ms in MSSM
    fh_real deltaMs_SM;   // delta Ms in SM
    fh_real Bsmumu_MSSM;  // Bs -> mu mu in MSSM
    fh_real Bsmumu_SM;    // Bs -> mu mu in SM
  };

  // Container for FeynHiggs precision constraints observables (from FHConstraints backend function)
  struct fh_PrecisionObs
  {
    fh_real gmu2;        // g_{mu}-2
    fh_real deltaRho;    // deltaRho
    fh_real MW_MSSM;     // W mass in MSSM
    fh_real MW_SM;       // W mass in SM
    fh_real sinW2_MSSM;  // weak mixing angle in MSSM
    fh_real sinW2_SM;    // weak mixing angle in SM
    fh_real edm_ele;     // electron EDM
    fh_real edm_neu;     // neutron EDM
    fh_real edm_Hg;      // mercury EDM
    int ccb;            // ?
  };

  // Container for FeynHiggs MSSM masses (from FHGetPara backend function)
  struct fh_MSSMMassObs
  {
    // zero if minimal, non-zero if non-minimal flavour violation
    int nmfv; 

    // MSf(s,t,g) MFV squark masses with indices
    // s = 1..2   sfermion index
    // t = 1..5   sfermion type nu,e,u,d,?
    // g = 1..3   generation index
    fh_real MSf[2][5][3];

    // USf(s1,s2,t,g) MFV squark mixing matrices with indices
    // s1 = 1..2  sfermion index (mass eigenstates)
    // s2 = 1..2  sfermion index (gauge eigenstates, L/R)
    // t  = 1..5  sfermion type nu,e,u,d,?
    // g  = 1..3  generation index
    fh_complex USf[2][2][5][3];

    // NMFV squark masses, with indices
    // a = 1..6   extended sfermion index
    // t = 1..5   sfermion type
    fh_real MASf[6][5];

    // NMFV squark mixing matrices, with indices
    // a1 = 1..6  extended sfermion index (mass eigenstates)
    // a2 = 1..6  extended sfermion index (gauge eigenstates)
    //  t = 1..5  sftermion type nu,e,u,d,?
    fh_complex UASf[36][5];
      
    // chargino masses
    fh_real MCha[2];

    // chargino mixing matrices (mass,gauge) eigenstates (2 x 2)
    fh_complex UCha[4];
    fh_complex VCha[4];

    // neutralino masses
    fh_real MNeu[4];

    // neutralino mixing matrices (mass,gauge) eigenstates (4 x 4)
    fh_complex ZNeu[16];

    // correction to bottom Yukawa coupling
    fh_complex deltaMB;

    // gluino mass
    fh_real MGl;

    // tree-level Higgs masses (Mh, MH, MA, MHpm)
    fh_real MHtree[4];

    // tree-level Higgs mixing parameters sin alpha
    fh_real SinAlphatree;
  };
  
  // Container for FeynHiggs couplings (from FHCouplings backend function)
  struct fh_Couplings
  {
    fh_complex couplings[681];
    fh_complex couplings_sm[231];
    fh_real gammas[978];
    fh_real gammas_sm[250];
  };

  // Container for FeynHiggs Higgs prod xsecs (from FHHiggsProd backend function)
  struct fh_HiggsProd
  {
    fh_real prodxs[52];
  };

}

#endif /* defined __FeynHiggs_types_hpp__ */
