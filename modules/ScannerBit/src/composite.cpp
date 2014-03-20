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

#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#include "priors.hpp"
#include "yaml_options.hpp"

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
                CompositePrior::CompositePrior(const IniParser::IniFile& iniFile)
                {       
                        std::unordered_map<std::string, std::string> sameMap;
                        std::vector<BasePrior *> phantomPriors;
                        std::unordered_set<std::string> needSet;
                        
                        // Get model parameters from the inifile
                        std::vector <std::string> modelNames = iniFile.getModelNames();
                        
                        //main loop to enter in parameter values
                        std::for_each (modelNames.begin(), modelNames.end(), [&](std::string &mod)
                        {//loop over iniFile models
                                std::vector <std::string> parameterNames = iniFile.getModelParameters(mod);
                                
                                std::for_each (parameterNames.begin(), parameterNames.end(), [&](std::string &par)
                                {//loop over iniFile parameters
                                        param_names.push_back(mod + std::string("::") + par);
                                        
                                        if (iniFile.hasModelParameterEntry(mod, par, "same_as"))
                                        {
                                                std::string connectedName = iniFile.getModelParameterEntry<std::string>(mod, par, "same_as");
                                                std::string::size_type pos = connectedName.rfind("::");
                                                if (pos == std::string::npos)
                                                {
                                                        connectedName += std::string("::") + par;
                                                }
                                                
                                                sameMap[mod + std::string("::") + par] = connectedName;
                                        }
                                        else if (iniFile.hasModelParameterEntry(mod, par, "fixed_value"))
                                        {
                                                phantomPriors.push_back(new FixedPrior(mod + std::string("::") + par, iniFile.getModelParameterEntry<double>(mod, par, "fixed_value")));
                                        }
                                        else   
                                        {
                                                std::string joined_parname = mod + std::string("::") + par;
                                                
                                                if (iniFile.hasModelParameterEntry(mod, par, "prior_type"))
                                                {
                                                        Options options = iniFile.getParameterOptions(mod, par);
                                                        std::string priortype = iniFile.getModelParameterEntry<std::string>(mod, par, "prior_type");
                                                        
                                                        if(priortype == "same_as")
                                                        {
                                                                if (options.hasKey("same_as"))
                                                                {
                                                                        sameMap[joined_parname] = options.getValue<std::string>("same_as");
                                                                }
                                                                else
                                                                {
                                                                        scanLog::err << "Same_as prior for parameter \"" << mod << "\" in model \""<< par << "\" has no \"same_as\" entry." << scanLog::endl;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                if (prior_creators.find(priortype) == prior_creators.end())
                                                                {
                                                                        scanLog::err << "Parameter '"<< mod <<"' of model '" << par << "' is of type '"<<priortype<<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << scanLog::endl;
                                                                }
                                                                else
                                                                {
                                                                        my_subpriors.push_back( prior_creators.at(priortype)(std::vector<std::string>(1, joined_parname),options) );
                                                                        if (priortype != "fixed")
                                                                        {
                                                                                shown_param_names.push_back(joined_parname);
                                                                        }
                                                                }
                                                        }
                                                }
                                                else if (iniFile.hasModelParameterEntry(mod, par, "range"))
                                                {
                                                        shown_param_names.push_back(joined_parname);
                                                        std::pair<double, double> range = iniFile.getModelParameterEntry< std::pair<double, double> >(mod, par, "range");
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
                                });
                        });
                        
                        // Get the list of priors to build from the iniFile
                        std::vector<std::string> priorNames = iniFile.getPriorNames();
                        std::unordered_set<std::string> paramSet(shown_param_names.begin(), shown_param_names.end()); 

                        std::for_each (priorNames.begin(), priorNames.end(), [&](std::string &priorname)
                        {
                                if (iniFile.hasPriorEntry(priorname, "parameters") && iniFile.hasPriorEntry(priorname, "prior_type"))
                                {
                                        auto params = iniFile.getPriorEntry<std::vector<std::string>>(priorname, "parameters");
                                        
                                        std::for_each (params.begin(), params.end(), [&](std::string &par)
                                        {
                                                if (paramSet.find(par) == paramSet.end())
                                                {
                                                        scanLog::err << "Parameter " << par << " requested by " << priorname << " is either not defined by the inifile, is fixed, or is the \"same as\" another parameter." << scanLog::endl;
                                                }
                                                else
                                                {
                                                        auto find_it = needSet.find(par);
                                                        if (find_it == needSet.end())
                                                        {
                                                                scanLog::err << "Parameter " << par << " requested by prior '"<< priorname <<"' is reserved by a different prior." << scanLog::endl;
                                                        }
                                                        else
                                                        {
                                                                needSet.erase(find_it);
                                                        }
                                                }
                                        });

                                        auto options = iniFile.getPriorOptions(priorname);
                                        auto priortype = iniFile.getPriorEntry<std::string>(priorname, "prior_type");
                                        
                                        if (prior_creators.find(priortype) == prior_creators.end())
                                        {
                                                scanLog::err << "Prior '"<< priorname <<"' is of type '"<< priortype <<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << scanLog::endl;
                                        }
                                        else
                                        {
                                                if (priortype == "fixed")
                                                {
                                                        std::for_each (params.begin(), params.end(), [&](std::string &par)
                                                        {
                                                                shown_param_names.erase
                                                                (
                                                                        std::find(shown_param_names.begin(), shown_param_names.end(), par)
                                                                );
                                                        });
                                                        
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                                else if (priortype == "same_as")
                                                {
                                                        if (options.hasKey("same_as"))
                                                        {
                                                                std::string same_name = options.getValue<std::string>("same_as");
                                                                std::for_each (params.begin(), params.end(), [&](std::string &par)
                                                                {
                                                                        shown_param_names.erase
                                                                        (
                                                                                std::find(shown_param_names.begin(), shown_param_names.end(), par)
                                                                        );
                                                                        sameMap[par] = same_name;
                                                                });
                                                        }
                                                        else
                                                        {
                                                                scanLog::err << "Same_as prior \"" << priorname << "\" has no \"same_as\" entry." << scanLog::endl;
                                                        }
                                                }
                                                else
                                                {
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                        }
                                }
                                else
                                {
                                        scanLog::err << "\"parameters\" and \"prior_type\" need to be defined for prior \"" << priorname << "\"" << scanLog::endl;
                                }
                        });
                        
                        if (needSet.size() != 0)
                        {
                                scanLog::err << "Priors are not defined for the following parameters:  [";
                                auto it = needSet.begin();
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
                        std::for_each (sameMap.begin(), sameMap.end(), [&](std::pair<std::string, std::string> strMap)
                        {
                                index = strMap.first;
                                result = strMap.second;
                                reps = 0;
                                while (sameMap.find(result) != sameMap.end())
                                {
                                        index = result;
                                        result = sameMap[index];
                                        
                                        if (result == strMap.first)
                                        {
                                                scanLog::err << "Parameter " << strMap.first << " is \"same as\" itself." << scanLog::endl;
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
                                        keyMap[result] = strMap.first + std::string("+") + result;
                                else
                                        keyMap[result] = strMap.first + std::string("+") + keyMap[result];
                        });
                        
                        std::for_each (shown_param_names.begin(), shown_param_names.end(), [&](std::string &str)
                        {
                                auto it = keyMap.find(str);
                                if (it != keyMap.end())
                                {
                                        str = it->second;
                                }
                        });
                        
                        std::for_each (keyMap.begin(), keyMap.end(), [&](std::pair<std::string, std::string> key)
                        {
                                if (paramSet.find(key.first) == paramSet.end())
                                {
                                        scanLog::err << "same_as:  " << key.first << " is not defined in inifile." << scanLog::endl;
                                }
                                else
                                {
                                        my_subpriors.push_back(new MultiPriors(key.second));
                                }
                        });
                        
                        int param_size = 0;
                        std::for_each (my_subpriors.begin(), my_subpriors.end(), [&](BasePrior* &subprior)
                        {
                                param_size += subprior->size();
                        });
                        
                        setSize(param_size);
                        
                        my_subpriors.insert(my_subpriors.end(), phantomPriors.begin(), phantomPriors.end());
                }  
                
                CompositePrior::CompositePrior(const std::vector<std::string> &params_in, const Options &options_in) : param_names(params_in), shown_param_names(params_in)
                {       
                        std::unordered_map<std::string, std::string> sameMap;
                        std::unordered_set<std::string> needSet(params_in.begin(), params_in.end());
                        std::unordered_set<std::string> paramSet(params_in.begin(), params_in.end()); 

                        auto priorNames = options_in.getPriorNames();
                        
                        std::for_each (priorNames.begin(), priorNames.end(), [&](std::string &priorname)
                        {
                                if (options_in.hasKey(priorname, "parameters") && options_in.hasKey(priorname, "prior_type"))
                                {
                                        auto params = options_in.getValue<std::vector<std::string>>(priorname, "parameters");
                                        
                                        std::for_each (params.begin(), params.end(), [&](std::string &par)
                                        {
                                                if (paramSet.find(par) == paramSet.end())
                                                {
                                                        scanLog::err << "Parameter " << par << " requested by " << priorname << " is either not defined by the inifile, is fixed, or is the \"same as\" another parameter." << scanLog::endl;
                                                }
                                                else
                                                {
                                                        auto find_it = needSet.find(par);
                                                        if (find_it == needSet.end())
                                                        {
                                                                scanLog::err << "Parameter " << par << " requested by prior '"<< priorname <<"' is reserved by a different prior." << scanLog::endl;
                                                        }
                                                        else
                                                        {
                                                                needSet.erase(find_it);
                                                        }
                                                }
                                        });

                                        auto options = options_in.getOptions(priorname);
                                        auto priortype = options_in.getValue<std::string>(priorname, "prior_type");
                                        
                                        if (prior_creators.find(priortype) == prior_creators.end())
                                        {
                                                scanLog::err << "Prior '"<< priorname <<"' is of type '"<< priortype <<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << scanLog::endl;
                                        }
                                        else
                                        {
                                                if (priortype == "fixed")
                                                {
                                                        std::for_each (params.begin(), params.end(), [&](std::string &par)
                                                        {
                                                                shown_param_names.erase
                                                                (
                                                                        std::find(shown_param_names.begin(), shown_param_names.end(), par)
                                                                );
                                                        });
                                                        
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                                else if (priortype == "same_as")
                                                {
                                                        if (options.hasKey("same_as"))
                                                        {
                                                                std::string same_name = options.getValue<std::string>("same_as");
                                                                std::for_each (params.begin(), params.end(), [&](std::string &par)
                                                                {
                                                                        shown_param_names.erase
                                                                        (
                                                                                std::find(shown_param_names.begin(), shown_param_names.end(), par)
                                                                        );
                                                                        sameMap[par] = same_name;
                                                                });
                                                        }
                                                        else
                                                        {
                                                                scanLog::err << "Same_as prior \"" << priorname << "\" has no \"same_as\" entry." << scanLog::endl;
                                                        }
                                                }
                                                else
                                                {
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                        }
                                }
                                else
                                {
                                        scanLog::err << "\"parameters\" and \"prior_type\" need to be defined for prior \"" << priorname << "\"" << scanLog::endl;
                                }
                        });
                        
                        if (needSet.size() != 0)
                        {
                                scanLog::err << "Priors are not defined for the following parameters:  [";
                                auto it = needSet.begin();
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
                        std::for_each (sameMap.begin(), sameMap.end(), [&](std::pair<std::string, std::string> strMap)
                        {
                                index = strMap.first;
                                result = strMap.second;
                                reps = 0;
                                while (sameMap.find(result) != sameMap.end())
                                {
                                        index = result;
                                        result = sameMap[index];
                                        
                                        if (result == strMap.first)
                                        {
                                                scanLog::err << "Parameter " << strMap.first << " is \"same as\" itself." << scanLog::endl;
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
                                        keyMap[result] = strMap.first + std::string("+") + result;
                                else
                                        keyMap[result] = strMap.first + std::string("+") + keyMap[result];
                        });
                        
                        std::for_each (shown_param_names.begin(), shown_param_names.end(), [&](std::string &str)
                        {
                                auto it = keyMap.find(str);
                                if (it != keyMap.end())
                                {
                                        str = it->second;
                                }
                        });
                        
                        std::for_each (keyMap.begin(), keyMap.end(), [&](std::pair<std::string, std::string> key)
                        {
                                if (paramSet.find(key.first) == paramSet.end())
                                {
                                        scanLog::err << "same_as:  " << key.first << " is not defined in inifile." << scanLog::endl;
                                }
                                else
                                {
                                        my_subpriors.push_back(new MultiPriors(key.second));
                                }
                        });
                        
                        int param_size = 0;
                        std::for_each (my_subpriors.begin(), my_subpriors.end(), [&](BasePrior* &subprior)
                        {
                                param_size += subprior->size();
                        });
                        
                        setSize(param_size);
                }
        } // end namespace Priors
} // end namespace Gambit

