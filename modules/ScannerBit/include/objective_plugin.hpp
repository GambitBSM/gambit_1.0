//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Macros and related classes for declaring
///  scanner test functions.
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

#ifndef OBJECTIVE_PLUGIN_HPP
#define OBJECTIVE_PLUGIN_HPP

#include "scanner_utils.hpp"
#include "plugin_defs.hpp"
#include "plugin_macros.hpp"

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
        }
}

///\name Objective Plugin Macros
///Macros used by the objective plugins.
///@{
///Initialize "exp" to the parameter names.
#define init_keys(exp)                  INIT_KEYS(exp)
///Gets the parameter names.
#define get_keys()                      GET_KEYS()
///Used only if the plugin is doing to be used as a prior.
///Sets the sub-hypercube size that is need by the prior.
#define set_size(size)                  SET_SIZE(size)
///Objective plugin declaration.  Is of the form:  objective_plugin(name, version)
#define objective_plugin(...)           OBJECTIVE_PLUGIN( __VA_ARGS__ )
///@}

#define INIT_KEYS(exp)                  INITIALIZE(exp, GET_KEYS())

#define GET_KEYS()                      get_input_value<std::vector<std::string>>(0)
#define SET_SIZE(size)                  get_input_value<unsigned int>(1) = size

#define OBJECTIVE_SETUP                                                                                                 \
using namespace Gambit::Scanner;                                                                                        \
                                                                                                                        \
inline const std::vector<std::string> add_gambit_prefix(const std::vector<std::string> &key)                            \
{                                                                                                                       \
        std::vector<std::string> vec;                                                                                   \
        for (auto it = key.begin(), end = key.end(); it != end; it++)                                                   \
        {                                                                                                               \
                vec.push_back(__gambit_plugin_namespace__::myData.tag + "::" + *it);                                    \
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

#define ENTER_FUNC_FUNC(func, num, ...) COMBINE(func, num)( __VA_ARGS__ )

#define OBJECTIVE_PLUGIN(...) ENTER_FUNC_FUNC(OBJECTIVE_PLUGIN_, ARG_N(__VA_ARGS__), __VA_ARGS__ )

#define OBJECTIVE_PLUGIN_2(mod_name, mod_version)                                                                       \
GAMBIT_PLUGIN(mod_name, like, mod_version)                                                                              \
{                                                                                                                       \
        OBJECTIVE_SETUP                                                                                                 \
}                                                                                                                       \
namespace __gambit_plugin_ ## mod_name ## __t__like__v__ ## mod_version ##  _namespace__                                \

#define OBJECTIVE_PLUGIN_3(mod_name, mod_version, option)                                                               \
GAMBIT_PLUGIN(mod_name, like, mod_version, option)                                                                      \
{                                                                                                                       \
        OBJECTIVE_SETUP                                                                                                 \
}                                                                                                                       \
namespace COMBINE_3(mod_name ## __t__like__v__ ## mod_version ## __reqd_libs__,                                         \
        libs_present_ ## mod_name ## __t__like__v__ ## mod_version)                                                     \

#endif
