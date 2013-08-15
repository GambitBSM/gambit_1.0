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
                        gambitData(std::string name) : name(name) {func_name = name + string("_main");}
                        std::string name;
                        std::string func_name;
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
                
                template <class T>
                struct inputName{};
                
                template <class T>
                struct types {};
                
                template <class T>
                class interface {};
                
                template <class T>
                struct dummy
                {
                        static bool reg;
                };
        };
};

#define STR1(X) #X
#define STR(X) STR1(X)

#define GET_VALUE(key) (*static_cast<typename GAMBIT::Scanner::types<GAMBIT::Scanner::key ## _TAG>::type *>(GAMBIT::Scanner::moduleData.valueMap[ #key ].second))

#define GAMBIT_SCANNER_MAIN(name)  extern "C" void name ## _main ()

#define REGISTER(type_in, name)                                                                                                 \
namespace GAMBIT                                                                                                                \
{                                                                                                                               \
        namespace Scanner                                                                                                       \
        {                                                                                                                       \
                struct name ## _TAG{};                                                                                          \
                template <>                                                                                                     \
                struct types<name ## _TAG>{typedef typename gt_type_def<type_in>::type type;};                                  \
                template <>                                                                                                     \
                class interface<name ## _TAG>                                                                                   \
                {                                                                                                               \
                        public:                                                                                                 \
                        static void init(gambitData &moduleData)                                                                \
                        {                                                                                                       \
                                void (*setFunc)(std::string, gambitData &) = interface< name ## _TAG >::setValue;               \
                                moduleData.valueMap[ #name ].first = gt_type_def<type_in>::val(setFunc);                        \
                                moduleData.valueMap[ #name ].second = gt_type_def<type_in>::ptr(moduleData);                    \
                        }                                                                                                       \
                        static void setValue(std::string in, gambitData &moduleData)                                            \
                        {                                                                                                       \
                                typename gt_type_def<type_in>::subtype *a = new typename gt_type_def<type_in>::subtype;         \
                                std::stringstream stuff;                                                                        \
                                stuff << in;                                                                                    \
                                stuff >> *a;                                                                                    \
                                moduleData.valueMap[ #name ].second = (void *)a;                                                \
                        }                                                                                                       \
                };                                                                                                              \
                template<>                                                                                                      \
                bool dummy<name ## _TAG>::reg = (moduleData.initFuncs.push_back(interface<name ## _TAG>::init), true);          \
        };                                                                                                                      \
};                                                                                                                              \

#define GAMBIT_SCANNER_MODULE(mod_name)                                                                                         \
namespace GAMBIT                                                                                                                \
{                                                                                                                               \
        namespace Scanner                                                                                                       \
        {                                                                                                                       \
                gambitData moduleData( #mod_name );                                                                             \
                                                                                                                                \
                struct mod_name ## _TAG{};                                                                                      \
                                                                                                                                \
                template<>                                                                                                      \
                struct inputName <mod_name ## _TAG>                                                                             \
                {                                                                                                               \
                        static void input(std::string name, gambitData &moduleData){moduleData.func_name = name;}               \
                };                                                                                                              \
                                                                                                                                \
                template<class T>                                                                                               \
                struct gt_type_def                                                                                              \
                {                                                                                                               \
                        typedef T type;                                                                                         \
                        typedef T subtype;                                                                                      \
                        typedef void (*setValType)(std::string, gambitData &);                                                  \
                        static setValType val(setValType &m){return m;}                                                         \
                        static type *ptr(gambitData &moduleData){return 0;}                                                     \
                };                                                                                                              \
                                                                                                                                \
                template<>                                                                                                      \
                struct gt_type_def<gambitKeys>                                                                                  \
                {                                                                                                               \
                        typedef typename gambitKeys::type type;                                                                 \
                        typedef typename gambitKeys::type::value_type subtype;                                                  \
                        typedef void (*setValType)(std::string, gambitData &);                                                  \
                        static setValType val(setValType &m){return 0;}                                                         \
                        static type *ptr(gambitData &moduleData){return moduleData.key_ptr;}                                    \
                };                                                                                                              \
                                                                                                                                \
                template<>                                                                                                      \
                struct gt_type_def<gambitUpperLimits>                                                                           \
                {                                                                                                               \
                        typedef typename gambitUpperLimits::type type;                                                          \
                        typedef typename gambitUpperLimits::type::value_type subtype;                                           \
                        typedef void (*setValType)(std::string, gambitData &);                                                  \
                        static setValType val(setValType &m){return 0;}                                                         \
                        static type *ptr(gambitData &moduleData){return moduleData.upper_ptr;}                                  \
                };                                                                                                              \
                                                                                                                                \
                template<>                                                                                                      \
                struct gt_type_def<gambitLowerLimits>                                                                           \
                {                                                                                                               \
                        typedef typename gambitLowerLimits::type type;                                                          \
                        typedef typename gambitLowerLimits::type::value_type subtype;                                           \
                        typedef void (*setValType)(std::string, gambitData &);                                                  \
                        static setValType val(setValType &m){return 0;}                                                         \
                        static type *ptr(gambitData &moduleData){return moduleData.lower_ptr;}                                  \
                };                                                                                                              \
                template<>                                                                                                      \
                                                                                                                                \
                struct gt_type_def<Function_Base>                                                                               \
                {                                                                                                               \
                        typedef typename Function_Base::type type;                                                              \
                        typedef double subtype;                                                                                 \
                        typedef void (*setValType)(std::string, gambitData &);                                                  \
                        static setValType val(setValType &m){return 0;}                                                         \
                        static type *ptr(gambitData &moduleData){return 0;}                                                     \
                };                                                                                                              \
                                                                                                                                \
                extern "C" void moduleInit(std::vector<std::string> &k, std::vector<double> &u, std::vector<double> &l)         \
                {                                                                                                               \
                        moduleData.key_ptr = &k; moduleData.upper_ptr = &u; moduleData.lower_ptr = &l;                          \
                                                                                                                                \
                        for (std::vector<void (*)(gambitData &)>::iterator it = moduleData.initFuncs.begin(); it != moduleData.initFuncs.end(); it++) \
                        {                                                                                                       \
                                (**it)(moduleData);                                                                             \
                        }                                                                                                       \
                                                                                                                                \
                }                                                                                                               \
                extern "C" void setValue(std::string val, std::string key)                                                      \
                {                                                                                                               \
                        moduleData.valueMap[key].first(val, moduleData);                                                        \
                }                                                                                                               \
                                                                                                                                \
                extern "C" void setFunction(void *val, std::string key)                                                         \
                {                                                                                                               \
                        moduleData.valueMap[key].second = val;                                                                  \
                }                                                                                                               \
                                                                                                                                \
                extern "C" void getKeys(std::vector<std::string> &in, std::vector<std::string> &in2)                            \
                {                                                                                                               \
                        in.reserve(moduleData.valueMap.size());                                                                 \
                        in2.reserve(moduleData.valueMap.size());                                                                \
                        for (std::map<std::string, std::pair<void (*)(std::string, gambitData &), void *>>::iterator it = moduleData.valueMap.begin();           \
                        it != moduleData.valueMap.end(); it++)                                                                  \
                        {                                                                                                       \
                                if (it->second.second == 0)                                                                     \
                                {                                                                                               \
                                        if (it->second.first == 0)                                                              \
                                                in2.push_back(it->first);                                                       \
                                        else                                                                                    \
                                                in.push_back(it->first);                                                        \
                                }                                                                                               \
                        }                                                                                                       \
                }                                                                                                               \
                                                                                                                                \
                extern "C" void getNames(std::string &mod, std::string &func)                                                   \
                {                                                                                                               \
                        mod = moduleData.name;                                                                                  \
                        func = moduleData.func_name;                                                                            \
                }                                                                                                               \
        };                                                                                                                      \
};  

#endif