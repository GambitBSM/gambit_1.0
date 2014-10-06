#ifndef __ABSTRACT_Y_BOSSMinimalExample_1_2_HPP__
#define __ABSTRACT_Y_BOSSMinimalExample_1_2_HPP__

#include "forward_decls_abstract_classes.hpp"
#include "abstract_X.hpp"
#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{

  class Abstract_Y
  {
    public:

        virtual Abstract_X& x_ref_GAMBIT() =0;

        virtual Abstract_X* get_x_GAMBIT() =0;
        Abstract_X* get_x()
        {
            return get_x_GAMBIT();
        }

        virtual void set_x_GAMBIT(Abstract_X&) =0;
        void set_x(Abstract_X& x_in)
        {
            set_x_GAMBIT(x_in);
        }

    public:
        virtual void pointerAssign_GAMBIT(Abstract_Y*) =0;
        virtual Abstract_Y* pointerCopy_GAMBIT() =0;
        virtual ~Abstract_Y() {};
  };

}

#include "backend_undefs.hpp"

#endif /* ABSTRACT_Y_BOSSMinimalExample_1_2_HPP__ */
