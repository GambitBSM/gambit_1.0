//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Compile-time completion of the registration 
//  of available modules. 
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 23 2012
//  Jan 18 2013
//
//  *********************************************

#ifndef __module_rollcall_finish_hpp__
#define __module_rollcall_finish_hpp__
#ifndef __in_module__ // Only in driver

#include <module.hpp>
#include <boost/preprocessor/repetition/enum.hpp>
#include <boost/preprocessor/seq/size.hpp>

//  For the string to integer tag map.

//  Create a Boost preprocessor sequence out of the strings
//  of all available observable or likelihood functions offered
//  by all modules.
#define TAGSTRING_SEQ MODULE_ROSTER(CREATE_TAGSTRING_SEQ)

//  Create a Boost preprocessor sequence out of the strings
//  of all available observable or likelihood functions offered
//  by a given MODULE.
#define CREATE_TAGSTRING_SEQ(MODULE)                                      \
  CONTENTS_##MODULE(MODULE,OBS_TAGSTRING_BRACKETS,DEP_TAGSTRING_BRACKETS)

//  Process an individual OBS_OR_LIKE CONTENTS entry
//  into a a Boost preprocessor sequence element.
#define OBS_TAGSTRING_BRACKETS(MODULE, TAG, TYPE) (#TAG)

//  Process an individual DEPENDENCY CONTENTS entry
//  into a a Boost preprocessor sequence element.
#define DEP_TAGSTRING_BRACKETS(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE) (#DEP_TAG)

//  Helper macro for Boost preprocessor enum macro calls; returns sequence element  
#define SEQ_ENTRY(Z,N,DATA) BOOST_PP_SEQ_ELEM(N,DATA)

// Make an array of all the observables and likelihoods available from any module, as well as
// their stated dependencies
const std::string ts_arr [] = {BOOST_PP_ENUM(BOOST_PP_SEQ_SIZE(TAGSTRING_SEQ),SEQ_ENTRY,TAGSTRING_SEQ)};

#endif /* defined(__in_module__) */
#endif /* defined(__module_rollcall_finish__) */
