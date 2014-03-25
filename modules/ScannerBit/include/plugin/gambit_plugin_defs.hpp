//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
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

#ifndef GAMBIT_PLUGIN_DEFS_HPP
#define GAMBIT_PLUGIN_DEFS_HPP

#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <plugin/plugin_exception.hpp>
#include <typeinfo>

using namespace std;

namespace Gambit
{
        namespace Plugin
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
                        void remove(void * in){};
                };
                
                template <typename T>
                struct classFactory : factoryBase
                {
                        void *operator()(){return (void*) new T;}
                        void remove(void *in){delete (T *) in;}
                };
                
                /*Structure that contains all the data inputed by ScannerBit*/
                struct gambitData
                {
                        std::string name;
                        std::string version;
                        std::vector <void *> inputData;
                        std::vector <void (*)(gambitData &)> inits;
                        std::map<std::string, factoryBase *> outputFuncs;
                        std::type_info const &(*main_type)(void);
                        
                        gambitData(std::string name) : name(name), main_type([]()->const std::type_info & {return typeid(void);}) {}
                        ~gambitData()
                        {
                                std::for_each (outputFuncs.begin(), outputFuncs.end(), [] (std::pair<std::string, factoryBase *> outputMap)
                                {
                                        delete outputMap.second;
                                });
                        }
                };  
        }
}

#endif
