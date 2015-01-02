//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Interface details for scanner plugins
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

#ifndef __PLUGIN_INTERFACE_HPP
#define __PLUGIN_INTERFACE_HPP

#include <vector>
#include <string>
#include <sstream>
#include <dlfcn.h>
#include <typeinfo>

#include "plugin_utilities.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        
                        template <typename T> class Plugin_Interface;
                        
                        template <typename ret, typename... args>
                        class Plugin_Interface <ret (args...)>
                        {
                        private:
                                void *plugin;
                                std::string name;
                                std::vector<std::string> mod_names;
                                std::vector<void *> input;
                                typedef const std::type_info &(*initFuncType)(std::vector<void *> *);                              
                                typedef void * (*getFuncType)(std::string);
                                typedef void (*rmFuncType)(void *, std::string);
                                typedef ret (*mainFuncType)(args...);
                                typedef void (*deconFuncType)();
                                initFuncType initFunc;
                                getFuncType getFunc;
                                rmFuncType rmFunc;
                                mainFuncType main;
                                deconFuncType deconFunc;
                                
                        public:
                                template <typename... plug_args>
                                Plugin_Interface(const std::string &file, const std::string &name_in, const plug_args&... inputs) : name(name_in)
                                {
                                        plugin = dlopen (file.c_str(), RTLD_NOW);
                                        std::string str;
                                        
                                        input_variadic_vector(input, inputs...);
                                        
                                        if (FILE* f = popen((std::string("nm ") + file + std::string(" | grep \"__gambit_plugin_pluginInit_\"")).c_str(), "r"))
                                        {
                                                char buffer[1024];
                                                int n;
                                                
                                                while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                                {
                                                        std::stringstream ss(std::string(buffer, n));
                                                        while(getline(ss, str))
                                                        {
                                                                int pos = str.find("__gambit_plugin_pluginInit_");
                                                                int posLast = str.rfind("__");
                                                                mod_names.push_back(str.substr(pos + 27, posLast - pos - 27));
                                                        }
                                                }
                                                
                                                pclose(f);
                                        }
                                        
                                        if (bool(plugin))
                                        {
                                                if (mod_names.size() > 0)
                                                {
                                                        if (!vector_elem_check(mod_names, name))
                                                        {
                                                                
                                                                if (name !=  "")
                                                                        std::cout << "\n\e[01;33mWARNING:\e[00m  Plugin \"" << name << "\" is not in file \"" << file << "\".\n\n";
                                                                else
                                                                        std::cout << "\n\e[01;33mWARNING:\e[00m  Plugin was not specified in ini-file.\n\n";
                                                                
                                                                std::cout << "Plugins in \"" << file << "\" are:\n";
                                                                for (int i = 0, end = mod_names.size(); i < end; i++)
                                                                {
                                                                        std::cout << "   Plugin " << i << ":  " << mod_names[i] << "\n";
                                                                }
                                                                std::cout << "\nPlease choose a module number:  " << std::flush;
                                                                unsigned int iin;
                                                                std::getline(std::cin, str);
                                                                std::istringstream ss(str);
                                                                bool is_not_int = !(ss >> iin);
                                                                while(iin < 0 || iin >= mod_names.size() || is_not_int)
                                                                {
                                                                        std::cout << "\033[1APlease choose a module number:  " << bblank << std::flush;
                                                                        std::getline(std::cin, str);
                                                                        std::stringstream ss(str);
                                                                        is_not_int = !(ss >> iin);
                                                                }
                                                                name = mod_names[iin];
                                                        }
                                                
                                                        initFunc = (initFuncType)dlsym(plugin, (std::string("__gambit_plugin_pluginInit_") + name + std::string("__")).c_str());
                                                        getFunc = (getFuncType)dlsym(plugin, (std::string("__gambit_plugin_getMember_") + name + std::string("__")).c_str());
                                                        rmFunc = (rmFuncType)dlsym(plugin, (std::string("__gambit_plugin_rmMember_") + name + std::string("__")).c_str());
                                                        bool diff = typeid(ret (args...)) != initFunc(&input);
                                                        
                                                        main = (mainFuncType)getFunc(name);
                                                        
                                                        if (main == 0)
                                                        {
                                                                scan_err << "Could not find main function in plugin \"" << name << "\"." << scan_end;
                                                        }
                                                        
                                                        if(diff)
                                                        {
                                                                scan_err << "Plugin interface requires the plugin_main function in plugin \"" << name << "\" to be of the form \"" 
                                                                        << typeid(ret).name() << " (" << stringify_variadic_inputs(typeid(args).name()...) << ")\"" << scan_end;
                                                        }
                                                        
                                                        deconFunc = (deconFuncType)getFunc("__gambit_plugin_deconstructor__");
                                                }
                                                else
                                                {
                                                        scan_err << "Could not find any modules in file \"" << file << "\"." << scan_end;
                                                }
                                        }
                                        else
                                        {
                                                scan_err << "Cannot load " << file << ":  " << dlerror() << scan_end;
                                                plugin = 0;
                                        }
                                }
                                
                                ret operator() (const args&... params) 
                                {
                                        return main(params...);
                                }
                                
                                void *getMember(std::string in){return getFunc(in);}
                                void deleteMember(void *ptr, std::string in){rmFunc(ptr, in);}
                                
                                ~Plugin_Interface()
                                {
                                        if (deconFunc != NULL)
                                                deconFunc();
                                        
                                        if (plugin != 0) dlclose(plugin);
                                }
                        };

                }

        }

}

#endif
