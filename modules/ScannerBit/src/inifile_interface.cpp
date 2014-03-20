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
                IniFileInterface::IniFileInterface(const YAML::Node &node) : scanner_options(node)
                {       
                        bool redirect = false;
                        if (scanner_options.hasKey("enable_redirect"))
                        {
                                redirect = scanner_options.getValue<bool>("enable_redirect");
                        }

                        if (redirect)
                        {
                                if (scanner_options.hasKey("redirect_output", "scanner"))
                                {
                                        std::string file = scanner_options.getValue<std::string>("redirect_output", "scanner");
                                        
                                        outputHandler::out.set("scanner", file);
                                }
                                if (scanner_options.hasKey("redirect_output", "error"))
                                {
                                        std::string file = scanner_options.getValue<std::string>("redirect_output", "error");
                                        scanLog::err << scanLog::set_output(file);
                                }
                        }
                        
                        if (scanner_options.hasKey("scanner", "file_path"))
                        {
                                file = scanner_options.getValue<std::string>("scanner", "file_path");

                                if (scanner_options.hasKey("scanner", "plugin")) 
                                {
                                        name = scanner_options.getValue<std::string>("scanner", "plugin");
                                }
                                else
                                {
                                        name = "";
                                }
                        }
                        else
                        {
                                file = "";
                                name = "";
                        }
                }
        }
}