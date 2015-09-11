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
        
        inline void __print_to_main__(Gambit::Scanner::printer * printer, const std::vector<std::string>&key, 
                                const std::unordered_map<std::string, double> &key_map, unsigned long long int id)
        {
            using Gambit::Printers::get_main_param_id;
            for (auto it = key.begin(), end = key.end(); it != end; it++)
            {
                printer->print(key_map.at(*it), *it, get_main_param_id(*it), printer->getRank(), id);
            }
        }
        
    }
    
}

///\name Objective Plugin Macros
///Macros used by the objective plugins.
///@{
///Objective plugin declaration.  Is of the form:  objective_plugin(name, version)
#define objective_plugin(...)           OBJECTIVE_PLUGIN( __VA_ARGS__ )
///@}

#define __OBJECTIVE_SETUP__                                                                                     \
using namespace Gambit::Scanner;                                                                                \
using Gambit::Printers::get_point_id;                                                                           \
                                                                                                                \
inline std::vector<std::string> &get_keys()  {return get_input_value<std::vector<std::string>>(0);}             \
inline void set_dimension(unsigned int val)  {get_input_value<unsigned int>(1) = val;}                          \
                                                                                                                \
inline const std::vector<std::string> add_gambit_prefix(const std::vector<std::string> &key)                    \
{                                                                                                               \
    std::vector<std::string> vec;                                                                               \
    for (auto it = key.begin(), end = key.end(); it != end; it++)                                               \
    {                                                                                                           \
        vec.push_back(__gambit_plugin_namespace__::myData.name + "::" + *it);                                   \
    }                                                                                                           \
    return vec;                                                                                                 \
}                                                                                                               \
                                                                                                                \
inline std::vector<double> &prior_transform(const std::vector<double> &in)                                      \
{                                                                                                               \
    using Gambit::Printers::get_main_param_id;                                                                  \
    const static std::vector<std::string> key = add_gambit_prefix(get_input_value<std::vector<std::string>>(0));\
    const static PriorTransform &prior = get_input_value<PriorTransform>(1);                                    \
    static std::unordered_map<std::string, double> key_map;                                                     \
    static std::vector<double> ret(key.size());                                                                 \
    const static int rank = get_printer().get_stream()->getRank();                                              \
                                                                                                                \
    prior.transform(in, key_map);                                                                               \
                                                                                                                \
    auto it_ret = ret.begin();                                                                                  \
    for (auto it = key.begin(), end = key.end(); it != end; it++, it_ret++)                                     \
    {                                                                                                           \
        *it_ret = key_map[*it];                                                                                 \
        get_printer().get_stream()->print(*it_ret, *it, get_main_param_id(*it), rank, get_point_id());          \
    }                                                                                                           \
                                                                                                                \
    return ret;                                                                                                 \
}                                                                                                               \
                                                                                                                \
inline void prior_transform(const std::vector<double> &in, std::unordered_map<std::string, double> &key_map)    \
{                                                                                                               \
    const static std::vector<std::string> key = add_gambit_prefix(get_input_value<std::vector<std::string>>(0));\
    const static PriorTransform &prior = get_input_value<PriorTransform>(1);                                    \
    prior.transform(in, key_map);                                                                               \
    Gambit::Scanner::__print_to_main__ (get_printer().get_stream(), key, key_map, get_point_id());              \
}                                                                                                               \

#define OBJECTIVE_PLUGIN(plug_name, ...)                                                                        \
    GAMBIT_PLUGIN_INITIALIZE(__OBJECTIVE_SETUP__, plug_name, objective, __VA_ARGS__)                            \

#endif
