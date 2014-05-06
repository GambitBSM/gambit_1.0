//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Adds shared_ptr and friends to Gambit 
///  namespace.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Johan Lundberg
///  \date July 2011
///
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2014 Apr
///
///  *********************************************

#ifndef shared_ptr_hpp_
#define shared_ptr_hpp_


#include <tr1/memory>

namespace Gambit {

  using std::tr1::weak_ptr;
  using std::tr1::shared_ptr;
  using std::tr1::dynamic_pointer_cast;
  using std::tr1::static_pointer_cast;
  using std::tr1::enable_shared_from_this;

}

#endif
