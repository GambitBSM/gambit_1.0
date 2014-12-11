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
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef FUNCTION_PLUGIN_HPP
#define FUNCTION_PLUGIN_HPP

#include "plugin_defs.hpp"
#include "plugin_macros.hpp"
#include <yaml-cpp/yaml.h>

using namespace std;

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
                };
                
                /*Inifile Interface*/
                class IniFileInterface
                {
                public:
                        virtual const std::string pluginName() const = 0;
                        virtual const std::string fileName() const = 0;
                        virtual const std::string getValue(const std::string &in) const = 0;
                        virtual ~IniFileInterface() = 0;
                };
                
                /*Prior class*/
                class Prior_Base
                {
                public:
                        virtual void transform(const std::vector<double> &, std::map<std::string, double> &) const = 0;
                };
        }
}

#define init_inifile_value(exp, ...)    INIT_INIFILE_VALUE(exp, __VA_ARGS__) enum{}
#define init_keys(exp)                  INIT_KEYS(exp) enum{}
#define get_keys()                      GET_KEYS()
#define function_plugin(...)            FUNCTION_PLUGIN( __VA_ARGS__ )

#define prior_transform(...)            PRIOR_TRANSFORM(__VA_ARGS__)

#define INIT_INIFILE_VALUE(exp, ...)    INITIALIZE(exp, get_inifile_value<decltype(exp)>( __VA_ARGS__ ))
#define INIT_KEYS(exp)                  INITIALIZE(exp, GET_KEYS())

#define GET_KEYS()                      get_input_value<std::vector<std::string>>(0)

#define FUNCTION_SETUP(mod_name)                                                                                        \
using namespace Gambit::Scanner;                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in)                                                                                     \
{                                                                                                                       \
        std::string temp = (get_input_value<IniFileInterface>(2)).getValue(in);                                         \
        if (temp != "")                                                                                                 \
        {                                                                                                               \
                YAML::Node conv = YAML::Load(temp);                                                                     \
                return conv.as<T>();                                                                                    \
        }                                                                                                               \
        else                                                                                                            \
        {                                                                                                               \
                std::ostringstream ss;                                                                                  \
                ss << "Missing iniFile entry needed by plugin \""                                                       \
                                << (__gambit_plugin_namespace__::pluginData.name) << "\":  " << in;                     \
                throw Gambit::Plugin::PluginException(ss.str());                                                        \
        }                                                                                                               \
}                                                                                                                       \
                                                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in, T defaults)                                                                         \
{                                                                                                                       \
        std::string temp = (get_input_value<IniFileInterface>(2)).getValue(in);                                         \
        if (temp != "")                                                                                                 \
        {                                                                                                               \
                YAML::Node conv = YAML::Load(temp);                                                                     \
                return conv.as<T>();                                                                                    \
        }                                                                                                               \
        else                                                                                                            \
        {                                                                                                               \
                return defaults;                                                                                        \
        }                                                                                                               \
}                                                                                                                       \
                                                                                                                        \
inline const std::vector<std::string> add_gambit_prefix(const std::vector<std::string> &key)                            \
{                                                                                                                       \
        std::vector<std::string> vec;                                                                                   \
                                                                                                                        \
        for (auto it = key.begin(), end = key.end(); it != end; it++)                                                   \
        {                                                                                                               \
                vec.push_back(std::string( #mod_name ) + "::" + *it);                                                   \
        }                                                                                                               \
                                                                                                                        \
        return vec;                                                                                                     \
}                                                                                                                       \
                                                                                                                        \
inline std::vector<double> &prior_transform(const std::vector<double> &in)                                              \
{                                                                                                                       \
        const static std::vector<std::string> key = add_gambit_prefix(get_input_value<std::vector<std::string>>(0));    \
        const static PriorTransform &prior = get_input_value<PriorTransform>(2);                                        \
        static std::map<std::string, double> key_map;                                                                   \
        static std::vector<double> ret;                                                                                 \
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
