//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  List of headers that define classes, typedefs
///  and so forth needed for module, model and 
///  backend co-operation with the GAMBIT core. 
///  If you need to add a new type, you either 
///  need to include the header containing it from
///  this header, or include it instead from 
///  shared_types.hpp.  Which one to choose depends 
///  on what the type is for (guidelines below).
///
///  Bear in mind throughout that normal C/C++ rules
///  apply; if your new type is never going to be
///  used except as a local convenience in your new
///  module/backend/model, then there is no need to 
///  do anything more than put it in a header and 
///  #include that from wherever you plan to use it,
///  as per standard programming practice.
///  You should only have to bother with the 
///  instructions below if GAMBIT or its other 
///  modules/backends/models need to be aware of this
///  new type.  That would typically be the case when
///  your new type is to be used in more than one 
///  module/backend/model, or if it is to be used for 
///  passing things back and forth between modules,  
///  backends and/or models, e.g. if it is the result
///  type of a backend function or a module function.
///
///  BACKENDS
///  --------
///  To add a new type that will be used to
///  communicate with a backend X:
///      Add it to a header
///      Backends/include/X_types.hpp
///      and include that header from the file
///      Utils/include/shared_types.hpp.       
///
///  MODELS AND MODULES
///  ------------------
///  To add a new type that will be used to
///  communicate with a model X or module Y:
///   1. If the type will only be used by a single
///      model X, add it to a header
///      Models/models/X_types.hpp,
///      **FIXME currently you then do this:**
///      and include that header from 
///      Models/models/X.hpp
///      and this file.
///      **FIXME in future this will be true instead:**
///      and it will be automatically included in 
///      this file and in Models/models/X.hpp 
///      by the functor type harvester.
///   2. If the type will only be used by a single
///      module Y, add it to a header
///      Y/include/Y_types.hpp,
///      **FIXME currently you then do this:**
///      and include that header from 
///      Y/include/Y_rollcall.hpp
///      and this file.
///      **FIXME in future this will be true instead:**
///      and it will be automatically included in 
///      this file and in Y/include/Y_rollcall.hpp 
///      by the functor type harvester.
///
///  MIXTURES
///  -------- 
///  If the type will be used by multiple modules, 
///  multiple models or multiple backends, or any 
///  mixture thereof:
///      Add it to or include it from the header
///      Utils/include/shared_types.hpp.
///  
/// 
///  Remember also that if you want to be able to
///  spit instances of your new type out to a file 
///  or other output medium, you will need to add 
///  specialisations for it in the various printers
///  included in 
///  Utils/include/printers_rollcall.hpp.
///
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///  \date 2014 Mar
///
///  *********************************************

#ifndef __types_rollcall_hpp__
#define __types_rollcall_hpp__

// Include the shared types
#include "shared_types.hpp"

// Include the model-specific types
#include "MSSM_types.hpp"

// Include the module-specific types
#include "DarkBit_types.hpp"
#include "ExampleBit_A_types.hpp"
#ifdef COLLIDE
  // Debugging... No seriously, I am including these headers, right??
  #pragma message "COLLIDE = " BOOST_PP_STRINGIZE(COLLIDE)
  #pragma message "Included from types_rollcall: HEColliderBit_types.hpp"
  #include "HEColliderBit_types.hpp"
#endif

#endif /* defined __types_rollcall_hpp__ */
