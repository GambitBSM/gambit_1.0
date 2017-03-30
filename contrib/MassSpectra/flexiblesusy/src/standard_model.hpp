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

/**
 * @file standard_model.hpp
 *
 * @brief contains class for Standard model running and self-energies
 *
 */

#ifndef STANDARD_MODEL_H
#define STANDARD_MODEL_H

#include "betafunction.hpp"
#include "standard_model_physical.hpp"
#include "two_loop_corrections.hpp"
#include "problems.hpp"
#include "config.h"
#include "lowe.h"
#include "physical_input.hpp"

#include <iosfwd>
#include <string>

#ifdef ENABLE_THREADS
#include <mutex>
#endif

#include <gsl/gsl_vector.h>
#include <Eigen/Core>

namespace flexiblesusy {

class EWSB_solver;

namespace standard_model_info {

enum Particles : unsigned {VG, Hp, Fv, Ah, hh, VP, VZ, Fd, Fu, Fe, VWp,
   NUMBER_OF_PARTICLES};

enum Parameters : unsigned {g1, g2, g3, Lambdax, Yu0_0, Yu0_1, Yu0_2, Yu1_0,
   Yu1_1, Yu1_2, Yu2_0, Yu2_1, Yu2_2, Yd0_0, Yd0_1, Yd0_2, Yd1_0, Yd1_1, Yd1_2
   , Yd2_0, Yd2_1, Yd2_2, Ye0_0, Ye0_1, Ye0_2, Ye1_0, Ye1_1, Ye1_2, Ye2_0,
   Ye2_1, Ye2_2, mu2, v, NUMBER_OF_PARAMETERS};

extern const char* particle_names[NUMBER_OF_PARTICLES];

extern const char* parameter_names[NUMBER_OF_PARAMETERS];

} // namespace standard_model_info

namespace standard_model {

/**
 * @class Standard_model
 * @brief model class with routines for SM running and self-energies
 */
class Standard_model : public Beta_function {
public:

   Standard_model();
   Standard_model(double scale_, double loops_, double thresholds_
   , double g1_, double g2_, double g3_, double Lambdax_, const Eigen::Matrix<
   double,3,3>& Yu_, const Eigen::Matrix<double,3,3>& Yd_, const Eigen::Matrix<
   double,3,3>& Ye_, double mu2_, double v_);

   virtual ~Standard_model();

   /// number of EWSB equations
   static const std::size_t number_of_ewsb_equations = 1;

   void calculate_DRbar_masses();
   void calculate_DRbar_parameters();
   void calculate_pole_masses();
   void check_pole_masses_for_tachyons();
   void do_force_output(bool);
   bool do_force_output() const;
   void set_ewsb_iteration_precision(double);
   void set_ewsb_loop_order(unsigned);
   void set_two_loop_corrections(const Two_loop_corrections&);
   const Two_loop_corrections& get_two_loop_corrections() const;
   void set_number_of_ewsb_iterations(std::size_t);
   void set_number_of_mass_iterations(std::size_t);
   std::size_t get_number_of_ewsb_iterations() const;
   std::size_t get_number_of_mass_iterations() const;
   void set_pole_mass_loop_order(unsigned);
   unsigned get_pole_mass_loop_order() const;
   void set_physical(const Standard_model_physical&);
   double get_ewsb_iteration_precision() const;
   double get_ewsb_loop_order() const;
   const Standard_model_physical& get_physical() const;
   Standard_model_physical& get_physical();
   const Problems<standard_model_info::NUMBER_OF_PARTICLES>& get_problems() const;
   Problems<standard_model_info::NUMBER_OF_PARTICLES>& get_problems();
   int solve_ewsb_tree_level();
   int solve_ewsb_one_loop();
   int solve_ewsb();            ///< solve EWSB at ewsb_loop_order level

   virtual Eigen::ArrayXd beta() const;
   virtual Eigen::ArrayXd get() const;
   void print(std::ostream&) const;
   virtual void set(const Eigen::ArrayXd&);

   Standard_model calc_beta() const;
   void clear();
   void clear_running_parameters();
   void clear_DRbar_parameters();
   void clear_problems();

   void calculate_spectrum();
   std::string name() const;
   void run_to(double scale, double eps = -1.0);
   void set_precision(double);
   double get_precision() const;

   void set_low_energy_data(const softsusy::QedQcd& qedqcd_) { qedqcd = qedqcd_; }
   const softsusy::QedQcd& get_low_energy_data() const { return qedqcd; }
   softsusy::QedQcd& get_low_energy_data() { return qedqcd; }
   void set_physical_input(const Physical_input& input_) { input = input_; }
   const Physical_input& get_physical_input() const { return input; }
   Physical_input& get_physical_input() { return input; }

   void initialise_from_input();

   void set_g1(double g1_) { g1 = g1_; }
   void set_g2(double g2_) { g2 = g2_; }
   void set_g3(double g3_) { g3 = g3_; }
   void set_Lambdax(double Lambdax_) { Lambdax = Lambdax_; }
   void set_Yu(const Eigen::Matrix<double,3,3>& Yu_) { Yu = Yu_; }
   void set_Yu(int i, int k, double value) { Yu(i,k) = value; }
   void set_Yd(const Eigen::Matrix<double,3,3>& Yd_) { Yd = Yd_; }
   void set_Yd(int i, int k, double value) { Yd(i,k) = value; }
   void set_Ye(const Eigen::Matrix<double,3,3>& Ye_) { Ye = Ye_; }
   void set_Ye(int i, int k, double value) { Ye(i,k) = value; }
   void set_mu2(double mu2_) { mu2 = mu2_; }
   void set_v(double v_) { v = v_; }

   double get_g1() const { return g1; }
   double get_g2() const { return g2; }
   double get_g3() const { return g3; }
   double get_Lambdax() const { return Lambdax; }
   const Eigen::Matrix<double,3,3>& get_Yu() const { return Yu; }
   double get_Yu(int i, int k) const { return Yu(i,k); }
   const Eigen::Matrix<double,3,3>& get_Yd() const { return Yd; }
   double get_Yd(int i, int k) const { return Yd(i,k); }
   const Eigen::Matrix<double,3,3>& get_Ye() const { return Ye; }
   double get_Ye(int i, int k) const { return Ye(i,k); }
   double get_mu2() const { return mu2; }
   double get_v() const { return v; }

   double get_MVG() const { return MVG; }
   double get_MHp() const { return MHp; }
   const Eigen::Array<double,3,1>& get_MFv() const { return MFv; }
   double get_MFv(int i) const { return MFv(i); }
   double get_MAh() const { return MAh; }
   double get_Mhh() const { return Mhh; }
   double get_MVP() const { return MVP; }
   double get_MVZ() const { return MVZ; }
   const Eigen::Array<double,3,1>& get_MFd() const { return MFd; }
   double get_MFd(int i) const { return MFd(i); }
   const Eigen::Array<double,3,1>& get_MFu() const { return MFu; }
   double get_MFu(int i) const { return MFu(i); }
   const Eigen::Array<double,3,1>& get_MFe() const { return MFe; }
   double get_MFe(int i) const { return MFe(i); }
   double get_MVWp() const { return MVWp; }
   const Eigen::Array<double,2,1>& get_MVPVZ() const { return MVPVZ; }
   double get_MVPVZ(int i) const { return MVPVZ(i); }

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
   const Eigen::Matrix<double,2,2>& get_ZZ() const { return ZZ; }
   double get_ZZ(int i, int k) const { return ZZ(i,k); }

   double get_mass_matrix_VG() const;
   void calculate_MVG();
   double get_mass_matrix_Hp() const;
   void calculate_MHp();
   Eigen::Matrix<double,3,3> get_mass_matrix_Fv() const;
   void calculate_MFv();
   double get_mass_matrix_Ah() const;
   void calculate_MAh();
   double get_mass_matrix_hh() const;
   void calculate_Mhh();
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
   double get_mass_matrix_VWp() const;
   void calculate_MVWp();
   Eigen::Matrix<double,2,2> get_mass_matrix_VPVZ() const;
   void calculate_MVPVZ();

   double get_ewsb_eq_hh_1() const;

   double CpconjHpHphh() const;
   double CpconjHpVWpVP() const;
   double CpconjHpVZVWp() const;
   double CpHpgWpCbargZ() const;
   double CpconjHpbargWpCgZ() const;
   double CpHpgZbargWp() const;
   double CpconjHpbargZgWp() const;
   double CpHpconjHpAhAh() const;
   double CpHpconjHphhhh() const;
   double CpHpconjHpconjHpHp() const;
   std::complex<double> CpconjHpVWpAh() const;
   double CpconjHpVWphh() const;
   double CpconjHpVPHp() const;
   double CpconjHpVZHp() const;
   double CpHpconjHpconjVWpVWp() const;
   std::complex<double> CpHpconjHpVZVZ() const;
   std::complex<double> CpconjHpbarFdFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpconjHpbarFdFuPL(unsigned gI1, unsigned gI2) const;
   double CpconjHpbarFeFvPR(unsigned , unsigned ) const;
   std::complex<double> CpconjHpbarFeFvPL(unsigned gI1, unsigned gI2) const;
   double CpAhhhAh() const;
   std::complex<double> CpAhbargWpgWp() const;
   std::complex<double> CpAhbargWpCgWpC() const;
   double CpAhAhAhAh() const;
   double CpAhAhhhhh() const;
   double CpAhAhconjHpHp() const;
   std::complex<double> CpAhVZhh() const;
   std::complex<double> CpAhconjVWpHp() const;
   double CpAhAhconjVWpVWp() const;
   std::complex<double> CpAhAhVZVZ() const;
   std::complex<double> CpAhbarFdFdPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFdFdPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFeFePR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFeFePL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFuFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpAhbarFuFuPL(unsigned gI1, unsigned gI2) const;
   double CphhAhAh() const;
   double Cphhhhhh() const;
   double CphhVZVZ() const;
   double CphhbargWpgWp() const;
   double CphhbargWpCgWpC() const;
   double CphhbargZgZ() const;
   double CphhconjHpHp() const;
   double CphhconjVWpVWp() const;
   double CphhhhAhAh() const;
   double Cphhhhhhhh() const;
   double CphhhhconjHpHp() const;
   std::complex<double> CphhVZAh() const;
   double CphhconjVWpHp() const;
   double CphhhhconjVWpVWp() const;
   std::complex<double> CphhhhVZVZ() const;
   std::complex<double> CphhbarFdFdPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CphhbarFdFdPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CphhbarFeFePR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CphhbarFeFePL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CphhbarFuFuPR(unsigned gI1, unsigned gI2) const;
   std::complex<double> CphhbarFuFuPL(unsigned gI1, unsigned gI2) const;
   std::complex<double> CpVZhhAh() const;
   double CpVZVZhh() const;
   double CpVZbargWpgWp() const;
   double CpVZbargWpCgWpC() const;
   double CpVZconjHpHp() const;
   double CpVZconjVWpHp() const;
   std::complex<double> CpVZVZAhAh() const;
   std::complex<double> CpVZVZhhhh() const;
   std::complex<double> CpVZVZconjHpHp() const;
   double CpVZconjVWpVWp() const;
   double CpVZbarFdFdPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFdFdPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFeFePR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFuFuPR(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPL(unsigned gI1, unsigned gI2) const;
   double CpVZbarFvFvPR(unsigned , unsigned ) const;
   double CpVZVZconjVWpVWp1() const;
   double CpVZVZconjVWpVWp2() const;
   double CpVZVZconjVWpVWp3() const;
   std::complex<double> CpconjVWpHpAh() const;
   double CpconjVWpHphh() const;
   double CpconjVWpVPHp() const;
   double CpconjVWpVWphh() const;
   double CpconjVWpVZHp() const;
   double CpconjVWpbargPgWp() const;
   double CpconjVWpbargWpCgP() const;
   double CpconjVWpbargWpCgZ() const;
   double CpconjVWpbargZgWp() const;
   double CpVWpconjVWpAhAh() const;
   double CpVWpconjVWphhhh() const;
   double CpVWpconjVWpconjHpHp() const;
   double CpconjVWpVWpVP() const;
   double CpconjVWpVZVWp() const;
   std::complex<double> CpconjVWpbarFdFuPL(unsigned gI1, unsigned gI2) const;
   double CpconjVWpbarFdFuPR(unsigned , unsigned ) const;
   std::complex<double> CpconjVWpbarFeFvPL(unsigned gI1, unsigned gI2) const;
   double CpconjVWpbarFeFvPR(unsigned , unsigned ) const;
   double CpVWpconjVWpVPVP1() const;
   double CpVWpconjVWpVPVP2() const;
   double CpVWpconjVWpVPVP3() const;
   double CpVWpconjVWpVZVZ1() const;
   double CpVWpconjVWpVZVZ2() const;
   double CpVWpconjVWpVZVZ3() const;
   double CpVWpconjVWpconjVWpVWp1() const;
   double CpVWpconjVWpconjVWpVWp2() const;
   double CpVWpconjVWpconjVWpVWp3() const;
   std::complex<double> CpbarUFdFdAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFdFdAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFdhhFdPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFdhhFdPR(unsigned gO1, unsigned gI2) const;
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
   std::complex<double> CpbarUFuFuAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFuFuAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFuhhFuPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFuhhFuPR(unsigned gO1, unsigned gI2) const;
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
   std::complex<double> CpbarUFeFeAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarUFeFeAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarUFehhFePL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFehhFePR(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePR(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarUFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarUFeconjHpFvPL(unsigned gO2, unsigned gI2) const;
   double CpbarUFeconjHpFvPR(unsigned , unsigned ) const;
   double CpbarUFeconjVWpFvPR(unsigned , unsigned ) const;
   double CpbarUFeconjVWpFvPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFdFdAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFdFdAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarFdhhFdPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFdhhFdPR(unsigned gO1, unsigned gI2) const;
   double CpbarFdVZFdPR(unsigned gO2, unsigned gI2) const;
   double CpbarFdVZFdPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFdconjHpFuPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFdconjHpFuPR(unsigned gO1, unsigned gI2) const;
   double CpbarFdconjVWpFuPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFdconjVWpFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFeFeAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFeFeAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarFehhFePL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFehhFePR(unsigned gO1, unsigned gI2) const;
   double CpbarFeVZFePR(unsigned gO2, unsigned gI2) const;
   double CpbarFeVZFePL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFeconjHpFvPL(unsigned gO2, unsigned gI2) const;
   double CpbarFeconjHpFvPR(unsigned , unsigned ) const;
   double CpbarFeconjVWpFvPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFeconjVWpFvPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFuFuAhPL(unsigned gO2, unsigned gI1) const;
   std::complex<double> CpbarFuFuAhPR(unsigned gO1, unsigned gI1) const;
   std::complex<double> CpbarFuhhFuPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFuhhFuPR(unsigned gO1, unsigned gI2) const;
   std::complex<double> CpbarFuHpFdPL(unsigned gO2, unsigned gI2) const;
   std::complex<double> CpbarFuHpFdPR(unsigned gO1, unsigned gI2) const;
   double CpbarFuVPFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVPFuPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuVWpFdPR(unsigned , unsigned ) const;
   std::complex<double> CpbarFuVWpFdPL(unsigned gO1, unsigned gI2) const;
   double CpbarFuVZFuPR(unsigned gO2, unsigned gI2) const;
   double CpbarFuVZFuPL(unsigned gO1, unsigned gI2) const;
   std::complex<double> self_energy_Hp(double p ) const;
   std::complex<double> self_energy_Ah(double p ) const;
   std::complex<double> self_energy_hh(double p ) const;
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
   std::complex<double> tadpole_hh() const;

   /// calculates the tadpoles at current loop order
   void tadpole_equations(double[number_of_ewsb_equations]) const;

   void self_energy_hh_2loop(double result[1]) const;

   void calculate_MVG_pole();
   void calculate_MFv_pole();
   void calculate_Mhh_pole();
   void calculate_MVP_pole();
   void calculate_MVZ_pole();
   void calculate_MFd_pole();
   void calculate_MFu_pole();
   void calculate_MFe_pole();
   void calculate_MVWp_pole();
   double calculate_MVWp_pole(double);
   double calculate_MVZ_pole(double);

   double calculate_MFv_DRbar(double, int) const;
   double calculate_MFe_DRbar(double, int) const;
   double calculate_MFu_DRbar(double, int) const;
   double calculate_MFd_DRbar(double, int) const;
   double calculate_MVP_DRbar(double);
   double calculate_MVZ_DRbar(double);
   double calculate_MVWp_DRbar(double);
   double calculate_Mhh_DRbar(double);

   double ThetaW() const;

private:

   static const int numberOfParameters = 33;

   struct Beta_traces {
      double traceYdAdjYd;
      double traceYeAdjYe;
      double traceYuAdjYu;
      double traceYdAdjYdYdAdjYd;
      double traceYeAdjYeYeAdjYe;
      double traceYuAdjYuYuAdjYu;
      double traceYdAdjYuYuAdjYd;
      double traceYdAdjYdYdAdjYdYdAdjYd;
      double traceYdAdjYdYdAdjYuYuAdjYd;
      double traceYdAdjYuYuAdjYdYdAdjYd;
      double traceYdAdjYuYuAdjYuYuAdjYd;
      double traceYeAdjYeYeAdjYeYeAdjYe;
      double traceYuAdjYuYuAdjYuYuAdjYu;
   };
   void calc_beta_traces(Beta_traces&) const;

   double calc_beta_g1_one_loop(const Beta_traces&) const;
   double calc_beta_g1_two_loop(const Beta_traces&) const;
   double calc_beta_g1_three_loop(const Beta_traces&) const;
   double calc_beta_g2_one_loop(const Beta_traces&) const;
   double calc_beta_g2_two_loop(const Beta_traces&) const;
   double calc_beta_g2_three_loop(const Beta_traces&) const;
   double calc_beta_g3_one_loop(const Beta_traces&) const;
   double calc_beta_g3_two_loop(const Beta_traces&) const;
   double calc_beta_g3_three_loop(const Beta_traces&) const;
   double calc_beta_Lambdax_one_loop(const Beta_traces&) const;
   double calc_beta_Lambdax_two_loop(const Beta_traces&) const;
   double calc_beta_Lambdax_three_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yu_one_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yu_two_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yu_three_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yd_one_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yd_two_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Yd_three_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Ye_one_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Ye_two_loop(const Beta_traces&) const;
   Eigen::Matrix<double,3,3> calc_beta_Ye_three_loop(const Beta_traces&) const;
   double calc_beta_mu2_one_loop(const Beta_traces&) const;
   double calc_beta_mu2_two_loop(const Beta_traces&) const;
   double calc_beta_mu2_three_loop(const Beta_traces&) const;
   double calc_beta_v_one_loop(const Beta_traces&) const;
   double calc_beta_v_two_loop(const Beta_traces&) const;
   double calc_beta_v_three_loop(const Beta_traces&) const;

   struct EWSB_args {
      Standard_model* model;
      unsigned ewsb_loop_order;
   };

#ifdef ENABLE_THREADS
   struct Thread {
      typedef void(Standard_model::*Memfun_t)();
      Standard_model* model;
      Memfun_t fun;

      Thread(Standard_model* model_, Memfun_t fun_)
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
   bool force_output;             ///< switch to force output of pole masses
   double precision;              ///< RG running precision
   double ewsb_iteration_precision;
   Standard_model_physical physical; ///< contains the pole masses and mixings
   Problems<standard_model_info::NUMBER_OF_PARTICLES> problems;
   Two_loop_corrections two_loop_corrections; ///< used 2-loop corrections
   softsusy::QedQcd qedqcd;
   Physical_input input;
#ifdef ENABLE_THREADS
   std::exception_ptr thread_exception;
   static std::mutex mtx_fortran; /// locks fortran functions
#endif

   int solve_ewsb_iteratively();
   int solve_ewsb_iteratively(unsigned);
   int solve_ewsb_iteratively_with(EWSB_solver*, const double[number_of_ewsb_equations]);
   void ewsb_initial_guess(double[number_of_ewsb_equations]);
   int ewsb_step(double[number_of_ewsb_equations]) const;
   static int ewsb_step(const gsl_vector*, void*, gsl_vector*);
   static int tadpole_equations(const gsl_vector*, void*, gsl_vector*);
   void copy_DRbar_masses_to_pole_masses();

   void initial_guess_for_parameters();
   void calculate_Yu_DRbar();
   void calculate_Yd_DRbar();
   void calculate_Ye_DRbar();
   void calculate_Lambdax_DRbar();
   double calculate_delta_alpha_em(double alphaEm) const;
   double calculate_delta_alpha_s(double alphaS) const;
   double calculate_theta_w(double alpha_em_drbar);
   void recalculate_mw_pole();
   bool check_convergence(const Standard_model& old) const;

   // Passarino-Veltman loop functions
   double A0(double) const;
   double B0(double, double, double) const;
   double B1(double, double, double) const;
   double B00(double, double, double) const;
   double B22(double, double, double) const;
   double H0(double, double, double) const;
   double F0(double, double, double) const;
   double G0(double, double, double) const;

   // Running parameters
   double g1;
   double g2;
   double g3;
   double Lambdax;
   Eigen::Matrix<double,3,3> Yu;
   Eigen::Matrix<double,3,3> Yd;
   Eigen::Matrix<double,3,3> Ye;
   double mu2;
   double v;

   // DR-bar masses
   double MVG;
   double MHp;
   Eigen::Array<double,3,1> MFv;
   double MAh;
   double Mhh;
   double MVP;
   double MVZ;
   Eigen::Array<double,3,1> MFd;
   Eigen::Array<double,3,1> MFu;
   Eigen::Array<double,3,1> MFe;
   double MVWp;
   Eigen::Array<double,2,1> MVPVZ;

   // DR-bar mixing matrices
   Eigen::Matrix<std::complex<double>,3,3> Vd;
   Eigen::Matrix<std::complex<double>,3,3> Ud;
   Eigen::Matrix<std::complex<double>,3,3> Vu;
   Eigen::Matrix<std::complex<double>,3,3> Uu;
   Eigen::Matrix<std::complex<double>,3,3> Ve;
   Eigen::Matrix<std::complex<double>,3,3> Ue;
   Eigen::Matrix<double,2,2> ZZ;


};

std::ostream& operator<<(std::ostream&, const Standard_model&);

} // namespace standard_model

} // namespace flexiblesusy

#endif
