//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Complete the build of the current module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 19++ 2012
//
//  *********************************************

CONTENTS(CREATE_OBS_OR_LIKE, SET_DEPENDENCY)    // Create the module functions
SUMMARISE_OBS(CONTENTS(OBS_SUMMARY, __DUMMY_FUNC__)) // Make string map of names+types of all functions
SUMMARISE_DEP(CONTENTS(__DUMMY_FUNC__, DEP_SUMMARY)) // Make string map of names+types of all dependencies
//MAP_TAGS(CONTENTS(MAP_OBS_OR_LIKE, MAP_DEPENDENCY)) // Map all tags defined in this module to strings
// gotta do some fuknee shit like  at<sequence_map,char_<'relic_denisty'> >::type
MAKE_INSTANCE(CURRENT_MODULE)                   // Instantiate the bastard at last (action?! for reals?)



