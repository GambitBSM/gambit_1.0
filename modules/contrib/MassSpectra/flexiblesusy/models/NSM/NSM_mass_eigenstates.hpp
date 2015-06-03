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

// File generated at Mon 1 Jun 2015 12:43:06

/**
 * @file NSM_mass_eigenstates.hpp
 * @brief contains class for model with routines needed to solve boundary
 *        value problem using the two_scale solver by solvingt EWSB
 *        and determine the pole masses and mixings
 *
 * This file was generated at Mon 1 Jun 2015 12:43:06 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#ifndef NSM_IMODEL_H
#define NSM_IMODEL_H

#include "NSM_two_scale_soft_parameters.hpp"
#include "NSM_physical.hpp"
#include "NSM_info.hpp"
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
 * @class NSM_mass_eigenstates
 * @brief model class with routines for determing masses and mixinga and EWSB
 */
class NSM_mass_eigenstates : public NSM_soft_parameters {
public:
   explicit NSM_mass_eigenstates(const NSM_input_parameters& input_ = NSM_input_parameters());
   virtual ~NSM_mass_eigenstates();

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
   void set_physical(const NSM_physical&);
   double get_ewsb_iteration_precision() const;
   double get_ewsb_loop_order() const;
   const NSM_physical& get_physical() const;
   NSM_physical& get_physical();
   const Problems<NSM_info::NUMBER_OF_PARTICLES>& get_problems() const;
   Problems<NSM_info::NUMBER_OF_PARTICLES>& get_problems();
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
   double get_MHp() const { return MHp; }
   const Eigen::Array<double,3,1>& get_MFv() const { return MFv; }
   double get_MFv(int i) const { return MFv(i); }
   double get_MAh() const { return MAh; }
   double get_MVP() const { return MVP; }
   double get_MVZ() const { return MVZ; }
   const Eigen::Array<double,3,1>& get_MFd() const { return MFd; }
   double get_MFd(int i) const { return MFd(i); }
   const Eigen::Array<double,3,1>& get_MFu() const { return MFu; }
   double get_MFu(int i) const { return MFu(i); }
   const Eigen::Array<double,3,1>& get_MFe() const { return MFe; }
   double get_MFe(int i) const { return MFe(i); }
   const Eigen::Array<double,2,1>& get_Mhh() const { return Mhh; }
   double get_Mhh(int i) const { return Mhh(i); }
   double get_MVWp() const { return MVWp; }

   

   
   const Eigen::Matrix<std::complex<double>,3,3>& get_Vd() const { return Vd; }
   const std::complex<double>& get_Vd(int i, int k) const { return Vd(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ud() const { return Ud; }
   const std::complex<double>& get_Ud(int i, int k) const { return Ud(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Vu() const { return Vu; }
   const std::complex<double>& get_Vu(int i, int k) const { return Vu(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Uu() const { return Uu; }
   const std::complex<double>& get_Uu(int i, int k) const { return Uu(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ve() const { return Ve; }
   const std::complex<double>& get_Ve(int i, int k) const { return Ve(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ue() const { return Ue; }
   const std::complex<double>& get_Ue(int i, int k) const { return Ue(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZH() const { return ZH; }
   double get_ZH(int i, int k) const { return ZH(i,k); }


   double get_mass_matrix_VG() const;
   void calculate_MVG();
   double get_mass_matrix_Hp() const;
   void calculate_MHp();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fv() const;
   void calculate_MFv();
   double get_mass_matrix_Ah() const;
   void calculate_MAh();
   double get_mass_matrix_VP() const;
   void calculate_MVP();
   double get_mass_matrix_VZ() const;
   void calculate_MVZ();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fd() const;
   void calculate_MFd();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fu() const;
   void calculate_MFu();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fe() const;
   void calculate_MFe();
   Eigen::Matrix<double,2,2> get_mass_matrix_hh() const;
   void calculate_Mhh();
   double get_mass_matrix_VWp() const;
   void calculate_MVWp();

   double get_ewsb_eq_hh_1() const;
   double get_ewsb_eq_hh_2() const;

   std::complex<double> CpUhhAhAh(unsigned gO2) const;
   double CpUhhVZVZ(unsigned gO2) const;
   std::complex<double> CpUhhconjHpHp(unsigned gO2) const;
   double CpUhhconjVWpVWp(unsigned gO2) const;
   double CpUhhbargWpgWp(unsigned gO1) const;
   double CpUhhbargWpCgWpC(unsigned gO1) const;
   double CpUhhbargZgZ(unsigned gO1) const;
   std::complex<double> CpUhhUhhAhAh(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhconjHpHp(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhVZAh(unsigned gO2) const;
   double CpUhhconjVWpHp(unsigned gO2) const;
   double CpUhhUhhconjVWpVWp(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhVZVZ(unsigned gO1, unsigned gO2) const;
   std::complex<double> CpUhhUhhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhhhhh(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpUhhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const;
   double CpconjHpVWpVP() const;
   double CpconjHpVZVWp() const;
   double CpHpgWpCbargZ() const;
   double CpconjHpbargWpCgZ() const;
   double CpHpgZbargWp() const;
   double CpconjHpbargZgWp() const;
   double CpHpconjHpAhAh() const;
   double CpHpconjHpconjHpHp() const;
   std::complex<double> CpconjHpVWpAh() const;
   double CpconjHpVPHp() const;
   double CpconjHpVZHp() const;
   double CpHpconjHpconjVWpVWp() const;
   std::complex<double> CpHpconjHpVZVZ() const;
   std::complex<double> CpHpconjHphhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjHpbarFdFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjHpbarFdFuPL(unsigned gI1, unsigned gI2) const;
   double CpconjHpbarFeFvPR(unsigned , unsigned ) const;
   std::complex<double> CpconjHpbarFeFvPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjHpHphh(unsigned gI2) const;
   std::complex<double> CpconjHpVWphh(unsigned gI2) const;
   std::complex<double> CpAhbargWpgWp() const;
   std::complex<double> CpAhbargWpCgWpC() const;
   double CpAhAhAhAh() const;
   double CpAhAhconjHpHp() const;
   std::complex<double> CpAhconjVWpHp() const;
   double CpAhAhconjVWpVWp() const;
   std::complex<double> CpAhAhVZVZ() const;
   std::complex<double> CpAhhhAh(unsigned gI1) const;
   std::complex<double> CpAhAhhhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFdFdPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFdFdPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFeFePR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFeFePL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFuFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFuFuPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhVZhh(unsigned gI2) const;
   double CpVZbargWpgWp() const;
   double CpVZbargWpCgWpC() const;
   double CpVZconjHpHp() const;
   double CpVZconjVWpHp() const;
   std::complex<double> CpVZVZAhAh() const;
   std::complex<double> CpVZVZconjHpHp() const;
   double CpVZconjVWpVWp() const;
   std::complex<double> CpVZhhAh(unsigned gI1) const;
   std::complex<double> CpVZVZhhhh(unsigned gI1, unsigned gI2) const;
   double CpVZbarFdFdPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFdFdPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPR(unsigned , unsigned ) const;
   std::complex<double> CpVZVZhh(unsigned gI2) const;
   double CpVZVZconjVWpVWp1() const;
   double CpVZVZconjVWpVWp2() const;
   double CpVZVZconjVWpVWp3() const;
   std::complex<double> CpconjVWpHpAh() const;
   double CpconjVWpVPHp() const;
   double CpconjVWpVZHp() const;
   double CpconjVWpbargPgWp() const;
   double CpconjVWpbargWpCgP() const;
   double CpconjVWpbargWpCgZ() const;
   double CpconjVWpbargZgWp() const;
   double CpVWpconjVWpAhAh() const;
   double CpVWpconjVWpconjHpHp() const;
   double CpconjVWpVWpVP() const;
   double CpconjVWpVZVWp() const;
   std::complex<double> CpVWpconjVWphhhh(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjVWpbarFdFuPL(unsigned gI1, unsigned gI2) const;
   double CpconjVWpbarFdFuPR(unsigned , unsigned ) const;
   std::complex<double> CpconjVWpbarFeFvPL(unsigned gI1, unsigned gI2) const;
   double CpconjVWpbarFeFvPR(unsigned , unsigned ) const;
   std::complex<double> CpconjVWpHphh(unsigned gI2) const;
   std::complex<double> CpconjVWpVWphh(unsigned gI2) const;
   double CpVWpconjVWpVPVP1() const;
   double CpVWpconjVWpVPVP2() const;
   double CpVWpconjVWpVPVP3() const;
   double CpVWpconjVWpVZVZ1() const;
   double CpVWpconjVWpVZVZ2() const;
   double CpVWpconjVWpVZVZ3() const;
   double CpVWpconjVWpconjVWpVWp1() const;
   double CpVWpconjVWpconjVWpVWp2() const;
   double CpVWpconjVWpconjVWpVWp3() const;
   std::complex<double> CpbarUFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFdFdAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFdFdAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFdVGFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVGFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdVPFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVPFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdVZFdPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdVZFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFdconjHpFuPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdconjHpFuPR(unsigned gO1, unsigned gI2) const;
   double CpbarUFdconjVWpFuPR(unsigned , unsigned ) const;
   std::complex<double> CpbarUFdconjVWpFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFuFuAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFuFuAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFuHpFdPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuHpFdPR(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuVGFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVGFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuVPFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVPFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarUFuVWpFdPR(unsigned , unsigned ) const;
   std::complex<double> CpbarUFuVWpFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFuVZFuPR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuVZFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarUFeFeAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFeFeAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeconjHpFvPL(unsigned gO2, unsigned gI2) const;
   double CpbarUFeconjHpFvPR(unsigned , unsigned ) const;
   double CpbarUFeconjVWpFvPR(unsigned , unsigned ) const;
   double CpbarUFeconjVWpFvPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFdFdAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFdFdAhPR(unsigned gO1, unsigned gI1) const;
   double CpbarFdVZFdPR(unsigned gO2, unsigned gI2) const;
   double CpbarFdVZFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFdconjHpFuPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFdconjHpFuPR(unsigned gO1, unsigned gI2) const;
   double CpbarFdconjVWpFuPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFdconjVWpFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFeFeAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFeFeAhPR(unsigned gO1, unsigned gI1) const;
   double CpbarFeVZFePR(unsigned gO2, unsigned gI2) const;
   double CpbarFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFeconjHpFvPL(unsigned gO2, unsigned gI2) const;
   double CpbarFeconjHpFvPR(unsigned , unsigned ) const;
   double CpbarFeconjVWpFvPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFeconjVWpFvPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const;
   std::complex<double> CpbarFuFuAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFuFuAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarFuHpFdPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFuHpFdPR(unsigned gO1, unsigned gI2) const;
   double CpbarFuVPFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVPFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuVWpFdPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFuVWpFdPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuVZFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVZFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> self_energy_hh(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Hp(double p ) const;
   std::complex<double> self_energy_Ah(double p ) const;
   std::complex<double> self_energy_VZ(double p ) const;
   std::complex<double> self_energy_VWp(double p ) const;
   std::complex<double> self_energy_Fd_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_1(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PR(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PL(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_VZ_heavy(double p ) const;
   std::complex<double> self_energy_VWp_heavy(double p ) const;
   std::complex<double> self_energy_Fd_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fd_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fe_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_1_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PR_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> self_energy_Fu_PL_heavy(double p , unsigned gO1, unsigned gO2) const;
   std::complex<double> tadpole_hh(unsigned gO1) const;


   /// calculates the tadpoles at current loop order
   void tadpole_equations(double[number_of_ewsb_equations]) const;




   void calculate_MVG_pole();
   void calculate_MFv_pole();
   void calculate_MVP_pole();
   void calculate_MVZ_pole();
   void calculate_MFd_pole();
   void calculate_MFu_pole();
   void calculate_MFe_pole();
   void calculate_Mhh_pole();
   void calculate_MVWp_pole();
   double calculate_MVWp_pole(double);
   double calculate_MVZ_pole(double);

   double calculate_MFu_DRbar(double, int) const;
   double calculate_MFd_DRbar(double, int) const;
   double calculate_MFe_DRbar(double, int) const;
   double calculate_MFv_DRbar(double, int) const;
   double calculate_MVP_DRbar(double);
   double calculate_MVZ_DRbar(double);
   double calculate_MVWp_DRbar(double);

   double ThetaW() const;


private:
   struct EWSB_args {
      NSM_mass_eigenstates* model;
      unsigned ewsb_loop_order;
   };

#ifdef ENABLE_THREADS
   struct Thread {
      typedef void(NSM_mass_eigenstates::*Memfun_t)();
      NSM_mass_eigenstates* model;
      Memfun_t fun;

      Thread(NSM_mass_eigenstates* model_, Memfun_t fun_)
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
   NSM_physical physical; ///< contains the pole masses and mixings
   Problems<NSM_info::NUMBER_OF_PARTICLES> problems;
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
   double MHp;
   Eigen::Array<double,3,1> MFv;
   double MAh;
   double MVP;
   double MVZ;
   Eigen::Array<double,3,1> MFd;
   Eigen::Array<double,3,1> MFu;
   Eigen::Array<double,3,1> MFe;
   Eigen::Array<double,2,1> Mhh;
   double MVWp;

   // DR-bar mixing matrices
   Eigen::Matrix<std::complex<double>,3,3> Vd;
   Eigen::Matrix<std::complex<double>,3,3> Ud;
   Eigen::Matrix<std::complex<double>,3,3> Vu;
   Eigen::Matrix<std::complex<double>,3,3> Uu;
   Eigen::Matrix<std::complex<double>,3,3> Ve;
   Eigen::Matrix<std::complex<double>,3,3> Ue;
   Eigen::Matrix<double,2,2> ZH;

   // phases

};

std::ostream& operator<<(std::ostream&, const NSM_mass_eigenstates&);

} // namespace flexiblesusy

#endif
