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
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef SCANNER_PLUGIN_MACROS_HPP
#define SCANNER_PLUGIN_MACROS_HPP

#define VERSION(...)                                                                                                    \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace VersionTags                                                                                           \
        {                                                                                                               \
                struct version{};                                                                                       \
        }                                                                                                               \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <VersionTags::version>                                                                  \
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
                interface <VersionTags::version> reg_init <VersionTags::version>::reg(pluginData);                      \
        }                                                                                                               \
}    

/*Allows Gambit to declare an object of type "..."*/
#define EXPORT_ABSTRACT(name, ...)                                                                                      \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace LoadTags                                                                                              \
        {                                                                                                               \
                struct name{};                                                                                          \
        }                                                                                                               \
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
        }                                                                                                               \
}                                                                                                                       \
   
/*Allows Gambit to use object "obj" of type "..."*/
#define EXPORT_OBJECT(name, ...)                                                                                        \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace LoadTags                                                                                              \
        {                                                                                                               \
                struct name{};                                                                                          \
        }                                                                                                               \
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
        }                                                                                                               \
}                                                                                                                       \

/*Declared the "main" for the module.  This is function that will be ran by module interface*/
#define PLUGIN_MAIN(...)                                                                                                \
 __gambit_plugin_ret_val__;                                                                                             \
decltype(__gambit_plugin_ret_val__) __gambit_plugin_main__ (__VA_ARGS__);                                               \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace MainTags                                                                                              \
        {                                                                                                               \
                struct main{};                                                                                          \
        }                                                                                                               \
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
                                        <decltype(__gambit_plugin_ret_val__) (__VA_ARGS__)>(__gambit_plugin_main__);    \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <MainTags::main> reg_init <MainTags::main>::reg(pluginData);                                  \
        }                                                                                                               \
}                                                                                                                       \
decltype(__gambit_plugin_ret_val__) __gambit_plugin_main__ (__VA_ARGS__)                                                \
                                                                                                                                
/*Defines a Gambit plugin*/
#define GAMBIT_PLUGIN(plug_name)                                                                                        \
namespace __gambit_plugin_ ## plug_name ##  _namespace__                                                                \
{                                                                                                                       \
        namespace __gambit_plugin_namespace__                                                                           \
        {                                                                                                               \
                using Gambit::Plugin::gambitData;                                                                       \
                                                                                                                        \
                namespace LoadTags                                                                                      \
                {                                                                                                       \
                        struct plug_name{};                                                                             \
                }                                                                                                       \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        gambitData pluginData( #plug_name );                                                            \
                                                                                                                        \
                        template <class T>                                                                              \
                        class interface {};                                                                             \
                                                                                                                        \
                        template <class T>                                                                              \
                        struct reg_init                                                                                 \
                        {                                                                                               \
                                static interface <T> reg;                                                               \
                        };                                                                                              \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __gambit_plugin_moduleInit_ ## plug_name ## __(std::vector<void *> *input)              \
                {                                                                                                       \
                        if (input != 0)                                                                                 \
                                pluginData.inputData = *input;                                                          \
                                                                                                                        \
                        for (auto func : pluginData.inits)                                                              \
                        {                                                                                               \
                                func(pluginData);                                                                       \
                        }                                                                                               \
                        pluginData.inits.clear();                                                                       \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void * __gambit_plugin_getMember_ ## plug_name ## __(std::string in)                         \
                {                                                                                                       \
                        if (pluginData.outputFuncs.find(in) != pluginData.outputFuncs.end())                            \
                        {                                                                                               \
                                return (*pluginData.outputFuncs[in])();                                                 \
                        }                                                                                               \
                        else                                                                                            \
                                return NULL;                                                                            \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void __gambit_plugin_rmMember_ ## plug_name ## __(void *ptr, std::string in)                 \
                {                                                                                                       \
                        if (pluginData.outputFuncs.find(in) != pluginData.outputFuncs.end())                            \
                                pluginData.outputFuncs[in]->remove(ptr);                                                \
                }                                                                                                       \
        }                                                                                                               \
                                                                                                                        \
        template <typename T>                                                                                           \
        T &get_input_value(int i)                                                                                       \
        {                                                                                                               \
                return *static_cast<T*>(__gambit_plugin_namespace__::pluginData.inputData[i]);                          \
        }                                                                                                               \
}                                                                                                                       \
namespace __gambit_plugin_ ## plug_name ## _namespace__                                                                 \

#endif
