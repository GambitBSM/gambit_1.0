//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  List of types which are printable by GAMBIT printers
///  NO LONGER AUTOMATICALLY GENERATED! Manually update this
///  list when you want to add a new printable type.
///
///  *********************************************
///
///  Authors:
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2016 Jan
///
///  *********************************************

#ifndef __printable_types_hpp__
#define __printable_types_hpp__

#include <map>
#include "gambit/Backends/backend_types/DDCalc.hpp" // FIXME this can't stay here
#include "gambit/Utils/model_parameters.hpp"
#include "gambit/ScannerBit/printable_types.hpp" // Adding on top of this list

typedef std::map<std::string,double> map_str_dbl; // can't have commas in macro input

// Types that Gambit printers can output (if printer plugin is properly equipped)
#define PRINTABLE_TYPES    \
  SCANNER_PRINTABLE_TYPES  \
  (triplet<double>)        \
  (DM_nucleon_couplings)

// Types that can be retrieved from Gambit printer output (if printer plugin is properly equipped)
// Needs to be the same as the printable types, i.e. should be able to retrieve everything.
#define RETRIEVABLE_TYPES PRINTABLE_TYPES

#endif // defined __printable_types_hpp__
