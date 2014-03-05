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
                IniFileInterface::IniFileInterface(const IniParser::IniFile &iniFile) : boundIniFile(&iniFile)
                {       
                        bool redirect = false;
                        if (iniFile.hasScannerKey("enable_redirect"))
                        {
                                redirect = iniFile.getScannerValue<bool>("enable_redirect");
                        }

                        if (redirect)
                        {
                                if (iniFile.hasScannerKey("redirect_output", "scanner"))
                                {
                                        std::string file = iniFile.getScannerValue<std::string>("redirect_output", "scanner");
                                        
                                        outputHandler::out.set("scanner", file);
                                }
                                if (iniFile.hasScannerKey("redirect_output", "error"))
                                {
                                        std::string file = iniFile.getScannerValue<std::string>("redirect_output", "error");
                                        scanLog::err << scanLog::set_output(file);
                                }
                        }
                        
                        if (iniFile.hasScannerKey("scanner", "file_path"))
                        {
                                file = iniFile.getScannerValue<std::string>("scanner", "file_path");

                                if (boundIniFile->hasScannerKey("scanner", "plugin")) 
                                {
                                        name = iniFile.getScannerValue<std::string>("scanner", "plugin");
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