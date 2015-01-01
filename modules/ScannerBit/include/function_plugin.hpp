//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///        2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#ifndef FUNCTION_PLUGIN_HPP
#define FUNCTION_PLUGIN_HPP

#include "scanner_utils.hpp"
#include "plugin_defs.hpp"
#include "plugin_macros.hpp"
#include "plugin_details.hpp"

#include <yaml-cpp/yaml.h>

namespace Gambit
{
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {       
                /*Prior Transform*/
                class PriorTransform
                {
                public:
                        virtual void transform(const std::vector<double> &, std::map<std::string, double> &) const = 0;
                        virtual ~PriorTransform() = 0;
                };
                
                /*Inifile Interface*/
                class IniFileInterface
                {
                public:
                        virtual const std::string pluginName() const = 0;
                        virtual const std::string fileName() const = 0;
                        virtual const std::string getValue(const std::string &in) const = 0;
                        virtual YAML::Node getNode(const std::string &str) const = 0;
                        virtual ~IniFileInterface() = 0;
                };
        }
}

#define init_inifile_value(exp, ...)    INIT_INIFILE_VALUE(exp, __VA_ARGS__) enum{}
#define init_keys(exp)                  INIT_KEYS(exp) enum{}
#define get_keys()                      GET_KEYS()
#define function_plugin(...)            FUNCTION_PLUGIN( __VA_ARGS__ )

#define INIT_INIFILE_VALUE(exp, ...)    INITIALIZE(exp, get_inifile_value<decltype(exp)>( __VA_ARGS__ ))
#define INIT_KEYS(exp)                  INITIALIZE(exp, GET_KEYS())

#define GET_KEYS()                      get_input_value<std::vector<std::string>>(0)

#define FUNCTION_SETUP(mod_name)                                                                                        \
using namespace Gambit::Scanner;                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in)                                                                                     \
{                                                                                                                       \
        YAML::Node conv = (get_input_value<IniFileInterface>(2)).getNode(in);                                           \
        if (conv.IsNull())                                                                                              \
        {                                                                                                               \
                scan_err << "Missing iniFile entry needed by a gambit plugin \n"                                        \
                        << Gambit::Scanner::Plugins::Plugin_Details(__gambit_plugin_namespace__::myData.name).printMin()\
                        << scan_end;                                                                                    \
        }                                                                                                               \
                                                                                                                        \
        return conv.as<T>();                                                                                            \
}                                                                                                                       \
                                                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in, T defaults)                                                                         \
{                                                                                                                       \
        YAML::Node conv = (get_input_value<IniFileInterface>(2)).getNode(in);                                           \
        if (conv.IsNull())                                                                                              \
        {                                                                                                               \
                return defaults;                                                                                        \
        }                                                                                                               \
                                                                                                                        \
        return conv.as<T>();                                                                                            \
}                                                                                                                       \
                                                                                                                        \
inline const std::vector<std::string> add_gambit_prefix(const std::vector<std::string> &key)                            \
{                                                                                                                       \
        std::vector<std::string> vec;                                                                                   \
        for (auto it = key.begin(), end = key.end(); it != end; it++)                                                   \
        {                                                                                                               \
                vec.push_back(std::string( #mod_name ) + "::" + *it);                                                   \
        }                                                                                                               \
        return vec;                                                                                                     \
}                                                                                                                       \
                                                                                                                        \
inline std::vector<double> &prior_transform(const std::vector<double> &in)                                              \
{                                                                                                                       \
        const static std::vector<std::string> key = add_gambit_prefix(get_input_value<std::vector<std::string>>(0));    \
        const static PriorTransform &prior = get_input_value<PriorTransform>(1);                                        \
        static std::map<std::string, double> key_map;                                                                   \
        static std::vector<double> ret(key.size());                                                                     \
                                                                                                                        \
        prior.transform(in, key_map);                                                                                   \
                                                                                                                        \
        auto it_ret = ret.begin();                                                                                      \
        for (auto it = key.begin(), end = key.end(); it != end; it++, it_ret++)                                         \
        {                                                                                                               \
                *it_ret = key_map[*it];                                                                                 \
        }                                                                                                               \
                                                                                                                        \
        return ret;                                                                                                     \
}                                                                                                                       \

#define FUNCTION_PLUGIN(mod_name, mod_version)                                                                          \
GAMBIT_PLUGIN(mod_name, like, mod_version)                                                                              \
{                                                                                                                       \
        FUNCTION_SETUP(mod_name)                                                                                        \
}                                                                                                                       \
namespace __gambit_plugin_ ## mod_name ## __t__like__v__ ## mod_version ##  _namespace__                                \

#endif
