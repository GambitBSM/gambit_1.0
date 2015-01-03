//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Loader singleton class for scanner plugins
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

#ifndef __PLUGIN_LOADER_HPP
#define __PLUGIN_LOADER_HPP

#include <vector>
#include <unordered_map>
#include <string>

#include "plugin_details.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        
                        class Plugin_Loader
                        {
                        private:
                                std::string path;
                                std::vector<Plugin_Details> plugins;
                                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> plugin_map;
                                
                        public:
                                Plugin_Loader();                       
                                std::vector<Plugin_Details> getPluginsVec() const;
                                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> getPluginsMap() const;
                                void loadLibrary (const std::string&, const std::string& = "");                        
                                void print ();
                                Plugin_Details find (const std::string&, const std::string&, const std::string&, const std::string&) const;
                        };
                        
                }
                  
                /// Scanner info accessor function
                Plugins::Plugin_Loader& scannerInfo();

         }

}

#endif
