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
#include <yaml_parser.hpp>
#include <algorithm>
#include <gambit_scan.hpp>

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
                        IniFileInterface(const IniParser::IniFile &iniFile);
                        
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
                        
                        ~IniFileInterface(){}
                };
        }
}

#endif
