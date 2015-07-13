// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

// File generated at Mon 1 Jun 2015 13:00:15

/**
 * @file CMSSMNoFV_mass_eigenstates.hpp
 * @brief contains class for model with routines needed to solve boundary
 *        value problem using the two_scale solver by solvingt EWSB
 *        and determine the pole masses and mixings
 *
 * This file was generated at Mon 1 Jun 2015 13:00:15 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#ifndef CMSSMNoFV_IMODEL_H
#define CMSSMNoFV_IMODEL_H

#include "CMSSMNoFV_two_scale_soft_parameters.hpp"
#include "CMSSMNoFV_physical.hpp"
#include "CMSSMNoFV_info.hpp"
#include "two_loop_corrections.hpp"
#include "problems.hpp"
#include "config.h"

#include <iosfwd>
#include <string>

#ifdef ENABLE_THREADS
#include <mutex>
#endif

#include <gsl/gsl_vector.h>
#include <Eigen/Core>

namespace flexiblesusy {

class EWSB_solver;
/**
 * @class CMSSMNoFV_mass_eigenstates
 * @brief model class with routines for determing masses and mixinga and EWSB
 */
class CMSSMNoFV_mass_eigenstates : public CMSSMNoFV_soft_parameters {
public:
   explicit CMSSMNoFV_mass_eigenstates(const CMSSMNoFV_input_parameters& input_ = CMSSMNoFV_input_parameters());
   virtual ~CMSSMNoFV_mass_eigenstates();

   /// number of EWSB equations
   static const std::size_t number_of_ewsb_equations = 2;

   void calculate_DRbar_masses();
   void calculate_DRbar_parameters();
   void calculate_pole_masses();
   virtual void clear();
   void clear_DRbar_parameters();
   void do_calculate_sm_pole_masses(bool);
   bool do_calculate_sm_pole_masses() const;
   void do_force_output(bool);
   bool do_force_output() const;
   void reorder_DRbar_masses();
   void reorder_pole_masses();
   void set_ewsb_iteration_precision(double);
   void set_ewsb_loop_order(unsigned);
   void set_two_loop_corrections(const Two_loop_corrections&);
   void set_number_of_ewsb_iterations(std::size_t);
   void set_number_of_mass_iterations(std::size_t);
   void set_pole_mass_loop_order(unsigned);
   void set_physical(const CMSSMNoFV_physical&);
   double get_ewsb_iteration_precision() const;
   double get_ewsb_loop_order() const;
   const CMSSMNoFV_physical& get_physical() const;
   CMSSMNoFV_physical& get_physical();
   const Problems<CMSSMNoFV_info::NUMBER_OF_PARTICLES>& get_problems() const;
   Problems<CMSSMNoFV_info::NUMBER_OF_PARTICLES>& get_problems();
   int solve_ewsb_tree_level();
   int solve_ewsb_one_loop();
   int solve_ewsb();            ///< solve EWSB at ewsb_loop_order level

   void calculate_spectrum();
   void clear_problems();
   std::string name() const;
   void run_to(double scale, double eps = -1.0);
   void print(std::ostream&) const;
   void set_precision(double);

   double get_lsp(CMSSMNoFV_info::Particles&) const;

   double get_MVG() const { return MVG; }
   double get_MGlu() const { return MGlu; }
   double get_MVP() const { return MVP; }
   double get_MVZ() const { return MVZ; }
   double get_MFd() const { return MFd; }
   double get_MFs() const { return MFs; }
   double get_MFb() const { return MFb; }
   double get_MFu() const { return MFu; }
   double get_MFc() const { return MFc; }
   double get_MFt() const { return MFt; }
   double get_MFve() const { return MFve; }
   double get_MFvm() const { return MFvm; }
   double get_MFvt() const { return MFvt; }
   double get_MFe() const { return MFe; }
   double get_MFm() const { return MFm; }
   double get_MFtau() const { return MFtau; }
   double get_MSveL() const { return MSveL; }
   double get_MSvmL() const { return MSvmL; }
   double get_MSvtL() const { return MSvtL; }
   const Eigen::Array<double,2,1>& get_MSd() const { return MSd; }
   double get_MSd(int i) const { return MSd(i); }
   const Eigen::Array<double,2,1>& get_MSu() const { return MSu; }
   double get_MSu(int i) const { return MSu(i); }
   const Eigen::Array<double,2,1>& get_MSe() const { return MSe; }
   double get_MSe(int i) const { return MSe(i); }
   const Eigen::Array<double,2,1>& get_MSm() const { return MSm; }
   double get_MSm(int i) const { return MSm(i); }
   const Eigen::Array<double,2,1>& get_MStau() const { return MStau; }
   double get_MStau(int i) const { return MStau(i); }
   const Eigen::Array<double,2,1>& get_MSs() const { return MSs; }
   double get_MSs(int i) const { return MSs(i); }
   const Eigen::Array<double,2,1>& get_MSc() const { return MSc; }
   double get_MSc(int i) const { return MSc(i); }
   const Eigen::Array<double,2,1>& get_MSb() const { return MSb; }
   double get_MSb(int i) const { return MSb(i); }
   const Eigen::Array<double,2,1>& get_MSt() const { return MSt; }
   double get_MSt(int i) const { return MSt(i); }
   const Eigen::Array<double,2,1>& get_Mhh() const { return Mhh; }
   double get_Mhh(int i) const { return Mhh(i); }
   const Eigen::Array<double,2,1>& get_MAh() const { return MAh; }
   double get_MAh(int i) const { return MAh(i); }
   const Eigen::Array<double,2,1>& get_MHpm() const { return MHpm; }
   double get_MHpm(int i) const { return MHpm(i); }
   const Eigen::Array<double,4,1>& get_MChi() const { return MChi; }
   double get_MChi(int i) const { return MChi(i); }
   const Eigen::Array<double,2,1>& get_MCha() const { return MCha; }
   double get_MCha(int i) const { return MCha(i); }
   double get_MVWm() const { return MVWm; }

   
   Eigen::Array<double,1,1> get_MChargedHiggs() const;

   Eigen::Array<double,1,1> get_MPseudoscalarHiggs() const;

   const Eigen::Matrix<double,2,2>& get_ZD() const { return ZD; }
   double get_ZD(int i, int k) const { return ZD(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZU() const { return ZU; }
   double get_ZU(int i, int k) const { return ZU(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZE() const { return ZE; }
   double get_ZE(int i, int k) const { return ZE(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZM() const { return ZM; }
   double get_ZM(int i, int k) const { return ZM(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZTau() const { return ZTau; }
   double get_ZTau(int i, int k) const { return ZTau(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZS() const { return ZS; }
   double get_ZS(int i, int k) const { return ZS(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZC() const { return ZC; }
   double get_ZC(int i, int k) const { return ZC(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZB() const { return ZB; }
   double get_ZB(int i, int k) const { return ZB(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZT() const { return ZT; }
   double get_ZT(int i, int k) const { return ZT(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZH() const { return ZH; }
   double get_ZH(int i, int k) const { return ZH(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZA() const { return ZA; }
   double get_ZA(int i, int k) const { return ZA(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZP() const { return ZP; }
   double get_ZP(int i, int k) const { return ZP(i,k); }
   const Eigen::Matrix<std::complex<double>,4,4>& get_ZN() const { return ZN; }
   const std::complex<double>& get_ZN(int i, int k) const { return ZN(i,k); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UM() const { return UM; }
   const std::complex<double>& get_UM(int i, int k) const { return UM(i,k); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UP() const { return UP; }
   const std::complex<double>& get_UP(int i, int k) const { return UP(i,k); }

   void set_PhaseGlu(std::complex<double> PhaseGlu_) { PhaseGlu = PhaseGlu_; }
   std::complex<double> get_PhaseGlu() const { return PhaseGlu; }

   double get_mass_matrix_VG() const;
   void calculate_MVG();
   double get_mass_matrix_Glu() const;
   void calculate_MGlu();
   double get_mass_matrix_VP() const;
   void calculate_MVP();
   double get_mass_matrix_VZ() const;
   void calculate_MVZ();
   double get_mass_matrix_Fd() const;
   void calculate_MFd();
   double get_mass_matrix_Fs() const;
   void calculate_MFs();
   double get_mass_matrix_Fb() const;
   void calculate_MFb();
   double get_mass_matrix_Fu() const;
   void calculate_MFu();
   double get_mass_matrix_Fc() const;
   void calculate_MFc();
   double get_mass_matrix_Ft() const;
   void calculate_MFt();
   double get_mass_matrix_Fve() const;
   void calculate_MFve();
   double get_mass_matrix_Fvm() const;
   void calculate_MFvm();
   double get_mass_matrix_Fvt() const;
   void calculate_MFvt();
   double get_mass_matrix_Fe() const;
   void calculate_MFe();
   double get_mass_matrix_Fm() const;
   void calculate_MFm();
   double get_mass_matrix_Ftau() const;
   void calculate_MFtau();
   double get_mass_matrix_SveL() const;
   void calculate_MSveL();
   double get_mass_matrix_SvmL() const;
   void calculate_MSvmL();
   double get_mass_matrix_SvtL() const;
   void calculate_MSvtL();
   Eigen::Matrix<double,2,2> get_mass_matrix_Sd() const;
   void calculate_MSd();
   Eigen::Matrix<double,2,2> get_mass_matrix_Su() const;
   void calculate_MSu();
   Eigen::Matrix<double,2,2> get_mass_matrix_Se() const;
   void calculate_MSe();
   Eigen::Matrix<double,2,2> get_mass_matrix_Sm() const;
   void calculate_MSm();
   Eigen::Matrix<double,2,2> get_mass_matrix_Stau() const;
   void calculate_MStau();
   Eigen::Matrix<double,2,2> get_mass_matrix_Ss() const;
   void calculate_MSs();
   Eigen::Matrix<double,2,2> get_mass_matrix_Sc() const;
   void calculate_MSc();
   Eigen::Matrix<double,2,2> get_mass_matrix_Sb() const;
   void calculate_MSb();
   Eigen::Matrix<double,2,2> get_mass_matrix_St() const;
   void calculate_MSt();
   Eigen::Matrix<double,2,2> get_mass_matrix_hh() const;
   void calculate_Mhh();
   Eigen::Matrix<double,2,2> get_mass_matrix_Ah() const;
   void calculate_MAh();
   Eigen::Matrix<double,2,2> get_mass_matrix_Hpm() const;
   void calculate_MHpm();
   Eigen::Matrix<double,4,4> get_mass_matrix_Chi() const;
   void calculate_MChi();
   Eigen::Matrix<double,2,2> get_mass_matrix_Cha() const;
   void calculate_MCha();
   double get_mass_matrix_VWm() const;
   void calculate_MVWm();

   double get_ewsb_eq_hh_1() const;
   double get_ewsb_eq_hh_2() const;

   std::complex<double> CpUSdconjUSdVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSdconjUSdconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSdconjUSdconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSdconjUSdconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSdconjUSdconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSdconjUSdAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSdAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSdhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSuHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdVGSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVPSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVZSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVWmSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdFuChaPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdFuChaPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdFdChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdFdChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdGluFdPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUSdGluFdPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUSuconjUSuVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSuconjUSuconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSuconjUSuconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSuconjUSuconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSuconjUSuconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSuconjUSuAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuconjHpmSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuSuAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuSuhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSubarChaFdPR(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUSubarChaFdPL(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUSuconjVWmSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVGSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVPSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVZSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuFuChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSuFuChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSuGluFuPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUSuGluFuPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUSeconjUSeVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSeconjUSeconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSeconjUSeconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSeconjUSeconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSeconjUSeconjVWmVWm(unsigned gO1, unsigned gO2) const;
   double CpconjUSeVWmSveL(unsigned gO2) const;
   std::complex<double> CpUSeconjUSeAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSehhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSeAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSehh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSveLHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSeVPSe(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSeVZSe(unsigned gO2, unsigned gI2) const;
   double CpconjUSeFveChaPR(unsigned , unsigned ) const;
   std::complex<double> CpconjUSeFveChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpconjUSeFeChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSeFeChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSmconjUSmconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSmconjUSmconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSmconjUSmconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSmconjUSmconjVWmVWm(unsigned gO1, unsigned gO2) const;
   double CpconjUSmVWmSvmL(unsigned gO2) const;
   std::complex<double> CpUSmconjUSmAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSmconjUSmhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSmSmAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSmSmhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSmSvmLHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSmVPSm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSmVZSm(unsigned gO2, unsigned gI2) const;
   double CpconjUSmFvmChaPR(unsigned , unsigned ) const;
   std::complex<double> CpconjUSmFvmChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpconjUSmFmChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSmFmChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStauconjUStauconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStauconjUStauconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStauconjUStauconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUStauconjUStauconjVWmVWm(unsigned gO1, unsigned gO2) const;
   double CpconjUStauVWmSvtL(unsigned gO2) const;
   std::complex<double> CpUStauconjUStauAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStauconjUStauhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStauStauAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStauStauhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStauSvtLHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStauVPStau(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStauVZStau(unsigned gO2, unsigned gI2) const;
   double CpconjUStauFvtChaPR(unsigned , unsigned ) const;
   std::complex<double> CpconjUStauFvtChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpconjUStauFtauChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStauFtauChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSsconjUSsconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSsconjUSsconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSsconjUSsconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSsconjUSsconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSsconjUSsAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSsconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSsconjUSshhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSsScHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSsSsAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSsSshh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSsVWmSc(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSsVGSs(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSsVPSs(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSsVZSs(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSsFcChaPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSsFcChaPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSsFsChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSsFsChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSsGluFsPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUSsGluFsPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUScconjUScVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUScconjUScconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUScconjUScconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUScconjUScconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUScconjUScconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUScconjUScAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUScconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUScconjUSchhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUScconjHpmSs(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUScScAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUScSchh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUScbarChaFsPR(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUScbarChaFsPL(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUScVGSc(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUScVPSc(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUScVZSc(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUScconjVWmSs(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUScFcChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUScFcChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUScGluFcPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUScGluFcPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUSbconjUSbVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSbconjUSbconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSbconjUSbconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSbconjUSbconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUSbconjUSbconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSbconjUSbAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSbconjUSbhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSbSbAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSbSbhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSbStHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSbVGSb(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSbVPSb(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSbVZSb(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSbVWmSt(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSbFtChaPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSbFtChaPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSbFbChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSbFbChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSbGluFbPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUSbGluFbPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUStconjUStVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStconjUStconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStconjUStconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStconjUStconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   double CpUStconjUStconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUStconjUStAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUStconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUStconjUSthhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStconjHpmSb(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStStAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStSthh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUStbarChaFbPR(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUStbarChaFbPL(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpconjUStconjVWmSb(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStVGSt(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStVPSt(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStVZSt(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUStFtChiPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUStFtChiPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUStGluFtPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpconjUStGluFtPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUhhVZVZ(unsigned gO2) const;
   std::complex<double> CpUhhconjSveLSveL(unsigned gO2) const;
   std::complex<double> CpUhhconjSvmLSvmL(unsigned gO2) const;
   std::complex<double> CpUhhconjSvtLSvtL(unsigned gO2) const;
   std::complex<double> CpUhhconjVWmVWm(unsigned gO2) const;
   std::complex<double> CpUhhbargWmgWm(unsigned gO1) const;
   std::complex<double> CpUhhbargWmCgWmC(unsigned gO1) const;
   std::complex<double> CpUhhbargZgZ(unsigned gO1) const;
   std::complex<double> CpUhhUhhVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhAhAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSbSb(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjScSc(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSmSm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSsSs(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjStSt(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjStauStau(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhhhhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhVZAh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUhhconjVWmHpm(unsigned gO2, unsigned gI2) const;
   double CpUhhbarFeFePR(unsigned gO2) const;
   double CpUhhbarFeFePL(unsigned gO1) const;
   double CpUhhbarFmFmPR(unsigned gO2) const;
   double CpUhhbarFmFmPL(unsigned gO1) const;
   double CpUhhbarFtauFtauPR(unsigned gO2) const;
   double CpUhhbarFtauFtauPL(unsigned gO1) const;
   double CpUhhbarFbFbPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFbFbPL(unsigned gO1, unsigned , unsigned ) const;
   double CpUhhbarFcFcPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFcFcPL(unsigned gO1, unsigned , unsigned ) const;
   double CpUhhbarFdFdPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFdFdPL(unsigned gO1, unsigned , unsigned ) const;
   double CpUhhbarFsFsPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFsFsPL(unsigned gO1, unsigned , unsigned ) const;
   double CpUhhbarFtFtPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFtFtPL(unsigned gO1, unsigned , unsigned ) const;
   double CpUhhbarFuFuPR(unsigned gO2, unsigned , unsigned ) const;
   double CpUhhbarFuFuPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbargWmgWm(unsigned gO1) const;
   std::complex<double> CpUAhbargWmCgWmC(unsigned gO1) const;
   std::complex<double> CpUAhUAhVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSbSb(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjScSc(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSmSm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSsSs(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjStSt(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjStauStau(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhhhAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhVZhh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUAhconjVWmHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUAhbarFeFePR(unsigned gO2) const;
   std::complex<double> CpUAhbarFeFePL(unsigned gO1) const;
   std::complex<double> CpUAhbarFmFmPR(unsigned gO2) const;
   std::complex<double> CpUAhbarFmFmPL(unsigned gO1) const;
   std::complex<double> CpUAhbarFtauFtauPR(unsigned gO2) const;
   std::complex<double> CpUAhbarFtauFtauPL(unsigned gO1) const;
   std::complex<double> CpUAhbarFbFbPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFbFbPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFcFcPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFcFcPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFdFdPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFdFdPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFsFsPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFsFsPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFtFtPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFtFtPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFuFuPR(unsigned gO2, unsigned , unsigned ) const;
   std::complex<double> CpUAhbarFuFuPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpconjUHpmVWmVP(unsigned gO2) const;
   std::complex<double> CpconjUHpmVZVWm(unsigned gO2) const;
   std::complex<double> CpconjUHpmbargWmCgZ(unsigned gO1) const;
   std::complex<double> CpUHpmgWmCbargZ(unsigned gO2) const;
   std::complex<double> CpconjUHpmbargZgWm(unsigned gO1) const;
   std::complex<double> CpUHpmgZbargWm(unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmconjSveLSveL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmconjSvmLSvmL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmconjSvtLSvtL(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjScSs(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjStSb(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjSuSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmHpmAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmHpmhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmChiChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmChiChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjSveLSe(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjSvmLSm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjSvtLStau(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVWmAh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVWmhh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVPHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVZHpm(unsigned gO2, unsigned gI2) const;
   double CpconjUHpmbarFveFePR(unsigned gO2) const;
   double CpconjUHpmbarFveFePL(unsigned ) const;
   double CpconjUHpmbarFvmFmPR(unsigned gO2) const;
   double CpconjUHpmbarFvmFmPL(unsigned ) const;
   double CpconjUHpmbarFvtFtauPR(unsigned gO2) const;
   double CpconjUHpmbarFvtFtauPL(unsigned ) const;
   double CpconjUHpmbarFcFsPR(unsigned gO2, unsigned , unsigned ) const;
   double CpconjUHpmbarFcFsPL(unsigned gO1, unsigned , unsigned ) const;
   double CpconjUHpmbarFtFbPR(unsigned gO2, unsigned , unsigned ) const;
   double CpconjUHpmbarFtFbPL(unsigned gO1, unsigned , unsigned ) const;
   double CpconjUHpmbarFuFdPR(unsigned gO2, unsigned , unsigned ) const;
   double CpconjUHpmbarFuFdPL(unsigned gO1, unsigned , unsigned ) const;
   std::complex<double> CpSveLconjSveLVZVZ() const;
   double CpSveLconjSveLconjSveLSveL() const;
   double CpSveLconjSveLconjSvmLSvmL() const;
   double CpSveLconjSveLconjSvtLSvtL() const;
   double CpSveLconjSveLconjVWmVWm() const;
   double CpconjSveLVZSveL() const;
   std::complex<double> CpSveLconjSveLAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSveLconjSveLhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSveLconjHpmSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSveLbarChaFePR(unsigned gI1) const;
   std::complex<double> CpconjSveLbarChaFePL(unsigned gI1) const;
   std::complex<double> CpconjSveLSveLhh(unsigned gI2) const;
   std::complex<double> CpconjSveLconjVWmSe(unsigned gI2) const;
   double CpconjSveLFveChiPR(unsigned ) const;
   std::complex<double> CpconjSveLFveChiPL(unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLVZVZ() const;
   double CpSvmLconjSvmLconjSveLSveL() const;
   double CpSvmLconjSvmLconjSvmLSvmL() const;
   double CpSvmLconjSvmLconjSvtLSvtL() const;
   double CpSvmLconjSvmLconjVWmVWm() const;
   double CpconjSvmLVZSvmL() const;
   std::complex<double> CpSvmLconjSvmLAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvmLconjSvmLhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSvmLconjHpmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSvmLbarChaFmPR(unsigned gI1) const;
   std::complex<double> CpconjSvmLbarChaFmPL(unsigned gI1) const;
   std::complex<double> CpconjSvmLSvmLhh(unsigned gI2) const;
   std::complex<double> CpconjSvmLconjVWmSm(unsigned gI2) const;
   double CpconjSvmLFvmChiPR(unsigned ) const;
   std::complex<double> CpconjSvmLFvmChiPL(unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLVZVZ() const;
   double CpSvtLconjSvtLconjSveLSveL() const;
   double CpSvtLconjSvtLconjSvmLSvmL() const;
   double CpSvtLconjSvtLconjSvtLSvtL() const;
   double CpSvtLconjSvtLconjVWmVWm() const;
   double CpconjSvtLVZSvtL() const;
   std::complex<double> CpSvtLconjSvtLAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpSvtLconjSvtLhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSvtLconjHpmStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjSvtLbarChaFtauPR(unsigned gI1) const;
   std::complex<double> CpconjSvtLbarChaFtauPL(unsigned gI1) const;
   std::complex<double> CpconjSvtLSvtLhh(unsigned gI2) const;
   std::complex<double> CpconjSvtLconjVWmStau(unsigned gI2) const;
   double CpconjSvtLFvtChiPR(unsigned ) const;
   std::complex<double> CpconjSvtLFvtChiPL(unsigned gI2) const;
   double CpVZbargWmgWm() const;
   double CpVZbargWmCgWmC() const;
   double CpVZconjSveLSveL() const;
   double CpVZconjSvmLSvmL() const;
   double CpVZconjSvtLSvtL() const;
   std::complex<double> CpVZVZconjSveLSveL() const;
   std::complex<double> CpVZVZconjSvmLSvmL() const;
   std::complex<double> CpVZVZconjSvtLSvtL() const;
   double CpVZconjVWmVWm() const;
   double CpVZbarFeFePL() const;
   double CpVZbarFeFePR() const;
   double CpVZbarFmFmPL() const;
   double CpVZbarFmFmPR() const;
   double CpVZbarFtauFtauPL() const;
   double CpVZbarFtauFtauPR() const;
   double CpVZbarFveFvePL() const;
   double CpVZbarFveFvePR() const;
   double CpVZbarFvmFvmPL() const;
   double CpVZbarFvmFvmPR() const;
   double CpVZbarFvtFvtPL() const;
   double CpVZbarFvtFvtPR() const;
   std::complex<double> CpVZVZAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZhhhh(unsigned gI1, unsigned gI2) const;
   double CpVZconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZhhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZbarChaChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZbarChaChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZChiChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZChiChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZhh(unsigned gI2) const;
   std::complex<double> CpVZconjVWmHpm(unsigned gI2) const;
   double CpVZbarFbFbPL(unsigned , unsigned ) const;
   double CpVZbarFbFbPR(unsigned , unsigned ) const;
   double CpVZbarFcFcPL(unsigned , unsigned ) const;
   double CpVZbarFcFcPR(unsigned , unsigned ) const;
   double CpVZbarFdFdPL(unsigned , unsigned ) const;
   double CpVZbarFdFdPR(unsigned , unsigned ) const;
   double CpVZbarFsFsPL(unsigned , unsigned ) const;
   double CpVZbarFsFsPR(unsigned , unsigned ) const;
   double CpVZbarFtFtPL(unsigned , unsigned ) const;
   double CpVZbarFtFtPR(unsigned , unsigned ) const;
   double CpVZbarFuFuPL(unsigned , unsigned ) const;
   double CpVZbarFuFuPR(unsigned , unsigned ) const;
   double CpVZVZconjVWmVWm1() const;
   double CpVZVZconjVWmVWm2() const;
   double CpVZVZconjVWmVWm3() const;
   double CpconjVWmbargPgWm() const;
   double CpconjVWmbargWmCgP() const;
   double CpconjVWmbargWmCgZ() const;
   double CpconjVWmbargZgWm() const;
   double CpVWmconjVWmconjSveLSveL() const;
   double CpVWmconjVWmconjSvmLSvmL() const;
   double CpVWmconjVWmconjSvtLSvtL() const;
   double CpconjVWmVWmVP() const;
   double CpconjVWmVZVWm() const;
   double CpconjVWmbarFveFePL() const;
   double CpconjVWmbarFveFePR() const;
   double CpconjVWmbarFvmFmPL() const;
   double CpconjVWmbarFvmFmPR() const;
   double CpconjVWmbarFvtFtauPL() const;
   double CpconjVWmbarFvtFtauPR() const;
   std::complex<double> CpVWmconjVWmAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSbSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjScSc(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSmSm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSsSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjStSt(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjStauStau(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmconjScSs(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmconjStSb(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmconjSuSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmHpmAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmHpmhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmChiChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmChiChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmVPHpm(unsigned gI2) const;
   std::complex<double> CpconjVWmVWmhh(unsigned gI2) const;
   std::complex<double> CpconjVWmVZHpm(unsigned gI2) const;
   std::complex<double> CpconjVWmconjSveLSe(unsigned gI2) const;
   std::complex<double> CpconjVWmconjSvmLSm(unsigned gI2) const;
   std::complex<double> CpconjVWmconjSvtLStau(unsigned gI2) const;
   double CpconjVWmbarFcFsPL(unsigned , unsigned ) const;
   double CpconjVWmbarFcFsPR(unsigned , unsigned ) const;
   double CpconjVWmbarFtFbPL(unsigned , unsigned ) const;
   double CpconjVWmbarFtFbPR(unsigned , unsigned ) const;
   double CpconjVWmbarFuFdPL(unsigned , unsigned ) const;
   double CpconjVWmbarFuFdPR(unsigned , unsigned ) const;
   double CpVWmconjVWmVPVP1() const;
   double CpVWmconjVWmVPVP2() const;
   double CpVWmconjVWmVPVP3() const;
   double CpVWmconjVWmVZVZ1() const;
   double CpVWmconjVWmVZVZ2() const;
   double CpVWmconjVWmVZVZ3() const;
   double CpVWmconjVWmconjVWmVWm1() const;
   double CpVWmconjVWmconjVWmVWm2() const;
   double CpVWmconjVWmconjVWmVWm3() const;
   std::complex<double> CpUChiconjHpmChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjHpmChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChihhChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChihhChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSbFbPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSbFbPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjScFcPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjScFcPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSdFdPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSdFdPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSeFePL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpUChiconjSeFePR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpUChiconjSmFmPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpUChiconjSmFmPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpUChiconjSsFsPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSsFsPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjStFtPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjStFtPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjStauFtauPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpUChiconjStauFtauPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpUChiconjSuFuPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiconjSuFuPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpUChiChiAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiChiAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjVWmChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUChiconjVWmChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUChiVZChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUChiVZChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUChiconjSveLFvePL(unsigned gO2) const;
   double CpUChiconjSveLFvePR(unsigned ) const;
   std::complex<double> CpUChiconjSvmLFvmPL(unsigned gO2) const;
   double CpUChiconjSvmLFvmPR(unsigned ) const;
   std::complex<double> CpUChiconjSvtLFvtPL(unsigned gO2) const;
   double CpUChiconjSvtLFvtPR(unsigned ) const;
   std::complex<double> CpbarUChaChaAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaChaAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChahhChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChahhChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaHpmChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaHpmChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaconjScFsPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaconjScFsPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaconjStFbPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaconjStFbPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaconjSuFdPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaconjSuFdPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUChaVPChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVPChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUChaVZChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVZChaPL(unsigned gO1, unsigned gI2) const;
   double CpbarUChabarFveSePL(unsigned , unsigned ) const;
   std::complex<double> CpbarUChabarFveSePR(unsigned gO1, unsigned gI2) const;
   double CpbarUChabarFvmSmPL(unsigned , unsigned ) const;
   std::complex<double> CpbarUChabarFvmSmPR(unsigned gO1, unsigned gI2) const;
   double CpbarUChabarFvtStauPL(unsigned , unsigned ) const;
   std::complex<double> CpbarUChabarFvtStauPR(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUChabarFcSsPL(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChabarFcSsPR(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChabarFtSbPL(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChabarFtSbPR(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChabarFuSdPL(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChabarFuSdPR(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpbarUChaVWmChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVWmChiPL(unsigned gO1, unsigned gI2) const;
   double CpbarUChaconjSveLFePL(unsigned gO2) const;
   double CpbarUChaconjSveLFePR(unsigned gO1) const;
   double CpbarUChaconjSvmLFmPL(unsigned gO2) const;
   double CpbarUChaconjSvmLFmPR(unsigned gO1) const;
   double CpbarUChaconjSvtLFtauPL(unsigned gO2) const;
   double CpbarUChaconjSvtLFtauPR(unsigned gO1) const;
   std::complex<double> CpGluconjSbFbPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSbFbPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjScFcPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjScFcPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSdFdPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSdFdPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSsFsPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSsFsPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjStFtPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjStFtPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSuFuPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluconjSuFuPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpGluVGGluPR() const;
   std::complex<double> CpGluVGGluPL() const;
   std::complex<double> CpbarFdSuChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSuChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSdChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSdChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPL(unsigned gI1) const;
   std::complex<double> CpbarFdhhFdPR(unsigned gI1) const;
   std::complex<double> CpbarFdHpmFuPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFdHpmFuPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFdSdGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFdSdGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFdFdAhPL(unsigned gI2) const;
   std::complex<double> CpbarFdFdAhPR(unsigned gI2) const;
   double CpbarFdVGFdPR() const;
   double CpbarFdVGFdPL() const;
   double CpbarFdVPFdPR() const;
   double CpbarFdVPFdPL() const;
   double CpbarFdVWmFuPR(unsigned ) const;
   double CpbarFdVWmFuPL(unsigned ) const;
   double CpbarFdVZFdPR() const;
   double CpbarFdVZFdPL() const;
   std::complex<double> CpbarFsScChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFsScChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFsSsChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFsSsChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFshhFsPL(unsigned gI1) const;
   std::complex<double> CpbarFshhFsPR(unsigned gI1) const;
   std::complex<double> CpbarFsHpmFcPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFsHpmFcPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFsSsGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFsSsGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFsFsAhPL(unsigned gI2) const;
   std::complex<double> CpbarFsFsAhPR(unsigned gI2) const;
   double CpbarFsVGFsPR() const;
   double CpbarFsVGFsPL() const;
   double CpbarFsVPFsPR() const;
   double CpbarFsVPFsPL() const;
   double CpbarFsVWmFcPR(unsigned ) const;
   double CpbarFsVWmFcPL(unsigned ) const;
   double CpbarFsVZFsPR() const;
   double CpbarFsVZFsPL() const;
   std::complex<double> CpbarFbStChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFbStChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFbSbChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFbSbChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFbhhFbPL(unsigned gI1) const;
   std::complex<double> CpbarFbhhFbPR(unsigned gI1) const;
   std::complex<double> CpbarFbHpmFtPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFbHpmFtPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFbSbGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFbSbGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFbFbAhPL(unsigned gI2) const;
   std::complex<double> CpbarFbFbAhPR(unsigned gI2) const;
   double CpbarFbVGFbPR() const;
   double CpbarFbVGFbPL() const;
   double CpbarFbVPFbPR() const;
   double CpbarFbVPFbPL() const;
   double CpbarFbVWmFtPR(unsigned ) const;
   double CpbarFbVWmFtPL(unsigned ) const;
   double CpbarFbVZFbPR() const;
   double CpbarFbVZFbPL() const;
   std::complex<double> CpbarFubarChaSdPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFubarChaSdPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuSuChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuSuChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuconjHpmFdPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFuconjHpmFdPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFuhhFuPL(unsigned gI1) const;
   std::complex<double> CpbarFuhhFuPR(unsigned gI1) const;
   std::complex<double> CpbarFuSuGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFuSuGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFuFuAhPL(unsigned gI2) const;
   std::complex<double> CpbarFuFuAhPR(unsigned gI2) const;
   double CpbarFuVGFuPR() const;
   double CpbarFuVGFuPL() const;
   double CpbarFuVPFuPR() const;
   double CpbarFuVPFuPL() const;
   double CpbarFuVZFuPR() const;
   double CpbarFuVZFuPL() const;
   double CpbarFuconjVWmFdPR(unsigned ) const;
   double CpbarFuconjVWmFdPL(unsigned ) const;
   std::complex<double> CpbarFcbarChaSsPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFcbarChaSsPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFcScChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFcScChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFcconjHpmFsPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFcconjHpmFsPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFchhFcPL(unsigned gI1) const;
   std::complex<double> CpbarFchhFcPR(unsigned gI1) const;
   std::complex<double> CpbarFcScGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFcScGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFcFcAhPL(unsigned gI2) const;
   std::complex<double> CpbarFcFcAhPR(unsigned gI2) const;
   double CpbarFcVGFcPR() const;
   double CpbarFcVGFcPL() const;
   double CpbarFcVPFcPR() const;
   double CpbarFcVPFcPL() const;
   double CpbarFcVZFcPR() const;
   double CpbarFcVZFcPL() const;
   double CpbarFcconjVWmFsPR(unsigned ) const;
   double CpbarFcconjVWmFsPL(unsigned ) const;
   std::complex<double> CpbarFtbarChaSbPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtbarChaSbPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtStChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtStChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtconjHpmFbPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFtconjHpmFbPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFthhFtPL(unsigned gI1) const;
   std::complex<double> CpbarFthhFtPR(unsigned gI1) const;
   std::complex<double> CpbarFtStGluPL(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFtStGluPR(unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFtFtAhPL(unsigned gI2) const;
   std::complex<double> CpbarFtFtAhPR(unsigned gI2) const;
   double CpbarFtVGFtPR() const;
   double CpbarFtVGFtPL() const;
   double CpbarFtVPFtPR() const;
   double CpbarFtVPFtPL() const;
   double CpbarFtVZFtPR() const;
   double CpbarFtVZFtPL() const;
   double CpbarFtconjVWmFbPR(unsigned ) const;
   double CpbarFtconjVWmFbPL(unsigned ) const;
   double CpbarFvebarChaSePL(unsigned , unsigned ) const;
   std::complex<double> CpbarFvebarChaSePR(unsigned gI1, unsigned gI2) const;
   double CpbarFveconjHpmFePL(unsigned ) const;
   std::complex<double> CpbarFveconjHpmFePR(unsigned gI1) const;
   double CpbarFveSveLChiPL(unsigned ) const;
   std::complex<double> CpbarFveSveLChiPR(unsigned gI2) const;
   double CpbarFveVZFvePR() const;
   double CpbarFveVZFvePL() const;
   double CpbarFveconjVWmFePR() const;
   double CpbarFveconjVWmFePL() const;
   double CpbarFvmbarChaSmPL(unsigned , unsigned ) const;
   std::complex<double> CpbarFvmbarChaSmPR(unsigned gI1, unsigned gI2) const;
   double CpbarFvmconjHpmFmPL(unsigned ) const;
   std::complex<double> CpbarFvmconjHpmFmPR(unsigned gI1) const;
   double CpbarFvmSvmLChiPL(unsigned ) const;
   std::complex<double> CpbarFvmSvmLChiPR(unsigned gI2) const;
   double CpbarFvmVZFvmPR() const;
   double CpbarFvmVZFvmPL() const;
   double CpbarFvmconjVWmFmPR() const;
   double CpbarFvmconjVWmFmPL() const;
   double CpbarFvtbarChaStauPL(unsigned , unsigned ) const;
   std::complex<double> CpbarFvtbarChaStauPR(unsigned gI1, unsigned gI2) const;
   double CpbarFvtconjHpmFtauPL(unsigned ) const;
   std::complex<double> CpbarFvtconjHpmFtauPR(unsigned gI1) const;
   double CpbarFvtSvtLChiPL(unsigned ) const;
   std::complex<double> CpbarFvtSvtLChiPR(unsigned gI2) const;
   double CpbarFvtVZFvtPR() const;
   double CpbarFvtVZFvtPL() const;
   double CpbarFvtconjVWmFtauPR() const;
   double CpbarFvtconjVWmFtauPL() const;
   std::complex<double> CpbarFeSeChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeSeChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFehhFePL(unsigned gI1) const;
   std::complex<double> CpbarFehhFePR(unsigned gI1) const;
   std::complex<double> CpbarFeHpmFvePL(unsigned gI1) const;
   double CpbarFeHpmFvePR(unsigned ) const;
   std::complex<double> CpbarFeFeAhPL(unsigned gI2) const;
   std::complex<double> CpbarFeFeAhPR(unsigned gI2) const;
   std::complex<double> CpbarFeSveLChaPL(unsigned gI2) const;
   std::complex<double> CpbarFeSveLChaPR(unsigned gI2) const;
   double CpbarFeVPFePR() const;
   double CpbarFeVPFePL() const;
   double CpbarFeVWmFvePR() const;
   double CpbarFeVWmFvePL() const;
   double CpbarFeVZFePR() const;
   double CpbarFeVZFePL() const;
   std::complex<double> CpbarFmSmChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFmSmChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFmhhFmPL(unsigned gI1) const;
   std::complex<double> CpbarFmhhFmPR(unsigned gI1) const;
   std::complex<double> CpbarFmHpmFvmPL(unsigned gI1) const;
   double CpbarFmHpmFvmPR(unsigned ) const;
   std::complex<double> CpbarFmFmAhPL(unsigned gI2) const;
   std::complex<double> CpbarFmFmAhPR(unsigned gI2) const;
   std::complex<double> CpbarFmSvmLChaPL(unsigned gI2) const;
   std::complex<double> CpbarFmSvmLChaPR(unsigned gI2) const;
   double CpbarFmVPFmPR() const;
   double CpbarFmVPFmPL() const;
   double CpbarFmVWmFvmPR() const;
   double CpbarFmVWmFvmPL() const;
   double CpbarFmVZFmPR() const;
   double CpbarFmVZFmPL() const;
   std::complex<double> CpbarFtauStauChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtauStauChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFtauhhFtauPL(unsigned gI1) const;
   std::complex<double> CpbarFtauhhFtauPR(unsigned gI1) const;
   std::complex<double> CpbarFtauHpmFvtPL(unsigned gI1) const;
   double CpbarFtauHpmFvtPR(unsigned ) const;
   std::complex<double> CpbarFtauFtauAhPL(unsigned gI2) const;
   std::complex<double> CpbarFtauFtauAhPR(unsigned gI2) const;
   std::complex<double> CpbarFtauSvtLChaPL(unsigned gI2) const;
   std::complex<double> CpbarFtauSvtLChaPR(unsigned gI2) const;
   double CpbarFtauVPFtauPR() const;
   double CpbarFtauVPFtauPL() const;
   double CpbarFtauVWmFvtPR() const;
   double CpbarFtauVWmFvtPL() const;
   double CpbarFtauVZFtauPR() const;
   double CpbarFtauVZFtauPL() const;
   std::complex<double> self_energy_Sd(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Su(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Se(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Sm(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Stau(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Ss(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Sc(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Sb(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_St(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_hh(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Ah(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Hpm(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_SveL(double p ) const;
   std::complex<double> self_energy_SvmL(double p ) const;
   std::complex<double> self_energy_SvtL(double p ) const;
   std::complex<double> self_energy_VZ(double p ) const;
   std::complex<double> self_energy_VWm(double p ) const;
   std::complex<double> self_energy_Chi_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Chi_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Chi_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Glu_1(double p ) const;
   std::complex<double> self_energy_Glu_PR(double p ) const;
   std::complex<double> self_energy_Glu_PL(double p ) const;
   std::complex<double> self_energy_Fd_1(double p ) const;
   std::complex<double> self_energy_Fd_PR(double p ) const;
   std::complex<double> self_energy_Fd_PL(double p ) const;
   std::complex<double> self_energy_Fs_1(double p ) const;
   std::complex<double> self_energy_Fs_PR(double p ) const;
   std::complex<double> self_energy_Fs_PL(double p ) const;
   std::complex<double> self_energy_Fb_1(double p ) const;
   std::complex<double> self_energy_Fb_PR(double p ) const;
   std::complex<double> self_energy_Fb_PL(double p ) const;
   std::complex<double> self_energy_Fu_1(double p ) const;
   std::complex<double> self_energy_Fu_PR(double p ) const;
   std::complex<double> self_energy_Fu_PL(double p ) const;
   std::complex<double> self_energy_Fc_1(double p ) const;
   std::complex<double> self_energy_Fc_PR(double p ) const;
   std::complex<double> self_energy_Fc_PL(double p ) const;
   std::complex<double> self_energy_Ft_1(double p ) const;
   std::complex<double> self_energy_Ft_PR(double p ) const;
   std::complex<double> self_energy_Ft_PL(double p ) const;
   std::complex<double> self_energy_Fve_1(double p ) const;
   std::complex<double> self_energy_Fve_PR(double p ) const;
   std::complex<double> self_energy_Fve_PL(double p ) const;
   std::complex<double> self_energy_Fvm_1(double p ) const;
   std::complex<double> self_energy_Fvm_PR(double p ) const;
   std::complex<double> self_energy_Fvm_PL(double p ) const;
   std::complex<double> self_energy_Fvt_1(double p ) const;
   std::complex<double> self_energy_Fvt_PR(double p ) const;
   std::complex<double> self_energy_Fvt_PL(double p ) const;
   std::complex<double> self_energy_Fe_1(double p ) const;
   std::complex<double> self_energy_Fe_PR(double p ) const;
   std::complex<double> self_energy_Fe_PL(double p ) const;
   std::complex<double> self_energy_Fm_1(double p ) const;
   std::complex<double> self_energy_Fm_PR(double p ) const;
   std::complex<double> self_energy_Fm_PL(double p ) const;
   std::complex<double> self_energy_Ftau_1(double p ) const;
   std::complex<double> self_energy_Ftau_PR(double p ) const;
   std::complex<double> self_energy_Ftau_PL(double p ) const;
   std::complex<double> self_energy_VZ_heavy(double p ) const;
   std::complex<double> self_energy_VWm_heavy(double p ) const;
   std::complex<double> self_energy_Fb_1_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Fb_PR_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Fb_PL_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ftau_1_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ftau_PR_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ftau_PL_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ft_1_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ft_PR_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ft_PL_heavy_rotated(double p ) const;
   std::complex<double> self_energy_Ft_1_heavy(double p ) const;
   std::complex<double> self_energy_Ft_PR_heavy(double p ) const;
   std::complex<double> self_energy_Ft_PL_heavy(double p ) const;
   std::complex<double> tadpole_hh(unsigned gO1) const;


   /// calculates the tadpoles at current loop order
   void tadpole_equations(double[number_of_ewsb_equations]) const;

   void calculate_MTopSquark_3rd_generation(double&, double&, double&) const;
   void calculate_MBottomSquark_3rd_generation(double&, double&, double&) const;
   void calculate_MSneutrino_3rd_generation(double&, double&, double&) const;
   void calculate_MSelectron_3rd_generation(double&, double&, double&) const;

   void self_energy_hh_2loop(double result[3]) const;
   void self_energy_Ah_2loop(double result[3]) const;

   void tadpole_hh_2loop(double result[2]) const;

   void calculate_MVG_pole();
   void calculate_MGlu_pole();
   void calculate_MVP_pole();
   void calculate_MVZ_pole();
   void calculate_MFd_pole();
   void calculate_MFs_pole();
   void calculate_MFb_pole();
   void calculate_MFu_pole();
   void calculate_MFc_pole();
   void calculate_MFt_pole();
   void calculate_MFve_pole();
   void calculate_MFvm_pole();
   void calculate_MFvt_pole();
   void calculate_MFe_pole();
   void calculate_MFm_pole();
   void calculate_MFtau_pole();
   void calculate_MSveL_pole();
   void calculate_MSvmL_pole();
   void calculate_MSvtL_pole();
   void calculate_MSd_pole();
   void calculate_MSu_pole();
   void calculate_MSe_pole();
   void calculate_MSm_pole();
   void calculate_MStau_pole();
   void calculate_MSs_pole();
   void calculate_MSc_pole();
   void calculate_MSb_pole();
   void calculate_MSt_pole();
   void calculate_Mhh_pole();
   void calculate_MAh_pole();
   void calculate_MHpm_pole();
   void calculate_MChi_pole();
   void calculate_MCha_pole();
   void calculate_MVWm_pole();
   double calculate_MVWm_pole(double);
   double calculate_MVZ_pole(double);

   double calculate_MFt_DRbar(double, int) const;
   double calculate_MFb_DRbar(double, int) const;
   double calculate_MFtau_DRbar(double, int) const;
   double calculate_MFvt_DRbar(double, int) const;
   double calculate_MVP_DRbar(double);
   double calculate_MVZ_DRbar(double);
   double calculate_MVWm_DRbar(double);

   double ThetaW() const;
   double v() const;


private:
   struct EWSB_args {
      CMSSMNoFV_mass_eigenstates* model;
      unsigned ewsb_loop_order;
   };

#ifdef ENABLE_THREADS
   struct Thread {
      typedef void(CMSSMNoFV_mass_eigenstates::*Memfun_t)();
      CMSSMNoFV_mass_eigenstates* model;
      Memfun_t fun;

      Thread(CMSSMNoFV_mass_eigenstates* model_, Memfun_t fun_)
         : model(model_), fun(fun_) {}
      void operator()() {
         try {
            (model->*fun)();
         } catch (...) {
            model->thread_exception = std::current_exception();
         }
      }
   };
#endif

   std::size_t number_of_ewsb_iterations;
   std::size_t number_of_mass_iterations;
   unsigned ewsb_loop_order;
   unsigned pole_mass_loop_order;
   bool calculate_sm_pole_masses; ///< switch to calculate the pole masses of the Standard Model particles
   bool force_output;             ///< switch to force output of pole masses
   double precision;              ///< RG running precision
   double ewsb_iteration_precision;
   CMSSMNoFV_physical physical; ///< contains the pole masses and mixings
   Problems<CMSSMNoFV_info::NUMBER_OF_PARTICLES> problems;
   Two_loop_corrections two_loop_corrections; ///< used 2-loop corrections
#ifdef ENABLE_THREADS
   std::exception_ptr thread_exception;
   static std::mutex mtx_fortran; /// locks fortran functions
#endif

   int solve_ewsb_iteratively();
   int solve_ewsb_iteratively(unsigned);
   int solve_ewsb_iteratively_with(EWSB_solver*, const double[number_of_ewsb_equations]);
   int solve_ewsb_tree_level_via_soft_higgs_masses();
   void ewsb_initial_guess(double[number_of_ewsb_equations]);
   int ewsb_step(double[number_of_ewsb_equations]) const;
   static int ewsb_step(const gsl_vector*, void*, gsl_vector*);
   static int tadpole_equations(const gsl_vector*, void*, gsl_vector*);
   void copy_DRbar_masses_to_pole_masses();

   // Passarino-Veltman loop functions
   double A0(double) const;
   double B0(double, double, double) const;
   double B1(double, double, double) const;
   double B00(double, double, double) const;
   double B22(double, double, double) const;
   double H0(double, double, double) const;
   double F0(double, double, double) const;
   double G0(double, double, double) const;

   // DR-bar masses
   double MVG;
   double MGlu;
   double MVP;
   double MVZ;
   double MFd;
   double MFs;
   double MFb;
   double MFu;
   double MFc;
   double MFt;
   double MFve;
   double MFvm;
   double MFvt;
   double MFe;
   double MFm;
   double MFtau;
   double MSveL;
   double MSvmL;
   double MSvtL;
   Eigen::Array<double,2,1> MSd;
   Eigen::Array<double,2,1> MSu;
   Eigen::Array<double,2,1> MSe;
   Eigen::Array<double,2,1> MSm;
   Eigen::Array<double,2,1> MStau;
   Eigen::Array<double,2,1> MSs;
   Eigen::Array<double,2,1> MSc;
   Eigen::Array<double,2,1> MSb;
   Eigen::Array<double,2,1> MSt;
   Eigen::Array<double,2,1> Mhh;
   Eigen::Array<double,2,1> MAh;
   Eigen::Array<double,2,1> MHpm;
   Eigen::Array<double,4,1> MChi;
   Eigen::Array<double,2,1> MCha;
   double MVWm;

   // DR-bar mixing matrices
   Eigen::Matrix<double,2,2> ZD;
   Eigen::Matrix<double,2,2> ZU;
   Eigen::Matrix<double,2,2> ZE;
   Eigen::Matrix<double,2,2> ZM;
   Eigen::Matrix<double,2,2> ZTau;
   Eigen::Matrix<double,2,2> ZS;
   Eigen::Matrix<double,2,2> ZC;
   Eigen::Matrix<double,2,2> ZB;
   Eigen::Matrix<double,2,2> ZT;
   Eigen::Matrix<double,2,2> ZH;
   Eigen::Matrix<double,2,2> ZA;
   Eigen::Matrix<double,2,2> ZP;
   Eigen::Matrix<std::complex<double>,4,4> ZN;
   Eigen::Matrix<std::complex<double>,2,2> UM;
   Eigen::Matrix<std::complex<double>,2,2> UP;

   // phases
   std::complex<double> PhaseGlu;

};

std::ostream& operator<<(std::ostream&, const CMSSMNoFV_mass_eigenstates&);

} // namespace flexiblesusy

#endif
