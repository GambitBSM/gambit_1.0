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

// File generated at Fri 28 Aug 2015 18:02:36

/**
 * @file SSDM_mass_eigenstates.cpp
 * @brief implementation of the SSDM model class
 *
 * Contains the definition of the SSDM model class methods
 * which solve EWSB and calculate pole masses and mixings from DRbar
 * parameters.
 *
 * This file was generated at Fri 28 Aug 2015 18:02:36 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#include "SSDM_mass_eigenstates.hpp"
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

using namespace SSDM_info;

#define CLASSNAME SSDM_mass_eigenstates

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

CLASSNAME::SSDM_mass_eigenstates(const SSDM_input_parameters& input_)
   : SSDM_soft_parameters(input_)
   , number_of_ewsb_iterations(100)
   , number_of_mass_iterations(20)
   , ewsb_loop_order(2)
   , pole_mass_loop_order(2)
   , calculate_sm_pole_masses(false)
   , force_output(false)
   , precision(1.0e-3)
   , ewsb_iteration_precision(1.0e-5)
   , physical()
   , problems(SSDM_info::particle_names)
   , two_loop_corrections()
#ifdef ENABLE_THREADS
   , thread_exception()
#endif
   , MVG(0), MHp(0), Mss(0), MFv(Eigen::Array<double,3,1>::Zero()), MAh(0), Mhh
      (0), MVP(0), MVZ(0), MFd(Eigen::Array<double,3,1>::Zero()), MFu(Eigen::Array
      <double,3,1>::Zero()), MFe(Eigen::Array<double,3,1>::Zero()), MVWp(0)

   , Vd(Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ud(Eigen::Matrix<
      std::complex<double>,3,3>::Zero()), Vu(Eigen::Matrix<std::complex<double>,3,
      3>::Zero()), Uu(Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ve(
      Eigen::Matrix<std::complex<double>,3,3>::Zero()), Ue(Eigen::Matrix<
      std::complex<double>,3,3>::Zero())


{
}

CLASSNAME::~SSDM_mass_eigenstates()
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

const SSDM_physical& CLASSNAME::get_physical() const
{
   return physical;
}

SSDM_physical& CLASSNAME::get_physical()
{
   return physical;
}

void CLASSNAME::set_physical(const SSDM_physical& physical_)
{
   physical = physical_;
}

const Problems<SSDM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems() const
{
   return problems;
}

Problems<SSDM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems()
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

   if (ewsb_loop_order > 0) {
      tadpole[0] -= Re(tadpole_hh());

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
   SSDM_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   model->set_Lambda1(gsl_vector_get(x, 0));


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

   Lambda1 = solver->get_solution(0);


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

   const double old_Lambda1 = Lambda1;

   Lambda1 = Re(-(mu2/Sqr(v)));

   const bool is_finite = IsFinite(Lambda1);

   if (!is_finite) {
      Lambda1 = old_Lambda1;
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
   x_init[0] = Lambda1;

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
      tadpole[0] += Re(tadpole_hh());

      if (ewsb_loop_order > 1) {

      }
   }

   double Lambda1;

   Lambda1 = Re((-(mu2*v) + tadpole[0])/Power(v,3));

   const bool is_finite = IsFinite(Lambda1);


   if (is_finite) {
      error = GSL_SUCCESS;
      ewsb_parameters[0] = Lambda1;

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
   SSDM_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   const double Lambda1 = gsl_vector_get(x, 0);

   model->set_Lambda1(Lambda1);


   if (ewsb_loop_order > 0)
      model->calculate_DRbar_masses();

   double ewsb_parameters[number_of_ewsb_equations] =
      { Lambda1 };

   const int status = model->ewsb_step(ewsb_parameters);

   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      gsl_vector_set(f, i, ewsb_parameters[i]);

   return status;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   ostr << "========================================\n"
           "SSDM\n"
           "========================================\n";
   SSDM_soft_parameters::print(ostr);
   ostr << "----------------------------------------\n"
           "tree-level DRbar masses:\n"
           "----------------------------------------\n";
   ostr << "MVG = " << MVG << '\n';
   ostr << "MHp = " << MHp << '\n';
   ostr << "Mss = " << Mss << '\n';
   ostr << "MFv = " << MFv.transpose() << '\n';
   ostr << "MAh = " << MAh << '\n';
   ostr << "Mhh = " << Mhh << '\n';
   ostr << "MVP = " << MVP << '\n';
   ostr << "MVZ = " << MVZ << '\n';
   ostr << "MFd = " << MFd.transpose() << '\n';
   ostr << "MFu = " << MFu.transpose() << '\n';
   ostr << "MFe = " << MFe.transpose() << '\n';
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
   const auto old_Lambda1 = Lambda1;

   solve_ewsb_tree_level();

   calculate_MVG();
   calculate_MVP();
   calculate_MVZ();
   calculate_MVWp();
   calculate_MHp();
   calculate_Mss();
   calculate_MFv();
   calculate_MAh();
   calculate_Mhh();
   calculate_MFd();
   calculate_MFu();
   calculate_MFe();

   Lambda1 = old_Lambda1;

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
   std::thread thread_Mss(Thread(this, &CLASSNAME::calculate_Mss_pole));

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
   thread_Mss.join();


   if (thread_exception != 0)
      std::rethrow_exception(thread_exception);
#else
   calculate_Mhh_pole();
   calculate_Mss_pole();

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
   PHYSICAL(Mss) = Mss;
   PHYSICAL(MFv) = MFv;
   PHYSICAL(MAh) = MAh;
   PHYSICAL(Mhh) = Mhh;
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
   Mss = 0.;
   MFv = Eigen::Matrix<double,3,1>::Zero();
   MAh = 0.;
   Mhh = 0.;
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
   MVWp = 0.;


}

void CLASSNAME::clear_problems()
{
   problems.unflag_all_tachyons();
}

void CLASSNAME::clear()
{
   SSDM_soft_parameters::clear();
   clear_DRbar_parameters();
   physical.clear();
   problems.clear();
}

std::string CLASSNAME::name() const
{
   return "SSDM";
}

void CLASSNAME::run_to(double scale, double eps)
{
   if (eps < 0.0)
      eps = precision;
   SSDM_soft_parameters::run_to(scale, eps);
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
   const double mass_matrix_Hp = Re(mu2 + Lambda1*Sqr(v) + 0.25*Sqr(g2)*
      Sqr(v));

   return mass_matrix_Hp;
}

void CLASSNAME::calculate_MHp()
{
   const auto mass_matrix_Hp = get_mass_matrix_Hp();
   MHp = calculate_singlet_mass(mass_matrix_Hp);

   if (MHp < 0.)
      problems.flag_tachyon(SSDM_info::Hp);

   MHp = AbsSqrt(MHp);
}

double CLASSNAME::get_mass_matrix_ss() const
{
   const double mass_matrix_ss = Re(mS2 + Lambda2*Sqr(v));

   return mass_matrix_ss;
}

void CLASSNAME::calculate_Mss()
{
   const auto mass_matrix_ss = get_mass_matrix_ss();
   Mss = calculate_singlet_mass(mass_matrix_ss);

   if (Mss < 0.)
      problems.flag_tachyon(SSDM_info::ss);

   Mss = AbsSqrt(Mss);
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
   const double mass_matrix_Ah = Re(0.25*(4*(mu2 + Lambda1*Sqr(v)) + Sqr(
      v)*Sqr(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()))));

   return mass_matrix_Ah;
}

void CLASSNAME::calculate_MAh()
{
   const auto mass_matrix_Ah = get_mass_matrix_Ah();
   MAh = calculate_singlet_mass(mass_matrix_Ah);

   if (MAh < 0.)
      problems.flag_tachyon(SSDM_info::Ah);

   MAh = AbsSqrt(MAh);
}

double CLASSNAME::get_mass_matrix_hh() const
{
   const double mass_matrix_hh = Re(mu2 + 3*Lambda1*Sqr(v));

   return mass_matrix_hh;
}

void CLASSNAME::calculate_Mhh()
{
   const auto mass_matrix_hh = get_mass_matrix_hh();
   Mhh = calculate_singlet_mass(mass_matrix_hh);

   if (Mhh < 0.)
      problems.flag_tachyon(SSDM_info::hh);

   Mhh = AbsSqrt(Mhh);
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
   const double mass_matrix_VZ = Re(0.25*Sqr(v)*Sqr(g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW())));

   return mass_matrix_VZ;
}

void CLASSNAME::calculate_MVZ()
{
   const auto mass_matrix_VZ = get_mass_matrix_VZ();
   MVZ = calculate_singlet_mass(mass_matrix_VZ);

   if (MVZ < 0.)
      problems.flag_tachyon(SSDM_info::VZ);

   MVZ = AbsSqrt(MVZ);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fd() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fd;

   mass_matrix_Fd(0,0) = 0.7071067811865475*v*Yd(0,0);
   mass_matrix_Fd(0,1) = 0.7071067811865475*v*Yd(1,0);
   mass_matrix_Fd(0,2) = 0.7071067811865475*v*Yd(2,0);
   mass_matrix_Fd(1,0) = 0.7071067811865475*v*Yd(0,1);
   mass_matrix_Fd(1,1) = 0.7071067811865475*v*Yd(1,1);
   mass_matrix_Fd(1,2) = 0.7071067811865475*v*Yd(2,1);
   mass_matrix_Fd(2,0) = 0.7071067811865475*v*Yd(0,2);
   mass_matrix_Fd(2,1) = 0.7071067811865475*v*Yd(1,2);
   mass_matrix_Fd(2,2) = 0.7071067811865475*v*Yd(2,2);

   return mass_matrix_Fd;
}

void CLASSNAME::calculate_MFd()
{
   const auto mass_matrix_Fd(get_mass_matrix_Fd());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fd, MFd, Vd, Ud, eigenvalue_error);
   problems.flag_bad_mass(SSDM_info::Fd, eigenvalue_error > precision *
      Abs(MFd(0)));
#else
   fs_svd(mass_matrix_Fd, MFd, Vd, Ud);
#endif
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fu() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fu;

   mass_matrix_Fu(0,0) = -0.7071067811865475*v*Yu(0,0);
   mass_matrix_Fu(0,1) = -0.7071067811865475*v*Yu(1,0);
   mass_matrix_Fu(0,2) = -0.7071067811865475*v*Yu(2,0);
   mass_matrix_Fu(1,0) = -0.7071067811865475*v*Yu(0,1);
   mass_matrix_Fu(1,1) = -0.7071067811865475*v*Yu(1,1);
   mass_matrix_Fu(1,2) = -0.7071067811865475*v*Yu(2,1);
   mass_matrix_Fu(2,0) = -0.7071067811865475*v*Yu(0,2);
   mass_matrix_Fu(2,1) = -0.7071067811865475*v*Yu(1,2);
   mass_matrix_Fu(2,2) = -0.7071067811865475*v*Yu(2,2);

   return mass_matrix_Fu;
}

void CLASSNAME::calculate_MFu()
{
   const auto mass_matrix_Fu(get_mass_matrix_Fu());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fu, MFu, Vu, Uu, eigenvalue_error);
   problems.flag_bad_mass(SSDM_info::Fu, eigenvalue_error > precision *
      Abs(MFu(0)));
#else
   fs_svd(mass_matrix_Fu, MFu, Vu, Uu);
#endif
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fe() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fe;

   mass_matrix_Fe(0,0) = 0.7071067811865475*v*Ye(0,0);
   mass_matrix_Fe(0,1) = 0.7071067811865475*v*Ye(1,0);
   mass_matrix_Fe(0,2) = 0.7071067811865475*v*Ye(2,0);
   mass_matrix_Fe(1,0) = 0.7071067811865475*v*Ye(0,1);
   mass_matrix_Fe(1,1) = 0.7071067811865475*v*Ye(1,1);
   mass_matrix_Fe(1,2) = 0.7071067811865475*v*Ye(2,1);
   mass_matrix_Fe(2,0) = 0.7071067811865475*v*Ye(0,2);
   mass_matrix_Fe(2,1) = 0.7071067811865475*v*Ye(1,2);
   mass_matrix_Fe(2,2) = 0.7071067811865475*v*Ye(2,2);

   return mass_matrix_Fe;
}

void CLASSNAME::calculate_MFe()
{
   const auto mass_matrix_Fe(get_mass_matrix_Fe());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Fe, MFe, Ve, Ue, eigenvalue_error);
   problems.flag_bad_mass(SSDM_info::Fe, eigenvalue_error > precision *
      Abs(MFe(0)));
#else
   fs_svd(mass_matrix_Fe, MFe, Ve, Ue);
#endif
}

double CLASSNAME::get_mass_matrix_VWp() const
{
   const double mass_matrix_VWp = Re(0.25*Sqr(g2)*Sqr(v));

   return mass_matrix_VWp;
}

void CLASSNAME::calculate_MVWp()
{
   const auto mass_matrix_VWp = get_mass_matrix_VWp();
   MVWp = calculate_singlet_mass(mass_matrix_VWp);

   if (MVWp < 0.)
      problems.flag_tachyon(SSDM_info::VWp);

   MVWp = AbsSqrt(MVWp);
}


double CLASSNAME::get_ewsb_eq_hh_1() const
{
   double result = Re(mu2*v + Lambda1*Power(v,3));

   return result;
}



double CLASSNAME::CpconjHpHphh() const
{
   double result = 0.0;

   result = -2*Lambda1*v;

   return result;
}

double CLASSNAME::CpconjHpVWpVP() const
{
   double result = 0.0;

   result = 0.3872983346207417*g1*g2*v*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjHpVZVWp() const
{
   double result = 0.0;

   result = -0.3872983346207417*g1*g2*v*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpHpgWpCbargZ() const
{
   double result = 0.0;

   result = 0.25*g2*v*(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjHpbargWpCgZ() const
{
   double result = 0.0;

   result = 0.05*g2*v*(-5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW())
      );

   return result;
}

double CLASSNAME::CpHpgZbargWp() const
{
   double result = 0.0;

   result = 0.05*g2*v*(-5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW())
      );

   return result;
}

double CLASSNAME::CpconjHpbargZgWp() const
{
   double result = 0.0;

   result = 0.25*g2*v*(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpHpconjHpAhAh() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

double CLASSNAME::CpHpconjHphhhh() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

double CLASSNAME::CpHpconjHpssss() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::CpHpconjHpconjHpHp() const
{
   double result = 0.0;

   result = -4*Lambda1;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpVWpAh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2;

   return result;
}

double CLASSNAME::CpconjHpVWphh() const
{
   double result = 0.0;

   result = -0.5*g2;

   return result;
}

double CLASSNAME::CpconjHpVPHp() const
{
   double result = 0.0;

   result = 0.1*(-3.872983346207417*g1*Cos(ThetaW()) - 5*g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjHpVZHp() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

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

   result = 0.1*(-7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 5*Sqr(
      g2)*Sqr(Cos(ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjHpbarFdFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_0;
   std::complex<double> tmp_1;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2;
      std::complex<double> tmp_3;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_3 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_2 += tmp_3;
      tmp_1 += (Vd(gI1,j2)) * tmp_2;
   }
   tmp_0 += tmp_1;
   result += (-1) * tmp_0;

   return result;
}

std::complex<double> CLASSNAME::CpconjHpbarFdFuPL(unsigned gI1, unsigned gI2) const
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
      tmp_5 += (Conj(Vu(gI2,j2))) * tmp_6;
   }
   tmp_4 += tmp_5;
   result += (-1) * tmp_4;

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

   std::complex<double> tmp_8;
   std::complex<double> tmp_9;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_9 += Conj(Ue(gI1,j1))*Ye(j1,gI2);
   }
   tmp_8 += tmp_9;
   result += (-1) * tmp_8;

   return result;
}

double CLASSNAME::Cpsssshh() const
{
   double result = 0.0;

   result = -2*Lambda2*v;

   return result;
}

double CLASSNAME::CpssssAhAh() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::Cpsssshhhh() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::Cpssssssss() const
{
   double result = 0.0;

   result = -24*Lambda3;

   return result;
}

double CLASSNAME::CpssssconjHpHp() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::CpAhhhAh() const
{
   double result = 0.0;

   result = -2*Lambda1*v;

   return result;
}

std::complex<double> CLASSNAME::CpAhbargWpgWp() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*v*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpAhbargWpCgWpC() const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.25)*v*Sqr(g2);

   return result;
}

double CLASSNAME::CpAhAhAhAh() const
{
   double result = 0.0;

   result = -6*Lambda1;

   return result;
}

double CLASSNAME::CpAhAhhhhh() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

double CLASSNAME::CpAhAhssss() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::CpAhAhconjHpHp() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

std::complex<double> CLASSNAME::CpAhVZhh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.1)*(5*g2*Cos(ThetaW()) + 3.872983346207417
      *g1*Sin(ThetaW()));

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

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFdFdPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_10;
   std::complex<double> tmp_11;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_12;
      std::complex<double> tmp_13;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_13 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_12 += tmp_13;
      tmp_11 += (Vd(gI1,j2)) * tmp_12;
   }
   tmp_10 += tmp_11;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_10;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFdFdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_14;
   std::complex<double> tmp_15;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_16;
      std::complex<double> tmp_17;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_17 += Conj(Ud(gI1,j1))*Yd(j1,j2);
      }
      tmp_16 += tmp_17;
      tmp_15 += (Conj(Vd(gI2,j2))) * tmp_16;
   }
   tmp_14 += tmp_15;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_14;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFeFePR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_18;
   std::complex<double> tmp_19;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_20;
      std::complex<double> tmp_21;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_21 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_20 += tmp_21;
      tmp_19 += (Ve(gI1,j2)) * tmp_20;
   }
   tmp_18 += tmp_19;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_18;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFeFePL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_22;
   std::complex<double> tmp_23;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_24;
      std::complex<double> tmp_25;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_25 += Conj(Ue(gI1,j1))*Ye(j1,j2);
      }
      tmp_24 += tmp_25;
      tmp_23 += (Conj(Ve(gI2,j2))) * tmp_24;
   }
   tmp_22 += tmp_23;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_22;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFuFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_26;
   std::complex<double> tmp_27;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_28;
      std::complex<double> tmp_29;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_29 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_28 += tmp_29;
      tmp_27 += (Vu(gI1,j2)) * tmp_28;
   }
   tmp_26 += tmp_27;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_26;

   return result;
}

std::complex<double> CLASSNAME::CpAhbarFuFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_30;
   std::complex<double> tmp_31;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_32;
      std::complex<double> tmp_33;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_33 += Conj(Uu(gI1,j1))*Yu(j1,j2);
      }
      tmp_32 += tmp_33;
      tmp_31 += (Conj(Vu(gI2,j2))) * tmp_32;
   }
   tmp_30 += tmp_31;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_30;

   return result;
}

double CLASSNAME::CphhAhAh() const
{
   double result = 0.0;

   result = -2*Lambda1*v;

   return result;
}

double CLASSNAME::Cphhhhhh() const
{
   double result = 0.0;

   result = -6*Lambda1*v;

   return result;
}

double CLASSNAME::Cphhssss() const
{
   double result = 0.0;

   result = -2*Lambda2*v;

   return result;
}

double CLASSNAME::CphhVZVZ() const
{
   double result = 0.0;

   result = 0.5*v*Sqr(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CphhbargWpgWp() const
{
   double result = 0.0;

   result = -0.25*v*Sqr(g2);

   return result;
}

double CLASSNAME::CphhbargWpCgWpC() const
{
   double result = 0.0;

   result = -0.25*v*Sqr(g2);

   return result;
}

double CLASSNAME::CphhbargZgZ() const
{
   double result = 0.0;

   result = -0.25*v*Sqr(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()))
      ;

   return result;
}

double CLASSNAME::CphhconjHpHp() const
{
   double result = 0.0;

   result = -2*Lambda1*v;

   return result;
}

double CLASSNAME::CphhconjVWpVWp() const
{
   double result = 0.0;

   result = 0.5*v*Sqr(g2);

   return result;
}

double CLASSNAME::CphhhhAhAh() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

double CLASSNAME::Cphhhhhhhh() const
{
   double result = 0.0;

   result = -6*Lambda1;

   return result;
}

double CLASSNAME::Cphhhhssss() const
{
   double result = 0.0;

   result = -2*Lambda2;

   return result;
}

double CLASSNAME::CphhhhconjHpHp() const
{
   double result = 0.0;

   result = -2*Lambda1;

   return result;
}

std::complex<double> CLASSNAME::CphhVZAh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.1)*(5*g2*Cos(ThetaW()) + 3.872983346207417
      *g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CphhconjVWpHp() const
{
   double result = 0.0;

   result = 0.5*g2;

   return result;
}

double CLASSNAME::CphhhhconjVWpVWp() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CphhhhVZVZ() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CphhbarFdFdPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_34;
   std::complex<double> tmp_35;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_36;
      std::complex<double> tmp_37;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_37 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_36 += tmp_37;
      tmp_35 += (Vd(gI1,j2)) * tmp_36;
   }
   tmp_34 += tmp_35;
   result += (-0.7071067811865475) * tmp_34;

   return result;
}

std::complex<double> CLASSNAME::CphhbarFdFdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_38;
   std::complex<double> tmp_39;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_40;
      std::complex<double> tmp_41;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_41 += Conj(Ud(gI1,j1))*Yd(j1,j2);
      }
      tmp_40 += tmp_41;
      tmp_39 += (Conj(Vd(gI2,j2))) * tmp_40;
   }
   tmp_38 += tmp_39;
   result += (-0.7071067811865475) * tmp_38;

   return result;
}

std::complex<double> CLASSNAME::CphhbarFeFePR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_42;
   std::complex<double> tmp_43;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_44;
      std::complex<double> tmp_45;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_45 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_44 += tmp_45;
      tmp_43 += (Ve(gI1,j2)) * tmp_44;
   }
   tmp_42 += tmp_43;
   result += (-0.7071067811865475) * tmp_42;

   return result;
}

std::complex<double> CLASSNAME::CphhbarFeFePL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_46;
   std::complex<double> tmp_47;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_48;
      std::complex<double> tmp_49;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_49 += Conj(Ue(gI1,j1))*Ye(j1,j2);
      }
      tmp_48 += tmp_49;
      tmp_47 += (Conj(Ve(gI2,j2))) * tmp_48;
   }
   tmp_46 += tmp_47;
   result += (-0.7071067811865475) * tmp_46;

   return result;
}

std::complex<double> CLASSNAME::CphhbarFuFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_50;
   std::complex<double> tmp_51;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_52;
      std::complex<double> tmp_53;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_53 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_52 += tmp_53;
      tmp_51 += (Vu(gI1,j2)) * tmp_52;
   }
   tmp_50 += tmp_51;
   result += (0.7071067811865475) * tmp_50;

   return result;
}

std::complex<double> CLASSNAME::CphhbarFuFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_54;
   std::complex<double> tmp_55;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_56;
      std::complex<double> tmp_57;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_57 += Conj(Uu(gI1,j1))*Yu(j1,j2);
      }
      tmp_56 += tmp_57;
      tmp_55 += (Conj(Vu(gI2,j2))) * tmp_56;
   }
   tmp_54 += tmp_55;
   result += (0.7071067811865475) * tmp_54;

   return result;
}

std::complex<double> CLASSNAME::CpVZhhAh() const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.1)*(5*g2*Cos(ThetaW()) + 3.872983346207417
      *g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZhh() const
{
   double result = 0.0;

   result = 0.5*v*Sqr(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()));

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

   result = 0.1*(-5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjVWpHp() const
{
   double result = 0.0;

   result = -0.3872983346207417*g1*g2*v*Sin(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpVZVZAhAh() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZhhhh() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjHpHp() const
{
   std::complex<double> result;

   result = 0.1*(-7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 5*Sqr(
      g2)*Sqr(Cos(ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW())));

   return result;
}

double CLASSNAME::CpVZconjVWpVWp() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFdFdPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.16666666666666666*KroneckerDelta(gI1,gI2)*(3*g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFdFdPR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFeFePL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI1,gI2)*(g2*Cos(ThetaW()) - 0.7745966692414834*
      g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFeFePR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFuFuPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.03333333333333333*KroneckerDelta(gI1,gI2)*(-15*g2*Cos(ThetaW()) +
      3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFuFuPR(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*KroneckerDelta(gI1,gI2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFvFvPL(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.5*KroneckerDelta(gI1,gI2)*(g2*Cos(ThetaW()) + 0.7745966692414834
      *g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFvFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

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

double CLASSNAME::CpconjVWpHphh() const
{
   double result = 0.0;

   result = 0.5*g2;

   return result;
}

double CLASSNAME::CpconjVWpVPHp() const
{
   double result = 0.0;

   result = 0.3872983346207417*g1*g2*v*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWpVWphh() const
{
   double result = 0.0;

   result = 0.5*v*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjVWpVZHp() const
{
   double result = 0.0;

   result = -0.3872983346207417*g1*g2*v*Sin(ThetaW());

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

double CLASSNAME::CpVWpconjVWphhhh() const
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

std::complex<double> CLASSNAME::CpconjVWpbarFdFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_58;
   std::complex<double> tmp_59;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_59 += Conj(Vu(gI2,j1))*Vd(gI1,j1);
   }
   tmp_58 += tmp_59;
   result += (-0.7071067811865475*g2) * tmp_58;

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

std::complex<double> CLASSNAME::CpbarUFdFdAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_60;
      std::complex<double> tmp_61;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_61 += Conj(Vd(gI1,j2))*Yd(gO2,j2);
      }
      tmp_60 += tmp_61;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_60;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdFdAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_62;
      std::complex<double> tmp_63;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_63 += Conj(Yd(j1,gO1))*Ud(gI1,j1);
      }
      tmp_62 += tmp_63;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_62;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_64;
      std::complex<double> tmp_65;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_65 += Conj(Vd(gI2,j2))*Yd(gO2,j2);
      }
      tmp_64 += tmp_65;
      result += (-0.7071067811865475) * tmp_64;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_66;
      std::complex<double> tmp_67;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_67 += Conj(Yd(j1,gO1))*Ud(gI2,j1);
      }
      tmp_66 += tmp_67;
      result += (-0.7071067811865475) * tmp_66;
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
      result += 0.2581988897471611*g1*Cos(ThetaW())*Ud(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVPFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.12909944487358055*g1*Conj(Vd(gI2,gO1))*Cos(ThetaW());
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
      result += -0.2581988897471611*g1*Sin(ThetaW())*Ud(gI2,gO2);
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
      result += 0.12909944487358055*g1*Conj(Vd(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdconjHpFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_68;
      std::complex<double> tmp_69;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_69 += Conj(Vu(gI2,j2))*Yd(gO2,j2);
      }
      tmp_68 += tmp_69;
      result += (-1) * tmp_68;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdconjHpFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_70;
      std::complex<double> tmp_71;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_71 += Conj(Yu(j1,gO1))*Uu(gI2,j1);
      }
      tmp_70 += tmp_71;
      result += (-1) * tmp_70;
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

std::complex<double> CLASSNAME::CpbarUFuFuAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_72;
      std::complex<double> tmp_73;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_73 += Conj(Vu(gI1,j2))*Yu(gO2,j2);
      }
      tmp_72 += tmp_73;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_72;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuFuAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_74;
      std::complex<double> tmp_75;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_75 += Conj(Yu(j1,gO1))*Uu(gI1,j1);
      }
      tmp_74 += tmp_75;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_74;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_76;
      std::complex<double> tmp_77;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_77 += Conj(Vu(gI2,j2))*Yu(gO2,j2);
      }
      tmp_76 += tmp_77;
      result += (0.7071067811865475) * tmp_76;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_78;
      std::complex<double> tmp_79;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_79 += Conj(Yu(j1,gO1))*Uu(gI2,j1);
      }
      tmp_78 += tmp_79;
      result += (0.7071067811865475) * tmp_78;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuHpFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_80;
      std::complex<double> tmp_81;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_81 += Conj(Vd(gI2,j2))*Yu(gO2,j2);
      }
      tmp_80 += tmp_81;
      result += (-1) * tmp_80;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuHpFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_82;
      std::complex<double> tmp_83;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_83 += Conj(Yd(j1,gO1))*Ud(gI2,j1);
      }
      tmp_82 += tmp_83;
      result += (-1) * tmp_82;
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
      result += -0.5163977794943222*g1*Cos(ThetaW())*Uu(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVPFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.12909944487358055*g1*Conj(Vu(gI2,gO1))*Cos(ThetaW());
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
      result += 0.5163977794943222*g1*Sin(ThetaW())*Uu(gI2,gO2);
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
      result += 0.12909944487358055*g1*Conj(Vu(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_84;
      std::complex<double> tmp_85;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_85 += Conj(Ve(gI1,j2))*Ye(gO2,j2);
      }
      tmp_84 += tmp_85;
      result += (std::complex<double>(0.,0.7071067811865475)) * tmp_84;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_86;
      std::complex<double> tmp_87;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_87 += Conj(Ye(j1,gO1))*Ue(gI1,j1);
      }
      tmp_86 += tmp_87;
      result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_86;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFehhFePL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_88;
      std::complex<double> tmp_89;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_89 += Conj(Ve(gI2,j2))*Ye(gO2,j2);
      }
      tmp_88 += tmp_89;
      result += (-0.7071067811865475) * tmp_88;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFehhFePR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_90;
      std::complex<double> tmp_91;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_91 += Conj(Ye(j1,gO1))*Ue(gI2,j1);
      }
      tmp_90 += tmp_91;
      result += (-0.7071067811865475) * tmp_90;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.7745966692414834*g1*Cos(ThetaW())*Ue(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.3872983346207417*g1*Conj(Ve(gI2,gO1))*Cos(ThetaW());
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
      result += -0.7745966692414834*g1*Sin(ThetaW())*Ue(gI2,gO2);
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
      result += -0.3872983346207417*g1*Conj(Ve(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeconjHpFvPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += -Ye(gO2,gI2);
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

std::complex<double> CLASSNAME::CpbarFdFdAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_92;
   std::complex<double> tmp_93;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_94;
      std::complex<double> tmp_95;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_95 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_94 += tmp_95;
      tmp_93 += (Conj(Vd(gI1,j2))) * tmp_94;
   }
   tmp_92 += tmp_93;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_92;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_96;
   std::complex<double> tmp_97;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_98;
      std::complex<double> tmp_99;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_99 += Conj(Yd(j1,j2))*Ud(gI1,j1);
      }
      tmp_98 += tmp_99;
      tmp_97 += (Vd(gO1,j2)) * tmp_98;
   }
   tmp_96 += tmp_97;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_96;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_100;
   std::complex<double> tmp_101;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_102;
      std::complex<double> tmp_103;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_103 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_102 += tmp_103;
      tmp_101 += (Conj(Vd(gI2,j2))) * tmp_102;
   }
   tmp_100 += tmp_101;
   result += (-0.7071067811865475) * tmp_100;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_104;
   std::complex<double> tmp_105;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_106;
      std::complex<double> tmp_107;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_107 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_106 += tmp_107;
      tmp_105 += (Vd(gO1,j2)) * tmp_106;
   }
   tmp_104 += tmp_105;
   result += (-0.7071067811865475) * tmp_104;

   return result;
}

double CLASSNAME::CpbarFdVZFdPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFdVZFdPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.16666666666666666*KroneckerDelta(gI2,gO1)*(3*g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFdconjHpFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_108;
   std::complex<double> tmp_109;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_110;
      std::complex<double> tmp_111;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_111 += Conj(Ud(gO2,j1))*Yd(j1,j2);
      }
      tmp_110 += tmp_111;
      tmp_109 += (Conj(Vu(gI2,j2))) * tmp_110;
   }
   tmp_108 += tmp_109;
   result += (-1) * tmp_108;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdconjHpFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_112;
   std::complex<double> tmp_113;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_114;
      std::complex<double> tmp_115;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_115 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_114 += tmp_115;
      tmp_113 += (Vd(gO1,j2)) * tmp_114;
   }
   tmp_112 += tmp_113;
   result += (-1) * tmp_112;

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

   std::complex<double> tmp_116;
   std::complex<double> tmp_117;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_117 += Conj(Vu(gI2,j1))*Vd(gO1,j1);
   }
   tmp_116 += tmp_117;
   result += (-0.7071067811865475*g2) * tmp_116;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_118;
   std::complex<double> tmp_119;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_120;
      std::complex<double> tmp_121;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_121 += Conj(Ue(gO2,j1))*Ye(j1,j2);
      }
      tmp_120 += tmp_121;
      tmp_119 += (Conj(Ve(gI1,j2))) * tmp_120;
   }
   tmp_118 += tmp_119;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_118;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_122;
   std::complex<double> tmp_123;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_124;
      std::complex<double> tmp_125;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_125 += Conj(Ye(j1,j2))*Ue(gI1,j1);
      }
      tmp_124 += tmp_125;
      tmp_123 += (Ve(gO1,j2)) * tmp_124;
   }
   tmp_122 += tmp_123;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_122;

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_126;
   std::complex<double> tmp_127;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_128;
      std::complex<double> tmp_129;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_129 += Conj(Ue(gO2,j1))*Ye(j1,j2);
      }
      tmp_128 += tmp_129;
      tmp_127 += (Conj(Ve(gI2,j2))) * tmp_128;
   }
   tmp_126 += tmp_127;
   result += (-0.7071067811865475) * tmp_126;

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_130;
   std::complex<double> tmp_131;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_132;
      std::complex<double> tmp_133;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_133 += Conj(Ye(j1,j2))*Ue(gI2,j1);
      }
      tmp_132 += tmp_133;
      tmp_131 += (Ve(gO1,j2)) * tmp_132;
   }
   tmp_130 += tmp_131;
   result += (-0.7071067811865475) * tmp_130;

   return result;
}

double CLASSNAME::CpbarFeVZFePR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFeVZFePL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI2,gO1)*(g2*Cos(ThetaW()) - 0.7745966692414834*
      g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFeconjHpFvPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_134;
   std::complex<double> tmp_135;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_135 += Conj(Ue(gO2,j1))*Ye(j1,gI2);
   }
   tmp_134 += tmp_135;
   result += (-1) * tmp_134;

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

std::complex<double> CLASSNAME::CpbarFuFuAhPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_136;
   std::complex<double> tmp_137;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_138;
      std::complex<double> tmp_139;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_139 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_138 += tmp_139;
      tmp_137 += (Conj(Vu(gI1,j2))) * tmp_138;
   }
   tmp_136 += tmp_137;
   result += (std::complex<double>(0.,0.7071067811865475)) * tmp_136;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   std::complex<double> tmp_140;
   std::complex<double> tmp_141;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_142;
      std::complex<double> tmp_143;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_143 += Conj(Yu(j1,j2))*Uu(gI1,j1);
      }
      tmp_142 += tmp_143;
      tmp_141 += (Vu(gO1,j2)) * tmp_142;
   }
   tmp_140 += tmp_141;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_140;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_144;
   std::complex<double> tmp_145;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_146;
      std::complex<double> tmp_147;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_147 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_146 += tmp_147;
      tmp_145 += (Conj(Vu(gI2,j2))) * tmp_146;
   }
   tmp_144 += tmp_145;
   result += (0.7071067811865475) * tmp_144;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_148;
   std::complex<double> tmp_149;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_150;
      std::complex<double> tmp_151;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_151 += Conj(Yu(j1,j2))*Uu(gI2,j1);
      }
      tmp_150 += tmp_151;
      tmp_149 += (Vu(gO1,j2)) * tmp_150;
   }
   tmp_148 += tmp_149;
   result += (0.7071067811865475) * tmp_148;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuHpFdPL(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_152;
   std::complex<double> tmp_153;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_154;
      std::complex<double> tmp_155;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_155 += Conj(Uu(gO2,j1))*Yu(j1,j2);
      }
      tmp_154 += tmp_155;
      tmp_153 += (Conj(Vd(gI2,j2))) * tmp_154;
   }
   tmp_152 += tmp_153;
   result += (-1) * tmp_152;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuHpFdPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_156;
   std::complex<double> tmp_157;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_158;
      std::complex<double> tmp_159;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_159 += Conj(Yd(j1,j2))*Ud(gI2,j1);
      }
      tmp_158 += tmp_159;
      tmp_157 += (Vu(gO1,j2)) * tmp_158;
   }
   tmp_156 += tmp_157;
   result += (-1) * tmp_156;

   return result;
}

double CLASSNAME::CpbarFuVPFuPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = -0.5163977794943222*g1*Cos(ThetaW())*KroneckerDelta(gI2,gO2);

   return result;
}

double CLASSNAME::CpbarFuVPFuPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = -0.16666666666666666*KroneckerDelta(gI2,gO1)*(0.7745966692414834*g1
      *Cos(ThetaW()) + 3*g2*Sin(ThetaW()));

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

   std::complex<double> tmp_160;
   std::complex<double> tmp_161;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_161 += Conj(Vd(gI2,j1))*Vu(gO1,j1);
   }
   tmp_160 += tmp_161;
   result += (-0.7071067811865475*g2) * tmp_160;

   return result;
}

double CLASSNAME::CpbarFuVZFuPR(unsigned gO2, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*KroneckerDelta(gI2,gO2)*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFuVZFuPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.03333333333333333*KroneckerDelta(gI2,gO1)*(-15*g2*Cos(ThetaW()) +
      3.872983346207417*g1*Sin(ThetaW()));

   return result;
}


std::complex<double> CLASSNAME::self_energy_Hp(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpconjHpHphh())*B0(p,MHp,Mhh);
   result += 4*AbsSqr(CpconjHpVWpVP())*(-0.5 + B0(p,0,MVWp));
   result += 4*AbsSqr(CpconjHpVZVWp())*(-0.5 + B0(p,MVWp,MVZ));
   result += -0.5*A0(MAh)*CpHpconjHpAhAh();
   result += -(A0(MHp)*CpHpconjHpconjHpHp());
   result += -0.5*A0(Mhh)*CpHpconjHphhhh();
   result += -0.5*A0(Mss)*CpHpconjHpssss();
   result += -(B0(p,MVZ,MVWp)*CpconjHpbargWpCgZ()*CpHpgWpCbargZ());
   result += -(B0(p,MVWp,MVZ)*CpconjHpbargZgWp()*CpHpgZbargWp());
   result += AbsSqr(CpconjHpVWpAh())*F0(p,MAh,MVWp);
   result += AbsSqr(CpconjHpVWphh())*F0(p,Mhh,MVWp);
   result += AbsSqr(CpconjHpVPHp())*F0(p,MHp,0);
   result += AbsSqr(CpconjHpVZHp())*F0(p,MHp,MVZ);
   std::complex<double> tmp_162;
   std::complex<double> tmp_163;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_164;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_164 += (AbsSqr(CpconjHpbarFdFuPL(gI1,gI2)) + AbsSqr(
            CpconjHpbarFdFuPR(gI1,gI2)))*G0(p,MFd(gI1),MFu(gI2));
      }
      tmp_163 += tmp_164;
   }
   tmp_162 += tmp_163;
   result += (3) * tmp_162;
   std::complex<double> tmp_165;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_166;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_166 += (AbsSqr(CpconjHpbarFeFvPL(gI1,gI2)) + AbsSqr(
            CpconjHpbarFeFvPR(gI1,gI2)))*G0(p,MFe(gI1),MFv(gI2));
      }
      tmp_165 += tmp_166;
   }
   result += tmp_165;
   std::complex<double> tmp_167;
   std::complex<double> tmp_168;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_169;
      std::complex<double> tmp_170;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_170 += B0(p,MFd(gI1),MFu(gI2))*(Conj(CpconjHpbarFdFuPR(gI1,
            gI2))*CpconjHpbarFdFuPL(gI1,gI2) + Conj(CpconjHpbarFdFuPL(gI1,gI2))*
            CpconjHpbarFdFuPR(gI1,gI2))*MFu(gI2);
      }
      tmp_169 += tmp_170;
      tmp_168 += (MFd(gI1)) * tmp_169;
   }
   tmp_167 += tmp_168;
   result += (-6) * tmp_167;
   std::complex<double> tmp_171;
   std::complex<double> tmp_172;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_173;
      std::complex<double> tmp_174;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_174 += B0(p,MFe(gI1),MFv(gI2))*(Conj(CpconjHpbarFeFvPR(gI1,
            gI2))*CpconjHpbarFeFvPL(gI1,gI2) + Conj(CpconjHpbarFeFvPL(gI1,gI2))*
            CpconjHpbarFeFvPR(gI1,gI2))*MFv(gI2);
      }
      tmp_173 += tmp_174;
      tmp_172 += (MFe(gI1)) * tmp_173;
   }
   tmp_171 += tmp_172;
   result += (-2) * tmp_171;
   result += 4*CpHpconjHpconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpHpconjHpVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_ss(double p ) const
{
   std::complex<double> result;

   result += -0.5*A0(MAh)*CpssssAhAh();
   result += -(A0(MHp)*CpssssconjHpHp());
   result += AbsSqr(Cpsssshh())*B0(p,Mss,Mhh);
   result += -0.5*A0(Mhh)*Cpsssshhhh();
   result += -0.5*A0(Mss)*Cpssssssss();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ah(double p ) const
{
   std::complex<double> result;

   result += -0.5*A0(MAh)*CpAhAhAhAh();
   result += -(A0(MHp)*CpAhAhconjHpHp());
   result += -0.5*A0(Mhh)*CpAhAhhhhh();
   result += -0.5*A0(Mss)*CpAhAhssss();
   result += -(B0(p,MVWp,MVWp)*Sqr(CpAhbargWpCgWpC()));
   result += -(B0(p,MVWp,MVWp)*Sqr(CpAhbargWpgWp()));
   result += AbsSqr(CpAhhhAh())*B0(p,Mhh,MAh);
   result += AbsSqr(CpAhVZhh())*F0(p,Mhh,MVZ);
   result += 2*AbsSqr(CpAhconjVWpHp())*F0(p,MHp,MVWp);
   std::complex<double> tmp_175;
   std::complex<double> tmp_176;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_177;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_177 += (AbsSqr(CpAhbarFdFdPL(gI1,gI2)) + AbsSqr(
            CpAhbarFdFdPR(gI1,gI2)))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_176 += tmp_177;
   }
   tmp_175 += tmp_176;
   result += (3) * tmp_175;
   std::complex<double> tmp_178;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_179;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_179 += (AbsSqr(CpAhbarFeFePL(gI1,gI2)) + AbsSqr(
            CpAhbarFeFePR(gI1,gI2)))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_178 += tmp_179;
   }
   result += tmp_178;
   std::complex<double> tmp_180;
   std::complex<double> tmp_181;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_182;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_182 += (AbsSqr(CpAhbarFuFuPL(gI1,gI2)) + AbsSqr(
            CpAhbarFuFuPR(gI1,gI2)))*G0(p,MFu(gI1),MFu(gI2));
      }
      tmp_181 += tmp_182;
   }
   tmp_180 += tmp_181;
   result += (3) * tmp_180;
   std::complex<double> tmp_183;
   std::complex<double> tmp_184;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_185;
      std::complex<double> tmp_186;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_186 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CpAhbarFdFdPR(gI1,gI2))
            *CpAhbarFdFdPL(gI1,gI2) + Conj(CpAhbarFdFdPL(gI1,gI2))*CpAhbarFdFdPR(
            gI1,gI2))*MFd(gI2);
      }
      tmp_185 += tmp_186;
      tmp_184 += (MFd(gI1)) * tmp_185;
   }
   tmp_183 += tmp_184;
   result += (-6) * tmp_183;
   std::complex<double> tmp_187;
   std::complex<double> tmp_188;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_189;
      std::complex<double> tmp_190;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_190 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CpAhbarFeFePR(gI1,gI2))
            *CpAhbarFeFePL(gI1,gI2) + Conj(CpAhbarFeFePL(gI1,gI2))*CpAhbarFeFePR(
            gI1,gI2))*MFe(gI2);
      }
      tmp_189 += tmp_190;
      tmp_188 += (MFe(gI1)) * tmp_189;
   }
   tmp_187 += tmp_188;
   result += (-2) * tmp_187;
   std::complex<double> tmp_191;
   std::complex<double> tmp_192;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_193;
      std::complex<double> tmp_194;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_194 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CpAhbarFuFuPR(gI1,gI2))
            *CpAhbarFuFuPL(gI1,gI2) + Conj(CpAhbarFuFuPL(gI1,gI2))*CpAhbarFuFuPR(
            gI1,gI2))*MFu(gI2);
      }
      tmp_193 += tmp_194;
      tmp_192 += (MFu(gI1)) * tmp_193;
   }
   tmp_191 += tmp_192;
   result += (-6) * tmp_191;
   result += 4*CpAhAhconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CpAhAhVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_hh(double p ) const
{
   std::complex<double> result;

   result += 0.5*AbsSqr(CphhAhAh())*B0(p,MAh,MAh);
   result += -(B0(p,MVWp,MVWp)*Sqr(CphhbargWpCgWpC()));
   result += -(B0(p,MVWp,MVWp)*Sqr(CphhbargWpgWp()));
   result += -(B0(p,MVZ,MVZ)*Sqr(CphhbargZgZ()));
   result += AbsSqr(CphhconjHpHp())*B0(p,MHp,MHp);
   result += 4*AbsSqr(CphhconjVWpVWp())*(-0.5 + B0(p,MVWp,MVWp));
   result += -0.5*A0(MAh)*CphhhhAhAh();
   result += -(A0(MHp)*CphhhhconjHpHp());
   result += 0.5*AbsSqr(Cphhhhhh())*B0(p,Mhh,Mhh);
   result += -0.5*A0(Mhh)*Cphhhhhhhh();
   result += -0.5*A0(Mss)*Cphhhhssss();
   result += 0.5*AbsSqr(Cphhssss())*B0(p,Mss,Mss);
   result += 2*AbsSqr(CphhVZVZ())*(-0.5 + B0(p,MVZ,MVZ));
   result += AbsSqr(CphhVZAh())*F0(p,MAh,MVZ);
   result += 2*AbsSqr(CphhconjVWpHp())*F0(p,MHp,MVWp);
   std::complex<double> tmp_195;
   std::complex<double> tmp_196;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_197;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_197 += (AbsSqr(CphhbarFdFdPL(gI1,gI2)) + AbsSqr(
            CphhbarFdFdPR(gI1,gI2)))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_196 += tmp_197;
   }
   tmp_195 += tmp_196;
   result += (3) * tmp_195;
   std::complex<double> tmp_198;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_199;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_199 += (AbsSqr(CphhbarFeFePL(gI1,gI2)) + AbsSqr(
            CphhbarFeFePR(gI1,gI2)))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_198 += tmp_199;
   }
   result += tmp_198;
   std::complex<double> tmp_200;
   std::complex<double> tmp_201;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_202;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_202 += (AbsSqr(CphhbarFuFuPL(gI1,gI2)) + AbsSqr(
            CphhbarFuFuPR(gI1,gI2)))*G0(p,MFu(gI1),MFu(gI2));
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
         tmp_206 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CphhbarFdFdPR(gI1,gI2))
            *CphhbarFdFdPL(gI1,gI2) + Conj(CphhbarFdFdPL(gI1,gI2))*CphhbarFdFdPR(
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
         tmp_210 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CphhbarFeFePR(gI1,gI2))
            *CphhbarFeFePL(gI1,gI2) + Conj(CphhbarFeFePL(gI1,gI2))*CphhbarFeFePR(
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
         tmp_214 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CphhbarFuFuPR(gI1,gI2))
            *CphhbarFuFuPL(gI1,gI2) + Conj(CphhbarFuFuPL(gI1,gI2))*CphhbarFuFuPR(
            gI1,gI2))*MFu(gI2);
      }
      tmp_213 += tmp_214;
      tmp_212 += (MFu(gI1)) * tmp_213;
   }
   tmp_211 += tmp_212;
   result += (-6) * tmp_211;
   result += 4*CphhhhconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CphhhhVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpVZbargWpCgWpC())*B00(p,MVWp,MVWp);
   result += AbsSqr(CpVZbargWpgWp())*B00(p,MVWp,MVWp);
   result += -4*AbsSqr(CpVZconjHpHp())*B00(p,MHp,MHp);
   result += 2*AbsSqr(CpVZconjVWpHp())*B0(p,MVWp,MHp);
   result += -4*AbsSqr(CpVZhhAh())*B00(p,MAh,Mhh);
   result += 0.5*A0(MAh)*CpVZVZAhAh();
   result += A0(MHp)*CpVZVZconjHpHp();
   result += -(A0(MVWp)*(4*CpVZVZconjVWpVWp1() + CpVZVZconjVWpVWp2() +
      CpVZVZconjVWpVWp3()));
   result += AbsSqr(CpVZVZhh())*B0(p,MVZ,Mhh);
   result += 0.5*A0(Mhh)*CpVZVZhhhh();
   std::complex<double> tmp_215;
   std::complex<double> tmp_216;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_217;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_217 += (AbsSqr(CpVZbarFdFdPL(gI1,gI2)) + AbsSqr(
            CpVZbarFdFdPR(gI1,gI2)))*H0(p,MFd(gI1),MFd(gI2));
         tmp_217 += 4*B0(p,MFd(gI1),MFd(gI2))*MFd(gI1)*MFd(gI2)*Re(Conj(
            CpVZbarFdFdPL(gI1,gI2))*CpVZbarFdFdPR(gI1,gI2));
      }
      tmp_216 += tmp_217;
   }
   tmp_215 += tmp_216;
   result += (3) * tmp_215;
   std::complex<double> tmp_218;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_219;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_219 += (AbsSqr(CpVZbarFeFePL(gI1,gI2)) + AbsSqr(
            CpVZbarFeFePR(gI1,gI2)))*H0(p,MFe(gI1),MFe(gI2));
         tmp_219 += 4*B0(p,MFe(gI1),MFe(gI2))*MFe(gI1)*MFe(gI2)*Re(Conj(
            CpVZbarFeFePL(gI1,gI2))*CpVZbarFeFePR(gI1,gI2));
      }
      tmp_218 += tmp_219;
   }
   result += tmp_218;
   std::complex<double> tmp_220;
   std::complex<double> tmp_221;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_222;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_222 += (AbsSqr(CpVZbarFuFuPL(gI1,gI2)) + AbsSqr(
            CpVZbarFuFuPR(gI1,gI2)))*H0(p,MFu(gI1),MFu(gI2));
         tmp_222 += 4*B0(p,MFu(gI1),MFu(gI2))*MFu(gI1)*MFu(gI2)*Re(Conj(
            CpVZbarFuFuPL(gI1,gI2))*CpVZbarFuFuPR(gI1,gI2));
      }
      tmp_221 += tmp_222;
   }
   tmp_220 += tmp_221;
   result += (3) * tmp_220;
   std::complex<double> tmp_223;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_224;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_224 += (AbsSqr(CpVZbarFvFvPL(gI1,gI2)) + AbsSqr(
            CpVZbarFvFvPR(gI1,gI2)))*H0(p,MFv(gI1),MFv(gI2));
         tmp_224 += 4*B0(p,MFv(gI1),MFv(gI2))*MFv(gI1)*MFv(gI2)*Re(Conj(
            CpVZbarFvFvPL(gI1,gI2))*CpVZbarFvFvPR(gI1,gI2));
      }
      tmp_223 += tmp_224;
   }
   result += tmp_223;
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
   result += -4*AbsSqr(CpconjVWpHphh())*B00(p,Mhh,MHp);
   result += AbsSqr(CpconjVWpVPHp())*B0(p,0,MHp);
   result += AbsSqr(CpconjVWpVWphh())*B0(p,MVWp,Mhh);
   result += AbsSqr(CpconjVWpVZHp())*B0(p,MVZ,MHp);
   result += 0.5*A0(MAh)*CpVWpconjVWpAhAh();
   result += A0(MHp)*CpVWpconjVWpconjHpHp();
   result += -(A0(MVWp)*(4*CpVWpconjVWpconjVWpVWp1() + CpVWpconjVWpconjVWpVWp2(
      ) + CpVWpconjVWpconjVWpVWp3()));
   result += 0.5*A0(Mhh)*CpVWpconjVWphhhh();
   result += 0;
   std::complex<double> tmp_225;
   std::complex<double> tmp_226;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_227;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_227 += (AbsSqr(CpconjVWpbarFdFuPL(gI1,gI2)) + AbsSqr(
            CpconjVWpbarFdFuPR(gI1,gI2)))*H0(p,MFd(gI1),MFu(gI2));
         tmp_227 += 4*B0(p,MFd(gI1),MFu(gI2))*MFd(gI1)*MFu(gI2)*Re(Conj(
            CpconjVWpbarFdFuPL(gI1,gI2))*CpconjVWpbarFdFuPR(gI1,gI2));
      }
      tmp_226 += tmp_227;
   }
   tmp_225 += tmp_226;
   result += (3) * tmp_225;
   std::complex<double> tmp_228;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_229;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_229 += (AbsSqr(CpconjVWpbarFeFvPL(gI1,gI2)) + AbsSqr(
            CpconjVWpbarFeFvPR(gI1,gI2)))*H0(p,MFe(gI1),MFv(gI2));
         tmp_229 += 4*B0(p,MFe(gI1),MFv(gI2))*MFe(gI1)*MFv(gI2)*Re(Conj(
            CpconjVWpbarFeFvPL(gI1,gI2))*CpconjVWpbarFeFvPR(gI1,gI2));
      }
      tmp_228 += tmp_229;
   }
   result += tmp_228;
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

   std::complex<double> tmp_230;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_230 += B0(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPL(gO2,gI1))*
         CpbarUFdFdAhPR(gO1,gI1)*MFd(gI1);
   }
   result += tmp_230;
   std::complex<double> tmp_231;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_231 += B0(p,MFd(gI2),Mhh)*Conj(CpbarUFdhhFdPL(gO2,gI2))*
         CpbarUFdhhFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_231;
   std::complex<double> tmp_232;
   std::complex<double> tmp_233;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_233 += (-0.5 + B0(p,MFd(gI2),0))*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_232 += tmp_233;
   result += (-5.333333333333333) * tmp_232;
   std::complex<double> tmp_234;
   std::complex<double> tmp_235;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_235 += (-0.5 + B0(p,MFd(gI2),0))*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_234 += tmp_235;
   result += (-4) * tmp_234;
   std::complex<double> tmp_236;
   std::complex<double> tmp_237;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_237 += (-0.5 + B0(p,MFd(gI2),MVZ))*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_236 += tmp_237;
   result += (-4) * tmp_236;
   std::complex<double> tmp_238;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_238 += B0(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPL(gO2,gI2))*
         CpbarUFdconjHpFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_238;
   std::complex<double> tmp_239;
   std::complex<double> tmp_240;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_240 += (-0.5 + B0(p,MFu(gI2),MVWp))*Conj(CpbarUFdconjVWpFuPR(gO2,
         gI2))*CpbarUFdconjVWpFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_239 += tmp_240;
   result += (-4) * tmp_239;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_241;
   std::complex<double> tmp_242;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_242 += B1(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPR(gO2,gI1))*
         CpbarUFdFdAhPR(gO1,gI1);
   }
   tmp_241 += tmp_242;
   result += (-0.5) * tmp_241;
   std::complex<double> tmp_243;
   std::complex<double> tmp_244;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_244 += B1(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPR(gO2,gI2))*
         CpbarUFdconjHpFuPR(gO1,gI2);
   }
   tmp_243 += tmp_244;
   result += (-0.5) * tmp_243;
   std::complex<double> tmp_245;
   std::complex<double> tmp_246;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_246 += B1(p,MFu(gI2),MVWp)*Conj(CpbarUFdconjVWpFuPL(gO2,gI2))*
         CpbarUFdconjVWpFuPL(gO1,gI2);
   }
   tmp_245 += tmp_246;
   result += (-1) * tmp_245;
   std::complex<double> tmp_247;
   std::complex<double> tmp_248;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_248 += B1(p,MFd(gI2),Mhh)*Conj(CpbarUFdhhFdPR(gO2,gI2))*
         CpbarUFdhhFdPR(gO1,gI2);
   }
   tmp_247 += tmp_248;
   result += (-0.5) * tmp_247;
   std::complex<double> tmp_249;
   std::complex<double> tmp_250;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_250 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPL(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2);
   }
   tmp_249 += tmp_250;
   result += (-1.3333333333333333) * tmp_249;
   std::complex<double> tmp_251;
   std::complex<double> tmp_252;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_252 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPL(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2);
   }
   tmp_251 += tmp_252;
   result += (-1) * tmp_251;
   std::complex<double> tmp_253;
   std::complex<double> tmp_254;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_254 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPL(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2);
   }
   tmp_253 += tmp_254;
   result += (-1) * tmp_253;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_255;
   std::complex<double> tmp_256;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_256 += B1(p,MFd(gI1),MAh)*Conj(CpbarUFdFdAhPL(gO2,gI1))*
         CpbarUFdFdAhPL(gO1,gI1);
   }
   tmp_255 += tmp_256;
   result += (-0.5) * tmp_255;
   std::complex<double> tmp_257;
   std::complex<double> tmp_258;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_258 += B1(p,MFu(gI2),MHp)*Conj(CpbarUFdconjHpFuPL(gO2,gI2))*
         CpbarUFdconjHpFuPL(gO1,gI2);
   }
   tmp_257 += tmp_258;
   result += (-0.5) * tmp_257;
   std::complex<double> tmp_259;
   std::complex<double> tmp_260;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_260 += B1(p,MFu(gI2),MVWp)*Conj(CpbarUFdconjVWpFuPR(gO2,gI2))*
         CpbarUFdconjVWpFuPR(gO1,gI2);
   }
   tmp_259 += tmp_260;
   result += (-1) * tmp_259;
   std::complex<double> tmp_261;
   std::complex<double> tmp_262;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_262 += B1(p,MFd(gI2),Mhh)*Conj(CpbarUFdhhFdPL(gO2,gI2))*
         CpbarUFdhhFdPL(gO1,gI2);
   }
   tmp_261 += tmp_262;
   result += (-0.5) * tmp_261;
   std::complex<double> tmp_263;
   std::complex<double> tmp_264;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_264 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPR(gO1,gI2);
   }
   tmp_263 += tmp_264;
   result += (-1.3333333333333333) * tmp_263;
   std::complex<double> tmp_265;
   std::complex<double> tmp_266;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_266 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPR(gO1,gI2);
   }
   tmp_265 += tmp_266;
   result += (-1) * tmp_265;
   std::complex<double> tmp_267;
   std::complex<double> tmp_268;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_268 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPR(gO1,gI2);
   }
   tmp_267 += tmp_268;
   result += (-1) * tmp_267;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_269;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_269 += B0(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_269;
   std::complex<double> tmp_270;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_270 += B0(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_270;
   std::complex<double> tmp_271;
   std::complex<double> tmp_272;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_272 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarUFuVWpFdPR(gO2,gI2))
         *CpbarUFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_271 += tmp_272;
   result += (-4) * tmp_271;
   std::complex<double> tmp_273;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_273 += B0(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPL(gO2,gI2))*
         CpbarUFuhhFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_273;
   std::complex<double> tmp_274;
   std::complex<double> tmp_275;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_275 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_274 += tmp_275;
   result += (-5.333333333333333) * tmp_274;
   std::complex<double> tmp_276;
   std::complex<double> tmp_277;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_277 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_276 += tmp_277;
   result += (-4) * tmp_276;
   std::complex<double> tmp_278;
   std::complex<double> tmp_279;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_279 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_278 += tmp_279;
   result += (-4) * tmp_278;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_280;
   std::complex<double> tmp_281;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_281 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPR(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1);
   }
   tmp_280 += tmp_281;
   result += (-0.5) * tmp_280;
   std::complex<double> tmp_282;
   std::complex<double> tmp_283;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_283 += B1(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPR(gO2,gI2))*
         CpbarUFuhhFuPR(gO1,gI2);
   }
   tmp_282 += tmp_283;
   result += (-0.5) * tmp_282;
   std::complex<double> tmp_284;
   std::complex<double> tmp_285;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_285 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPR(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2);
   }
   tmp_284 += tmp_285;
   result += (-0.5) * tmp_284;
   std::complex<double> tmp_286;
   std::complex<double> tmp_287;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_287 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPL(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2);
   }
   tmp_286 += tmp_287;
   result += (-1.3333333333333333) * tmp_286;
   std::complex<double> tmp_288;
   std::complex<double> tmp_289;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_289 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPL(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2);
   }
   tmp_288 += tmp_289;
   result += (-1) * tmp_288;
   std::complex<double> tmp_290;
   std::complex<double> tmp_291;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_291 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPL(gO2,gI2))*
         CpbarUFuVWpFdPL(gO1,gI2);
   }
   tmp_290 += tmp_291;
   result += (-1) * tmp_290;
   std::complex<double> tmp_292;
   std::complex<double> tmp_293;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_293 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPL(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2);
   }
   tmp_292 += tmp_293;
   result += (-1) * tmp_292;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_294;
   std::complex<double> tmp_295;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_295 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPL(gO1,gI1);
   }
   tmp_294 += tmp_295;
   result += (-0.5) * tmp_294;
   std::complex<double> tmp_296;
   std::complex<double> tmp_297;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_297 += B1(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPL(gO2,gI2))*
         CpbarUFuhhFuPL(gO1,gI2);
   }
   tmp_296 += tmp_297;
   result += (-0.5) * tmp_296;
   std::complex<double> tmp_298;
   std::complex<double> tmp_299;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_299 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPL(gO1,gI2);
   }
   tmp_298 += tmp_299;
   result += (-0.5) * tmp_298;
   std::complex<double> tmp_300;
   std::complex<double> tmp_301;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_301 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPR(gO1,gI2);
   }
   tmp_300 += tmp_301;
   result += (-1.3333333333333333) * tmp_300;
   std::complex<double> tmp_302;
   std::complex<double> tmp_303;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_303 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPR(gO1,gI2);
   }
   tmp_302 += tmp_303;
   result += (-1) * tmp_302;
   std::complex<double> tmp_304;
   std::complex<double> tmp_305;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_305 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPR(gO2,gI2))*
         CpbarUFuVWpFdPR(gO1,gI2);
   }
   tmp_304 += tmp_305;
   result += (-1) * tmp_304;
   std::complex<double> tmp_306;
   std::complex<double> tmp_307;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_307 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPR(gO1,gI2);
   }
   tmp_306 += tmp_307;
   result += (-1) * tmp_306;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_308;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_308 += B0(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPL(gO2,gI1))*
         CpbarUFeFeAhPR(gO1,gI1)*MFe(gI1);
   }
   result += tmp_308;
   std::complex<double> tmp_309;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_309 += B0(p,MFe(gI2),Mhh)*Conj(CpbarUFehhFePL(gO2,gI2))*
         CpbarUFehhFePR(gO1,gI2)*MFe(gI2);
   }
   result += tmp_309;
   std::complex<double> tmp_310;
   std::complex<double> tmp_311;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_311 += (-0.5 + B0(p,MFe(gI2),0))*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_310 += tmp_311;
   result += (-4) * tmp_310;
   std::complex<double> tmp_312;
   std::complex<double> tmp_313;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_313 += (-0.5 + B0(p,MFe(gI2),MVZ))*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_312 += tmp_313;
   result += (-4) * tmp_312;
   std::complex<double> tmp_314;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_314 += B0(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPL(gO2,gI2))*
         CpbarUFeconjHpFvPR(gO1,gI2)*MFv(gI2);
   }
   result += tmp_314;
   std::complex<double> tmp_315;
   std::complex<double> tmp_316;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_316 += (-0.5 + B0(p,MFv(gI2),MVWp))*Conj(CpbarUFeconjVWpFvPR(gO2,
         gI2))*CpbarUFeconjVWpFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_315 += tmp_316;
   result += (-4) * tmp_315;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_317;
   std::complex<double> tmp_318;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_318 += B1(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPR(gO2,gI1))*
         CpbarUFeFeAhPR(gO1,gI1);
   }
   tmp_317 += tmp_318;
   result += (-0.5) * tmp_317;
   std::complex<double> tmp_319;
   std::complex<double> tmp_320;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_320 += B1(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPR(gO2,gI2))*
         CpbarUFeconjHpFvPR(gO1,gI2);
   }
   tmp_319 += tmp_320;
   result += (-0.5) * tmp_319;
   std::complex<double> tmp_321;
   std::complex<double> tmp_322;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_322 += B1(p,MFv(gI2),MVWp)*Conj(CpbarUFeconjVWpFvPL(gO2,gI2))*
         CpbarUFeconjVWpFvPL(gO1,gI2);
   }
   tmp_321 += tmp_322;
   result += (-1) * tmp_321;
   std::complex<double> tmp_323;
   std::complex<double> tmp_324;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_324 += B1(p,MFe(gI2),Mhh)*Conj(CpbarUFehhFePR(gO2,gI2))*
         CpbarUFehhFePR(gO1,gI2);
   }
   tmp_323 += tmp_324;
   result += (-0.5) * tmp_323;
   std::complex<double> tmp_325;
   std::complex<double> tmp_326;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_326 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePL(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2);
   }
   tmp_325 += tmp_326;
   result += (-1) * tmp_325;
   std::complex<double> tmp_327;
   std::complex<double> tmp_328;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_328 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePL(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2);
   }
   tmp_327 += tmp_328;
   result += (-1) * tmp_327;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_329;
   std::complex<double> tmp_330;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_330 += B1(p,MFe(gI1),MAh)*Conj(CpbarUFeFeAhPL(gO2,gI1))*
         CpbarUFeFeAhPL(gO1,gI1);
   }
   tmp_329 += tmp_330;
   result += (-0.5) * tmp_329;
   std::complex<double> tmp_331;
   std::complex<double> tmp_332;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_332 += B1(p,MFv(gI2),MHp)*Conj(CpbarUFeconjHpFvPL(gO2,gI2))*
         CpbarUFeconjHpFvPL(gO1,gI2);
   }
   tmp_331 += tmp_332;
   result += (-0.5) * tmp_331;
   std::complex<double> tmp_333;
   std::complex<double> tmp_334;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_334 += B1(p,MFv(gI2),MVWp)*Conj(CpbarUFeconjVWpFvPR(gO2,gI2))*
         CpbarUFeconjVWpFvPR(gO1,gI2);
   }
   tmp_333 += tmp_334;
   result += (-1) * tmp_333;
   std::complex<double> tmp_335;
   std::complex<double> tmp_336;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_336 += B1(p,MFe(gI2),Mhh)*Conj(CpbarUFehhFePL(gO2,gI2))*
         CpbarUFehhFePL(gO1,gI2);
   }
   tmp_335 += tmp_336;
   result += (-0.5) * tmp_335;
   std::complex<double> tmp_337;
   std::complex<double> tmp_338;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_338 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePR(gO1,gI2);
   }
   tmp_337 += tmp_338;
   result += (-1) * tmp_337;
   std::complex<double> tmp_339;
   std::complex<double> tmp_340;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_340 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePR(gO1,gI2);
   }
   tmp_339 += tmp_340;
   result += (-1) * tmp_339;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpVZhhAh())*B00(p,MAh,Mhh);
   result += AbsSqr(CpVZVZhh())*B0(p,MVZ,Mhh);
   result += 0.5*A0(Mhh)*CpVZVZhhhh();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWp_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpconjVWpHphh())*B00(p,Mhh,MHp);
   result += AbsSqr(CpconjVWpVWphh())*B0(p,MVWp,Mhh);
   result += 0.5*A0(Mhh)*CpVWpconjVWphhhh();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_341;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_341 += B0(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPL(gO2,gI1))*
         CpbarFdFdAhPR(gO1,gI1)*MFd(gI1);
   }
   result += tmp_341;
   std::complex<double> tmp_342;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_342 += B0(p,MFd(gI2),Mhh)*Conj(CpbarFdhhFdPL(gO2,gI2))*
         CpbarFdhhFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_342;
   std::complex<double> tmp_343;
   std::complex<double> tmp_344;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_344 += (-0.5 + B0(p,MFd(gI2),MVZ))*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_343 += tmp_344;
   result += (-4) * tmp_343;
   std::complex<double> tmp_345;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_345 += B0(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPL(gO2,gI2))*
         CpbarFdconjHpFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_345;
   std::complex<double> tmp_346;
   std::complex<double> tmp_347;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_347 += (-0.5 + B0(p,MFu(gI2),MVWp))*Conj(CpbarFdconjVWpFuPR(gO2,
         gI2))*CpbarFdconjVWpFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_346 += tmp_347;
   result += (-4) * tmp_346;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_348;
   std::complex<double> tmp_349;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_349 += B1(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPR(gO2,gI1))*
         CpbarFdFdAhPR(gO1,gI1);
   }
   tmp_348 += tmp_349;
   result += (-0.5) * tmp_348;
   std::complex<double> tmp_350;
   std::complex<double> tmp_351;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_351 += B1(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPR(gO2,gI2))*
         CpbarFdconjHpFuPR(gO1,gI2);
   }
   tmp_350 += tmp_351;
   result += (-0.5) * tmp_350;
   std::complex<double> tmp_352;
   std::complex<double> tmp_353;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_353 += B1(p,MFu(gI2),MVWp)*Conj(CpbarFdconjVWpFuPL(gO2,gI2))*
         CpbarFdconjVWpFuPL(gO1,gI2);
   }
   tmp_352 += tmp_353;
   result += (-1) * tmp_352;
   std::complex<double> tmp_354;
   std::complex<double> tmp_355;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_355 += B1(p,MFd(gI2),Mhh)*Conj(CpbarFdhhFdPR(gO2,gI2))*
         CpbarFdhhFdPR(gO1,gI2);
   }
   tmp_354 += tmp_355;
   result += (-0.5) * tmp_354;
   std::complex<double> tmp_356;
   std::complex<double> tmp_357;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_357 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPL(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2);
   }
   tmp_356 += tmp_357;
   result += (-1) * tmp_356;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_358;
   std::complex<double> tmp_359;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_359 += B1(p,MFd(gI1),MAh)*Conj(CpbarFdFdAhPL(gO2,gI1))*
         CpbarFdFdAhPL(gO1,gI1);
   }
   tmp_358 += tmp_359;
   result += (-0.5) * tmp_358;
   std::complex<double> tmp_360;
   std::complex<double> tmp_361;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_361 += B1(p,MFu(gI2),MHp)*Conj(CpbarFdconjHpFuPL(gO2,gI2))*
         CpbarFdconjHpFuPL(gO1,gI2);
   }
   tmp_360 += tmp_361;
   result += (-0.5) * tmp_360;
   std::complex<double> tmp_362;
   std::complex<double> tmp_363;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_363 += B1(p,MFu(gI2),MVWp)*Conj(CpbarFdconjVWpFuPR(gO2,gI2))*
         CpbarFdconjVWpFuPR(gO1,gI2);
   }
   tmp_362 += tmp_363;
   result += (-1) * tmp_362;
   std::complex<double> tmp_364;
   std::complex<double> tmp_365;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_365 += B1(p,MFd(gI2),Mhh)*Conj(CpbarFdhhFdPL(gO2,gI2))*
         CpbarFdhhFdPL(gO1,gI2);
   }
   tmp_364 += tmp_365;
   result += (-0.5) * tmp_364;
   std::complex<double> tmp_366;
   std::complex<double> tmp_367;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_367 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPR(gO1,gI2);
   }
   tmp_366 += tmp_367;
   result += (-1) * tmp_366;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_368;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_368 += B0(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPL(gO2,gI1))*
         CpbarFeFeAhPR(gO1,gI1)*MFe(gI1);
   }
   result += tmp_368;
   std::complex<double> tmp_369;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_369 += B0(p,MFe(gI2),Mhh)*Conj(CpbarFehhFePL(gO2,gI2))*
         CpbarFehhFePR(gO1,gI2)*MFe(gI2);
   }
   result += tmp_369;
   std::complex<double> tmp_370;
   std::complex<double> tmp_371;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_371 += (-0.5 + B0(p,MFe(gI2),MVZ))*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_370 += tmp_371;
   result += (-4) * tmp_370;
   std::complex<double> tmp_372;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_372 += B0(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPL(gO2,gI2))*
         CpbarFeconjHpFvPR(gO1,gI2)*MFv(gI2);
   }
   result += tmp_372;
   std::complex<double> tmp_373;
   std::complex<double> tmp_374;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_374 += (-0.5 + B0(p,MFv(gI2),MVWp))*Conj(CpbarFeconjVWpFvPR(gO2,
         gI2))*CpbarFeconjVWpFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_373 += tmp_374;
   result += (-4) * tmp_373;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_375;
   std::complex<double> tmp_376;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_376 += B1(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPR(gO2,gI1))*
         CpbarFeFeAhPR(gO1,gI1);
   }
   tmp_375 += tmp_376;
   result += (-0.5) * tmp_375;
   std::complex<double> tmp_377;
   std::complex<double> tmp_378;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_378 += B1(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPR(gO2,gI2))*
         CpbarFeconjHpFvPR(gO1,gI2);
   }
   tmp_377 += tmp_378;
   result += (-0.5) * tmp_377;
   std::complex<double> tmp_379;
   std::complex<double> tmp_380;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_380 += B1(p,MFv(gI2),MVWp)*Conj(CpbarFeconjVWpFvPL(gO2,gI2))*
         CpbarFeconjVWpFvPL(gO1,gI2);
   }
   tmp_379 += tmp_380;
   result += (-1) * tmp_379;
   std::complex<double> tmp_381;
   std::complex<double> tmp_382;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_382 += B1(p,MFe(gI2),Mhh)*Conj(CpbarFehhFePR(gO2,gI2))*
         CpbarFehhFePR(gO1,gI2);
   }
   tmp_381 += tmp_382;
   result += (-0.5) * tmp_381;
   std::complex<double> tmp_383;
   std::complex<double> tmp_384;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_384 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePL(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2);
   }
   tmp_383 += tmp_384;
   result += (-1) * tmp_383;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_385;
   std::complex<double> tmp_386;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_386 += B1(p,MFe(gI1),MAh)*Conj(CpbarFeFeAhPL(gO2,gI1))*
         CpbarFeFeAhPL(gO1,gI1);
   }
   tmp_385 += tmp_386;
   result += (-0.5) * tmp_385;
   std::complex<double> tmp_387;
   std::complex<double> tmp_388;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_388 += B1(p,MFv(gI2),MHp)*Conj(CpbarFeconjHpFvPL(gO2,gI2))*
         CpbarFeconjHpFvPL(gO1,gI2);
   }
   tmp_387 += tmp_388;
   result += (-0.5) * tmp_387;
   std::complex<double> tmp_389;
   std::complex<double> tmp_390;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_390 += B1(p,MFv(gI2),MVWp)*Conj(CpbarFeconjVWpFvPR(gO2,gI2))*
         CpbarFeconjVWpFvPR(gO1,gI2);
   }
   tmp_389 += tmp_390;
   result += (-1) * tmp_389;
   std::complex<double> tmp_391;
   std::complex<double> tmp_392;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_392 += B1(p,MFe(gI2),Mhh)*Conj(CpbarFehhFePL(gO2,gI2))*
         CpbarFehhFePL(gO1,gI2);
   }
   tmp_391 += tmp_392;
   result += (-0.5) * tmp_391;
   std::complex<double> tmp_393;
   std::complex<double> tmp_394;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_394 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePR(gO1,gI2);
   }
   tmp_393 += tmp_394;
   result += (-1) * tmp_393;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_395;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_395 += B0(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPL(gO2,gI1))*
         CpbarFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_395;
   std::complex<double> tmp_396;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_396 += B0(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPL(gO2,gI2))*
         CpbarFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_396;
   std::complex<double> tmp_397;
   std::complex<double> tmp_398;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_398 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarFuVWpFdPR(gO2,gI2))*
         CpbarFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_397 += tmp_398;
   result += (-4) * tmp_397;
   std::complex<double> tmp_399;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_399 += B0(p,MFu(gI2),Mhh)*Conj(CpbarFuhhFuPL(gO2,gI2))*
         CpbarFuhhFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_399;
   std::complex<double> tmp_400;
   std::complex<double> tmp_401;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_401 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarFuVPFuPR(gO2,gI2))*
         CpbarFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_400 += tmp_401;
   result += (-4) * tmp_400;
   std::complex<double> tmp_402;
   std::complex<double> tmp_403;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_403 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_402 += tmp_403;
   result += (-4) * tmp_402;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_404;
   std::complex<double> tmp_405;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_405 += B1(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPR(gO2,gI1))*
         CpbarFuFuAhPR(gO1,gI1);
   }
   tmp_404 += tmp_405;
   result += (-0.5) * tmp_404;
   std::complex<double> tmp_406;
   std::complex<double> tmp_407;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_407 += B1(p,MFu(gI2),Mhh)*Conj(CpbarFuhhFuPR(gO2,gI2))*
         CpbarFuhhFuPR(gO1,gI2);
   }
   tmp_406 += tmp_407;
   result += (-0.5) * tmp_406;
   std::complex<double> tmp_408;
   std::complex<double> tmp_409;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_409 += B1(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPR(gO2,gI2))*
         CpbarFuHpFdPR(gO1,gI2);
   }
   tmp_408 += tmp_409;
   result += (-0.5) * tmp_408;
   std::complex<double> tmp_410;
   std::complex<double> tmp_411;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_411 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPL(gO2,gI2))*CpbarFuVPFuPL
         (gO1,gI2);
   }
   tmp_410 += tmp_411;
   result += (-1) * tmp_410;
   std::complex<double> tmp_412;
   std::complex<double> tmp_413;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_413 += B1(p,MFd(gI2),MVWp)*Conj(CpbarFuVWpFdPL(gO2,gI2))*
         CpbarFuVWpFdPL(gO1,gI2);
   }
   tmp_412 += tmp_413;
   result += (-1) * tmp_412;
   std::complex<double> tmp_414;
   std::complex<double> tmp_415;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_415 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPL(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2);
   }
   tmp_414 += tmp_415;
   result += (-1) * tmp_414;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_416;
   std::complex<double> tmp_417;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_417 += B1(p,MFu(gI1),MAh)*Conj(CpbarFuFuAhPL(gO2,gI1))*
         CpbarFuFuAhPL(gO1,gI1);
   }
   tmp_416 += tmp_417;
   result += (-0.5) * tmp_416;
   std::complex<double> tmp_418;
   std::complex<double> tmp_419;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_419 += B1(p,MFu(gI2),Mhh)*Conj(CpbarFuhhFuPL(gO2,gI2))*
         CpbarFuhhFuPL(gO1,gI2);
   }
   tmp_418 += tmp_419;
   result += (-0.5) * tmp_418;
   std::complex<double> tmp_420;
   std::complex<double> tmp_421;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_421 += B1(p,MFd(gI2),MHp)*Conj(CpbarFuHpFdPL(gO2,gI2))*
         CpbarFuHpFdPL(gO1,gI2);
   }
   tmp_420 += tmp_421;
   result += (-0.5) * tmp_420;
   std::complex<double> tmp_422;
   std::complex<double> tmp_423;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_423 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPR(gO2,gI2))*CpbarFuVPFuPR
         (gO1,gI2);
   }
   tmp_422 += tmp_423;
   result += (-1) * tmp_422;
   std::complex<double> tmp_424;
   std::complex<double> tmp_425;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_425 += B1(p,MFd(gI2),MVWp)*Conj(CpbarFuVWpFdPR(gO2,gI2))*
         CpbarFuVWpFdPR(gO1,gI2);
   }
   tmp_424 += tmp_425;
   result += (-1) * tmp_424;
   std::complex<double> tmp_426;
   std::complex<double> tmp_427;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_427 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPR(gO1,gI2);
   }
   tmp_426 += tmp_427;
   result += (-1) * tmp_426;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_428;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_428 += B0(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1)*MFu(gI1);
   }
   result += tmp_428;
   std::complex<double> tmp_429;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_429 += B0(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2)*MFd(gI2);
   }
   result += tmp_429;
   std::complex<double> tmp_430;
   std::complex<double> tmp_431;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_431 += (-0.5 + B0(p,MFd(gI2),MVWp))*Conj(CpbarUFuVWpFdPR(gO2,gI2))
         *CpbarUFuVWpFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_430 += tmp_431;
   result += (-4) * tmp_430;
   std::complex<double> tmp_432;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_432 += B0(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPL(gO2,gI2))*
         CpbarUFuhhFuPR(gO1,gI2)*MFu(gI2);
   }
   result += tmp_432;
   std::complex<double> tmp_433;
   std::complex<double> tmp_434;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_434 += (-0.5 + B0(p,MFu(gI2),0))*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_433 += tmp_434;
   result += (-4) * tmp_433;
   std::complex<double> tmp_435;
   std::complex<double> tmp_436;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_436 += (-0.5 + B0(p,MFu(gI2),MVZ))*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_435 += tmp_436;
   result += (-4) * tmp_435;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_437;
   std::complex<double> tmp_438;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_438 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPR(gO2,gI1))*
         CpbarUFuFuAhPR(gO1,gI1);
   }
   tmp_437 += tmp_438;
   result += (-0.5) * tmp_437;
   std::complex<double> tmp_439;
   std::complex<double> tmp_440;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_440 += B1(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPR(gO2,gI2))*
         CpbarUFuhhFuPR(gO1,gI2);
   }
   tmp_439 += tmp_440;
   result += (-0.5) * tmp_439;
   std::complex<double> tmp_441;
   std::complex<double> tmp_442;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_442 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPR(gO2,gI2))*
         CpbarUFuHpFdPR(gO1,gI2);
   }
   tmp_441 += tmp_442;
   result += (-0.5) * tmp_441;
   std::complex<double> tmp_443;
   std::complex<double> tmp_444;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_444 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPL(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2);
   }
   tmp_443 += tmp_444;
   result += (-1) * tmp_443;
   std::complex<double> tmp_445;
   std::complex<double> tmp_446;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_446 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPL(gO2,gI2))*
         CpbarUFuVWpFdPL(gO1,gI2);
   }
   tmp_445 += tmp_446;
   result += (-1) * tmp_445;
   std::complex<double> tmp_447;
   std::complex<double> tmp_448;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_448 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPL(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2);
   }
   tmp_447 += tmp_448;
   result += (-1) * tmp_447;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL_heavy(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_449;
   std::complex<double> tmp_450;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_450 += B1(p,MFu(gI1),MAh)*Conj(CpbarUFuFuAhPL(gO2,gI1))*
         CpbarUFuFuAhPL(gO1,gI1);
   }
   tmp_449 += tmp_450;
   result += (-0.5) * tmp_449;
   std::complex<double> tmp_451;
   std::complex<double> tmp_452;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_452 += B1(p,MFu(gI2),Mhh)*Conj(CpbarUFuhhFuPL(gO2,gI2))*
         CpbarUFuhhFuPL(gO1,gI2);
   }
   tmp_451 += tmp_452;
   result += (-0.5) * tmp_451;
   std::complex<double> tmp_453;
   std::complex<double> tmp_454;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_454 += B1(p,MFd(gI2),MHp)*Conj(CpbarUFuHpFdPL(gO2,gI2))*
         CpbarUFuHpFdPL(gO1,gI2);
   }
   tmp_453 += tmp_454;
   result += (-0.5) * tmp_453;
   std::complex<double> tmp_455;
   std::complex<double> tmp_456;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_456 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPR(gO1,gI2);
   }
   tmp_455 += tmp_456;
   result += (-1) * tmp_455;
   std::complex<double> tmp_457;
   std::complex<double> tmp_458;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_458 += B1(p,MFd(gI2),MVWp)*Conj(CpbarUFuVWpFdPR(gO2,gI2))*
         CpbarUFuVWpFdPR(gO1,gI2);
   }
   tmp_457 += tmp_458;
   result += (-1) * tmp_457;
   std::complex<double> tmp_459;
   std::complex<double> tmp_460;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_460 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPR(gO1,gI2);
   }
   tmp_459 += tmp_460;
   result += (-1) * tmp_459;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::tadpole_hh() const
{
   std::complex<double> result;

   result += -0.5*A0(MAh)*CphhAhAh();
   result += A0(MVWp)*CphhbargWpCgWpC();
   result += A0(MVWp)*CphhbargWpgWp();
   result += A0(MVZ)*CphhbargZgZ();
   result += -(A0(MHp)*CphhconjHpHp());
   result += -0.5*A0(Mhh)*Cphhhhhh();
   result += -0.5*A0(Mss)*Cphhssss();
   std::complex<double> tmp_461;
   std::complex<double> tmp_462;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_462 += A0(MFd(gI1))*(CphhbarFdFdPL(gI1,gI1) + CphhbarFdFdPR(gI1,
         gI1))*MFd(gI1);
   }
   tmp_461 += tmp_462;
   result += (6) * tmp_461;
   std::complex<double> tmp_463;
   std::complex<double> tmp_464;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_464 += A0(MFe(gI1))*(CphhbarFeFePL(gI1,gI1) + CphhbarFeFePR(gI1,
         gI1))*MFe(gI1);
   }
   tmp_463 += tmp_464;
   result += (2) * tmp_463;
   std::complex<double> tmp_465;
   std::complex<double> tmp_466;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_466 += A0(MFu(gI1))*(CphhbarFuFuPL(gI1,gI1) + CphhbarFuFuPR(gI1,
         gI1))*MFu(gI1);
   }
   tmp_465 += tmp_466;
   result += (6) * tmp_465;
   result += 4*CphhconjVWpVWp()*(A0(MVWp) - 0.5*Sqr(MVWp));
   result += 2*CphhVZVZ()*(A0(MVZ) - 0.5*Sqr(MVZ));

   return result * oneOver16PiSqr;

}








void CLASSNAME::calculate_MVG_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MVG) old_MVG(MVG), new_MVG(MVG);

   do {
      PHYSICAL(MVG) = 0.;

      new_MVG = PHYSICAL(MVG);
      diff = MaxRelDiff(new_MVG, old_MVG);
      old_MVG = new_MVG;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::VG);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::VG);
}

void CLASSNAME::calculate_Mss_pole()
{
   if (!force_output && problems.is_tachyon(ss))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(Mss) old_Mss(Mss), new_Mss(Mss);

   do {
      const double M_tree(get_mass_matrix_ss());
      const double p = old_Mss;
      const double self_energy = Re(self_energy_ss(p));
      const double mass_sqr = M_tree - self_energy;

      if (mass_sqr < 0.)
         problems.flag_tachyon(ss);

      PHYSICAL(Mss) = AbsSqrt(mass_sqr);

      new_Mss = PHYSICAL(Mss);
      diff = MaxRelDiff(new_Mss, old_Mss);
      old_Mss = new_Mss;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::ss);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::ss);
}

void CLASSNAME::calculate_MFv_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MFv) old_MFv(MFv), new_MFv(MFv);

   do {
      PHYSICAL(MFv).setConstant(0.);

      new_MFv = PHYSICAL(MFv);
      diff = MaxRelDiff(new_MFv, old_MFv);
      old_MFv = new_MFv;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::Fv);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::Fv);
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
      const double M_tree(get_mass_matrix_hh());
      const double p = old_Mhh;
      const double self_energy = Re(self_energy_hh(p));
      const double mass_sqr = M_tree - self_energy;

      if (mass_sqr < 0.)
         problems.flag_tachyon(hh);

      PHYSICAL(Mhh) = AbsSqrt(mass_sqr);

      new_Mhh = PHYSICAL(Mhh);
      diff = MaxRelDiff(new_Mhh, old_Mhh);
      old_Mhh = new_Mhh;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::hh);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::hh);
}

void CLASSNAME::calculate_MVP_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MVP) old_MVP(MVP), new_MVP(MVP);

   do {
      PHYSICAL(MVP) = 0.;

      new_MVP = PHYSICAL(MVP);
      diff = MaxRelDiff(new_MVP, old_MVP);
      old_MVP = new_MVP;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::VP);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::VP);
}

void CLASSNAME::calculate_MVZ_pole()
{
   if (!force_output && problems.is_tachyon(VZ))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MVZ) old_MVZ(MVZ), new_MVZ(MVZ);

   do {
      const double M_tree(get_mass_matrix_VZ());
      const double p = old_MVZ;
      const double self_energy = Re(self_energy_VZ(p));
      const double mass_sqr = M_tree - self_energy;

      if (mass_sqr < 0.)
         problems.flag_tachyon(VZ);

      PHYSICAL(MVZ) = AbsSqrt(mass_sqr);

      new_MVZ = PHYSICAL(MVZ);
      diff = MaxRelDiff(new_MVZ, old_MVZ);
      old_MVZ = new_MVZ;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::VZ);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::VZ);
}

void CLASSNAME::calculate_MFd_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MFd) old_MFd(MFd), new_MFd(MFd);

   do {
      Eigen::Matrix<double,3,3> self_energy_1;
      Eigen::Matrix<double,3,3> self_energy_PL;
      Eigen::Matrix<double,3,3> self_energy_PR;
      const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fd());
      for (unsigned es = 0; es < 3; ++es) {
         const double p = Abs(old_MFd(es));
         for (unsigned i1 = 0; i1 < 3; ++i1) {
            for (unsigned i2 = 0; i2 < 3; ++i2) {
               self_energy_1(i1,i2)  = Re(self_energy_Fd_1(p,
                  i1,i2));
               self_energy_PL(i1,i2) = Re(self_energy_Fd_PL(p
                  ,i1,i2));
               self_energy_PR(i1,i2) = Re(self_energy_Fd_PR(p
                  ,i1,i2));
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
         fs_svd(M_1loop, eigen_values, mix_Vd, mix_Ud,
            eigenvalue_error);
         problems.flag_bad_mass(SSDM_info::Fd, eigenvalue_error >
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

      new_MFd = PHYSICAL(MFd);
      diff = MaxRelDiff(new_MFd, old_MFd);
      old_MFd = new_MFd;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::Fd);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::Fd);
}

void CLASSNAME::calculate_MFu_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MFu) old_MFu(MFu), new_MFu(MFu);

   do {
      const bool add_2loop_corrections = pole_mass_loop_order > 1 &&
         TOP_2LOOP_CORRECTION_QCD;
      const double currentScale = get_scale();

      const double qcd_1l = 0.025330295910584444*(-1.3333333333333333
         + 1.*Log(Sqr(MFu(2))/Sqr(currentScale)))*Sqr(g3);

      double qcd_2l = 0.;

      if (add_2loop_corrections) {
         qcd_2l = -0.006995771808874528*Power(g3,4) -
            0.004518101565212637*Power(g3,4)*Log(Sqr(currentScale)/Sqr(MFu(2)))
            - 0.0008822328500119351*Power(g3,4)*Sqr(Log(Power(currentScale,2)
            /Sqr(MFu(2))));
      }

      Eigen::Matrix<double,3,3> self_energy_1;
      Eigen::Matrix<double,3,3> self_energy_PL;
      Eigen::Matrix<double,3,3> self_energy_PR;
      const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fu());
      for (unsigned es = 0; es < 3; ++es) {
         const double p = Abs(old_MFu(es));
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
                  self_energy_1(i1,i2)  = Re(
                     self_energy_Fu_1(p,i1,i2));
                  self_energy_PL(i1,i2) = Re(
                     self_energy_Fu_PL(p,i1,i2));
                  self_energy_PR(i1,i2) = Re(
                     self_energy_Fu_PR(p,i1,i2));
               }
            }
         }
         Eigen::Matrix<double,3,3> delta_M(- self_energy_PR *
            M_tree - M_tree * self_energy_PL - self_energy_1);
         delta_M(2,2) -= M_tree(2,2) * (qcd_1l + qcd_2l);
         const Eigen::Matrix<double,3,3> M_1loop(M_tree + delta_M);
         Eigen::Array<double,3,1> eigen_values;
         decltype(Vu) mix_Vu;
         decltype(Uu) mix_Uu;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_svd(M_1loop, eigen_values, mix_Vu, mix_Uu,
            eigenvalue_error);
         problems.flag_bad_mass(SSDM_info::Fu, eigenvalue_error >
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

      new_MFu = PHYSICAL(MFu);
      diff = MaxRelDiff(new_MFu, old_MFu);
      old_MFu = new_MFu;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::Fu);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::Fu);
}

void CLASSNAME::calculate_MFe_pole()
{
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MFe) old_MFe(MFe), new_MFe(MFe);

   do {
      Eigen::Matrix<double,3,3> self_energy_1;
      Eigen::Matrix<double,3,3> self_energy_PL;
      Eigen::Matrix<double,3,3> self_energy_PR;
      const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fe());
      for (unsigned es = 0; es < 3; ++es) {
         const double p = Abs(old_MFe(es));
         for (unsigned i1 = 0; i1 < 3; ++i1) {
            for (unsigned i2 = 0; i2 < 3; ++i2) {
               self_energy_1(i1,i2)  = Re(self_energy_Fe_1(p,
                  i1,i2));
               self_energy_PL(i1,i2) = Re(self_energy_Fe_PL(p
                  ,i1,i2));
               self_energy_PR(i1,i2) = Re(self_energy_Fe_PR(p
                  ,i1,i2));
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
         fs_svd(M_1loop, eigen_values, mix_Ve, mix_Ue,
            eigenvalue_error);
         problems.flag_bad_mass(SSDM_info::Fe, eigenvalue_error >
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

      new_MFe = PHYSICAL(MFe);
      diff = MaxRelDiff(new_MFe, old_MFe);
      old_MFe = new_MFe;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::Fe);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::Fe);
}

void CLASSNAME::calculate_MVWp_pole()
{
   if (!force_output && problems.is_tachyon(VWp))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MVWp) old_MVWp(MVWp), new_MVWp(MVWp);

   do {
      const double M_tree(get_mass_matrix_VWp());
      const double p = old_MVWp;
      const double self_energy = Re(self_energy_VWp(p));
      const double mass_sqr = M_tree - self_energy;

      if (mass_sqr < 0.)
         problems.flag_tachyon(VWp);

      PHYSICAL(MVWp) = AbsSqrt(mass_sqr);

      new_MVWp = PHYSICAL(MVWp);
      diff = MaxRelDiff(new_MVWp, old_MVWp);
      old_MVWp = new_MVWp;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(SSDM_info::VWp);
   else
      problems.unflag_no_pole_mass_convergence(SSDM_info::VWp);
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
   return ArcTan((0.7745966692414834*g1)/g2);
}


std::ostream& operator<<(std::ostream& ostr, const SSDM_mass_eigenstates& model)
{
   model.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
