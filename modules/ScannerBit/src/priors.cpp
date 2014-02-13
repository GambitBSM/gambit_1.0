//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions and classes for use in constructing priors.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  May, Oct, Dec, 2013
//
//  *********************************************

/// TODO: change transform functions to work with maps rather than vectors, so that scannerbit can deal with whatever order of parameters that you like.

#include <priors.hpp>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <yaml_parser.hpp> // for the Options class

namespace Gambit {

 // All priors are transformations which "stretch" one or more random variates
 // sampled uniformly from the interval [0,1] (or higher dim. equivalent) into
 // a sample from a different distribution.
 
 // All priors will be used by pointers to the base class "BasePrior", so they
 // must inherit from this class. Their constructors can be used to set up
 // parameters of the transformation they perform, which should itself be 
 // actioned by the "transform" member function
 
 // Note that before the transformation by these priors, the random number
 // generation is totally symmetric in all parameters (this is my current
 // assumption, may need to relax it to accommodate some fancy scanner)
 // So the way the prior transformation is defined is what really defines which
 // parameter in the hypercube is which physical parameter.
 
 // However, this order has to be the order expected by the scanner wrapper of 
 // the loglikelihood function (see ScannerBit/lib/multinest.cpp for example).
 // Parameter names are provided along with this function so that we can
 // match them up in the prior correctly. The idea is that the constructors
 // for the prior objects should be called in such a way as to match the
 // required parameter order.
 
 namespace Priors {



   /// Special "build-a-prior" classi
   // Combines prior objects together, so that the Scanner can deal with just one object in a standard way.
   // This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
   // It also allows for any combination of MD priors to be set on any combination of subspaces of
   // the full prior.
     
   // Constructor
   CompositePrior::CompositePrior(const IniParser::IniFile& iniFile)
    {
       // Check if any of the parameters have "range" keys specified. This is
       // interpreted to mean that a 1D flat prior with the specified range is
       // desired for that parameter.
       std::vector<std::string> modelNames = iniFile.getModelNames();
       for (std::vector <std::string>::iterator model = modelNames.begin(); model != modelNames.end(); ++model)
       {
         std::vector<std::string> parameterNames = iniFile.getModelParameters(*model);
         for (std::vector <std::string>::iterator param = parameterNames.begin(); param != parameterNames.end(); ++param)
         {
            if (iniFile.hasModelParameterEntry(*model, *param, "range") && !iniFile.hasModelParameterEntry(*model, *param, "fixed_value") && !iniFile.hasModelParameterEntry(*model, *param, "same_as"))
            {
               std::string joined_parname(*model+"::"+*param);
               std::cout<<"Auto-creating flat prior for parameter "<<joined_parname<<" (because 'range' key found)..."<<std::endl;
               std::pair<double, double> range = iniFile.getModelParameterEntry< std::pair<double, double> >(*model, *param, "range");
               if (range.first > range.second)
               {
                  /// TODO: gambit error
                  std::cout<<"Error! lower end of range higher than upper end! Please fix your inifile entries (in 'parameters' section)"<<std::endl;
                  exit(1);
               }
               if (param_names.count(joined_parname)!=0)
               {
                  /// TODO: gambit error
                  std::cout<<"Error! Tried to auto-create a flat prior on the same parameter twice! You must have duplicate entries for this parameter in the 'model/parameter' section of the inifile (model="<<*model<<", parameter="<<*param<<")"<<std::endl;
                  exit(1);
               }
               // Create flat prior and add it to the subpriors list (uses a special constructor that most priors don't have)
               my_subpriors.push_back(new RangePrior1D<flatprior>(joined_parname,range));

               // Register the parameters for this prior in parameterlist, so we can check for clashes with the priors specified in the 'priors' section of the inifile.
               param_names.insert(joined_parname);
            }
         }
       }
         
       // Now to build the more complicated priors
                            
       // Get the list of priors to build from the iniFile
       std::vector<std::string> priorNames = iniFile.getPriorNames();
       for (std::vector<std::string>::iterator priorname = priorNames.begin(); priorname != priorNames.end(); ++priorname)
       {
         // Get the parameter list for this prior
         std::vector<std::string> params = iniFile.getPriorEntry< std::vector<std::string> >(*priorname, "parameters");
         // Check for clashes between these params and the ones already 'in use' by other prior objects.
         for (std::vector<std::string>::iterator params_it = params.begin(); params_it != params.end(); ++params_it)
         {  
           if (param_names.count(*params_it)!=0)
           {
             /// TODO: gambit error
             std::cout<<"Error parsing inifile! Prior '"<<*priorname<<"' is instructed to transform parameter '"<<*params_it<<"', but this parameter has already been reserved for transformation by a different prior! Please check earlier entries in inifile for clashes! Please note the the 'range' keyword in the 'model/parameter' section is interpreted as an instruction to create a flat prior for that parameter, so these can clash with entries in the 'priors' section."<<std::endl;
             exit(1);
           }
           // If it hasn't been used yet, reserve this parameter by adding it to parameterlist.
           param_names.insert(*params_it);
         }
         // Get the options for this prior
         IniParser::Options options = iniFile.getPriorOptions(*priorname);
         // Get the 'type' of prior requested (flat, log, etc.)
         std::string priortype = iniFile.getPriorEntry<std::string>(*priorname, "type");
         // Build the prior using the factory function map
         // (first check if the requested entry exist)
         if (prior_creators.count(priortype)!=1)
         {
           /// TODO: Gambit error
           std::cout<<"Error building prior! Inifile instructions for prior named '"<<*priorname<<"' ask for a prior of type '"<<priortype<<"', but no entry for this type exists in the factory function map used to build the priors. This map is defined in priors.cpp; please check there that the prior you want exists, and make sure you don't have a typo in the inifile"<<std::endl;
           exit(1);
         }
         // All good, build the requested prior:
         // (note, cannot use the [] way of accessing the prior_creators map, because it is const (and [] can add stuff to the map) Use 'at' instead)
         my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
       }

       // Prior fully built!
 
    } // end PriorManager constructor
    
    CompositePrior::~CompositePrior()
    {
      // Need to destroy all the prior objects that we created using 'new'
      for (std::vector<BasePrior*>::iterator prior = my_subpriors.begin(); prior != my_subpriors.end(); ++prior)
      {  
        // Delete prior object
        delete *prior;
      }
    }    
 }; // end namespace Priors
}; // end namespace Gambit

