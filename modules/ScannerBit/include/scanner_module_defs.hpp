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
                
                struct gambitData
                {
                        gambitData(){}
                        std::string name;
                        Function_Factory_Base *factory;
                        std::vector<std::string> key;
                        std::vector<double> upper;
                        std::vector<double> lower;
                        std::map <std::string, std::pair<void *(*)(std::string, gambitData &), void *>> valueMap;
                        std::map <std::string, void *> defaultMap;
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
                struct gt_type_def                                                                                              
                {                                                                                                               
                        typedef T type;                                                                                                    
                        static void *setValue(std::string in, gambitData &moduleData)                             
                        {                                                                                                       
                                type *a = 0;                                                                  
                                convert<type>(&a, in);                                       
                                return (void *)a;                                                
                        }                                              
                        static type *ptr(gambitData &moduleData){return 0;}                                                     
                };                                                                                                             
                
                template<>                                                                                                      
                struct gt_type_def<gambitKeys>                                                                                  
                {                                                                                                               
                        typedef typename gambitKeys::type type;    
                        static void *setValue(std::string in, gambitData &moduleData){}                                      
                        static type *ptr(gambitData &moduleData){return &moduleData.key;}                                    
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitUpperLimits>                                                                           
                {                                                                                                               
                        typedef typename gambitUpperLimits::type type;
                        static void *setValue(std::string in, gambitData &moduleData){}                                        
                        static type *ptr(gambitData &moduleData){return &moduleData.upper;}                                  
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitLowerLimits>                                                                           
                {                                                                                                               
                        typedef typename gambitLowerLimits::type type;
                        static void *setValue(std::string in, gambitData &moduleData){}                                   
                        static type *ptr(gambitData &moduleData){return &moduleData.lower;}                                  
                };
                
                template<>                                                                                                                                                                                                                                      
                struct gt_type_def<Function_Base>                                                                               
                {                                                                                                               
                        typedef typename Function_Base::type type;                                                                     
                        static void *setValue(std::string in, gambitData &moduleData)                             
                        {                                                                                                                                             
                                return (void *)(*moduleData.factory)("Scanner_Function", in);                                                
                        }                      
                        static type *ptr(gambitData &moduleData){return 0;}                                                     
                };        
        };
};

#endif