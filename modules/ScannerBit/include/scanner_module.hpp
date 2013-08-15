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

#ifndef SCANNER_MODULE_HPP
#define SCANNER_MODULE_HPP

#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <type_traits>

using namespace std;

namespace GAMBIT
{
        namespace Scanner
        {
                struct gambitData
                {
                        gambitData(){}
                        std::string name;
                        std::vector<std::string> *key_ptr;
                        std::vector<double> *upper_ptr;
                        std::vector<double> *lower_ptr;
                        std::map <std::string, std::pair<void (*)(std::string, gambitData &), void *>> valueMap;
                        std::vector<void (*)(gambitData &)> initFuncs;
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
                        typedef T subtype;                                                                                      
                        typedef void (*setValType)(std::string, gambitData &);                                                  
                        static setValType val(setValType &m){return m;}                                                         
                        static type *ptr(gambitData &moduleData){return 0;}                                                     
                };                                                                                                             
                
                template<>                                                                                                      
                struct gt_type_def<gambitKeys>                                                                                  
                {                                                                                                               
                        typedef typename gambitKeys::type type;                                                                 
                        typedef typename gambitKeys::type::value_type subtype;                                                  
                        typedef void (*setValType)(std::string, gambitData &);                                                  
                        static setValType val(setValType &m){return 0;}                                                         
                        static type *ptr(gambitData &moduleData){return moduleData.key_ptr;}                                    
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitUpperLimits>                                                                           
                {                                                                                                               
                        typedef typename gambitUpperLimits::type type;                                                          
                        typedef typename gambitUpperLimits::type::value_type subtype;                                           
                        typedef void (*setValType)(std::string, gambitData &);                                                  
                        static setValType val(setValType &m){return 0;}                                                         
                        static type *ptr(gambitData &moduleData){return moduleData.upper_ptr;}                                  
                };                                                                                                              
                                                                                                                                
                template<>                                                                                                      
                struct gt_type_def<gambitLowerLimits>                                                                           
                {                                                                                                               
                        typedef typename gambitLowerLimits::type type;                                                          
                        typedef typename gambitLowerLimits::type::value_type subtype;                                           
                        typedef void (*setValType)(std::string, gambitData &);                                                  
                        static setValType val(setValType &m){return 0;}                                                         
                        static type *ptr(gambitData &moduleData){return moduleData.lower_ptr;}                                  
                };
                
                template<>                                                                                                                                                                                                                                      
                struct gt_type_def<Function_Base>                                                                               
                {                                                                                                               
                        typedef typename Function_Base::type type;                                                              
                        typedef double subtype;                                                                                 
                        typedef void (*setValType)(std::string, gambitData &);                                                  
                        static setValType val(setValType &m){return 0;}                                                         
                        static type *ptr(gambitData &moduleData){return 0;}                                                     
                };                                                                                                              
        };
};

#define GET_VALUE(key) (*static_cast<typename GAMBIT_Scanner_Module_Namespace::interface                                \
                        <GAMBIT_Scanner_Module_Namespace::key ## _TAG>::gt_type::type *>                                \
                        (GAMBIT_Scanner_Module_Namespace::moduleData.valueMap[ #key ].second))                          \

#define GAMBIT_SCANNER_MAIN(name_in)                                                                                    \
        struct name_in ## _TAG{};                                                                                       \
        template<>                                                                                                      \
        bool GAMBIT_Scanner_Module_Namespace::dummy<name_in ## _TAG>::reg                                               \
                = (GAMBIT_Scanner_Module_Namespace::moduleData.name = #name_in, true);                                  \
        extern "C" void __scanner_module_ ## name_in ## _main__ ()                                                      \

#define REGISTER(type_in, name)                                                                                         \
namespace GAMBIT_Scanner_Module_Namespace                                                                               \
{                                                                                                                       \
        struct name ## _TAG{};                                                                                          \
        template <>                                                                                                     \
        class interface<name ## _TAG>                                                                                   \
        {                                                                                                               \
                public:                                                                                                 \
                typedef GAMBIT::Scanner::gt_type_def<type_in> gt_type;                                                  \
                static void init(gambitData &moduleData)                                                                \
                {                                                                                                       \
                        gt_type::setValType f = interface< name ## _TAG >::setValue;                                    \
                        moduleData.valueMap[ #name ].first = gt_type::val(f);                                           \
                        moduleData.valueMap[ #name ].second = gt_type::ptr(moduleData);                                 \
                }                                                                                                       \
                static void setValue(std::string in, gambitData &moduleData)                                            \
                {                                                                                                       \
                        typename gt_type::subtype *a = new typename gt_type::subtype;                                   \
                        std::stringstream stuff;                                                                        \
                        stuff << in;                                                                                    \
                        stuff >> *a;                                                                                    \
                        moduleData.valueMap[ #name ].second = (void *)a;                                                \
                }                                                                                                       \
        };                                                                                                              \
        template<>                                                                                                      \
        bool dummy<name ## _TAG>::reg = (moduleData.initFuncs.push_back(interface<name ## _TAG>::init), true);          \
};                                                                                                                      \

#define GAMBIT_SCANNER_MODULE(mod_name)                                                                                 \
namespace __scanner_module_ ## mod_name ## _namespace__                                                                 \
{                                                                                                                       \
        namespace GAMBIT_Scanner_Module_Namespace                                                                       \
        {                                                                                                               \
                using GAMBIT::Scanner::gambitData;                                                                      \
                gambitData moduleData;                                                                                  \
                                                                                                                        \
                template <class T>                                                                                      \
                class interface {};                                                                                     \
                                                                                                                        \
                template <class T>                                                                                      \
                struct dummy                                                                                            \
                {                                                                                                       \
                        static bool reg;                                                                                \
                };                                                                                                      \
                                                                                                                        \
                extern "C" void __scanner_module_ ## mod_name ## _moduleInit__(std::vector<std::string> &k,             \
                                                                                std::vector<double> &u,                 \
                                                                                std::vector<double> &l)                 \
                {                                                                                                       \
                        moduleData.key_ptr = &k; moduleData.upper_ptr = &u; moduleData.lower_ptr = &l;                  \
                                                                                                                        \
                        std::vector<void (*)(GAMBIT::Scanner::gambitData &)>::iterator it;                              \
                        for (it = moduleData.initFuncs.begin(); it != moduleData.initFuncs.end(); it++)                 \
                        {                                                                                               \
                                (**it)(moduleData);                                                                     \
                        }                                                                                               \
                                                                                                                        \
                }                                                                                                       \
                extern "C" void __scanner_module_ ## mod_name ## _setValue__(std::string val, std::string key)          \
                {                                                                                                       \
                        moduleData.valueMap[key].first(val, moduleData);                                                \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __scanner_module_ ## mod_name ## _setFunction__(void *val, std::string key)             \
                {                                                                                                       \
                        moduleData.valueMap[key].second = val;                                                          \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __scanner_module_ ## mod_name ## _getKeys__(std::string &str,                           \
                                                                                std::vector<std::string> &in,           \
                                                                                std::vector<std::string> &in2)          \
                {                                                                                                       \
                        str = moduleData.name;                                                                          \
                        in.reserve(moduleData.valueMap.size());                                                         \
                        in2.reserve(moduleData.valueMap.size());                                                        \
                        std::map<std::string, std::pair<void (*)(std::string, gambitData &), void *>>::iterator it;     \
                        for (it = moduleData.valueMap.begin(); it != moduleData.valueMap.end(); it++)                   \
                        {                                                                                               \
                                if (it->second.second == 0)                                                             \
                                {                                                                                       \
                                        if (it->second.first == 0)                                                      \
                                                in2.push_back(it->first);                                               \
                                        else                                                                            \
                                                in.push_back(it->first);                                                \
                                }                                                                                       \
                        }                                                                                               \
                }                                                                                                       \
        };                                                                                                              \
};                                                                                                                      \
namespace __scanner_module_ ## mod_name ## _namespace__                                                                 \

#endif