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

#include "util_types.hpp"

#ifndef __libFarrayTest_types_hpp__
#define __libFarrayTest_types_hpp__

// Farray syntax:
// Farray<[type], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>
// Fstring syntax:
// Fstring<[string length]>
// FstringArray syntax:
// FstringArray<[string length], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>

namespace Gambit
{
    struct libFarrayTest_CB_type
    {
        Farray< double,-2,0> a;
        Farray< double,1,3>  b;
        int c;
        Farray<int, 1,3, 0,1, -1,0> d; 
    };
    struct libFarrayTest_CB2_type
    {
        Fstring<5> chara;
        FstringArray<5, 1,3>  charb;
        FstringArray<6, 1,2, -1,0> charc;
        int e; 
    };    
}

#endif // defined __libFarrayTest_types_hpp__
