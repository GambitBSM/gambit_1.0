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
                                typedef ret (*mainFuncType)(args...);
                                initFuncType initFunc;
                                getFuncType getFunc;
                                mainFuncType main;
                                static ret dummy(args...){return ret();}
                                
                        public:
                                template <typename... plug_args>
                                Plugin_Interface(const std::string &file, const std::string &name_in, const plug_args&... inputs) : name(name_in)
                                {
                                        plugin = dlopen (file.c_str(), RTLD_LAZY);
                                        std::string str;
                                        
                                        input_variadic_vector(input, inputs...);
                                        
                                        if (bool(plugin))
                                        {
                                                initFunc = (initFuncType)dlsym(plugin, (std::string("__gambit_plugin_pluginInit_") + name + std::string("__")).c_str());
                                                getFunc = (getFuncType)dlsym(plugin, (std::string("__gambit_plugin_getMember_") + name + std::string("__")).c_str());
                                                bool diff = typeid(ret (args...)) != initFunc(&input);
                                                
                                                main = (mainFuncType)getFunc(name);
                                                
                                                if (main == 0)
                                                {
                                                        scan_err << "Could not find main function in plugin \"" << name << "\". Using dummy main function." << scan_end;
                                                        main = dummy;
                                                }
                                                else if(diff)
                                                {
                                                        scan_err << "Plugin interface requires the plugin_main function in plugin \"" << name << "\" to be of the form \"" 
                                                                << typeid(ret).name() << " (" << stringify_variadic_inputs(typeid(args).name()...) << ")\"" << scan_end;
                                                }
                                                
                                                char *errmesg = dlerror();
                                                if (errmesg != NULL)
                                                        scan_err << "error loading plugin " << name_in << ":  " << errmesg << scan_end;
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
                                
                                ~Plugin_Interface()
                                {
                                        if (plugin != 0) dlclose(plugin);
                                }
                        };

                }

        }

}

#endif
