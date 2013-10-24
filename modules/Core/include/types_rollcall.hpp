//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  List of headers that define classes, typedefs
///  and so forth needed for module, model and 
///  backend co-operation with the GAMBIT core. 
///  If you need to add a new type, what to do 
///  depends on what the type is associated with.
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
///   1. If the type will be used by more than
///      one backend, add it to the header
///      Utils/include/shared_types.hpp.
///   2. If the file will be used by a single 
///      backend only, add it to a header
///      Backends/include/X_types.hpp
///      and include that header from the file
///      Utils/include/backend_types_rollcall.hpp 
///
///  MODELS
///  ------
///  To add a new type that will be used to
///  communicate with a model Y:
///   1. If the type will be used by more than one
///      model, or a model and a module, add it to the header
///      Utils/include/shared_types.hpp.
///   2. If the type will only be used by a single
///      model, add it to a header
///      ModelBit/include/models/Y_types.hpp
///      and include that header from this file.
///
///  MODULES
///  -------
///  To add a new type that will be used to
///  communicate with a module Z:
///   1. If the type will be used by more than one
///      module, add it to the header
///      Utils/include/shared_types.hpp.
///   2. If the type will only be used by a single
///      module, add it to a header
///      Z/include/Z_types.hpp
///      and include that header from this file.
///
///  In general, types belong to the 'lowest-level'
///  category of component that they will be used 
///  to communicate with.  This hierarchy runs
///  backends < models < modules,
///  so anything at all used to communicate with a 
///  backend should be incorporated as per the
///  rules for backend types above.  Model rules 
///  should be followed for any types used to
///  communicate with models but not backends, and
///  module rules should be followed only for 
///  types that are used to communicate exclusively
///  with modules.
/// 
///  Finally, if you want to be able to spit 
///  instances of your new type out to a file or 
///  other output medium, you will need to add 
///  specialisations for it in 
///  Utils/include/printers.hpp.
///
///  Easy, right?
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///
///  *********************************************

#ifndef __types_rollcall_hpp__
#define __types_rollcall_hpp__

// Include the shared types
#include "shared_types.hpp"

// Include the models' own types
#include "MSSM_types.hpp"

// Include the modules' own types
#include "DarkBit_types.hpp"

#endif /* defined __types_rollcall_hpp__ */
