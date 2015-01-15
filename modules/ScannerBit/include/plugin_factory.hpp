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
#include <unordered_map>
#include <typeinfo>

#include "scanner_utils.hpp"
#include "scan.hpp"
#include "yaml_options.hpp"
#include "type_index.hpp"
#include "plugin_interface.hpp"
#include "priors/composite.hpp"

#define LOAD_FUNC_TEMPLATE(name, ...) REGISTER_ELEM(__functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>) 
#define LOAD_MULTI_FUNC_TEMPLATE(name, ...) REGISTER_ELEM(__multi_functions__, typeid(__VA_ARGS__), name<__VA_ARGS__>) 

namespace Gambit
{
        namespace Scanner
        {       
                using Gambit::type_index;
                
                registry
                {
                        typedef void* func_type(const std::vector<std::string> &, const Priors::BasePrior &, const IniFileInterface &);
                        typedef void* multi_func_type(const std::map<std::string, std::vector<std::string>> &, const Priors::BasePrior &, const std::vector<IniFileInterface> &);
                        std::unordered_map<type_index, func_type *, Gambit::type_hasher, Gambit::type_equal_to> __functions__;
                        std::unordered_map<type_index, multi_func_type *, Gambit::type_hasher, Gambit::type_equal_to> __multi_functions__;
                }
                
                template <typename T>
                class Scanner_Plugin_Function;
                
                template <typename T>
                class Multi_Scanner_Plugin_Function;
                
                LOAD_FUNC_TEMPLATE(Scanner_Plugin_Function, double(const std::vector<double> &));
                LOAD_MULTI_FUNC_TEMPLATE(Multi_Scanner_Plugin_Function, double(const std::vector<double> &));
                
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
                
                template <typename ret, typename... args>
                class Scanner_Plugin_Function<ret (args...)> : public Plugins::Plugin_Interface<ret (args...)>, public Function_Base<ret (args...)>
                {
                private:
                        //std::vector<double> &params;
                        
                public:
                        Scanner_Plugin_Function(const std::vector<std::string> &params, const Priors::BasePrior &prior, const IniFileInterface &interface) 
                                : Plugins::Plugin_Interface<double (const std::vector<double> &)>(interface.fileName(), interface.pluginName(), params, prior, interface)
                        {
                        }
                        
                        ret main(const args&... in)
                        {
                                return this->Plugins::Plugin_Interface<ret (args...)>::operator()(in...);
                        }
                };
                
                template <typename ret, typename... args>
                class Multi_Scanner_Plugin_Function <ret (args...)> : public Function_Base<ret (args...)>
                {
                private:
                        std::vector< Scanner_Plugin_Function<ret (args...)> > functions;
                        
                public:
                        Multi_Scanner_Plugin_Function(const std::map<std::string, std::vector<std::string>> &params, const Priors::BasePrior &prior, const std::vector<IniFileInterface> &interfaces)
                        {
                                for (auto it = interfaces.begin(), end = interfaces.end(); it != end; it++)
                                {
                                        functions.emplace_back(params.at(it->pluginName()), prior, *it);
                                }
                        }
                        
                        ret main(const args&... in)
                        {
                                ret retval = 0.0;
                                for (auto it = functions.begin(), end = functions.end(); it != end; it++)
                                {
                                        retval += it->main(in...);
                                }
                                
                                return retval;
                        }
                };
                
                class Plugin_Function_Factory : public Factory_Base
                {
                private:
                        std::map<std::string, std::vector<IniFileInterface>> interfaces;
                        std::map<std::string, std::vector<std::string>> parameters;
                        const Priors::CompositePrior &prior;
                        std::unordered_map<std::string, Gambit::type_index> purpose_index;
                        
                public:
                        Plugin_Function_Factory(const Priors::CompositePrior &prior, const std::map<std::string, std::vector<IniFileInterface>> &interfaces) 
                                : interfaces(interfaces), prior(prior)
                        {
                                parameters = convert_to_map(prior.getParameters());
                                purpose_index["Likelihood"] = typeid(double (const std::vector<double> &));
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
                                        return __functions__.at(purpose_index.at(purpose))(parameters.at(it->second.at(0).getTag()), prior, it->second.at(0));
                                }
                                else if (it->second.size() > 1)
                                {
                                        return __multi_functions__.at(purpose_index.at(purpose))(parameters, prior, it->second);
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
