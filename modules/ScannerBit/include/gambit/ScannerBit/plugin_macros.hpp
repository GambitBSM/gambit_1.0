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
#include "gambit/cmake/cmake_variables.hpp"

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
/// Flag used to specify that a external library is required.
/// If library is not present, plugin will not run.
#define external_library_required(...)  EXTERNAL_LIBRARY_REQUIRED ( __VA_ARGS__ )
/// Initialized an inifile value when the plugin is loaded.
#define init_inifile_value(exp, ...)    INIT_INIFILE_VALUE(exp, __VA_ARGS__)
/// Tells ScannerBit that these tags are required_classloading_backends
#define reqd_inifile_entries(...) void reqd_inifile_entries()
/// Tells ScannerBit that these libraries are required_classloading_backends
#define reqd_libraries(...) void reqd_libraries()
/// @}

#define REQD_INIFILE_ENTRIES(...) void REQD_INIFILE_ENTRIES();
#define REQD_LIRBARIES(...) void REQD_LIBRARIES();

#define ARG_N_INTERNAL(_1_, _2_, _3_, _4_, ret, ...) ret
#define ARG_N(...) ARG_N_INTERNAL(__VA_ARGS__ , 4, 3, 2, 1, 0)
#define COMBINE(a, b) COMBINE_INTERNAL(a, b)
#define COMBINE_INTERNAL(a, b) a ## b
#define EXPAND(a) a
#define COMBINE_3(a, b) COMBINE_3_INTERNAL(a, b)
#define COMBINE_3_INTERNAL(a, b) __gambit_plugin_ ## a ## b ## _namespace__
#define ENTER_FUNC(func, num, ...) COMBINE(func, num)( __VA_ARGS__ )

#define VERSION_4(major, minor, patch, release) major ## _ ## minor ## _ ## patch ## _ ## release
#define VERSION_3(major, minor, patch) VERSION_4(major, minor, patch, )
#define VERSION_2(major, minor) VERSION_4(major, minor,,)
#define VERSION_1(major) VERSION_4(major,,,)
#define VERSION_0() VERSION(,,,)
#define VERSION(...) ENTER_FUNC(VERSION_, ARG_N(__VA_ARGS__), __VA_ARGS__ )

#define INIT_INIFILE_VALUE(exp, ...)    INITIALIZE(exp, get_inifile_value<decltype(exp)>( __VA_ARGS__ ))

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
void __gambit_plugin_constructor__();                                                                                   \
RUN_FUNCTION(__gambit_plugin_constructor__)                                                                             \
void __gambit_plugin_constructor__()                                                                                    \

#define PLUGIN_DECONSTRUCTOR                                                                                            \
void __gambit_plugin_deconstructor__();                                                                                 \
namespace __gambit_plugin_namespace__                                                                                   \
{                                                                                                                       \
        namespace ConstructTags                                                                                         \
        {                                                                                                               \
                struct deconstructor{};                                                                                 \
        }                                                                                                               \
                                                                                                                        \
        namespace                                                                                                       \
        {                                                                                                               \
                template<>                                                                                              \
                class interface <ConstructTags::deconstructor>                                                          \
                {                                                                                                       \
                public:                                                                                                 \
                                                                                                                        \
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <ConstructTags::deconstructor>::init);                 \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.deconstructor = __gambit_plugin_deconstructor__;                                 \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <ConstructTags::deconstructor> reg_init <ConstructTags::deconstructor>::reg(myData);          \
        }                                                                                                               \
}                                                                                                                       \
void __gambit_plugin_deconstructor__()                                                                                  \

//initalizes global variable
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

/*Declared the "main" for the module.  This is function that will be ran by module interface*/
#define PLUGIN_MAIN(...)                                                                                                \
 __gambit_plugin_ret_val__();                                                                                           \
decltype(__gambit_plugin_ret_val__()) __gambit_plugin_main__ (__VA_ARGS__);                                             \
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
                        interface(pluginData &myData)                                                                   \
                        {                                                                                               \
                                myData.inits.push_back(interface <MainTags::main>::init);                               \
                        }                                                                                               \
                                                                                                                        \
                        static void init(pluginData &myData)                                                            \
                        {                                                                                               \
                                myData.main_type = interface <MainTags::main>::main_type;                               \
                                myData.outputFuncs[myData.name] = new Gambit::Scanner::Plugins::funcFactory             \
                                        <decltype(__gambit_plugin_ret_val__()) (__VA_ARGS__)>(__gambit_plugin_main__);  \
                        }                                                                                               \
                                                                                                                        \
                        static std::type_info const & main_type(void)                                                   \
                        {                                                                                               \
                                return typeid(decltype(__gambit_plugin_ret_val__())(__VA_ARGS__));                      \
                        }                                                                                               \
                };                                                                                                      \
                                                                                                                        \
                template <>                                                                                             \
                interface <MainTags::main> reg_init <MainTags::main>::reg(myData);                                      \
        }                                                                                                               \
}                                                                                                                       \
decltype(__gambit_plugin_ret_val__()) __gambit_plugin_main__ (__VA_ARGS__)                                              \

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
                extern "C" const std::type_info &__gambit_plugin_pluginInit_ ## plug_name ## __ (const std::string *tag,\
                 const YAML::Node *node, Gambit::Scanner::printer_interface & printer, std::vector<void *> *input)      \
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
                                                                                                                        \
                                return myData.main_type();                                                              \
                        }                                                                                               \
                        else                                                                                            \
                                return typeid(void(void));                                                              \
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
        
#endif
