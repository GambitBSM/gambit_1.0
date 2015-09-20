//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT DarkBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Jan, Feb
///
///  \author Ben Farmer
///  \date 2014 Dec
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/SpecBit/SpecBit_rollcall.hpp"

// Only needed here
#include "gambit/Utils/util_functions.hpp"

using namespace DarkBit::Functown;     // Functors wrapping the module's actual module functions
using namespace DarkBit::Accessors;    // Helper functions that provide some info about the module
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions


int main()
{

  std::cout << std::endl << "Start DarkBit standalone example" << std::endl;
  std::cout << "----------" << std::endl;


  //------- Initialise (or disable) logging -------------

  std::map<std::string, std::string> loggerinfo;
  std::string prefix("runs/DarkBit_standalone/logs/");
  Utils::ensure_path_exists(prefix);

  loggerinfo["Core, Error"] = prefix+"core_errors.log";
  loggerinfo["Default"]     = prefix+"default.log";
  loggerinfo["Warning"]     = prefix+"warnings.log";
  loggerinfo["DarkBit, Info"] = prefix+"DarkBit_info.log";

  logger().initialise(loggerinfo);

  model_warning().set_fatal(true);
  DarkBit::DarkBit_error().set_fatal(false);


  logger()<<"Running DarkBit standalone example"<<LogTags::info<<EOM;


  //-----------------------------------------------------

  // Retrieve a raw pointer to the parameter set of each primary model to be scanned, for manually setting parameter values
  ModelParameters* SingletDM_parameters = Models::SingletDM::Functown::primary_parameters.getcontentsPtr();

//  // Resolve backend requirements 'by hand'.  Must be done before dependencies are resolved.
//  function_pointer_retriever.resolveBackendReq(&Backends::LibFortran_1_0::Functown::externalFunction);
//
//  //-----------------------------------------------------
//
//  // Notify any module functions that care of the model(s) being scanned.
//  // 'Care' means where they depend on model parameters directly, or have dependencies or backend requirements that are
//  // conditional on the model being analysed. 
//  Models::SingletDM::Functown::SingletDM_parameters.notifyOfModel("SingletDM");
//  local_xsection.notifyOfModel("CMSSM_demo");
//
//  //-----------------------------------------------------
//
//  // Resolve dependencies 'by hand'.  The ordering is unimportant, but *something* in the chain must 
//  // have one of its dependencies filled by Models::PRI::Functown::primary_parameters, where PRI is a primary model.
//  Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&Models::CMSSM_demo::Functown::primary_parameters);
//  Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&id_dummy);
//  local_xsection.resolveDependency(&Models::CMSSM_demo::Functown::MSSM_demo_parameters);
//  nevents_dbl.resolveDependency(&local_xsection);
//  nevents_int.resolveDependency(&nevents_dbl);

  SingletDM_parameters->setValue("lambda_hS", 1e-3);
  SingletDM_parameters->setValue("mS", 100.);

  DD_couplings_SingletDM.notifyOfModel("SingletDM");
  DD_couplings_SingletDM.resolveDependency(&Models::SingletDM::Functown::primary_parameters);
//  SpecBit::get_SingletDM_spectrum.resolveDependency(&SpecBit::get_SMINPUTS);

//  // Call the initialisation functions for all backends that are in use. 
//  LibFortran_1_0_init.reset_and_calculate();
//
//  // Call the actual module functions, taking care to calculate in the order implied by how the dependencies have been filled;
//  // i.e. calculate quantities that other quantities depend on first.
//  id_dummy.reset_and_calculate();
//  Models::CMSSM_demo::Functown::MSSM_demo_parameters.reset_and_calculate();
//  local_xsection.reset_and_calculate();
//
//  double r1 = nevents_dbl(0);
//  int r2 = nevents_int(0);

  return 0;
}
