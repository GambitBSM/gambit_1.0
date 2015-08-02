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
#include "gambit/EWPOBit/EWPOBit_rollcall.hpp"

namespace Gambit
{

  namespace EWPOBit
  {

    using namespace LogTags;

    // Module functions

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
