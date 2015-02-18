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

#ifndef SCANNER_PLUGIN_HPP
#define SCANNER_PLUGIN_HPP

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/plugin_defs.hpp"
#include "gambit/ScannerBit/plugin_macros.hpp"
#include "gambit/ScannerBit/factory_defs.hpp"

#include "yaml-cpp/yaml.h"

///\name Scanner Plugin Macros 
///Macros used by the scanner plugin
///@{
///Initializes the parameter "exp" to the hypercube dimension when the plugin loads.
#define init_dimension(exp)             INIT_DIMENSION(exp)
///Initializes the parameter "exp" to the functor corresponding to the purpose "__VA_ARGS__" when the plugin loads.
#define init_functor(exp, ...)          INIT_FUNCTOR(exp, __VA_ARGS__)
///Get's the hyperspace dimension.
#define get_dimension()                 GET_DIMENSION()
///Gets the functor corresponding to the purpose "__VA_ARGS__".
#define get_purpose(...)                GET_PURPOSE( __VA_ARGS__ )
///Defines a scanner plugin.  Has the form:  scanner_plugin(name, version).
#define scanner_plugin(...)             SCANNER_PLUGIN(__VA_ARGS__)
///@}

#define INIT_DIMENSION(exp)             INITIALIZE(exp, GET_DIMENSION())
#define INIT_FUNCTOR(exp, ...)          INITIALIZE(exp, GET_FUNCTOR(__VA_ARGS__))

#define GET_DIMENSION()                 get_input_value<unsigned int>(0)
#define GET_PURPOSE(...)                (get_input_value<Factory_Base>(1))(__VA_ARGS__)

#define SCANNER_SETUP                                                                                                   \
using namespace Gambit::Scanner;                                                                                        \
/*Gambit::Scanner::scan::ScanFileOutput scan_ios(get_keys(), &get_input_value<PriorTransform>(2));*/                    \

/*#define SET_SCAN_IOS(file) 
scan_ios.setOutput((get_input_value<IniFileInterface>(3)).getNode(#file)); */

#define ENTER_FUNC_SCAN(func, num, ...) COMBINE(func, num)( __VA_ARGS__ )

#define SCANNER_PLUGIN(...) ENTER_FUNC_SCAN(SCANNER_PLUGIN_, ARG_N(__VA_ARGS__), __VA_ARGS__ )

#define SCANNER_PLUGIN_1(plugin_name) SCANNER_PLUGIN_INTERNAL(plugin_name, no_version)

#define SCANNER_PLUGIN_2(plugin_name, plug_version) SCANNER_PLUGIN_INTERNAL(plugin_name, plug_version)

#define SCANNER_PLUGIN_INTERNAL(mod_name, mod_version)                                                                         \
GAMBIT_PLUGIN_INTERNAL_INT(mod_name, scan, mod_version)                                                                              \
{                                                                                                                       \
        SCANNER_SETUP                                                                                                   \
}                                                                                                                       \
namespace __gambit_plugin_ ## mod_name ## __t__scan__v__ ## mod_version ##  _namespace__                                \
        
#endif
