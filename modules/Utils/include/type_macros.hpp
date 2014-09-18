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

#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/elem.hpp>

/// Set default backend version for BOSSed types.
#define SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BE, VER, DEFAULT)                       \
 BOOST_PP_SEQ_FOR_EACH(TYPEDEFAULT, (CAT_3(BE,_,VER))(CAT_3(BE,_,DEFAULT)),           \
 CAT_5(BE,_,DEFAULT,_,all_types))       


// If this file has been included from the main compilation unit, define TYPEDEFAULT
// differently from the way it is normally defined.
#ifdef __gambit_main_hpp__

  /// Helper macro for setting default backend version for BOSSed types.
  #define TYPEDEFAULT(r,NSPACES,TNAME)                                                \
  namespace Gambit                                                                    \
  {                                                                                   \
                                                                                      \
    namespace Backends                                                                \
    {                                                                                 \
                                                                                      \
      namespace BOOST_PP_SEQ_ELEM(0,NSPACES)                                          \
      {                                                                               \
                                                                                      \
        void CAT(equivrelation_,TNAME)()                                              \
        {                                                                             \
          Utils::typeEquivalencies().add(STRINGIFY(BOOST_PP_SEQ_ELEM(1,NSPACES)::TNAME\
           ),STRINGIFY(TNAME));                                                       \
        }                                                                             \
                                                                                      \
        namespace Ini                                                                 \
        {                                                                             \
          ini_code CAT(reg_equiv,TNAME) (&CAT(equivrelation_,TNAME)); }               \
        }                                                                             \
                                                                                      \
    }                                                                                 \
                                                                                      \
    using BOOST_PP_SEQ_ELEM(1,NSPACES)::TNAME;                                        \
                                                                                      \
  }                                                                                   \

#else 

  /// Helper macro for setting default backend version for BOSSed types.
  #define TYPEDEFAULT(r,NSPACES,TNAME)                                                \
    namespace Gambit { using BOOST_PP_SEQ_ELEM(1,NSPACES)::TNAME; }

#endif //__gambit_main_hpp__

// For testing whether a given backend versions classes have been loaded or not
#define ALREADY_LOADED(BE) CAT_3(__loaded_types_,BE,_hpp__)


#endif //__type_macros_hpp__


