//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the libFarrayTest backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Feb
///
///  *********************************************

#include "backend_type_macros.hpp"

#ifndef __libFarrayTest_types_hpp__
#define __libFarrayTest_types_hpp__

// IMPORTANT: No commas between the FORTRAN_ARRAY and GENERAL_VAR macros
DECLARE_FORTRAN_COMMONBLOCK(libFarrayTest_CB_type,  FORTRAN_ARRAY(double,a,(-2,0))              \
                                                    FORTRAN_ARRAY(double,b,(1,3))               \
                                                    GENERAL_VAR(int, c)                         \
                                                    FORTRAN_ARRAY(int,d,(1,3),(0,1),(-1,0)) )   

#endif // defined __libFarrayTest_types_hpp__
