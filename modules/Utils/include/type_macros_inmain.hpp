//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Macros for declaring different types for 
///  GAMBIT.  Version to be included in main
///  compilation unit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2014 Sep
///
///  *********************************************

#ifndef __type_macros_hpp__
#define __type_macros_hpp__

#include "util_macros.hpp"
#include "equivalency_singleton.hpp"
#include "standalone_error_handlers.hpp"

#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/seq/for_each.hpp>

/// Set default backend version for BOSSed types.
#define MAKE_DEFAULT_VERSION_FOR_LOADING_TYPES(BE,VER)                              \
 BOOST_PP_SEQ_FOR_EACH(TYPEDEFAULT, CAT_3(BE,_,VER), CAT_5(BE,_,VER,_,all_types))       

/// Helper macro for setting default backend version for BOSSed types.
#define TYPEDEFAULT(r,NSPACE,TNAME)                                                 \
namespace Gambit                                                                    \
{                                                                                   \
                                                                                    \
  namespace Backends                                                                \
  {                                                                                 \
                                                                                    \
    namespace NSPACE                                                                \
    {                                                                               \
                                                                                    \
      void CAT(equivrelation_,TNAME)()                                              \
      {                                                                             \
        Utils::typeEquivalencies().add(STRINGIFY(NSPACE::TNAME),STRINGIFY(TNAME));  \
      }                                                                             \
                                                                                    \
      namespace Ini                                                                 \
      {                                                                             \
        ini_code CAT(reg_equiv,TNAME) (&CAT(equivrelation_,TNAME)); }               \
      }                                                                             \
                                                                                    \
  }                                                                                 \
                                                                                    \
  using NSPACE::TNAME;                                                              \
                                                                                    \
}                                                                                   \


#endif //__type_macros_hpp__


