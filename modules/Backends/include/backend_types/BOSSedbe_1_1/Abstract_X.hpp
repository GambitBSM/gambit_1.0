#ifndef __ABSTRACT_X_BOSSedbe_1_1_HPP__
#define __ABSTRACT_X_BOSSedbe_1_1_HPP__

#include "backend_types/BOSSedbe_1_1/forward_decls_abstract_classes.hpp"
#include "backend_types/BOSSedbe_1_1/identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{

  class Abstract_X
  {
    public:

        virtual int& i_ref_GAMBIT() =0;

    public:
        virtual void pointerAssign_GAMBIT(Abstract_X*) =0;
        virtual Abstract_X* pointerCopy_GAMBIT() =0;
        virtual ~Abstract_X() {};
  };

}


#endif /* __ABSTRACT_X_BOSSedbe_1_1_HPP__ */
