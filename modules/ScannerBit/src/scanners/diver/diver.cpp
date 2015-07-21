//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit interface to Diver 1.0.0
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 June
///
///  *********************************************

#include <vector>
#include <limits>

#include "gambit/ScannerBit/scanners/diver/diver.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/variadic_functions.hpp"

/// =================================================
/// Interface to ScannerBit
/// =================================================

scanner_plugin(Diver, version(1, 0, 0))
{

  // Access Diver stuff and standard Gambit things
  using namespace Gambit;
  using namespace Gambit::Diver;

  // Error thrown if the following entries are not present in the inifile
  reqd_inifile_entries("NP");
  
  // Tell cmake to search for the diver library.
  reqd_libraries("diver");
  
  // Set up the scan data container
  diverScanData data;

  // Code to execute when the plugin is loaded.
  plugin_constructor
  {
    std::cout << "Loading Diver differential evolution plugin for ScannerBit." << std::endl;
    // Retrieve the external likelihood calculator
    data.likelihood_function = get_purpose(get_inifile_value<std::string>("like"));
    // Retrieve the external printer
    data.printer = &(get_printer());
    // Initialise the print stream
    // Ben: there appears to be no need to do this unless you really want to for some reason.
    // You can just sent your extra data straight to the primary printer when you are adding
    // it at the same time the likelihood is evaluated, don't need to create an auxilliary one.
    //data.printer->new_stream("txt",get_inifile_node("aux_printer_txt_options"));
  }
  
  int plugin_main (void)
  {

    // Simple Diver run parameters
    int    nPar                = get_dimension();                                         // Dimensionality of the parameter space
    str    root                = get_inifile_value<str>   ("path");                       // Path to save samples, resume files, etc 
    int    nDerived            =                                                 0;       // Number of derived quantities to output (GAMBIT printers handle these).
    int    nDiscrete           = get_inifile_value<int>   ("nDiscrete",          0);      // Number of parameters that are to be treated as discrete
    bool   partitionDiscrete   = get_inifile_value<bool>  ("partitionDiscrete",  false);  // Split the population evenly amongst discrete parameters and evolve separately
    int    maxciv              = get_inifile_value<int>   ("maxciv",             10);     // Maximum number of civilisations
    int    maxgen              = get_inifile_value<int>   ("maxgen",             200);    // Maximum number of generations per civilisation
    int    NP                  = get_inifile_value<int>   ("NP");                         // Population size (individuals per generation)
    double Cr                  = get_inifile_value<double>("Cr",                 0.9);    // Crossover factor
    double lambda              = get_inifile_value<double>("lambda",             0.8);    // Mixing factor between best and rand/current
    bool   current             = get_inifile_value<bool>  ("current",            false);  // Use current vector for mutation
    bool   expon               = get_inifile_value<bool>  ("expon",              false);  // Use exponential crossover
    int    bndry               = get_inifile_value<int>   ("bndry",              3);      // Boundary constraint: 1=brick wall, 2=random re-initialization, 3=reflection
    bool   jDE                 = get_inifile_value<bool>  ("jDE",                true);   // Use self-adaptive choices for rand/1/bin parameters as per Brest et al 2006
    bool   lambdajDE           = get_inifile_value<bool>  ("lambdajDE",          true);   // Use self-adaptive rand-to-best/1/bin parameters; based on Brest et al 2006
    double convthresh          = get_inifile_value<double>("convthresh",         1.e-3);  // Threshold for gen-level convergence: smoothed fractional improvement in the mean population value
    int    convsteps           = get_inifile_value<int>   ("convsteps",          10);     // Number of steps to smooth over when checking convergence
    bool   removeDuplicates    = get_inifile_value<bool>  ("removeDuplicates",   true);   // Weed out duplicate vectors within a single generation
    bool   doBayesian          =                                                 false;   // Calculate approximate log evidence and posterior weightings
    double maxNodePop          =                                                 1.9;     // Population at which node is partitioned in binary space partitioning for posterior
    double Ztolerance          =                                                 0.1;     // Input tolerance in log-evidence
    int    savecount           = get_inifile_value<int>   ("savecount",          1);      // Save progress every savecount generations
    bool   resume              = get_inifile_value<bool>  ("resume",             false);  // Restart from a previous run
    bool   native_output       = get_inifile_value<bool>  ("full_native_output", false);  // Output .raw file (Diver native sample output format)
    int    verbose             = get_inifile_value<int>   ("verbosity",          0);      // Output verbosity: 0=only error messages, 1=basic info, 2=civ-level info, 3+=population info
    double (*prior)(const double[], const int, void*&) =                         NULL;    // Pointer to prior function, only used if doBayesian = true.                          
    void*  context             = &data;                                                   // Pointer to GAMBIT likelihood function and printers, passed through to objective function. 

    // Copy the contents of root to a char array.
    char path[root.length()+1];
    strcpy(path, root.c_str());

    // Unit cube boundaries
    double lowerbounds[nPar];                                                             // Lower boundaries of parameter space to scan
    double upperbounds[nPar];                                                             // Upper boundaries of parameter space to scan
    for (int i = 0; i < nPar; i++)
    {
      lowerbounds[i] = 0.0;
      upperbounds[i] = 1.0;
    }

    // Scale factors
    std::vector<double> Fvec = get_inifile_value<std::vector<double> >("F", initVector<double>(0.6));    
    int nF = Fvec.size();                                                                 // Size of the array indicating scale factors
    double F[nF];                                                                         // Scale factor(s).
    std::copy(Fvec.begin(), Fvec.end(), F);

    // Discrete parameters
    int discrete[nDiscrete];                                                              // Indices of discrete parameters, Fortran style, i.e. starting at 1!!
    for (int i = 0; i < nDiscrete; i++)
    {
      discrete[i] = 0; //TODO Needs to be set automatically somehow?  Not yet sure how to deal with discrete parameters.
    }

    // Run Diver
    std::cout << "Starting Diver run..." << std::endl;
    cdiver(&objective, nPar, lowerbounds, upperbounds, path, nDerived, nDiscrete, 
           discrete, partitionDiscrete, maxciv, maxgen, NP, nF, F, Cr, lambda, current,
           expon, bndry, jDE, lambdajDE, convthresh, convsteps, removeDuplicates, doBayesian,
           prior, maxNodePop, Ztolerance, savecount, resume, native_output, context, verbose);
    std::cout << "Diver run finished!" << std::endl;
    return 0;

  }

}

/// =================================================
/// Function definitions
/// =================================================

namespace Gambit
{
   
  namespace Diver
  {

    //Function to be minimized.  Corresponds to -ln(Likelihood).  Redirects to the target of context pointer.
    double objective(double params[], const int param_dim, int &fcall, bool &quit, const bool validvector, void*& context)
    {
      // Return the worst possible likelihood if the point is outside the prior box.
      if (not validvector) return std::numeric_limits<double>::max();

      // Put the parameters into a C++ vector
      std::vector<double> param_vec(params, params + param_dim);

      // Retrieve the likelihood function from the context pointer and call it
      diverScanData* data = static_cast<diverScanData*>(context);
      double lnlike = data->likelihood_function(param_vec);

      // Print the likelihood, unit cube parameters, thread number and point ID
      Scanner::printer* primary_printer(data->printer->get_stream()); // Gets primary printer by default

      int MPIrank = primary_printer->getRank(); 
      int pointID = data->likelihood_function->getPtID();

      primary_printer->print(lnlike,    "Ln(likelihood)",       -4, MPIrank, pointID);
      primary_printer->print(param_vec, "Unit cube parameters", -6, MPIrank, pointID);
      primary_printer->print(MPIrank,   "MPIrank",              -7, MPIrank, pointID);
      primary_printer->print(pointID,   "pointID",              -8, MPIrank, pointID);

      // Increment the number of function calls, tell Diver to continue and return the likelihood
      fcall += 1;
      quit = false;
      return -lnlike;
      
    }

  }

}

