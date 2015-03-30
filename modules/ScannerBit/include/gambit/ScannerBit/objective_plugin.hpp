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

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/plugin_defs.hpp"
#include "gambit/ScannerBit/plugin_macros.hpp"

namespace Gambit
{
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {       
                /*Prior Transform*/
                class PriorTransform
                {
                public:
                        virtual void transform(const std::vector<double> &, std::unordered_map<std::string, double> &) const = 0;
                        virtual double operator()(const std::vector<double>&) const = 0;
                        virtual ~PriorTransform() = 0;
                };
        }
}

///\name Objective Plugin Macros
///Macros used by the objective plugins.
///@{
///Gets the parameter names.
#define get_keys()                      GET_KEYS()
///Used only if the plugin is doing to be used as a prior.
///Sets the sub-hypercube size that is need by the prior.
#define set_dimension(...)              SET_DIMENSION(__VA_ARGS__)
///Objective plugin declaration.  Is of the form:  objective_plugin(name, version)
#define objective_plugin(...)           OBJECTIVE_PLUGIN( __VA_ARGS__ )
///@}

#define GET_KEYS()                      get_input_value<std::vector<std::string>>(0)
#define SET_DIMENSION(...)              get_input_value<unsigned int>(1) = __VA_ARGS__

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
        static std::unordered_map<std::string, double> key_map;                                                         \
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

#define OBJECTIVE_PLUGIN(plug_name, ...) GAMBIT_PLUGIN_INITIALIZE(OBJECTIVE_SETUP, plug_name, objective, __VA_ARGS__)

#endif
