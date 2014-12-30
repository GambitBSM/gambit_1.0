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
                                                        Plugin_Details temp;
                                                        int pos = str.find("__gambit_plugin_pluginInit_");
                                                        int posLast = str.rfind("__");
                                                        int posMid = str.rfind("__v__", posLast - 1);
                                                        temp.full_string = str.substr(pos + 27, posLast - pos - 27);
                                                        temp.version = str.substr(posMid + 5, posLast - posMid - 5);
                                                        posLast = str.rfind("__t__", posMid - 1);
                                                        temp.type = str.substr(posLast + 5, posMid - posLast - 5);
                                                        temp.plugin = str.substr(pos + 27, posLast - pos - 27);
                                                        
                                                        if (plug == "" || temp.plugin == plug)
                                                        {
                                                                posLast = temp.version.find("_");
                                                                temp.major_version = StringToInt(temp.version.substr(0, posLast));
                                                                posMid = temp.version.find("_", posLast + 1);
                                                                temp.minor_version = StringToInt(temp.version.substr(posLast + 1, posMid - posLast - 1));
                                                                posLast = temp.version.find("_", posMid + 1);
                                                                temp.patch_version = StringToInt(temp.version.substr(posMid + 1, posLast - posMid - 1));
                                                                temp.release_version = temp.version.substr(posLast + 1);
                                                                temp.version = IntToString(temp.major_version) + "." + IntToString(temp.minor_version) + "." + IntToString(temp.patch_version);
                                                                if (temp.release_version != "") temp.version += "-" + temp.release_version;  
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
                                                                << "\n and ... \n" << it2->print() << scan_end;
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

                }

                /// Scanner info accessor function
                Plugins::Plugin_Loader& scannerInfo()
                {
                        static Plugins::Plugin_Loader local;
                        return local;
                }

        }

}

