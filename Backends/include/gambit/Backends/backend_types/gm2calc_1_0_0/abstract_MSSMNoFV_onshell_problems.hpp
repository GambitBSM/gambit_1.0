#ifndef __abstract_MSSMNoFV_onshell_problems_gm2calc_1_0_0_hpp__
#define __abstract_MSSMNoFV_onshell_problems_gm2calc_1_0_0_hpp__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.hpp"
#include "forward_decls_wrapper_classes.hpp"
#include <string>
#include <ostream>
#include <vector>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::gm2calc::MSSMNoFV_onshell_problems*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   
   namespace gm2calc
   {
      class Abstract_MSSMNoFV_onshell_problems : virtual public AbstractBase
      {
         public:
   
            virtual void clear() =0;
   
            virtual void clear_problems() =0;
   
            virtual void clear_warnings() =0;
   
            virtual void flag_no_convergence_Mu_MassB_MassWB(double, unsigned int) =0;
   
            virtual void flag_no_convergence_me2(double, unsigned int) =0;
   
            virtual void flag_tachyon(const ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >&) =0;
   
            virtual void unflag_no_convergence_Mu_MassB_MassWB() =0;
   
            virtual void unflag_no_convergence_me2() =0;
   
            virtual bool have_tachyon() const =0;
   
            virtual bool have_problem() const =0;
   
            virtual bool have_warning() const =0;
   
            virtual ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > get_warnings() const =0;
   
            virtual ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > get_problems() const =0;
   
            virtual void print(::std::basic_ostream<char, std::char_traits<char> >&) const =0;
   
            virtual void print_problems(::std::basic_ostream<char, std::char_traits<char> >&) const =0;
   
            virtual void print_warnings(::std::basic_ostream<char, std::char_traits<char> >&) const =0;
   
         public:
            virtual void pointerAssign__BOSS(Abstract_MSSMNoFV_onshell_problems*) =0;
            virtual Abstract_MSSMNoFV_onshell_problems* pointerCopy__BOSS() =0;
   
         private:
            mutable MSSMNoFV_onshell_problems* wptr;
   
         public:
            Abstract_MSSMNoFV_onshell_problems()
            {
            }
   
            void wrapper__BOSS(MSSMNoFV_onshell_problems* wptr_in)
            {
               wptr = wptr_in;
               is_wrapped(true);
               can_delete_wrapper(true);
            }
   
            MSSMNoFV_onshell_problems* wrapper__BOSS()
            {
               return wptr;
            }
   
            virtual ~Abstract_MSSMNoFV_onshell_problems()
            {
               if (can_delete_wrapper())
               {
                  can_delete_me(false);
                  wrapper_deleter(wptr);
               }
            }
      };
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_MSSMNoFV_onshell_problems_gm2calc_1_0_0_hpp__ */
