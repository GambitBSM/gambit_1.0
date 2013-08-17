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

#ifndef SCANNER_MODULE_MACROS_HPP
#define SCANNER_MODULE_MACROS_HPP

#define GET_VALUE(key) (*static_cast                                                                                    \
                        <                                                                                               \
                                typename GAMBIT_Scanner_Module_Namespace::interface                                     \
                                <                                                                                       \
                                        GAMBIT_Scanner_Module_Namespace::Tags::key                                      \
                                >                                                                                       \
                                ::gt_type::type *                                                                       \
                        >                                                                                               \
                        (GAMBIT_Scanner_Module_Namespace::moduleData.valueMap[ #key ]->value))                          \

#define GAMBIT_SCANNER_MAIN(name_in)                                                                                    \
namespace GAMBIT_Scanner_Module_Namespace                                                                               \
{                                                                                                                       \
        namespace MainTags                                                                                              \
        {                                                                                                               \
                struct name_in;                                                                                         \
        };                                                                                                              \
                                                                                                                        \
        template<>                                                                                                      \
        class interface <MainTags::name_in>                                                                             \
        {                                                                                                               \
        public:                                                                                                         \
                interface(gambitData &moduleData)                                                                       \
                {                                                                                                       \
                        moduleData.inits.push_back(interface <MainTags::name_in>::init);                                \
                }                                                                                                       \
                                                                                                                        \
                static void init(gambitData &moduleData)                                                                \
                {                                                                                                       \
                        moduleData.name = #name_in;                                                                     \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template <>                                                                                             \
                interface <MainTags::name_in> reg_init <MainTags::name_in>::reg(moduleData);                            \
        };                                                                                                              \
};                                                                                                                      \
extern "C" void __scanner_module_ ## name_in ## _main__ ()                                                              \

#define SET_DEFAULT(val, name)                                                                                          \
namespace GAMBIT_Scanner_Module_Namespace                                                                               \
{                                                                                                                       \
        namespace DefaultTags                                                                                           \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        template <>                                                                                                     \
        class interface<DefaultTags::name>                                                                              \
        {                                                                                                               \
                public:                                                                                                 \
                typedef interface <Tags::name>::gt_type gt_type;                                                        \
                                                                                                                        \
                interface(gambitData &moduleData)                                                                       \
                {                                                                                                       \
                        moduleData.inits.push_back(interface <DefaultTags::name>::init);                                \
                }                                                                                                       \
                                                                                                                        \
                static void init(gambitData &module)                                                                    \
                {                                                                                                       \
                        module.defaultMap[ #name ] = new gt_type(module);                                               \
                        std::stringstream ss;                                                                           \
                        ss << val;                                                                                      \
                        module.defaultMap[ #name ]->setValue(ss.str());                                                 \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template <>                                                                                             \
                interface <DefaultTags::name> reg_init <DefaultTags::name>::reg(moduleData);                            \
        };                                                                                                              \
};                                                                                                                      \
        
#define REGISTER(type_in, name)                                                                                         \
namespace GAMBIT_Scanner_Module_Namespace                                                                               \
{                                                                                                                       \
        namespace Tags                                                                                                  \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        template <>                                                                                                     \
        class interface<Tags::name>                                                                                     \
        {                                                                                                               \
        public:                                                                                                         \
                typedef GAMBIT::Scanner::gt_type_def<type_in> gt_type;                                                  \
                                                                                                                        \
                interface(gambitData &moduleData)                                                                       \
                {                                                                                                       \
                        moduleData.inits.push_back(interface <Tags::name>::init);                                       \
                }                                                                                                       \
                                                                                                                        \
                static void init(gambitData &moduleData)                                                                \
                {                                                                                                       \
                        moduleData.valueMap[ #name ] = new gt_type(moduleData);                                         \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template <>                                                                                             \
                interface <Tags::name> reg_init <Tags::name>::reg(moduleData);                                          \
        };                                                                                                              \
};                                                                                                                      \

#define GAMBIT_SCANNER_MODULE(mod_name)                                                                                 \
namespace __scanner_module_ ## mod_name ## _namespace__                                                                 \
{                                                                                                                       \
        namespace GAMBIT_Scanner_Module_Namespace                                                                       \
        {                                                                                                               \
                using GAMBIT::Scanner::gambitData;                                                                      \
                using GAMBIT::Scanner::entryData;                                                                       \
                gambitData moduleData;                                                                                  \
                                                                                                                        \
                template <class T>                                                                                      \
                class interface {};                                                                                     \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        template <class T>                                                                              \
                        struct reg_init                                                                                 \
                        {                                                                                               \
                                static interface <T> reg;                                                               \
                        };                                                                                              \
                };                                                                                                      \
                                                                                                                        \
                extern "C" void __scanner_module_ ## mod_name ## _moduleInit__(std::vector<std::string> &k,             \
                                                                                std::vector<double> &u,                 \
                                                                                std::vector<double> &l,                 \
                                                                                std::string &str,                       \
                                                                                std::vector<std::string> &in,           \
                                                                                void * fac)                             \
                {                                                                                                       \
                        moduleData.factory = (GAMBIT::Scanner::Function_Factory_Base *)fac;                             \
                        moduleData.key = &k;                                                                            \
                        moduleData.upper = &u;                                                                          \
                        moduleData.lower = &l;                                                                          \
                                                                                                                        \
                        std::vector <void (*)(gambitData &)>::iterator iit;                                             \
                        for (iit = moduleData.inits.begin(); iit != moduleData.inits.end(); iit++)                      \
                        {                                                                                               \
                                (*iit)(moduleData);                                                                     \
                        }                                                                                               \
                        moduleData.inits.clear();                                                                       \
                                                                                                                        \
                        str = moduleData.name;                                                                          \
                        in.reserve(moduleData.valueMap.size());                                                         \
                        std::map <std::string, entryData *>::iterator it;                                               \
                        for (it = moduleData.valueMap.begin(); it != moduleData.valueMap.end(); it++)                   \
                        {                                                                                               \
                                if (it->second->isEntry())                                                              \
                                {                                                                                       \
                                        in.push_back(it->first);                                                        \
                                }                                                                                       \
                        }                                                                                               \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __scanner_module_ ## mod_name ## _setValue__(std::string val, std::string key)          \
                {                                                                                                       \
                        moduleData.valueMap[key]->setValue(val);           \
                }                                                                                                       \
                                                                                                                        \
                extern "C" bool __scanner_module_ ## mod_name ## _setDefault__(std::string key)                         \
                {                                                                                                       \
                        std::map<std::string, entryData *>::iterator it = moduleData.defaultMap.find(key);              \
                        if (it != moduleData.defaultMap.end())                                                          \
                        {                                                                                               \
                                moduleData.valueMap[key]->setValue(*it->second);                                        \
                                return true;                                                                            \
                        }                                                                                               \
                        else                                                                                            \
                        {                                                                                               \
                                return false;                                                                           \
                        }                                                                                               \
                }                                                                                                       \
        };                                                                                                              \
};                                                                                                                      \
namespace __scanner_module_ ## mod_name ## _namespace__                                                                 \

#endif