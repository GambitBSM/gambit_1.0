//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit interface to GreAT 1.0.0
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Antje Putze
///          (putze@lapth.cnrs.fr)
///  \date 2015 Nov
///
///  *********************************************

#include <vector>
#include <limits>

#include "gambit/ScannerBit/scanners/great/great.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/variadic_functions.hpp"
#include "../../../installed/GreAT/1.0.0/Manager/include/TGreatModel.h"
#include "../../../installed/GreAT/1.0.0/Manager/include/TGreatManager.h"
#include "../../../installed/GreAT/1.0.0/MCMC/include/TGreatMCMCAlgorithmCovariance.h"

// Set up the global scan data container
namespace Gambit
{
  namespace GreAT
  {
    greatScanData data;
  }
}


/// =================================================
/// Interface to ScannerBit
/// =================================================

scanner_plugin(GreAT, version(1, 0, 0))
{
  // Access GreAT and standard Gambit things
  using namespace Gambit;
  using namespace Gambit::GreAT;
  using namespace Gambit::Scanner;

  //  const static PriorTransform prior;

  // Error thrown if the following entries are not present in the inifile
  reqd_inifile_entries(); // None at the momement. Needed to be added later

  // Tell CMake to search for the GreAT library.
  reqd_libraries("great");
  reqd_headers("fparser.hh", "TGreatManager.h");

  // Code to execute when the plugin is loaded.
  plugin_constructor
  {
    std::cout << "\033[1;31mLoading GreAT plugin for ScannerBit.\033[0m" << std::endl;
    // Retrieve the external likelihood calculator
    data.likelihood_function = get_purpose(get_inifile_value<std::string>("like"));
    // Retrieve the external printer
    data.printer = &(get_printer());
  }

  int plugin_main(void)
  {
    int nPar        = get_dimension();                            // Dimensionality of the parameter space
    int nTrialLists = get_inifile_value<int> ("nTrialLists", 10); // Number of trial lists (e.g. Markov chains)
    int nTrials     = get_inifile_value<int> ("nTrials",  20000); // Number of trials (e.g. Markov steps)

    // Creating GreAT Model, i.e. parameter space and function to be minimised
    TGreatModel* MyModel = new TGreatModel();

    // Setting up the hypercube parameter space
    // MyModel->AddParameter(std::string name, std::string unit, double start_value, double min_value, double max_value);
    std::string x = "";
    for(int i = 0; i < nPar; i++)
    {
      x = "x" + std::to_string(i+1);
      MyModel->AddParameter(x, "", 0.5, 0., 1.);
    }

    // Setting up the logarithmic likelihoodfunction
    // MyModel->SetLogLikelihoodFunction(double (*functionpointer)(TGreatPoint&));
    MyModel->SetLogLikelihoodFunction(LogLikelihoodFunction);

    // Setting up the GreAT Manager
    // TGreatManager<typename T> MyManager(TGreatModel*);
    std::cout << "\033[1;31mCreating GreAT Manager\033[0m" << std::endl;
    TGreatManager<TGreatMCMCAlgorithmCovariance> MyManager(MyModel);
    // Tell the algorithm to use former points to update its prior
    MyManager.GetAlgorithm()->SetUpdateStatus(true);
    MyManager.SetOutputFileName("MCMC.root");
    MyManager.SetTreeName("mcmc");
    // Set number of trials (steps) and triallists (chains)
    MyManager.SetNTrialLists(nTrialLists);
    MyManager.SetNTrials(nTrials);
    // Run GreAT
    std::cout << "\033[1;31mRunning GreAT...\033[0m" << std::endl;
    MyManager.Run();

    // Analyse
    // 1) Fetch the ROOT file
    TFile *file;
    file = TFile::Open(MyManager.GetOutputFileName().c_str());
    TTree *mcmc = (TTree *) file->Get("mcmc");

    // 2) Define the estimator
    // TGreatEstimator<typename T>(TTree*)
    TGreatEstimator<TGreatMCMCAlgorithmCovariance>* estimator = new TGreatEstimator<TGreatMCMCAlgorithmCovariance>(mcmc);
    // Show the scan statistics
    estimator->ShowStatistics();

    // Setup auxilliary stream. It is only needed by the master process
    static const int MPIrank = get_printer().get_stream()->getRank(); // MPI rank of this process
    if(MPIrank == 0)
    {
      Gambit::Options ind_samples_options   = get_inifile_node("aux_printer_ind_samples_options");

      // Options to desynchronise print streams from the main Gambit iterations. This allows for random access writing, or writing of global scan data.
      ind_samples_options.setValue("synchronised", false);

      std::cout << "\033[1;31mWriting points...\033[0m" << std::endl;
      // Initialise auxiliary print streams
      data.printer -> new_stream("ind_samples", ind_samples_options);

      Scanner::printer* ind_samples_printer(data.printer->get_stream("ind_samples"));
      static const int MPIrank = data.likelihood_function->getRank();
      int pointID = 0;//data.likelihood_function->getPtID();

      for(TGreatMCMCSample *sample = estimator->GetFirstIndSample(); sample != 0; sample = estimator->GetNextIndSample())
      {
        ind_samples_printer->print(sample->GetPoint(), "Unit cube parameters", MPIrank, pointID);
        ind_samples_printer->print(sample->GetLogProb(), "ln(Likelihood)", MPIrank, pointID);
        pointID++;
      }
    }

    std::cout << "\033[1;31mGreAT finished successfully!\033[0m" << std::endl;
    return 0;
  }
}

namespace Gambit
{
  namespace GreAT
  {
    double LogLikelihoodFunction(TGreatPoint& point)
    {
      std::vector<double> parameter_vector = point.GetPoint();

      return data.likelihood_function(parameter_vector);
    }
  }
}