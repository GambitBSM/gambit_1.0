#ifndef __wrapper_MSSMNoFV_onshell_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_def_gm2calc_1_0_0_hpp__

#include "wrapper_MSSMNoFV_onshell_mass_eigenstates_decl.hpp"
#include <Eigen/Core>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell::set_verbose_output(bool flag)
      {
         wrapperbase::BEptr->set_verbose_output(flag);
      }
      
      inline bool MSSMNoFV_onshell::do_verbose_output() const
      {
         return wrapperbase::BEptr->do_verbose_output();
      }
      
      inline void MSSMNoFV_onshell::set_alpha_MZ(double arg_1)
      {
         wrapperbase::BEptr->set_alpha_MZ(arg_1);
      }
      
      inline void MSSMNoFV_onshell::set_alpha_thompson(double arg_1)
      {
         wrapperbase::BEptr->set_alpha_thompson(arg_1);
      }
      
      inline void MSSMNoFV_onshell::set_Ae(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& A)
      {
         wrapperbase::BEptr->set_Ae(A);
      }
      
      inline void MSSMNoFV_onshell::set_Au(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& A)
      {
         wrapperbase::BEptr->set_Au(A);
      }
      
      inline void MSSMNoFV_onshell::set_Ad(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& A)
      {
         wrapperbase::BEptr->set_Ad(A);
      }
      
      inline void MSSMNoFV_onshell::set_Ae(unsigned int i, unsigned int k, double a)
      {
         wrapperbase::BEptr->set_Ae(i, k, a);
      }
      
      inline void MSSMNoFV_onshell::set_Au(unsigned int i, unsigned int k, double a)
      {
         wrapperbase::BEptr->set_Au(i, k, a);
      }
      
      inline void MSSMNoFV_onshell::set_Ad(unsigned int i, unsigned int k, double a)
      {
         wrapperbase::BEptr->set_Ad(i, k, a);
      }
      
      inline void MSSMNoFV_onshell::set_MA0(double m)
      {
         wrapperbase::BEptr->set_MA0(m);
      }
      
      inline void MSSMNoFV_onshell::set_TB(double arg_1)
      {
         wrapperbase::BEptr->set_TB(arg_1);
      }
      
      inline double MSSMNoFV_onshell::get_EL() const
      {
         return wrapperbase::BEptr->get_EL();
      }
      
      inline double MSSMNoFV_onshell::get_EL0() const
      {
         return wrapperbase::BEptr->get_EL0();
      }
      
      inline double MSSMNoFV_onshell::get_gY() const
      {
         return wrapperbase::BEptr->get_gY();
      }
      
      inline double MSSMNoFV_onshell::get_MUDIM() const
      {
         return wrapperbase::BEptr->get_MUDIM();
      }
      
      inline double MSSMNoFV_onshell::get_TB() const
      {
         return wrapperbase::BEptr->get_TB();
      }
      
      inline double MSSMNoFV_onshell::get_vev() const
      {
         return wrapperbase::BEptr->get_vev();
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell::get_Ae() const
      {
         return wrapperbase::BEptr->get_Ae();
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell::get_Au() const
      {
         return wrapperbase::BEptr->get_Au();
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell::get_Ad() const
      {
         return wrapperbase::BEptr->get_Ad();
      }
      
      inline double MSSMNoFV_onshell::get_Ae(unsigned int i, unsigned int k) const
      {
         return wrapperbase::BEptr->get_Ae(i, k);
      }
      
      inline double MSSMNoFV_onshell::get_Au(unsigned int i, unsigned int k) const
      {
         return wrapperbase::BEptr->get_Au(i, k);
      }
      
      inline double MSSMNoFV_onshell::get_Ad(unsigned int i, unsigned int k) const
      {
         return wrapperbase::BEptr->get_Ad(i, k);
      }
      
      inline double MSSMNoFV_onshell::get_MW() const
      {
         return wrapperbase::BEptr->get_MW();
      }
      
      inline double MSSMNoFV_onshell::get_MZ() const
      {
         return wrapperbase::BEptr->get_MZ();
      }
      
      inline double MSSMNoFV_onshell::get_ME() const
      {
         return wrapperbase::BEptr->get_ME();
      }
      
      inline double MSSMNoFV_onshell::get_MM() const
      {
         return wrapperbase::BEptr->get_MM();
      }
      
      inline double MSSMNoFV_onshell::get_ML() const
      {
         return wrapperbase::BEptr->get_ML();
      }
      
      inline double MSSMNoFV_onshell::get_MU() const
      {
         return wrapperbase::BEptr->get_MU();
      }
      
      inline double MSSMNoFV_onshell::get_MC() const
      {
         return wrapperbase::BEptr->get_MC();
      }
      
      inline double MSSMNoFV_onshell::get_MT() const
      {
         return wrapperbase::BEptr->get_MT();
      }
      
      inline double MSSMNoFV_onshell::get_MD() const
      {
         return wrapperbase::BEptr->get_MD();
      }
      
      inline double MSSMNoFV_onshell::get_MS() const
      {
         return wrapperbase::BEptr->get_MS();
      }
      
      inline double MSSMNoFV_onshell::get_MBMB() const
      {
         return wrapperbase::BEptr->get_MBMB();
      }
      
      inline double MSSMNoFV_onshell::get_MB() const
      {
         return wrapperbase::BEptr->get_MB();
      }
      
      inline double MSSMNoFV_onshell::get_MA0() const
      {
         return wrapperbase::BEptr->get_MA0();
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell::get_MSmu() const
      {
         return wrapperbase::BEptr->get_MSmu();
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell::get_USmu() const
      {
         return wrapperbase::BEptr->get_USmu();
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell::get_UStau() const
      {
         return wrapperbase::BEptr->get_UStau();
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell::get_MSbot() const
      {
         return wrapperbase::BEptr->get_MSbot();
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell::get_USbot() const
      {
         return wrapperbase::BEptr->get_USbot();
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell::get_MStop() const
      {
         return wrapperbase::BEptr->get_MStop();
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell::get_UStop() const
      {
         return wrapperbase::BEptr->get_UStop();
      }
      
      inline void MSSMNoFV_onshell::convert_to_onshell(double precision, unsigned int max_iterations)
      {
         wrapperbase::BEptr->convert_to_onshell(precision, max_iterations);
      }
      
      inline void MSSMNoFV_onshell::convert_to_onshell(double precision)
      {
         wrapperbase::BEptr->convert_to_onshell__BOSS(precision);
      }
      
      inline void MSSMNoFV_onshell::convert_to_onshell()
      {
         wrapperbase::BEptr->convert_to_onshell__BOSS();
      }
      
      inline void MSSMNoFV_onshell::calculate_masses()
      {
         wrapperbase::BEptr->calculate_masses();
      }
      
      inline void MSSMNoFV_onshell::check_problems() const
      {
         wrapperbase::BEptr->check_problems();
      }
      
      inline void MSSMNoFV_onshell::convert_yukawa_couplings_treelevel()
      {
         wrapperbase::BEptr->convert_yukawa_couplings_treelevel();
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell::MSSMNoFV_onshell() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>(__factory0()),
         MSSMNoFV_onshell_mass_eigenstates(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell::MSSMNoFV_onshell(const gm2calc::MSSMNoFV_onshell_mass_eigenstates& arg_1) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>(__factory1(arg_1)),
         MSSMNoFV_onshell_mass_eigenstates(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell::MSSMNoFV_onshell(gm2calc::Abstract_MSSMNoFV_onshell* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>(in),
         MSSMNoFV_onshell_mass_eigenstates(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell::MSSMNoFV_onshell(gm2calc::Abstract_MSSMNoFV_onshell* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>(in, true),
         MSSMNoFV_onshell_mass_eigenstates(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell::MSSMNoFV_onshell(const MSSMNoFV_onshell& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>(in),
         MSSMNoFV_onshell_mass_eigenstates(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell& MSSMNoFV_onshell::operator=(const MSSMNoFV_onshell& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell>::operator=(in);
         MSSMNoFV_onshell_mass_eigenstates::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell::~MSSMNoFV_onshell()
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>::skip_delete = true;
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_def_gm2calc_1_0_0_hpp__ */
