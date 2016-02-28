#ifndef __wrapper_MSSMNoFV_onshell_soft_parameters_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_soft_parameters_def_gm2calc_1_0_0_hpp__

#include "wrapper_MSSMNoFV_onshell_susy_parameters_decl.hpp"
#include <Eigen/Core>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell_soft_parameters::print(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print(arg_1);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::clear()
      {
         wrapperbase::BEptr->clear();
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYd(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYd_)
      {
         wrapperbase::BEptr->set_TYd(TYd_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYd(int i, int k, double value)
      {
         wrapperbase::BEptr->set_TYd(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYe(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYe_)
      {
         wrapperbase::BEptr->set_TYe(TYe_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYe(int i, int k, double value)
      {
         wrapperbase::BEptr->set_TYe(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYu(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYu_)
      {
         wrapperbase::BEptr->set_TYu(TYu_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_TYu(int i, int k, double value)
      {
         wrapperbase::BEptr->set_TYu(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_BMu(double BMu_)
      {
         wrapperbase::BEptr->set_BMu(BMu_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mq2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& mq2_)
      {
         wrapperbase::BEptr->set_mq2(mq2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mq2(int i, int k, double value)
      {
         wrapperbase::BEptr->set_mq2(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_ml2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& ml2_)
      {
         wrapperbase::BEptr->set_ml2(ml2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_ml2(int i, int k, double value)
      {
         wrapperbase::BEptr->set_ml2(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mHd2(double mHd2_)
      {
         wrapperbase::BEptr->set_mHd2(mHd2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mHu2(double mHu2_)
      {
         wrapperbase::BEptr->set_mHu2(mHu2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_md2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& md2_)
      {
         wrapperbase::BEptr->set_md2(md2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_md2(int i, int k, double value)
      {
         wrapperbase::BEptr->set_md2(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mu2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& mu2_)
      {
         wrapperbase::BEptr->set_mu2(mu2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_mu2(int i, int k, double value)
      {
         wrapperbase::BEptr->set_mu2(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_me2(const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& me2_)
      {
         wrapperbase::BEptr->set_me2(me2_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_me2(int i, int k, double value)
      {
         wrapperbase::BEptr->set_me2(i, k, value);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_MassB(double MassB_)
      {
         wrapperbase::BEptr->set_MassB(MassB_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_MassWB(double MassWB_)
      {
         wrapperbase::BEptr->set_MassWB(MassWB_);
      }
      
      inline void MSSMNoFV_onshell_soft_parameters::set_MassG(double MassG_)
      {
         wrapperbase::BEptr->set_MassG(MassG_);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_TYd() const
      {
         return wrapperbase::BEptr->get_TYd();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_TYd(int i, int k) const
      {
         return wrapperbase::BEptr->get_TYd(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_TYe() const
      {
         return wrapperbase::BEptr->get_TYe();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_TYe(int i, int k) const
      {
         return wrapperbase::BEptr->get_TYe(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_TYu() const
      {
         return wrapperbase::BEptr->get_TYu();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_TYu(int i, int k) const
      {
         return wrapperbase::BEptr->get_TYu(i, k);
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_BMu() const
      {
         return wrapperbase::BEptr->get_BMu();
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_mq2() const
      {
         return wrapperbase::BEptr->get_mq2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_mq2(int i, int k) const
      {
         return wrapperbase::BEptr->get_mq2(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_ml2() const
      {
         return wrapperbase::BEptr->get_ml2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_ml2(int i, int k) const
      {
         return wrapperbase::BEptr->get_ml2(i, k);
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_mHd2() const
      {
         return wrapperbase::BEptr->get_mHd2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_mHu2() const
      {
         return wrapperbase::BEptr->get_mHu2();
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_md2() const
      {
         return wrapperbase::BEptr->get_md2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_md2(int i, int k) const
      {
         return wrapperbase::BEptr->get_md2(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_mu2() const
      {
         return wrapperbase::BEptr->get_mu2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_mu2(int i, int k) const
      {
         return wrapperbase::BEptr->get_mu2(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& MSSMNoFV_onshell_soft_parameters::get_me2() const
      {
         return wrapperbase::BEptr->get_me2();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_me2(int i, int k) const
      {
         return wrapperbase::BEptr->get_me2(i, k);
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_MassB() const
      {
         return wrapperbase::BEptr->get_MassB();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_MassWB() const
      {
         return wrapperbase::BEptr->get_MassWB();
      }
      
      inline double MSSMNoFV_onshell_soft_parameters::get_MassG() const
      {
         return wrapperbase::BEptr->get_MassG();
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::MSSMNoFV_onshell_soft_parameters() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>(__factory0()),
         MSSMNoFV_onshell_susy_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::MSSMNoFV_onshell_soft_parameters(const gm2calc::MSSMNoFV_onshell_susy_parameters& arg_1, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYd_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYe_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& TYu_, double BMu_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& mq2_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& ml2_, double mHd2_, double mHu2_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& md2_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& mu2_, const ::Eigen::Matrix<double, 3, 3, 0, 3, 3>& me2_, double MassB_, double MassWB_, double MassG_) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>(__factory1(arg_1, TYd_, TYe_, TYu_, BMu_, mq2_, ml2_, mHd2_, mHu2_, md2_, mu2_, me2_, MassB_, MassWB_, MassG_)),
         MSSMNoFV_onshell_susy_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::MSSMNoFV_onshell_soft_parameters(gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>(in),
         MSSMNoFV_onshell_susy_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::MSSMNoFV_onshell_soft_parameters(gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>(in, true),
         MSSMNoFV_onshell_susy_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::MSSMNoFV_onshell_soft_parameters(const MSSMNoFV_onshell_soft_parameters& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>(in),
         MSSMNoFV_onshell_susy_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell_soft_parameters& MSSMNoFV_onshell_soft_parameters::operator=(const MSSMNoFV_onshell_soft_parameters& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>::operator=(in);
         MSSMNoFV_onshell_susy_parameters::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell_soft_parameters::~MSSMNoFV_onshell_soft_parameters()
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_susy_parameters>::skip_delete = true;
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell_soft_parameters::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_soft_parameters_def_gm2calc_1_0_0_hpp__ */
