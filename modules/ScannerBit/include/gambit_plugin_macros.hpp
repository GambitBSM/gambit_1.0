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

#ifndef SCANNER_PLUGIN_MACROS_HPP
#define SCANNER_PLUGIN_MACROS_HPP

#define VERSION(...)                                                                                                    \
namespace Gambit_Module_Namespace                                                                                       \
{                                                                                                                       \
        namespace VersionTags                                                                                           \
        {                                                                                                               \
                struct version{};                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <VersionTags::version>                                                                        \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(gambitData &moduleData)                                                               \
                        {                                                                                               \
                                moduleData.version = #__VA_ARGS__;                                                      \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <VersionTags::version> reg_init <VersionTags::version>::reg(moduleData);                                  \
        };                                                                                                              \
};   

/*Allows Gambit to declare an object of type "..."*/
#define EXPORT_ABSTRACT(name, ...)                                                                                      \
namespace Gambit_Module_Namespace                                                                                       \
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
                                moduleData.outputFuncs[#name] = new Gambit::Module::classFactory<__VA_ARGS__>;          \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \
   
/*Allows Gambit to use object "obj" of type "..."*/
#define EXPORT_OBJECT(name, ...)                                                                                        \
namespace Gambit_Module_Namespace                                                                                       \
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
                                        = new Gambit::Module::funcFactory <decltype(__VA_ARGS__)>(&__VA_ARGS__);        \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \

/*Declared the "main" for the module.  This is function that will be ran by module interface*/
#define PLUGIN_MAIN(...)                                                                                                \
 __scanner_module_ret_val__;                                                                                            \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__);                                             \
namespace Gambit_Module_Namespace                                                                                       \
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
                                moduleData.outputFuncs[moduleData.name] = new Gambit::Module::funcFactory               \
                                        <decltype(__scanner_module_ret_val__) (__VA_ARGS__)>(__scanner_module_main__);  \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <MainTags::main> reg_init <MainTags::main>::reg(moduleData);                                  \
        };                                                                                                              \
};                                                                                                                      \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__)                                              \
                                                                                                                                
/*Defines a Gambit module*/
#define SCANNER_PLUGIN(mod_name)                                                                                         \
namespace __gambit_module_ ## mod_name ##  _namespace__                                                                 \
{                                                                                                                       \
        namespace Gambit_Module_Namespace                                                                               \
        {                                                                                                               \
                using Gambit::Module::gambitData;                                                                       \
                                                                                                                        \
                namespace LoadTags                                                                                      \
                {                                                                                                       \
                        struct mod_name{};                                                                              \
                };                                                                                                      \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        gambitData moduleData( #mod_name );                                                             \
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
                extern "C" void __gambit_module_moduleInit_ ## mod_name ## __(std::vector<void *> *input, void * ini)   \
                {                                                                                                       \
                        moduleData.iniFile = (Gambit::Module::IniFileInterface*)ini;                                    \
                        if (input != 0)                                                                                 \
                                moduleData.inputData = *input;                                                          \
                                                                                                                        \
                        std::vector <void (*)(gambitData &)>::iterator iit;                                             \
                        for (iit = moduleData.inits.begin(); iit != moduleData.inits.end(); iit++)                      \
                        {                                                                                               \
                                (*iit)(moduleData);                                                                     \
                        }                                                                                               \
                        moduleData.inits.clear();                                                                       \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void * __gambit_module_getMember_ ## mod_name ## __(std::string in)                          \
                {                                                                                                       \
                        if (moduleData.outputFuncs.find(in) != moduleData.outputFuncs.end())                            \
                        {                                                                                               \
                                return (*moduleData.outputFuncs[in])();                                                 \
                        }                                                                                               \
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
                                                                                                                        \
        template <typename T>                                                                                           \
        T get_inifile_value(std::string in)                                                                             \
        {                                                                                                               \
                if (Gambit_Module_Namespace::moduleData.iniFile->hasKey(#mod_name, in))                                 \
                {                                                                                                       \
                        std::string temp = Gambit_Module_Namespace::moduleData.iniFile->getValue(#mod_name, in);        \
                        T ret;                                                                                          \
                        Gambit::Module::convert<T>(ret, temp);                                                          \
                        return ret;                                                                                     \
                }                                                                                                       \
                else                                                                                                    \
                {                                                                                                       \
                        std::cout << "\e[00;31mERROR:\e[00m  Missing iniFile entry needed by plugin \""                 \
                                        << Gambit_Module_Namespace::moduleData.name << "\":  " << in << std::endl;      \
                        exit(-1);                                                                                       \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        template <typename T>                                                                                           \
        T get_inifile_value(std::string in, T defaults)                                                                 \
        {                                                                                                               \
                if (Gambit_Module_Namespace::moduleData.iniFile->hasKey(#mod_name, in))                                 \
                {                                                                                                       \
                        std::string temp = Gambit_Module_Namespace::moduleData.iniFile->getValue(#mod_name, in);        \
                        T ret;                                                                                          \
                        Gambit::Module::convert<T>(ret, temp);                                                          \
                        return ret;                                                                                     \
                }                                                                                                       \
                else                                                                                                    \
                {                                                                                                       \
                        return defaults;                                                                                \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        template <typename T>                                                                                           \
        T &get_input_value(int i)                                                                                       \
        {                                                                                                               \
                return *static_cast<T*>(Gambit_Module_Namespace::moduleData.inputData[i]);                              \
        }                                                                                                               \
};                                                                                                                      \
namespace __gambit_module_ ## mod_name ## _namespace__                                                                  \

#endif
