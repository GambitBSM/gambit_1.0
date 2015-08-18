//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module SpecBit
///
///  SpecBit module functions related to the
///  Standard Model.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///  
///  *********************************************

#include <string>
#include <sstream>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"


namespace Gambit
{

  namespace SpecBit
  {
    using namespace LogTags;


    /// @{ Gambit module functions 
    //  =======================================================================
    //  These are wrapped up in Gambit functor objects according to the
    //  instructions in the rollcall header


    /// Higgs masses and mixings with theoretical uncertainties
    void FH_HiggsMasses(fh_HiggsMassObs &result) 
    {
      using namespace Pipes::FH_HiggsMasses;

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
      for(int i = 0; i < 4; i++)
      {
        HiggsMassObs.MH[i] = MHiggs(i+1);
        HiggsMassObs.deltaMH[i] = DeltaMHiggs(i+1);
      }
      HiggsMassObs.SinAlphaEff = SAeff; 
      HiggsMassObs.deltaSinAlphaEff = DeltaSAeff; 
      for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
          HiggsMassObs.UH[i][j] = UHiggs(i+1,j+1);
          HiggsMassObs.deltaUH[i][j] = DeltaUHiggs(i+1,j+1);
          HiggsMassObs.ZH[i][j] = ZHiggs(i+1,j+1);
          HiggsMassObs.deltaZH[i][j] = DeltaZHiggs(i+1,j+1);
        }

      result = HiggsMassObs;
    }


    /// FeynHiggs Higgs couplings
    void FH_Couplings(fh_Couplings &result) 
    {
      using namespace Pipes::FH_Couplings;
      
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
      Couplings.calculator = BEreq::FHCouplings.origin();
      Couplings.calculator_version = BEreq::FHCouplings.version();

      result = Couplings;
    }

    /// @} End Gambit module functions

  } // end namespace SpecBit
} // end namespace Gambit

