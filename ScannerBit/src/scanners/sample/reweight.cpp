//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Toy reweighting sampler to demo functioning
///  of 'reader' classes, which allow data to
///  be read in from previous output.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2016 Mar
///
///  *********************************************

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <sstream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/model_parameters.hpp"

using namespace Gambit;

// Helper stuct
struct reweightScanData
{
  Scanner::scan_ptr<double (const std::vector<double>&)> likelihood_function;
  Scanner::printer_interface* printer;
  Printers::BaseBaseReader* reader;
};

scanner_plugin(reweight, version(1, 0, 0))
{
  reqd_inifile_entries("old_LogLike"); // label for loglike entry in info file

  int plugin_main()
  {
    std::cout << "Running demo 'reweight' plugin for ScannerBit." << std::endl;

    // Retrieve the external likelihood calculator
    scan_ptr<double (const std::vector<double>&)> LogLike;
    LogLike = get_purpose(get_inifile_value<std::string>("LogLike"));

    // Get label that the input data file uses for the LogLikelihood entries
    std::string old_loglike_label = get_inifile_value<std::string>("old_LogLike");

    // Get options for setting up the reader (these live in the inifile under:
    // Scanners:
    //  scanners:
    //    scannername:
    //      reader 
    Gambit::Options reader_options = get_inifile_node("reader");
    // Initialise reader object
    get_printer().new_reader("old_points",reader_options);
    // Store it separately for convenience
    Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");

    // Loop over the old points
    std::pair<uint,ulong> current_point = reader->get_next_point();
    while(not reader->eoi()); // while not end of input
    {
      // Get the ID information for the current point
      uint  MPIrank = current_point.first;
      ulong pointID = current_point.second;
 
      // Get the previously computed likelihood value for this point
      double old_LogL;
      reader->retrieve(old_loglike_label, MPIrank, pointID, old_LogL) ;

      // Extract the model parameters
      ModelParameters params;
      std::string modelname = "NormalDist"; // Get this somehow...
      reader->retrieve(modelname, MPIrank, pointID, params);

      /// TODO: somehow need to feed these parameters back into Gambit.
      /// This is currently pretty tricky, because:
      ///  1. We work in the unit hypercube, so we need to disable that
      ///     and disable the prior system (or use it cleverly somehow)
      ///  2. The Scanner doesn't know anything about individual models
      ///     right now, so we need to let it get the model names and
      ///     and iterate over them, or something.
      ///  3. The above need to be coordinated in some tricky way so
      ///     that the extracted parameter values end up back in
      ///     ModelParameters objects attached to 'primary_parameters'
      ///     functors.
      ///
      ///  Possible sneaky solution:
      ///     Just iterate through points here, and then somehow send
      ///     the 'reader' object to a special 'prior' object which
      ///     extracts the parameters?
      ///     Need to figure out again how the parameters actually
      ///     get into functors... this is kind of the Gambit likelihood
      ///     containers job. Makes it hard for scannerbit to fiddle
      ///     with this independently.
       
      /// For now just output to screen so we can see if the extraction
      /// is working:
      std::cout << "Retrieved parameters for model '"<<modelname<<"' at point:" << std::endl;
      std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
      const std::vector<std::string> names = params.getKeys();
      for(std::vector<std::string>::const_iterator
          it = names.begin();
          it!= names.end(); ++it)
      {
        std::cout << "    " << *it << ": " << params[*it] << std::endl;
      }

      // Somehow call the likelihood function to compute the new component
      double partial_logL = 0; //LogLike(vec);

      // Combine with the old logL value and output
      double combined_logL = old_LogL + partial_logL;
      get_printer().get_stream()->print( combined_logL, "reweighted_LogL", MPIrank, pointID);

      /// TODO: There are currently some issues to solve regarding the output
      ///  For asciiPrinter it is kind of ok to just re-output everything, it will have
      ///  to go into a new file anyway, and analysis tools will have to worry about
      ///  combining the data for new and old observables
      ///  For HDF5 printer it is harder. Many computed observables will *already exist* 
      ///  in the output file, including e.g. the ModelParameters, so will need to prevent 
      ///  them getting printed a second time. 
      ///  Might have to add a switch that just prevents the HDF5
      ///  printer from writing into existing datasets, so can only add new ones, and
      ///  all other print statements just get ignored.
      ///
      ///  In the future would be nice if observables could be reconstructed from the
      ///  output file, but that is a big job, need to automatically create functors
      ///  for them which provide the capabilities they are supposed to correspond to,
      ///  which is possible since this information is stored in the labels, but
      ///  would take quite a bit of setting up I think...
      ///  Would need the reader to provide virtual functions for retrieving all the
      ///  observable metadata from the output files.

      /// Go to next point
      reader->get_next_point();
    } 

    return 0;
  }
}
