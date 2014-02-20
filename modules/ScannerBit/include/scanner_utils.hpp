//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Utility Functions for the Gambit Scanner
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
///  \author Gregory Martinez (gregory.david.martinez@gmail.com)
///  \date July 2013/feb 2014
//
//  *********************************************

#ifndef __scanner_utils_hpp__
#define __scanner_utils_hpp__

#include <scanlog.hpp>
#include <outputhandler.hpp>

namespace Gambit
{
        namespace Scanner
        {       
                namespace outputHandler
                {
                        extern OutputHandler out;
                }
        }
        
        namespace scanLog
        {
                extern ErrorLog err;
        }
}

#endif