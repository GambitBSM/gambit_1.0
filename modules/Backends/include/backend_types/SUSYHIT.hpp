//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the SUSYHIT 1.4 backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Peter Athron
/// \author Csaba Balazs
/// \date 2015 Jan
///
///  *********************************************

#include "backend_type_macros.hpp"

#ifndef __SUSYHIT_types_hpp__
#define __SUSYHIT_types_hpp__

// IMPORTANT: No commas between the FORTRAN_ARRAY and GENERAL_VAR macros
DECLARE_FORTRAN_COMMONBLOCK(top2body_CB_type, GENERAL_VAR(double,brtopbw)                      \
                                              GENERAL_VAR(double,brtopbh)                      \
                                              FORTRAN_ARRAY(double,brtopneutrstop,(1,4),(1,2)) )   

#endif // defined __SUSYHIT_types_hpp__
