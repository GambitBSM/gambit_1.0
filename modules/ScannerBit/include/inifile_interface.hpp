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

#ifndef __inifile_interface_hpp__
#define __inifile_interface_hpp__

#include <vector>
#include <string>
#include <scanner_utils.hpp>

#define INPUT_SCANNER_FUNCTION(map, func) \
map[ #func ].first = factory_template <func>::factory; \
map[ #func ].second = factory_template <func>::remove; \

namespace Gambit
{
        namespace Scanner
        {
                class IniFileInterface : public IniFileInterface_Base
                {
                private:
                        const IniParser::IniFile *boundIniFile;
                        std::string file;
                        std::string name;
                        
                public:
                        IniFileInterface(const IniParser::IniFile &iniFile) : boundIniFile(&iniFile)
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
                        
                        const std::string pluginName() const {return name;};
                        
                        const std::string fileName() const {return file;};
                        
                        const std::string getValue(const std::string &in) const
                        {
                                if (boundIniFile->hasScannerKey(name.c_str(), in.c_str()))
                                {
                                        return boundIniFile->getScannerValue<std::string>(name.c_str(), in.c_str());
                                }
                                else
                                {
                                        return std::string("");
                                }
                        }
                        #ifndef NO_GCC_4_7
                        ~IniFileInterface() noexcept {}
			#else
                        ~IniFileInterface(){}
			#endif
                };
        }
}

#endif
