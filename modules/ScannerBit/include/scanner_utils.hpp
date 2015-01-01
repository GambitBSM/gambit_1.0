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

#include "outputhandler.hpp"
#include "exceptions.hpp"
#include "log.hpp"
#include "factory_registry.hpp"

#define scan_err        SCAN_ERR
#define scan_warn       SCAN_WARN
#define scan_end        SCAN_END
#define scan_flush      SCAN_FLUSH

#define SCAN_ERR                                                \
Gambit::Scanner::Errors::_bool_() = true,                       \
Gambit::Scanner::Errors::_err_()                                \

#define SCAN_WARN                                               \
Gambit::Scanner::Errors::_bool_() = false,                      \
Gambit::Scanner::Errors::_warn_()                               \

#define SCAN_END_INTERNAL                                       \
(Gambit::Scanner::Errors::_bool_()) ?                           \
(                                                               \
        Gambit::Scanner::scan_error().raise(LOCAL_INFO,         \
                Gambit::Scanner::Errors::_err_().str()),        \
        Gambit::Scanner::Errors::_err_().str("")                \
)                                                               \
:                                                               \
(                                                               \
        Gambit::Scanner::scan_warning().raise(LOCAL_INFO,       \
                Gambit::Scanner::Errors::_warn_().str()),       \
        Gambit::Scanner::Errors::_warn_().str("")               \
)                                                               \

#define SCAN_END std::endl, SCAN_END_INTERNAL

#define SCAN_FLUSH std::flush, SCAN_END_INTERNAL

namespace Gambit
{
        namespace Scanner
        {       
                namespace Errors
                {
                        inline std::stringstream &_err_()
                        {
                                static std::stringstream error;
                                return error;
                        }
                        
                        inline std::stringstream &_warn_()
                        {
                                static std::stringstream warn;
                                return warn;
                        }
                        
                        inline bool &_bool_()
                        {
                                static bool error;
                                return error;
                        }
                }
                /// Scanner errors
                error& scan_error();
                /// Scanner warnings
                warning& scan_warning();

                namespace outputHandler
                {
                        extern OutputHandler out;
                }
        }
}

#endif
