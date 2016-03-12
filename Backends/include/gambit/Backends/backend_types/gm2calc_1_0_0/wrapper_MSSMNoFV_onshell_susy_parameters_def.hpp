#ifndef __wrapper_MSSMNoFV_onshell_susy_parameters_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_susy_parameters_def_gm2calc_1_0_0_hpp__

#include <Eigen/Core>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell_susy_parameters::print(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print(arg_1);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::clear()
      {
         wrapperbase::BEptr->clear();
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_scale(double s)
      {
         wrapperbase::BEptr->set_scale(s);
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_scale() const
      {
         return wrapperbase::BEptr->get_scale();
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Yd(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Yd_)
      {
         wrapperbase::BEptr->set_Yd(Yd_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Yd(int i, int k, double value)
      {
         wrapperbase::BEptr->set_Yd(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Ye(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Ye_)
      {
         wrapperbase::BEptr->set_Ye(Ye_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Ye(int i, int k, double value)
      {
         wrapperbase::BEptr->set_Ye(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Yu(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Yu_)
      {
         wrapperbase::BEptr->set_Yu(Yu_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Yu(int i, int k, double value)
      {
         wrapperbase::BEptr->set_Yu(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_Mu(double Mu_)
      {
         wrapperbase::BEptr->set_Mu(Mu_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_g1(double g1_)
      {
         wrapperbase::BEptr->set_g1(g1_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_g2(double g2_)
      {
         wrapperbase::BEptr->set_g2(g2_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_g3(double g3_)
      {
         wrapperbase::BEptr->set_g3(g3_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_vd(double vd_)
      {
         wrapperbase::BEptr->set_vd(vd_);
      }
      
      inline void MSSMNoFV_onshell_susy_parameters::set_vu(double vu_)
      {
         wrapperbase::BEptr->set_vu(vu_);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_susy_parameters::get_Yd() const
      {
         return wrapperbase::BEptr->get_Yd();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_Yd(int i, int k) const
      {
         return wrapperbase::BEptr->get_Yd(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_susy_parameters::get_Ye() const
      {
         return wrapperbase::BEptr->get_Ye();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_Ye(int i, int k) const
      {
         return wrapperbase::BEptr->get_Ye(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_susy_parameters::get_Yu() const
      {
         return wrapperbase::BEptr->get_Yu();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_Yu(int i, int k) const
      {
         return wrapperbase::BEptr->get_Yu(i, k);
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_Mu() const
      {
         return wrapperbase::BEptr->get_Mu();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_g1() const
      {
         return wrapperbase::BEptr->get_g1();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_g2() const
      {
         return wrapperbase::BEptr->get_g2();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_g3() const
      {
         return wrapperbase::BEptr->get_g3();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_vd() const
      {
         return wrapperbase::BEptr->get_vd();
      }
      
      inline double MSSMNoFV_onshell_susy_parameters::get_vu() const
      {
         return wrapperbase::BEptr->get_vu();
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::MSSMNoFV_onshell_susy_parameters() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>(__factory0())
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::MSSMNoFV_onshell_susy_parameters(double scale_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Yd_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Ye_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& Yu_, double Mu_, double g1_, double g2_, double g3_, double vd_, double vu_) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>(__factory1(scale_, Yd_, Ye_, Yu_, Mu_, g1_, g2_, g3_, vd_, vu_))
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::MSSMNoFV_onshell_susy_parameters(gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>(in)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::MSSMNoFV_onshell_susy_parameters(gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>(in, true)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::MSSMNoFV_onshell_susy_parameters(const MSSMNoFV_onshell_susy_parameters& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>(in)
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell_susy_parameters& MSSMNoFV_onshell_susy_parameters::operator=(const MSSMNoFV_onshell_susy_parameters& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell_susy_parameters::~MSSMNoFV_onshell_susy_parameters()
      {
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell_susy_parameters::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_susy_parameters_def_gm2calc_1_0_0_hpp__ */
