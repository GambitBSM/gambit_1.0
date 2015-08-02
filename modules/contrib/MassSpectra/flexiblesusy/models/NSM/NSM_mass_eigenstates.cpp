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
 * @file NSM_mass_eigenstates.cpp
 * @brief implementation of the NSM model class
 *
 * Contains the definition of the NSM model class methods
 * which solve EWSB and calculate pole masses and mixings from DRbar
 * parameters.
 *
 * This file was generated at Mon 1 Jun 2015 12:43:06 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#include "NSM_mass_eigenstates.hpp"
#include "eigen_utils.hpp"
#include "wrappers.hpp"
#include "linalg2.hpp"
#include "numerics2.hpp"
#include "logger.hpp"
#include "error.hpp"
#include "root_finder.hpp"
#include "fixed_point_iterator.hpp"
#include "gsl_utils.hpp"
#include "config.h"
#include "pv.hpp"
#include "functors.hpp"



#include <cmath>
#include <iostream>
#include <algorithm>

#ifdef ENABLE_THREADS
#include <thread>
#endif

#include <gsl/gsl_multiroots.h>

namespace flexiblesusy {

using namespace NSM_info;

#define CLASSNAME NSM_mass_eigenstates

#define PHYSICAL(parameter) physical.parameter
#define INPUT(parameter) model->get_input().parameter
#define LOCALINPUT(parameter) input.parameter
#define MODELPARAMETER(parameter) model->get_##parameter()

#define HIGGS_2LOOP_CORRECTION_AT_AS     two_loop_corrections.higgs_at_as
#define HIGGS_2LOOP_CORRECTION_AB_AS     two_loop_corrections.higgs_ab_as
#define HIGGS_2LOOP_CORRECTION_AT_AT     two_loop_corrections.higgs_at_at
#define HIGGS_2LOOP_CORRECTION_ATAU_ATAU two_loop_corrections.higgs_atau_atau
#define TOP_2LOOP_CORRECTION_QCD         two_loop_corrections.top_qcd

#ifdef ENABLE_THREADS
   std::mutex CLASSNAME::mtx_fortran;
   #define LOCK_MUTEX() mtx_fortran.lock()
   #define UNLOCK_MUTEX() mtx_fortran.unlock()
#else
   #define LOCK_MUTEX()
   #define UNLOCK_MUTEX()
#endif

CLASSNAME::NSM_mass_eigenstates(const NSM_input_parameters& input_)
   : NSM_soft_parameters(input_)
   , number_of_ewsb_iterations(100)
   , number_of_mass_iterations(20)
   , ewsb_loop_order(2)
   , pole_mass_loop_order(2)
   , calculate_sm_pole_masses(false)
   , force_output(false)
   , precision(1.0e-3)
   , ewsb_iteration_precision(1.0e-5)
   , physical()
   , problems(NSM_info::particle_names)
   , two_loop_corrections()
#ifdef ENABLE_THREADS
   , thread_exception()
#endif
   , MVG(0), MHp(0), MFv(Eigen::Array<double,3,1>::Zero()), MAh(0), MVP(0), MVZ
      (0), MFd(Eigen::Array<double,3,1>::Zero()), MFu(Eigen::Array<double,3,1>
      ::Zero()), MFe(Eigen::Array<double,3,1>::Zero()), Mhh(Eigen::Array<double,2,
      1>::Zero()), MVWp(0)

   , Vd(Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ud(Eigen::Matrix<
      std::complex<double>,3,3>::Zero()), Vu(Eigen::Matrix<std::complex<double>,3,
      3>::Zero()), Uu(Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ve(
      Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ue(Eigen::Matrix<
      std::complex<double>,3,3>::Zero()), ZH(Eigen::Matrix<double,2,2>::Zero())


{
}

CLASSNAME::~NSM_mass_eigenstates()
{
}

void CLASSNAME::do_calculate_sm_pole_masses(bool flag)
{
   calculate_sm_pole_masses = flag;
}

bool CLASSNAME::do_calculate_sm_pole_masses() const
{
   return calculate_sm_pole_masses;
}

void CLASSNAME::do_force_output(bool flag)
{
   force_output = flag;
}

bool CLASSNAME::do_force_output() const
{
   return force_output;
}

void CLASSNAME::set_ewsb_loop_order(unsigned loop_order)
{
   ewsb_loop_order = loop_order;
}

void CLASSNAME::set_two_loop_corrections(const Two_loop_corrections& two_loop_corrections_)
{
   two_loop_corrections = two_loop_corrections_;
}

void CLASSNAME::set_number_of_ewsb_iterations(std::size_t iterations)
{
   number_of_ewsb_iterations = iterations;
}

void CLASSNAME::set_number_of_mass_iterations(std::size_t iterations)
{
   number_of_mass_iterations = iterations;
}

void CLASSNAME::set_precision(double precision_)
{
   precision = precision_;
   ewsb_iteration_precision = precision_;
}

void CLASSNAME::set_pole_mass_loop_order(unsigned loop_order)
{
   pole_mass_loop_order = loop_order;
}

void CLASSNAME::set_ewsb_iteration_precision(double precision)
{
   ewsb_iteration_precision = precision;
}

double CLASSNAME::get_ewsb_iteration_precision() const
{
   return ewsb_iteration_precision;
}

double CLASSNAME::get_ewsb_loop_order() const
{
   return ewsb_loop_order;
}

const NSM_physical& CLASSNAME::get_physical() const
{
   return physical;
}

NSM_physical& CLASSNAME::get_physical()
{
   return physical;
}

void CLASSNAME::set_physical(const NSM_physical& physical_)
{
   physical = physical_;
}

const Problems<NSM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems() const
{
   return problems;
}

Problems<NSM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems()
{
   return problems;
}

/**
 * Method which calculates the tadpoles at the current loop order.
 *
 * @param tadpole array of tadpole
 */
void CLASSNAME::tadpole_equations(double tadpole[number_of_ewsb_equations]) const
{
   tadpole[0] = get_ewsb_eq_hh_1();
   tadpole[1] = get_ewsb_eq_hh_2();

   if (ewsb_loop_order > 0) {
      tadpole[0] -= Re(tadpole_hh(0));
      tadpole[1] -= Re(tadpole_hh(1));

      if (ewsb_loop_order > 1) {

      }
   }
}

/**
 * Method which calculates the tadpoles at loop order specified in the
 * pointer to the CLASSNAME::EWSB_args struct.
 *
 * @param x GSL vector of EWSB output parameters
 * @param params pointer to CLASSNAME::EWSB_args struct
 * @param f GSL vector with tadpoles
 *
 * @return GSL_EDOM if x contains Nans, GSL_SUCCESS otherwise.
 */
int CLASSNAME::tadpole_equations(const gsl_vector* x, void* params, gsl_vector* f)
{
   if (!is_finite(x)) {
      gsl_vector_set_all(f, std::numeric_limits<double>::max());
      return GSL_EDOM;
   }

   const CLASSNAME::EWSB_args* ewsb_args
      = static_cast<CLASSNAME::EWSB_args*>(params);
   NSM_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   model->set_mH2(gsl_vector_get(x, 0));
   model->set_mS2(gsl_vector_get(x, 1));


   if (ewsb_loop_order > 0)
      model->calculate_DRbar_masses();

   double tadpole[number_of_ewsb_equations] = { 0. };

   model->tadpole_equations(tadpole);

   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      gsl_vector_set(f, i, tadpole[i]);

   return is_finite<number_of_ewsb_equations>(tadpole) ? GSL_SUCCESS : GSL_EDOM;
}

/**
 * This method solves the EWSB conditions iteratively, trying several
 * root finding methods until a solution is found.
 */
int CLASSNAME::solve_ewsb_iteratively()
{
   EWSB_args params = {this, ewsb_loop_order};

   EWSB_solver* solvers[] = {
      new Fixed_point_iterator<number_of_ewsb_equations, fixed_point_iterator::Convergence_tester_relative>(CLASSNAME::ewsb_step, &params, number_of_ewsb_iterations, ewsb_iteration_precision),
      new Root_finder<number_of_ewsb_equations>(CLASSNAME::tadpole_equations, &params, number_of_ewsb_iterations, ewsb_iteration_precision, gsl_multiroot_fsolver_hybrids),
      new Root_finder<number_of_ewsb_equations>(CLASSNAME::tadpole_equations, &params, number_of_ewsb_iterations, ewsb_iteration_precision, gsl_multiroot_fsolver_broyden)
   };

   const std::size_t number_of_solvers = sizeof(solvers)/sizeof(*solvers);
   double x_init[number_of_ewsb_equations] = { 0. };
   ewsb_initial_guess(x_init);

#ifdef ENABLE_VERBOSE
   std::cout << "Solving EWSB equations ...\n"
      "\tInitial guess: x_init =";
   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      std::cout << ' ' << x_init[i];
   std::cout << '\n';
#endif

   int status;
   for (std::size_t i = 0; i < number_of_solvers; ++i) {
      VERBOSE_MSG("\tStarting EWSB iteration using solver " << i);
      status = solve_ewsb_iteratively_with(solvers[i], x_init);
      if (status == EWSB_solver::SUCCESS) {
         VERBOSE_MSG("\tSolver " << i << " finished successfully!");
         break;
      }
#ifdef ENABLE_VERBOSE
      else {
         WARNING("\tSolver " << i << " could not find a solution!"
                 " (requested precision: " << ewsb_iteration_precision << ")");
      }
#endif
   }

   if (status == EWSB_solver::SUCCESS) {
      problems.unflag_no_ewsb();
   } else {
      problems.flag_no_ewsb();
#ifdef ENABLE_VERBOSE
      WARNING("\tCould not find a solution to the EWSB equations!"
              " (requested precision: " << ewsb_iteration_precision << ")");
#endif
   }

   for_each(solvers, solvers + number_of_solvers, Delete_object());

   return status;
}

/**
 * Solves EWSB equations with given EWSB solver
 *
 * @param solver EWSB solver
 * @param x_init initial values
 *
 * @return status of the EWSB solver
 */
int CLASSNAME::solve_ewsb_iteratively_with(
   EWSB_solver* solver,
   const double x_init[number_of_ewsb_equations]
)
{
   const int status = solver->solve(x_init);

   mH2 = solver->get_solution(0);
   mS2 = solver->get_solution(1);


   return status;
}

int CLASSNAME::solve_ewsb_iteratively(unsigned loop_order)
{
   // temporarily set `ewsb_loop_order' to `loop_order' and do
   // iteration
   const unsigned old_loop_order = ewsb_loop_order;
   ewsb_loop_order = loop_order;
   const int status = solve_ewsb_iteratively();
   ewsb_loop_order = old_loop_order;
   return status;
}


int CLASSNAME::solve_ewsb_tree_level()
{
   int error = 0;

   const double old_mH2 = mH2;
   const double old_mS2 = mS2;

   mH2 = Re((Power(vH,3)*Lambda1 + vH*vS*Lambda4 + vH*Lambda3*Sqr(vS))/vH);
   mS2 = Re((0.25*(8*Power(vS,3)*Lambda2 + 2*vS*Lambda3*Sqr(vH) + Lambda4*Sqr(
      vH) + 6*Lambda5*Sqr(vS)))/vS);

   const bool is_finite = IsFinite(mH2) && IsFinite(mS2);

   if (!is_finite) {
      mH2 = old_mH2;
      mS2 = old_mS2;
      error = 1;
   }


   return error;
}

int CLASSNAME::solve_ewsb_tree_level_via_soft_higgs_masses()
{
   int error = 0;



   return error;
}

int CLASSNAME::solve_ewsb_one_loop()
{
   return solve_ewsb_iteratively(1);
}

int CLASSNAME::solve_ewsb()
{
   VERBOSE_MSG("\tSolving EWSB at " << ewsb_loop_order << "-loop order");

   if (ewsb_loop_order == 0)
      return solve_ewsb_tree_level();

   return solve_ewsb_iteratively(ewsb_loop_order);
}

void CLASSNAME::ewsb_initial_guess(double x_init[number_of_ewsb_equations])
{
   x_init[0] = mH2;
   x_init[1] = mS2;

}

/**
 * Calculates EWSB output parameters including loop-corrections.
 *
 * @param ewsb_parameters new EWSB output parameters.  \a
 * ewsb_parameters is only modified if all new parameters are finite.
 *
 * @return GSL_SUCCESS if new EWSB output parameters are finite,
 * GSL_EDOM otherwise.
 */
int CLASSNAME::ewsb_step(double ewsb_parameters[number_of_ewsb_equations]) const
{
   int error;
   double tadpole[number_of_ewsb_equations] = { 0. };

   if (ewsb_loop_order > 0) {
      tadpole[0] += Re(tadpole_hh(0));
      tadpole[1] += Re(tadpole_hh(1));

      if (ewsb_loop_order > 1) {

      }
   }

   double mH2;
   double mS2;

   mH2 = Re((Power(vH,3)*Lambda1 + vH*vS*Lambda4 + tadpole[0] + vH*Lambda3*Sqr(
      vS))/vH);
   mS2 = Re((0.25*(8*Power(vS,3)*Lambda2 + 2*tadpole[1] + 2*vS*Lambda3*Sqr(vH)
      + Lambda4*Sqr(vH) + 6*Lambda5*Sqr(vS)))/vS);

   const bool is_finite = IsFinite(mH2) && IsFinite(mS2);


   if (is_finite) {
      error = GSL_SUCCESS;
      ewsb_parameters[0] = mH2;
      ewsb_parameters[1] = mS2;

   } else {
      error = GSL_EDOM;
   }

   return error;
}

/**
 * Calculates EWSB output parameters including loop-corrections.
 *
 * @param x old EWSB output parameters
 * @param params further function parameters
 * @param f new EWSB output parameters
 *
 * @return Returns status of CLASSNAME::ewsb_step
 */
int CLASSNAME::ewsb_step(const gsl_vector* x, void* params, gsl_vector* f)
{
   if (!is_finite(x)) {
      gsl_vector_set_all(f, std::numeric_limits<double>::max());
      return GSL_EDOM;
   }

   const CLASSNAME::EWSB_args* ewsb_args
      = static_cast<CLASSNAME::EWSB_args*>(params);
   NSM_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   const double mH2 = gsl_vector_get(x, 0);
   const double mS2 = gsl_vector_get(x, 1);

   model->set_mH2(mH2);
   model->set_mS2(mS2);


   if (ewsb_loop_order > 0)
      model->calculate_DRbar_masses();

   double ewsb_parameters[number_of_ewsb_equations] =
      { mH2, mS2 };

   const int status = model->ewsb_step(ewsb_parameters);

   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      gsl_vector_set(f, i, ewsb_parameters[i]);

   return status;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   ostr << "========================================\n"
           "NSM\n"
           "========================================\n";
   NSM_soft_parameters::print(ostr);
   ostr << "----------------------------------------\n"
           "tree-level DRbar masses:\n"
           "----------------------------------------\n";
   ostr << "MVG = " << MVG << '\n';
   ostr << "MHp = " << MHp << '\n';
   ostr << "MFv = " << MFv.transpose() << '\n';
   ostr << "MAh = " << MAh << '\n';
   ostr << "MVP = " << MVP << '\n';
   ostr << "MVZ = " << MVZ << '\n';
   ostr << "MFd = " << MFd.transpose() << '\n';
   ostr << "MFu = " << MFu.transpose() << '\n';
   ostr << "MFe = " << MFe.transpose() << '\n';
   ostr << "Mhh = " << Mhh.transpose() << '\n';
   ostr << "MVWp = " << MVWp << '\n';

   ostr << "----------------------------------------\n"
           "tree-level DRbar mixing matrices:\n"
           "----------------------------------------\n";
   ostr << "Vd = " << Vd << '\n';
   ostr << "Ud = " << Ud << '\n';
   ostr << "Vu = " << Vu << '\n';
   ostr << "Uu = " << Uu << '\n';
   ostr << "Ve = " << Ve << '\n';
   ostr << "Ue = " << Ue << '\n';
   ostr << "ZH = " << ZH << '\n';

   physical.print(ostr);
}

/**
 * wrapper routines for passarino Veltman functions
 */

double CLASSNAME::A0(double m) const
{
   return passarino_veltman::ReA0(m*m, Sqr(get_scale()));
}

double CLASSNAME::B0(double p, double m1, double m2) const
{
   return passarino_veltman::ReB0(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::B1(double p, double m1, double m2) const
{
   return passarino_veltman::ReB1(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::B00(double p, double m1, double m2) const
{
   return passarino_veltman::ReB00(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::B22(double p, double m1, double m2) const
{
   return passarino_veltman::ReB22(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::H0(double p, double m1, double m2) const
{
   return passarino_veltman::ReH0(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::F0(double p, double m1, double m2) const
{
   return passarino_veltman::ReF0(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

double CLASSNAME::G0(double p, double m1, double m2) const
{
   return passarino_veltman::ReG0(p*p, m1*m1, m2*m2, Sqr(get_scale()));
}

/**
 * routine which finds the DRbar mass eigenstates and mixings.
 */
void CLASSNAME::calculate_DRbar_masses()
{
   const auto old_mH2 = mH2;
   const auto old_mS2 = mS2;

   solve_ewsb_tree_level();

   calculate_MVG();
   calculate_MVP();
   calculate_MVZ();
   calculate_MVWp();
   calculate_MHp();
   calculate_MFv();
   calculate_MAh();
   calculate_MFd();
   calculate_MFu();
   calculate_MFe();
   calculate_Mhh();

   mH2 = old_mH2;
   mS2 = old_mS2;

}

/**
 * Backward compatibility routine which finds the DRbar mass
 * eigenstates and mixings.
 */
void CLASSNAME::calculate_DRbar_parameters()
{
   calculate_DRbar_masses();
}

/**
 * routine which finds the pole mass eigenstates and mixings.
 */
void CLASSNAME::calculate_pole_masses()
{
#ifdef ENABLE_THREADS
   thread_exception = 0;

   std::thread thread_Mhh(Thread(this, &CLASSNAME::calculate_Mhh_pole));

   if (calculate_sm_pole_masses) {
      std::thread thread_MVG(Thread(this, &CLASSNAME::calculate_MVG_pole));
      std::thread thread_MFv(Thread(this, &CLASSNAME::calculate_MFv_pole));
      std::thread thread_MVP(Thread(this, &CLASSNAME::calculate_MVP_pole));
      std::thread thread_MVZ(Thread(this, &CLASSNAME::calculate_MVZ_pole));
      std::thread thread_MFd(Thread(this, &CLASSNAME::calculate_MFd_pole));
      std::thread thread_MFu(Thread(this, &CLASSNAME::calculate_MFu_pole));
      std::thread thread_MFe(Thread(this, &CLASSNAME::calculate_MFe_pole));
      std::thread thread_MVWp(Thread(this, &CLASSNAME::calculate_MVWp_pole));
      thread_MVG.join();
      thread_MFv.join();
      thread_MVP.join();
      thread_MVZ.join();
      thread_MFd.join();
      thread_MFu.join();
      thread_MFe.join();
      thread_MVWp.join();
   }

   thread_Mhh.join();


   if (thread_exception != 0)
      std::rethrow_exception(thread_exception);
#else
   calculate_Mhh_pole();

   if (calculate_sm_pole_masses) {
      calculate_MVG_pole();
      calculate_MFv_pole();
      calculate_MVP_pole();
      calculate_MVZ_pole();
      calculate_MFd_pole();
      calculate_MFu_pole();
      calculate_MFe_pole();
      calculate_MVWp_pole();
   }

#endif
}

void CLASSNAME::copy_DRbar_masses_to_pole_masses()
{
   PHYSICAL(MVG) = MVG;
   PHYSICAL(MHp) = MHp;
   PHYSICAL(MFv) = MFv;
   PHYSICAL(MAh) = MAh;
   PHYSICAL(MVP) = MVP;
   PHYSICAL(MVZ) = MVZ;
   PHYSICAL(MFd) = MFd;
   PHYSICAL(Vd) = Vd;
   PHYSICAL(Ud) = Ud;
   PHYSICAL(MFu) = MFu;
   PHYSICAL(Vu) = Vu;
   PHYSICAL(Uu) = Uu;
   PHYSICAL(MFe) = MFe;
   PHYSICAL(Ve) = Ve;
   PHYSICAL(Ue) = Ue;
   PHYSICAL(Mhh) = Mhh;
   PHYSICAL(ZH) = ZH;
   PHYSICAL(MVWp) = MVWp;

}

/**
 * reorders DRbar masses so that golstones are placed at the index
 * specified in the model files definition of the associuated
 * gauge boson (see Z-boson definition in default particles.m file
 * in the Models directory of your SARAH distribution for example)
 */
void CLASSNAME::reorder_DRbar_masses()
{

}

/**
 * reorders pole masses so that golstones are placed at the index
 * specified in the model files definition of the associated
 * gauge boson (see Z-boson definition in default particles.m file
 * in the Models directory of your SARAH distribution for example)
 */
void CLASSNAME::reorder_pole_masses()
{

}
/**
 * calculates spectrum for model once the DRbar parameters at
 * at low energies are known
 */
void CLASSNAME::calculate_spectrum()
{
   calculate_DRbar_masses();
   if (pole_mass_loop_order > 0)
      calculate_pole_masses();

   // move goldstone bosons to the front
   reorder_DRbar_masses();
   if (pole_mass_loop_order == 0)
      copy_DRbar_masses_to_pole_masses();
   else
      reorder_pole_masses();

   if (problems.have_problem() && !force_output) {
      clear_DRbar_parameters();
      physical.clear();
   }
}

void CLASSNAME::clear_DRbar_parameters()
{
   MVG = 0.;
   MHp = 0.;
   MFv = Eigen::Matrix<double,3,1>::Zero();
   MAh = 0.;
   MVP = 0.;
   MVZ = 0.;
   MFd = Eigen::Matrix<double,3,1>::Zero();
   Vd = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Ud = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFu = Eigen::Matrix<double,3,1>::Zero();
   Vu = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Uu = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFe = Eigen::Matrix<double,3,1>::Zero();
   Ve = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Ue = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Mhh = Eigen::Matrix<double,2,1>::Zero();
   ZH = Eigen::Matrix<double,2,2>::Zero();
   MVWp = 0.;


}

void CLASSNAME::clear_problems()
{
   problems.unflag_all_tachyons();
}

void CLASSNAME::clear()
{
   NSM_soft_parameters::clear();
   clear_DRbar_parameters();
   physical.clear();
   problems.clear();
}

std::string CLASSNAME::name() const
{
   return "NSM";
}

void CLASSNAME::run_to(double scale, double eps)
{
   if (eps < 0.0)
      eps = precision;
   NSM_soft_parameters::run_to(scale, eps);
}







double CLASSNAME::get_mass_matrix_VG() const
{
   const double mass_matrix_VG = Re(0);

   return mass_matrix_VG;
}

void CLASSNAME::calculate_MVG()
{
   const auto mass_matrix_VG = get_mass_matrix_VG();
   MVG = calculate_singlet_mass(mass_matrix_VG);
}

double CLASSNAME::get_mass_matrix_Hp() const
{
   const double mass_matrix_Hp = Re(mH2 - vS*Lambda4 - Lambda1*Sqr(vH) +
      0.25*Sqr(g2)*Sqr(vH) - Lambda3*Sqr(vS));

   return mass_matrix_Hp;
}

void CLASSNAME::calculate_MHp()
{
   const auto mass_matrix_Hp = get_mass_matrix_Hp();
   MHp = calculate_singlet_mass(mass_matrix_Hp);

   if (MHp < 0.)
      problems.flag_tachyon(NSM_info::Hp);

   MHp = AbsSqrt(MHp);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fv() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fv;

   mass_matrix_Fv(0,0) = 0;
   mass_matrix_Fv(0,1) = 0;
   mass_matrix_Fv(0,2) = 0;
   mass_matrix_Fv(1,1) = 0;
   mass_matrix_Fv(1,2) = 0;
   mass_matrix_Fv(2,2) = 0;

   Symmetrize(mass_matrix_Fv);

   return mass_matrix_Fv;
}

void CLASSNAME::calculate_MFv()
{
   MFv.setConstant(0);
}

double CLASSNAME::get_mass_matrix_Ah() const
{
   const double mass_matrix_Ah = Re(mH2 - vS*Lambda4 - Lambda1*Sqr(vH) -
      Lambda3*Sqr(vS) + 0.25*Sqr(vH)*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW())));

   return mass_matrix_Ah;
}

void CLASSNAME::calculate_MAh()
{
   const auto mass_matrix_Ah = get_mass_matrix_Ah();
   MAh = calculate_singlet_mass(mass_matrix_Ah);

   if (MAh < 0.)
      problems.flag_tachyon(NSM_info::Ah);

   MAh = AbsSqrt(MAh);
}

double CLASSNAME::get_mass_matrix_VP() const
{
   const double mass_matrix_VP = Re(0);

   return mass_matrix_VP;
}

void CLASSNAME::calculate_MVP()
{
   const auto mass_matrix_VP = get_mass_matrix_VP();
   MVP = calculate_singlet_mass(mass_matrix_VP);
}

double CLASSNAME::get_mass_matrix_VZ() const
{
   const double mass_matrix_VZ = Re(0.25*Sqr(vH)*Sqr(g2*Cos(ThetaW()) +
      g1*Sin(ThetaW())));

   return mass_matrix_VZ;
}

void CLASSNAME::calculate_MVZ()
{
   const auto mass_matrix_VZ = get_mass_matrix_VZ();
   MVZ = calculate_singlet_mass(mass_matrix_VZ);

   if (MVZ < 0.)
      problems.flag_tachyon(NSM_info::VZ);

   MVZ = AbsSqrt(MVZ);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fd() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fd;

   mass_matrix_Fd(0,0) = -0.7071067811865475*vH*Yd(0,0);
   mass_matrix_Fd(0,1) = -0.7071067811865475*vH*Yd(1,0);
   mass_matrix_Fd(0,2) = -0.7071067811865475*vH*Yd(2,0);
   mass_matrix_Fd(1,0) = -0.7071067811865475*vH*Yd(0,1);
   mass_matrix_Fd(1,1) = -0.7071067811865475*vH*Yd(1,1);
   mass_matrix_Fd(1,2) = -0.7071067811865475*vH*Yd(2,1);
   mass_matrix_Fd(2,0) = -0.7071067811865475*vH*Yd(0,2);
   mass_matrix_Fd(2,1) = -0.7071067811865475*vH*Yd(1,2);
   mass_matrix_Fd(2,2) = -0.7071067811865475*vH*Yd(2,2);

   return mass_matrix_Fd;
}

void CLASSNAME::calculate_MFd()
{
   const auto mass_matrix_Fd(get_mass_matrix_Fd());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fd, MFd, Vd, Ud, eigenvalue_error);
   problems.flag_bad_mass(NSM_info::Fd, eigenvalue_error > precision *
      Abs(MFd(0)));
#else
   fs_svd(mass_matrix_Fd, MFd, Vd, Ud);
#endif
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fu() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fu;

   mass_matrix_Fu(0,0) = 0.7071067811865475*vH*Yu(0,0);
   mass_matrix_Fu(0,1) = 0.7071067811865475*vH*Yu(1,0);
   mass_matrix_Fu(0,2) = 0.7071067811865475*vH*Yu(2,0);
   mass_matrix_Fu(1,0) = 0.7071067811865475*vH*Yu(0,1);
   mass_matrix_Fu(1,1) = 0.7071067811865475*vH*Yu(1,1);
   mass_matrix_Fu(1,2) = 0.7071067811865475*vH*Yu(2,1);
   mass_matrix_Fu(2,0) = 0.7071067811865475*vH*Yu(0,2);
   mass_matrix_Fu(2,1) = 0.7071067811865475*vH*Yu(1,2);
   mass_matrix_Fu(2,2) = 0.7071067811865475*vH*Yu(2,2);

   return mass_matrix_Fu;
}

void CLASSNAME::calculate_MFu()
{
   const auto mass_matrix_Fu(get_mass_matrix_Fu());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fu, MFu, Vu, Uu, eigenvalue_error);
   problems.flag_bad_mass(NSM_info::Fu, eigenvalue_error > precision *
      Abs(MFu(0)));
#else
   fs_svd(mass_matrix_Fu, MFu, Vu, Uu);
#endif
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fe() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fe;

   mass_matrix_Fe(0,0) = -0.7071067811865475*vH*Ye(0,0);
   mass_matrix_Fe(0,1) = -0.7071067811865475*vH*Ye(1,0);
   mass_matrix_Fe(0,2) = -0.7071067811865475*vH*Ye(2,0);
   mass_matrix_Fe(1,0) = -0.7071067811865475*vH*Ye(0,1);
   mass_matrix_Fe(1,1) = -0.7071067811865475*vH*Ye(1,1);
   mass_matrix_Fe(1,2) = -0.7071067811865475*vH*Ye(2,1);
   mass_matrix_Fe(2,0) = -0.7071067811865475*vH*Ye(0,2);
   mass_matrix_Fe(2,1) = -0.7071067811865475*vH*Ye(1,2);
   mass_matrix_Fe(2,2) = -0.7071067811865475*vH*Ye(2,2);

   return mass_matrix_Fe;
}

void CLASSNAME::calculate_MFe()
{
   const auto mass_matrix_Fe(get_mass_matrix_Fe());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fe, MFe, Ve, Ue, eigenvalue_error);
   problems.flag_bad_mass(NSM_info::Fe, eigenvalue_error > precision *
      Abs(MFe(0)));
#else
   fs_svd(mass_matrix_Fe, MFe, Ve, Ue);
#endif
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_hh() const
{
   Eigen::Matrix<double,2,2> mass_matrix_hh;

   mass_matrix_hh(0,0) = mH2 - vS*Lambda4 - 3*Lambda1*Sqr(vH) - Lambda3*
      Sqr(vS);
   mass_matrix_hh(0,1) = -2*vH*vS*Lambda3 - vH*Lambda4;
   mass_matrix_hh(1,1) = 2*mS2 - 6*vS*Lambda5 - Lambda3*Sqr(vH) - 12*
      Lambda2*Sqr(vS);

   Symmetrize(mass_matrix_hh);

   return mass_matrix_hh;
}

void CLASSNAME::calculate_Mhh()
{
   const auto mass_matrix_hh(get_mass_matrix_hh());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_hh, Mhh, ZH, eigenvalue_error);
   problems.flag_bad_mass(NSM_info::hh, eigenvalue_error > precision *
      Abs(Mhh(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_hh, Mhh, ZH);
#endif

   if (Mhh.minCoeff() < 0.)
      problems.flag_tachyon(NSM_info::hh);

   Mhh = AbsSqrt(Mhh);
}

double CLASSNAME::get_mass_matrix_VWp() const
{
   const double mass_matrix_VWp = Re(0.25*Sqr(g2)*Sqr(vH));

   return mass_matrix_VWp;
}

void CLASSNAME::calculate_MVWp()
{
   const auto mass_matrix_VWp = get_mass_matrix_VWp();
   MVWp = calculate_singlet_mass(mass_matrix_VWp);

   if (MVWp < 0.)
      problems.flag_tachyon(NSM_info::VWp);

   MVWp = AbsSqrt(MVWp);
}


double CLASSNAME::get_ewsb_eq_hh_1() const
{
   double result = Re(mH2*vH - Power(vH,3)*Lambda1 - vH*vS*Lambda4 - vH*Lambda3
      *Sqr(vS));

   return result;
}

double CLASSNAME::get_ewsb_eq_hh_2() const
{
   double result = Re(2*mS2*vS - 4*Power(vS,3)*Lambda2 - vS*Lambda3*Sqr(vH) -
      0.5*Lambda4*Sqr(vH) - 3*Lambda5*Sqr(vS));

   return result;
}



std::complex<double> CLASSNAME::CpUhhAhAh(unsigned gO2) const
{
   std::complex<double> result;

   result = 2*vH*KroneckerDelta(0,gO2)*Lambda1 + KroneckerDelta(1,gO2)*(2*vS*
      Lambda3 + Lambda4);

   return result;
}

double CLASSNAME::CpUhhVZVZ(unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*vH*KroneckerDelta(0,gO2)*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW()
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjHpHp(unsigned gO2) const
{
   std::complex<double> result;

   result = 2*vH*KroneckerDelta(0,gO2)*Lambda1 + KroneckerDelta(1,gO2)*(2*vS*
      Lambda3 + Lambda4);

   return result;
}

double CLASSNAME::CpUhhconjVWpVWp(unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*vH*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

double CLASSNAME::CpUhhbargWpgWp(unsigned gO1) const
{
   double result = 0.0;

   result = -0.25*vH*KroneckerDelta(0,gO1)*Sqr(g2);

   return result;
}

double CLASSNAME::CpUhhbargWpCgWpC(unsigned gO1) const
{
   double result = 0.0;

   result = -0.25*vH*KroneckerDelta(0,gO1)*Sqr(g2);

   return result;
}

double CLASSNAME::CpUhhbargZgZ(unsigned gO1) const
{
   double result = 0.0;

   result = -0.25*vH*KroneckerDelta(0,gO1)*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW
      ()));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhAhAh(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 2*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Lambda1 +
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Lambda3);

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjHpHp(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 2*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Lambda1 +
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Lambda3);

   return result;
}

std::complex<double> CLASSNAME::CpUhhVZAh(unsigned gO2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.5)*KroneckerDelta(0,gO2)*(g2*Cos(ThetaW())
      + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpUhhconjVWpHp(unsigned gO2) const
{
   double result = 0.0;

   result = -0.5*g2*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhUhhconjVWpVWp(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2*Cos(ThetaW()
      ) + g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 2*(Conj(ZH(gI1,1))*(Conj(ZH(gI2,0))*(KroneckerDelta(0,gO2)*
      KroneckerDelta(1,gO1) + KroneckerDelta(0,gO1)*KroneckerDelta(1,gO2))*Lambda3
      + Conj(ZH(gI2,1))*(12*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Lambda2 +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Lambda3)) + Conj(ZH(gI1,0))*(
      Conj(ZH(gI2,1))*(KroneckerDelta(0,gO2)*KroneckerDelta(1,gO1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(1,gO2))*Lambda3 + Conj(ZH(gI2,0))*(3*
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Lambda1 + KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Lambda3)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhhhhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZH(gI1,0))*(Conj(ZH(gI2,1))*(2*vH*KroneckerDelta(1,gO2)*
      Lambda3 + KroneckerDelta(0,gO2)*(2*vS*Lambda3 + Lambda4)) + Conj(ZH(gI2,0))*
      (6*vH*KroneckerDelta(0,gO2)*Lambda1 + KroneckerDelta(1,gO2)*(2*vS*Lambda3 +
      Lambda4))) + Conj(ZH(gI1,1))*(Conj(ZH(gI2,0))*(2*vH*KroneckerDelta(1,gO2)*
      Lambda3 + KroneckerDelta(0,gO2)*(2*vS*Lambda3 + Lambda4)) + 2*Conj(ZH(gI2,1)
      )*(vH*KroneckerDelta(0,gO2)*Lambda3 + 3*KroneckerDelta(1,gO2)*(4*vS*Lambda2
      + Lambda5)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_0;
   std::complex<double> tmp_1;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2;
      std::complex<double> tmp_3;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_3 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_2 += tmp_3;
      tmp_1 += (Vd(gI1,j2)) * tmp_2;
   }
   tmp_0 += tmp_1;
   result += (0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_0;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_4;
   std::complex<double> tmp_5;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_6;
      std::complex<double> tmp_7;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_7 += Conj(Ud(gI1,j1))*Yd(j1,j2);
      }
      tmp_6 += tmp_7;
      tmp_5 += (Conj(Vd(gI2,j2))) * tmp_6;
   }
   tmp_4 += tmp_5;
   result += (0.7071067811865475*KroneckerDelta(0,gO1)) * tmp_4;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_8;
   std::complex<double> tmp_9;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_10;
      std::complex<double> tmp_11;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_11 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_10 += tmp_11;
      tmp_9 += (Ve(gI1,j2)) * tmp_10;
   }
   tmp_8 += tmp_9;
   result += (0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_8;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_12;
   std::complex<double> tmp_13;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_14;
      std::complex<double> tmp_15;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_15 += Conj(Ue(gI1,j1))*Ye(j1,j2);
      }
      tmp_14 += tmp_15;
      tmp_13 += (Conj(Ve(gI2,j2))) * tmp_14;
   }
   tmp_12 += tmp_13;
   result += (0.7071067811865475*KroneckerDelta(0,gO1)) * tmp_12;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_16;
   std::complex<double> tmp_17;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_18;
      std::complex<double> tmp_19;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_19 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_18 += tmp_19;
      tmp_17 += (Vu(gI1,j2)) * tmp_18;
   }
   tmp_16 += tmp_17;
   result += (-0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_16;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_20;
   std::complex<double> tmp_21;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_22;
      std::complex<double> tmp_23;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_23 += Conj(Uu(gI1,j1))*Yu(j1,j2);
      }
      tmp_22 += tmp_23;
      tmp_21 += (Conj(Vu(gI2,j2))) * tmp_22;
   }
   tmp_20 += tmp_21;
   result += (-0.7071067811865475*KroneckerDelta(0,gO1)) * tmp_20;

   return result;
}

double CLASSNAME::CpconjHpVWpVP() const
{
   double result = 0.0;

   result = 0.5*g1*g2*vH*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjHpVZVWp() const
{
   double result = 0.0;

   result = -0.5*g1*g2*vH*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpHpgWpCbargZ() const
{
   double result = 0.0;

   result = 0.25*g2*vH*(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjHpbargWpCgZ() const
{
   double result = 0.0;

   result = -0.25*g2*vH*(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpHpgZbargWp() const
{
   double result = 0.0;

   result = -0.25*g2*vH*(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjHpbargZgWp() const
{
   double result = 0.0;

   result = 0.25*g2*vH*(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpHpconjHpAhAh() const
{
   double result = 0.0;

   result = 2*Lambda1;

   return result;
}

double CLASSNAME::CpHpconjHpconjHpHp() const
{
   double result = 0.0;

   result = 4*Lambda1;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpVWpAh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2;

   return result;
}

double CLASSNAME::CpconjHpVPHp() const
{
   double result = 0.0;

   result = 0.5*(-(g1*Cos(ThetaW())) - g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjHpVZHp() const
{
   double result = 0.0;

   result = 0.5*(-(g2*Cos(ThetaW())) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpHpconjHpconjVWpVWp() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpHpconjHpVZVZ() const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpHpconjHphhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 2*(Conj(ZH(gI1,0))*Conj(ZH(gI2,0))*Lambda1 + Conj(ZH(gI1,1))*Conj(
      ZH(gI2,1))*Lambda3);

   return result;
}

std::complex<double> CLASSNAME::CpconjHpbarFdFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_24;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_25;
      std::complex<double> tmp_26;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_26 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_25 += tmp_26;
      tmp_24 += (Vd(gI1,j2)) * tmp_25;
   }
   result += tmp_24;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpbarFdFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_27;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_28;
      std::complex<double> tmp_29;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_29 += Conj(Ud(gI1,j1))*Yd(j1,j2);
      }
      tmp_28 += tmp_29;
      tmp_27 += (Conj(Vu(gI2,j2))) * tmp_28;
   }
   result += tmp_27;

   return result;
}

double CLASSNAME::CpconjHpbarFeFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpbarFeFvPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_30;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_30 += Conj(Ue(gI1,j1))*Ye(j1,gI2);
   }
   result += tmp_30;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpHphh(unsigned gI2) const
{
   std::complex<double> result;

   result = 2*vH*Conj(ZH(gI2,0))*Lambda1 + Conj(ZH(gI2,1))*(2*vS*Lambda3 +
      Lambda4);

   return result;
}

std::complex<double> CLASSNAME::CpconjHpVWphh(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*g2*Conj(ZH(gI2,0));

   return result;
}

std::complex<double> CLASSNAME::CpAhbargWpgWp() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*vH*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpAhbargWpCgWpC() const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.25)*vH*Sqr(g2);

   return result;
}

double CLASSNAME::CpAhAhAhAh() const
{
   double result = 0.0;

   result = 6*Lambda1;

   return result;
}

double CLASSNAME::CpAhAhconjHpHp() const
{
   double result = 0.0;

   result = 2*Lambda1;

   return result;
}

std::complex<double> CLASSNAME::CpAhconjVWpHp() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2;

   return result;
}

double CLASSNAME::CpAhAhconjVWpVWp() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpAhAhVZVZ() const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpAhhhAh(unsigned gI1) const
{
   std::complex<double> result;

   result = 2*vH*Conj(ZH(gI1,0))*Lambda1 + Conj(ZH(gI1,1))*(2*vS*Lambda3 +
      Lambda4);

   return result;
}

std::complex<double> CLASSNAME::CpAhAhhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 2*(Conj(ZH(gI1,0))*Conj(ZH(gI2,0))*Lambda1 + Conj(ZH(gI1,1))*Conj(
      ZH(gI2,1))*Lambda3);

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFdFdPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_31;
   std::complex<double> tmp_32;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_33;
      std::complex<double> tmp_34;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_34 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_33 += tmp_34;
      tmp_32 += (Vd(gI1,j2)) * tmp_33;
   }
   tmp_31 += tmp_32;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_31;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFdFdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_35;
   std::complex<double> tmp_36;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_37;
      std::complex<double> tmp_38;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_38 += Conj(Ud(gI1,j1))*Yd(j1,j2);
      }
      tmp_37 += tmp_38;
      tmp_36 += (Conj(Vd(gI2,j2))) * tmp_37;
   }
   tmp_35 += tmp_36;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_35;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFeFePR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_39;
   std::complex<double> tmp_40;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_41;
      std::complex<double> tmp_42;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_42 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_41 += tmp_42;
      tmp_40 += (Ve(gI1,j2)) * tmp_41;
   }
   tmp_39 += tmp_40;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_39;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFeFePL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_43;
   std::complex<double> tmp_44;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_45;
      std::complex<double> tmp_46;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_46 += Conj(Ue(gI1,j1))*Ye(j1,j2);
      }
      tmp_45 += tmp_46;
      tmp_44 += (Conj(Ve(gI2,j2))) * tmp_45;
   }
   tmp_43 += tmp_44;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_43;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFuFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_47;
   std::complex<double> tmp_48;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_49;
      std::complex<double> tmp_50;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_50 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_49 += tmp_50;
      tmp_48 += (Vu(gI1,j2)) * tmp_49;
   }
   tmp_47 += tmp_48;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_47;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFuFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_51;
   std::complex<double> tmp_52;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_53;
      std::complex<double> tmp_54;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_54 += Conj(Uu(gI1,j1))*Yu(j1,j2);
      }
      tmp_53 += tmp_54;
      tmp_52 += (Conj(Vu(gI2,j2))) * tmp_53;
   }
   tmp_51 += tmp_52;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_51;

   return result;
}

std::complex<double> CLASSNAME::CpAhVZhh(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.5)*Conj(ZH(gI2,0))*(g2*Cos(ThetaW()) + g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbargWpgWp() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpVZbargWpCgWpC() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjHpHp() const
{
   double result = 0.0;

   result = 0.5*(-(g2*Cos(ThetaW())) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjVWpHp() const
{
   double result = 0.0;

   result = -0.5*g1*g2*vH*Sin(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpVZVZAhAh() const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjHpHp() const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjVWpVWp() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpVZhhAh(unsigned gI1) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.5)*Conj(ZH(gI1,0))*(g2*Cos(ThetaW()) + g1*
      Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZH(gI1,0))*Conj(ZH(gI2,0))*Sqr(g2*Cos(ThetaW()) + g1*Sin(
      ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFdFdPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.16666666666666666*KroneckerDelta(gI1,gI2)*(3*g2*Cos(ThetaW()) +
      g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFdFdPR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.3333333333333333*g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFeFePL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI1,gI2)*(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFeFePR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -(g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFuFuPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.16666666666666666*KroneckerDelta(gI1,gI2)*(3*g2*Cos(ThetaW()) -
      g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFuFuPR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.6666666666666666*g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFvFvPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.5*KroneckerDelta(gI1,gI2)*(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFvFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpVZVZhh(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*vH*Conj(ZH(gI2,0))*Sqr(g2*Cos(ThetaW()) + g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZconjVWpVWp1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZconjVWpVWp2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZconjVWpVWp3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWpHpAh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2;

   return result;
}

double CLASSNAME::CpconjVWpVPHp() const
{
   double result = 0.0;

   result = 0.5*g1*g2*vH*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpVZHp() const
{
   double result = 0.0;

   result = -0.5*g1*g2*vH*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpbargPgWp() const
{
   double result = 0.0;

   result = -(g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjVWpbargWpCgP() const
{
   double result = 0.0;

   result = g2*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpbargWpCgZ() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpbargZgWp() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpAhAh() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpVWpconjVWpconjHpHp() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjVWpVWpVP() const
{
   double result = 0.0;

   result = g2*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpVZVWp() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpVWpconjVWphhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZH(gI1,0))*Conj(ZH(gI2,0))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWpbarFdFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_55;
   std::complex<double> tmp_56;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_56 += Conj(Vu(gI2,j1))*Vd(gI1,j1);
   }
   tmp_55 += tmp_56;
   result += (-0.7071067811865475*g2) * tmp_55;

   return result;
}

double CLASSNAME::CpconjVWpbarFdFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjVWpbarFeFvPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.7071067811865475*g2*Ve(gI1,gI2);
   }

   return result;
}

double CLASSNAME::CpconjVWpbarFeFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjVWpHphh(unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*g2*Conj(ZH(gI2,0));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWpVWphh(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*vH*Conj(ZH(gI2,0))*Sqr(g2);

   return result;
}

double CLASSNAME::CpVWpconjVWpVPVP1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpVPVP2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpVPVP3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpVZVZ1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpVZVZ2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpVZVZ3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWpconjVWpconjVWpVWp1() const
{
   double result = 0.0;

   result = -Sqr(g2);

   return result;
}

double CLASSNAME::CpVWpconjVWpconjVWpVWp2() const
{
   double result = 0.0;

   result = -Sqr(g2);

   return result;
}

double CLASSNAME::CpVWpconjVWpconjVWpVWp3() const
{
   double result = 0.0;

   result = 2*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_57;
      std::complex<double> tmp_58;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_58 += Conj(Vd(gI2,j2))*Yd(gO2,j2);
      }
      tmp_57 += tmp_58;
      result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_57;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_59;
      std::complex<double> tmp_60;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_60 += Conj(Yd(j1,gO1))*Ud(gI2,j1);
      }
      tmp_59 += tmp_60;
      result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_59;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdFdAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_61;
      std::complex<double> tmp_62;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_62 += Conj(Vd(gI1,j2))*Yd(gO2,j2);
      }
      tmp_61 += tmp_62;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_61;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdFdAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_63;
      std::complex<double> tmp_64;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_64 += Conj(Yd(j1,gO1))*Ud(gI1,j1);
      }
      tmp_63 += tmp_64;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_63;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVGFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Ud(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVGFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Conj(Vd(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVPFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.3333333333333333*g1*Cos(ThetaW())*Ud(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVPFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.16666666666666666*g1*Conj(Vd(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.5*g2*Conj(Vd(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVZFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.3333333333333333*g1*Sin(ThetaW())*Ud(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVZFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g2*Conj(Vd(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.16666666666666666*g1*Conj(Vd(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdconjHpFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_65;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_65 += Conj(Vu(gI2,j2))*Yd(gO2,j2);
      }
      result += tmp_65;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdconjHpFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_66;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_66 += Conj(Yu(j1,gO1))*Uu(gI2,j1);
      }
      result += tmp_66;
   }

   return result;
}

double CLASSNAME::CpbarUFdconjVWpFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdconjVWpFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(Vu(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_67;
      std::complex<double> tmp_68;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_68 += Conj(Vu(gI2,j2))*Yu(gO2,j2);
      }
      tmp_67 += tmp_68;
      result += (-0.7071067811865475*Conj(ZH(gI1,0))) * tmp_67;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_69;
      std::complex<double> tmp_70;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_70 += Conj(Yu(j1,gO1))*Uu(gI2,j1);
      }
      tmp_69 += tmp_70;
      result += (-0.7071067811865475*Conj(ZH(gI1,0))) * tmp_69;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuFuAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_71;
      std::complex<double> tmp_72;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_72 += Conj(Vu(gI1,j2))*Yu(gO2,j2);
      }
      tmp_71 += tmp_72;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_71;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuFuAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_73;
      std::complex<double> tmp_74;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_74 += Conj(Yu(j1,gO1))*Uu(gI1,j1);
      }
      tmp_73 += tmp_74;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_73;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuHpFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_75;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_75 += Conj(Vd(gI2,j2))*Yu(gO2,j2);
      }
      result += tmp_75;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuHpFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_76;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_76 += Conj(Yd(j1,gO1))*Ud(gI2,j1);
      }
      result += tmp_76;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVGFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Uu(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVGFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Conj(Vu(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVPFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.6666666666666666*g1*Cos(ThetaW())*Uu(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVPFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.16666666666666666*g1*Conj(Vu(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += -0.5*g2*Conj(Vu(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

double CLASSNAME::CpbarUFuVWpFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVWpFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(Vd(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVZFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.6666666666666666*g1*Sin(ThetaW())*Uu(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVZFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.5*g2*Conj(Vu(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.16666666666666666*g1*Conj(Vu(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_77;
      std::complex<double> tmp_78;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_78 += Conj(Ve(gI2,j2))*Ye(gO2,j2);
      }
      tmp_77 += tmp_78;
      result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_77;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_79;
      std::complex<double> tmp_80;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_80 += Conj(Ye(j1,gO1))*Ue(gI2,j1);
      }
      tmp_79 += tmp_80;
      result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_79;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_81;
      std::complex<double> tmp_82;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_82 += Conj(Ve(gI1,j2))*Ye(gO2,j2);
      }
      tmp_81 += tmp_82;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_81;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_83;
      std::complex<double> tmp_84;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_84 += Conj(Ye(j1,gO1))*Ue(gI1,j1);
      }
      tmp_83 += tmp_84;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_83;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += g1*Cos(ThetaW())*Ue(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g1*Conj(Ve(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.5*g2*Conj(Ve(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVZFePR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g1*Sin(ThetaW())*Ue(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVZFePL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g2*Conj(Ve(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += -0.5*g1*Conj(Ve(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeconjHpFvPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += Ye(gO2,gI2);
   }

   return result;
}

double CLASSNAME::CpbarUFeconjHpFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarUFeconjVWpFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarUFeconjVWpFvPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   if (gI2 < 3) {
      result += -0.7071067811865475*g2*KroneckerDelta(gI2,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_85;
   std::complex<double> tmp_86;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_87;
      std::complex<double> tmp_88;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_88 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_87 += tmp_88;
      tmp_86 += (Conj(Vd(gI2,j2))) * tmp_87;
   }
   tmp_85 += tmp_86;
   result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_85;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_89;
   std::complex<double> tmp_90;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_91;
      std::complex<double> tmp_92;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_92 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_91 += tmp_92;
      tmp_90 += (Vd(gO1,j2)) * tmp_91;
   }
   tmp_89 += tmp_90;
   result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_89;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_93;
   std::complex<double> tmp_94;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_95;
      std::complex<double> tmp_96;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_96 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_95 += tmp_96;
      tmp_94 += (Conj(Vd(gI1,j2))) * tmp_95;
   }
   tmp_93 += tmp_94;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_93;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_97;
   std::complex<double> tmp_98;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_99;
      std::complex<double> tmp_100;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_100 += Conj(Yd(j1,j2))*Ud(gI1,j1);
      }
      tmp_99 += tmp_100;
      tmp_98 += (Vd(gO1,j2)) * tmp_99;
   }
   tmp_97 += tmp_98;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_97;

   return result;
}

double CLASSNAME::CpbarFdVZFdPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -0.3333333333333333*g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFdVZFdPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.16666666666666666*KroneckerDelta(gI2,gO1)*(3*g2*Cos(ThetaW()) +
      g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFdconjHpFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_101;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_102;
      std::complex<double> tmp_103;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_103 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_102 += tmp_103;
      tmp_101 += (Conj(Vu(gI2,j2))) * tmp_102;
   }
   result += tmp_101;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdconjHpFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_104;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_105;
      std::complex<double> tmp_106;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_106 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_105 += tmp_106;
      tmp_104 += (Vd(gO1,j2)) * tmp_105;
   }
   result += tmp_104;

   return result;
}

double CLASSNAME::CpbarFdconjVWpFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdconjVWpFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_107;
   std::complex<double> tmp_108;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_108 += Conj(Vu(gI2,j1))*Vd(gO1,j1);
   }
   tmp_107 += tmp_108;
   result += (-0.7071067811865475*g2) * tmp_107;

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_109;
   std::complex<double> tmp_110;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_111;
      std::complex<double> tmp_112;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_112 += Conj(Ue(gO2,j1))*Ye(j1,j2);
      }
      tmp_111 += tmp_112;
      tmp_110 += (Conj(Ve(gI2,j2))) * tmp_111;
   }
   tmp_109 += tmp_110;
   result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_109;

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_113;
   std::complex<double> tmp_114;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_115;
      std::complex<double> tmp_116;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_116 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_115 += tmp_116;
      tmp_114 += (Ve(gO1,j2)) * tmp_115;
   }
   tmp_113 += tmp_114;
   result += (0.7071067811865475*Conj(ZH(gI1,0))) * tmp_113;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_117;
   std::complex<double> tmp_118;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_119;
      std::complex<double> tmp_120;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_120 += Conj(Ue(gO2,j1))*Ye(j1,j2);
      }
      tmp_119 += tmp_120;
      tmp_118 += (Conj(Ve(gI1,j2))) * tmp_119;
   }
   tmp_117 += tmp_118;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_117;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_121;
   std::complex<double> tmp_122;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_123;
      std::complex<double> tmp_124;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_124 += Conj(Ye(j1,j2))*Ue(gI1,j1);
      }
      tmp_123 += tmp_124;
      tmp_122 += (Ve(gO1,j2)) * tmp_123;
   }
   tmp_121 += tmp_122;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_121;

   return result;
}

double CLASSNAME::CpbarFeVZFePR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -(g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFeVZFePL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI2,gO1)*(g2*Cos(ThetaW()) - g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFeconjHpFvPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_125;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_125 += Conj(Ue(gO2,j1))*Ye(j1,gI2);
   }
   result += tmp_125;

   return result;
}

double CLASSNAME::CpbarFeconjHpFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFeconjVWpFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeconjVWpFvPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.7071067811865475*g2*Ve(gO1,gI2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_126;
   std::complex<double> tmp_127;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_128;
      std::complex<double> tmp_129;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_129 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_128 += tmp_129;
      tmp_127 += (Conj(Vu(gI2,j2))) * tmp_128;
   }
   tmp_126 += tmp_127;
   result += (-0.7071067811865475*Conj(ZH(gI1,0))) * tmp_126;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_130;
   std::complex<double> tmp_131;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_132;
      std::complex<double> tmp_133;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_133 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_132 += tmp_133;
      tmp_131 += (Vu(gO1,j2)) * tmp_132;
   }
   tmp_130 += tmp_131;
   result += (-0.7071067811865475*Conj(ZH(gI1,0))) * tmp_130;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_134;
   std::complex<double> tmp_135;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_136;
      std::complex<double> tmp_137;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_137 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_136 += tmp_137;
      tmp_135 += (Conj(Vu(gI1,j2))) * tmp_136;
   }
   tmp_134 += tmp_135;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_134;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_138;
   std::complex<double> tmp_139;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_140;
      std::complex<double> tmp_141;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_141 += Conj(Yu(j1,j2))*Uu(gI1,j1);
      }
      tmp_140 += tmp_141;
      tmp_139 += (Vu(gO1,j2)) * tmp_140;
   }
   tmp_138 += tmp_139;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_138;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuHpFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_142;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_143;
      std::complex<double> tmp_144;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_144 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_143 += tmp_144;
      tmp_142 += (Conj(Vd(gI2,j2))) * tmp_143;
   }
   result += tmp_142;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuHpFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_145;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_146;
      std::complex<double> tmp_147;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_147 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_146 += tmp_147;
      tmp_145 += (Vu(gO1,j2)) * tmp_146;
   }
   result += tmp_145;

   return result;
}

double CLASSNAME::CpbarFuVPFuPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -0.6666666666666666*g1*Cos(ThetaW())*KroneckerDelta(gI2,gO2);

   return result;
}

double CLASSNAME::CpbarFuVPFuPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.16666666666666666*KroneckerDelta(gI2,gO1)*(g1*Cos(ThetaW()) + 3*
      g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFuVWpFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuVWpFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_148;
   std::complex<double> tmp_149;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_149 += Conj(Vd(gI2,j1))*Vu(gO1,j1);
   }
   tmp_148 += tmp_149;
   result += (-0.7071067811865475*g2) * tmp_148;

   return result;
}

double CLASSNAME::CpbarFuVZFuPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = 0.6666666666666666*g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFuVZFuPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.16666666666666666*KroneckerDelta(gI2,gO1)*(3*g2*Cos(ThetaW()) -
      g1*Sin(ThetaW()));

   return result;
}


std::complex<double> CLASSNAME::self_energy_hh(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 0.5*B0(p,MAh,MAh)*Conj(CpUhhAhAh(gO2))*CpUhhAhAh(gO1);
   result += -(B0(p,MVWp,MVWp)*CpUhhbargWpCgWpC(gO1)*CpUhhbargWpCgWpC(gO2));
   result += -(B0(p,MVWp,MVWp)*CpUhhbargWpgWp(gO1)*CpUhhbargWpgWp(gO2));
   result += -(B0(p,MVZ,MVZ)*CpUhhbargZgZ(gO1)*CpUhhbargZgZ(gO2));
   result += B0(p,MHp,MHp)*Conj(CpUhhconjHpHp(gO2))*CpUhhconjHpHp(gO1);
   result += 4*(-0.5 + B0(p,MVWp,MVWp))*Conj(CpUhhconjVWpVWp(gO2))*
      CpUhhconjVWpVWp(gO1);
   result += -0.5*A0(MAh)*CpUhhUhhAhAh(gO1,gO2);
   result += -(A0(MHp)*CpUhhUhhconjHpHp(gO1,gO2));
   result += 2*(-0.5 + B0(p,MVZ,MVZ))*Conj(CpUhhVZVZ(gO2))*CpUhhVZVZ(gO1);
   result += Conj(CpUhhVZAh(gO2))*CpUhhVZAh(gO1)*F0(p,MAh,MVZ);
   result += 2*Conj(CpUhhconjVWpHp(gO2))*CpUhhconjVWpHp(gO1)*F0(p,MHp,MVWp);
   std::complex<double> tmp_150;
   std::complex<double> tmp_151;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_151 += A0(Mhh(gI1))*CpUhhUhhhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_150 += tmp_151;
   result += (-0.5) * tmp_150;
   std::complex<double> tmp_152;
   std::complex<double> tmp_153;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_154;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_154 += B0(p,Mhh(gI1),Mhh(gI2))*Conj(CpUhhhhhh(gO2,gI1,gI2))*
            CpUhhhhhh(gO1,gI1,gI2);
      }
      tmp_153 += tmp_154;
   }
   tmp_152 += tmp_153;
   result += (0.5) * tmp_152;
   std::complex<double> tmp_155;
   std::complex<double> tmp_156;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_157;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_157 += (Conj(CpUhhbarFdFdPL(gO2,gI1,gI2))*CpUhhbarFdFdPL(gO1
            ,gI1,gI2) + Conj(CpUhhbarFdFdPR(gO2,gI1,gI2))*CpUhhbarFdFdPR(gO1,gI1,
            gI2))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_156 += tmp_157;
   }
   tmp_155 += tmp_156;
   result += (3) * tmp_155;
   std::complex<double> tmp_158;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_159;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_159 += (Conj(CpUhhbarFeFePL(gO2,gI1,gI2))*CpUhhbarFeFePL(gO1
            ,gI1,gI2) + Conj(CpUhhbarFeFePR(gO2,gI1,gI2))*CpUhhbarFeFePR(gO1,gI1,
            gI2))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_158 += tmp_159;
   }
   result += tmp_158;
   std::complex<double> tmp_160;
   std::complex<double> tmp_161;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_162;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_162 += (Conj(CpUhhbarFuFuPL(gO2,gI1,gI2))*CpUhhbarFuFuPL(gO1
            ,gI1,gI2) + Conj(CpUhhbarFuFuPR(gO2,gI1,gI2))*CpUhhbarFuFuPR(gO1,gI1,
            gI2))*G0(p,MFu(gI1),MFu(gI2));
      }
      tmp_161 += tmp_162;
   }
   tmp_160 += tmp_161;
   result += (3) * tmp_160;
   std::complex<double> tmp_163;
   std::complex<double> tmp_164;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_165;
      std::complex<double> tmp_166;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_166 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CpUhhbarFdFdPR(gO2,gI1,
            gI2))*CpUhhbarFdFdPL(gO1,gI1,gI2) + Conj(CpUhhbarFdFdPL(gO2,gI1,gI2))*
            CpUhhbarFdFdPR(gO1,gI1,gI2))*MFd(gI2);
      }
      tmp_165 += tmp_166;
      tmp_164 += (MFd(gI1)) * tmp_165;
   }
   tmp_163 += tmp_164;
   result += (-6) * tmp_163;
   std::complex<double> tmp_167;
   std::complex<double> tmp_168;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_169;
      std::complex<double> tmp_170;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_170 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CpUhhbarFeFePR(gO2,gI1,
            gI2))*CpUhhbarFeFePL(gO1,gI1,gI2) + Conj(CpUhhbarFeFePL(gO2,gI1,gI2))*
            CpUhhbarFeFePR(gO1,gI1,gI2))*MFe(gI2);
      }
      tmp_169 += tmp_170;
      tmp_168 += (MFe(gI1)) * tmp_169;
   }
   tmp_167 += tmp_168;
   result += (-2) * tmp_167;
   std::complex<double> tmp_171;
   std::complex<double> tmp_172;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_173;
      std::complex<double> tmp_174;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_174 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CpUhhbarFuFuPR(gO2,gI1,
            gI2))*CpUhhbarFuFuPL(gO1,gI1,gI2) + Conj(CpUhhbarFuFuPL(gO2,gI1,gI2))*
            CpUhhbarFuFuPR(gO1,gI1,gI2))*MFu(gI2);
      }
      tmp_173 += tmp_174;
      tmp_172 += (MFu(gI1)) * tmp_173;
   }
   tmp_171 += tmp_172;
   result += (-6) * tmp_171;
   result += 4*CpUhhUhhconjVWpVWp(gO1,gO2)*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpUhhUhhVZVZ(gO1,gO2)*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Hp(double p ) const
{
   std::complex<double> result;

   result += 4*AbsSqr(CpconjHpVWpVP())*(-0.5 + B0(p,0,MVWp));
   result += 4*AbsSqr(CpconjHpVZVWp())*(-0.5 + B0(p,MVWp,MVZ));
   result += -0.5*A0(MAh)*CpHpconjHpAhAh();
   result += -(A0(MHp)*CpHpconjHpconjHpHp());
   result += -(B0(p,MVZ,MVWp)*CpconjHpbargWpCgZ()*CpHpgWpCbargZ());
   result += -(B0(p,MVWp,MVZ)*CpconjHpbargZgWp()*CpHpgZbargWp());
   result += AbsSqr(CpconjHpVWpAh())*F0(p,MAh,MVWp);
   result += AbsSqr(CpconjHpVPHp())*F0(p,MHp,0);
   result += AbsSqr(CpconjHpVZHp())*F0(p,MHp,MVZ);
   std::complex<double> tmp_175;
   std::complex<double> tmp_176;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_176 += A0(Mhh(gI1))*CpHpconjHphhhh(gI1,gI1);
   }
   tmp_175 += tmp_176;
   result += (-0.5) * tmp_175;
   std::complex<double> tmp_177;
   std::complex<double> tmp_178;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_179;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_179 += (AbsSqr(CpconjHpbarFdFuPL(gI1,gI2)) + AbsSqr(
            CpconjHpbarFdFuPR(gI1,gI2)))*G0(p,MFd(gI1),MFu(gI2));
      }
      tmp_178 += tmp_179;
   }
   tmp_177 += tmp_178;
   result += (3) * tmp_177;
   std::complex<double> tmp_180;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_181;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_181 += (AbsSqr(CpconjHpbarFeFvPL(gI1,gI2)) + AbsSqr(
            CpconjHpbarFeFvPR(gI1,gI2)))*G0(p,MFe(gI1),MFv(gI2));
      }
      tmp_180 += tmp_181;
   }
   result += tmp_180;
   std::complex<double> tmp_182;
   std::complex<double> tmp_183;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_184;
      std::complex<double> tmp_185;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_185 += B0(p,MFd(gI1),MFu(gI2))*(Conj(CpconjHpbarFdFuPR(gI1,
            gI2))*CpconjHpbarFdFuPL(gI1,gI2) + Conj(CpconjHpbarFdFuPL(gI1,gI2))*
            CpconjHpbarFdFuPR(gI1,gI2))*MFu(gI2);
      }
      tmp_184 += tmp_185;
      tmp_183 += (MFd(gI1)) * tmp_184;
   }
   tmp_182 += tmp_183;
   result += (-6) * tmp_182;
   std::complex<double> tmp_186;
   std::complex<double> tmp_187;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_188;
      std::complex<double> tmp_189;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_189 += B0(p,MFe(gI1),MFv(gI2))*(Conj(CpconjHpbarFeFvPR(gI1,
            gI2))*CpconjHpbarFeFvPL(gI1,gI2) + Conj(CpconjHpbarFeFvPL(gI1,gI2))*
            CpconjHpbarFeFvPR(gI1,gI2))*MFv(gI2);
      }
      tmp_188 += tmp_189;
      tmp_187 += (MFe(gI1)) * tmp_188;
   }
   tmp_186 += tmp_187;
   result += (-2) * tmp_186;
   std::complex<double> tmp_190;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_190 += AbsSqr(CpconjHpHphh(gI2))*B0(p,MHp,Mhh(gI2));
   }
   result += tmp_190;
   std::complex<double> tmp_191;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_191 += AbsSqr(CpconjHpVWphh(gI2))*F0(p,Mhh(gI2),MVWp);
   }
   result += tmp_191;
   result += 4*CpHpconjHpconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpHpconjHpVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ah(double p ) const
{
   std::complex<double> result;

   result += -0.5*A0(MAh)*CpAhAhAhAh();
   result += -(A0(MHp)*CpAhAhconjHpHp());
   result += -(B0(p,MVWp,MVWp)*Sqr(CpAhbargWpCgWpC()));
   result += -(B0(p,MVWp,MVWp)*Sqr(CpAhbargWpgWp()));
   result += 2*AbsSqr(CpAhconjVWpHp())*F0(p,MHp,MVWp);
   std::complex<double> tmp_192;
   std::complex<double> tmp_193;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_193 += A0(Mhh(gI1))*CpAhAhhhhh(gI1,gI1);
   }
   tmp_192 += tmp_193;
   result += (-0.5) * tmp_192;
   std::complex<double> tmp_194;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_194 += AbsSqr(CpAhhhAh(gI1))*B0(p,Mhh(gI1),MAh);
   }
   result += tmp_194;
   std::complex<double> tmp_195;
   std::complex<double> tmp_196;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_197;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_197 += (AbsSqr(CpAhbarFdFdPL(gI1,gI2)) + AbsSqr(
            CpAhbarFdFdPR(gI1,gI2)))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_196 += tmp_197;
   }
   tmp_195 += tmp_196;
   result += (3) * tmp_195;
   std::complex<double> tmp_198;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_199;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_199 += (AbsSqr(CpAhbarFeFePL(gI1,gI2)) + AbsSqr(
            CpAhbarFeFePR(gI1,gI2)))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_198 += tmp_199;
   }
   result += tmp_198;
   std::complex<double> tmp_200;
   std::complex<double> tmp_201;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_202;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_202 += (AbsSqr(CpAhbarFuFuPL(gI1,gI2)) + AbsSqr(
            CpAhbarFuFuPR(gI1,gI2)))*G0(p,MFu(gI1),MFu(gI2));
      }
      tmp_201 += tmp_202;
   }
   tmp_200 += tmp_201;
   result += (3) * tmp_200;
   std::complex<double> tmp_203;
   std::complex<double> tmp_204;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_205;
      std::complex<double> tmp_206;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_206 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CpAhbarFdFdPR(gI1,gI2))
            *CpAhbarFdFdPL(gI1,gI2) + Conj(CpAhbarFdFdPL(gI1,gI2))*CpAhbarFdFdPR(
            gI1,gI2))*MFd(gI2);
      }
      tmp_205 += tmp_206;
      tmp_204 += (MFd(gI1)) * tmp_205;
   }
   tmp_203 += tmp_204;
   result += (-6) * tmp_203;
   std::complex<double> tmp_207;
   std::complex<double> tmp_208;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_209;
      std::complex<double> tmp_210;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_210 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CpAhbarFeFePR(gI1,gI2))
            *CpAhbarFeFePL(gI1,gI2) + Conj(CpAhbarFeFePL(gI1,gI2))*CpAhbarFeFePR(
            gI1,gI2))*MFe(gI2);
      }
      tmp_209 += tmp_210;
      tmp_208 += (MFe(gI1)) * tmp_209;
   }
   tmp_207 += tmp_208;
   result += (-2) * tmp_207;
   std::complex<double> tmp_211;
   std::complex<double> tmp_212;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_213;
      std::complex<double> tmp_214;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_214 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CpAhbarFuFuPR(gI1,gI2))
            *CpAhbarFuFuPL(gI1,gI2) + Conj(CpAhbarFuFuPL(gI1,gI2))*CpAhbarFuFuPR(
            gI1,gI2))*MFu(gI2);
      }
      tmp_213 += tmp_214;
      tmp_212 += (MFu(gI1)) * tmp_213;
   }
   tmp_211 += tmp_212;
   result += (-6) * tmp_211;
   std::complex<double> tmp_215;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_215 += AbsSqr(CpAhVZhh(gI2))*F0(p,Mhh(gI2),MVZ);
   }
   result += tmp_215;
   result += 4*CpAhAhconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpAhAhVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpVZbargWpCgWpC())*B00(p,MVWp,MVWp);
   result += AbsSqr(CpVZbargWpgWp())*B00(p,MVWp,MVWp);
   result += -4*AbsSqr(CpVZconjHpHp())*B00(p,MHp,MHp);
   result += 2*AbsSqr(CpVZconjVWpHp())*B0(p,MVWp,MHp);
   result += 0.5*A0(MAh)*CpVZVZAhAh();
   result += A0(MHp)*CpVZVZconjHpHp();
   result += -(A0(MVWp)*(4*CpVZVZconjVWpVWp1() + CpVZVZconjVWpVWp2() +
      CpVZVZconjVWpVWp3()));
   std::complex<double> tmp_216;
   std::complex<double> tmp_217;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_217 += AbsSqr(CpVZhhAh(gI1))*B00(p,MAh,Mhh(gI1));
   }
   tmp_216 += tmp_217;
   result += (-4) * tmp_216;
   std::complex<double> tmp_218;
   std::complex<double> tmp_219;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_219 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_218 += tmp_219;
   result += (0.5) * tmp_218;
   std::complex<double> tmp_220;
   std::complex<double> tmp_221;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_222;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_222 += (AbsSqr(CpVZbarFdFdPL(gI1,gI2)) + AbsSqr(
            CpVZbarFdFdPR(gI1,gI2)))*H0(p,MFd(gI1),MFd(gI2));
         tmp_222 += 4*B0(p,MFd(gI1),MFd(gI2))*MFd(gI1)*MFd(gI2)*Re(Conj(
            CpVZbarFdFdPL(gI1,gI2))*CpVZbarFdFdPR(gI1,gI2));
      }
      tmp_221 += tmp_222;
   }
   tmp_220 += tmp_221;
   result += (3) * tmp_220;
   std::complex<double> tmp_223;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_224;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_224 += (AbsSqr(CpVZbarFeFePL(gI1,gI2)) + AbsSqr(
            CpVZbarFeFePR(gI1,gI2)))*H0(p,MFe(gI1),MFe(gI2));
         tmp_224 += 4*B0(p,MFe(gI1),MFe(gI2))*MFe(gI1)*MFe(gI2)*Re(Conj(
            CpVZbarFeFePL(gI1,gI2))*CpVZbarFeFePR(gI1,gI2));
      }
      tmp_223 += tmp_224;
   }
   result += tmp_223;
   std::complex<double> tmp_225;
   std::complex<double> tmp_226;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_227;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_227 += (AbsSqr(CpVZbarFuFuPL(gI1,gI2)) + AbsSqr(
            CpVZbarFuFuPR(gI1,gI2)))*H0(p,MFu(gI1),MFu(gI2));
         tmp_227 += 4*B0(p,MFu(gI1),MFu(gI2))*MFu(gI1)*MFu(gI2)*Re(Conj(
            CpVZbarFuFuPL(gI1,gI2))*CpVZbarFuFuPR(gI1,gI2));
      }
      tmp_226 += tmp_227;
   }
   tmp_225 += tmp_226;
   result += (3) * tmp_225;
   std::complex<double> tmp_228;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_229;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_229 += (AbsSqr(CpVZbarFvFvPL(gI1,gI2)) + AbsSqr(
            CpVZbarFvFvPR(gI1,gI2)))*H0(p,MFv(gI1),MFv(gI2));
         tmp_229 += 4*B0(p,MFv(gI1),MFv(gI2))*MFv(gI1)*MFv(gI2)*Re(Conj(
            CpVZbarFvFvPL(gI1,gI2))*CpVZbarFvFvPR(gI1,gI2));
      }
      tmp_228 += tmp_229;
   }
   result += tmp_228;
   std::complex<double> tmp_230;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_230 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_230;
   result += 2*CpVZVZconjVWpVWp1()*Sqr(MVWp);
   result += -(AbsSqr(CpVZconjVWpVWp())*(2*A0(MVWp) + 10*B00(p,MVWp,MVWp) - 2*(
      2*Sqr(MVWp) - 0.3333333333333333*Sqr(p)) + B0(p,MVWp,MVWp)*(2*Sqr(MVWp) + 4*
      Sqr(p))));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWp(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpconjVWpbargPgWp())*B00(p,MVWp,MVP);
   result += AbsSqr(CpconjVWpbargWpCgP())*B00(p,MVP,MVWp);
   result += AbsSqr(CpconjVWpbargWpCgZ())*B00(p,MVZ,MVWp);
   result += AbsSqr(CpconjVWpbargZgWp())*B00(p,MVWp,MVZ);
   result += -4*AbsSqr(CpconjVWpHpAh())*B00(p,MAh,MHp);
   result += AbsSqr(CpconjVWpVPHp())*B0(p,0,MHp);
   result += AbsSqr(CpconjVWpVZHp())*B0(p,MVZ,MHp);
   result += 0.5*A0(MAh)*CpVWpconjVWpAhAh();
   result += A0(MHp)*CpVWpconjVWpconjHpHp();
   result += -(A0(MVWp)*(4*CpVWpconjVWpconjVWpVWp1() + CpVWpconjVWpconjVWpVWp2(
      ) + CpVWpconjVWpconjVWpVWp3()));
   result += 0;
   std::complex<double> tmp_231;
   std::complex<double> tmp_232;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_232 += A0(Mhh(gI1))*CpVWpconjVWphhhh(gI1,gI1);
   }
   tmp_231 += tmp_232;
   result += (0.5) * tmp_231;
   std::complex<double> tmp_233;
   std::complex<double> tmp_234;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_235;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_235 += (AbsSqr(CpconjVWpbarFdFuPL(gI1,gI2)) + AbsSqr(
            CpconjVWpbarFdFuPR(gI1,gI2)))*H0(p,MFd(gI1),MFu(gI2));
         tmp_235 += 4*B0(p,MFd(gI1),MFu(gI2))*MFd(gI1)*MFu(gI2)*Re(Conj(
            CpconjVWpbarFdFuPL(gI1,gI2))*CpconjVWpbarFdFuPR(gI1,gI2));
      }
      tmp_234 += tmp_235;
   }
   tmp_233 += tmp_234;
   result += (3) * tmp_233;
   std::complex<double> tmp_236;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_237;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_237 += (AbsSqr(CpconjVWpbarFeFvPL(gI1,gI2)) + AbsSqr(
            CpconjVWpbarFeFvPR(gI1,gI2)))*H0(p,MFe(gI1),MFv(gI2));
         tmp_237 += 4*B0(p,MFe(gI1),MFv(gI2))*MFe(gI1)*MFv(gI2)*Re(Conj(
            CpconjVWpbarFeFvPL(gI1,gI2))*CpconjVWpbarFeFvPR(gI1,gI2));
      }
      tmp_236 += tmp_237;
   }
   result += tmp_236;
   std::complex<double> tmp_238;
   std::complex<double> tmp_239;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_239 += AbsSqr(CpconjVWpHphh(gI2))*B00(p,Mhh(gI2),MHp);
   }
   tmp_238 += tmp_239;
   result += (-4) * tmp_238;
   std::complex<double> tmp_240;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_240 += AbsSqr(CpconjVWpVWphh(gI2))*B0(p,MVWp,Mhh(gI2));
   }
   result += tmp_240;
   result += 2*CpVWpconjVWpconjVWpVWp1()*Sqr(MVWp);
   result += -(AbsSqr(CpconjVWpVWpVP())*(A0(MVWp) + 10*B00(p,MVWp,0) - 2*(Sqr(
      MVWp) - 0.3333333333333333*Sqr(p)) + B0(p,MVWp,0)*(Sqr(MVWp) + 4*Sqr(p))));
   result += 0.5*(-(A0(MVZ)*(4*CpVWpconjVWpVZVZ1() + CpVWpconjVWpVZVZ2() +
      CpVWpconjVWpVZVZ3())) + 2*CpVWpconjVWpVZVZ1()*Sqr(MVZ));
   result += -(AbsSqr(CpconjVWpVZVWp())*(A0(MVWp) + A0(MVZ) + 10*B00(p,MVZ,MVWp
      ) - 2*(Sqr(MVWp) + Sqr(MVZ) - 0.3333333333333333*Sqr(p)) + B0(p,MVZ,MVWp)*(
      Sqr(MVWp) + Sqr(MVZ) + 4*Sqr(p))));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_241;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_242;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_242 += B0(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPL(gO2,gI1,
            gI2))*CpbarUFdhhFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_241 += tmp_242;
   }
   result += tmp_241;
   std::complex<double> tmp_243;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_243 += B0(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPL(gO2,gI1))*
         CpbarUFdFdAhPR(gO1,gI1)*MFd(gI1);
   }
   result += tmp_243;
   std::complex<double> tmp_244;
   std::complex<double> tmp_245;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_245 += (-0.5 + B0(p,MFd(gI2),0))*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_244 += tmp_245;
   result += (-5.333333333333333) * tmp_244;
   std::complex<double> tmp_246;
   std::complex<double> tmp_247;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_247 += (-0.5 + B0(p,MFd(gI2),0))*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_246 += tmp_247;
   result += (-4) * tmp_246;
   std::complex<double> tmp_248;
   std::complex<double> tmp_249;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_249 += (-0.5 + B0(p,MFd(gI2),MVZ))*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_248 += tmp_249;
   result += (-4) * tmp_248;
   std::complex<double> tmp_250;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_250 += B0(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPL(gO2,gI2))*
         CpbarUFdconjHpFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_250;
   std::complex<double> tmp_251;
   std::complex<double> tmp_252;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_252 += (-0.5 + B0(p,MFu(gI2),MVWp))*Conj(CpbarUFdconjVWpFuPR(gO2,
         gI2))*CpbarUFdconjVWpFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_251 += tmp_252;
   result += (-4) * tmp_251;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_253;
   std::complex<double> tmp_254;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_255;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_255 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPR(gO2,gI1,
            gI2))*CpbarUFdhhFdPR(gO1,gI1,gI2);
      }
      tmp_254 += tmp_255;
   }
   tmp_253 += tmp_254;
   result += (-0.5) * tmp_253;
   std::complex<double> tmp_256;
   std::complex<double> tmp_257;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_257 += B1(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPR(gO2,gI1))*
         CpbarUFdFdAhPR(gO1,gI1);
   }
   tmp_256 += tmp_257;
   result += (-0.5) * tmp_256;
   std::complex<double> tmp_258;
   std::complex<double> tmp_259;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_259 += B1(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPR(gO2,gI2))*
         CpbarUFdconjHpFuPR(gO1,gI2);
   }
   tmp_258 += tmp_259;
   result += (-0.5) * tmp_258;
   std::complex<double> tmp_260;
   std::complex<double> tmp_261;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_261 += B1(p,MFu(gI2),MVWp)*Conj(CpbarUFdconjVWpFuPL(gO2,gI2))*
         CpbarUFdconjVWpFuPL(gO1,gI2);
   }
   tmp_260 += tmp_261;
   result += (-1) * tmp_260;
   std::complex<double> tmp_262;
   std::complex<double> tmp_263;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_263 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPL(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2);
   }
   tmp_262 += tmp_263;
   result += (-1.3333333333333333) * tmp_262;
   std::complex<double> tmp_264;
   std::complex<double> tmp_265;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_265 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPL(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2);
   }
   tmp_264 += tmp_265;
   result += (-1) * tmp_264;
   std::complex<double> tmp_266;
   std::complex<double> tmp_267;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_267 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPL(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2);
   }
   tmp_266 += tmp_267;
   result += (-1) * tmp_266;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_268;
   std::complex<double> tmp_269;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_270;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_270 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPL(gO2,gI1,
            gI2))*CpbarUFdhhFdPL(gO1,gI1,gI2);
      }
      tmp_269 += tmp_270;
   }
   tmp_268 += tmp_269;
   result += (-0.5) * tmp_268;
   std::complex<double> tmp_271;
   std::complex<double> tmp_272;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_272 += B1(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPL(gO2,gI1))*
         CpbarUFdFdAhPL(gO1,gI1);
   }
   tmp_271 += tmp_272;
   result += (-0.5) * tmp_271;
   std::complex<double> tmp_273;
   std::complex<double> tmp_274;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_274 += B1(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPL(gO2,gI2))*
         CpbarUFdconjHpFuPL(gO1,gI2);
   }
   tmp_273 += tmp_274;
   result += (-0.5) * tmp_273;
   std::complex<double> tmp_275;
   std::complex<double> tmp_276;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_276 += B1(p,MFu(gI2),MVWp)*Conj(CpbarUFdconjVWpFuPR(gO2,gI2))*
         CpbarUFdconjVWpFuPR(gO1,gI2);
   }
   tmp_275 += tmp_276;
   result += (-1) * tmp_275;
   std::complex<double> tmp_277;
   std::complex<double> tmp_278;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_278 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPR(gO1,gI2);
   }
   tmp_277 += tmp_278;
   result += (-1.3333333333333333) * tmp_277;
   std::complex<double> tmp_279;
   std::complex<double> tmp_280;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_280 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPR(gO1,gI2);
   }
   tmp_279 += tmp_280;
   result += (-1) * tmp_279;
   std::complex<double> tmp_281;
   std::complex<double> tmp_282;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_282 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPR(gO1,gI2);
   }
   tmp_281 += tmp_282;
   result += (-1) * tmp_281;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_283;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_284;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_284 += B0(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_283 += tmp_284;
   }
   result += tmp_283;
   std::complex<double> tmp_285;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_285 += B0(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_285;
   std::complex<double> tmp_286;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_286 += B0(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_286;
   std::complex<double> tmp_287;
   std::complex<double> tmp_288;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_288 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarUFuVWpFdPR(gO2,gI2))
         *CpbarUFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_287 += tmp_288;
   result += (-4) * tmp_287;
   std::complex<double> tmp_289;
   std::complex<double> tmp_290;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_290 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_289 += tmp_290;
   result += (-5.333333333333333) * tmp_289;
   std::complex<double> tmp_291;
   std::complex<double> tmp_292;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_292 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_291 += tmp_292;
   result += (-4) * tmp_291;
   std::complex<double> tmp_293;
   std::complex<double> tmp_294;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_294 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_293 += tmp_294;
   result += (-4) * tmp_293;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_295;
   std::complex<double> tmp_296;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_297;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_297 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPR(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2);
      }
      tmp_296 += tmp_297;
   }
   tmp_295 += tmp_296;
   result += (-0.5) * tmp_295;
   std::complex<double> tmp_298;
   std::complex<double> tmp_299;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_299 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPR(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1);
   }
   tmp_298 += tmp_299;
   result += (-0.5) * tmp_298;
   std::complex<double> tmp_300;
   std::complex<double> tmp_301;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_301 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPR(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2);
   }
   tmp_300 += tmp_301;
   result += (-0.5) * tmp_300;
   std::complex<double> tmp_302;
   std::complex<double> tmp_303;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_303 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPL(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2);
   }
   tmp_302 += tmp_303;
   result += (-1.3333333333333333) * tmp_302;
   std::complex<double> tmp_304;
   std::complex<double> tmp_305;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_305 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPL(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2);
   }
   tmp_304 += tmp_305;
   result += (-1) * tmp_304;
   std::complex<double> tmp_306;
   std::complex<double> tmp_307;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_307 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPL(gO2,gI2))*
         CpbarUFuVWpFdPL(gO1,gI2);
   }
   tmp_306 += tmp_307;
   result += (-1) * tmp_306;
   std::complex<double> tmp_308;
   std::complex<double> tmp_309;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_309 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPL(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2);
   }
   tmp_308 += tmp_309;
   result += (-1) * tmp_308;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_310;
   std::complex<double> tmp_311;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_312;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_312 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPL(gO1,gI1,gI2);
      }
      tmp_311 += tmp_312;
   }
   tmp_310 += tmp_311;
   result += (-0.5) * tmp_310;
   std::complex<double> tmp_313;
   std::complex<double> tmp_314;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_314 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPL(gO1,gI1);
   }
   tmp_313 += tmp_314;
   result += (-0.5) * tmp_313;
   std::complex<double> tmp_315;
   std::complex<double> tmp_316;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_316 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPL(gO1,gI2);
   }
   tmp_315 += tmp_316;
   result += (-0.5) * tmp_315;
   std::complex<double> tmp_317;
   std::complex<double> tmp_318;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_318 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPR(gO1,gI2);
   }
   tmp_317 += tmp_318;
   result += (-1.3333333333333333) * tmp_317;
   std::complex<double> tmp_319;
   std::complex<double> tmp_320;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_320 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPR(gO1,gI2);
   }
   tmp_319 += tmp_320;
   result += (-1) * tmp_319;
   std::complex<double> tmp_321;
   std::complex<double> tmp_322;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_322 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPR(gO2,gI2))*
         CpbarUFuVWpFdPR(gO1,gI2);
   }
   tmp_321 += tmp_322;
   result += (-1) * tmp_321;
   std::complex<double> tmp_323;
   std::complex<double> tmp_324;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_324 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPR(gO1,gI2);
   }
   tmp_323 += tmp_324;
   result += (-1) * tmp_323;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_325;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_326;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_326 += B0(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePL(gO2,gI1,
            gI2))*CpbarUFehhFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_325 += tmp_326;
   }
   result += tmp_325;
   std::complex<double> tmp_327;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_327 += B0(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPL(gO2,gI1))*
         CpbarUFeFeAhPR(gO1,gI1)*MFe(gI1);
   }
   result += tmp_327;
   std::complex<double> tmp_328;
   std::complex<double> tmp_329;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_329 += (-0.5 + B0(p,MFe(gI2),0))*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_328 += tmp_329;
   result += (-4) * tmp_328;
   std::complex<double> tmp_330;
   std::complex<double> tmp_331;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_331 += (-0.5 + B0(p,MFe(gI2),MVZ))*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_330 += tmp_331;
   result += (-4) * tmp_330;
   std::complex<double> tmp_332;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_332 += B0(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPL(gO2,gI2))*
         CpbarUFeconjHpFvPR(gO1,gI2)*MFv(gI2);
   }
   result += tmp_332;
   std::complex<double> tmp_333;
   std::complex<double> tmp_334;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_334 += (-0.5 + B0(p,MFv(gI2),MVWp))*Conj(CpbarUFeconjVWpFvPR(gO2,
         gI2))*CpbarUFeconjVWpFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_333 += tmp_334;
   result += (-4) * tmp_333;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_335;
   std::complex<double> tmp_336;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_337;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_337 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePR(gO2,gI1,
            gI2))*CpbarUFehhFePR(gO1,gI1,gI2);
      }
      tmp_336 += tmp_337;
   }
   tmp_335 += tmp_336;
   result += (-0.5) * tmp_335;
   std::complex<double> tmp_338;
   std::complex<double> tmp_339;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_339 += B1(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPR(gO2,gI1))*
         CpbarUFeFeAhPR(gO1,gI1);
   }
   tmp_338 += tmp_339;
   result += (-0.5) * tmp_338;
   std::complex<double> tmp_340;
   std::complex<double> tmp_341;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_341 += B1(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPR(gO2,gI2))*
         CpbarUFeconjHpFvPR(gO1,gI2);
   }
   tmp_340 += tmp_341;
   result += (-0.5) * tmp_340;
   std::complex<double> tmp_342;
   std::complex<double> tmp_343;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_343 += B1(p,MFv(gI2),MVWp)*Conj(CpbarUFeconjVWpFvPL(gO2,gI2))*
         CpbarUFeconjVWpFvPL(gO1,gI2);
   }
   tmp_342 += tmp_343;
   result += (-1) * tmp_342;
   std::complex<double> tmp_344;
   std::complex<double> tmp_345;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_345 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePL(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2);
   }
   tmp_344 += tmp_345;
   result += (-1) * tmp_344;
   std::complex<double> tmp_346;
   std::complex<double> tmp_347;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_347 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePL(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2);
   }
   tmp_346 += tmp_347;
   result += (-1) * tmp_346;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_348;
   std::complex<double> tmp_349;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_350;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_350 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePL(gO2,gI1,
            gI2))*CpbarUFehhFePL(gO1,gI1,gI2);
      }
      tmp_349 += tmp_350;
   }
   tmp_348 += tmp_349;
   result += (-0.5) * tmp_348;
   std::complex<double> tmp_351;
   std::complex<double> tmp_352;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_352 += B1(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPL(gO2,gI1))*
         CpbarUFeFeAhPL(gO1,gI1);
   }
   tmp_351 += tmp_352;
   result += (-0.5) * tmp_351;
   std::complex<double> tmp_353;
   std::complex<double> tmp_354;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_354 += B1(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPL(gO2,gI2))*
         CpbarUFeconjHpFvPL(gO1,gI2);
   }
   tmp_353 += tmp_354;
   result += (-0.5) * tmp_353;
   std::complex<double> tmp_355;
   std::complex<double> tmp_356;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_356 += B1(p,MFv(gI2),MVWp)*Conj(CpbarUFeconjVWpFvPR(gO2,gI2))*
         CpbarUFeconjVWpFvPR(gO1,gI2);
   }
   tmp_355 += tmp_356;
   result += (-1) * tmp_355;
   std::complex<double> tmp_357;
   std::complex<double> tmp_358;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_358 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePR(gO1,gI2);
   }
   tmp_357 += tmp_358;
   result += (-1) * tmp_357;
   std::complex<double> tmp_359;
   std::complex<double> tmp_360;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_360 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePR(gO1,gI2);
   }
   tmp_359 += tmp_360;
   result += (-1) * tmp_359;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpVZhhAh(1))*B00(p,MAh,Mhh(1));
   std::complex<double> tmp_361;
   std::complex<double> tmp_362;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_362 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_361 += tmp_362;
   result += (0.5) * tmp_361;
   std::complex<double> tmp_363;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_363 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_363;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWp_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpconjVWpHphh(1))*B00(p,Mhh(1),MHp);
   std::complex<double> tmp_364;
   std::complex<double> tmp_365;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_365 += A0(Mhh(gI1))*CpVWpconjVWphhhh(gI1,gI1);
   }
   tmp_364 += tmp_365;
   result += (0.5) * tmp_364;
   std::complex<double> tmp_366;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_366 += AbsSqr(CpconjVWpVWphh(gI2))*B0(p,MVWp,Mhh(gI2));
   }
   result += tmp_366;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_367;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_368;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_368 += B0(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPL(gO2,gI1,
            gI2))*CpbarFdhhFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_367 += tmp_368;
   }
   result += tmp_367;
   std::complex<double> tmp_369;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_369 += B0(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPL(gO2,gI1))*
         CpbarFdFdAhPR(gO1,gI1)*MFd(gI1);
   }
   result += tmp_369;
   std::complex<double> tmp_370;
   std::complex<double> tmp_371;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_371 += (-0.5 + B0(p,MFd(gI2),MVZ))*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_370 += tmp_371;
   result += (-4) * tmp_370;
   std::complex<double> tmp_372;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_372 += B0(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPL(gO2,gI2))*
         CpbarFdconjHpFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_372;
   std::complex<double> tmp_373;
   std::complex<double> tmp_374;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_374 += (-0.5 + B0(p,MFu(gI2),MVWp))*Conj(CpbarFdconjVWpFuPR(gO2,
         gI2))*CpbarFdconjVWpFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_373 += tmp_374;
   result += (-4) * tmp_373;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_375;
   std::complex<double> tmp_376;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_377;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_377 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPR(gO2,gI1,
            gI2))*CpbarFdhhFdPR(gO1,gI1,gI2);
      }
      tmp_376 += tmp_377;
   }
   tmp_375 += tmp_376;
   result += (-0.5) * tmp_375;
   std::complex<double> tmp_378;
   std::complex<double> tmp_379;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_379 += B1(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPR(gO2,gI1))*
         CpbarFdFdAhPR(gO1,gI1);
   }
   tmp_378 += tmp_379;
   result += (-0.5) * tmp_378;
   std::complex<double> tmp_380;
   std::complex<double> tmp_381;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_381 += B1(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPR(gO2,gI2))*
         CpbarFdconjHpFuPR(gO1,gI2);
   }
   tmp_380 += tmp_381;
   result += (-0.5) * tmp_380;
   std::complex<double> tmp_382;
   std::complex<double> tmp_383;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_383 += B1(p,MFu(gI2),MVWp)*Conj(CpbarFdconjVWpFuPL(gO2,gI2))*
         CpbarFdconjVWpFuPL(gO1,gI2);
   }
   tmp_382 += tmp_383;
   result += (-1) * tmp_382;
   std::complex<double> tmp_384;
   std::complex<double> tmp_385;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_385 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPL(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2);
   }
   tmp_384 += tmp_385;
   result += (-1) * tmp_384;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_386;
   std::complex<double> tmp_387;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_388;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_388 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPL(gO2,gI1,
            gI2))*CpbarFdhhFdPL(gO1,gI1,gI2);
      }
      tmp_387 += tmp_388;
   }
   tmp_386 += tmp_387;
   result += (-0.5) * tmp_386;
   std::complex<double> tmp_389;
   std::complex<double> tmp_390;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_390 += B1(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPL(gO2,gI1))*
         CpbarFdFdAhPL(gO1,gI1);
   }
   tmp_389 += tmp_390;
   result += (-0.5) * tmp_389;
   std::complex<double> tmp_391;
   std::complex<double> tmp_392;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_392 += B1(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPL(gO2,gI2))*
         CpbarFdconjHpFuPL(gO1,gI2);
   }
   tmp_391 += tmp_392;
   result += (-0.5) * tmp_391;
   std::complex<double> tmp_393;
   std::complex<double> tmp_394;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_394 += B1(p,MFu(gI2),MVWp)*Conj(CpbarFdconjVWpFuPR(gO2,gI2))*
         CpbarFdconjVWpFuPR(gO1,gI2);
   }
   tmp_393 += tmp_394;
   result += (-1) * tmp_393;
   std::complex<double> tmp_395;
   std::complex<double> tmp_396;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_396 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPR(gO1,gI2);
   }
   tmp_395 += tmp_396;
   result += (-1) * tmp_395;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_397;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_398;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_398 += B0(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePL(gO2,gI1,
            gI2))*CpbarFehhFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_397 += tmp_398;
   }
   result += tmp_397;
   std::complex<double> tmp_399;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_399 += B0(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPL(gO2,gI1))*
         CpbarFeFeAhPR(gO1,gI1)*MFe(gI1);
   }
   result += tmp_399;
   std::complex<double> tmp_400;
   std::complex<double> tmp_401;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_401 += (-0.5 + B0(p,MFe(gI2),MVZ))*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_400 += tmp_401;
   result += (-4) * tmp_400;
   std::complex<double> tmp_402;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_402 += B0(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPL(gO2,gI2))*
         CpbarFeconjHpFvPR(gO1,gI2)*MFv(gI2);
   }
   result += tmp_402;
   std::complex<double> tmp_403;
   std::complex<double> tmp_404;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_404 += (-0.5 + B0(p,MFv(gI2),MVWp))*Conj(CpbarFeconjVWpFvPR(gO2,
         gI2))*CpbarFeconjVWpFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_403 += tmp_404;
   result += (-4) * tmp_403;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_405;
   std::complex<double> tmp_406;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_407;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_407 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePR(gO2,gI1,
            gI2))*CpbarFehhFePR(gO1,gI1,gI2);
      }
      tmp_406 += tmp_407;
   }
   tmp_405 += tmp_406;
   result += (-0.5) * tmp_405;
   std::complex<double> tmp_408;
   std::complex<double> tmp_409;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_409 += B1(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPR(gO2,gI1))*
         CpbarFeFeAhPR(gO1,gI1);
   }
   tmp_408 += tmp_409;
   result += (-0.5) * tmp_408;
   std::complex<double> tmp_410;
   std::complex<double> tmp_411;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_411 += B1(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPR(gO2,gI2))*
         CpbarFeconjHpFvPR(gO1,gI2);
   }
   tmp_410 += tmp_411;
   result += (-0.5) * tmp_410;
   std::complex<double> tmp_412;
   std::complex<double> tmp_413;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_413 += B1(p,MFv(gI2),MVWp)*Conj(CpbarFeconjVWpFvPL(gO2,gI2))*
         CpbarFeconjVWpFvPL(gO1,gI2);
   }
   tmp_412 += tmp_413;
   result += (-1) * tmp_412;
   std::complex<double> tmp_414;
   std::complex<double> tmp_415;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_415 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePL(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2);
   }
   tmp_414 += tmp_415;
   result += (-1) * tmp_414;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_416;
   std::complex<double> tmp_417;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_418;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_418 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePL(gO2,gI1,
            gI2))*CpbarFehhFePL(gO1,gI1,gI2);
      }
      tmp_417 += tmp_418;
   }
   tmp_416 += tmp_417;
   result += (-0.5) * tmp_416;
   std::complex<double> tmp_419;
   std::complex<double> tmp_420;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_420 += B1(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPL(gO2,gI1))*
         CpbarFeFeAhPL(gO1,gI1);
   }
   tmp_419 += tmp_420;
   result += (-0.5) * tmp_419;
   std::complex<double> tmp_421;
   std::complex<double> tmp_422;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_422 += B1(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPL(gO2,gI2))*
         CpbarFeconjHpFvPL(gO1,gI2);
   }
   tmp_421 += tmp_422;
   result += (-0.5) * tmp_421;
   std::complex<double> tmp_423;
   std::complex<double> tmp_424;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_424 += B1(p,MFv(gI2),MVWp)*Conj(CpbarFeconjVWpFvPR(gO2,gI2))*
         CpbarFeconjVWpFvPR(gO1,gI2);
   }
   tmp_423 += tmp_424;
   result += (-1) * tmp_423;
   std::complex<double> tmp_425;
   std::complex<double> tmp_426;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_426 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePR(gO1,gI2);
   }
   tmp_425 += tmp_426;
   result += (-1) * tmp_425;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_427;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_428;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_428 += B0(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPL(gO2,gI1,
            gI2))*CpbarFuhhFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_427 += tmp_428;
   }
   result += tmp_427;
   std::complex<double> tmp_429;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_429 += B0(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPL(gO2,gI1))*
         CpbarFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_429;
   std::complex<double> tmp_430;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_430 += B0(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPL(gO2,gI2))*
         CpbarFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_430;
   std::complex<double> tmp_431;
   std::complex<double> tmp_432;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_432 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarFuVWpFdPR(gO2,gI2))*
         CpbarFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_431 += tmp_432;
   result += (-4) * tmp_431;
   std::complex<double> tmp_433;
   std::complex<double> tmp_434;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_434 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarFuVPFuPR(gO2,gI2))*
         CpbarFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_433 += tmp_434;
   result += (-4) * tmp_433;
   std::complex<double> tmp_435;
   std::complex<double> tmp_436;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_436 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_435 += tmp_436;
   result += (-4) * tmp_435;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_437;
   std::complex<double> tmp_438;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_439;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_439 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPR(gO2,gI1,
            gI2))*CpbarFuhhFuPR(gO1,gI1,gI2);
      }
      tmp_438 += tmp_439;
   }
   tmp_437 += tmp_438;
   result += (-0.5) * tmp_437;
   std::complex<double> tmp_440;
   std::complex<double> tmp_441;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_441 += B1(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPR(gO2,gI1))*
         CpbarFuFuAhPR(gO1,gI1);
   }
   tmp_440 += tmp_441;
   result += (-0.5) * tmp_440;
   std::complex<double> tmp_442;
   std::complex<double> tmp_443;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_443 += B1(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPR(gO2,gI2))*
         CpbarFuHpFdPR(gO1,gI2);
   }
   tmp_442 += tmp_443;
   result += (-0.5) * tmp_442;
   std::complex<double> tmp_444;
   std::complex<double> tmp_445;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_445 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPL(gO2,gI2))*CpbarFuVPFuPL
         (gO1,gI2);
   }
   tmp_444 += tmp_445;
   result += (-1) * tmp_444;
   std::complex<double> tmp_446;
   std::complex<double> tmp_447;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_447 += B1(p,MFd(gI2),MVWp)*Conj(CpbarFuVWpFdPL(gO2,gI2))*
         CpbarFuVWpFdPL(gO1,gI2);
   }
   tmp_446 += tmp_447;
   result += (-1) * tmp_446;
   std::complex<double> tmp_448;
   std::complex<double> tmp_449;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_449 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPL(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2);
   }
   tmp_448 += tmp_449;
   result += (-1) * tmp_448;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_450;
   std::complex<double> tmp_451;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_452;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_452 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPL(gO2,gI1,
            gI2))*CpbarFuhhFuPL(gO1,gI1,gI2);
      }
      tmp_451 += tmp_452;
   }
   tmp_450 += tmp_451;
   result += (-0.5) * tmp_450;
   std::complex<double> tmp_453;
   std::complex<double> tmp_454;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_454 += B1(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPL(gO2,gI1))*
         CpbarFuFuAhPL(gO1,gI1);
   }
   tmp_453 += tmp_454;
   result += (-0.5) * tmp_453;
   std::complex<double> tmp_455;
   std::complex<double> tmp_456;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_456 += B1(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPL(gO2,gI2))*
         CpbarFuHpFdPL(gO1,gI2);
   }
   tmp_455 += tmp_456;
   result += (-0.5) * tmp_455;
   std::complex<double> tmp_457;
   std::complex<double> tmp_458;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_458 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPR(gO2,gI2))*CpbarFuVPFuPR
         (gO1,gI2);
   }
   tmp_457 += tmp_458;
   result += (-1) * tmp_457;
   std::complex<double> tmp_459;
   std::complex<double> tmp_460;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_460 += B1(p,MFd(gI2),MVWp)*Conj(CpbarFuVWpFdPR(gO2,gI2))*
         CpbarFuVWpFdPR(gO1,gI2);
   }
   tmp_459 += tmp_460;
   result += (-1) * tmp_459;
   std::complex<double> tmp_461;
   std::complex<double> tmp_462;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_462 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPR(gO1,gI2);
   }
   tmp_461 += tmp_462;
   result += (-1) * tmp_461;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_463;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_464;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_464 += B0(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_463 += tmp_464;
   }
   result += tmp_463;
   std::complex<double> tmp_465;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_465 += B0(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_465;
   std::complex<double> tmp_466;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_466 += B0(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_466;
   std::complex<double> tmp_467;
   std::complex<double> tmp_468;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_468 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarUFuVWpFdPR(gO2,gI2))
         *CpbarUFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_467 += tmp_468;
   result += (-4) * tmp_467;
   std::complex<double> tmp_469;
   std::complex<double> tmp_470;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_470 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_469 += tmp_470;
   result += (-4) * tmp_469;
   std::complex<double> tmp_471;
   std::complex<double> tmp_472;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_472 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_471 += tmp_472;
   result += (-4) * tmp_471;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_473;
   std::complex<double> tmp_474;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_475;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_475 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPR(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2);
      }
      tmp_474 += tmp_475;
   }
   tmp_473 += tmp_474;
   result += (-0.5) * tmp_473;
   std::complex<double> tmp_476;
   std::complex<double> tmp_477;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_477 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPR(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1);
   }
   tmp_476 += tmp_477;
   result += (-0.5) * tmp_476;
   std::complex<double> tmp_478;
   std::complex<double> tmp_479;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_479 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPR(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2);
   }
   tmp_478 += tmp_479;
   result += (-0.5) * tmp_478;
   std::complex<double> tmp_480;
   std::complex<double> tmp_481;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_481 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPL(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2);
   }
   tmp_480 += tmp_481;
   result += (-1) * tmp_480;
   std::complex<double> tmp_482;
   std::complex<double> tmp_483;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_483 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPL(gO2,gI2))*
         CpbarUFuVWpFdPL(gO1,gI2);
   }
   tmp_482 += tmp_483;
   result += (-1) * tmp_482;
   std::complex<double> tmp_484;
   std::complex<double> tmp_485;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_485 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPL(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2);
   }
   tmp_484 += tmp_485;
   result += (-1) * tmp_484;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_486;
   std::complex<double> tmp_487;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_488;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_488 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPL(gO1,gI1,gI2);
      }
      tmp_487 += tmp_488;
   }
   tmp_486 += tmp_487;
   result += (-0.5) * tmp_486;
   std::complex<double> tmp_489;
   std::complex<double> tmp_490;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_490 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPL(gO1,gI1);
   }
   tmp_489 += tmp_490;
   result += (-0.5) * tmp_489;
   std::complex<double> tmp_491;
   std::complex<double> tmp_492;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_492 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPL(gO1,gI2);
   }
   tmp_491 += tmp_492;
   result += (-0.5) * tmp_491;
   std::complex<double> tmp_493;
   std::complex<double> tmp_494;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_494 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPR(gO1,gI2);
   }
   tmp_493 += tmp_494;
   result += (-1) * tmp_493;
   std::complex<double> tmp_495;
   std::complex<double> tmp_496;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_496 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPR(gO2,gI2))*
         CpbarUFuVWpFdPR(gO1,gI2);
   }
   tmp_495 += tmp_496;
   result += (-1) * tmp_495;
   std::complex<double> tmp_497;
   std::complex<double> tmp_498;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_498 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPR(gO1,gI2);
   }
   tmp_497 += tmp_498;
   result += (-1) * tmp_497;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::tadpole_hh(unsigned gO1) const
{
   std::complex<double> result;

   result += -0.5*A0(MAh)*CpUhhAhAh(gO1);
   result += A0(MVWp)*CpUhhbargWpCgWpC(gO1);
   result += A0(MVWp)*CpUhhbargWpgWp(gO1);
   result += A0(MVZ)*CpUhhbargZgZ(gO1);
   result += -(A0(MHp)*CpUhhconjHpHp(gO1));
   std::complex<double> tmp_499;
   std::complex<double> tmp_500;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_500 += A0(Mhh(gI1))*CpUhhhhhh(gO1,gI1,gI1);
   }
   tmp_499 += tmp_500;
   result += (-0.5) * tmp_499;
   std::complex<double> tmp_501;
   std::complex<double> tmp_502;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_502 += A0(MFd(gI1))*(CpUhhbarFdFdPL(gO1,gI1,gI1) + CpUhhbarFdFdPR(
         gO1,gI1,gI1))*MFd(gI1);
   }
   tmp_501 += tmp_502;
   result += (6) * tmp_501;
   std::complex<double> tmp_503;
   std::complex<double> tmp_504;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_504 += A0(MFe(gI1))*(CpUhhbarFeFePL(gO1,gI1,gI1) + CpUhhbarFeFePR(
         gO1,gI1,gI1))*MFe(gI1);
   }
   tmp_503 += tmp_504;
   result += (2) * tmp_503;
   std::complex<double> tmp_505;
   std::complex<double> tmp_506;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_506 += A0(MFu(gI1))*(CpUhhbarFuFuPL(gO1,gI1,gI1) + CpUhhbarFuFuPR(
         gO1,gI1,gI1))*MFu(gI1);
   }
   tmp_505 += tmp_506;
   result += (6) * tmp_505;
   result += 4*CpUhhconjVWpVWp(gO1)*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpUhhVZVZ(gO1)*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}








void CLASSNAME::calculate_MVG_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MVG) = 0.;
}

void CLASSNAME::calculate_MFv_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MFv).setConstant(0.);
}

void CLASSNAME::calculate_MVP_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MVP) = 0.;
}

void CLASSNAME::calculate_MVZ_pole()
{
   if (!force_output && problems.is_tachyon(VZ))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_VZ());
   const double p = MVZ;
   const double self_energy = Re(self_energy_VZ(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VZ);

   PHYSICAL(MVZ) = AbsSqrt(mass_sqr);
}

void CLASSNAME::calculate_MFd_pole()
{
   // diagonalization with medium precision
   Eigen::Matrix<double,3,3> self_energy_1;
   Eigen::Matrix<double,3,3> self_energy_PL;
   Eigen::Matrix<double,3,3> self_energy_PR;
   const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fd());
   for (unsigned es = 0; es < 3; ++es) {
      const double p = Abs(MFd(es));
      for (unsigned i1 = 0; i1 < 3; ++i1) {
         for (unsigned i2 = 0; i2 < 3; ++i2) {
            self_energy_1(i1,i2)  = Re(self_energy_Fd_1(p,i1,i2)
               );
            self_energy_PL(i1,i2) = Re(self_energy_Fd_PL(p,i1,i2
               ));
            self_energy_PR(i1,i2) = Re(self_energy_Fd_PR(p,i1,i2
               ));
         }
      }
      const Eigen::Matrix<double,3,3> delta_M(- self_energy_PR *
         M_tree - M_tree * self_energy_PL - self_energy_1);
      const Eigen::Matrix<double,3,3> M_1loop(M_tree + delta_M);
      Eigen::Array<double,3,1> eigen_values;
      decltype(Vd) mix_Vd;
      decltype(Ud) mix_Ud;
   #ifdef CHECK_EIGENVALUE_ERROR
      double eigenvalue_error;
      fs_svd(M_1loop, eigen_values, mix_Vd, mix_Ud, eigenvalue_error);
      problems.flag_bad_mass(NSM_info::Fd, eigenvalue_error >
         precision * Abs(eigen_values(0)));
   #else
      fs_svd(M_1loop, eigen_values, mix_Vd, mix_Ud);
   #endif
      if (es == 0) {
         PHYSICAL(Vd) = mix_Vd;
         PHYSICAL(Ud) = mix_Ud;
      }
      PHYSICAL(MFd(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MFu_pole()
{
   // diagonalization with medium precision
   const bool add_2loop_corrections = pole_mass_loop_order > 1 &&
      TOP_2LOOP_CORRECTION_QCD;
   const double currentScale = get_scale();

   const double qcd_1l = 0.025330295910584444*(-1.3333333333333333 + 1.*
      Log(Sqr(MFu(2))/Sqr(currentScale)))*Sqr(g3);

   double qcd_2l = 0.;

   if (add_2loop_corrections) {
      qcd_2l = -0.006995771808874528*Power(g3,4) -
         0.004518101565212637*Power(g3,4)*Log(Sqr(currentScale)/Sqr(MFu(2))) -
         0.0008822328500119351*Power(g3,4)*Sqr(Log(Power(currentScale,2)/Sqr(
         MFu(2))));
   }

   Eigen::Matrix<double,3,3> self_energy_1;
   Eigen::Matrix<double,3,3> self_energy_PL;
   Eigen::Matrix<double,3,3> self_energy_PR;
   const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fu());
   for (unsigned es = 0; es < 3; ++es) {
      const double p = Abs(MFu(es));
      for (unsigned i1 = 0; i1 < 3; ++i1) {
         for (unsigned i2 = 0; i2 < 3; ++i2) {
            if (i1 == 2 && i2 == 2) {
               self_energy_1(i1,i2)  = Re(
                  self_energy_Fu_1_heavy(p,i1,i2));
               self_energy_PL(i1,i2) = Re(
                  self_energy_Fu_PL_heavy(p,i1,i2));
               self_energy_PR(i1,i2) = Re(
                  self_energy_Fu_PR_heavy(p,i1,i2));
            } else {
               self_energy_1(i1,i2)  = Re(self_energy_Fu_1(p,
                  i1,i2));
               self_energy_PL(i1,i2) = Re(self_energy_Fu_PL(p
                  ,i1,i2));
               self_energy_PR(i1,i2) = Re(self_energy_Fu_PR(p
                  ,i1,i2));
            }
         }
      }
      Eigen::Matrix<double,3,3> delta_M(- self_energy_PR * M_tree -
         M_tree * self_energy_PL - self_energy_1);
      delta_M(2,2) -= M_tree(2,2) * (qcd_1l + qcd_2l);
      const Eigen::Matrix<double,3,3> M_1loop(M_tree + delta_M);
      Eigen::Array<double,3,1> eigen_values;
      decltype(Vu) mix_Vu;
      decltype(Uu) mix_Uu;
   #ifdef CHECK_EIGENVALUE_ERROR
      double eigenvalue_error;
      fs_svd(M_1loop, eigen_values, mix_Vu, mix_Uu, eigenvalue_error);
      problems.flag_bad_mass(NSM_info::Fu, eigenvalue_error >
         precision * Abs(eigen_values(0)));
   #else
      fs_svd(M_1loop, eigen_values, mix_Vu, mix_Uu);
   #endif
      if (es == 0) {
         PHYSICAL(Vu) = mix_Vu;
         PHYSICAL(Uu) = mix_Uu;
      }
      PHYSICAL(MFu(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MFe_pole()
{
   // diagonalization with medium precision
   Eigen::Matrix<double,3,3> self_energy_1;
   Eigen::Matrix<double,3,3> self_energy_PL;
   Eigen::Matrix<double,3,3> self_energy_PR;
   const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fe());
   for (unsigned es = 0; es < 3; ++es) {
      const double p = Abs(MFe(es));
      for (unsigned i1 = 0; i1 < 3; ++i1) {
         for (unsigned i2 = 0; i2 < 3; ++i2) {
            self_energy_1(i1,i2)  = Re(self_energy_Fe_1(p,i1,i2)
               );
            self_energy_PL(i1,i2) = Re(self_energy_Fe_PL(p,i1,i2
               ));
            self_energy_PR(i1,i2) = Re(self_energy_Fe_PR(p,i1,i2
               ));
         }
      }
      const Eigen::Matrix<double,3,3> delta_M(- self_energy_PR *
         M_tree - M_tree * self_energy_PL - self_energy_1);
      const Eigen::Matrix<double,3,3> M_1loop(M_tree + delta_M);
      Eigen::Array<double,3,1> eigen_values;
      decltype(Ve) mix_Ve;
      decltype(Ue) mix_Ue;
   #ifdef CHECK_EIGENVALUE_ERROR
      double eigenvalue_error;
      fs_svd(M_1loop, eigen_values, mix_Ve, mix_Ue, eigenvalue_error);
      problems.flag_bad_mass(NSM_info::Fe, eigenvalue_error >
         precision * Abs(eigen_values(0)));
   #else
      fs_svd(M_1loop, eigen_values, mix_Ve, mix_Ue);
   #endif
      if (es == 0) {
         PHYSICAL(Ve) = mix_Ve;
         PHYSICAL(Ue) = mix_Ue;
      }
      PHYSICAL(MFe(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_Mhh_pole()
{
   if (!force_output && problems.is_tachyon(hh))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(Mhh) old_Mhh(Mhh), new_Mhh(Mhh);

   do {
      Eigen::Matrix<double,2,2> self_energy;
      const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_hh());

      for (unsigned es = 0; es < 2; ++es) {

         const double p = Abs(old_Mhh(es));
         for (unsigned i1 = 0; i1 < 2; ++i1) {
            for (unsigned i2 = i1; i2 < 2; ++i2) {
               self_energy(i1,i2) = Re(self_energy_hh(p,i1,i2
                  ));
            }
         }

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZH;
         #ifdef CHECK_EIGENVALUE_ERROR
            double eigenvalue_error;
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZH, eigenvalue_error);
            problems.flag_bad_mass(NSM_info::hh,
               eigenvalue_error > precision * Abs(eigen_values(0)));
         #else
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZH);
         #endif

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(hh);

         PHYSICAL(Mhh(es)) = AbsSqrt(eigen_values(es));
         if (es == 0)
            PHYSICAL(ZH) = mix_ZH;
      }

      new_Mhh = PHYSICAL(Mhh);
      diff = MaxRelDiff(new_Mhh, old_Mhh);
      old_Mhh = new_Mhh;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(NSM_info::hh);
   else
      problems.unflag_no_pole_mass_convergence(NSM_info::hh);
}

void CLASSNAME::calculate_MVWp_pole()
{
   if (!force_output && problems.is_tachyon(VWp))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_VWp());
   const double p = MVWp;
   const double self_energy = Re(self_energy_VWp(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VWp);

   PHYSICAL(MVWp) = AbsSqrt(mass_sqr);
}

double CLASSNAME::calculate_MVWp_pole(double p)
{
   if (!force_output && problems.is_tachyon(VWp))
      return 0.;

   const double self_energy = Re(self_energy_VWp(p));
   const double mass_sqr = get_mass_matrix_VWp() - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VWp);

   return AbsSqrt(mass_sqr);
}

double CLASSNAME::calculate_MVZ_pole(double p)
{
   if (!force_output && problems.is_tachyon(VZ))
      return 0.;

   const double self_energy = Re(self_energy_VZ(p));
   const double mass_sqr = get_mass_matrix_VZ() - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VZ);

   return AbsSqrt(mass_sqr);
}


double CLASSNAME::calculate_MFu_DRbar(double m_pole, int idx) const
{
   const double p = m_pole;
   const double self_energy_1  = Re(self_energy_Fu_1_heavy_rotated(p, idx
      , idx));
   const double self_energy_PL = Re(self_energy_Fu_PL_heavy_rotated(p,
      idx, idx));
   const double self_energy_PR = Re(self_energy_Fu_PR_heavy_rotated(p,
      idx, idx));

   const double currentScale = get_scale();
   const double qcd_1l = 0.025330295910584444*(-1.3333333333333333 + 1.*
      Log(Sqr(MFu(2))/Sqr(currentScale)))*Sqr(g3);
   const double qcd_2l = -0.005855107113909601*Power(g3,4) -
      0.004518101565212637*Power(g3,4)*Log(Sqr(currentScale)/Sqr(MFu(2))) -
      0.0017109970424473893*Power(g3,4)*Log(Sqr(MFu(2))/Sqr(currentScale)) +
      0.000641623890917771*Power(g3,4)*Sqr(Log(Power(MFu(2),2)/Sqr(currentScale
      ))) - 0.0008822328500119351*Power(g3,4)*Sqr(Log(Power(currentScale,2)/Sqr
      (MFu(2))));

   const double m_susy_drbar = m_pole + self_energy_1 + m_pole * (
      self_energy_PL + self_energy_PR + qcd_1l + qcd_2l);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFd_DRbar(double m_sm_msbar, int idx) const
{
   const double p = m_sm_msbar;
   const double self_energy_1  = Re(self_energy_Fd_1_heavy_rotated(p, idx
      , idx));
   const double self_energy_PL = Re(self_energy_Fd_PL_heavy_rotated(p,
      idx, idx));
   const double self_energy_PR = Re(self_energy_Fd_PR_heavy_rotated(p,
      idx, idx));
   const double m_tree = MFd(2);
   const double drbar_conversion = 1;
   const double m_sm_drbar = m_sm_msbar * drbar_conversion;

   const double m_susy_drbar = m_sm_drbar / (1.0 - self_energy_1/m_tree -
      self_energy_PL - self_energy_PR);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFe_DRbar(double m_sm_msbar, int idx) const
{
   const double p = m_sm_msbar;
   const double self_energy_1  = Re(self_energy_Fe_1_heavy_rotated(p, idx
      , idx));
   const double self_energy_PL = Re(self_energy_Fe_PL_heavy_rotated(p,
      idx, idx));
   const double self_energy_PR = Re(self_energy_Fe_PR_heavy_rotated(p,
      idx, idx));
   const double drbar_conversion = 1;
   const double m_sm_drbar = m_sm_msbar * drbar_conversion;

   const double m_susy_drbar = m_sm_drbar + self_energy_1 + m_sm_drbar *
      (self_energy_PL + self_energy_PR);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFv_DRbar(double, int) const
{
   return 0.0;
}

double CLASSNAME::calculate_MVP_DRbar(double)
{
   return 0.0;
}

double CLASSNAME::calculate_MVZ_DRbar(double m_pole)
{
   const double p = m_pole;
   const double self_energy = Re(self_energy_VZ(p));
   const double mass_sqr = Sqr(m_pole) + self_energy;

   if (mass_sqr < 0.) {
      problems.flag_tachyon(VZ);
      return m_pole;
   }

   return AbsSqrt(mass_sqr);
}

double CLASSNAME::calculate_MVWp_DRbar(double m_pole)
{
   const double p = m_pole;
   const double self_energy = Re(self_energy_VWp(p));
   const double mass_sqr = Sqr(m_pole) + self_energy;

   if (mass_sqr < 0.) {
      problems.flag_tachyon(VWp);
      return m_pole;
   }

   return AbsSqrt(mass_sqr);
}


double CLASSNAME::ThetaW() const
{
   return ArcTan(g1/g2);
}


std::ostream& operator<<(std::ostream& ostr, const NSM_mass_eigenstates& model)
{
   model.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
