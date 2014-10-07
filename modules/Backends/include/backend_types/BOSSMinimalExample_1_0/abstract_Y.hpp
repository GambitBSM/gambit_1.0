#ifndef __ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__
#define __ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__

#include "forward_decls_abstract_classes.hpp"
#include "abstract_X.hpp"
#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{

  namespace nspace3
  {

    class Abstract_Y
    {
      public:

        virtual nspace1::nspace2::Abstract_X& x_ref_GAMBIT() =0;

        virtual nspace1::nspace2::Abstract_X* get_x_GAMBIT() =0;
        nspace1::nspace2::Abstract_X* get_x()
        {
            return get_x_GAMBIT();
        }

        virtual void set_x_GAMBIT(nspace1::nspace2::Abstract_X&) =0;
        void set_x(nspace1::nspace2::Abstract_X& x_in)
        {
            set_x_GAMBIT(x_in);
        }

      public:
        virtual void pointerAssign_GAMBIT(Abstract_Y*) =0;
        virtual Abstract_Y* pointerCopy_GAMBIT() =0;
        virtual ~Abstract_Y() {};
    };

  }

}

#include "backend_undefs.hpp"

#endif /* ABSTRACT_Y_BOSSMinimalExample_1_0_HPP__ */
