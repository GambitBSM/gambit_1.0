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

namespace Gambit
{
        namespace Scanner
        { 
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
                                        plugin = pluginVec[0];
                                        break;
                                }
                                
                        }
                        
                        Gambit::Scanner::IniFileInterface interface(plugin.plugin, plugin.library_path, options);
                        
                        unsigned int dim = factory.getDim();
                        
                        //scanLog::err.check();
                        //outputHandler::out.redir("scanner");
                        //try
                        //{
                                Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), interface.pluginName(), dim, factory, interface, prior);
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
