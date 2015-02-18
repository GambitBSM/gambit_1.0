//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Class to hold details of scanner plugins and
///  define simple comparison operations on them. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///  \date 2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#include <string>
#include <ostream>
#include <sstream>

#include "gambit/ScannerBit/plugin_utilities.hpp"
#include "gambit/ScannerBit/plugin_details.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                                
                        Plugin_Details::Plugin_Details(const std::string &str) : full_string(str)
                        {
                                std::string::size_type posLast = str.rfind("__reqd_libs__");
                                std::string::size_type posMid;
                                
                                if (posLast != std::string::npos)
                                {
                                        std::string temp = str.substr(posLast + 13);
                                        if (temp == "0")
                                        {
                                                status = -1;
                                        }
                                        else if (temp == "1")
                                        {
                                                status = 0;
                                        }
                                        else if (temp == "2")
                                        {
                                                status = -2;
                                        }
                                        else
                                        {
                                                status = -3;
                                                scan_warn << "Extern libraries are required for plugin "
                                                        << " but is not in header file." << scan_end;
                                        }
                                        
                                        posMid = str.rfind("__v__");
                                        version = str.substr(posMid + 5, posLast - posMid - 5);
                                }
                                else
                                {
                                        status= 1;
                                
                                        posMid = str.rfind("__v__");
                                        version = str.substr(posMid + 5);
                                }
                                
                                posLast = str.rfind("__t__", posMid - 1);
                                type = str.substr(posLast + 5, posMid - posLast - 5);
                                plugin = str.substr(0, posLast);
                                
                                posLast = version.find("_");
                                major_version = StringToInt(version.substr(0, posLast));
                                posMid = version.find("_", posLast + 1);
                                minor_version = StringToInt(version.substr(posLast + 1, posMid - posLast - 1));
                                posLast = version.find("_", posMid + 1);
                                patch_version = StringToInt(version.substr(posMid + 1, posLast - posMid - 1));
                                release_version = version.substr(posLast + 1);
                                version = IntToString(major_version) + "." + IntToString(minor_version) + "." + IntToString(patch_version);
                                if (release_version != "") 
                                        version += "-" + release_version;
                        }
                                
                        std::string Plugin_Details::printMin() const
                        {
                                std::stringstream out;
                                out << "plugin:  " << plugin << std::endl;
                                out << "version:  " << version << std::endl;
                                out << "type:  " << type << std::endl;
                                
                                return out.str();
                        }
                                
                        std::string Plugin_Details::print() const
                        {
                                std::stringstream out;
                                out << "plugin:  " << plugin << std::endl;
                                out << "\tversion:  " << version << std::endl;
                                out << "\tmajor version:  " << major_version << std::endl;
                                out << "\tminor version:  " << minor_version << std::endl;
                                out << "\tpatch version:  " << patch_version << std::endl;
                                out << "\tplugin path:  " << path << std::endl;
                                out << "\ttype:  " << type << std::endl;
                                
                                return out.str();
                        }
                        
                        bool Plugin_Version_Supersedes(const Plugin_Details &plug1, const Plugin_Details &plug2)
                        {
                                if (plug1.major_version > plug2.major_version)
                                {
                                        return true;
                                }
                                else if (plug1.major_version == plug2.major_version)
                                {
                                        if (plug1.minor_version > plug2.minor_version)
                                        {
                                                return true;
                                        }
                                        else if (plug1.minor_version == plug2.minor_version)
                                        {
                                                if (plug1.patch_version > plug2.patch_version)
                                                {
                                                        return true;
                                                }
                                                else if (plug1.patch_version == plug2.patch_version)
                                                {
                                                        if (plug1.release_version == "" && plug2.release_version != "")
                                                        {
                                                                return true;
                                                        }
                                                }
                                        }
                                }
                                
                                return false;
                        }
                                        
                }

        }

}
