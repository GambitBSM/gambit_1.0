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

// File generated at Mon 1 Jun 2015 13:19:14

/**
 * @file lowMSSM_mass_eigenstates.hpp
 * @brief contains class for model with routines needed to solve boundary
 *        value problem using the two_scale solver by solvingt EWSB
 *        and determine the pole masses and mixings
 *
 * This file was generated at Mon 1 Jun 2015 13:19:14 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#ifndef lowMSSM_IMODEL_H
#define lowMSSM_IMODEL_H

#include "lowMSSM_two_scale_soft_parameters.hpp"
#include "lowMSSM_physical.hpp"
#include "lowMSSM_info.hpp"
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
 * @class lowMSSM_mass_eigenstates
 * @brief model class with routines for determing masses and mixinga and EWSB
 */
class lowMSSM_mass_eigenstates : public lowMSSM_soft_parameters {
public:
   explicit lowMSSM_mass_eigenstates(const lowMSSM_input_parameters& input_ = lowMSSM_input_parameters());
   virtual ~lowMSSM_mass_eigenstates();

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
   void set_physical(const lowMSSM_physical&);
   double get_ewsb_iteration_precision() const;
   double get_ewsb_loop_order() const;
   const lowMSSM_physical& get_physical() const;
   lowMSSM_physical& get_physical();
   const Problems<lowMSSM_info::NUMBER_OF_PARTICLES>& get_problems() const;
   Problems<lowMSSM_info::NUMBER_OF_PARTICLES>& get_problems();
   int solve_ewsb_tree_level();
   int solve_ewsb_one_loop();
   int solve_ewsb();            ///< solve EWSB at ewsb_loop_order level

   void calculate_spectrum();
   void clear_problems();
   std::string name() const;
   void run_to(double scale, double eps = -1.0);
   void print(std::ostream&) const;
   void set_precision(double);


   double get_MVG() const { return MVG; }
   double get_MGlu() const { return MGlu; }
   const Eigen::Array<double,3,1>& get_MFv() const { return MFv; }
   double get_MFv(int i) const { return MFv(i); }
   double get_MVP() const { return MVP; }
   double get_MVZ() const { return MVZ; }
   const Eigen::Array<double,6,1>& get_MSd() const { return MSd; }
   double get_MSd(int i) const { return MSd(i); }
   const Eigen::Array<double,3,1>& get_MSv() const { return MSv; }
   double get_MSv(int i) const { return MSv(i); }
   const Eigen::Array<double,6,1>& get_MSu() const { return MSu; }
   double get_MSu(int i) const { return MSu(i); }
   const Eigen::Array<double,6,1>& get_MSe() const { return MSe; }
   double get_MSe(int i) const { return MSe(i); }
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
   const Eigen::Array<double,3,1>& get_MFe() const { return MFe; }
   double get_MFe(int i) const { return MFe(i); }
   const Eigen::Array<double,3,1>& get_MFd() const { return MFd; }
   double get_MFd(int i) const { return MFd(i); }
   const Eigen::Array<double,3,1>& get_MFu() const { return MFu; }
   double get_MFu(int i) const { return MFu(i); }
   double get_MVWm() const { return MVWm; }

   
   Eigen::Array<double,1,1> get_MChargedHiggs() const;

   Eigen::Array<double,1,1> get_MPseudoscalarHiggs() const;

   const Eigen::Matrix<double,6,6>& get_ZD() const { return ZD; }
   double get_ZD(int i, int k) const { return ZD(i,k); }
   const Eigen::Matrix<double,3,3>& get_ZV() const { return ZV; }
   double get_ZV(int i, int k) const { return ZV(i,k); }
   const Eigen::Matrix<double,6,6>& get_ZU() const { return ZU; }
   double get_ZU(int i, int k) const { return ZU(i,k); }
   const Eigen::Matrix<double,6,6>& get_ZE() const { return ZE; }
   double get_ZE(int i, int k) const { return ZE(i,k); }
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
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZEL() const { return ZEL; }
   const std::complex<double>& get_ZEL(int i, int k) const { return ZEL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZER() const { return ZER; }
   const std::complex<double>& get_ZER(int i, int k) const { return ZER(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDL() const { return ZDL; }
   const std::complex<double>& get_ZDL(int i, int k) const { return ZDL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDR() const { return ZDR; }
   const std::complex<double>& get_ZDR(int i, int k) const { return ZDR(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUL() const { return ZUL; }
   const std::complex<double>& get_ZUL(int i, int k) const { return ZUL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUR() const { return ZUR; }
   const std::complex<double>& get_ZUR(int i, int k) const { return ZUR(i,k); }

   void set_PhaseGlu(std::complex<double> PhaseGlu_) { PhaseGlu = PhaseGlu_; }
   std::complex<double> get_PhaseGlu() const { return PhaseGlu; }

   double get_mass_matrix_VG() const;
   void calculate_MVG();
   double get_mass_matrix_Glu() const;
   void calculate_MGlu();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fv() const;
   void calculate_MFv();
   double get_mass_matrix_VP() const;
   void calculate_MVP();
   double get_mass_matrix_VZ() const;
   void calculate_MVZ();
   Eigen::Matrix<double,6,6> get_mass_matrix_Sd() const;
   void calculate_MSd();
   Eigen::Matrix<double,3,3> get_mass_matrix_Sv() const;
   void calculate_MSv();
   Eigen::Matrix<double,6,6> get_mass_matrix_Su() const;
   void calculate_MSu();
   Eigen::Matrix<double,6,6> get_mass_matrix_Se() const;
   void calculate_MSe();
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
   Eigen::Matrix<double,3,3> get_mass_matrix_Fe() const;
   void calculate_MFe();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fd() const;
   void calculate_MFd();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fu() const;
   void calculate_MFu();
   double get_mass_matrix_VWm() const;
   void calculate_MVWm();

   double get_ewsb_eq_hh_1() const;
   double get_ewsb_eq_hh_2() const;

   std::complex<double> CpUSdconjUSdVZVZ(unsigned gO1, unsigned gO2) const;
   double CpUSdconjUSdconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSdconjUSdAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdFuChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdFuChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdFdChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdFdChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSdconjUSdconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSdAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSdhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdSuHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSdGluFdPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdGluFdPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSdVGSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVPSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVZSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSdVWmSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvVZVZ(unsigned gO1, unsigned gO2) const;
   double CpUSvconjUSvconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSvconjUSvAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSvbarChaFePR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSvbarChaFePL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSvconjHpmSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSvSvhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpconjUSvFvChiPR(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpconjUSvFvChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSvconjUSvconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSvVZSv(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSvconjVWmSe(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuVZVZ(unsigned gO1, unsigned gO2) const;
   double CpUSuconjUSuconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSuconjUSuAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSubarChaFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSubarChaFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuconjHpmSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuFuChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuFuChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSuconjUSuconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuSuAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuSuhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSuGluFuPR(unsigned gO2, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSuGluFuPL(unsigned gO1, unsigned , unsigned gI2) const;
   std::complex<double> CpconjUSuconjVWmSd(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVGSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVPSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSuVZSu(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeVZVZ(unsigned gO1, unsigned gO2) const;
   double CpUSeconjUSeconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUSeconjUSeAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSehhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSvHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpconjUSeFvChaPR(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpconjUSeFvChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeFeChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeFeChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUSeconjUSeconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSeAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeSehh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUSeVWmSv(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSeVPSe(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUSeVZSe(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUhhVZVZ(unsigned gO2) const;
   std::complex<double> CpUhhconjVWmVWm(unsigned gO2) const;
   std::complex<double> CpUhhbargWmgWm(unsigned gO1) const;
   std::complex<double> CpUhhbargWmCgWmC(unsigned gO1) const;
   std::complex<double> CpUhhbargZgZ(unsigned gO1) const;
   std::complex<double> CpUhhUhhVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhAhAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhhhhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSvSv(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhUhhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhVZAh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUhhconjVWmHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUAhbargWmgWm(unsigned gO1) const;
   std::complex<double> CpUAhbargWmCgWmC(unsigned gO1) const;
   std::complex<double> CpUAhUAhVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUAhUAhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhhhAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhUAhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUAhVZhh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUAhconjVWmHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVWmVP(unsigned gO2) const;
   std::complex<double> CpconjUHpmVZVWm(unsigned gO2) const;
   std::complex<double> CpconjUHpmbargWmCgZ(unsigned gO1) const;
   std::complex<double> CpUHpmgWmCbargZ(unsigned gO2) const;
   std::complex<double> CpconjUHpmbargZgWm(unsigned gO1) const;
   std::complex<double> CpUHpmgZbargWm(unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmconjVWmVWm(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUHpmconjUHpmAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmHpmAh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmHpmhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmbarFuFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmbarFuFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmbarFvFePR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpconjUHpmbarFvFePL(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpconjUHpmconjSvSe(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmChiChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmChiChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUHpmconjUHpmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmconjSuSd(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjUHpmVWmAh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVWmhh(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVPHpm(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpconjUHpmVZHpm(unsigned gO2, unsigned gI2) const;
   double CpVZbargWmgWm() const;
   double CpVZbargWmCgWmC() const;
   double CpVZconjVWmVWm() const;
   std::complex<double> CpVZVZAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZhhhh(unsigned gI1, unsigned gI2) const;
   double CpVZconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZhhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZbarChaChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZbarChaChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSvSv(unsigned gI1, unsigned gI2) const;
   double CpVZconjSvSv(unsigned gI1, unsigned gI2) const;
   double CpVZbarFdFdPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFdFdPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPR(unsigned , unsigned ) const;
   std::complex<double> CpVZChiChiPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZChiChiPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZVZhh(unsigned gI2) const;
   std::complex<double> CpVZconjVWmHpm(unsigned gI2) const;
   double CpVZVZconjVWmVWm1() const;
   double CpVZVZconjVWmVWm2() const;
   double CpVZVZconjVWmVWm3() const;
   double CpconjVWmbargPgWm() const;
   double CpconjVWmbargWmCgP() const;
   double CpconjVWmbargWmCgZ() const;
   double CpconjVWmbargZgWm() const;
   double CpconjVWmVWmVP() const;
   double CpconjVWmVZVWm() const;
   std::complex<double> CpVWmconjVWmAhAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjHpmHpm(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmHpmAh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmHpmhh(unsigned gI1, unsigned gI2) const;
   double CpVWmconjVWmconjSvSv(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmbarFuFdPL(unsigned gI1, unsigned gI2) const;
   double CpconjVWmbarFuFdPR(unsigned , unsigned ) const;
   std::complex<double> CpconjVWmbarFvFePL(unsigned gI1, unsigned gI2) const;
   double CpconjVWmbarFvFePR(unsigned , unsigned ) const;
   std::complex<double> CpconjVWmconjSvSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmChiChaPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmChiChaPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSdSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSeSe(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVWmconjVWmconjSuSu(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmconjSuSd(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWmVPHpm(unsigned gI2) const;
   std::complex<double> CpconjVWmVWmhh(unsigned gI2) const;
   std::complex<double> CpconjVWmVZHpm(unsigned gI2) const;
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
   std::complex<double> CpUChiconjSvFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpUChiconjSvFvPR(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpUChiChiAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiChiAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSdFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSdFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSeFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSeFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSuFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjSuFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUChiconjVWmChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUChiconjVWmChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpUChiVZChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpUChiVZChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUChaChaAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaChaAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChahhChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChahhChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaHpmChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaHpmChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaconjSvFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaconjSvFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChabarFuSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChabarFuSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   double CpbarUChabarFvSePL(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpbarUChabarFvSePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaconjSuFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaconjSuFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUChaVPChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVPChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUChaVZChaPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVZChaPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUChaVWmChiPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUChaVWmChiPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeHpmFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpbarUFeHpmFvPR(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpbarUFeFeAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeFeAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeSvChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeSvChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeSeChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeSeChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const;
   double CpbarUFeVWmFvPR(unsigned , unsigned ) const;
   double CpbarUFeVWmFvPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdHpmFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdHpmFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdFdAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdFdAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdSuChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdSuChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdSdChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdSdChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdSdGluPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUFdSdGluPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUFdVGFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVGFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdVPFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVPFdPL(unsigned gO1, unsigned gI2) const;
   double CpbarUFdVWmFuPR(unsigned , unsigned ) const;
   std::complex<double> CpbarUFdVWmFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdVZFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVZFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuconjHpmFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuconjHpmFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFubarChaSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFubarChaSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuFuAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuFuAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuSuChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuSuChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuSuGluPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUFuSuGluPR(unsigned gO1, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarUFuVGFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVGFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuVPFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVPFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuVZFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVZFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarUFuconjVWmFdPR(unsigned , unsigned ) const;
   std::complex<double> CpbarUFuconjVWmFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpGluconjSdFdPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpGluconjSdFdPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpGluconjSuFuPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpGluconjSuFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpGluVGGluPR() const;
   std::complex<double> CpGluVGGluPL() const;
   std::complex<double> CpbarFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeHpmFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   double CpbarFeHpmFvPR(unsigned , unsigned , unsigned ) const;
   std::complex<double> CpbarFeFeAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeFeAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeSvChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeSvChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeSeChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeSeChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   double CpbarFeVWmFvPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFeVWmFvPL(unsigned gO1, unsigned gI2) const;
   double CpbarFeVZFePR(unsigned gO2, unsigned gI2) const;
   double CpbarFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdHpmFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdHpmFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdFdAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdFdAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSuChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSuChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSdChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSdChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdSdGluPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFdSdGluPR(unsigned gO1, unsigned gI1, unsigned ) const;
   double CpbarFdVWmFuPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFdVWmFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarFdVZFdPR(unsigned gO2, unsigned gI2) const;
   double CpbarFdVZFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFuconjHpmFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuconjHpmFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFubarChaSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFubarChaSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuFuAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuFuAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuSuChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuSuChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuSuGluPL(unsigned gO2, unsigned gI1, unsigned ) const;
   std::complex<double> CpbarFuSuGluPR(unsigned gO1, unsigned gI1, unsigned ) const;
   double CpbarFuVPFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVPFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuVZFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVZFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuconjVWmFdPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFuconjVWmFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> self_energy_Sd(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Sv(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Su(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Se(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_hh(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Ah(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Hpm(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_VZ(double p ) const;
   std::complex<double> self_energy_VWm(double p ) const;
   std::complex<double> self_energy_Chi_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Chi_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Chi_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Cha_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Glu_1(double p ) const;
   std::complex<double> self_energy_Glu_PR(double p ) const;
   std::complex<double> self_energy_Glu_PL(double p ) const;
   std::complex<double> self_energy_VZ_heavy(double p ) const;
   std::complex<double> self_energy_VWm_heavy(double p ) const;
   std::complex<double> self_energy_Fe_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> tadpole_hh(unsigned gO1) const;


   /// calculates the tadpoles at current loop order
   void tadpole_equations(double[number_of_ewsb_equations]) const;

   void calculate_MSu_3rd_generation(double&, double&, double&) const;
   void calculate_MSd_3rd_generation(double&, double&, double&) const;
   void calculate_MSv_3rd_generation(double&, double&, double&) const;
   void calculate_MSe_3rd_generation(double&, double&, double&) const;

   void self_energy_hh_2loop(double result[3]) const;
   void self_energy_Ah_2loop(double result[3]) const;

   void tadpole_hh_2loop(double result[2]) const;

   void calculate_MVG_pole();
   void calculate_MGlu_pole();
   void calculate_MFv_pole();
   void calculate_MVP_pole();
   void calculate_MVZ_pole();
   void calculate_MSd_pole();
   void calculate_MSv_pole();
   void calculate_MSu_pole();
   void calculate_MSe_pole();
   void calculate_Mhh_pole();
   void calculate_MAh_pole();
   void calculate_MHpm_pole();
   void calculate_MChi_pole();
   void calculate_MCha_pole();
   void calculate_MFe_pole();
   void calculate_MFd_pole();
   void calculate_MFu_pole();
   void calculate_MVWm_pole();
   double calculate_MVWm_pole(double);
   double calculate_MVZ_pole(double);

   double calculate_MFu_DRbar(double, int) const;
   double calculate_MFd_DRbar(double, int) const;
   double calculate_MFe_DRbar(double, int) const;
   double calculate_MFv_DRbar(double, int) const;
   double calculate_MVP_DRbar(double);
   double calculate_MVZ_DRbar(double);
   double calculate_MVWm_DRbar(double);

   double ThetaW() const;
   double v() const;


private:
   struct EWSB_args {
      lowMSSM_mass_eigenstates* model;
      unsigned ewsb_loop_order;
   };

#ifdef ENABLE_THREADS
   struct Thread {
      typedef void(lowMSSM_mass_eigenstates::*Memfun_t)();
      lowMSSM_mass_eigenstates* model;
      Memfun_t fun;

      Thread(lowMSSM_mass_eigenstates* model_, Memfun_t fun_)
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
   lowMSSM_physical physical; ///< contains the pole masses and mixings
   Problems<lowMSSM_info::NUMBER_OF_PARTICLES> problems;
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
   Eigen::Array<double,3,1> MFv;
   double MVP;
   double MVZ;
   Eigen::Array<double,6,1> MSd;
   Eigen::Array<double,3,1> MSv;
   Eigen::Array<double,6,1> MSu;
   Eigen::Array<double,6,1> MSe;
   Eigen::Array<double,2,1> Mhh;
   Eigen::Array<double,2,1> MAh;
   Eigen::Array<double,2,1> MHpm;
   Eigen::Array<double,4,1> MChi;
   Eigen::Array<double,2,1> MCha;
   Eigen::Array<double,3,1> MFe;
   Eigen::Array<double,3,1> MFd;
   Eigen::Array<double,3,1> MFu;
   double MVWm;

   // DR-bar mixing matrices
   Eigen::Matrix<double,6,6> ZD;
   Eigen::Matrix<double,3,3> ZV;
   Eigen::Matrix<double,6,6> ZU;
   Eigen::Matrix<double,6,6> ZE;
   Eigen::Matrix<double,2,2> ZH;
   Eigen::Matrix<double,2,2> ZA;
   Eigen::Matrix<double,2,2> ZP;
   Eigen::Matrix<std::complex<double>,4,4> ZN;
   Eigen::Matrix<std::complex<double>,2,2> UM;
   Eigen::Matrix<std::complex<double>,2,2> UP;
   Eigen::Matrix<std::complex<double>,3,3> ZEL;
   Eigen::Matrix<std::complex<double>,3,3> ZER;
   Eigen::Matrix<std::complex<double>,3,3> ZDL;
   Eigen::Matrix<std::complex<double>,3,3> ZDR;
   Eigen::Matrix<std::complex<double>,3,3> ZUL;
   Eigen::Matrix<std::complex<double>,3,3> ZUR;

   // phases
   std::complex<double> PhaseGlu;

};

std::ostream& operator<<(std::ostream&, const lowMSSM_mass_eigenstates&);

} // namespace flexiblesusy

#endif
