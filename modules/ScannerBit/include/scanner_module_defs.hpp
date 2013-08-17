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

#ifndef SCANNER_MODULE_DEFS_HPP
#define SCANNER_MODULE_DEFS_HPP

#include <vector>
#include <string>
#include <map>

using namespace std;

namespace GAMBIT
{
        namespace Scanner
        {
                class Function_Factory_Base
                {
                public:
                        virtual void * operator() (std::string, std::string) = 0;
                };
                
                struct entryData
                {
                        void *value;
                        virtual bool isEntry(){return true;};
                        virtual void setValue(std::string in){};
                        virtual void setValue(entryData &){};
                        virtual ~entryData(){};
                };
                
                struct gambitData
                {
                        std::string name;
                        Function_Factory_Base *factory;
                        std::vector<std::string> *key;
                        std::vector<double> *upper;
                        std::vector<double> *lower;
                        std::map <std::string, entryData *> valueMap;
                        std::map <std::string, entryData *> defaultMap;
                        std::vector <void (*)(gambitData &)> inits;
                        
                        gambitData(){}
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
                        }
                };

                struct gambitKeys{typedef std::vector<std::string> type;};                                                      
                struct gambitUpperLimits{typedef std::vector<double> type;};                                                    
                struct gambitLowerLimits{typedef std::vector<double> type;};
                
                class Function_Base
                {
                public:
                        typedef Function_Base type;
                        virtual double operator () (std::vector<double> &) = 0;
                };
                
                template<class T>                                                                                               
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
                
                template<>                                                                                                      
                struct gt_type_def<gambitKeys> : public entryData                                                                                
                {                                                                                                               
                        typedef typename gambitKeys::type type;   
                        gt_type_def(gambitData &moduleData){value = moduleData.key;}
                        bool isEntry () {return false;}                        
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitUpperLimits> : public entryData                                                                    
                {                                                                                                               
                        typedef typename gambitUpperLimits::type type;
                        gt_type_def(gambitData &moduleData){value = moduleData.upper;}
                        bool isEntry () {return false;}                 
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitLowerLimits> : public entryData                                           
                {                                                                                                               
                        typedef typename gambitLowerLimits::type type;
                        gt_type_def(gambitData &moduleData){value = moduleData.lower;}
                        bool isEntry () {return false;}                
                };
                
                template<>                                                                                                                                                                                                                                      
                struct gt_type_def<Function_Base> : public entryData                                                     
                {                                                       
                        Function_Factory_Base *factory;
                        typedef typename Function_Base::type type; 
                        gt_type_def(gambitData &moduleData){value = 0; factory = moduleData.factory;}
                        void setValue(std::string in)                             
                        {                                                                                                                                             
                                value = (void *)(*factory)("Scanner_Function", in);                                                
                        }   
                        void setValue(entryData &in)
                        {
                                if (in.value != 0)
                                {
                                        value = in.value;
                                        in.value = 0;
                                }
                        }
                        ~gt_type_def (){if (value != 0) delete (type *)value;}
                };        
        };
};

#endif