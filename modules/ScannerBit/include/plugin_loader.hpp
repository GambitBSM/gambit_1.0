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
#include "yaml_options.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        ///Plugin info from inifile
                        struct Proto_Plugin_Details
                        {
                                std::string plugin;
                                std::string version;
                                std::string path;
                                
                                Proto_Plugin_Details() : plugin(""), version(""), path("") {}
                        };
                        
                        ///Plugin info to be given to the interface class
                        struct Plugin_Interface_Details
                        {
                                std::string full_string;
                                std::string path;
                                YAML::Node node;
                                
                                Plugin_Interface_Details(){}
                                Plugin_Interface_Details(const Plugin_Details &details, const YAML::Node &node) 
                                        : full_string(details.full_string), path(details.path), node(node) {}
                        };
                
                        ///container class for the actual plugins detected my ScannerBit
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
                        
                        ///Container for all the plugin info from the inifile and Scannerbit
                        class pluginInfo
                        {
                        private:
                                std::map<std::string, Proto_Plugin_Details> selectedPlugins;
                                const Plugins::Plugin_Loader plugins;
                                Options options;
                                
                        public:
                                void iniFile(const Options &);
                                const Plugin_Loader &operator()(){return plugins;}
                                const Plugin_Interface_Details &operator()(const std::string &, const std::string &);
                        };
                        
                        ///Access Functor for plugin info
                        extern pluginInfo plugin_info;
                }
         }
}

#endif
