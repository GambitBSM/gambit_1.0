//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit interface to GreAT 1.0.0
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Antje Putze
///          (antje.putze@lapth.cnrs.fr)
///  \date 2015 Jan, Feb
///
///  *********************************************

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "TGreatMCMCAlgorithmCovariance.h"
#include "TGreatMCMCAlgorithmBSP.h"

scanner_plugin(GreAT, version(1, 0, 0), external_library_required)
{
  TGreatModel *MyGreATModel = new TGreatModel();

  scan_ptr<double (const std::vector<double>&)> LogLike = get_functor(get_inifile_value<std::string>("purpose", "Likelihood"));
  int dimension = get_dimension();

  bool update = get_inifile_value<bool>("update", true);

  int nTrialLists = get_inifile_value<int>("nTrialLists", 1);
  int nTrials = get_inifile_value<int>("nTrials", 1000);

  std::string outputfilename = get_inifile_value<std::string>(outputfilename, "GreAT_MCMC.root");
  std::string treename = get_inifile_value<std::string>(treename, "mcmc");
  bool multirun = get_inifile_value<bool>("multirun", false);

  plugin_constructor
  {
    std::string proposalfunction = get_inifile_value<std::string>("MCMC_propFnc");

    if(proposalfunction == "Covariance")
      TGreatManager<TGreatMCMCAlgorithmCovariance> MyGreATManager(MyGreATModel);
    else if(proposalfunction == "BSP")
      TGreatManager<TGreatMCMCAlgorithmBSP> MyGreATManager(MyGreATModel);
    else
      TGreatManager<TGreatMCMCAlgorithm> MyGreATManager(MyGreATModel);
  }

  plugin_deconstructor
  {
    delete MyGreATModel;
  }

  int plugin_main() {return 0;}
}
