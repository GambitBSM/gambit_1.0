//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner inifile interface implementations.
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
///  \date 2013 July 2013 Feb 2014
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#include <inifile_interface.hpp>

namespace Gambit
{
        namespace Scanner
        {
                IniFileInterface scanner_inifile_input(const Options &options)
                {
                        bool redirect = false;
                        if (options.hasKey("enable_redirect"))
                        {
                                redirect = options.getValue<bool>("enable_redirect");
                        }

                        if (redirect)
                        {
                                if (options.hasKey("redirect_output", "scanner"))
                                {
                                        std::string file = options.getValue<std::string>("redirect_output", "scanner");
                                        
                                        outputHandler::out.set("scanner", file);
                                }
                                if (options.hasKey("redirect_output", "error"))
                                {
                                        std::string file = options.getValue<std::string>("redirect_output", "error");
                                        scanLog::err << scanLog::set_output(file);
                                }
                        }
                        
                        std::string name;
                        
                        if (options.hasKey("plugin")) 
                        {
                                name = options.getValue<std::string>("plugin");
                        }
                        else
                        {
                                name = "";
                        }
                        
                        return IniFileInterface(name, options);
                }
                
                std::map<std::string, std::vector<IniFileInterface>> function_inifile_input(const Options &options)
                {       
                        std::vector<std::pair<std::string, std::string>> names;
                        
                        if (options.hasKey("plugins")) 
                        {
                                names = options.getValue<std::vector<std::pair<std::string, std::string>>>("plugins");
                        }
                        
                        std::map<std::string, std::vector<IniFileInterface>> ret;
                        
                        for (auto it = names.begin(), end = names.end(); it != end; it++)
                        {
                                ret[it->second].emplace_back(it->first, options);
                        }
                        
                        return ret;
                }
                
                IniFileInterface::IniFileInterface(const std::string &name, const Options &options) : name(name), options(options)
                {       
                        if (options.hasKey("file_path"))
                        {
                                file = options.getValue<std::string>("file_path");
                        }
                        else
                        {
                                file = "";
                        }
                }
        }
}