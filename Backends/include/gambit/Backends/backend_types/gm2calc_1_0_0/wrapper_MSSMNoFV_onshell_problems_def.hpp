#ifndef __wrapper_MSSMNoFV_onshell_problems_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_problems_def_gm2calc_1_0_0_hpp__

#include <string>
#include <ostream>
#include <vector>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell_problems::clear()
      {
         wrapperbase::BEptr->clear();
      }
      
      inline void MSSMNoFV_onshell_problems::clear_problems()
      {
         wrapperbase::BEptr->clear_problems();
      }
      
      inline void MSSMNoFV_onshell_problems::clear_warnings()
      {
         wrapperbase::BEptr->clear_warnings();
      }
      
      inline void MSSMNoFV_onshell_problems::flag_no_convergence_Mu_MassB_MassWB(double arg_1, unsigned int arg_2)
      {
         wrapperbase::BEptr->flag_no_convergence_Mu_MassB_MassWB(arg_1, arg_2);
      }
      
      inline void MSSMNoFV_onshell_problems::flag_no_convergence_me2(double arg_1, unsigned int arg_2)
      {
         wrapperbase::BEptr->flag_no_convergence_me2(arg_1, arg_2);
      }
      
      inline void MSSMNoFV_onshell_problems::flag_tachyon(const ::std::basic_string<char, std::char_traits<char>, std::allocator<char> >& arg_1)
      {
         wrapperbase::BEptr->flag_tachyon(arg_1);
      }
      
      inline void MSSMNoFV_onshell_problems::unflag_no_convergence_Mu_MassB_MassWB()
      {
         wrapperbase::BEptr->unflag_no_convergence_Mu_MassB_MassWB();
      }
      
      inline void MSSMNoFV_onshell_problems::unflag_no_convergence_me2()
      {
         wrapperbase::BEptr->unflag_no_convergence_me2();
      }
      
      inline bool MSSMNoFV_onshell_problems::have_tachyon() const
      {
         return wrapperbase::BEptr->have_tachyon();
      }
      
      inline bool MSSMNoFV_onshell_problems::have_problem() const
      {
         return wrapperbase::BEptr->have_problem();
      }
      
      inline bool MSSMNoFV_onshell_problems::have_warning() const
      {
         return wrapperbase::BEptr->have_warning();
      }
      
      inline ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > MSSMNoFV_onshell_problems::get_warnings() const
      {
         return wrapperbase::BEptr->get_warnings();
      }
      
      inline ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > MSSMNoFV_onshell_problems::get_problems() const
      {
         return wrapperbase::BEptr->get_problems();
      }
      
      inline void MSSMNoFV_onshell_problems::print(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print(arg_1);
      }
      
      inline void MSSMNoFV_onshell_problems::print_problems(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print_problems(arg_1);
      }
      
      inline void MSSMNoFV_onshell_problems::print_warnings(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print_warnings(arg_1);
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell_problems::MSSMNoFV_onshell_problems() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_problems>(__factory0())
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell_problems::MSSMNoFV_onshell_problems(gm2calc::Abstract_MSSMNoFV_onshell_problems* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_problems>(in)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_problems::MSSMNoFV_onshell_problems(gm2calc::Abstract_MSSMNoFV_onshell_problems* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_problems>(in, true)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell_problems::MSSMNoFV_onshell_problems(const MSSMNoFV_onshell_problems& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_problems>(in)
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell_problems& MSSMNoFV_onshell_problems::operator=(const MSSMNoFV_onshell_problems& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_problems>::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell_problems::~MSSMNoFV_onshell_problems()
      {
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell_problems::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_problems_def_gm2calc_1_0_0_hpp__ */
