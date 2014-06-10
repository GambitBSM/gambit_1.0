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
#include "scanner_factory.hpp"

#include "yaml_options.hpp"
#include "plugin_interface.hpp"

namespace Gambit
{
        namespace Scanner_Testing
        {       
                inline std::map<std::string, std::vector<std::string>> convert_to_map(std::vector<std::string> vec)
                {
                        std::map<std::string, std::vector<std::string>> ret;
                        
                        for (auto it = vec.begin(), end = vec.end(); it != end; it++)
                        {
                                std::string::size_type pos = name_in.find("::");
                                ret[it->substr(0, pos)].push_back(it->substr(pos+2));
                        }
                        
                        return ret;
                }
                
                class Scanner_Plugin_Function : public Plugin_Interface<double (const std::vector<double> &)>, public Scanner::Function_Base
                {
                private:
                        std::vector<double> &params;
                        
                public:
                        Scanner_Plugin_Function(const std::vector<std::string> &params, const BasePrior &prior, const IniFileInterface_Base &interface) : Plugin_Interface<double (const std::vector<double> &)>(interface.fileName(), interface.pluginName(), params, prior, interface)
                        {
                        }
                        
                        void print(double a, const std::string &b) const {}
                };
                
                class Multi_Scanner_Plugin_Function : public Scanner::Function_Base
                {
                private:
                        std::vector<Plugin_Interface<double (const std::vector<double> &)>> functions;
                        
                public:
                        Multi_Scanner_Plugin_Function(const std::map<std::vector<std::string>> &params, const BasePrior &prior, std::vector<IniFileInterface_Base> interfaces)
                        {
                                for (auto it = interfaces.begin(), end = interfaces.end(); it != end; it++)
                                {
                                        functions.emplace_back(it->fileName(), it->pluginName(), params[it->pluginName()], prior, *it);
                                }
                        }
                        
                        double operator()(const vector<double> &in)
                        {
                                double ret = 0.0;
                                for (auto it = functions.begin(), end = functions.end(); it != end; it++)
                                {
                                        ret += (*(*it))(in);
                                }
                                
                                return 0.0;
                        }
                        
                        void print(double a, const std::string &b) const {}
                };
                
                class Plugin_Function_Factory : public Scanner::Factory_Base
                {
                private:
                        std::map<std::string, std::vector<Scanner::InifileInterface>> interfaces;
                        std::map<std::string, std::vector<std::string>> parameters;
                        const Prior::CompositePrior &prior;
                        
                public:
                        Plugin_Function_Factory(const Prior::CompositePrior &prior, const Options &options) : interface(options), prior(prior)
                        {
                                interfaces = function_inifile_input(options);
                                parameters = convert_to_map(prior.getParameters());
                        }
                        
                        const std::vector<std::string> & getKeys() const {return prior.getShownParameters();}
                        
                        unsigned int getDim() const {return prior.size();}
                        
                        void * operator() (const std::string &in, const std::string &purpose) const
                        {
                                auto it = interfaces.find(purpose);
                                
                                if (it == interfaces.end())
                                {
                                        return NULL;
                                }
                                else if (it->size() == 1)
                                {
                                        return new Scanner_Plugin_Function(interface.fileName(), interface.pluginName(), prior, it->second[0]);
                                }
                                else if (it->size() > 1)
                                {
                                        return new Multi_Scanner_Plugin_Function(interface.fileName(), interface.pluginName(), prior, it->second);
                                }
                                else
                                {
                                        return NULL;
                                }
                        }
                        
                        void remove(void *a) const
                        {
                        }

                        ~Plugin_Function_Factory()
                        {
                        }
                };
        }
}

#include <test_functions/test_function_list.hpp>

#endif
