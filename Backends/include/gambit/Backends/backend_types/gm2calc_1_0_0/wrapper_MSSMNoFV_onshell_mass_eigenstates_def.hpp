#ifndef __wrapper_MSSMNoFV_onshell_mass_eigenstates_def_gm2calc_1_0_0_hpp__
#define __wrapper_MSSMNoFV_onshell_mass_eigenstates_def_gm2calc_1_0_0_hpp__

#include "wrapper_MSSMNoFV_onshell_physical_decl.hpp"
#include "wrapper_MSSMNoFV_onshell_problems_decl.hpp"
#include <string>
#include <ostream>
#include <Eigen/Core>
#include <complex>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
   
   namespace gm2calc
   {
      
      // Member functions: 
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_DRbar_masses()
      {
         wrapperbase::BEptr->calculate_DRbar_masses();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::clear()
      {
         wrapperbase::BEptr->clear();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::clear_DRbar_parameters()
      {
         wrapperbase::BEptr->clear_DRbar_parameters();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::copy_DRbar_masses_to_pole_masses()
      {
         wrapperbase::BEptr->copy_DRbar_masses_to_pole_masses();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::do_force_output(bool arg_1)
      {
         wrapperbase::BEptr->do_force_output(arg_1);
      }
      
      inline bool MSSMNoFV_onshell_mass_eigenstates::do_force_output() const
      {
         return wrapperbase::BEptr->do_force_output();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::reorder_DRbar_masses()
      {
         wrapperbase::BEptr->reorder_DRbar_masses();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::reorder_pole_masses()
      {
         wrapperbase::BEptr->reorder_pole_masses();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::set_physical(const WrapperBase< gm2calc::Abstract_MSSMNoFV_onshell_physical >& arg_1)
      {
         wrapperbase::BEptr->set_physical__BOSS(*arg_1.BEptr);
      }
      
      inline const gm2calc::MSSMNoFV_onshell_physical& MSSMNoFV_onshell_mass_eigenstates::get_physical() const
      {
         return wrapperbase::reference_returner< gm2calc::MSSMNoFV_onshell_physical, gm2calc::Abstract_MSSMNoFV_onshell_physical >( const_cast<gm2calc::Abstract_MSSMNoFV_onshell_physical*>(wrapperbase::BEptr->get_physical__BOSS()) );
      }
      
      inline gm2calc::MSSMNoFV_onshell_physical& MSSMNoFV_onshell_mass_eigenstates::get_physical()
      {
         return wrapperbase::reference_returner< gm2calc::MSSMNoFV_onshell_physical, gm2calc::Abstract_MSSMNoFV_onshell_physical >( wrapperbase::BEptr->get_physical__BOSS() );
      }
      
      inline const gm2calc::MSSMNoFV_onshell_problems& MSSMNoFV_onshell_mass_eigenstates::get_problems() const
      {
         return wrapperbase::reference_returner< gm2calc::MSSMNoFV_onshell_problems, gm2calc::Abstract_MSSMNoFV_onshell_problems >( const_cast<gm2calc::Abstract_MSSMNoFV_onshell_problems*>(wrapperbase::BEptr->get_problems__BOSS()) );
      }
      
      inline gm2calc::MSSMNoFV_onshell_problems& MSSMNoFV_onshell_mass_eigenstates::get_problems()
      {
         return wrapperbase::reference_returner< gm2calc::MSSMNoFV_onshell_problems, gm2calc::Abstract_MSSMNoFV_onshell_problems >( wrapperbase::BEptr->get_problems__BOSS() );
      }
      
      inline int MSSMNoFV_onshell_mass_eigenstates::solve_ewsb_tree_level()
      {
         return wrapperbase::BEptr->solve_ewsb_tree_level();
      }
      
      inline int MSSMNoFV_onshell_mass_eigenstates::solve_ewsb()
      {
         return wrapperbase::BEptr->solve_ewsb();
      }
      
      inline ::std::basic_string<char, std::char_traits<char>, std::allocator<char> > MSSMNoFV_onshell_mass_eigenstates::name() const
      {
         return wrapperbase::BEptr->name();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::print(::std::basic_ostream<char, std::char_traits<char> >& arg_1) const
      {
         wrapperbase::BEptr->print(arg_1);
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MVG() const
      {
         return wrapperbase::BEptr->get_MVG();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MGlu() const
      {
         return wrapperbase::BEptr->get_MGlu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MVP() const
      {
         return wrapperbase::BEptr->get_MVP();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MVZ() const
      {
         return wrapperbase::BEptr->get_MVZ();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFd() const
      {
         return wrapperbase::BEptr->get_MFd();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFs() const
      {
         return wrapperbase::BEptr->get_MFs();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFb() const
      {
         return wrapperbase::BEptr->get_MFb();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFu() const
      {
         return wrapperbase::BEptr->get_MFu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFc() const
      {
         return wrapperbase::BEptr->get_MFc();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFt() const
      {
         return wrapperbase::BEptr->get_MFt();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFve() const
      {
         return wrapperbase::BEptr->get_MFve();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFvm() const
      {
         return wrapperbase::BEptr->get_MFvm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFvt() const
      {
         return wrapperbase::BEptr->get_MFvt();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFe() const
      {
         return wrapperbase::BEptr->get_MFe();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFm() const
      {
         return wrapperbase::BEptr->get_MFm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MFtau() const
      {
         return wrapperbase::BEptr->get_MFtau();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSveL() const
      {
         return wrapperbase::BEptr->get_MSveL();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSvmL() const
      {
         return wrapperbase::BEptr->get_MSvmL();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSvtL() const
      {
         return wrapperbase::BEptr->get_MSvtL();
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSd() const
      {
         return wrapperbase::BEptr->get_MSd();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSd(int i) const
      {
         return wrapperbase::BEptr->get_MSd(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSu() const
      {
         return wrapperbase::BEptr->get_MSu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSu(int i) const
      {
         return wrapperbase::BEptr->get_MSu(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSe() const
      {
         return wrapperbase::BEptr->get_MSe();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSe(int i) const
      {
         return wrapperbase::BEptr->get_MSe(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSm() const
      {
         return wrapperbase::BEptr->get_MSm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSm(int i) const
      {
         return wrapperbase::BEptr->get_MSm(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MStau() const
      {
         return wrapperbase::BEptr->get_MStau();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MStau(int i) const
      {
         return wrapperbase::BEptr->get_MStau(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSs() const
      {
         return wrapperbase::BEptr->get_MSs();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSs(int i) const
      {
         return wrapperbase::BEptr->get_MSs(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSc() const
      {
         return wrapperbase::BEptr->get_MSc();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSc(int i) const
      {
         return wrapperbase::BEptr->get_MSc(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSb() const
      {
         return wrapperbase::BEptr->get_MSb();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSb(int i) const
      {
         return wrapperbase::BEptr->get_MSb(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MSt() const
      {
         return wrapperbase::BEptr->get_MSt();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MSt(int i) const
      {
         return wrapperbase::BEptr->get_MSt(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_Mhh() const
      {
         return wrapperbase::BEptr->get_Mhh();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_Mhh(int i) const
      {
         return wrapperbase::BEptr->get_Mhh(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MAh() const
      {
         return wrapperbase::BEptr->get_MAh();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MAh(int i) const
      {
         return wrapperbase::BEptr->get_MAh(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MHpm() const
      {
         return wrapperbase::BEptr->get_MHpm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MHpm(int i) const
      {
         return wrapperbase::BEptr->get_MHpm(i);
      }
      
      inline const ::Eigen::Array<double, 4, 1, 0, 4, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MChi() const
      {
         return wrapperbase::BEptr->get_MChi();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MChi(int i) const
      {
         return wrapperbase::BEptr->get_MChi(i);
      }
      
      inline const ::Eigen::Array<double, 2, 1, 0, 2, 1>& MSSMNoFV_onshell_mass_eigenstates::get_MCha() const
      {
         return wrapperbase::BEptr->get_MCha();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MCha(int i) const
      {
         return wrapperbase::BEptr->get_MCha(i);
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_MVWm() const
      {
         return wrapperbase::BEptr->get_MVWm();
      }
      
      inline ::Eigen::Array<double, 1, 1, 0, 1, 1> MSSMNoFV_onshell_mass_eigenstates::get_MChargedHiggs() const
      {
         return wrapperbase::BEptr->get_MChargedHiggs();
      }
      
      inline ::Eigen::Array<double, 1, 1, 0, 1, 1> MSSMNoFV_onshell_mass_eigenstates::get_MPseudoscalarHiggs() const
      {
         return wrapperbase::BEptr->get_MPseudoscalarHiggs();
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZD() const
      {
         return wrapperbase::BEptr->get_ZD();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZD(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZD(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZU() const
      {
         return wrapperbase::BEptr->get_ZU();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZU(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZU(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZE() const
      {
         return wrapperbase::BEptr->get_ZE();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZE(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZE(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZM() const
      {
         return wrapperbase::BEptr->get_ZM();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZM(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZM(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZTau() const
      {
         return wrapperbase::BEptr->get_ZTau();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZTau(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZTau(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZS() const
      {
         return wrapperbase::BEptr->get_ZS();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZS(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZS(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZC() const
      {
         return wrapperbase::BEptr->get_ZC();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZC(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZC(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZB() const
      {
         return wrapperbase::BEptr->get_ZB();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZB(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZB(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZT() const
      {
         return wrapperbase::BEptr->get_ZT();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZT(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZT(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZH() const
      {
         return wrapperbase::BEptr->get_ZH();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZH(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZH(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZA() const
      {
         return wrapperbase::BEptr->get_ZA();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZA(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZA(i, k);
      }
      
      inline const ::Eigen::Matrix<double, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_ZP() const
      {
         return wrapperbase::BEptr->get_ZP();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ZP(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZP(i, k);
      }
      
      inline const ::Eigen::Matrix<std::complex<double>, 4, 4, 0, 4, 4>& MSSMNoFV_onshell_mass_eigenstates::get_ZN() const
      {
         return wrapperbase::BEptr->get_ZN();
      }
      
      inline const ::std::complex<double>& MSSMNoFV_onshell_mass_eigenstates::get_ZN(int i, int k) const
      {
         return wrapperbase::BEptr->get_ZN(i, k);
      }
      
      inline const ::Eigen::Matrix<std::complex<double>, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_UM() const
      {
         return wrapperbase::BEptr->get_UM();
      }
      
      inline const ::std::complex<double>& MSSMNoFV_onshell_mass_eigenstates::get_UM(int i, int k) const
      {
         return wrapperbase::BEptr->get_UM(i, k);
      }
      
      inline const ::Eigen::Matrix<std::complex<double>, 2, 2, 0, 2, 2>& MSSMNoFV_onshell_mass_eigenstates::get_UP() const
      {
         return wrapperbase::BEptr->get_UP();
      }
      
      inline const ::std::complex<double>& MSSMNoFV_onshell_mass_eigenstates::get_UP(int i, int k) const
      {
         return wrapperbase::BEptr->get_UP(i, k);
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::set_PhaseGlu(::std::complex<double> PhaseGlu_)
      {
         wrapperbase::BEptr->set_PhaseGlu(PhaseGlu_);
      }
      
      inline ::std::complex<double> MSSMNoFV_onshell_mass_eigenstates::get_PhaseGlu() const
      {
         return wrapperbase::BEptr->get_PhaseGlu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_VG() const
      {
         return wrapperbase::BEptr->get_mass_matrix_VG();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MVG()
      {
         wrapperbase::BEptr->calculate_MVG();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Glu() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Glu();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MGlu()
      {
         wrapperbase::BEptr->calculate_MGlu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_VP() const
      {
         return wrapperbase::BEptr->get_mass_matrix_VP();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MVP()
      {
         wrapperbase::BEptr->calculate_MVP();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_VZ() const
      {
         return wrapperbase::BEptr->get_mass_matrix_VZ();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MVZ()
      {
         wrapperbase::BEptr->calculate_MVZ();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fd() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fd();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFd()
      {
         wrapperbase::BEptr->calculate_MFd();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fs() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fs();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFs()
      {
         wrapperbase::BEptr->calculate_MFs();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fb() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fb();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFb()
      {
         wrapperbase::BEptr->calculate_MFb();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fu() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fu();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFu()
      {
         wrapperbase::BEptr->calculate_MFu();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fc() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fc();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFc()
      {
         wrapperbase::BEptr->calculate_MFc();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Ft() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Ft();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFt()
      {
         wrapperbase::BEptr->calculate_MFt();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fve() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fve();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFve()
      {
         wrapperbase::BEptr->calculate_MFve();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fvm() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fvm();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFvm()
      {
         wrapperbase::BEptr->calculate_MFvm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fvt() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fvt();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFvt()
      {
         wrapperbase::BEptr->calculate_MFvt();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fe() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fe();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFe()
      {
         wrapperbase::BEptr->calculate_MFe();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Fm() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Fm();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFm()
      {
         wrapperbase::BEptr->calculate_MFm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Ftau() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Ftau();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MFtau()
      {
         wrapperbase::BEptr->calculate_MFtau();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_SveL() const
      {
         return wrapperbase::BEptr->get_mass_matrix_SveL();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSveL()
      {
         wrapperbase::BEptr->calculate_MSveL();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_SvmL() const
      {
         return wrapperbase::BEptr->get_mass_matrix_SvmL();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSvmL()
      {
         wrapperbase::BEptr->calculate_MSvmL();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_SvtL() const
      {
         return wrapperbase::BEptr->get_mass_matrix_SvtL();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSvtL()
      {
         wrapperbase::BEptr->calculate_MSvtL();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Sd() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Sd();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSd()
      {
         wrapperbase::BEptr->calculate_MSd();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Su() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Su();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSu()
      {
         wrapperbase::BEptr->calculate_MSu();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Se() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Se();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSe()
      {
         wrapperbase::BEptr->calculate_MSe();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Sm() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Sm();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSm()
      {
         wrapperbase::BEptr->calculate_MSm();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Stau() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Stau();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MStau()
      {
         wrapperbase::BEptr->calculate_MStau();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Ss() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Ss();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSs()
      {
         wrapperbase::BEptr->calculate_MSs();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Sc() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Sc();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSc()
      {
         wrapperbase::BEptr->calculate_MSc();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Sb() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Sb();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSb()
      {
         wrapperbase::BEptr->calculate_MSb();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_St() const
      {
         return wrapperbase::BEptr->get_mass_matrix_St();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MSt()
      {
         wrapperbase::BEptr->calculate_MSt();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_hh() const
      {
         return wrapperbase::BEptr->get_mass_matrix_hh();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_Mhh()
      {
         wrapperbase::BEptr->calculate_Mhh();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Ah() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Ah();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MAh()
      {
         wrapperbase::BEptr->calculate_MAh();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Hpm() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Hpm();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MHpm()
      {
         wrapperbase::BEptr->calculate_MHpm();
      }
      
      inline ::Eigen::Matrix<double, 4, 4, 0, 4, 4> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Chi() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Chi();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MChi()
      {
         wrapperbase::BEptr->calculate_MChi();
      }
      
      inline ::Eigen::Matrix<double, 2, 2, 0, 2, 2> MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_Cha() const
      {
         return wrapperbase::BEptr->get_mass_matrix_Cha();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MCha()
      {
         wrapperbase::BEptr->calculate_MCha();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_mass_matrix_VWm() const
      {
         return wrapperbase::BEptr->get_mass_matrix_VWm();
      }
      
      inline void MSSMNoFV_onshell_mass_eigenstates::calculate_MVWm()
      {
         wrapperbase::BEptr->calculate_MVWm();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ewsb_eq_hh_1() const
      {
         return wrapperbase::BEptr->get_ewsb_eq_hh_1();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::get_ewsb_eq_hh_2() const
      {
         return wrapperbase::BEptr->get_ewsb_eq_hh_2();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::ThetaW() const
      {
         return wrapperbase::BEptr->ThetaW();
      }
      
      inline double MSSMNoFV_onshell_mass_eigenstates::v() const
      {
         return wrapperbase::BEptr->v();
      }
      
      
      // Wrappers for original constructors: 
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates::MSSMNoFV_onshell_mass_eigenstates() :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>(__factory0()),
         MSSMNoFV_onshell_soft_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Special pointer-based constructor: 
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates::MSSMNoFV_onshell_mass_eigenstates(gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates* in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>(in),
         MSSMNoFV_onshell_soft_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates::MSSMNoFV_onshell_mass_eigenstates(gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates* const & in, bool) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>(in, true),
         MSSMNoFV_onshell_soft_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Copy constructor: 
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates::MSSMNoFV_onshell_mass_eigenstates(const MSSMNoFV_onshell_mass_eigenstates& in) :
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>(in),
         MSSMNoFV_onshell_soft_parameters(wrapperbase::BEptr)
      {
         wrapperbase::BEptr->can_delete_me(true);
         wrapperbase::BEptr->wrapper__BOSS(this);
         wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
      }
      
      // Assignment operator: 
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates& MSSMNoFV_onshell_mass_eigenstates::operator=(const MSSMNoFV_onshell_mass_eigenstates& in)
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_mass_eigenstates>::operator=(in);
         MSSMNoFV_onshell_soft_parameters::operator=(in);
         return *this;
      }
      
      
      // Destructor: 
      inline gm2calc::MSSMNoFV_onshell_mass_eigenstates::~MSSMNoFV_onshell_mass_eigenstates()
      {
         WrapperBase<gm2calc::Abstract_MSSMNoFV_onshell_soft_parameters>::skip_delete = true;
      }
      
      
      // Member variable initialiser: 
      inline void gm2calc::MSSMNoFV_onshell_mass_eigenstates::_memberVariablesInit()
      {
      }
      
   }
   
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_MSSMNoFV_onshell_mass_eigenstates_def_gm2calc_1_0_0_hpp__ */
