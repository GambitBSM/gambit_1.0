//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  
///  Example of GAMBIT FlavBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  Martin White (martin.white@adelaide.edu.au)
///  January 2016
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Elements/MSSMskeleton.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"

using namespace FlavBit::Accessors;     // Helper functions that provide some info about the module
using namespace FlavBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(FlavBit, MSSM_spectrum, NEW_CAPABILITY, createSpectrum, const Spectrum*, (MSSM30atQ,MSSM30atMGUT))

// SLHA file for input: user can change name here
// Note that it must contain the decay table for the LEP likelihoods to function properly
// Will need to put a suitable file in FlavBit somewhere
const std::string inputFileName = "ColliderBit/data/standalone.slha";

namespace Gambit
{
  namespace FlavBit {

    // Make a GAMBIT spectrum object from an SLHA file
    void createSpectrum(const Spectrum *& outSpec){
      static Spectrum mySpec;
      mySpec = spectrum_from_SLHA<MSSMskeleton>(inputFileName);     
      outSpec = &mySpec;
    }
    
  }
}

int main()
{

  try{
    
    // Make a logging object
    std::map<std::string, std::string> loggerinfo;
    
    // Define where the logs will end up
    std::string prefix("runs/FlavBit_standalone/logs/");

    // Ensure that the above directory exists
    Utils::ensure_path_exists(prefix);
    
    // Add entries to the loggerinfo map
    loggerinfo["Core, Error"] = prefix+"core_errors.log";
    loggerinfo["Default"]     = prefix+"default.log";
    loggerinfo["Warning"]     = prefix+"warnings.log";
    loggerinfo["FlavBit, Info"] = prefix+"FlavBit_info.log";
    
    // Initialise global LogMaster object
    logger().initialise(loggerinfo);
    
    logger()<<"Running FlavBit standalone example"<<LogTags::info<<EOM;
    
    std::cout << std::endl << "My name is " << name() << std::endl;
    std::cout << " I can calculate: " << endl << iCanDo << std::endl;
    std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;

    // Set up the b2sll_LL likelihood
    // Have to resolve dependencies by hand
    // b2sll_likelihood depends on:
    //    - FlavBit_fill
    //    - b2sll_M
    //    - Debug_Cap
    //    - Debug_Cap_LL

    createSpectrum.notifyOfModel("MSSM30atQ");
    
    b2sll_likelihood.resolveDependency(&SI_FlavBit_fill);
    b2sll_likelihood.resolveDependency(&b2sll_measurements);
    b2sll_likelihood.resolveDependency(&Debug);
    b2sll_likelihood.resolveDependency(&Debug_LL);

    //SI_FlavBit_fill depends on:
    //   - BEreq Init_param
    //   - BEreq slha_adjust
    //   - BEopt SuperIso, 3.4
    //   - MSSM_spectrum
    //   - Debug_Cap
    //   - Debug_Cap_LL
    SI_FlavBit_fill.resolveDependency(&createSpectrum);
    SI_FlavBit_fill.resolveDependency(&Debug);
    SI_FlavBit_fill.resolveDependency(&Debug_LL);
    SI_FlavBit_fill.resolveBackendReq(&Backends::SuperIso_3_4::Functown::Init_param);
    SI_FlavBit_fill.resolveBackendReq(&Backends::SuperIso_3_4::Functown::slha_adjust);

    // b2sll_measurements depends on:
    //   - FlavBit_fill
    //   - BRBKstarmumu_11_25
    //   - BRBKstarmumu_25_40
    //   - BRBKstarmumu_40_60
    //   - BRBKstarmumu_60_80
    //   - BRBKstarmumu_15_17
    //   - BRBKstarmumu_17_19
    //   - Debug_Cap
    //   = Debug_Cap_LL

    b2sll_measurements.resolveDependency(&SI_FlavBit_fill);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_11_25);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_25_40);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_40_60);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_60_80);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_15_17);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_17_19);
    b2sll_measurements.resolveDependency(&Debug);
    b2sll_measurements.resolveDependency(&Debug_LL);

    // Now resolve dependencies of the BKstar mu mu measurements
    // Each depends on:
    // - FlavBit_fill
    // - Debug_Cap
    // - Debug_Cap_LL
    // Each has a BE requirement on:
    // - SI_BRBKstarmumu_CONV (from SuperIso)

    SI_BRBKstarmumu_11_25.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_11_25.resolveDependency(&Debug);
    SI_BRBKstarmumu_11_25.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_11_25.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    SI_BRBKstarmumu_25_40.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_25_40.resolveDependency(&Debug);
    SI_BRBKstarmumu_25_40.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_25_40.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    SI_BRBKstarmumu_40_60.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_40_60.resolveDependency(&Debug);
    SI_BRBKstarmumu_40_60.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_40_60.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    SI_BRBKstarmumu_60_80.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_60_80.resolveDependency(&Debug);
    SI_BRBKstarmumu_60_80.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_60_80.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    SI_BRBKstarmumu_15_17.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_15_17.resolveDependency(&Debug);
    SI_BRBKstarmumu_15_17.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_15_17.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    SI_BRBKstarmumu_17_19.resolveDependency(&SI_FlavBit_fill);
    SI_BRBKstarmumu_17_19.resolveDependency(&Debug);
    SI_BRBKstarmumu_17_19.resolveDependency(&Debug_LL);
    SI_BRBKstarmumu_17_19.resolveBackendReq(&Backends::SuperIso_3_4::Functown::SI_BRBKstarmumu_CONV);
    
    // Double-check which backend requirements have been filled with what
    std::cout << std::endl << "My function SI_FlavBit_fill  has had its backend requirement on Init_param filled by:" << std::endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::Init_param.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::Init_param.name() << std::endl;
    std::cout << std::endl << "My function SI_FlavBit_fill  has had its backend requirement on slha_adjust filled by:" << std::endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::slha_adjust.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::slha_adjust.name() << std::endl;
    
    // Double-check which dependencies have been filled with whatever (not every combination is shown)
    std::cout << std::endl << "My function b2sll_likelihood has had its dependency on FlavBit_fill filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::FlavBit_fill.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::FlavBit_fill.name() << std::endl;
    std::cout << std::endl << "My function b2sll_likelihood has had its dependency on b2sll_M filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::b2sll_M.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::b2sll_M.name() << std::endl;
    std::cout << std::endl << "My function b2sll_likelihood has had its dependency on Debug_Cap filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::Debug_Cap.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::Debug_Cap.name() << std::endl;
    std::cout << std::endl << "My function b2sll_likelihood has had its dependency on Debug_Cap_LL filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::Debug_Cap_LL.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_likelihood::Dep::Debug_Cap_LL.name() << std::endl;

    std::cout << std::endl << "My function SI_FlavBit_fill has had its dependency on MSSM_spectrum filled by:" << endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::MSSM_spectrum.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::MSSM_spectrum.name() << std::endl;
    std::cout << std::endl << "My function SI_FlavBit_fill has had its dependency on Debug_Cap filled by:" << endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::Debug_Cap.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::Debug_Cap.name() << std::endl;
    std::cout << std::endl << "My function SI_FlavBit_fill has had its dependency on Debug_Cap_LL filled by:" << endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::Debug_Cap_LL.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::Dep::Debug_Cap_LL.name() << std::endl;
    
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on FlavBit_fill filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::FlavBit_fill.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::FlavBit_fill.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_11_25 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_11_25.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_11_25.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_25_40 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_25_40.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_25_40.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_40_60 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_40_60.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_40_60.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_60_80 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_60_80.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_60_80.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_15_17 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_15_17.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_15_17.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on BRBKstarmumu_17_19 filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_17_19.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::BRBKstarmumu_17_19.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on Debug_Cap filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::Debug_Cap.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::Debug_Cap.name() << std::endl;
    std::cout << std::endl << "My function b2sll_measurements has had its dependency on Debug_Cap_LL filled by:" << endl;
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::Debug_Cap_LL.origin() << "::";
    std::cout << FlavBit::Pipes::b2sll_measurements::Dep::Debug_Cap_LL.name() << std::endl;
    
    // Start running here
    
    {
      
      // Call the initialisation functions for all backends that are in use. 
      //nulike_1_0_2_init.reset_and_calculate();
      SuperIso_3_4_init.reset_and_calculate();

      // Now call the module functions in an appropriate order
      createSpectrum.reset_and_calculate();
      Debug.reset_and_calculate();
      Debug_LL.reset_and_calculate();
      SI_FlavBit_fill.reset_and_calculate();
      SI_BRBKstarmumu_11_25.reset_and_calculate();
      SI_BRBKstarmumu_25_40.reset_and_calculate();
      SI_BRBKstarmumu_40_60.reset_and_calculate();
      SI_BRBKstarmumu_60_80.reset_and_calculate();
      SI_BRBKstarmumu_15_17.reset_and_calculate();
      SI_BRBKstarmumu_17_19.reset_and_calculate();
      b2sll_likelihood.reset_and_calculate();
     
      double loglike = b2sll_likelihood(0);
      std::cout << "b2sll log likelihood is " << loglike << std::endl;

      
    }
  }
  catch (std::exception& e)
    {
      std::cout << "FlavBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
    }
}
