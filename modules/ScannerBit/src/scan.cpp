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
                
                Gambit_Scanner::Gambit_Scanner (const Factory_Base &factoryIn, const Options &options, const Priors::CompositePrior &prior, printer_interface *printerInterface) 
                                : prior(prior), printerInterface(printerInterface), options(options)
                {       
                        if (options.hasKey("use_likelihood_plugins"))
                        {
                                auto plugs = options.getNames("use_likelihood_plugins");
                                std::map<std::string, std::vector<IniFileInterface>> interfaces;
                                std::string version, lib;
                                
                                for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                {
                                        if (options.hasKey(*it, "version"))
                                                version = options.getValue<std::string>("version");
                                        if (options.hasKey(*it, "library"))
                                                lib = "ScannerBit/lib/" + options.getValue<std::string>("library");
                                        if (options.hasKey(*it, "library_path"))
                                                lib = options.getValue<std::string>("library_path");
                                        auto pluginVec = plugins.find("like", *it, version, lib);
                                        
                                        if (pluginVec.size() > 0)
                                        {
                                                Plugin::PluginStruct &pls = pluginVec[0];
                                                //NOTE:  put error checking stuff here.
                                                interfaces["Likelihood"].emplace_back(pls.plugin, pls.library_path, options);
                                        }
                                }
                                
                                if (interfaces.size() > 0)
                                {
                                        factory = new Plugin_Function_Factory(prior, interfaces);
                                }
                                else
                                {
                                        factory = &factoryIn;
                                }
                        }
                        else
                        {
                                factory = &factoryIn;
                        }
                }
                
                int Gambit_Scanner::Run()
                {
                        std::string version = "", lib = "";
                        Plugin::PluginStruct plugin;
                        
                        auto names = options.getNames();
                        for (auto it = names.begin(), end = names.end(); it != end; it++)
                        {
                                if (options.hasKey(*it, "version"))
                                        version = options.getValue<std::string>("version");
                                if (options.hasKey(*it, "library"))
                                        lib = "ScannerBit/lib/" + options.getValue<std::string>("library");
                                if (options.hasKey(*it, "library_path"))
                                        lib = options.getValue<std::string>("library_path");
                                auto pluginVec = plugins.find("scan", *it, version, lib);
                                if (pluginVec.size() > 0)
                                {
                                        //NOTE:  put error checking here
                                        plugin = pluginVec[0];
                                        break;
                                }
                                
                        }
                        
                        Gambit::Scanner::IniFileInterface interface(plugin.plugin, plugin.library_path, options);
                        
                        unsigned int dim = factory->getDim();
                        
                        //scanLog::err.check();
                        //outputHandler::out.redir("scanner");
                        //try
                        //{
                                Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), plugin.full_string, dim, *factory, interface, prior);
                                plugin_interface();
                        //}
                        //catch (std::exception &exception)
                        //{
                        //        scanLog::err << exception.what() << scanLog::endl;
                        //}
                        outputHandler::out.defout();
                        scanLog::err.check();
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        }
}
