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

#include "util_types.hpp"

#ifndef __SUSYHIT_types_hpp__
#define __SUSYHIT_types_hpp__

namespace Gambit
{
    // CsB hand made >
    struct top2body_CB_type
    {
        double brtopbw;
        double brtopbh;
        Farray<double, 1,4, 1,2> brtopneutrstop;
    };
    // CsB hand made <

    // CsB from Anders' Python script >

    // CsB from Anders' Python script <
}

#endif // defined __SUSYHIT_types_hpp__
