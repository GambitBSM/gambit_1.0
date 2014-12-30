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

#ifndef __PLUGIN_DETAILS_HPP
#define __PLUGIN_DETAILS_HPP

#include <unordered_map>
#include <string>
#include <ostream>
#include <sstream>

namespace Gambit
{

        namespace Plugin
        {
                
                struct Plugin_Details
                {
                        std::string version;
                        int major_version;
                        int minor_version;
                        int patch_version;
                        std::string release_version;
                        std::string library_path;
                        std::string library;
                        std::string plugin;
                        std::string type;
                        std::string full_string;
                        
                        std::string print() const
                        {
                                std::stringstream out;
                                out << "plugin:  " << plugin << std::endl;
                                out << "\tversion:  " << version << std::endl;
                                out << "\tmajor version:  " << major_version << std::endl;
                                out << "\tminor version:  " << minor_version << std::endl;
                                out << "\tpatch version:  " << patch_version << std::endl;
                                out << "\trelease version:  " << release_version << std::endl;
                                out << "\tlibrary_path:  " << library_path << std::endl;
                                out << "\tlibrary:  " << library << std::endl;
                                out << "\ttype:  " << type << std::endl;
                                
                                return out.str();
                        }
                };
                
                inline bool operator == (const Plugin_Details &plug1, const Plugin_Details &plug2)
                {
                        if ((plug1.major_version != plug2.major_version) ||
                                (plug1.major_version != plug2.major_version) ||
                                (plug1.minor_version != plug2.minor_version) ||
                                (plug1.release_version == "" && plug2.release_version != "") ||
                                (plug1.release_version != "" && plug2.release_version == ""))
                        {
                                return false;
                        }
                        
                        return false;
                }
                
                inline bool Plugin_Version_Supersedes(const Plugin_Details &plug1, const Plugin_Details &plug2)
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

#endif
