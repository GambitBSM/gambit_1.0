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
//
//  *********************************************

#ifndef __module_rollcall_finish_hpp__
#define __module_rollcall_finish_hpp__
#ifndef __in_module__ // Only in driver

#include <module.hpp>
#include <boost/preprocessor/repetition/enum.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/seq/size.hpp>

// Make an array of all the observables and likelihoods available from any module, as well as
// their stated dependencies
std::string ts_arr [] = {BOOST_PP_ENUM(BOOST_PP_SEQ_SIZE(TAGSTRING_SEQ),SEQ_ENTRY,TAGSTRING_SEQ)};
// Make an integer array with one unique entry for each entry in ts_arr
int ts_indx [] = {BOOST_PP_ENUM_PARAMS(BOOST_PP_SEQ_SIZE(TAGSTRING_SEQ),__DUMMY__)};
// Match up the indices in ts_indx with the strings in ts_arr using a map
std::map<std::string, int> ts_map = boost::assign::map_list_of 
 BOOST_PP_REPEAT(BOOST_PP_SEQ_SIZE(TAGSTRING_SEQ),MAPMAKER,__DUMMY__);  

#endif /* defined(__in_module__) */
#endif /* defined(__module_rollcall_finish__) */


//#ifndef __in_module__
//using namespace boost::mpl;
//#include <boost/mpl/map.hpp>
//#include <boost/mpl/pair.hpp>
//#include <boost/mpl/at.hpp>
//typedef map< pair <int_<5>,Tags::nevents>::type > PASTE(CURRENT_MODULE,_tag_map);
//at<map<pair<int,unsigned> >,int >::type PASTE(CURRENT_MODULE,_rabbit);
//#endif

//MAP_MODULE_ROSTER(MODULE_ROSTER(CREATE_MODULE)) // Map the module objects to strings -- todo

