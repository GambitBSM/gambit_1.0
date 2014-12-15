//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory method implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July, Aug
///  \date 2014 Feb
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 Mar
///
///  *********************************************

#include "scan.hpp"
#include "plugin_interface.hpp"
#include "inifile_interface.hpp"
#include "plugin_factory.hpp"

namespace Gambit
{
        namespace Scanner
        {
                Gambit_Scanner::Gambit_Scanner (const Factory_Base &factoryIn, const Options &options, const Priors::CompositePrior &priorIn, printer_interface *printerInterface) 
                                : printerInterface(printerInterface), options(options)
                {
                        if (!options.hasKey("plugins"))
                        {
                                //NOTE:  put error message here.
                                return;
                        }
                        
                        std::vector<std::string> iniPlugNames = options.getNames("plugins");
                        
                        for (auto it = iniPlugNames.begin(), end = iniPlugNames.end(); it != end; it++)
                        {
                                if (options.hasKey("plugins", *it, "plugin"))
                                {
                                        iniPluginStruct temp;
                                        temp.plugin = options.getValue<std::string>("plugins", *it, "plugin");
                                        if (options.hasKey("plugins", *it, "version"))
                                                temp.version = options.getValue<std::string>("version");
                                        if (options.hasKey("plugins", *it, "library"))
                                                temp.library = "ScannerBit/lib/" + options.getValue<std::string>("library");
                                        if (options.hasKey("plugins", *it, "library_path"))
                                                temp.library = options.getValue<std::string>("library_path");
                                        
                                        iniPlugs[*it] = temp;
                                }
                                else
                                {
                                        //NOTE:  put warning here
                                }
                                        
                        }
                        
                        if (options.hasKey("use_likelihood_plugins"))
                        {
                                auto plugs = options.getValue<std::vector<std::string>>("use_likelihood_plugins");
                                std::map<std::string, std::vector<IniFileInterface>> interfaces;
                                std::string version, lib;
                                
                                for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                {
                                        auto it2 = iniPlugs.find(*it);
                                        if (it2 != iniPlugs.end())
                                        {
                                                auto pluginVec = plugins.find("like", it2->second.plugin, it2->second.version, it2->second.library);
                                                if (pluginVec.size() > 0)
                                                {
                                                        Plugin::PluginStruct &pls = pluginVec[0];
                                                        //NOTE:  put error checking stuff here.
                                                        interfaces["Likelihood"].emplace_back(*it, pls, options.getOptions("plugins"));
                                                }
                                        }
                                        else
                                        {
                                                //NOTE:  put error message here.
                                        }
                                }
                                
                                if (interfaces.size() > 0)
                                {
                                        if (!options.hasKey("parameters") || !options.hasKey("priors"))
                                        {
                                                //NOTE:  put error message here.
                                                return;
                                        }
                                        
                                        prior = new Gambit::Priors::CompositePrior(options.getOptions("parameters"), options.getOptions("priors"));
                                        factory = new Plugin_Function_Factory(*prior, interfaces);
                                }
                                else
                                {
                                        factory = &factoryIn;
                                        prior = &priorIn;
                                }
                        }
                        else
                        {
                                factory = &factoryIn;
                        }
                }
                
                int Gambit_Scanner::Run()
                {
                        Plugin::PluginStruct plugin;
                        std::string pluginName;
                        if (options.hasKey("use_scanner_plugin"))
                        {
                                auto it2 = iniPlugs.find(pluginName = options.getValue<std::string>("use_scanner_plugin"));
                                if (it2 != iniPlugs.end())
                                {
                                        auto pluginVec = plugins.find("scan", it2->second.plugin, it2->second.version, it2->second.library);
                                        if (pluginVec.size() > 0)
                                        {
                                                plugin = pluginVec[0];
                                        }
                                }
                                else
                                {
                                        //NOTE:  put error message here.
                                }
                        }
                        else
                        {
                                //NOTE:  put error message here.
                        }

                        Gambit::Scanner::IniFileInterface interface(pluginName, plugin, options.getOptions("plugins"));
                        
                        unsigned int dim = factory->getDim();
                        
                        //scanLog::err.check();
                        //outputHandler::out.redir("scanner");
                        //try
                        //{
                                Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), plugin.full_string, dim, *factory, interface, *prior);
                                plugin_interface();
                        //}
                        //catch (std::exception &exception)
                        //{
                        //        scanLog::err << exception.what() << scanLog::endl;
                        //}
                        //outputHandler::out.defout();
                        //scanLog::err.check();
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        }
}
