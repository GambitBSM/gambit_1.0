//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for the module interface
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef GAMBIT_PLUGIN_INTERFACE_HPP
#define GAMBIT_PLUGIN_INTERFACE_HPP

#include <vector>
#include <unordered_map>
#include <set>
#include <string>
#include <cfloat>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include <scanner_utils.hpp>
#include <plugin/plugin_exception.hpp>
#include <typeinfo>

namespace Gambit
{
        namespace Plugin
        {
                const unsigned char FORCE = 0x01;
                const std::string sblank = std::string("       \033[7D");
                const std::string blank = std::string("               \033[15D");
                const std::string bblank = std::string("                              \033[30D");          
                
                inline bool vector_elem_check(std::vector<std::string> &vec, std::string elem)
                {
                        for (auto it = vec.begin(); it != vec.end(); it++)
                        {
                                if ((*it) == elem)
                                {
                                        return true;
                                }
                        }
                        
                        return false;
                }
                
                inline void clearInputBuffer()
                {
                        char c;
                        do 
                        {
                                c = getchar();
                        } 
                        while (c != '\n' && c != EOF);
                }
                
                inline std::string stringify_variadic_inputs()
                {
                        return "";
                }
                
                inline std::string stringify_variadic_inputs(const std::string &in)
                {
                        return in;
                }
                
                template <typename... args>
                inline std::string stringify_variadic_inputs(const std::string &in, const args&... params)
                {
                        return in + ", " + stringify_variadic_inputs(params...);
                }
                
                inline void input_variadic_vector(std::vector<void *> &input){}
                
                template <typename T, typename... args>
                inline void input_variadic_vector(std::vector<void *> &input, const T& value, const args&... params)
                {
                        input.push_back((void *)&value);
                        input_variadic_vector(input, params...);
                }
                
                template <typename T> class Plugin_Interface;
                
                template <typename ret, typename... args>
                class Plugin_Interface <ret (args...)>
                {
                private:
                        void *plugin;
                        std::string name;
                        std::vector<std::string> mod_names;
                        std::vector<void *> input;
                        typedef const type_info &(*initFuncType)(std::vector<void *> *);                              
                        typedef void * (*getFuncType)(std::string);
                        typedef void (*rmFuncType)(void *, std::string);
                        typedef ret (*mainFuncType)(args...);
                        initFuncType initFunc;
                        getFuncType getFunc;
                        rmFuncType rmFunc;
                        mainFuncType main;
                        
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
                                                        for (int i = 0; i < mod_names.size(); i++)
                                                        {
                                                                std::cout << "   Plugin " << i << ":  " << mod_names[i] << "\n";
                                                        }
                                                        std::cout << "\nPlease choose a module number:  " << std::flush;
                                                        int iin;
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
                                                        ostringstream ss;
                                                        ss << "Could not find main function in plugin \"" << name << "\".";
                                                        throw Gambit::Plugin::PluginException(ss.str());
                                                }
                                                
                                                if(diff)
                                                {
                                                        ostringstream ss;
                                                        ss << "Plugin interface requires the plugin_main function in plugin \"" << name << "\" to be of the form \"" << typeid(ret).name() << " (" << stringify_variadic_inputs(typeid(args).name()...) << ")\"";
                                                        throw Gambit::Plugin::PluginException(ss.str());
                                                }
                                        }
                                        else
                                        {
                                                ostringstream ss;
                                                ss << "Could not find any modules in file \"" << file << "\".";
                                                throw Gambit::Plugin::PluginException(ss.str()); 
                                        }
                                }
                                else
                                {
                                        ostringstream ss;
                                        ss << "Cannot load " << file << ":  " << dlerror();
                                        plugin = 0;
                                        throw Gambit::Plugin::PluginException(ss.str()); 
                                }
                        }
                        
                        ret operator() (const args&... params) 
                        {
                                return main(params...);
                        }
                        
                        void *getMember(std::string in){return getFunc(in);}
                        void deleteMember(void *ptr, std::string in){rmFunc(ptr, in);}
                        
                        ~Plugin_Interface(){if (plugin != 0) dlclose(plugin);}
                };
        }
}

#endif