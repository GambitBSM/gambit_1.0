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
//  Nov 19 2012
//
//  *********************************************

// Create the module functions
CONTENTS(CREATE_OBS_OR_LIKE, SET_DEPENDENCY)
// Set up the mappings so we can actually get at the tags given some input strings in the ini file -- todo
//MAP_CONTENTS(CONTENTS(MAP_OBS_OR_LIKE, MAP_DEPENDENCY))

// Instantiate the bastard at last (probably should go elsewhere eventually)
#ifndef __in_module__ 
  PASTE(CURRENT_MODULE,_cls) PASTE(CURRENT_MODULE,_obj);
#endif

