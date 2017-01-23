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

#ifdef WITH_MPI
#include "mpi.h" // Not using the GAMBIT MPI wrappers since they are overkill for this scanner.
#endif

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

    int numtasks;
    int rank;
    
    // Get MPI data. No communication is needed, we just need to know how to
    // split up the workload. Just a straight division among all processes is
    // used, nothing fancy.    
#ifdef WITH_MPI
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
#else
    numtasks = 1;
    rank = 0;
#endif

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
    unsigned long long total_length = reader->get_dataset_length();

    // Compute which points this process is supposed to process. Divide total
    // by number of MPI tasks.
    unsigned long long my_length = total_length / numtasks;
    unsigned long long r = total_length % numtasks;
    // Offset from beginning for this task assuming equal lengths in each task
    unsigned long long start = my_length * rank;
    // Divide up the remainder amongst the tasks and adjust offsets to account for these
    if(rank<r)
    {
      my_length++;
      start+=rank;
    }
    else
    {
      start+=r;
    }
    unsigned long long end = start + my_length - 1; // Minus 1 for the zero indexing

    // Loop over the old points
    std::pair<unsigned int,unsigned long> current_point = reader->get_next_point(); // Get first point
    unsigned long long loopi = 0;
    std::cout << "Starting loop over old points ("<<total_length<<" in total)" << std::endl;
    std::cout << "This task (rank "<<rank<<" of "<<numtasks<<"), will process iterations "<<start<<" through to "<<end<<"." << std::endl;

    // Disable auto-incrementing of pointID's in the likelihood container. We will set these manually.
    Gambit::Printers::auto_increment() = false;

    while(not reader->eoi()) // while not end of input
    {
      // DEBUG
      std::cout << "rank "<<rank<<": loop "<<loopi<<std::endl;
      loopi++;

      // Skip loop ahead to the batch of points we are assigned to process
      if(loopi<start)
      {
         current_point = reader->get_next_point();
         continue;
      }

      // Cancel processing of iterations beyoud our assigned range
      if(loopi>end)
      {
         std::cout << "This task (rank "<<rank<<") has reached the end of its batch, cancelling file iteration." << std::endl;
         break;
      }

      // Data about current point in input file
      unsigned int       MPIrank = current_point.first;
      unsigned long long pointID = current_point.second;

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
      bool valid_modelparams = true;
      for(auto it=req_models.begin(); it!=req_models.end(); ++it)
      {

        ModelParameters modelparameters;
        std::string model = it->first;
        bool is_valid = reader->retrieve(modelparameters, model);
        if(not is_valid) 
        {
           valid_modelparams = false;
           std::cout << "ModelParameters marked 'invalid' for model "<<model<<"; point will be skipped." << std::endl;
        }
        /// @{ Debugging; show what was actually retrieved from the output file
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
   
      // Check if valid model parameters were extracted. If not, something may be wrong with the input file, or we could just be at the end of a buffer (e.g. in HDF5 case). Can't tell the difference, so just skip the point and continue.
      if(not valid_modelparams)
      {
         std::cout << "Skipping point..." <<std::endl;
         current_point = reader->get_next_point();
         continue;
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

      // Before calling the likelihood function, we need to set up the printer to
      // output correctly. The auto-incrementing of pointID's cannot be used,
      // because we need to match the old scan results. So we must set it manually.
      // This is currently a little clunky but it works. Make sure to have turned
      // off auto incrementing (see above).
      // The printer should still print to files split according to the actual rank, this
      // should only change the assigned pointID pair tag. Which should already be
      // properly unambiguous if the original scan was done properly.
      // Note: This might fail for merged datasets from separate runs. Not sure what the solution
      // for that is.
      LogLike->setRank(MPIrank); // For purposes of printing only
      LogLike->setPtID(pointID);

      // Call the likelihood function to compute new component
      // Must use "reweight_prior" as the prior!!
      //double partial_logL = LogLike(unitcube);

      // NEW! We can now feed the unit hypercube and/or transformed parameter map into the likelihood container. ScannerBit should interpret the map values as post-transformation and not apply a prior to those, and ensure that the length of the cube plus number of transformed parameters add up to the total number of parameter.
      double partial_logL = LogLike(outputMap); // Here we supply *only* the map; no parameters to transform.

      // Get the previously computed likelihood value for this point
      double old_LogL;
      bool   is_valid;
      is_valid = reader->retrieve(old_LogL, old_loglike_label);

      if(is_valid)
      {
         // Combine with the old logL value and output
         double combined_logL = old_LogL + partial_logL;
         get_printer().get_stream()->print( combined_logL, "reweighted_LogL", MPIrank, pointID);
      }
      // Else old likelihood value didn't exist for this point; cannot combine with non-existent likelihood, so don't print the reweighted value.

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

      //static int tmp = 0;
      //if(tmp>3)
      //{
      //   exit(0);
      //}
      //else
      //{
      //   tmp++;
      //}
      /// Go to next point
      current_point = reader->get_next_point();
    } 
    std::cout << "Done! (rank "<<rank<<")" << std::endl;

    return 0;
  }
}
