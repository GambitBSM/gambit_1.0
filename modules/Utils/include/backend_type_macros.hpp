//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General macros for producing classes and types
///  used in the backend system
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

#ifndef __BACKEND_TYPE_MACROS_HPP__
#define __BACKEND_TYPE_MACROS_HPP__

#include <iostream>
#include <string>
#include <dlfcn.h>
#include <map>

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/list/for_each.hpp>
#include <boost/preprocessor/list/rest_n.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/seq/enum.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>

#include "util_macros.hpp"
#include "util_types.hpp"

#if !BOOST_PP_VARIADICS
  #error Variadic Boost preprocessor macros required. BOOST_PP_VARIADICS must be set to 1.
#endif


// --------------------------------------------------------------------------   
//                  Fortran common block macros
// --------------------------------------------------------------------------

/// \name Macros for building a basic Fortran common block struct
///
/// @{
/* Create basic struct for reading in common block */
#define GENERATE_CB_BASIC_STRUCT(NAME,CB)                                                       \
  struct NAME##_basic                                                                           \
  {                                                                                             \
    BOOST_PP_SEQ_FOR_EACH(ADD_CB_BASIC_STRUCT_CONTENT,x, CB)                                    \
  };
    
/* Add content to basic commonblock struct. R and D are passed by the BOOST macro, but not used here. */ 
#define ADD_CB_BASIC_STRUCT_CONTENT(R,D,VAR)                                                    \
  BOOST_PP_IIF( BOOST_PP_TUPLE_ELEM(2,VAR), ADD_CB_BASIC_STRUCT_VAR(VAR),  ADD_CB_BASIC_STRUCT_ARRAY(VAR))

/* Add variable to basic common block struct */
#define ADD_CB_BASIC_STRUCT_VAR(VAR)                                                            \
  BOOST_PP_TUPLE_ELEM(0,VAR) BOOST_PP_TUPLE_ELEM(1,VAR);       

/* Add array to basic common block struct */
#define ADD_CB_BASIC_STRUCT_ARRAY(VAR)                                                          \
  BOOST_PP_TUPLE_ELEM(0,VAR) BOOST_PP_TUPLE_ELEM(1,VAR)[FARRAY_ARRAY_SIZE(BOOST_PP_TUPLE_ELEM(3,VAR))];         

/* Macros for calculating size of (multidimensional) arrays */
#define FARRAY_SUM_INDEX(R,D,VAR) (PAIR_ELEMENT1(VAR)-(PAIR_ELEMENT0(VAR))+1) *
#define FARRAY_ARRAY_SIZE(VAR) BOOST_PP_LIST_FOR_EACH(FARRAY_SUM_INDEX,,VAR) 1
/// @}


/// \name Macros for building a Fortran common block struct containing Farray objects
///
/// @{
/* Create re-indexed common block struct for the user */
#define GENERATE_CB_REINDEXED_STRUCT(NAME,CB)                                                   \
  struct NAME                                                                                   \
  {                                                                                             \
    BOOST_PP_SEQ_FOR_EACH(ADD_CB_REINDEXED_STRUCT_CONTENT,NAME, CB)                             \
    ADD_CB_BASIC_POINTER(NAME)                                                                  \
    ADD_CB_REINDEXED_STRUCT_CONSTRUCTOR(NAME,CB)                                                \
  };

/* Add content to reindexed commonblock struct. R and NAME are passed by the BOOST macro, but not used here. */
#define ADD_CB_REINDEXED_STRUCT_CONTENT(R,NAME,VAR)                                             \
  STRIP_PARENS(BOOST_PP_IIF(BOOST_PP_TUPLE_ELEM(2,VAR)        ,                                 \
                            ADD_CB_REINDEXED_STRUCT_VAR(VAR)  ,                                 \
                            ADD_CB_REINDEXED_STRUCT_ARRAY(VAR)))  

/* Add variable to reindexed common block struct */ 
#define ADD_CB_REINDEXED_STRUCT_VAR(VAR)                                                        \
  (BOOST_PP_TUPLE_ELEM(0,VAR) * BOOST_PP_TUPLE_ELEM(1,VAR);)                                                                                                

/* Add Farray to reindexed common block struct */
#define ADD_CB_REINDEXED_STRUCT_ARRAY(VAR)                                                      \
  (Gambit::Farray<BOOST_PP_TUPLE_ELEM(0,VAR),BOOST_PP_LIST_SIZE(BOOST_PP_TUPLE_ELEM(3,VAR))>    \
    BOOST_PP_TUPLE_ELEM(1,VAR);                                                                 \
  )

/* Add pointer to basic commonblock struct */
#define ADD_CB_BASIC_POINTER(NAME)                                                              \
  NAME##_basic * basicPointer;
    
/* Add constructors for reindexed commonblock struct. */
#define ADD_CB_REINDEXED_STRUCT_CONSTRUCTOR(NAME,CB)                                            \
  NAME (NAME##_basic * in)                                                                      \
  {                                                                                             \
    BOOST_PP_SEQ_FOR_EACH(ADD_CB_REINDEXED_STRUCT_INIT,NAME, CB)                                \
    basicPointer = in;                                                                          \
  }                                                                                             \
  NAME (){}
    
/* Add content to constructor of reindexed commonblock struct. R and NAME are passed by the BOOST macro, but not used here. */
#define ADD_CB_REINDEXED_STRUCT_INIT(R,NAME,VAR)                                                \
  STRIP_PARENS(BOOST_PP_IIF(BOOST_PP_TUPLE_ELEM(2,VAR)              ,                           \
                            ADD_CB_REINDEXED_STRUCT_VAR_INIT(VAR)   ,                           \
                            ADD_CB_REINDEXED_STRUCT_ARRAY_INIT(VAR)))      
    
/* Add variable initialization to constructor of reindexed common block struct */   
#define ADD_CB_REINDEXED_STRUCT_VAR_INIT(VAR)                                                   \
  (BOOST_PP_TUPLE_ELEM(1,VAR) = &(in->BOOST_PP_TUPLE_ELEM(1,VAR));)                                                                                                

/* Add array initialization to constructor ofreindexed common block struct */ 
#define ADD_CB_REINDEXED_STRUCT_ARRAY_INIT(VAR)                                                 \
  (                                                                                             \
    ADD_FARRAY_CONSTRUCTOR_ARRAYS(BOOST_PP_TUPLE_ELEM(1,VAR),                                   \
                                  BOOST_PP_LIST_SIZE(BOOST_PP_TUPLE_ELEM(3,VAR)),               \
                                  BOOST_PP_TUPLE_ELEM(3,VAR))                                   \
    BOOST_PP_TUPLE_ELEM(1,VAR) =                                                                \
    Gambit::Farray<BOOST_PP_TUPLE_ELEM(0,VAR),BOOST_PP_LIST_SIZE(BOOST_PP_TUPLE_ELEM(3,VAR))>   \
    ( in->BOOST_PP_TUPLE_ELEM(1,VAR)                  ,                                         \
      CAT(BOOST_PP_TUPLE_ELEM(1,VAR),_temp_startArray),                                         \
      CAT(BOOST_PP_TUPLE_ELEM(1,VAR),_temp_endArray)                                            \
    );                                                                                          \
  )

/* Add temporary arrays containing the array limits. To be passed to the Farray constructor. */
#define ADD_FARRAY_CONSTRUCTOR_ARRAYS(NAME,DIM,INDICES)                                         \
  int CAT(NAME,_temp_startArray[DIM]) =                                                         \
    {BOOST_PP_SEQ_ENUM(BOOST_PP_LIST_FOR_EACH(FARRAY_CONSTRUCTOR_ARRAY_INDEX,PAIR_ELEMENT0,INDICES))};  \
  int CAT(NAME,_temp_endArray[DIM])   =                                                         \
    {BOOST_PP_SEQ_ENUM(BOOST_PP_LIST_FOR_EACH(FARRAY_CONSTRUCTOR_ARRAY_INDEX,PAIR_ELEMENT1,INDICES))};
       
#define FARRAY_CONSTRUCTOR_ARRAY_INDEX(R,MACRO,VAR) (MACRO(VAR))
/// @}


/// \name User macros for setting up Fortran commonblocks
///
/// @{
/* Macros for adding content to commonblock */
#define GENERAL_VAR(TYPE,NAME) ((TYPE,NAME,1, ))
#define FORTRAN_ARRAY(...)  ((                                                                  \
                            BOOST_PP_TUPLE_ELEM(0,(__VA_ARGS__)),                               \
                            BOOST_PP_TUPLE_ELEM(1,(__VA_ARGS__)),                               \
                            0,                                                                  \
                            BOOST_PP_LIST_REST_N(2,BOOST_PP_TUPLE_TO_LIST((__VA_ARGS__)))       \
                            ))

/* Main macro for generating the commonblock setup */
#define DECLARE_FORTRAN_COMMONBLOCK(TYPENAME,CB)                                                \
  GENERATE_CB_BASIC_STRUCT(TYPENAME,CB)                                                         \
  GENERATE_CB_REINDEXED_STRUCT(TYPENAME,CB)                                 
    
#define FORTRAN_COMMONBLOCK(FULLTYPE, NAME) ((FULLTYPE##_basic,NAME,2,FULLTYPE))    
/// @}

#endif // __BACKEND_TYPE_MACROS_HPP__
