//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  test functions implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb 2014
///
///  *********************************************

#ifndef __plugin_factory_hpp__
#define __plugin_factory_hpp__

#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

#include "scanner_utils.hpp"
#include "scan.hpp"
#include "yaml_options.hpp"
#include "plugin_interface.hpp"
#include "priors/composite.hpp"

namespace Gambit
{
        namespace Scanner
        {       
                inline std::map<std::string, std::vector<std::string>> convert_to_map(const std::vector<std::string> &vec)
                {
                        std::map<std::string, std::vector<std::string>> ret;
                        
                        for (auto it = vec.begin(), end = vec.end(); it != end; it++)
                        {
                                std::string::size_type pos = it->find("::");
                                ret[it->substr(0, pos)].push_back(it->substr(pos+2));
                        }
                        
                        return ret;
                }
                
                class Scanner_Plugin_Function : public Plugins::Plugin_Interface<double (const std::vector<double> &)>, public Function_Base
                {
                private:
                        //std::vector<double> &params;
                        
                public:
                        Scanner_Plugin_Function(const std::vector<std::string> &params, const Priors::BasePrior &prior, const IniFileInterface &interface) 
                                : Plugins::Plugin_Interface<double (const std::vector<double> &)>(interface.fileName(), interface.pluginName(), params, prior, interface)
                        {
                        }
                        
                        double main(const std::vector<double> &in)
                        {
                                return this->Plugins::Plugin_Interface<double (const std::vector<double> &)>::operator()(in);
                        }
                };
                
                class Multi_Scanner_Plugin_Function : public Function_Base
                {
                private:
                        std::vector<Scanner_Plugin_Function> functions;
                        
                public:
                        Multi_Scanner_Plugin_Function(const std::map<std::string, std::vector<std::string>> &params, const Priors::BasePrior &prior, std::vector<IniFileInterface> interfaces)
                        {
                                for (auto it = interfaces.begin(), end = interfaces.end(); it != end; it++)
                                {
                                        functions.emplace_back(params.at(it->pluginName()), prior, *it);
                                }
                        }
                        
                        double main(const std::vector<double> &in)
                        {
                                double ret = 0.0;
                                for (auto it = functions.begin(), end = functions.end(); it != end; it++)
                                {
                                        ret += it->main(in);
                                }
                                
                                return ret;
                        }
                };
                
                class Plugin_Function_Factory : public Factory_Base
                {
                private:
                        std::map<std::string, std::vector<IniFileInterface>> interfaces;
                        std::map<std::string, std::vector<std::string>> parameters;
                        const Priors::CompositePrior &prior;
                        
                public:
                        Plugin_Function_Factory(const Priors::CompositePrior &prior, const std::map<std::string, std::vector<IniFileInterface>> &interfaces) 
                                : interfaces(interfaces), prior(prior)
                        {
                                parameters = convert_to_map(prior.getParameters());
                        }
                        
                        void * operator() (const std::string &purpose) const
                        {
                                auto it = interfaces.find(purpose);
                                
                                if (it == interfaces.end())
                                {
                                        return NULL;
                                }
                                else if (it->second.size() == 1)
                                {
                                        return new Scanner_Plugin_Function(parameters.at(it->second.at(0).getTag()), prior, it->second.at(0));
                                }
                                else if (it->second.size() > 1)
                                {
                                        return new Multi_Scanner_Plugin_Function(parameters, prior, it->second);
                                }
                                else
                                {
                                        return NULL;
                                }
                        }

                        ~Plugin_Function_Factory()
                        {
                        }
                };
        }
}

#endif
