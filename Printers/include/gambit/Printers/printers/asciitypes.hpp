//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Sequence of all types printable by the ASCII
///  printer.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2017 Mar
///
///  *********************************************

#ifndef __ASCIITYPES__
#define __ASCIITYPES__

#include "gambit/ScannerBit/printable_types.hpp"

#define ASCIITYPES SCANNER_PRINTABLE_TYPES  \
  (std::string)                             \
  (triplet<double>)                         \
  (DM_nucleon_couplings)                    \

#endif