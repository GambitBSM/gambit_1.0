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

    std::cout << "\033[1;31mCreating GreAT Manager\033[0m" << std::endl;
    TGreatManager<TGreatMCMCAlgorithmCovariance> MyManager(MyModel);
    MyManager.GetAlgorithm()->SetUpdateStatus(true);
    MyManager.SetOutputFileName("MCMC.root");
    MyManager.SetTreeName("mcmc");
    MyManager.SetNTrialLists(nTrialLists);
    MyManager.SetNTrials(nTrials);
    std::cout << "\033[1;31mRunning GreAT...\033[0m" << std::endl;
    MyManager.Run();

    delete MyModel;

    // Analyse
    TFile *file;
    file = TFile::Open("MCMC.root");
    TTree *mcmc = (TTree *) file->Get("mcmc");

    TGreatEstimator<TGreatMCMCAlgorithmCovariance>* estimator = new TGreatEstimator<TGreatMCMCAlgorithmCovariance>(mcmc);
    estimator->SetNBins(150);
    estimator->ShowStatistics();
    estimator->ComputePDF();

    std::cout.precision(5);
    std::cout.setf(std::ios::fixed);

    double confidenceInterval[2];
    double beta = .68;
    double MPV = 0.;
    for(int i = 0; i < estimator->GetNParameters(); i++)
    {
      MPV = estimator->GetPDF1D(i)->GetBinCenter(estimator->GetPDF1D(i)->GetMaximumBin());
      estimator->GetConfidenceInterval(estimator->GetPDF1D(i), beta, confidenceInterval);
      std::cout << MPV - confidenceInterval[0] << "\t" << MPV << "\t" << confidenceInterval[1] - MPV << std::endl;
    }

    Scanner::printer* primary_printer(data.printer->get_stream());
    int MPIrank = primary_printer->getRank();
    int pointID = 0;

    for(TGreatMCMCSample *sample = estimator->GetFirstIndSample(); sample != 0; sample = estimator->GetNextIndSample())
    {
      primary_printer->print(sample->GetPoint(), "Posterior", MPIrank, pointID);
      primary_printer->print(sample->GetLogProb(), "ln(Likelihood)", MPIrank, pointID);
      pointID++;
    }

    estimator->ComputeEvidence(estimator);

    delete estimator;

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