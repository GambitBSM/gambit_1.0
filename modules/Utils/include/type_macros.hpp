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
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/seq/subseq.hpp>
#include <boost/preprocessor/seq/subseq.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>

/// Set default backend version for BOSSed types.
#define SET_DEFAULT_VERSION_FOR_LOADING_TYPES(BE, VER, DEFAULT)                       \
 BOOST_PP_SEQ_FOR_EACH(TYPEDEFAULT, (CAT_3(BE,_,VER))(CAT_3(BE,_,DEFAULT)),           \
 CAT_5(BE,_,DEFAULT,_,all_types))       

/// Open a namespace 
#define START_NAMESPACE(r,data,i,elem) namespace elem { 

/// Close a namespace.
#define END_NAMESPACE(z,n,data) }

/// An entry with a trailing namespace qualifier
#define TRAILING_NSQUALIFIER(r,data,i,elem) elem::


// If this file has been included from the main compilation unit, define TYPEDEFAULT
// differently from the way it is normally defined.
#ifdef __gambit_main_hpp__

  /// Helper macro for setting default backend version for BOSSed types.
  #define TYPEDEFAULT(r,data,elem)                                                    \
    namespace Gambit                                                                  \
    {                                                                                 \
                                                                                      \
      namespace Backends                                                              \
      {                                                                               \
                                                                                      \
        namespace BOOST_PP_SEQ_ELEM(0,data)                                           \
        {                                                                             \
                                                                                      \
          BOOST_PP_SEQ_FOR_EACH_I(START_NAMESPACE, ,                                  \
           BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))       \
                                                                                      \
            void CAT(equivrelation_,                                                  \
             BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem))()       \
            {                                                                         \
              Utils::typeEquivalencies().add(STRINGIFY(BOOST_PP_SEQ_ELEM(1,data)::    \
               BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER, ,                        \
               BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))   \
               BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem)),      \
               STRINGIFY(BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),   \
               elem)));                                                               \
            }                                                                         \
                                                                                      \
          namespace Ini                                                               \
          {                                                                           \
              ini_code CAT(reg_equiv,                                                 \
               BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem))       \
               (&CAT(equivrelation_,                                                  \
               BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem)));     \
          }                                                                           \
                                                                                      \
          BOOST_PP_REPEAT(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),END_NAMESPACE, )    \
                                                                                      \
        }                                                                             \
                                                                                      \
      }                                                                               \
                                                                                      \
      BOOST_PP_SEQ_FOR_EACH_I(START_NAMESPACE, ,                                      \
       BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))           \
      typedef BOOST_PP_SEQ_ELEM(1,data)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
       , BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))         \
       BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem)                \
       BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem);               \
      BOOST_PP_REPEAT(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),END_NAMESPACE, )        \
                                                                                      \
  }                                                                                   \

#else 

  /// Helper macro for setting default backend version for BOSSed types.
  #define TYPEDEFAULT(r,data,elem)                                                    \
    namespace Gambit                                                                  \
    {                                                                                 \
      BOOST_PP_SEQ_FOR_EACH_I(START_NAMESPACE, ,                                      \
       BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))           \
      typedef BOOST_PP_SEQ_ELEM(1,data)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
       , BOOST_PP_SEQ_SUBSEQ(elem,0,BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1)))         \
       BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem)                \
       BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),elem);               \
      BOOST_PP_REPEAT(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(elem),1),END_NAMESPACE, )        \
    }

#endif //__gambit_main_hpp__

// For testing whether a given backend versions classes have been loaded or not
#define ALREADY_LOADED(BE) CAT_3(__loaded_types_,BE,_hpp__)


#endif //__type_macros_hpp__


