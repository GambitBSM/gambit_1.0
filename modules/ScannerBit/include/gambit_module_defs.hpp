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
///  \date 2013 August 2013
///
///  *********************************************

#ifndef GAMBIT_MODULE_DEFS_HPP
#define GAMBIT_MODULE_DEFS_HPP

#include <vector>
#include <string>
#include <map>

using namespace std;

namespace GAMBIT
{
        namespace Module
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
                
                /*Generic data entry type that holds all the */
                struct entryData
                {
                        void *value;
                        virtual bool isEntry(){return true;};
                        virtual void setValue(std::string in){};
                        virtual void setValue(entryData &){};
                        virtual ~entryData(){};
                };
                
                /*Structure that contains all the data inputed by ScannerBit*/
                struct gambitData
                {
                        std::string name;
                        void *factory;
                        std::vector<void *> inputData;
                        std::map <std::string, entryData *> valueMap;
                        std::map <std::string, entryData *> defaultMap;
                        std::vector <void (*)(gambitData &)> inits;
                        std::map<std::string, factoryBase *> outputFuncs;
                        
                        gambitData(std::string name) : name(name) {}
                        ~gambitData()
                        {
                                std::map <std::string, entryData *>::iterator it;
                                for (it = valueMap.begin(); it != valueMap.end(); it++)
                                {
                                        delete it->second;
                                }
                                
                                for (it = defaultMap.begin(); it != defaultMap.end(); it++)
                                {
                                        delete it->second;
                                }
                                
                                for (std::map<std::string, factoryBase *>::iterator it = outputFuncs.begin(); it != outputFuncs.end(); it++)
                                {
                                        delete it->second;
                                }
                        }
                };
                
                template<typename T, int i = 0>
                struct gt_entry
                {
                        typedef T type;
                        enum {value = i};
                };
                               
                /*type def templated to help compiler keep track of types.*/
                template<typename T>                                                                                               
                struct gt_type_def : public entryData                                                                                           
                {                                                                                                               
                        typedef T type;   
                        gt_type_def(gambitData &moduleData){value = new type;}
                        void setValue(std::string in)                             
                        {                                                                                                       
                                type *a = (type *)value;                                                                  
                                convert<type>(&a, in);                                               
                        }                     
                        void setValue(entryData &in)
                        {
                                *((type *)value) = *((type *)in.value);
                        }
                        ~gt_type_def(){delete (type *)value;}                                                 
                }; 
                 
                template<typename T, int i>                                                                                                      
                struct gt_type_def<gt_entry<T, i>> : public entryData                                                                                
                {                                                                                                               
                        typedef typename gt_entry<T, i>::type type;   
                        gt_type_def(gambitData &moduleData){value = moduleData.inputData[gt_entry<T, i>::value];}
                        bool isEntry () {return false;}                        
                }; 
                
                 
        };
        
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {
                /*Specialized types*/
                typedef GAMBIT::Module::gt_entry<std::vector<std::string>, 0> gambitKeys;                                                    
                typedef GAMBIT::Module::gt_entry<std::vector<double>, 1> gambitUpperLimits;                                                    
                typedef GAMBIT::Module::gt_entry<std::vector<double>, 2> gambitLowerLimits;
                
                /*Generic Functor*/
                class Function_Base
                {
                public:
                        typedef Function_Base type;
                        virtual double operator () (std::vector<double> &) = 0;
                };
                
                /*Factory inported by ScannerBit*/
                class Function_Factory_Base
                {
                public:
                        virtual void * operator() (std::string, std::string) = 0;
                        virtual void remove(std::string, void *) = 0;
                        virtual ~Function_Factory_Base(){}
                };
        };
        
        namespace Module
        {
                template<>                                                                                                                                                                                                                                      
                struct gt_type_def<Scanner::Function_Base> : public entryData                                                     
                {                                                       
                        Scanner::Function_Factory_Base *factory;
                        typedef typename Scanner::Function_Base::type type; 
                        gt_type_def(gambitData &moduleData){value = 0; factory = (Scanner::Function_Factory_Base *)moduleData.factory;}
                        void setValue(std::string in)                             
                        {                                                                                                                                             
                                value = (*factory)("Scanner_Function", in);                                                
                        }   
                        
                        void setValue(entryData &in)
                        {
                                if (in.value != 0)
                                {
                                        value = in.value;
                                        in.value = 0;
                                }
                        }
                        
                        ~gt_type_def (){}
                }; 
        };
};

#endif