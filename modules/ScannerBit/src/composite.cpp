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

#include "yaml_options.hpp"
#include "priors_rollcall.hpp"

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
                CompositePrior::CompositePrior(const Options &model_options, const Options &prior_options)
                {       
                        std::unordered_map<std::string, std::string> sameMap;
                        std::vector<BasePrior *> phantomPriors;
                        std::unordered_set<std::string> needSet;
                        
                        // Get model parameters from the inifile
                        std::vector <std::string> modelNames = model_options.getNames();
                        
                        //main loop to enter in parameter values
                        for (auto mod_it = modelNames.begin(), mod_end = modelNames.end(); mod_it != mod_end; mod_it++)
                        {//loop over iniFile models
                                std::string &mod = *mod_it;
                                std::vector <std::string> parameterNames = model_options.getNames(mod);
                                
                                int default_N = 0;
                                bool isDefault = false;
                                std::string default_prefix;
                                
                                for (auto par_it = parameterNames.begin(), par_end = parameterNames.end(); par_it != par_end; par_it++)
                                {//loop over iniFile parameters
                                        std::string &par_options = *par_it;
                                        std::string par_name;
                                        
                                        if (!isDefault && *par_it == "default_params")
                                        {
                                                isDefault = true;
                                                if (model_options.hasKey(mod, par_options, "default_number"))
                                                {
                                                        default_N = model_options.getValue<int>(mod, par_options, "default_number");
                                                }
                                                else
                                                {
                                                        default_N = 1;
                                                }
                                                
                                                if (model_options.hasKey(mod, par_options, "default_prefix"))
                                                {
                                                        default_prefix = model_options.getValue<std::string>(mod, par_options, "default_prefix") + "_";
                                                }
                                                else
                                                {
                                                        default_prefix = "";
                                                }
                                        }
                                        
                                        if (isDefault)
                                        {
                                                default_N--;
                                                std::stringstream ss;
                                                ss << default_N;
                                                ss >> par_name;
                                                par_name = default_prefix + par_name;
                                        }
                                        else
                                        {
                                                par_name = *par_it;
                                        }
                                        
                                        param_names.push_back(mod + std::string("::") + par_name);
                                        
                                        if (model_options.hasKey(mod, par_options, "same_as"))
                                        {
                                                std::string connectedName = model_options.getValue<std::string>(mod, par_options, "same_as");
                                                std::string::size_type pos = connectedName.rfind("::");
                                                if (pos == std::string::npos)
                                                {
                                                        connectedName += std::string("::") + par_name;
                                                }
                                                
                                                sameMap[mod + std::string("::") + par_name] = connectedName;
                                        }
                                        else if (model_options.hasKey(mod, par_options, "fixed_value"))
                                        {
                                                phantomPriors.push_back(new FixedPrior(mod + std::string("::") + par_name, model_options.getValue<double>(mod, par_options, "fixed_value")));
                                        }
                                        else   
                                        {
                                                std::string joined_parname = mod + std::string("::") + par_name;
                                                
                                                if (model_options.hasKey(mod, par_options, "prior_type"))
                                                {
                                                        Options options = model_options.getOptions(mod, par_options);
                                                        std::string priortype = model_options.getValue<std::string>(mod, par_options, "prior_type");
                                                        
                                                        if(priortype == "same_as")
                                                        {
                                                                if (options.hasKey("same_as"))
                                                                {
                                                                        sameMap[joined_parname] = options.getValue<std::string>("same_as");
                                                                }
                                                                else
                                                                {
                                                                        std::stringstream ss;
                                                                        ss << "Same_as prior for parameter \"" << mod << "\" in model \""<< par_name << "\" has no \"same_as\" entry." << std::endl;
                                                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                                }
                                                        }
                                                        else
                                                        {
                                                                if (prior_creators.find(priortype) == prior_creators.end())
                                                                {
                                                                        std::stringstream ss;
                                                                        ss << "Parameter '"<< mod <<"' of model '" << par_name << "' is of type '"<<priortype<<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << std::endl;
                                                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
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
                                                else if (model_options.hasKey(mod, par_options, "range"))
                                                {
                                                        shown_param_names.push_back(joined_parname);
                                                        std::pair<double, double> range = model_options.getValue< std::pair<double, double> >(mod, par_options, "range");
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
                                        
                                        if (isDefault && default_N > 0)
                                        {
                                                par_it--;
                                        }
                                }
                        }
                        
                        // Get the list of priors to build from the iniFile
                        std::vector<std::string> priorNames = prior_options.getNames();
                        std::unordered_set<std::string> paramSet(shown_param_names.begin(), shown_param_names.end()); 

                        for (auto priorname_it = priorNames.begin(), priorname_end = priorNames.end(); priorname_it != priorname_end; priorname_it++)
                        {
                                std::string &priorname = *priorname_it;
                                if (prior_options.hasKey(priorname, "parameters") && prior_options.hasKey(priorname, "prior_type"))
                                {
                                        auto params = prior_options.getValue<std::vector<std::string>>(priorname, "parameters");
                                        
                                        for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                        {
                                                if (paramSet.find(*par_it) == paramSet.end())
                                                {
                                                        std::stringstream ss;
                                                        ss << "Parameter " << *par_it << " requested by " << priorname << " is either not defined by the inifile, is fixed, or is the \"same as\" another parameter." << std::endl;
                                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                }
                                                else
                                                {
                                                        auto find_it = needSet.find(*par_it);
                                                        if (find_it == needSet.end())
                                                        {
                                                                std::stringstream ss;
                                                                ss << "Parameter " << *par_it << " requested by prior '"<< priorname <<"' is reserved by a different prior." << std::endl;
                                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                        }
                                                        else
                                                        {
                                                                needSet.erase(find_it);
                                                        }
                                                }
                                        }

                                        auto options = prior_options.getOptions(priorname);
                                        auto priortype = prior_options.getValue<std::string>(priorname, "prior_type");
                                        
                                        if (prior_creators.find(priortype) == prior_creators.end())
                                        {
                                                std::stringstream ss;
                                                ss << "Prior '"<< priorname <<"' is of type '"<< priortype <<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                        }
                                        else
                                        {
                                                if (priortype == "fixed")
                                                {
                                                        for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                                        {
                                                                shown_param_names.erase
                                                                (
                                                                        std::find(shown_param_names.begin(), shown_param_names.end(), *par_it)
                                                                );
                                                        }
                                                        
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                                else if (priortype == "same_as")
                                                {
                                                        if (options.hasKey("same_as"))
                                                        {
                                                                std::string same_name = options.getValue<std::string>("same_as");
                                                                for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                                                {
                                                                        shown_param_names.erase
                                                                        (
                                                                                std::find(shown_param_names.begin(), shown_param_names.end(), *par_it)
                                                                        );
                                                                        sameMap[*par_it] = same_name;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                std::stringstream ss;
                                                                ss << "Same_as prior \"" << priorname << "\" has no \"same_as\" entry." << std::endl;
                                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
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
                                        std::stringstream ss;
                                        ss << "\"parameters\" and \"prior_type\" need to be defined for prior \"" << priorname << "\"" << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                }
                        }
                        
                        if (needSet.size() != 0)
                        {
                                std::stringstream ss;
                                ss << "Priors are not defined for the following parameters:  [";
                                auto it = needSet.begin();
                                ss << *(it++);
                                for (; it != needSet.end(); it++)
                                {
                                        ss << ", "<< *it;
                                }
                                ss << "]" << std::endl;
                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                        }
                        
                        std::unordered_map<std::string, std::string> keyMap;
                        std::string index, result;
                        unsigned int reps;
                        for (auto strMap = sameMap.begin(), strMap_end = sameMap.end(); strMap != strMap_end; strMap++)
                        {
                                index = strMap->first;
                                result = strMap->second;
                                reps = 0;
                                while (sameMap.find(result) != sameMap.end())
                                {
                                        index = result;
                                        result = sameMap[index];
                                        
                                        if (result == strMap->first)
                                        {
                                                std::stringstream ss;
                                                ss << "Parameter " << strMap->first << " is \"same as\" itself." << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                break;
                                        }
                                        
                                        if (reps > sameMap.size())
                                        {
                                                std::stringstream ss;
                                                ss << "Parameter's \"same as\"'s are loop in on each other." << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                break;
                                        }
                                        reps++;
                                }
                                
                                if (keyMap.find(result) == keyMap.end())
                                        keyMap[result] = strMap->first + std::string("+") + result;
                                else
                                        keyMap[result] = strMap->first + std::string("+") + keyMap[result];
                        }
                        
                        for (auto str_it = shown_param_names.begin(), str_end = shown_param_names.end(); str_it != str_end; str_it++)
                        {
                                auto it = keyMap.find(*str_it);
                                if (it != keyMap.end())
                                {
                                        *str_it = it->second;
                                }
                        }
                        
                        for (auto key_it = keyMap.begin(), key_end = keyMap.end(); key_it != key_end; key_it++)
                        {
                                if (paramSet.find(key_it->first) == paramSet.end())
                                {
                                        std::stringstream ss;
                                        ss << "same_as:  " << key_it->first << " is not defined in inifile." << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                }
                                else
                                {
                                        my_subpriors.push_back(new MultiPriors(key_it->second));
                                }
                        }
                        
                        int param_size = 0;
                        for (auto subprior = my_subpriors.begin(), prior_end = my_subpriors.end(); subprior != prior_end; subprior++)
                        {
                                param_size += (*subprior)->size();
                        }
                        
                        setSize(param_size);
                        
                        my_subpriors.insert(my_subpriors.end(), phantomPriors.begin(), phantomPriors.end());
                }  
                
                CompositePrior::CompositePrior(const std::vector<std::string> &params_in, const Options &options_in) : param_names(params_in), shown_param_names(params_in)
                {       
                        std::unordered_map<std::string, std::string> sameMap;
                        std::unordered_set<std::string> needSet(params_in.begin(), params_in.end());
                        std::unordered_set<std::string> paramSet(params_in.begin(), params_in.end()); 

                        auto priorNames = options_in.getNames();
                        
                        for (auto priorname_it = priorNames.begin(), priorname_end = priorNames.end(); priorname_it != priorname_end; priorname_it++)
                        {
                                std::string &priorname = *priorname_it;
                                if (options_in.hasKey(priorname, "parameters") && options_in.hasKey(priorname, "prior_type"))
                                {
                                        auto params = options_in.getValue<std::vector<std::string>>(priorname, "parameters");
                                        
                                        for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                        {
                                                std::string &par = *par_it;
                                                if (paramSet.find(par) == paramSet.end())
                                                {
                                                        std::stringstream ss;
                                                        ss << "Parameter " << par << " requested by " << priorname << " is either not defined by the inifile, is fixed, or is the \"same as\" another parameter." << std::endl;
                                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                }
                                                else
                                                {
                                                        auto find_it = needSet.find(par);
                                                        if (find_it == needSet.end())
                                                        {
                                                                std::stringstream ss;
                                                                ss << "Parameter " << par << " requested by prior '"<< priorname <<"' is reserved by a different prior." << std::endl;
                                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                        }
                                                        else
                                                        {
                                                                needSet.erase(find_it);
                                                        }
                                                }
                                        }

                                        auto options = options_in.getOptions(priorname);
                                        auto priortype = options_in.getValue<std::string>(priorname, "prior_type");
                                        
                                        if (prior_creators.find(priortype) == prior_creators.end())
                                        {
                                                std::stringstream ss;
                                                ss << "Prior '"<< priorname <<"' is of type '"<< priortype <<"', but no entry for this type exists in the factory function map.\n" << prior_creators.print() << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                        }
                                        else
                                        {
                                                if (priortype == "fixed")
                                                {
                                                        for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                                        {
                                                                shown_param_names.erase
                                                                (
                                                                        std::find(shown_param_names.begin(), shown_param_names.end(), *par_it)
                                                                );
                                                        }
                                                        
                                                        my_subpriors.push_back( prior_creators.at(priortype)(params,options) );
                                                }
                                                else if (priortype == "same_as")
                                                {
                                                        if (options.hasKey("same_as"))
                                                        {
                                                                std::string same_name = options.getValue<std::string>("same_as");
                                                                for (auto par_it = params.begin(), par_end = params.end(); par_it != par_end; par_it++)
                                                                {
                                                                        shown_param_names.erase
                                                                        (
                                                                                std::find(shown_param_names.begin(), shown_param_names.end(), *par_it)
                                                                        );
                                                                        sameMap[*par_it] = same_name;
                                                                }
                                                        }
                                                        else
                                                        {
                                                                std::stringstream ss;
                                                                ss << "Same_as prior \"" << priorname << "\" has no \"same_as\" entry." << std::endl;
                                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
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
                                        std::stringstream ss;
                                        ss << "\"parameters\" and \"prior_type\" need to be defined for prior \"" << priorname << "\"" << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                }
                        }
                        
                        if (needSet.size() != 0)
                        {
                                std::stringstream ss;
                                ss << "Priors are not defined for the following parameters:  [";
                                auto it = needSet.begin();
                                ss << *(it++);
                                for (; it != needSet.end(); it++)
                                {
                                        ss << ", "<< *it;
                                }
                                ss << "]" << std::endl;
                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                        }
                        
                        std::unordered_map<std::string, std::string> keyMap;
                        std::string index, result;
                        unsigned int reps;
                        for (auto strMap_it = sameMap.begin(), strMap_end = sameMap.end(); strMap_it != strMap_end; strMap_it++)
                        {
                                index = strMap_it->first;
                                result = strMap_it->second;
                                reps = 0;
                                while (sameMap.find(result) != sameMap.end())
                                {
                                        index = result;
                                        result = sameMap[index];
                                        
                                        if (result == strMap_it->first)
                                        {
                                                std::stringstream ss;
                                                ss << "Parameter " << strMap_it->first << " is \"same as\" itself." << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                break;
                                        }
                                        
                                        if (reps > sameMap.size())
                                        {
                                                std::stringstream ss;
                                                ss << "Parameter's \"same as\"'s are loop in on each other." << std::endl;
                                                Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                                break;
                                        }
                                        reps++;
                                }
                                
                                if (keyMap.find(result) == keyMap.end())
                                        keyMap[result] = strMap_it->first + std::string("+") + result;
                                else
                                        keyMap[result] = strMap_it->first + std::string("+") + keyMap[result];
                        }
                        
                        for (auto str_it = shown_param_names.begin(), str_end = shown_param_names.end(); str_it != str_end; str_it++)
                        {
                                auto it = keyMap.find(*str_it);
                                if (it != keyMap.end())
                                {
                                        *str_it = it->second;
                                }
                        }
                        
                        for (auto key_it = keyMap.begin(), key_end = keyMap.end(); key_it != key_end; key_it++)
                        {
                                if (paramSet.find(key_it->first) == paramSet.end())
                                {
                                        std::stringstream ss;
                                        ss << "same_as:  " << key_it->first << " is not defined in inifile." << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                }
                                else
                                {
                                        my_subpriors.push_back(new MultiPriors(key_it->second));
                                }
                        }
                        
                        int param_size = 0;
                        for (auto subprior = my_subpriors.begin(), subprior_end = my_subpriors.end(); subprior != subprior_end; subprior++)
                        {
                                param_size += (*subprior)->size();
                        }
                        
                        setSize(param_size);
                }
        } // end namespace Priors
} // end namespace Gambit

