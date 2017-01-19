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

#include "gambit/ScannerBit/objective_plugin.hpp"
#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/model_parameters.hpp"
#include "gambit/Utils/util_functions.hpp"

using namespace Gambit;

// Deprecated!

// Helper stuct
//struct reweightScanData
//{
//  Scanner::scan_ptr<double (const std::vector<double>&)> likelihood_function;
//  Scanner::printer_interface* printer;
//  Printers::BaseBaseReader* reader;
//};

// // The prior transformation used by the 'reweight' scanner plugin
// // This is used instead of a normal prior, to transfer parameter
// // values out of the old output into the ModelParameters
// objective_plugin(reweight_prior, version(1, 0, 0))
// {
//   std::map<std::string,std::vector<std::string>> req_models; // All the required model+parameter names
//   std::map<std::string,std::map<std::string,std::string>> longname; // Retrieve the "model::parameter" version of the name
// 
//   plugin_constructor
//   {
//       std::cout << "Constructing prior plugin for reweight scanner" << std::endl;
//       std::vector<std::string> keys = get_keys();
//       //set_dimension(keys.size());
//       
//       // Pull the keys apart into model-name, parameter-name pairs
//       std::cout << "Number of parameters to be retrieved from previous output: "<< keys.size() <<std::endl;
//       for(auto it=keys.begin(); it!=keys.end(); ++it)
//       {
//          std::cout << "   " << *it << std::endl;
//          std::vector<std::string> splitkey = Utils::delimiterSplit(*it, "::");
//          std::string model = splitkey[0];
//          std::string par   = splitkey[1];
//          req_models[model].push_back(par);
//          longname[model][par] = *it;
//       }   
//    }
// 
//   // The transform function
//   // Takes in the vector of unit hypercube parameters and outputs the physical parameters
//   // Here we don't actually need the hypercube parameters, and instead just load the physical
//   // parameters from the output file supplied by the user. Interaction with that file takes
//   // place in the "reweight" plugin; here we just access the parameters via the abstract
//   // 'reader' object.
//   void plugin_main(const std::vector<double> &unitpars, std::unordered_map<std::string, double> &outputMap)
//   {
//     std::cout << "Running prior transform plugin for 'reweight' scanner" << std::endl;
// 
//       // Get the reader object
//     Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");
// 
//     // Extract the model parameters
//     for(auto it=req_models.begin(); it!=req_models.end(); ++it)
//     {
//       ModelParameters modelparameters;
//       std::string model = it->first;
//       reader->retrieve(modelparameters, model);
// 
//       /// @{ Debugging; show what was actually retrieved from the output file
//       std::pair<unsigned int,unsigned long> current_point = reader->get_current_point();
//       unsigned int  MPIrank = current_point.first;
//       unsigned long pointID = current_point.second;
//       std::cout << "Retrieved parameters for model '"<<model<<"' at point:" << std::endl;
//       std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
//       const std::vector<std::string> names = modelparameters.getKeys();
//       for(std::vector<std::string>::const_iterator
//           it = names.begin();
//           it!= names.end(); ++it)
//       {
//         std::cout << "    " << *it << " : " << modelparameters[*it] << std::endl;
//       }
//       /// @}
// 
//       // Check that all the required parameters were retrieved
//       // Could actually do this in the constructor for the scanner plugin, would be better, but a little more complicated. TODO: do this later.
//       std::vector<std::string> req_pars = it->second;
//       std::vector<std::string> retrieved_pars = modelparameters.getKeys();
//       for(auto jt = req_pars.begin(); jt != req_pars.end(); ++jt)
//       {
//         std::string par = *jt;
//         if(std::find(retrieved_pars.begin(), retrieved_pars.end(), par)
//             == retrieved_pars.end())
//         {
//            std::ostringstream err;
//            err << "Error! asciiReader did not retrieve the required paramater '"<<par<<"' for the model '"<<model<<"' from the supplied data file! Please check that this parameter indeed exists in that file." << std::endl;
//            scan_error().raise(LOCAL_INFO,err.str());
//         }
// 
//         // If it was found, add it to the return map
//         outputMap[ longname[model][par] ] = modelparameters[par];
//       }
//     }
//  
//     /// @{ More debugging: show what we are returning to the likelihood container
//     std::cout << "Final transformed parameters:" << std::endl;
//     for(auto it=outputMap.begin(); it!=outputMap.end(); ++it)
//     {
//       std::cout << "    " << it->first << " : " << it->second << std::endl;
//     }
//     /// @}
// 
//     std::cout << "Finished prior transform for 'reweight' scanner" << std::endl;
//   }
// 
//   // Not sure what this does. Might be the likelihood container or something? Greg?
//   double plugin_main(const std::vector<double>&)
//   {
//       return 0.0;
//   }
// 
// }

// The reweigher Scanner plugin
scanner_plugin(reweight, version(1, 0, 0))
{
  reqd_inifile_entries("old_LogLike"); // label for loglike entry in info file

  /// The constructor to run when the MultiNest plugin is loaded.
  plugin_constructor
  {
     std::cout << "Initialising demo 'reweight' plugin for ScannerBit..." << std::endl;

    // Get options for setting up the reader (these live in the inifile under:
    // Scanners:
    //  scanners:
    //    scannername:
    //      reader 
    Gambit::Options reader_options = get_inifile_node("reader");
    // Initialise reader object
    get_printer().new_reader("old_points",reader_options);
  }

  int plugin_main()
  {
    std::cout << "running demo 'reweight' plugin for scannerbit." << std::endl;

    // Retrieve the external likelihood calculator
    like_ptr LogLike;
    LogLike = get_purpose(get_inifile_value<std::string>("LogLike"));

    // Storage for names of models and parameters.
    std::map<std::string,std::vector<std::string>> req_models; // All the required model+parameter names
    std::map<std::string,std::map<std::string,std::string>> longname; // Retrieve the "model::parameter" version of the name
  
    // Retrieve parameter and model names
    std::cout << "Constructing prior plugin for reweight scanner" << std::endl;
    std::vector<std::string> keys = LogLike->getPrior().getParameters(); // use to use get_keys() in the objective (prior) plugin;
    //set_dimension(keys.size());
    
    // Pull the keys apart into model-name, parameter-name pairs
    std::cout << "Number of parameters to be retrieved from previous output: "<< keys.size() <<std::endl;
    for(auto it=keys.begin(); it!=keys.end(); ++it)
    {
       std::cout << "   " << *it << std::endl;
       std::vector<std::string> splitkey = Utils::delimiterSplit(*it, "::");
       std::string model = splitkey[0];
       std::string par   = splitkey[1];
       req_models[model].push_back(par);
       longname[model][par] = *it;
    }   


    // Create the unit hypercube
    // We aren't going to use it, but the LogLike calculator
    // requires it anyway.
    int dims = get_dimension();
    std::vector<double> unitcube(dims);

    // Get label that the input data file uses for the LogLikelihood entries
    std::string old_loglike_label = get_inifile_value<std::string>("old_LogLike");

    // Retrieve the reader object
    Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");

    // Loop over the old points
    std::pair<unsigned int,unsigned long> current_point = reader->get_next_point();
    int loopi = 0; // DEBUG
    std::cout << "Starting loop over old points" << std::endl;
    while(not reader->eoi() and not loopi>100000) // while not end of input
    {
      // DEBUG
      std::cout << "loop "<<loopi<<std::endl;
      loopi++;

      // NOTE: don't need this anymore, reader can figure it out automatically
      // Get the ID information for the current point
      //unsigned int  MPIrank = current_point.first;
      //unsigned long pointID = current_point.second;
 
      // Get the previously computed likelihood value for this point
      double old_LogL;
      bool   is_valid;
      is_valid = reader->retrieve(old_LogL, old_loglike_label);

      // If no valid likelihood existed for the old point, just skip it
      // (perhaps not desired behaviour for other "post-processing" scanners)
      if(not is_valid)
      {
         continue;
      }

      // Extract the model parameters
      // ModelParameters params;
      // std::string modelname = "NormalDist"; // Get this somehow...
      // reader->retrieve(params, modelname);

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
      // std::pair<unsigned int,unsigned long> current_point = reader->get_current_point();
      // unsigned int  MPIrank = current_point.first;
      // unsigned long pointID = current_point.second;
      // std::cout << "Retrieved parameters for model '"<<modelname<<"' at point:" << std::endl;
      // std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
      // const std::vector<std::string> names = params.getKeys();
      // for(std::vector<std::string>::const_iterator
      //     it = names.begin();
      //     it!= names.end(); ++it)
      // {
      //   std::cout << "    " << *it << ": " << params[*it] << std::endl;
      // }

      /// @{ Retrieve the old parameter values from previous output

      std::cout << "Retrieving old parameter values for 'reweight' scanner" << std::endl;

      // Get the reader object
      Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");

      // Storage for retrieved parameters
      std::unordered_map<std::string, double> outputMap;

      // Extract the model parameters
      for(auto it=req_models.begin(); it!=req_models.end(); ++it)
      {
        ModelParameters modelparameters;
        std::string model = it->first;
        reader->retrieve(modelparameters, model);
  
        /// @{ Debugging; show what was actually retrieved from the output file
        std::pair<unsigned int,unsigned long> current_point = reader->get_current_point();
        unsigned int  MPIrank = current_point.first;
        unsigned long pointID = current_point.second;
        std::cout << "Retrieved parameters for model '"<<model<<"' at point:" << std::endl;
        std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
        const std::vector<std::string> names = modelparameters.getKeys();
        for(std::vector<std::string>::const_iterator
            kt = names.begin();
            kt!= names.end(); ++kt)
        {
          std::cout << "    " << *kt << " : " << modelparameters[*kt] << std::endl;
        }
        /// @}
  
        // Check that all the required parameters were retrieved
        // Could actually do this in the constructor for the scanner plugin, would be better, but a little more complicated. TODO: do this later.
        std::vector<std::string> req_pars = it->second;
        std::vector<std::string> retrieved_pars = modelparameters.getKeys();
        for(auto jt = req_pars.begin(); jt != req_pars.end(); ++jt)
        {
          std::string par = *jt;
          if(std::find(retrieved_pars.begin(), retrieved_pars.end(), par)
              == retrieved_pars.end())
          {
             std::ostringstream err;
             err << "Error! asciiReader did not retrieve the required paramater '"<<par<<"' for the model '"<<model<<"' from the supplied data file! Please check that this parameter indeed exists in that file." << std::endl;
             scan_error().raise(LOCAL_INFO,err.str());
          }
  
          // If it was found, add it to the return map
          outputMap[ longname[model][par] ] = modelparameters[par];
        }
      }
   
      /// @{ More debugging: show what we are returning to the likelihood container
      std::cout << "Final retrieved parameters:" << std::endl;
      for(auto it=outputMap.begin(); it!=outputMap.end(); ++it)
      {
        std::cout << "    " << it->first << " : " << it->second << std::endl;
      }
      /// @}
  
      std::cout << "Finished parameter retrieval 'reweight' scanner" << std::endl;

      /// @}


      // Call the likelihood function to compute new component
      // Must use "reweight_prior" as the prior!!
      //double partial_logL = LogLike(unitcube);

      // NEW! We can now feed the unit hypercube and/or transformed parameter map into the likelihood container. ScannerBit should interpret the map values as post-transformation and not apply a prior to those, and ensure that the length of the cube plus number of transformed parameters add up to the total number of parameter.
      double partial_logL = LogLike(outputMap); // Here we supply *only* the map; no parameters to transform.

      // Combine with the old logL value and output
      double combined_logL = old_LogL + partial_logL;
      unsigned int  MPIrank = current_point.first;
      unsigned long pointID = current_point.second;
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
      current_point = reader->get_next_point();
    } 
    std::cout << "Done!" << std::endl;

    return 0;
  }
}
