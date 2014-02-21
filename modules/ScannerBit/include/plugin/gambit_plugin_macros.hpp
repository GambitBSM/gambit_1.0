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
namespace Gambit_Plugin_Namespace                                                                                       \
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
                        interface(gambitData &pluginData)                                                               \
                        {                                                                                               \
                                pluginData.version = #__VA_ARGS__;                                                      \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <VersionTags::version> reg_init <VersionTags::version>::reg(pluginData);                                  \
        };                                                                                                              \
};   

/*Allows Gambit to declare an object of type "..."*/
#define EXPORT_ABSTRACT(name, ...)                                                                                      \
namespace Gambit_Plugin_Namespace                                                                                       \
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
                        interface(gambitData &pluginData)                                                               \
                        {                                                                                               \
                                pluginData.inits.push_back(interface <LoadTags::name>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &pluginData)                                                        \
                        {                                                                                               \
                                pluginData.outputFuncs[#name] = new Gambit::Plugin::classFactory<__VA_ARGS__>;          \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(pluginData);                                  \
        };                                                                                                              \
};                                                                                                                      \
   
/*Allows Gambit to use object "obj" of type "..."*/
#define EXPORT_OBJECT(name, ...)                                                                                        \
namespace Gambit_Plugin_Namespace                                                                                       \
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
                        interface(gambitData &pluginData)                                                               \
                        {                                                                                               \
                                pluginData.inits.push_back(interface <LoadTags::name>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &pluginData)                                                        \
                        {                                                                                               \
                                pluginData.outputFuncs[#name]                                                           \
                                        = new Gambit::Plugin::funcFactory <decltype(__VA_ARGS__)>(&__VA_ARGS__);        \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(pluginData);                                  \
        };                                                                                                              \
};                                                                                                                      \

/*Declared the "main" for the module.  This is function that will be ran by module interface*/
#define PLUGIN_MAIN(...)                                                                                                \
 __scanner_module_ret_val__;                                                                                            \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__);                                             \
namespace Gambit_Plugin_Namespace                                                                                       \
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
                        interface(gambitData &pluginData)                                                               \
                        {                                                                                               \
                                pluginData.inits.push_back(interface <MainTags::main>::init);                           \
                        }                                                                                               \
                                                                                                                        \
                        static void init(gambitData &pluginData)                                                        \
                        {                                                                                               \
                                pluginData.outputFuncs[pluginData.name] = new Gambit::Plugin::funcFactory               \
                                        <decltype(__scanner_module_ret_val__) (__VA_ARGS__)>(__scanner_module_main__);  \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <MainTags::main> reg_init <MainTags::main>::reg(pluginData);                                  \
        };                                                                                                              \
};                                                                                                                      \
decltype(__scanner_module_ret_val__) __scanner_module_main__ (__VA_ARGS__)                                              \
                                                                                                                                
/*Defines a Gambit plugin*/
#define GAMBIT_PLUGIN(mod_name)                                                                                         \
namespace __gambit_plugin_ ## mod_name ##  _namespace__                                                                 \
{                                                                                                                       \
        namespace Gambit_Plugin_Namespace                                                                               \
        {                                                                                                               \
                using Gambit::Plugin::gambitData;                                                                       \
                                                                                                                        \
                namespace LoadTags                                                                                      \
                {                                                                                                       \
                        struct mod_name{};                                                                              \
                };                                                                                                      \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        gambitData pluginData( #mod_name );                                                             \
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
                extern "C" void __gambit_module_moduleInit_ ## mod_name ## __(std::vector<void *> *input)               \
                {                                                                                                       \
                        if (input != 0)                                                                                 \
                                pluginData.inputData = *input;                                                          \
                                                                                                                        \
                        std::vector <void (*)(gambitData &)>::iterator iit;                                             \
                        for (iit = pluginData.inits.begin(); iit != pluginData.inits.end(); iit++)                      \
                        {                                                                                               \
                                (*iit)(pluginData);                                                                     \
                        }                                                                                               \
                        pluginData.inits.clear();                                                                       \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void * __gambit_module_getMember_ ## mod_name ## __(std::string in)                          \
                {                                                                                                       \
                        if (pluginData.outputFuncs.find(in) != pluginData.outputFuncs.end())                            \
                        {                                                                                               \
                                return (*pluginData.outputFuncs[in])();                                                 \
                        }                                                                                               \
                        else                                                                                            \
                                return NULL;                                                                            \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __gambit_module_rmMember_ ## mod_name ## __(void *ptr, std::string in)                  \
                {                                                                                                       \
                        if (pluginData.outputFuncs.find(in) != pluginData.outputFuncs.end())                            \
                                pluginData.outputFuncs[in]->remove(ptr);                                                \
                }                                                                                                       \
        };                                                                                                              \
                                                                                                                        \
        template <typename T>                                                                                           \
        T &get_input_value(int i)                                                                                       \
        {                                                                                                               \
                return *static_cast<T*>(Gambit_Plugin_Namespace::pluginData.inputData[i]);                              \
        }                                                                                                               \
};                                                                                                                      \
namespace __gambit_plugin_ ## mod_name ## _namespace__                                                                  \

#endif
