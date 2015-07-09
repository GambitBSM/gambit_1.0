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

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/EWPOBit/EWPOBit_types.hpp"
#include "gambit/EWPOBit/EWPOBit_rollcall.hpp"

namespace Gambit
{

  namespace EWPOBit
  {

    using namespace LogTags;

    // Module functions

    void FH_MSSMMasses(fh_MSSMMassObs &result) 
    {
      using namespace Pipes::FH_MSSMMasses;

      cout << "****** calling FH_MSSMMasses ******" << endl;
   
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

      int error = 1;
      BEreq::FHGetPara(error, nmfv, MSf, USf, MASf, UASf,
		       MCha, UCha, VCha, MNeu, ZNeu, 
		       DeltaMB, MGl, MHtree, SAtree);

      fh_MSSMMassObs MassObs; 
      for(int i = 0; i < 2; i++)
	for(int j = 0; j < 5; j++)
	  for(int k = 0; k < 3; k++)
	    MassObs.MSf[i][j][k] = MSf(i+1,j+1,k+1);
      for(int i = 0; i < 2; i++)
	for(int j = 0; j < 2; j++)
	  for(int k = 0; k < 5; k++)
	    for(int l = 0; l < 3; l++)
	      MassObs.USf[i][j][k][l] = USf(i+1,j+1,k+1,l+1);
      for(int i = 0; i < 6; i++)
	for(int j = 0; j < 5; j++)
	  MassObs.MASf[i][j] = MASf(i+1,j+1);
      for(int i = 0; i < 36; i++)
	for(int j = 0; j < 5; j++)
	  MassObs.UASf[i][j] = UASf(i+1,j+1);
      for(int i = 0; i < 2; i++)
	MassObs.MCha[i] = MCha(i+1);
      for(int i = 0; i < 4; i++){
	MassObs.UCha[i] = UCha(i+1);
	MassObs.VCha[i] = VCha(i+1);
      }
      for(int i = 0; i < 4; i++)
	MassObs.MNeu[i] = MNeu(i+1);
      for(int i = 0; i < 16; i++)
	MassObs.ZNeu[i] = ZNeu(i+1);
      MassObs.deltaMB = DeltaMB;
      MassObs.MGl = MGl;
      for(int i = 0; i < 4; i++)
	MassObs.MHtree[i] = MHtree(i+1);
      MassObs.SinAlphatree = SAtree;

      result = MassObs; 
    }

    void FH_PrecisionObs(fh_PrecisionObs &result) 
    {
      using namespace Pipes::FH_PrecisionObs;

      cout << "****** calling FH_PrecisionObs ******" << endl;

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

      fh_PrecisionObs PrecisionObs;
      PrecisionObs.gmu2 = gm2;       
      PrecisionObs.deltaRho = Deltarho;   
      PrecisionObs.MW_MSSM = MWMSSM;     
      PrecisionObs.MW_SM = MWSM;      
      PrecisionObs.sinW2_MSSM = SW2MSSM; 
      PrecisionObs.sinW2_SM = SW2SM;  
      PrecisionObs.edm_ele = edmeTh;    
      PrecisionObs.edm_neu = edmn;    
      PrecisionObs.edm_Hg = edmHg;     
      PrecisionObs.ccb = ccb;           

      result = PrecisionObs;
    }

    void FH_HiggsMasses(fh_HiggsMassObs &result) 
    {
      using namespace Pipes::FH_HiggsMasses;

      cout << "****** calling FH_HiggsMasses ******" << endl;

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

      fh_HiggsMassObs HiggsMassObs;
      for(int i = 0; i < 4; i++){
	HiggsMassObs.MH[i] = MHiggs(i+1);
	HiggsMassObs.deltaMH[i] = DeltaMHiggs(i+1);
      }
      HiggsMassObs.SinAlphaEff = SAeff; 
      HiggsMassObs.deltaSinAlphaEff = DeltaSAeff; 
      for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++){
	  HiggsMassObs.UH[i][j] = UHiggs(i+1,j+1);
	  HiggsMassObs.deltaUH[i][j] = DeltaUHiggs(i+1,j+1);
	  HiggsMassObs.ZH[i][j] = ZHiggs(i+1,j+1);
	  HiggsMassObs.deltaZH[i][j] = DeltaZHiggs(i+1,j+1);
	}

      result = HiggsMassObs;
    }

    void FH_Couplings(fh_Couplings &result) 
    {
      using namespace Pipes::FH_Couplings;
      
      cout << "****** calling FH_Couplings ******" << endl;

      // what to use for internal Higgs mixing
      // (ex. in couplings)
      // (default = 1)
      // 0 - no mixing
      // 1 - UHiggs
      // 2 - ZHiggs
      int uzint = 2;
      // what to use for external Higgs mixing
      // (ex. in decays)
      // (default = 2)
      // 0 - no mixing
      // 1 - UHiggs
      // 2 - ZHiggs
      int uzext = 2; 
      // which effective bottom mass to use
      int mfeff = 1;

      int error = 1;
      BEreq::FHSelectUZ(error, uzint, uzext, mfeff);

      Farray<fh_complex, 1,681> couplings;     // MSSM Higgs couplings
      Farray<fh_complex, 1,231> couplings_sm;  // SM Higgs couplings
      Farray<fh_real, 1,978> gammas;           // Higgs decay widths and BR's (MSSM)
      Farray<fh_real, 1,250> gammas_sm;        // Higgs decay widths and BR's (SM)
      int fast = 1;  // include off-diagonal fermion decays? (1 = no)

      error = 1;
      BEreq::FHCouplings(error, couplings, couplings_sm,
			 gammas, gammas_sm, fast);

      fh_Couplings Couplings;
      for(int i = 0; i < 681; i++) Couplings.couplings[i] = couplings(i+1);
      for(int i = 0; i < 231; i++) Couplings.couplings_sm[i] = couplings_sm(i+1);
      for(int i = 0; i < 978; i++) Couplings.gammas[i] = gammas(i+1);
      for(int i = 0; i < 250; i++) Couplings.gammas_sm[i] = gammas_sm(i+1);

      result = Couplings;
    }

     
     void SP_PrecisionObs(double &result) 
    {
      using namespace Pipes::SP_PrecisionObs;
      int error = 0;
      Farray<Fdouble,1,35> SM_Obs;
      Farray<Fdouble,1,35> MSSM_Obs;
      
         
      BEreq::CalcObs_SUSYPOPE(error, SM_Obs, MSSM_Obs);
      if(error != 0)
         {
            std::cout << "something went wrong" << std::endl;
         }
      else 
         {
            std::cout << " MW in SM = " << SM_Obs(1) << std::endl;
            std::cout << " MW in MSSM = " << MSSM_Obs(1) << std::endl;
            
         }
      result = 0.1;
      return;

    }
     
  }
}
