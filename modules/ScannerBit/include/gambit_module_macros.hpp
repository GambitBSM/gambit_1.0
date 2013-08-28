//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for gambit module
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

#ifndef GAMBIT_MODULE_MACROS_HPP
#define GAMBIT_MODULE_MACROS_HPP

#define PP_NARG(...) PP_NARG_(__VA_ARGS__,PP_RSEQ_N())
#define PP_NARG_(...) PP_ARG_N(__VA_ARGS__)
#define PP_ARG_N( _1, _2,N,...) N
#define PP_RSEQ_N() 2,1,0
#define PP_CAT(...) PP_CAT1(__VA_ARGS__)
#define PP_CAT1(a, b) a ## b   

#define RETRIEVE1(name, type_in) IMPORT(name, type_in)
#define RETRIEVE2(name, type_in, val) IMPORT(name, type_in) SET_DEFAULT(name, val)
#define RETRIEVE(name, ...) PP_CAT(RETRIEVE,  PP_NARG(__VA_ARGS__)) (name, __VA_ARGS__)

/*Get the value associated with "key" that was defined in the ini-file*/
#define GET_VALUE(key) (*static_cast                                                                                    \
                        <                                                                                               \
                                typename GAMBIT_Module_Namespace::interface                                             \
                                <                                                                                       \
                                        GAMBIT_Module_Namespace::Tags::key                                              \
                                >                                                                                       \
                                ::gt_type::type *                                                                       \
                        >                                                                                               \
                        (GAMBIT_Module_Namespace::moduleData.valueMap[ #key ]->value))                                  \
   
/*Allows Gambit to declare an object of type "..."*/
#define EXPORT_ABSTRACT(name, ...)                                                                                      \
namespace GAMBIT_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace LoadTags                                                                                              \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <LoadTags::name>                                                                        \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.inits.push_back(interface <LoadTags::name>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &moduleData)                                                        \
                        {                                                                                               \
                                moduleData.outputFuncs[#name] = new GAMBIT::Module::classFactory<__VA_ARGS__>;          \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \
   
/*Allows Gambit to use object "obj" of type "..."*/
#define EXPORT_OBJECT(name, ...)                                                                                        \
namespace GAMBIT_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace LoadTags                                                                                              \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <LoadTags::name>                                                                        \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.inits.push_back(interface <LoadTags::name>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &moduleData)                                                        \
                        {                                                                                               \
                                moduleData.outputFuncs[#name]                                                           \
                                        = new GAMBIT::Module::funcFactory <decltype(__VA_ARGS__)>(&__VA_ARGS__);        \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \

/*Declared the "main" for the module.  This is function that will be ran by module interface*/
#define MODULE_MAIN(...)                                                                                                \
 __scanner_module_ret_val__;                                                                                            \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__);                                             \
namespace GAMBIT_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace MainTags                                                                                              \
        {                                                                                                               \
                struct main{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <MainTags::main>                                                                        \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.inits.push_back(interface <MainTags::main>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &moduleData)                                                        \
                        {                                                                                               \
                                moduleData.outputFuncs[moduleData.name] = new GAMBIT::Module::funcFactory               \
                                        <decltype(__scanner_module_ret_val__) (__VA_ARGS__)>(__scanner_module_main__);  \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <MainTags::main> reg_init <MainTags::main>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__)                                              \

/*Set a defalut value for "name" if it is not specified in the ini-file*/
#define SET_DEFAULT(name, ...)                                                                                          \
namespace GAMBIT_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace DefaultTags                                                                                           \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template <>                                                                                             \
                class interface<DefaultTags::name>                                                                      \
                {                                                                                                       \
                        public:                                                                                         \
                        typedef interface <Tags::name>::gt_type gt_type;                                                \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.inits.push_back(interface <DefaultTags::name>::init);                        \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &module)                                                            \
                        {                                                                                               \
                                module.defaultMap[ #name ] = new gt_type(module);                                       \
                                std::stringstream ss;                                                                   \
                                ss << __VA_ARGS__;                                                                      \
                                module.defaultMap[ #name ]->setValue(ss.str());                                         \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <DefaultTags::name> reg_init <DefaultTags::name>::reg(moduleData);                            \
        };                                                                                                              \
};                                                                                                                      \
        
#define IMPORT_INIFILE(name, ...) IMPORT(name, __VA_ARGS__)

#define IMPORT_GAMBIT(name, ...) IMPORT (name, gt_entry<__VA_ARGS__, name::value>)
        
/*Gets a variable of type "type_in" from Gambit.  The variable is set by the keyword "name"*/
#define IMPORT(name, ...)                                                                                               \
namespace GAMBIT_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace Tags                                                                                                  \
        {                                                                                                               \
                struct name{};                                                                                          \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template <>                                                                                             \
                class interface<Tags::name>                                                                             \
                {                                                                                                       \
                public:                                                                                                 \
                        typedef GAMBIT::Module::gt_type_def<__VA_ARGS__> gt_type;                                       \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.inits.push_back(interface <Tags::name>::init);                               \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &moduleData)                                                        \
                        {                                                                                               \
                                moduleData.valueMap[ #name ] = new gt_type(moduleData);                                 \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <Tags::name> reg_init <Tags::name>::reg(moduleData);                                          \
        };                                                                                                              \
};                                                                                                                      \
                                                                                                                                
/*Defines a Gambit module*/
#define GAMBIT_MODULE(mod_name)                                                                                         \
namespace __gambit_module_ ## mod_name ##  _namespace__                                                                 \
{                                                                                                                       \
        using GAMBIT::Module::gt_entry;                                                                                 \
        namespace GAMBIT_Module_Namespace                                                                               \
        {                                                                                                               \
                using GAMBIT::Module::gambitData;                                                                       \
                using GAMBIT::Module::entryData;                                                                        \
                                                                                                                        \
                namespace LoadTags                                                                                      \
                {                                                                                                       \
                        struct mod_name{};                                                                              \
                };                                                                                                      \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        gambitData moduleData(#mod_name);                                                               \
                                                                                                                        \
                        template <class T>                                                                              \
                        class interface {};                                                                             \
                                                                                                                        \
                        template <class T>                                                                              \
                        struct reg_init                                                                                 \
                        {                                                                                               \
                                static interface <T> reg;                                                               \
                        };                                                                                              \
                };                                                                                                      \
                                                                                                                        \
                extern "C" void __gambit_module_moduleInit_ ## mod_name ## __(std::vector<void *> *input,               \
                                                                                std::vector<std::string> &in,           \
                                                                                void * fac)                             \
                {                                                                                                       \
                        moduleData.factory = fac;                                                                       \
                        if (input != 0)                                                                                 \
                                moduleData.inputData = *input;                                                          \
                                                                                                                        \
                        std::vector <void (*)(gambitData &)>::iterator iit;                                             \
                        for (iit = moduleData.inits.begin(); iit != moduleData.inits.end(); iit++)                      \
                        {                                                                                               \
                                (*iit)(moduleData);                                                                     \
                        }                                                                                               \
                        moduleData.inits.clear();                                                                       \
                                                                                                                        \
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
                extern "C" void __gambit_module_setValue_ ## mod_name ## __(std::string val, std::string key)           \
                {                                                                                                       \
                        moduleData.valueMap[key]->setValue(val);                                                        \
                }                                                                                                       \
                                                                                                                        \
                extern "C" bool __gambit_module_setDefault_ ## mod_name ## __(std::string key)                          \
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
                                                                                                                        \
                extern "C" void * __gambit_module_getMember_ ## mod_name ## __(std::string in)                          \
                {                                                                                                       \
                        if (moduleData.outputFuncs.find(in) != moduleData.outputFuncs.end())                            \
                                return (*moduleData.outputFuncs[in])();                                                 \
                        else                                                                                            \
                                return NULL;                                                                            \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __gambit_module_rmMember_ ## mod_name ## __(void *ptr, std::string in)                  \
                {                                                                                                       \
                        if (moduleData.outputFuncs.find(in) != moduleData.outputFuncs.end())                            \
                                moduleData.outputFuncs[in]->remove(ptr);                                                \
                }                                                                                                       \
        };                                                                                                              \
};                                                                                                                      \
namespace __gambit_module_ ## mod_name ## _namespace__                                                                  \

#endif