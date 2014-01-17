//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Prior object construction routines
///  
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
///
///  *********************************************

/// TODO: Probably should add in checks that make sure that the requested parameters are actually defined in the models!

#include <priorfactory.hpp>
#include <priors.hpp>
#include <yaml_parser.hpp>

namespace Gambit
{
 namespace Priors
 {
    /// Constructor
    // Builds the prior specified by the inifile
    PriorManager::PriorManager(const IniParser::IniFile& iniFile): boundIniFile(&iniFile) 
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
            if (iniFile.hasModelParameterEntry(*model, *param, "range"))
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
               if (parameterlist.count(joined_parname)!=0)
               {
                  /// TODO: gambit error
                  std::cout<<"Error! Tried to auto-create a flat prior on the same parameter twice! You must have duplicate entries for this parameter in the 'model/parameter' section of the inifile (model="<<*model<<", parameter="<<*param<<")"<<std::endl;
                  exit(1);
               }
               // Create flat prior and add it to the subpriors list (uses a special constructor that most priors don't have)
               subpriors.push_back(new RangePrior1D<flatprior>(joined_parname,range));

               // Register the parameters for this prior in parameterlist, so we can check for clashes with the priors specified in the 'priors' section of the inifile.
               parameterlist.insert(joined_parname);
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
           if (parameterlist.count(*params_it)!=0)
           {
             /// TODO: gambit error
             std::cout<<"Error parsing inifile! Prior '"<<*priorname<<"' is instructed to transform parameter '"<<*params_it<<"', but this parameter has already been reserved for transformation by a different prior! Please check earlier entries in inifile for clashes! Please note the the 'range' keyword in the 'model/parameter' section is interpreted as an instruction to create a flat prior for that parameter, so these can clash with entries in the 'priors' section."<<std::endl;
             exit(1);
           }
           // If it hasn't been used yet, reserve this parameter by adding it to parameterlist.
           parameterlist.insert(*params_it);
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
         subpriors.push_back( prior_creators.at(priortype)(params,options) );
       }

       // Now combine all the subprior objects into a CompositePrior
       compositeprior = new CompositePrior(subpriors);

       // Prior fully built!
 
    } // end PriorManager constructor

    /// Destructor
    PriorManager::~PriorManager()
    {
      // Delete the CompositePrior object
      delete[] compositeprior;

      // Need to destroy all the prior objects that we created using 'new'
      for (std::vector<BasePrior*>::iterator prior = subpriors.begin(); prior != subpriors.end(); ++prior)
      {  
        // Delete prior object
        delete[] *prior;
      }
    }

    /// Returns a pointer to the composite prior object
    // Should probably make this a safe_ptr or something.
    BasePrior* PriorManager::getprior()
    {
      return compositeprior;
    }

 } // end namespace Priors
} // end namespace Gambit
 
