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
///  \date 2013 August
///  \date 2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#include "gambit/ScannerBit/plugin_details.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"
#include "gambit/Utils/type_index.hpp"

using Gambit::type_index;

#ifndef SCANNER_PLUGIN_MACROS_HPP
#define SCANNER_PLUGIN_MACROS_HPP

/// \name gambit plugin macros 
/// The main macros to be used by the user.
/// @{
/// Makes an abstract type of type "name" available to the plugin interface.
#define export_abstract(name, ...)      EXPORT_ABSTRACT(name, __VA_ARGS__)
/// Makes the object "name" available to the plugin interface.
#define export_object(name, ...)        EXPORT_OBJECT(name, __VA_ARGS__)
/// Initializes the varable "name" to __VA_ARGS__ when the plugin is loaded.
#define initialize(name, ...)           INITIALIZE(name, __VA_ARGS__)
/// Runs function "name" when the plugin is loaded.
#define run_function(name, ...)         RUN_FUNCTION(name, __VA_ARGS__)
/// Declaration of the main function which will be ran by the interface
#define plugin_main(...)                PLUGIN_MAIN( __VA_ARGS__ )
/// Generic plugin declaration of the from gambit_plugin(name, type, version)
#define gambit_plugin(...)              GAMBIT_PLUGIN( __VA_ARGS__ )
/// Runs when the plugin is loaded.
#define plugin_constructor              PLUGIN_CONSTRUCTOR
/// Runs when the plugin is destroyed.
#define plugin_deconstructor            PLUGIN_DECONSTRUCTOR
/// Sets the version number
#define version(...)                    VERSION( __VA_ARGS__ )
/// Set version number to 0.0.0.
#define no_version                      VERSION()
/// Tells ScannerBit that these tags are required
#define reqd_inifile_entries(...) void reqd_inifile_entries()
/// Tells ScannerBit that these libraries are requested
#define reqd_libraries(...) void reqd_libraries()
/// Tells ScannerBit that these include files must exist
#define reqd_headers(...) void reqd_headers()
/// @}

#define REQD_INIFILE_ENTRIES(...)
#define REQD_LIRBARIES(...)
#define REQD_HEADERS(...)

#define ARG_N_INTERNAL(_1_, _2_, _3_, _4_, ret, ...) ret
#define ARG_N(...) ARG_N_INTERNAL(__VA_ARGS__ , 4, 3, 2, 1, 0)
#define COMBINE(a, b) COMBINE_INTERNAL(a, b)
#define COMBINE_INTERNAL(a, b) a ## b
#define EXPAND(a) a
#define ENTER_FUNC(func, num, ...) COMBINE(func, num)( __VA_ARGS__ )

#define VERSION_4(major, minor, patch, release) major ## _ ## minor ## _ ## patch ## _ ## release
#define VERSION_3(major, minor, patch) VERSION_4(major, minor, patch, )
#define VERSION_2(major, minor) VERSION_4(major, minor,,)
#define VERSION_1(major) VERSION_4(major,,,)
#define VERSION_0() VERSION(,,,)
#define VERSION(...) ENTER_FUNC(VERSION_, ARG_N(__VA_ARGS__), __VA_ARGS__ )

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
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <LoadTags::name>::init);                               \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.outputFuncs[#name] = new Gambit::Scanner::Plugins::classFactory<__VA_ARGS__>;    \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(myData);                                      \
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
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <LoadTags::name>::init);                               \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.outputFuncs[#name]                                                               \
                                 = new Gambit::Scanner::Plugins::funcFactory <decltype(__VA_ARGS__)>(&__VA_ARGS__);     \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <LoadTags::name> reg_init <LoadTags::name>::reg(myData);                                      \
        }                                                                                                               \
}                                                                                                                       \

//constructor
#define PLUGIN_CONSTRUCTOR                                                                                              \
void PLUGIN_CONSTRUCTOR();                                                                                              \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <void (int)>                                                                            \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <void (int)>::init);                                   \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData&)                                                                   \
                        {                                                                                               \
                                PLUGIN_CONSTRUCTOR();                                                                   \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <void (int)> reg_init <void (int)>::reg(myData);                                              \
        }                                                                                                               \
}                                                                                                                       \
void PLUGIN_CONSTRUCTOR()                                                                                               \

#define PLUGIN_DECONSTRUCTOR                                                                                            \
void PLUGIN_DECONSTRUCTOR();                                                                                            \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <void (void)>                                                                           \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <void (void)>::init);                                  \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.deconstructor = PLUGIN_DECONSTRUCTOR;                                            \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <void (void)> reg_init <void (void)>::reg(myData);                                            \
        }                                                                                                               \
}                                                                                                                       \
void __gambit_plugin_deconstructor__()                                                                                  \

//runs function when plugin is loaded.
#define RUN_FUNCTION(name, ...)                                                                                         \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace RunTags                                                                                               \
        {                                                                                                               \
                struct name{};                                                                                          \
        }                                                                                                               \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <RunTags::name>                                                                         \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <RunTags::name>::init);                                \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData&)                                                                   \
                        {                                                                                               \
                                name( __VA_ARGS__ );                                                                    \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <RunTags::name> reg_init <RunTags::name>::reg(myData);                                        \
        }                                                                                                               \
}                                                                                                                       \

//initalizes global variable
#define INITIALIZE(name, ...)                                                                                           \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace InitTags                                                                                              \
        {                                                                                                               \
                struct name{};                                                                                          \
        }                                                                                                               \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <InitTags::name>                                                                        \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <InitTags::name>::init);                               \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData&)                                                                   \
                        {                                                                                               \
                                name = __VA_ARGS__;                                                                     \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <InitTags::name> reg_init <InitTags::name>::reg(myData);                                      \
        }                                                                                                               \
}                                                                                                                       \

#define __PLUGIN_MAIN_RET_VAL__(...)                                                                                    \
decltype(__plugin_main_ret_val__(typename Gambit::Scanner::func_ptr_type<void (__VA_ARGS__)>::type()))                  \

/*Declared the "main" for the module.  This is function that will be ran by the module interface*/
#define PLUGIN_MAIN(...)                                                                                                \
 __plugin_main_ret_val__(void (*)(__VA_ARGS__));                                                                        \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__);                                                         \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <int (__VA_ARGS__)>                                                                     \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <int (__VA_ARGS__)>::init);                            \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.plugin_mains[typeid(__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__))] =       \
                                        Gambit::Scanner::Plugins::funcFactory                                           \
                                                <__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) (__VA_ARGS__)>(PLUGIN_MAIN)();    \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <int (__VA_ARGS__)> reg_init <int (__VA_ARGS__)>::reg(myData);                                \
        }                                                                                                               \
}                                                                                                                       \
__PLUGIN_MAIN_RET_VAL__(__VA_ARGS__) PLUGIN_MAIN (__VA_ARGS__)                                                          \

/*Defines a Gambit plugin*/
#define GAMBIT_PLUGIN_INTERNAL(plug_name)                                                                               \
namespace __gambit_plugin_ ## plug_name ##  _namespace__                                                                \
{                                                                                                                       \
        namespace __gambit_plugin_namespace__                                                                           \
        {                                                                                                               \
                using Gambit::Scanner::Plugins::pluginData;                                                             \
                                                                                                                        \
                namespace LoadTags                                                                                      \
                {                                                                                                       \
                        struct plug_name{};                                                                             \
                }                                                                                                       \
                                                                                                                        \
                namespace                                                                                               \
                {                                                                                                       \
                        pluginData myData( #plug_name );                                                                \
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
                extern "C" const std::map<type_index, void *> &__gambit_plugin_pluginInit_ ## plug_name ## __ (         \
                                                                        const std::string *tag, const YAML::Node *node, \
                                                                        Gambit::Scanner::printer_interface & printer,   \
                                                                        std::vector<void *> *input )                    \
                {                                                                                                       \
                        if (!myData.loaded)                                                                             \
                        {                                                                                               \
                                myData.tag = *tag;                                                                      \
                                myData.printer = &printer;                                                              \
                                myData.loaded = true;                                                                   \
                                                                                                                        \
                                if (input != 0)                                                                         \
                                        myData.inputData = *input;                                                      \
                                                                                                                        \
                                myData.node = *node;                                                                    \
                                                                                                                        \
                                for(auto it = myData.inits.begin(), end = myData.inits.end(); it != end; it++)          \
                                {                                                                                       \
                                        (*it)(myData);                                                                  \
                                }                                                                                       \
                                                                                                                        \
                                myData.inits.clear();                                                                   \
                        }                                                                                               \
                                                                                                                        \
                        return myData.plugin_mains;                                                                     \
                }                                                                                                       \
                                                                                                                        \
                extern "C" void * __gambit_plugin_getMember_ ## plug_name ## __(std::string in)                         \
                {                                                                                                       \
                        if (myData.outputFuncs.find(in) != myData.outputFuncs.end())                                    \
                        {                                                                                               \
                                return (*myData.outputFuncs[in])();                                                     \
                        }                                                                                               \
                        else                                                                                            \
                                return NULL;                                                                            \
                }                                                                                                       \
        }                                                                                                               \
                                                                                                                        \
        inline Gambit::Scanner::printer_interface &get_printer() {return *__gambit_plugin_namespace__::myData.printer;} \
                                                                                                                        \
        template <typename T>                                                                                           \
        inline T get_inifile_value(std::string in)                                                                      \
        {                                                                                                               \
                if (!__gambit_plugin_namespace__::myData.node[in])                                                      \
                {                                                                                                       \
                        scan_err << "Missing iniFile entry \""<< in << "\" needed by a gambit plugin:  \n"              \
                                << Gambit::Scanner::Plugins::Plugin_Details(#plug_name).printMin()                      \
                                << scan_end;                                                                            \
                        return T();                                                                                     \
                }                                                                                                       \
                                                                                                                        \
                return __gambit_plugin_namespace__::myData.node[in].as<T>();                                            \
        }                                                                                                               \
                                                                                                                        \
        inline YAML::Node get_inifile_node(std::string in)                                                              \
        {                                                                                                               \
                if (!__gambit_plugin_namespace__::myData.node[in])                                                      \
                {                                                                                                       \
                        scan_err << "Missing iniFile node \""<< in << "\" needed by a gambit plugin:  \n"               \
                                << Gambit::Scanner::Plugins::Plugin_Details(#plug_name).printMin()                      \
                                << scan_end;                                                                            \
                        YAML::Node node;                                                                                \
                        return node;                                                                                    \
                }                                                                                                       \
                                                                                                                        \
                return __gambit_plugin_namespace__::myData.node[in];                                                    \
        }                                                                                                               \
                                                                                                                        \
        template <typename T>                                                                                           \
        inline T get_inifile_value(std::string in, T defaults)                                                          \
        {                                                                                                               \
                if (!__gambit_plugin_namespace__::myData.node[in])                                                      \
                {                                                                                                       \
                        return defaults;                                                                                \
                }                                                                                                       \
                                                                                                                        \
                return __gambit_plugin_namespace__::myData.node[in].as<T>();                                            \
        }                                                                                                               \
                                                                                                                        \
        template <typename T>                                                                                           \
        inline T &get_input_value(int i)                                                                                \
        {                                                                                                               \
                return *static_cast<T*>(__gambit_plugin_namespace__::myData.inputData[i]);                              \
        }                                                                                                               \
}                                                                                                                       \
namespace __gambit_plugin_ ## plug_name ## _namespace__                                                                 \

#define GAMBIT_PLUGIN_INTERNAL_INT(plug_name, plug_type, plug_version)                                                  \
        GAMBIT_PLUGIN_INTERNAL(plug_name ## __t__ ## plug_type ## __v__ ## plug_version)                                \

#define GAMBIT_PLUGIN_1(plugin_name)                                                                                    \
        GAMBIT_PLUGIN_INTERNAL_INT(plug_name,, no_version)                                                              \
        
#define GAMBIT_PLUGIN_2(plugin_name, plug_type)                                                                         \
        GAMBIT_PLUGIN_INTERNAL_INT(plug_name, plug_type, no_version)                                                    \

#define GAMBIT_PLUGIN_3(plug_name, plug_type, plug_version)                                                             \
        GAMBIT_PLUGIN_INTERNAL_INT(plug_name, plug_type, plug_version)                                                  \

#define GAMBIT_PLUGIN(...) ENTER_FUNC(GAMBIT_PLUGIN_, ARG_N(__VA_ARGS__), __VA_ARGS__ )

#define GAMBIT_PLUGIN_NAMESPACE_INTERNAL_1(plug_name)                                                                   \
        GAMBIT_PLUGIN_NAMESPACE_INTERNAL_3(plug_name,, no_version)                                                      \

#define GAMBIT_PLUGIN_NAMESPACE_INTERNAL_2(plug_name, plug_type)                                                        \
        GAMBIT_PLUGIN_NAMESPACE_INTERNAL_3(plug_name, plug_type, no_version)                                            \

#define GAMBIT_PLUGIN_NAMESPACE_INTERNAL_3(plug_name, plug_type, plug_version)                                          \
namespace __gambit_plugin_ ## plug_name ## __t__ ## plug_type ## __v__ ## plug_version ## _namespace__                  \

#define GAMBIT_PLUGIN_NAMESPACE(...) ENTER_FUNC(GAMBIT_PLUGIN_NAMESPACE_INTERNAL_, ARG_N(__VA_ARGS__), __VA_ARGS__)

#define GAMBIT_PLUGIN_INITIALIZE(setup, ...)                                                                            \
GAMBIT_PLUGIN(__VA_ARGS__)                                                                                              \
{                                                                                                                       \
        setup                                                                                                           \
}                                                                                                                       \
GAMBIT_PLUGIN_NAMESPACE(__VA_ARGS__)                                                                                    \
        
#endif
