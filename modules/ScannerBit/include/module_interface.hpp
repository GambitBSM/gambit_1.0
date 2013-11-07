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
///  \date 2013 August 2013
///
///  *********************************************

#ifndef GAMBIT_MODULE_INTERFACE_HPP
#define GAMBIT_MODULE_INTERFACE_HPP

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
#include <functors.hpp>
#include <graphs.hpp>
#include <dlfcn.h>

namespace Gambit
{
        namespace Module
        {
                const unsigned char FORCE = 0x01;
                const std::string sblank = std::string("       \033[7D");
                const std::string blank = std::string("               \033[15D");
                const std::string bblank = std::string("                              \033[30D");          
                
                inline bool vector_elem_check(std::vector<std::string> &vec, std::string elem)
                {
                        for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
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
                
                class IniFileInterface
                {
                private:
                        const IniParser::IniFile *boundIniFile;
                        
                public:
                        IniFileInterface(const IniParser::IniFile *boundIniFile) : boundIniFile(boundIniFile) {}
                        
                        virtual bool hasKey(std::string name, std::string in) {return boundIniFile->hasKey(name, in);}
                        
                        virtual std::string getValue(std::string name, std::string in) {return boundIniFile->getValue<std::string>(name, in);}
                };
                
                template <typename T>
                class Module_Interface
                {
                private:
                        bool open;
                        void *plugin;
                        std::string errors;
                        std::string name;
                        std::string version;
                        std::vector<std::string> mod_names;
                        IniFileInterface iniFileInterface;
                        typedef void (*initFuncType)(std::vector<void *> *, void *);                              
                        typedef void * (*getFuncType)(std::string);
                        typedef void (*rmFuncType)(void *, std::string);
                        initFuncType initFunc;
                        getFuncType getFunc;
                        rmFuncType rmFunc;
                        
                public:
                        T* main;
                        
                        Module_Interface(std::string file, std::string name_in, std::string version, const IniParser::IniFile *boundIniFile = NULL, std::vector<void*> *input = NULL) : iniFileInterface(boundIniFile), errors(""), open(true), name(name_in), version(version)
                        {
                                unsigned char flag = 0x00;
                                plugin = dlopen (file.c_str(), RTLD_NOW);
                                std::string str;
                                
                                if (FILE* f = popen((std::string("nm ") + file + std::string(" | grep \"__gambit_module_moduleInit_\"")).c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                while(getline(ss, str))
                                                {
                                                        int pos = str.find("__gambit_module_moduleInit_");
                                                        int posLast = str.rfind("__");
                                                        mod_names.push_back(str.substr(pos + 27, posLast - pos - 27));
                                                }
                                        }
                                        
                                        pclose(f);
                                }
                                
                                if (bool(plugin))
                                {
                                        if (mod_names.size() == 0)
                                        {
                                                char con;
                                                bool is_not_char;
                                                std::cout << std::endl << std::endl;
                                                do
                                                {
                                                        std::cout << "\e[00;31mERROR:\e[00m  Could not find any modules in file \"" << file << "\".  "
                                                        << "It could be that you are on Ben's computer.  If so, would you like to continue loading module \""
                                                        << name << "\" (y/n)?  " << std::flush;
                                                        std::getline(std::cin, str);
                                                        std::istringstream ss(str);
                                                        is_not_char = !(ss >> con);
                                                }
                                                while(!(con == 'y' || con == 'Y' || con == 'n' || con == 'N') || is_not_char);
                                                
                                                if (con == 'Y' || con == 'y')
                                                        flag = FORCE;
                                                else
                                                        flag = 0x00;
                                        }
                                        
                                        if (mod_names.size() > 0 || bool(flag&FORCE))
                                        {
                                                if (!vector_elem_check(mod_names, name) && !bool(flag&FORCE))
                                                {
                                                        
                                                        if (name !=  "")
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Module \"" << name << "\" is not in file \"" << file << "\".\n\n";
                                                        else
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Module was not specified in ini-file.\n\n";
                                                        
                                                        std::cout << "Modules in \"" << file << "\" are:\n";
                                                        for (int i = 0; i < mod_names.size(); i++)
                                                        {
                                                                std::cout << "   Module " << i << ":  " << mod_names[i] << "\n";
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
                                        
                                                initFunc = (initFuncType)dlsym(plugin, (std::string("__gambit_module_moduleInit_") + name + std::string("__")).c_str());
                                                getFunc = (getFuncType)dlsym(plugin, (std::string("__gambit_module_getMember_") + name + std::string("__")).c_str());
                                                rmFunc = (rmFuncType)dlsym(plugin, (std::string("__gambit_module_rmMember_") + name + std::string("__")).c_str());

                                                initFunc(input, (void *)(&iniFileInterface));
                                                main = (T *)getFunc(name);
                                                
                                                if (main == 0)
                                                {
                                                        std::stringstream ss;
                                                        ss << "\e[00;31mERROR:\e[00m  Could not find main function in module \"" << name << "\".";
                                                        errors = ss.str();
                                                }
                                        }
                                        else
                                        {
                                                std::stringstream ss;
                                                ss << "\e[00;31mERROR:\e[00m  Could not find any modules in file \"" << file << "\".";
                                                errors = ss.str();
                                        }
                                }
                                else
                                {
                                        std::stringstream ss;
                                        ss << "\e[00;31mERROR:\e[00m  Cannot load " << file << ":  " << dlerror();
                                        errors = ss.str();
                                        open = false;
                                }
                        }
                        
                        void *getMember(std::string in){return getFunc(in);}
                        void deleteMember(void *ptr, std::string in){rmFunc(ptr, in);}
                        const std::string printErrors() const {return errors;}
                        
                        ~Module_Interface(){if (open) dlclose(plugin);}
                };
        };
};

#endif