//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///        2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#ifndef GAMBIT_PLUGIN_DEFS_HPP
#define GAMBIT_PLUGIN_DEFS_HPP

#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <typeinfo>

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {

                        struct factoryBase
                        {
                                virtual void *operator()() = 0;
                                virtual void remove(void *) = 0;
                                virtual ~factoryBase(){}
                        };
                        
                        template <typename T>
                        struct funcFactory : factoryBase
                        {
                                T *func;
                                funcFactory (T *in) : func(in) {}
                                void *operator()(){return *(void**)&func;}
                                void remove(void*){};
                        };
                        
                        template <typename T>
                        struct classFactory : factoryBase
                        {
                                void *operator()(){return (void*) new T;}
                                void remove(void *in){delete (T *) in;}
                        };
                        
                        /// Structure that holds all the data provided by plugins about themselves.
                        struct pluginData
                        {
                                std::string name;
                                std::string version;
                                std::vector <void *> inputData;
                                std::vector <void (*)(pluginData &)> inits;
                                std::map<std::string, factoryBase *> outputFuncs;
                                std::type_info const &(*main_type)(void);
                                
                                pluginData(std::string name) : name(name) {}
                                ~pluginData()
                                {
                                        for (auto it = outputFuncs.begin(), end = outputFuncs.end(); it != end; it++)

                                        {
                                                delete it->second;
                                        }
                                }
                        };  

                }

        }

}

#endif
