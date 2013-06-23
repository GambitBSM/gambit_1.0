#ifndef gambit_shared_ptr_hpp_
#define gambit_shared_ptr_hpp_ 1

/*! \file
// \brief Adds shared_pointer to GAMBIT::
//
// example : GAMBIT::shared_ptr<double>::type myPtr.
//
// for now we use the shared pointer from tr1. This works
// with (at least) gcc 4.2 and later. TODO: setup the makefiles
// to help with this.
//
// This file also describes how to use boost shared_ptr in
// case of old gcc.
//
// if you have an older version of gcc, install boost and add the
// compiler option:
//     -Dgambit_use_boost=1
//
// boost installation:
//
// ubuntu: sudo apt-get install libboost-dev libboost-doc
// mac os or any other: http://www.boost.org/users/download/
//
// \author Johan Lundberg
// \date July 2011
*/


#ifndef gambit_no_boost
#include <boost/tr1/memory.hpp>
//#warning "using boost/tr1"
#else
#include <tr1/memory>
//#warning "using tr1"
#endif

namespace GAMBIT {

  using std::tr1::weak_ptr;
  using std::tr1::shared_ptr;
  using std::tr1::dynamic_pointer_cast;
  using std::tr1::static_pointer_cast;

}

#endif
