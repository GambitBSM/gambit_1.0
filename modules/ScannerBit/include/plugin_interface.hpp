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
#include <link.h>
#include <typeinfo>

#include "plugin_utilities.hpp"
#include "plugin_loader.hpp"

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
                                std::vector<void *> input;
                                std::string tag;
                                typedef const std::type_info &(*initFuncType)(const std::string &, const YAML::Node &, std::vector<void *> &);                              
                                typedef void * (*getFuncType)(std::string);
                                typedef ret (*mainFuncType)(args...);
                                initFuncType initFunc;
                                getFuncType getFunc;
                                mainFuncType main;
                                static ret dummy(args...){return ret();}
                                
                        public:
                                template <typename... plug_args>
                                Plugin_Interface(const std::string &type, const std::string &name, const plug_args&... inputs) : tag(name)
                                {
                                        Plugin_Interface_Details details = plugin_info(type, name);
                                        plugin = dlopen (details.library_path.c_str(), RTLD_LAZY);
                                        
                                        input_variadic_vector(input, inputs...);
                                        
                                        if (bool(plugin))
                                        {
                                                initFunc = (initFuncType)dlsym(plugin, (std::string("__gambit_plugin_pluginInit_") + details.full_string + std::string("__")).c_str());
                                                getFunc = (getFuncType)dlsym(plugin, (std::string("__gambit_plugin_getMember_") + details.full_string + std::string("__")).c_str());
                                                bool diff = typeid(ret (args...)) != initFunc(tag, details.node, input);
                                                
                                                main = (mainFuncType)getFunc(details.full_string);
                                                
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
                                                        scan_err << "error loading plugin " << name << ":  " << errmesg << scan_end;
                                        }
                                        else
                                        {
                                                scan_err << "Cannot load " << details.library_path << ":  " << dlerror() << scan_end;
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
