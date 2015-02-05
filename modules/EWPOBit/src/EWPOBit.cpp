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

#include "gambit_module_headers.hpp"
#include "EWPOBit_types.hpp"
#include "EWPOBit_rollcall.hpp"

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
      // t = 1..4   sfermion type nu,e,u,d
      // g = 1..3   generation index
      fh_real MSf[2][4][3];
      // USf(s1,s2,t,g) MFV squark mixing matrices with indices
      // s1 = 1..2  sfermion index (mass eigenstates)
      // s2 = 1..2  sfermion index (gauge eigenstates, L/R)
      // t  = 1..4  sfermion type nu,e,u,d
      // g  = 1..3  generation index
      fh_complex USf[2][2][4][3];
      // NMFV squark masses, with indices
      // a = 1..6   extended sfermion index
      // t = 1..4   sfermion type
      fh_real MASf[6][4];
      // NMFV squark mixing matrices, with indices
      // a1 = 1..6  extended sfermion index (mass eigenstates)
      // a2 = 1..6  extended sfermion index (gauge eigenstates)
      //  t = 1..4  sftermion type nu,e,u,d
      fh_complex UASf[6][6][4];
      // chargino masses
      fh_real MCha[2];
      // chargino mixing matrices (mass,gauge) eigenstates
      fh_complex UCha[2][2], VCha[2][2];
      // neutralino masses
      fh_real MNeu[4];
      // neutralino mixing matrices (mass,gauge) eigenstates
      fh_complex ZNeu[4][4];
      // correction to bottom Yukawa coupling
      fh_complex DeltaMB;
      // gluino mass
      fh_real MGl;
      // tree-level Higgs masses (Mh, MH, MA, MHpm)
      fh_real MHtree[4];
      // tree-level Higgs mixing parameters sin alpha
      fh_real SAtree;

      int error;
      
      BEreq::FHGetPara(error, nmfv, &MSf[0][0][0], &USf[0][0][0][0], &MASf[0][0], &UASf[0][0][0],
		       &MCha[0], &UCha[0][0], &VCha[0][0], &MNeu[0], &ZNeu[0][0], DeltaMB, MGl,
		       &MHtree[0], SAtree);

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

      int error = 1;
      BEreq::FHConstraints(error, gm2, Deltarho, 
			   MWMSSM, MWSM, SW2MSSM, SW2SM,
			   edmeTh, edmn, edmHg);
      
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
      fh_real MHiggs[4];
      fh_real DeltaMHiggs[4];
      // sine of effective Higgs mixing angle, alpha_eff
      fh_complex SAeff; 
      fh_complex DeltaSAeff; 
      // matrix needed to rotate Higgs mass matrix
      // to diagonal form
      fh_complex UHiggs[3][3];
      fh_complex DeltaUHiggs[3][3];
      // matrix of Z-factors needed to combine 
      // amplitudes involving on-shell Higgs
      fh_complex ZHiggs[3][3];
      fh_complex DeltaZHiggs[3][3];

      int error = 1;
      BEreq::FHHiggsCorr(error, &MHiggs[0], SAeff, &UHiggs[0][0], &ZHiggs[0][0]);

      error = 1;
      BEreq::FHUncertainties(error, &DeltaMHiggs[0], DeltaSAeff, &DeltaUHiggs[0][0], &DeltaZHiggs[0][0]);
      
      cout << "****** FeynHiggs Higgs Masses ******" << endl;
      for(int i = 0; i < 4; i++){
	cout << "Higgs #" << i << " with M = " << MHiggs[i] << " +/- " << DeltaMHiggs[i] << " [GeV]" << endl;
      }

      result = 0.1;
    }

  }

}
