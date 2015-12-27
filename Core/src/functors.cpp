//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Explicit functor template class instantiations
///  for the full GAMBIT executable.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2015 Jun
///
///  *********************************************

#include "gambit/Elements/functor_definitions.hpp"

// Instantiate the module functor templates for all required types
BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_MODULE_FUNCTOR_TEMPLATE,,PRINTABLE_TYPES)
INSTANTIATE_MODULE_FUNCTOR_TEMPLATE(,,void)

// Instantiate the backend functor templates for all required types 
BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_BACKEND_FUNCTOR_TEMPLATE,,BACKEND_FUNCTOR_TYPES)
