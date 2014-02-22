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
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2014 Feb
///
///  *********************************************

#include <priors.hpp>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <yaml_parser.hpp> // for the Options class

namespace Gambit 
{

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
 
        namespace Priors 
        {
                /// Special "build-a-prior" classi
                // Combines prior objects together, so that the Scanner can deal with just one object in a standard way.
                // This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
                // It also allows for any combination of MD priors to be set on any combination of subspaces of
                // the full prior.
                
                // Constructor
                CompositePrior::CompositePrior(const IniParser::IniFile& iniFile) : boundIniFile(&iniFile)
                {       
                        std::unordered_map<std::string, std::string> sameMap;
                        std::vector<BasePrior *> phantomPriors;
                        std::unordered_set<std::string> needSet;
                        
                        // Get model parameters from the inifile
                        std::vector <std::string> modelNames = iniFile.getModelNames();
                        
                        //main loop to enter in parameter values
                        for (std::vector<std::string>::iterator it = modelNames.begin(); it != modelNames.end(); ++it)
                        {//loop over iniFile models
                                std::vector <std::string> parameterNames = iniFile.getModelParameters(*it);
                                
                                for (std::vector<std::string>::iterator it2 = parameterNames.begin(); it2 != parameterNames.end(); ++it2)
                                {//loop over iniFile parameters
                                        param_names.push_back(*it + std::string("::") + *it2);
                                        
                                        if (iniFile.hasModelParameterEntry(*it, *it2, "same_as"))
                                        {
                                                std::string connectedName = iniFile.getModelParameterEntry<std::string>(*it, *it2, "same_as");
                                                std::string::size_type pos = connectedName.rfind("::");
                                                if (pos == std::string::npos)
                                                {
                                                        connectedName += std::string("::") + *it2;
                                                }
                                                
                                                sameMap[*it + std::string("::") + *it2] = connectedName;
                                        }
                                        else if (iniFile.hasModelParameterEntry(*it, *it2, "fixed_value"))
                                        {
                                                phantomPriors.push_back(new FixedPrior(*it + std::string("::") + *it2, iniFile.getModelParameterEntry<double>(*it, *it2, "fixed_value")));
                                        }
                                        else   
                                        {
                                                std::string joined_parname = *it + std::string("::") + *it2;
                                                
                                                if (iniFile.hasModelParameterEntry(*it, *it2, "prior_type"))
                                                {
                                                        IniParser::Options options = iniFile.getParameterOptions(*it, *it2);
                                                        std::string priortype = iniFile.getModelParameterEntry<std::string>(*it, *it2, "prior_type");
                                                        
                                                        if(priortype == "same_as")
                                                        {
                                                                if (options.hasKey("same_as"))
                                                                        sameMap[joined_parname] = options.getValue<std::string>("same_as");
                                                        }
                                                        else
                                                        {
                                                                my_subpriors.push_back( prior_creators.at(priortype)(std::vector<std::string>(1, joined_parname),options) );
                                                                if (priortype != "fixed")
                                                                {
                                                                        shown_param_names.push_back(joined_parname);
                                                                }
                                                                else
                                                                {
                                                                        scanLog::err << "Same_as prior for parameter \"" << *it2 << "\" in model \""<< *it << "\" has no \"same_as\" entry." << scanLog::endl;
                                                                }
                                                        }
                                                }
                                                else if (iniFile.hasModelParameterEntry(*it, *it2, "range"))
                                                {
                                                        shown_param_names.push_back(joined_parname);
                                                        std::pair<double, double> range = iniFile.getModelParameterEntry< std::pair<double, double> >(*it, *it2, "range");
                                                        if (range.first > range.second)
                                                        {
                                                                double temp = range.first;
                                                                range.first = range.second;
                                                                range.second = temp;
                                                        }
                                                        
                                                        my_subpriors.push_back(new RangePrior1D<flatprior>(joined_parname,range));
                                                }
                                                else 
                                                {
                                                        shown_param_names.push_back(joined_parname);
                                                        needSet.insert(joined_parname);
                                                }
                                        }
                                }
                        }
                        
                        // Get the list of priors to build from the iniFile
                        std::vector<std::string> priorNames = iniFile.getPriorNames();
                        std::unordered_set<std::string> paramSet(shown_param_names.begin(), shown_param_names.end()); 

                        for (std::vector<std::string>::iterator priorname = priorNames.begin(); priorname != priorNames.end(); ++priorname)
                        {
                                // Get the parameter list for this prior
                                std::vector<std::string> params = iniFile.getPriorEntry< std::vector<std::string> >(*priorname, "parameters");
                                // Check for clashes between these params and the ones already 'in use' by other prior objects.
                                for (std::vector<std::string>::iterator params_it = params.begin(); params_it != params.end(); ++params_it)
                                {
                                        if (paramSet.find(*params_it) == paramSet.end())
                                        {
                                                scanLog::err << "Parameter " << *params_it << " requested by " << *priorname << " is either not defined by the inifile, is fixed, or is the \"same as\" another parameter." << scanLog::endl;
                                        }
                                        else
                                        {
                                                std::unordered_set<std::string>::iterator find_it = needSet.find(*params_it);
                                                if (find_it == needSet.end())
                                                {
                                                        /// TODO: gambit error
                                                        scanLog::err << "Parameter " << *params_it << " requested by prior '"<<*priorname<<"' is reserved by a different prior." << scanLog::endl;
                                                }
                                                else
                                                {
                                                        needSet.erase(find_it);
                                                }
                                        }
                                }
                                // Get the options for this prior
                                IniParser::Options options = iniFile.getPriorOptions(*priorname);
                                // Get the 'type' of prior requested (flat, log, etc.)
                                std::string priortype = iniFile.getPriorEntry<std::string>(*priorname, "prior_type");
                                // Build the prior using the factory function map
                                // (first check if the requested entry exist)
                                if (prior_creators.find(priortype) == prior_creators.end())
                                {
                                        /// TODO: Gambit error
                                        scanLog::err << "Prior '"<< *priorname <<"' is of type '"<<priortype<<"', but no entry for this type exists in the factory function map." << scanLog::endl;
                                }
                                else
                                {
                                        // All good, build the requested prior:
                                        // (note, cannot use the [] way of accessing the prior_creators map, because it is const (and [] can add stuff to the map) Use 'at' instead)
                                        if (priortype == "fixed")
                                        {
                                                std::vector<std::string>::iterator it_find;
                                                for (std::vector<std::string>::iterator it = params.begin(); it < params.end(); it++)
                                                {
                                                        it_find = std::find(shown_param_names.begin(), shown_param_names.end(), *it);
                                                        shown_param_names.erase(it_find);
                                                }
                                                
                                                my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                        }
                                        else if (priortype == "same_as")
                                        {
                                                if (options.hasKey("same_as"))
                                                {
                                                        std::string same_name = options.getValue<std::string>("same_as");
                                                        std::vector<std::string>::iterator it_find;
                                                        for (std::vector<std::string>::iterator it = params.begin(); it < params.end(); it++)
                                                        {
                                                                it_find = std::find(shown_param_names.begin(), shown_param_names.end(), *it);
                                                                shown_param_names.erase(it_find);
                                                                sameMap[*it] = same_name;
                                                        }
                                                }
                                                else
                                                {
                                                        scanLog::err << "Same_as prior \"" << *priorname << "\" has no \"same_as\" entry." << scanLog::endl;
                                                }
                                        }
                                        else
                                        {
                                                my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                        }
                                }
                        }
                        
                        if (needSet.size() != 0)
                        {
                                scanLog::err << "Priors are not defined for the following parameters:  [";
                                std::unordered_set<std::string>::iterator it = needSet.begin();
                                scanLog::err << *(it++);
                                for (; it != needSet.end(); it++)
                                {
                                        scanLog::err << ", "<< *it;
                                }
                                scanLog::err << "]" << scanLog::endl;
                        }
                        
                        std::unordered_map<std::string, std::string> keyMap;
                        std::string index, result;
                        unsigned int reps;
                        for (std::unordered_map<std::string, std::string>::iterator it = sameMap.begin(); it != sameMap.end(); it++)
                        {
                                index = it->first;
                                result = it->second;
                                reps = 0;
                                while (sameMap.find(result) != sameMap.end())
                                {
                                        index = result;
                                        result = sameMap[index];
                                        
                                        if (result == it->first)
                                        {
                                                scanLog::err << "Parameter " << it->first << " is \"same as\" itself." << scanLog::endl;
                                                break;
                                        }
                                        
                                        if (reps > sameMap.size())
                                        {
                                                scanLog::err << "Parameter's \"same as\"'s are loop in on each other." << scanLog::endl;
                                                break;
                                        }
                                        reps++;
                                }
                                
                                if (keyMap.find(result) == keyMap.end())
                                        keyMap[result] = it->first + std::string("+") + result;
                                else
                                        keyMap[result] = it->first + std::string("+") + keyMap[result];
                        }
                        
                        for (std::vector<std::string>::iterator it = shown_param_names.begin(); it != shown_param_names.end(); ++it)
                        {
                                if (keyMap.find(*it) != keyMap.end())
                                {
                                        *it = keyMap[*it];
                                }
                        }
                        
                        for (std::unordered_map<std::string, std::string>::iterator it = keyMap.begin(); it != keyMap.end(); it++)
                        {
                                if (paramSet.find(it->first) == paramSet.end())
                                {
                                        scanLog::err << "same_as:  " << it->first << " is not defined in inifile." << scanLog::endl;
                                }
                                else
                                {
                                        phantomPriors.push_back(new MultiPriors(it->second));
                                }
                        }
                        
                        for (subpriors_it subprior = my_subpriors.begin(); subprior != my_subpriors.end(); ++subprior)
                        {
                                param_size += (*subprior)->size();
                        }
                        
                        my_subpriors.insert(my_subpriors.end(), phantomPriors.begin(), phantomPriors.end());
                }
        
                CompositePrior::~CompositePrior()
                {
                        // Need to destroy all the prior objects that we created using 'new'
                        for (std::vector<BasePrior*>::iterator prior = my_subpriors.begin(); prior != my_subpriors.end(); ++prior)
                        {  
                                // Delete prior object
                                delete *prior;
                        }
                }    
        } // end namespace Priors
} // end namespace Gambit

