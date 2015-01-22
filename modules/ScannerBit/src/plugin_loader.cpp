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

#include "plugin_utilities.hpp"
#include "plugin_comparators.hpp"
#include "cmake_variables.hpp"
#include "plugin_loader.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        Plugin_Loader::Plugin_Loader() : path(GAMBIT_DIR "/ScannerBit/lib/")
                        {
                                std::string p_str;
                                if (FILE* p_f = popen((std::string("ls ") + path).c_str(), "r"))
                                {
                                        char path_buffer[1024];
                                        int p_n;
                                        while ((p_n = fread(path_buffer, 1, sizeof path_buffer, p_f)) > 0)
                                        {
                                                std::stringstream p_ss(std::string(path_buffer, p_n));
                                                while (p_ss >> p_str)
                                                {
                                                        if (p_str.find(".so") != std::string::npos)
                                                                loadLibrary (path + p_str);
                                                }
                                        }
                                        
                                        pclose(p_f);  
                                }
                        }
                                
                        std::vector<Plugin_Details> Plugin_Loader::getPluginsVec() const {return plugins;}

                        std::map<std::string, std::map<std::string, std::vector<Plugin_Details>>> Plugin_Loader::getPluginsMap() const {return plugin_map;}

                        void Plugin_Loader::loadLibrary (const std::string &p_str, const std::string &plug)
                        {
                                std::string str;
                                if (FILE* f = popen((std::string("nm ") + p_str + std::string(" | grep \"__gambit_plugin_pluginInit_\"")).c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                while(getline(ss, str))
                                                {
                                                        std::string::size_type pos = str.find("__gambit_plugin_pluginInit_");
                                                        
                                                        if (pos != std::string::npos && 
                                                                (str.rfind(" T ", pos) != std::string::npos || str.rfind(" t ", pos) != std::string::npos))
                                                        {
                                                                Plugin_Details temp(str.substr(pos + 27, str.rfind("__") - pos - 27));
                                                                
                                                                if (plug == "" || temp.plugin == plug)
                                                                {
                                                                        if (p_str.rfind("/") != std::string::npos)
                                                                                temp.library = p_str.substr(p_str.rfind("/") + 1);
                                                                        else
                                                                                temp.library = p_str;
                                                                        temp.library_path = p_str;
                                                                        plugins.push_back(temp);
                                                                        plugin_map[temp.type][temp.plugin].push_back(temp);
                                                                }
                                                        }
                                                }
                                        }
                                        
                                        pclose(f);
                                }
                        }
                                        
                        void Plugin_Loader::print ()
                        {
                                for (auto it = plugins.begin(), end = plugins.end(); it != end; it++)
                                {
                                        std::cout << it->print() << std::endl;
                                }
                        }
                        
                        Plugin_Details Plugin_Loader::find (const std::string &type, const std::string &plugin, const std::string &version, const std::string &lib) const
                        {
                                std::vector<Plugin_Details> plugins;

                                if((plugin_map.find(type) == plugin_map.end()) || (plugin_map.at(type).find(plugin) == plugin_map.at(type).end()))
                                {
                                        scan_err << "There is no plugin named \"" << plugin <<"\" of type \"" << type << "\"" << scan_end;
                                }
                                
                                for (auto it = plugin_map.at(type).at(plugin).begin(), end = plugin_map.at(type).at(plugin).end(); it != end; it++)
                                {
                                        if (VersionCompare(version)(*it) && (lib == "" || lib == it->library_path))
                                                plugins.push_back(*it);
                                }
                                
                                if (plugins.size() > 1)
                                {
                                        std::sort(plugins.begin(), plugins.end(), Plugin_Version_Supersedes);
                                        auto it2 = plugins.begin();
                                        for (auto it = it2 + 1, end = plugins.end(); it != end; it++)
                                        {
                                                if (*it == *it2)
                                                {
                                                        scan_err << "There are two plugins that met the input"
                                                                << " criteria in the inifile:\n" << it->print()
                                                                << "\n and ... \n\n" << it2->print() << scan_end;
                                                }
                                                else
                                                {
                                                        break;
                                                }
                                        }
                                }
                                else if (plugins.size() == 0)
                                {
                                        scan_err << "Plugin \"" << plugin << "\" of type \"" << type << "\" and " 
                                                << " version \"" << version << "\" is not found." << scan_end;
                                        plugins.resize(1);
                                }
                                
                                return plugins[0];
                        }

                        void pluginInfo::iniFile(const Options &options_in)
                        {
                                options = options_in;
                                if (options.getNode().IsMap())
                                {
                                        std::vector<std::string> selectedPluginNames = options.getNames();
                                        
                                        for (auto it = selectedPluginNames.begin(), end = selectedPluginNames.end(); it != end; it++)
                                        {
                                                Proto_Plugin_Details temp;
                                                if (options.hasKey(*it, "plugin"))
                                                {
                                                        temp.plugin = options.getValue<std::string>(*it, "plugin");
                                                }
                                                else
                                                {
                                                        scan_err << "Plugin name is not defined under the \"" << *it << "\" tag.  "
                                                                << "using the tag \"" << *it << "\" as the plugin name." << scan_end;
                                                        temp.plugin = *it;
                                                }
                                                if (options.hasKey(*it, "version"))
                                                        temp.version = options.getValue<std::string>(*it, "version");
                                                if (options.hasKey(*it, "library"))
                                                        temp.library = "ScannerBit/lib/" + options.getValue<std::string>(*it, "library");
                                                if (options.hasKey(*it, "library_path"))
                                                        temp.library = options.getValue<std::string>(*it, "library_path");
                                                        
                                                selectedPlugins[*it] = temp;
                                        }
                                }
                                else
                                {
                                        scan_err << "Plugins subsection is not of the \"Map\" YAML format." << scan_end;
                                }
                        }
                        
                        const Plugins::Plugin_Interface_Details& pluginInfo::operator()(const std::string &type, const std::string &pluginName)
                        {
                                auto it2 = selectedPlugins.find(pluginName);
                                if (it2 != selectedPlugins.end())
                                {
                                        return Plugin_Interface_Details(plugins.find(type, it2->second.plugin, it2->second.version, it2->second.library), options.getOptions(pluginName).getNode());
                                }
                                else
                                {
                                        scan_err << "Plugin \"" << pluginName << "\" is not defined under the \"plugins\""
                                                << " subsection in the inifile" << scan_end;
                                                
                                        return Plugin_Interface_Details();
                                }
                        }
                        
                        pluginInfo plugin_info;
                }
        }
}

