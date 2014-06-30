//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Utility Functions for the Gambit Scanner
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __scanner_utils_hpp__
#define __scanner_utils_hpp__

#include <type_traits>
#include <utility>
#include <ostream>
#include <sstream>
#include <unordered_map>
#include <algorithm>

#include "scanlog.hpp"
#include "outputhandler.hpp"
#include "exceptions.hpp"
#include "log.hpp"
#include "factory_registry.hpp"

namespace Gambit
{
        namespace Scanner
        {       

                /// Scanner errors
                error& scan_error();
                /// Scanner warnings
                warning& scan_warning();

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
