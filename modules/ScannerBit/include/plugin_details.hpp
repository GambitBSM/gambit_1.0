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

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        
                        struct Plugin_Details
                        {
                                std::string version;
                                int major_version;
                                int minor_version;
                                int patch_version;
                                int status;
                                std::string release_version;
                                std::string path;
                                std::string plugin;
                                std::string type;
                                std::string full_string;
                                
                                Plugin_Details(){}
                                
                                Plugin_Details(const std::string &str);
                                
                                std::string printMin() const;
                                
                                std::string print() const;
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
                                
                                return true;
                        }
                        
                        bool Plugin_Version_Supersedes(const Plugin_Details &plug1, const Plugin_Details &plug2);
                                        
                }

        }

}

#endif
