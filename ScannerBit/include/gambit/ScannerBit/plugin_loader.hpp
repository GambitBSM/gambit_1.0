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
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/ScannerBit/scanner_utils.hpp"

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
                Plugin_Details &details;
                const printer_interface *printer;
                YAML::Node flags;
                YAML::Node node;
                
                Plugin_Interface_Details(Plugin_Details &details, printer_interface *printer, const YAML::Node &node) 
                        : details(details), printer(printer), flags(details.flags), node(node) {}
            };
    
            ///container class for the actual plugins detected my ScannerBit
            class Plugin_Loader
            {
            private:
                std::string path;
                std::vector<Plugin_Details> plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> plugin_map;
                std::vector<Plugin_Details> excluded_plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> excluded_plugin_map;
                std::vector<Plugin_Details> total_plugins;
                std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> total_plugin_map;
                YAML::Node flags_node;
                    
            public:
                Plugin_Loader();
                void process(const std::string &, const std::string &, const std::string &);
                const std::vector<Plugin_Details> &getPluginsVec() const {return total_plugins;}
                const std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> &getPluginsMap() const {return total_plugin_map;}
                void loadExcluded(const std::string &);
                void loadLibrary (const std::string &, const std::string & = "");
                std::vector<std::string> print_plugin_names(const std::string & = "") const;
                std::string print_all (const std::string &plug_type = "") const;
                int print_all_to_screen (const std::string &plug_type = "") const;
                std::string print_plugin (const std::string &) const;
                std::string print_plugin (const std::string &, const std::string &) const;
                int print_plugin_to_screen (const std::string &) const;
                int print_plugin_to_screen (const std::string &, const std::string &) const;
                int print_plugin_to_screen (const std::vector<std::string> &) const;
                Plugin_Details &find (const std::string &, const std::string &, const std::string &, const std::string &) const;
            };
            
            class __plugin_resume_base__
            {
            public:
                virtual void print(std::ofstream &) = 0;
            };
            
            template <typename T>
            class __plugin_resume__ : public __plugin_resume_base__
            {
            private:
                T *data;
                
            public:
                __plugin_resume__(T &data) : data(&data) {}
                __plugin_resume__(const __plugin_resume__ &in) : data(in.data) {}
                __plugin_resume__ &operator()(const __plugin_resume__ &in) {data = in.data; return *this;}
                void print(std::ofstream &out)
                {
                    resume_file_output<T>(out, *data);
                }
            };
            
            ///Container for all the plugin info from the inifile and Scannerbit
            class pluginInfo
            {
            private:
                std::map<std::string, std::map<std::string, Proto_Plugin_Details> > selectedPlugins;
                mutable Plugins::Plugin_Loader plugins;
                std::map<std::string, std::vector<__plugin_resume_base__ *>> resume_data;
                printer_interface *printer;
                Options options;
                
                void set_resume(std::vector<__plugin_resume_base__ *> &){}
                                
                template<typename U, typename... T>
                void set_resume(std::vector<__plugin_resume_base__ *> &r_data, U& param, T&... params)
                {
                    r_data.push_back(new __plugin_resume__<U>(param));
                    set_resume(r_data, params...); 
                }
                
                void get_resume(std::ifstream &){}
                
                template<typename U, typename... T>
                void get_resume(std::ifstream &in, U& param, T&... params)
                {
                    resume_file_input(in, param);
                    get_resume(in, params...);
                }
                
            public:
                void iniFile(const Options &, printer_interface &);
                
                template <typename... T>
                void resume(const std::string &name, T&... data)
                {
                    if (printer->resume_mode())
                    {
                        if (resume_data.find(name) == resume_data.end())
                        {
                            scan_err << "Can not load resume data." << scan_end;
                        }
                        else
                        {
                            std::ifstream in((std::string(GAMBIT_DIR) + "/" + name).c_str());
                            get_resume(in, data...);
                        }
                    }
                    else
                    {
                        set_resume(resume_data[name], data...);
                    }
                }
                
                void finalize()
                {
                    for (auto it = resume_data.begin(), end = resume_data.end(); it != end; ++it)
                    {
                        std::ofstream out(it->first);
                        for (auto v_it = it->second.begin(), v_end = it->second.end(); v_it != v_end; ++v_it)
                        {
                            (*v_it)->print(out);
                        }
                    }
                }
                
                const Plugin_Loader &operator()(){return plugins;}
                Plugin_Interface_Details operator()(const std::string &, const std::string &);
            };
            
            ///Access Functor for plugin info
            extern pluginInfo plugin_info;
            
        }
        
    }
    
}

#endif
