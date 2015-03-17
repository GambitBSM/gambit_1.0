//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions of EWPOBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2014 Nov
///
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///
///  *********************************************

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/EWPOBit/EWPOBit_types.hpp"
#include "gambit/EWPOBit/EWPOBit_rollcall.hpp"

namespace Gambit
{

  namespace EWPOBit
  {

    using namespace LogTags;

    /// \name EWPOBit module functions
    /// @{

    //void deleteme(int &result) { using namespace Pipes::deleteme; result = 1; }   

    /// @}

    // Module functions

    void FH_Masses(double &result) 
    {
      using namespace Pipes::FH_Masses;
   
      // zero if minimal, non-zero if non-minimal flavour violation
      int nmfv; 

      // MSf(s,t,g) MFV squark masses with indices
      // s = 1..2   sfermion index
      // t = 1..5   sfermion type nu,e,u,d,?
      // g = 1..3   generation index
      Farray<fh_real, 1,2, 1,5, 1,3> MSf;

      // USf(s1,s2,t,g) MFV squark mixing matrices with indices
      // s1 = 1..2  sfermion index (mass eigenstates)
      // s2 = 1..2  sfermion index (gauge eigenstates, L/R)
      // t  = 1..5  sfermion type nu,e,u,d,?
      // g  = 1..3  generation index
      Farray<fh_complex, 1,2, 1,2, 1,5, 1,3> USf;

      // NMFV squark masses, with indices
      // a = 1..6   extended sfermion index
      // t = 1..5   sfermion type
      Farray<fh_real, 1,6, 1,5> MASf;

      // NMFV squark mixing matrices, with indices
      // a1 = 1..6  extended sfermion index (mass eigenstates)
      // a2 = 1..6  extended sfermion index (gauge eigenstates)
      //  t = 1..5  sftermion type nu,e,u,d,?
      Farray<fh_complex, 1,36, 1,5> UASf; 
      
      // chargino masses
      Farray<fh_real, 1,2> MCha;

      // chargino mixing matrices (mass,gauge) eigenstates (2 x 2)
      Farray<fh_complex, 1,4> UCha;
      Farray<fh_complex, 1,4> VCha;

      // neutralino masses
      Farray<fh_real, 1,4> MNeu;

      // neutralino mixing matrices (mass,gauge) eigenstates (4 x 4)
      Farray<fh_complex, 1,16> ZNeu; 

      // correction to bottom Yukawa coupling
      fh_complex DeltaMB;

      // gluino mass
      fh_real MGl;

      // tree-level Higgs masses (Mh, MH, MA, MHpm)
      Farray<fh_real, 1,4> MHtree;

      // tree-level Higgs mixing parameters sin alpha
      fh_real SAtree;

      int error;
      
      BEreq::FHGetPara(error, nmfv, MSf, USf, MASf, UASf,
		       MCha, UCha, VCha, MNeu, ZNeu, 
		       DeltaMB, MGl, MHtree, SAtree);

      result = 0.1;

      cout << "sin alpha = " << SAtree << endl;
    }

    void FH_Precision(double &result) 
    {
      using namespace Pipes::FH_Precision;

      fh_real gm2;        // g_{mu}-2
      fh_real Deltarho;   // deltaRho
      fh_real MWMSSM;     // W mass in MSSM
      fh_real MWSM;       // W mass in SM
      fh_real SW2MSSM;    // weak mixing angle in MSSM
      fh_real SW2SM;      // weak mixing angle in SM
      fh_real edmeTh;     // electron EDM
      fh_real edmn;       // neutron EDM
      fh_real edmHg;      // mercury EDM
      int ccb;            // ?

      int error = 1;
      BEreq::FHConstraints(error, gm2, Deltarho, 
			   MWMSSM, MWSM, SW2MSSM, SW2SM,
			   edmeTh, edmn, edmHg, ccb);
      
      cout << "****** FeynHiggs Precision Observables ******" << endl;
      cout << "g_{mu}-2 = " << gm2 << endl;
      cout << "delta rho = " << Deltarho << endl;
      cout << "W mass = " <<  MWMSSM << " (MSSM) " << MWSM << " (SM)" << endl;
      cout << "weak mixing angle = " <<  SW2MSSM << " (MSSM) " << SW2SM << " (SM)" << endl;
      cout << "EDMs : " << edmeTh << " (electron) " << edmn << " (neutron) " << edmHg << " (mercury)" << endl;

      result = 0.1;
    }

    void FH_Flavor(double &result) 
    {
      using namespace Pipes::FH_Flavor;
      
      fh_real bsgMSSM;     // B -> Xs gamma in MSSM
      fh_real bsgSM;       // B -> Xs gamma in SM
      fh_real deltaMsMSSM; // delta Ms in MSSM
      fh_real deltaMsSM;   // delta Ms in SM
      fh_real bsmumuMSSM;  // Bs -> mu mu in MSSM
      fh_real bsmumuSM;    // Bs -> mu mu in SM

      int error = 1;
      BEreq::FHFlavour(error, bsgMSSM, bsgSM,
		       deltaMsMSSM, deltaMsSM,
		       bsmumuMSSM, bsmumuSM);

      cout << "****** FeynHiggs Flavor ******" << endl;
      cout << "B -> Xs gamma = " << bsgMSSM << " (MSSM) " << bsgSM << " (SM)" << endl;
      cout << "delta Ms = " << deltaMsMSSM << " (MSSM) " << deltaMsSM << " (SM)" << endl;
      cout << "Bs -> mu mu = " << bsmumuMSSM << " (MSSM) " << bsmumuSM << " (SM)" << endl;

      result = 0.1;
    }

    void FH_Higgs(double &result) 
    {
      using namespace Pipes::FH_Higgs;

      // Higgs mass with
      // 0 - m1 (Mh in rMSSM)
      // 1 - m2 (MH in rMSSM)
      // 2 - m3 (MA in rMSSM)
      // 3 - MHpm
      Farray<fh_real, 1,4> MHiggs;
      Farray<fh_real, 1,4> DeltaMHiggs;

      // sine of effective Higgs mixing angle, alpha_eff
      fh_complex SAeff; 
      fh_complex DeltaSAeff; 

      // matrix needed to rotate Higgs 
      // mass matrix to diagonal form
      Farray<fh_complex, 1,3, 1,3> UHiggs;
      Farray<fh_complex, 1,3, 1,3> DeltaUHiggs;

      // matrix of Z-factors needed to combine 
      // amplitudes involving on-shell Higgs
      Farray<fh_complex, 1,3, 1,3> ZHiggs;
      Farray<fh_complex, 1,3, 1,3> DeltaZHiggs;

      int error = 1;
      BEreq::FHHiggsCorr(error, MHiggs, SAeff, UHiggs, ZHiggs);

      error = 1;
      BEreq::FHUncertainties(error, DeltaMHiggs, DeltaSAeff, DeltaUHiggs, DeltaZHiggs);
      
      cout << "****** FeynHiggs Higgs Masses ******" << endl;
      for(int i = 0; i < 4; i++){
	cout << "Higgs #" << i << " with M = " << MHiggs(i+1) << " +/- " << DeltaMHiggs(i+1) << " [GeV]" << endl;
      }

      result = 0.1;
    }

  }

}
