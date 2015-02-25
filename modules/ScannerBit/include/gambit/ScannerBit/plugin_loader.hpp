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

#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"

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
                                const printer_interface *printer;
                                YAML::Node node;
                                
                                Plugin_Interface_Details(){}
                                Plugin_Interface_Details(const Plugin_Details &details, printer_interface *printer, const YAML::Node &node) 
                                        : full_string(details.full_string), path(details.path), printer(printer), node(node) {}
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
                                void process(const std::string &, const std::string &);
                                std::vector<Plugin_Details> getPluginsVec() const;
                                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> getPluginsMap() const;
                                void loadLibrary (const std::string&, const std::string& = "");                        
                                void print () const;
                                Plugin_Details find (const std::string&, const std::string&, const std::string&, const std::string&) const;
                        };
                        
                        ///Container for all the plugin info from the inifile and Scannerbit
                        class pluginInfo
                        {
                        private:
                                std::map<std::string, Proto_Plugin_Details> selectedPlugins;
                                mutable Plugins::Plugin_Loader plugins;
                                printer_interface *printer;
                                Options options;
                                
                        public:
                                void iniFile(const Options &, printer_interface &);
                                const Plugin_Loader &operator()(){return plugins;}
                                Plugin_Interface_Details operator()(const std::string &, const std::string &);
                        };
                        
                        ///Access Functor for plugin info
                        extern pluginInfo plugin_info;
                }
         }
}

#endif
