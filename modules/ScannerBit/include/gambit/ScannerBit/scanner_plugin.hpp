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

///\name Scanner Plugin Macros 
///Macros used by the scanner plugin
///@{
#define get_dimension()                 GET_DIMENSION()
///Gets the functor corresponding to the purpose "__VA_ARGS__".
#define get_purpose(...)                GET_PURPOSE( __VA_ARGS__ )
///Defines a scanner plugin.  Has the form:  scanner_plugin(name, version).
#define scanner_plugin(...)             SCANNER_PLUGIN(__VA_ARGS__)
///@}

#define GET_DIMENSION()                 get_input_value<unsigned int>(0)
#define GET_PURPOSE(...)                (get_input_value<Factory_Base>(1))(__VA_ARGS__)

#define SCANNER_SETUP                                                                                                   \
using namespace Gambit::Scanner;                                                                                        \
/*Gambit::Scanner::scan::ScanFileOutput scan_ios(get_keys(), &get_input_value<PriorTransform>(2));*/                    \

/*#define SET_SCAN_IOS(file) 
scan_ios.setOutput((get_input_value<IniFileInterface>(3)).getNode(#file)); */

#define SCANNER_PLUGIN(plug_name, ...) GAMBIT_PLUGIN_INITIALIZE(SCANNER_SETUP, plug_name, scanner, __VA_ARGS__)
        
#endif
