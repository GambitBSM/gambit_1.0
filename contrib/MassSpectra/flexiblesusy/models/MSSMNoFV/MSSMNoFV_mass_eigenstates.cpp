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

// File generated at Mon 1 Jun 2015 13:09:20

/**
 * @file MSSMNoFV_mass_eigenstates.cpp
 * @brief implementation of the MSSMNoFV model class
 *
 * Contains the definition of the MSSMNoFV model class methods
 * which solve EWSB and calculate pole masses and mixings from DRbar
 * parameters.
 *
 * This file was generated at Mon 1 Jun 2015 13:09:20 with FlexibleSUSY
 * 1.1.0 (git commit: v1.1.0) and SARAH 4.5.6 .
 */

#include "MSSMNoFV_mass_eigenstates.hpp"
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

#include "sfermions.hpp"
#include "mssm_twoloophiggs.h"


#include <cmath>
#include <iostream>
#include <algorithm>

#ifdef ENABLE_THREADS
#include <thread>
#endif

#include <gsl/gsl_multiroots.h>

namespace flexiblesusy {

using namespace MSSMNoFV_info;

#define CLASSNAME MSSMNoFV_mass_eigenstates

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

CLASSNAME::MSSMNoFV_mass_eigenstates(const MSSMNoFV_input_parameters& input_)
   : MSSMNoFV_soft_parameters(input_)
   , number_of_ewsb_iterations(100)
   , number_of_mass_iterations(20)
   , ewsb_loop_order(2)
   , pole_mass_loop_order(2)
   , calculate_sm_pole_masses(false)
   , force_output(false)
   , precision(1.0e-3)
   , ewsb_iteration_precision(1.0e-5)
   , physical()
   , problems(MSSMNoFV_info::particle_names)
   , two_loop_corrections()
#ifdef ENABLE_THREADS
   , thread_exception()
#endif
   , MVG(0), MGlu(0), MVP(0), MVZ(0), MFd(0), MFs(0), MFb(0), MFu(0), MFc(0),
      MFt(0), MFve(0), MFvm(0), MFvt(0), MFe(0), MFm(0), MFtau(0), MSveL(0), MSvmL
      (0), MSvtL(0), MSd(Eigen::Array<double,2,1>::Zero()), MSu(Eigen::Array<
      double,2,1>::Zero()), MSe(Eigen::Array<double,2,1>::Zero()), MSm(
      Eigen::Array<double,2,1>::Zero()), MStau(Eigen::Array<double,2,1>::Zero()),
      MSs(Eigen::Array<double,2,1>::Zero()), MSc(Eigen::Array<double,2,1>::Zero())
      , MSb(Eigen::Array<double,2,1>::Zero()), MSt(Eigen::Array<double,2,1>::Zero(
      )), Mhh(Eigen::Array<double,2,1>::Zero()), MAh(Eigen::Array<double,2,1>
      ::Zero()), MHpm(Eigen::Array<double,2,1>::Zero()), MChi(Eigen::Array<double,
      4,1>::Zero()), MCha(Eigen::Array<double,2,1>::Zero()), MVWm(0)

   , ZD(Eigen::Matrix<double,2,2>::Zero()), ZU(Eigen::Matrix<double,2,2>::Zero(
      )), ZE(Eigen::Matrix<double,2,2>::Zero()), ZM(Eigen::Matrix<double,2,2>
      ::Zero()), ZTau(Eigen::Matrix<double,2,2>::Zero()), ZS(Eigen::Matrix<double,
      2,2>::Zero()), ZC(Eigen::Matrix<double,2,2>::Zero()), ZB(Eigen::Matrix<
      double,2,2>::Zero()), ZT(Eigen::Matrix<double,2,2>::Zero()), ZH(
      Eigen::Matrix<double,2,2>::Zero()), ZA(Eigen::Matrix<double,2,2>::Zero()),
      ZP(Eigen::Matrix<double,2,2>::Zero()), ZN(Eigen::Matrix<std::complex<double>
      ,4,4>::Zero()), UM(Eigen::Matrix<std::complex<double>,2,2>::Zero()), UP(
      Eigen::Matrix<std::complex<double>,2,2>::Zero())

   , PhaseGlu(1,0)

{
}

CLASSNAME::~MSSMNoFV_mass_eigenstates()
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

const MSSMNoFV_physical& CLASSNAME::get_physical() const
{
   return physical;
}

MSSMNoFV_physical& CLASSNAME::get_physical()
{
   return physical;
}

void CLASSNAME::set_physical(const MSSMNoFV_physical& physical_)
{
   physical = physical_;
}

const Problems<MSSMNoFV_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems() const
{
   return problems;
}

Problems<MSSMNoFV_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems()
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
         double two_loop_tadpole[2];
         tadpole_hh_2loop(two_loop_tadpole);
         tadpole[0] -= two_loop_tadpole[0];
         tadpole[1] -= two_loop_tadpole[1];

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
   MSSMNoFV_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   model->set_BMu(gsl_vector_get(x, 0));
   model->set_Mu(INPUT(SignMu) * Abs(gsl_vector_get(x, 1)));


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

   BMu = solver->get_solution(0);
   Mu = LOCALINPUT(SignMu)*Abs(solver->get_solution(1));


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

   const double old_BMu = BMu;
   const double old_Mu = Mu;

   BMu = Re((0.05*(-20*mHd2*vd*vu + 20*mHu2*vd*vu - 3*Power(vd,3)*vu*Sqr(g1) +
      3*vd*Power(vu,3)*Sqr(g1) - 5*Power(vd,3)*vu*Sqr(g2) + 5*vd*Power(vu,3)*Sqr(
      g2)))/(Sqr(vd) - Sqr(vu)));
   Mu = Re(0.15811388300841897*LOCALINPUT(SignMu)*Sqrt((-40*mHd2*vd + 40*vu*BMu
      - 3*Power(vd,3)*Sqr(g1) - 5*Power(vd,3)*Sqr(g2) + 3*vd*Sqr(g1)*Sqr(vu) + 5*
      vd*Sqr(g2)*Sqr(vu))/vd));

   const bool is_finite = IsFinite(BMu) && IsFinite(Mu);

   if (!is_finite) {
      BMu = old_BMu;
      Mu = old_Mu;
      error = 1;
   }


   return error;
}

int CLASSNAME::solve_ewsb_tree_level_via_soft_higgs_masses()
{
   int error = 0;

   const double new_mHd2 = Re((0.025*(-40*vd*AbsSqr(Mu) + 20*vu*BMu + 20*vu*
      Conj(BMu) - 3*Power(vd,3)*Sqr(g1) - 5*Power(vd,3)*Sqr(g2) + 3*vd*Sqr(g1)*Sqr
      (vu) + 5*vd*Sqr(g2)*Sqr(vu)))/vd);
   const double new_mHu2 = Re((0.025*(-40*vu*AbsSqr(Mu) + 20*vd*BMu + 20*vd*
      Conj(BMu) - 3*Power(vu,3)*Sqr(g1) - 5*Power(vu,3)*Sqr(g2) + 3*vu*Sqr(g1)*Sqr
      (vd) + 5*vu*Sqr(g2)*Sqr(vd)))/vu);

   if (IsFinite(new_mHd2))
      mHd2 = new_mHd2;
   else
      error = 1;

   if (IsFinite(new_mHu2))
      mHu2 = new_mHu2;
   else
      error = 1;


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
   x_init[0] = BMu;
   x_init[1] = Mu;

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
         double two_loop_tadpole[2];
         tadpole_hh_2loop(two_loop_tadpole);
         tadpole[0] += two_loop_tadpole[0];
         tadpole[1] += two_loop_tadpole[1];

      }
   }

   double BMu;
   double Mu;

   BMu = Re((0.05*(-20*mHd2*vd*vu + 20*mHu2*vd*vu + 20*vu*tadpole[0] - 20*vd*
      tadpole[1] - 3*Power(vd,3)*vu*Sqr(g1) + 3*vd*Power(vu,3)*Sqr(g1) - 5*Power(
      vd,3)*vu*Sqr(g2) + 5*vd*Power(vu,3)*Sqr(g2)))/(Sqr(vd) - Sqr(vu)));
   Mu = Re(0.15811388300841897*LOCALINPUT(SignMu)*Sqrt((-40*mHd2*vd + 40*vu*BMu
      + 40*tadpole[0] - 3*Power(vd,3)*Sqr(g1) - 5*Power(vd,3)*Sqr(g2) + 3*vd*Sqr(
      g1)*Sqr(vu) + 5*vd*Sqr(g2)*Sqr(vu))/vd));

   const bool is_finite = IsFinite(BMu) && IsFinite(Mu);


   if (is_finite) {
      error = GSL_SUCCESS;
      ewsb_parameters[0] = BMu;
      ewsb_parameters[1] = Mu;

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
   MSSMNoFV_mass_eigenstates* model = ewsb_args->model;
   const unsigned ewsb_loop_order = ewsb_args->ewsb_loop_order;

   const double BMu = gsl_vector_get(x, 0);
   const double Mu = INPUT(SignMu) * Abs(gsl_vector_get(x, 1));

   model->set_BMu(BMu);
   model->set_Mu(Mu);


   if (ewsb_loop_order > 0)
      model->calculate_DRbar_masses();

   double ewsb_parameters[number_of_ewsb_equations] =
      { BMu, Mu };

   const int status = model->ewsb_step(ewsb_parameters);

   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      gsl_vector_set(f, i, ewsb_parameters[i]);

   return status;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   ostr << "========================================\n"
           "MSSMNoFV\n"
           "========================================\n";
   MSSMNoFV_soft_parameters::print(ostr);
   ostr << "----------------------------------------\n"
           "tree-level DRbar masses:\n"
           "----------------------------------------\n";
   ostr << "MVG = " << MVG << '\n';
   ostr << "MGlu = " << MGlu << '\n';
   ostr << "MVP = " << MVP << '\n';
   ostr << "MVZ = " << MVZ << '\n';
   ostr << "MFd = " << MFd << '\n';
   ostr << "MFs = " << MFs << '\n';
   ostr << "MFb = " << MFb << '\n';
   ostr << "MFu = " << MFu << '\n';
   ostr << "MFc = " << MFc << '\n';
   ostr << "MFt = " << MFt << '\n';
   ostr << "MFve = " << MFve << '\n';
   ostr << "MFvm = " << MFvm << '\n';
   ostr << "MFvt = " << MFvt << '\n';
   ostr << "MFe = " << MFe << '\n';
   ostr << "MFm = " << MFm << '\n';
   ostr << "MFtau = " << MFtau << '\n';
   ostr << "MSveL = " << MSveL << '\n';
   ostr << "MSvmL = " << MSvmL << '\n';
   ostr << "MSvtL = " << MSvtL << '\n';
   ostr << "MSd = " << MSd.transpose() << '\n';
   ostr << "MSu = " << MSu.transpose() << '\n';
   ostr << "MSe = " << MSe.transpose() << '\n';
   ostr << "MSm = " << MSm.transpose() << '\n';
   ostr << "MStau = " << MStau.transpose() << '\n';
   ostr << "MSs = " << MSs.transpose() << '\n';
   ostr << "MSc = " << MSc.transpose() << '\n';
   ostr << "MSb = " << MSb.transpose() << '\n';
   ostr << "MSt = " << MSt.transpose() << '\n';
   ostr << "Mhh = " << Mhh.transpose() << '\n';
   ostr << "MAh = " << MAh.transpose() << '\n';
   ostr << "MHpm = " << MHpm.transpose() << '\n';
   ostr << "MChi = " << MChi.transpose() << '\n';
   ostr << "MCha = " << MCha.transpose() << '\n';
   ostr << "MVWm = " << MVWm << '\n';

   ostr << "----------------------------------------\n"
           "tree-level DRbar mixing matrices:\n"
           "----------------------------------------\n";
   ostr << "ZD = " << ZD << '\n';
   ostr << "ZU = " << ZU << '\n';
   ostr << "ZE = " << ZE << '\n';
   ostr << "ZM = " << ZM << '\n';
   ostr << "ZTau = " << ZTau << '\n';
   ostr << "ZS = " << ZS << '\n';
   ostr << "ZC = " << ZC << '\n';
   ostr << "ZB = " << ZB << '\n';
   ostr << "ZT = " << ZT << '\n';
   ostr << "ZH = " << ZH << '\n';
   ostr << "ZA = " << ZA << '\n';
   ostr << "ZP = " << ZP << '\n';
   ostr << "ZN = " << ZN << '\n';
   ostr << "UM = " << UM << '\n';
   ostr << "UP = " << UP << '\n';

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
   const auto old_mHd2 = mHd2;
   const auto old_mHu2 = mHu2;

   solve_ewsb_tree_level_via_soft_higgs_masses();

   calculate_MVG();
   calculate_MVP();
   calculate_MVZ();
   calculate_MVWm();
   calculate_MGlu();
   calculate_MFd();
   calculate_MFs();
   calculate_MFb();
   calculate_MFu();
   calculate_MFc();
   calculate_MFt();
   calculate_MFve();
   calculate_MFvm();
   calculate_MFvt();
   calculate_MFe();
   calculate_MFm();
   calculate_MFtau();
   calculate_MSveL();
   calculate_MSvmL();
   calculate_MSvtL();
   calculate_MSd();
   calculate_MSu();
   calculate_MSe();
   calculate_MSm();
   calculate_MStau();
   calculate_MSs();
   calculate_MSc();
   calculate_MSb();
   calculate_MSt();
   calculate_Mhh();
   calculate_MAh();
   calculate_MHpm();
   calculate_MChi();
   calculate_MCha();

   mHd2 = old_mHd2;
   mHu2 = old_mHu2;

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

   std::thread thread_MAh(Thread(this, &CLASSNAME::calculate_MAh_pole));
   std::thread thread_MCha(Thread(this, &CLASSNAME::calculate_MCha_pole));
   std::thread thread_MChi(Thread(this, &CLASSNAME::calculate_MChi_pole));
   std::thread thread_MGlu(Thread(this, &CLASSNAME::calculate_MGlu_pole));
   std::thread thread_Mhh(Thread(this, &CLASSNAME::calculate_Mhh_pole));
   std::thread thread_MHpm(Thread(this, &CLASSNAME::calculate_MHpm_pole));
   std::thread thread_MSb(Thread(this, &CLASSNAME::calculate_MSb_pole));
   std::thread thread_MSc(Thread(this, &CLASSNAME::calculate_MSc_pole));
   std::thread thread_MSd(Thread(this, &CLASSNAME::calculate_MSd_pole));
   std::thread thread_MSe(Thread(this, &CLASSNAME::calculate_MSe_pole));
   std::thread thread_MSm(Thread(this, &CLASSNAME::calculate_MSm_pole));
   std::thread thread_MSs(Thread(this, &CLASSNAME::calculate_MSs_pole));
   std::thread thread_MSt(Thread(this, &CLASSNAME::calculate_MSt_pole));
   std::thread thread_MStau(Thread(this, &CLASSNAME::calculate_MStau_pole));
   std::thread thread_MSu(Thread(this, &CLASSNAME::calculate_MSu_pole));
   std::thread thread_MSveL(Thread(this, &CLASSNAME::calculate_MSveL_pole));
   std::thread thread_MSvmL(Thread(this, &CLASSNAME::calculate_MSvmL_pole));
   std::thread thread_MSvtL(Thread(this, &CLASSNAME::calculate_MSvtL_pole));

   if (calculate_sm_pole_masses) {
      std::thread thread_MVG(Thread(this, &CLASSNAME::calculate_MVG_pole));
      std::thread thread_MVP(Thread(this, &CLASSNAME::calculate_MVP_pole));
      std::thread thread_MVZ(Thread(this, &CLASSNAME::calculate_MVZ_pole));
      std::thread thread_MFd(Thread(this, &CLASSNAME::calculate_MFd_pole));
      std::thread thread_MFs(Thread(this, &CLASSNAME::calculate_MFs_pole));
      std::thread thread_MFb(Thread(this, &CLASSNAME::calculate_MFb_pole));
      std::thread thread_MFu(Thread(this, &CLASSNAME::calculate_MFu_pole));
      std::thread thread_MFc(Thread(this, &CLASSNAME::calculate_MFc_pole));
      std::thread thread_MFt(Thread(this, &CLASSNAME::calculate_MFt_pole));
      std::thread thread_MFve(Thread(this, &CLASSNAME::calculate_MFve_pole));
      std::thread thread_MFvm(Thread(this, &CLASSNAME::calculate_MFvm_pole));
      std::thread thread_MFvt(Thread(this, &CLASSNAME::calculate_MFvt_pole));
      std::thread thread_MFe(Thread(this, &CLASSNAME::calculate_MFe_pole));
      std::thread thread_MFm(Thread(this, &CLASSNAME::calculate_MFm_pole));
      std::thread thread_MFtau(Thread(this, &CLASSNAME::calculate_MFtau_pole));
      std::thread thread_MVWm(Thread(this, &CLASSNAME::calculate_MVWm_pole));
      thread_MVG.join();
      thread_MVP.join();
      thread_MVZ.join();
      thread_MFd.join();
      thread_MFs.join();
      thread_MFb.join();
      thread_MFu.join();
      thread_MFc.join();
      thread_MFt.join();
      thread_MFve.join();
      thread_MFvm.join();
      thread_MFvt.join();
      thread_MFe.join();
      thread_MFm.join();
      thread_MFtau.join();
      thread_MVWm.join();
   }

   thread_MAh.join();
   thread_MCha.join();
   thread_MChi.join();
   thread_MGlu.join();
   thread_Mhh.join();
   thread_MHpm.join();
   thread_MSb.join();
   thread_MSc.join();
   thread_MSd.join();
   thread_MSe.join();
   thread_MSm.join();
   thread_MSs.join();
   thread_MSt.join();
   thread_MStau.join();
   thread_MSu.join();
   thread_MSveL.join();
   thread_MSvmL.join();
   thread_MSvtL.join();


   if (thread_exception != 0)
      std::rethrow_exception(thread_exception);
#else
   calculate_MAh_pole();
   calculate_MCha_pole();
   calculate_MChi_pole();
   calculate_MGlu_pole();
   calculate_Mhh_pole();
   calculate_MHpm_pole();
   calculate_MSb_pole();
   calculate_MSc_pole();
   calculate_MSd_pole();
   calculate_MSe_pole();
   calculate_MSm_pole();
   calculate_MSs_pole();
   calculate_MSt_pole();
   calculate_MStau_pole();
   calculate_MSu_pole();
   calculate_MSveL_pole();
   calculate_MSvmL_pole();
   calculate_MSvtL_pole();

   if (calculate_sm_pole_masses) {
      calculate_MVG_pole();
      calculate_MVP_pole();
      calculate_MVZ_pole();
      calculate_MFd_pole();
      calculate_MFs_pole();
      calculate_MFb_pole();
      calculate_MFu_pole();
      calculate_MFc_pole();
      calculate_MFt_pole();
      calculate_MFve_pole();
      calculate_MFvm_pole();
      calculate_MFvt_pole();
      calculate_MFe_pole();
      calculate_MFm_pole();
      calculate_MFtau_pole();
      calculate_MVWm_pole();
   }

#endif
}

void CLASSNAME::copy_DRbar_masses_to_pole_masses()
{
   PHYSICAL(MVG) = MVG;
   PHYSICAL(MGlu) = MGlu;
   PHYSICAL(MVP) = MVP;
   PHYSICAL(MVZ) = MVZ;
   PHYSICAL(MFd) = MFd;
   PHYSICAL(MFs) = MFs;
   PHYSICAL(MFb) = MFb;
   PHYSICAL(MFu) = MFu;
   PHYSICAL(MFc) = MFc;
   PHYSICAL(MFt) = MFt;
   PHYSICAL(MFve) = MFve;
   PHYSICAL(MFvm) = MFvm;
   PHYSICAL(MFvt) = MFvt;
   PHYSICAL(MFe) = MFe;
   PHYSICAL(MFm) = MFm;
   PHYSICAL(MFtau) = MFtau;
   PHYSICAL(MSveL) = MSveL;
   PHYSICAL(MSvmL) = MSvmL;
   PHYSICAL(MSvtL) = MSvtL;
   PHYSICAL(MSd) = MSd;
   PHYSICAL(ZD) = ZD;
   PHYSICAL(MSu) = MSu;
   PHYSICAL(ZU) = ZU;
   PHYSICAL(MSe) = MSe;
   PHYSICAL(ZE) = ZE;
   PHYSICAL(MSm) = MSm;
   PHYSICAL(ZM) = ZM;
   PHYSICAL(MStau) = MStau;
   PHYSICAL(ZTau) = ZTau;
   PHYSICAL(MSs) = MSs;
   PHYSICAL(ZS) = ZS;
   PHYSICAL(MSc) = MSc;
   PHYSICAL(ZC) = ZC;
   PHYSICAL(MSb) = MSb;
   PHYSICAL(ZB) = ZB;
   PHYSICAL(MSt) = MSt;
   PHYSICAL(ZT) = ZT;
   PHYSICAL(Mhh) = Mhh;
   PHYSICAL(ZH) = ZH;
   PHYSICAL(MAh) = MAh;
   PHYSICAL(ZA) = ZA;
   PHYSICAL(MHpm) = MHpm;
   PHYSICAL(ZP) = ZP;
   PHYSICAL(MChi) = MChi;
   PHYSICAL(ZN) = ZN;
   PHYSICAL(MCha) = MCha;
   PHYSICAL(UM) = UM;
   PHYSICAL(UP) = UP;
   PHYSICAL(MVWm) = MVWm;

}

/**
 * reorders DRbar masses so that golstones are placed at the index
 * specified in the model files definition of the associuated
 * gauge boson (see Z-boson definition in default particles.m file
 * in the Models directory of your SARAH distribution for example)
 */
void CLASSNAME::reorder_DRbar_masses()
{
   move_goldstone_to(0, MVZ, MAh, ZA);
   move_goldstone_to(0, MVWm, MHpm, ZP);

}

/**
 * reorders pole masses so that golstones are placed at the index
 * specified in the model files definition of the associated
 * gauge boson (see Z-boson definition in default particles.m file
 * in the Models directory of your SARAH distribution for example)
 */
void CLASSNAME::reorder_pole_masses()
{
   move_goldstone_to(0, MVZ, PHYSICAL(MAh), PHYSICAL(ZA));
   move_goldstone_to(0, MVWm, PHYSICAL(MHpm), PHYSICAL(ZP));

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
   MGlu = 0.;
   MVP = 0.;
   MVZ = 0.;
   MFd = 0.;
   MFs = 0.;
   MFb = 0.;
   MFu = 0.;
   MFc = 0.;
   MFt = 0.;
   MFve = 0.;
   MFvm = 0.;
   MFvt = 0.;
   MFe = 0.;
   MFm = 0.;
   MFtau = 0.;
   MSveL = 0.;
   MSvmL = 0.;
   MSvtL = 0.;
   MSd = Eigen::Matrix<double,2,1>::Zero();
   ZD = Eigen::Matrix<double,2,2>::Zero();
   MSu = Eigen::Matrix<double,2,1>::Zero();
   ZU = Eigen::Matrix<double,2,2>::Zero();
   MSe = Eigen::Matrix<double,2,1>::Zero();
   ZE = Eigen::Matrix<double,2,2>::Zero();
   MSm = Eigen::Matrix<double,2,1>::Zero();
   ZM = Eigen::Matrix<double,2,2>::Zero();
   MStau = Eigen::Matrix<double,2,1>::Zero();
   ZTau = Eigen::Matrix<double,2,2>::Zero();
   MSs = Eigen::Matrix<double,2,1>::Zero();
   ZS = Eigen::Matrix<double,2,2>::Zero();
   MSc = Eigen::Matrix<double,2,1>::Zero();
   ZC = Eigen::Matrix<double,2,2>::Zero();
   MSb = Eigen::Matrix<double,2,1>::Zero();
   ZB = Eigen::Matrix<double,2,2>::Zero();
   MSt = Eigen::Matrix<double,2,1>::Zero();
   ZT = Eigen::Matrix<double,2,2>::Zero();
   Mhh = Eigen::Matrix<double,2,1>::Zero();
   ZH = Eigen::Matrix<double,2,2>::Zero();
   MAh = Eigen::Matrix<double,2,1>::Zero();
   ZA = Eigen::Matrix<double,2,2>::Zero();
   MHpm = Eigen::Matrix<double,2,1>::Zero();
   ZP = Eigen::Matrix<double,2,2>::Zero();
   MChi = Eigen::Matrix<double,4,1>::Zero();
   ZN = Eigen::Matrix<std::complex<double>,4,4>::Zero();
   MCha = Eigen::Matrix<double,2,1>::Zero();
   UM = Eigen::Matrix<std::complex<double>,2,2>::Zero();
   UP = Eigen::Matrix<std::complex<double>,2,2>::Zero();
   MVWm = 0.;

   PhaseGlu = std::complex<double>(1.,0.);

}

void CLASSNAME::clear_problems()
{
   problems.unflag_all_tachyons();
}

void CLASSNAME::clear()
{
   MSSMNoFV_soft_parameters::clear();
   clear_DRbar_parameters();
   physical.clear();
   problems.clear();
}

std::string CLASSNAME::name() const
{
   return "MSSMNoFV";
}

void CLASSNAME::run_to(double scale, double eps)
{
   if (eps < 0.0)
      eps = precision;
   MSSMNoFV_soft_parameters::run_to(scale, eps);
}


Eigen::Array<double,1,1> CLASSNAME::get_MChargedHiggs() const
{
   Eigen::Array<double,1,1> MHpm_ChargedHiggs;
   Eigen::Array<double,1,1> MHpm_goldstone;

   MHpm_goldstone(0) = MVWm;

   remove_if_equal(MHpm, MHpm_goldstone, MHpm_ChargedHiggs);

   return MHpm_ChargedHiggs;
}

Eigen::Array<double,1,1> CLASSNAME::get_MPseudoscalarHiggs() const
{
   Eigen::Array<double,1,1> MAh_PseudoscalarHiggs;
   Eigen::Array<double,1,1> MAh_goldstone;

   MAh_goldstone(0) = MVZ;

   remove_if_equal(MAh, MAh_goldstone, MAh_PseudoscalarHiggs);

   return MAh_PseudoscalarHiggs;
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

double CLASSNAME::get_mass_matrix_Glu() const
{
   const double mass_matrix_Glu = Re(MassG);

   return mass_matrix_Glu;
}

void CLASSNAME::calculate_MGlu()
{
   const auto mass_matrix_Glu = get_mass_matrix_Glu();
   MGlu = calculate_singlet_mass(mass_matrix_Glu, PhaseGlu);
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
   const double mass_matrix_VZ = Re(0.25*(Sqr(vd) + Sqr(vu))*Sqr(g2*Cos(
      ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW())));

   return mass_matrix_VZ;
}

void CLASSNAME::calculate_MVZ()
{
   const auto mass_matrix_VZ = get_mass_matrix_VZ();
   MVZ = calculate_singlet_mass(mass_matrix_VZ);

   if (MVZ < 0.)
      problems.flag_tachyon(MSSMNoFV_info::VZ);

   MVZ = AbsSqrt(MVZ);
}

double CLASSNAME::get_mass_matrix_Fd() const
{
   const double mass_matrix_Fd = Re(0.7071067811865475*vd*Yd(0,0));

   return mass_matrix_Fd;
}

void CLASSNAME::calculate_MFd()
{
   const auto mass_matrix_Fd = get_mass_matrix_Fd();
   MFd = calculate_singlet_mass(mass_matrix_Fd);
}

double CLASSNAME::get_mass_matrix_Fs() const
{
   const double mass_matrix_Fs = Re(0.7071067811865475*vd*Yd(1,1));

   return mass_matrix_Fs;
}

void CLASSNAME::calculate_MFs()
{
   const auto mass_matrix_Fs = get_mass_matrix_Fs();
   MFs = calculate_singlet_mass(mass_matrix_Fs);
}

double CLASSNAME::get_mass_matrix_Fb() const
{
   const double mass_matrix_Fb = Re(0.7071067811865475*vd*Yd(2,2));

   return mass_matrix_Fb;
}

void CLASSNAME::calculate_MFb()
{
   const auto mass_matrix_Fb = get_mass_matrix_Fb();
   MFb = calculate_singlet_mass(mass_matrix_Fb);
}

double CLASSNAME::get_mass_matrix_Fu() const
{
   const double mass_matrix_Fu = Re(0.7071067811865475*vu*Yu(0,0));

   return mass_matrix_Fu;
}

void CLASSNAME::calculate_MFu()
{
   const auto mass_matrix_Fu = get_mass_matrix_Fu();
   MFu = calculate_singlet_mass(mass_matrix_Fu);
}

double CLASSNAME::get_mass_matrix_Fc() const
{
   const double mass_matrix_Fc = Re(0.7071067811865475*vu*Yu(1,1));

   return mass_matrix_Fc;
}

void CLASSNAME::calculate_MFc()
{
   const auto mass_matrix_Fc = get_mass_matrix_Fc();
   MFc = calculate_singlet_mass(mass_matrix_Fc);
}

double CLASSNAME::get_mass_matrix_Ft() const
{
   const double mass_matrix_Ft = Re(0.7071067811865475*vu*Yu(2,2));

   return mass_matrix_Ft;
}

void CLASSNAME::calculate_MFt()
{
   const auto mass_matrix_Ft = get_mass_matrix_Ft();
   MFt = calculate_singlet_mass(mass_matrix_Ft);
}

double CLASSNAME::get_mass_matrix_Fve() const
{
   const double mass_matrix_Fve = Re(0);

   return mass_matrix_Fve;
}

void CLASSNAME::calculate_MFve()
{
   const auto mass_matrix_Fve = get_mass_matrix_Fve();
   MFve = calculate_singlet_mass(mass_matrix_Fve);
}

double CLASSNAME::get_mass_matrix_Fvm() const
{
   const double mass_matrix_Fvm = Re(0);

   return mass_matrix_Fvm;
}

void CLASSNAME::calculate_MFvm()
{
   const auto mass_matrix_Fvm = get_mass_matrix_Fvm();
   MFvm = calculate_singlet_mass(mass_matrix_Fvm);
}

double CLASSNAME::get_mass_matrix_Fvt() const
{
   const double mass_matrix_Fvt = Re(0);

   return mass_matrix_Fvt;
}

void CLASSNAME::calculate_MFvt()
{
   const auto mass_matrix_Fvt = get_mass_matrix_Fvt();
   MFvt = calculate_singlet_mass(mass_matrix_Fvt);
}

double CLASSNAME::get_mass_matrix_Fe() const
{
   const double mass_matrix_Fe = Re(0.7071067811865475*vd*Ye(0,0));

   return mass_matrix_Fe;
}

void CLASSNAME::calculate_MFe()
{
   const auto mass_matrix_Fe = get_mass_matrix_Fe();
   MFe = calculate_singlet_mass(mass_matrix_Fe);
}

double CLASSNAME::get_mass_matrix_Fm() const
{
   const double mass_matrix_Fm = Re(0.7071067811865475*vd*Ye(1,1));

   return mass_matrix_Fm;
}

void CLASSNAME::calculate_MFm()
{
   const auto mass_matrix_Fm = get_mass_matrix_Fm();
   MFm = calculate_singlet_mass(mass_matrix_Fm);
}

double CLASSNAME::get_mass_matrix_Ftau() const
{
   const double mass_matrix_Ftau = Re(0.7071067811865475*vd*Ye(2,2));

   return mass_matrix_Ftau;
}

void CLASSNAME::calculate_MFtau()
{
   const auto mass_matrix_Ftau = get_mass_matrix_Ftau();
   MFtau = calculate_singlet_mass(mass_matrix_Ftau);
}

double CLASSNAME::get_mass_matrix_SveL() const
{
   const double mass_matrix_SveL = Re(0.125*(8*ml2(0,0) - 0.6*Sqr(g1)*(
      -Sqr(vd) + Sqr(vu)) - Sqr(g2)*(-Sqr(vd) + Sqr(vu))));

   return mass_matrix_SveL;
}

void CLASSNAME::calculate_MSveL()
{
   const auto mass_matrix_SveL = get_mass_matrix_SveL();
   MSveL = calculate_singlet_mass(mass_matrix_SveL);

   if (MSveL < 0.)
      problems.flag_tachyon(MSSMNoFV_info::SveL);

   MSveL = AbsSqrt(MSveL);
}

double CLASSNAME::get_mass_matrix_SvmL() const
{
   const double mass_matrix_SvmL = Re(0.125*(8*ml2(1,1) - 0.6*Sqr(g1)*(
      -Sqr(vd) + Sqr(vu)) - Sqr(g2)*(-Sqr(vd) + Sqr(vu))));

   return mass_matrix_SvmL;
}

void CLASSNAME::calculate_MSvmL()
{
   const auto mass_matrix_SvmL = get_mass_matrix_SvmL();
   MSvmL = calculate_singlet_mass(mass_matrix_SvmL);

   if (MSvmL < 0.)
      problems.flag_tachyon(MSSMNoFV_info::SvmL);

   MSvmL = AbsSqrt(MSvmL);
}

double CLASSNAME::get_mass_matrix_SvtL() const
{
   const double mass_matrix_SvtL = Re(0.125*(8*ml2(2,2) - 0.6*Sqr(g1)*(
      -Sqr(vd) + Sqr(vu)) - Sqr(g2)*(-Sqr(vd) + Sqr(vu))));

   return mass_matrix_SvtL;
}

void CLASSNAME::calculate_MSvtL()
{
   const auto mass_matrix_SvtL = get_mass_matrix_SvtL();
   MSvtL = calculate_singlet_mass(mass_matrix_SvtL);

   if (MSvtL < 0.)
      problems.flag_tachyon(MSSMNoFV_info::SvtL);

   MSvtL = AbsSqrt(MSvtL);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Sd() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Sd;

   mass_matrix_Sd(0,0) = mq2(0,0) + 0.5*AbsSqr(Yd(0,0))*Sqr(vd) - 0.025*
      Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Sd(0,1) = 0.7071067811865475*vd*Conj(TYd(0,0)) -
      0.7071067811865475*vu*Conj(Yd(0,0))*Mu;
   mass_matrix_Sd(1,1) = md2(0,0) + 0.5*AbsSqr(Yd(0,0))*Sqr(vd) - 0.05*
      Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Sd);

   return mass_matrix_Sd;
}

void CLASSNAME::calculate_MSd()
{
   const auto mass_matrix_Sd(get_mass_matrix_Sd());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Sd, MSd, ZD, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Sd, eigenvalue_error > precision
      * Abs(MSd(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Sd, MSd, ZD);
#endif

   if (MSd.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Sd);

   MSd = AbsSqrt(MSd);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Su() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Su;

   mass_matrix_Su(0,0) = mq2(0,0) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*AbsSqr(Yu(0,0))*Sqr(vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Su(0,1) = 0.7071067811865475*vu*Conj(TYu(0,0)) -
      0.7071067811865475*vd*Conj(Yu(0,0))*Mu;
   mass_matrix_Su(1,1) = mu2(0,0) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*AbsSqr(Yu(0
      ,0))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Su);

   return mass_matrix_Su;
}

void CLASSNAME::calculate_MSu()
{
   const auto mass_matrix_Su(get_mass_matrix_Su());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Su, MSu, ZU, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Su, eigenvalue_error > precision
      * Abs(MSu(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Su, MSu, ZU);
#endif

   if (MSu.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Su);

   MSu = AbsSqrt(MSu);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Se() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Se;

   mass_matrix_Se(0,0) = ml2(0,0) + 0.5*AbsSqr(Ye(0,0))*Sqr(vd) + 0.075*
      Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Se(0,1) = 0.7071067811865475*vd*Conj(TYe(0,0)) -
      0.7071067811865475*vu*Conj(Ye(0,0))*Mu;
   mass_matrix_Se(1,1) = me2(0,0) + 0.5*AbsSqr(Ye(0,0))*Sqr(vd) - 0.15*
      Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Se);

   return mass_matrix_Se;
}

void CLASSNAME::calculate_MSe()
{
   const auto mass_matrix_Se(get_mass_matrix_Se());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Se, MSe, ZE, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Se, eigenvalue_error > precision
      * Abs(MSe(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Se, MSe, ZE);
#endif

   if (MSe.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Se);

   MSe = AbsSqrt(MSe);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Sm() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Sm;

   mass_matrix_Sm(0,0) = ml2(1,1) + 0.5*AbsSqr(Ye(1,1))*Sqr(vd) + 0.075*
      Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Sm(0,1) = 0.7071067811865475*vd*Conj(TYe(1,1)) -
      0.7071067811865475*vu*Conj(Ye(1,1))*Mu;
   mass_matrix_Sm(1,1) = me2(1,1) + 0.5*AbsSqr(Ye(1,1))*Sqr(vd) - 0.15*
      Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Sm);

   return mass_matrix_Sm;
}

void CLASSNAME::calculate_MSm()
{
   const auto mass_matrix_Sm(get_mass_matrix_Sm());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Sm, MSm, ZM, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Sm, eigenvalue_error > precision
      * Abs(MSm(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Sm, MSm, ZM);
#endif

   if (MSm.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Sm);

   MSm = AbsSqrt(MSm);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Stau() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Stau;

   mass_matrix_Stau(0,0) = ml2(2,2) + 0.5*AbsSqr(Ye(2,2))*Sqr(vd) + 0.075
      *Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Stau(0,1) = 0.7071067811865475*vd*Conj(TYe(2,2)) -
      0.7071067811865475*vu*Conj(Ye(2,2))*Mu;
   mass_matrix_Stau(1,1) = me2(2,2) + 0.5*AbsSqr(Ye(2,2))*Sqr(vd) - 0.15*
      Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Stau);

   return mass_matrix_Stau;
}

void CLASSNAME::calculate_MStau()
{
   const auto mass_matrix_Stau(get_mass_matrix_Stau());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Stau, MStau, ZTau,
      eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Stau, eigenvalue_error >
      precision * Abs(MStau(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Stau, MStau, ZTau);
#endif

   if (MStau.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Stau);

   MStau = AbsSqrt(MStau);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Ss() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Ss;

   mass_matrix_Ss(0,0) = mq2(1,1) + 0.5*AbsSqr(Yd(1,1))*Sqr(vd) - 0.025*
      Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Ss(0,1) = 0.7071067811865475*vd*Conj(TYd(1,1)) -
      0.7071067811865475*vu*Conj(Yd(1,1))*Mu;
   mass_matrix_Ss(1,1) = md2(1,1) + 0.5*AbsSqr(Yd(1,1))*Sqr(vd) - 0.05*
      Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Ss);

   return mass_matrix_Ss;
}

void CLASSNAME::calculate_MSs()
{
   const auto mass_matrix_Ss(get_mass_matrix_Ss());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Ss, MSs, ZS, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Ss, eigenvalue_error > precision
      * Abs(MSs(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Ss, MSs, ZS);
#endif

   if (MSs.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Ss);

   MSs = AbsSqrt(MSs);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Sc() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Sc;

   mass_matrix_Sc(0,0) = mq2(1,1) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*AbsSqr(Yu(1,1))*Sqr(vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Sc(0,1) = 0.7071067811865475*vu*Conj(TYu(1,1)) -
      0.7071067811865475*vd*Conj(Yu(1,1))*Mu;
   mass_matrix_Sc(1,1) = mu2(1,1) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*AbsSqr(Yu(1
      ,1))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Sc);

   return mass_matrix_Sc;
}

void CLASSNAME::calculate_MSc()
{
   const auto mass_matrix_Sc(get_mass_matrix_Sc());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Sc, MSc, ZC, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Sc, eigenvalue_error > precision
      * Abs(MSc(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Sc, MSc, ZC);
#endif

   if (MSc.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Sc);

   MSc = AbsSqrt(MSc);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Sb() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Sb;

   mass_matrix_Sb(0,0) = mq2(2,2) + 0.5*AbsSqr(Yd(2,2))*Sqr(vd) - 0.025*
      Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_Sb(0,1) = 0.7071067811865475*vd*Conj(TYd(2,2)) -
      0.7071067811865475*vu*Conj(Yd(2,2))*Mu;
   mass_matrix_Sb(1,1) = md2(2,2) + 0.5*AbsSqr(Yd(2,2))*Sqr(vd) - 0.05*
      Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_Sb);

   return mass_matrix_Sb;
}

void CLASSNAME::calculate_MSb()
{
   const auto mass_matrix_Sb(get_mass_matrix_Sb());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Sb, MSb, ZB, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Sb, eigenvalue_error > precision
      * Abs(MSb(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Sb, MSb, ZB);
#endif

   if (MSb.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Sb);

   MSb = AbsSqrt(MSb);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_St() const
{
   Eigen::Matrix<double,2,2> mass_matrix_St;

   mass_matrix_St(0,0) = mq2(2,2) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*AbsSqr(Yu(2,2))*Sqr(vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*
      Sqr(g2)*Sqr(vu);
   mass_matrix_St(0,1) = 0.7071067811865475*vu*Conj(TYu(2,2)) -
      0.7071067811865475*vd*Conj(Yu(2,2))*Mu;
   mass_matrix_St(1,1) = mu2(2,2) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*AbsSqr(Yu(2
      ,2))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);

   Hermitianize(mass_matrix_St);

   return mass_matrix_St;
}

void CLASSNAME::calculate_MSt()
{
   const auto mass_matrix_St(get_mass_matrix_St());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_St, MSt, ZT, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::St, eigenvalue_error > precision
      * Abs(MSt(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_St, MSt, ZT);
#endif

   if (MSt.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::St);

   MSt = AbsSqrt(MSt);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_hh() const
{
   Eigen::Matrix<double,2,2> mass_matrix_hh;

   mass_matrix_hh(0,0) = mHd2 + AbsSqr(Mu) + 0.225*Sqr(g1)*Sqr(vd) +
      0.375*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_hh(0,1) = -0.5*BMu - 0.5*Conj(BMu) - 0.15*vd*vu*Sqr(g1) -
      0.25*vd*vu*Sqr(g2);
   mass_matrix_hh(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) -
      0.125*Sqr(g2)*Sqr(vd) + 0.225*Sqr(g1)*Sqr(vu) + 0.375*Sqr(g2)*Sqr(vu);

   Symmetrize(mass_matrix_hh);

   return mass_matrix_hh;
}

void CLASSNAME::calculate_Mhh()
{
   const auto mass_matrix_hh(get_mass_matrix_hh());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_hh, Mhh, ZH, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::hh, eigenvalue_error > precision
      * Abs(Mhh(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_hh, Mhh, ZH);
#endif

   if (Mhh.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::hh);

   Mhh = AbsSqrt(Mhh);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Ah() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Ah;

   mass_matrix_Ah(0,0) = mHd2 + AbsSqr(Mu) + 0.3872983346207417*g1*g2*Cos
      (ThetaW())*Sin(ThetaW())*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)*
      Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu) + 0.25*Sqr(g2)*
      Sqr(vd)*Sqr(Cos(ThetaW())) + 0.15*Sqr(g1)*Sqr(vd)*Sqr(Sin(ThetaW()));
   mass_matrix_Ah(0,1) = 0.5*BMu + 0.5*Conj(BMu) - 0.3872983346207417*g1*
      g2*vd*vu*Cos(ThetaW())*Sin(ThetaW()) - 0.25*vd*vu*Sqr(g2)*Sqr(Cos(ThetaW(
      ))) - 0.15*vd*vu*Sqr(g1)*Sqr(Sin(ThetaW()));
   mass_matrix_Ah(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) -
      0.125*Sqr(g2)*Sqr(vd) + 0.3872983346207417*g1*g2*Cos(ThetaW())*Sin(ThetaW
      ())*Sqr(vu) + 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu) + 0.25*Sqr(g2
      )*Sqr(vu)*Sqr(Cos(ThetaW())) + 0.15*Sqr(g1)*Sqr(vu)*Sqr(Sin(ThetaW()));

   Symmetrize(mass_matrix_Ah);

   return mass_matrix_Ah;
}

void CLASSNAME::calculate_MAh()
{
   const auto mass_matrix_Ah(get_mass_matrix_Ah());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Ah, MAh, ZA, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Ah, eigenvalue_error > precision
      * Abs(MAh(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Ah, MAh, ZA);
#endif

   if (MAh.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Ah);

   MAh = AbsSqrt(MAh);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Hpm() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Hpm;

   mass_matrix_Hpm(0,0) = mHd2 + AbsSqr(Mu) + 0.075*Sqr(g1)*Sqr(vd) +
      0.375*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Hpm(0,1) = Conj(BMu);
   mass_matrix_Hpm(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) +
      0.125*Sqr(g2)*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vu) + 0.375*Sqr(g2)*Sqr(vu);

   Hermitianize(mass_matrix_Hpm);

   return mass_matrix_Hpm;
}

void CLASSNAME::calculate_MHpm()
{
   const auto mass_matrix_Hpm(get_mass_matrix_Hpm());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_hermitian(mass_matrix_Hpm, MHpm, ZP, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Hpm, eigenvalue_error >
      precision * Abs(MHpm(0)));
#else
   fs_diagonalize_hermitian(mass_matrix_Hpm, MHpm, ZP);
#endif

   if (MHpm.minCoeff() < 0.)
      problems.flag_tachyon(MSSMNoFV_info::Hpm);

   MHpm = AbsSqrt(MHpm);
}

Eigen::Matrix<double,4,4> CLASSNAME::get_mass_matrix_Chi() const
{
   Eigen::Matrix<double,4,4> mass_matrix_Chi;

   mass_matrix_Chi(0,0) = MassB;
   mass_matrix_Chi(0,1) = 0;
   mass_matrix_Chi(0,2) = -0.3872983346207417*g1*vd;
   mass_matrix_Chi(0,3) = 0.3872983346207417*g1*vu;
   mass_matrix_Chi(1,1) = MassWB;
   mass_matrix_Chi(1,2) = 0.5*g2*vd;
   mass_matrix_Chi(1,3) = -0.5*g2*vu;
   mass_matrix_Chi(2,2) = 0;
   mass_matrix_Chi(2,3) = -Mu;
   mass_matrix_Chi(3,3) = 0;

   Symmetrize(mass_matrix_Chi);

   return mass_matrix_Chi;
}

void CLASSNAME::calculate_MChi()
{
   const auto mass_matrix_Chi(get_mass_matrix_Chi());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_diagonalize_symmetric(mass_matrix_Chi, MChi, ZN, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Chi, eigenvalue_error >
      precision * Abs(MChi(0)));
#else
   fs_diagonalize_symmetric(mass_matrix_Chi, MChi, ZN);
#endif
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Cha() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Cha;

   mass_matrix_Cha(0,0) = MassWB;
   mass_matrix_Cha(0,1) = 0.7071067811865475*g2*vu;
   mass_matrix_Cha(1,0) = 0.7071067811865475*g2*vd;
   mass_matrix_Cha(1,1) = Mu;

   return mass_matrix_Cha;
}

void CLASSNAME::calculate_MCha()
{
   const auto mass_matrix_Cha(get_mass_matrix_Cha());

#ifdef CHECK_EIGENVALUE_ERROR
   double eigenvalue_error;
   fs_svd(mass_matrix_Cha, MCha, UM, UP, eigenvalue_error);
   problems.flag_bad_mass(MSSMNoFV_info::Cha, eigenvalue_error >
      precision * Abs(MCha(0)));
#else
   fs_svd(mass_matrix_Cha, MCha, UM, UP);
#endif
}

double CLASSNAME::get_mass_matrix_VWm() const
{
   const double mass_matrix_VWm = Re(0.25*Sqr(g2)*(Sqr(vd) + Sqr(vu)));

   return mass_matrix_VWm;
}

void CLASSNAME::calculate_MVWm()
{
   const auto mass_matrix_VWm = get_mass_matrix_VWm();
   MVWm = calculate_singlet_mass(mass_matrix_VWm);

   if (MVWm < 0.)
      problems.flag_tachyon(MSSMNoFV_info::VWm);

   MVWm = AbsSqrt(MVWm);
}


double CLASSNAME::get_ewsb_eq_hh_1() const
{
   double result = Re(mHd2*vd + vd*AbsSqr(Mu) - 0.5*vu*BMu - 0.5*vu*Conj(BMu) +
      0.075*Power(vd,3)*Sqr(g1) + 0.125*Power(vd,3)*Sqr(g2) - 0.075*vd*Sqr(g1)*
      Sqr(vu) - 0.125*vd*Sqr(g2)*Sqr(vu));

   return result;
}

double CLASSNAME::get_ewsb_eq_hh_2() const
{
   double result = Re(mHu2*vu + vu*AbsSqr(Mu) - 0.5*vd*BMu - 0.5*vd*Conj(BMu) +
      0.075*Power(vu,3)*Sqr(g1) + 0.125*Power(vu,3)*Sqr(g2) - 0.075*vu*Sqr(g1)*
      Sqr(vd) - 0.125*vu*Sqr(g2)*Sqr(vd));

   return result;
}



std::complex<double> CLASSNAME::CpUSdconjUSdVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) +
      15*Sqr(g2)*Sqr(Cos(ThetaW()))) + 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*Sqr(Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSdconjUSdconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (0,0)) + Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(0,0)) + Sqr(g1)
      + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-10*AbsSqr(Yd(0,0)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(2*KroneckerDelta(1,
      gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(20*AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZB(gI2,1))*(30*Conj(Yd(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(0,0)*ZB(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZB(gI1,1)) - Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZB(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZB(gI1,0) + 30*Conj(Yd(0,0))*KroneckerDelta(0,gO2)*Yd(2,2)*
      ZB(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZC(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZC(gI1,0)) + 4*Conj(ZC(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-(Conj(ZD(gI2,1))*(8*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(Sqr(g1) + 5*Sqr(g3))*ZD(gI1,1) + KroneckerDelta(0,gO1
      )*(KroneckerDelta(1,gO2)*(90*AbsSqr(Yd(0,0)) + Sqr(g1) - 40*Sqr(g3))*ZD(gI1,
      0) + 3*KroneckerDelta(0,gO2)*(10*AbsSqr(Yd(0,0)) + Sqr(g1))*ZD(gI1,1)))) -
      Conj(ZD(gI2,0))*(2*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZD(gI1,0) + KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(10*AbsSqr(Yd(0,0)) + Sqr(g1))*ZD(gI1,0) + KroneckerDelta(0,gO2)*(90*
      AbsSqr(Yd(0,0)) + Sqr(g1) - 40*Sqr(g3))*ZD(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(10*Conj(Ye(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(0,0)*ZE(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZE(gI1,1)) + Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZE(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZE(gI1,0) - 10*Conj(Yd(0,0))*KroneckerDelta(0,gO2)*Ye(0,0)*ZE
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(10*Conj(Ye(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(0,0)*ZM(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZM(gI1,1)) + Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZM(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZM(gI1,0) - 10*Conj(Yd(0,0))*KroneckerDelta(0,gO2)*Ye(1,1)*ZM
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZS(gI2,1))*(30*Conj(Yd(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(0,0)*ZS(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZS(gI1,1)) - Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZS(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZS(gI1,0) + 30*Conj(Yd(0,0))*KroneckerDelta(0,gO2)*Yd(1,1)*
      ZS(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZT(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZT(gI1,0)) + 4*Conj(ZT(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(10*Conj(Ye(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(0,0)*ZTau(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1)) + Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2))*ZTau(gI1,0) + 2*KroneckerDelta(1,gO1)*(
      KroneckerDelta(1,gO2)*Sqr(g1)*ZTau(gI1,0) - 10*Conj(Yd(0,0))*KroneckerDelta(
      0,gO2)*Ye(2,2)*ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZU(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Yd(0,0)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZU(gI1,0)) + 4*Conj(ZU(gI2,1))*(2*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)))*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (0,0)) + Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(0,0)) + Sqr(g1)
      + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSdAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZD(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYd(0,0))*ZA(gI2,0) + Conj(Yd(0,0))*Mu*ZA(gI2,1)
      ) - Conj(ZD(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(0,0)*ZA(gI2,1) + ZA(
      gI2,0)*TYd(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSdhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZD(gI1,1))*(7.0710678118654755*Conj(TYd(0,0))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Yd(0,0))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*(-(vd*(-10*AbsSqr
      (Yd(0,0)) + Sqr(g1))*ZH(gI2,0)) + vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZD(gI1,0))*(
      KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr(g2))*ZH(gI2
      ,0) - vu*(Sqr(g1) + 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(0,0)*ZH(gI2,1) - ZH(gI2,0)*TYd(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSuHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,1))*(Conj(ZU(gI1,0))*(-1.4142135623730951*vu*
      KroneckerDelta(0,gO2)*(-2*AbsSqr(Yu(0,0)) + Sqr(g2)) + 4*Conj(Mu)*
      KroneckerDelta(1,gO2)*Yd(0,0)) + 2*Conj(ZU(gI1,1))*(2*Conj(TYu(0,0))*
      KroneckerDelta(0,gO2) + 1.4142135623730951*vd*Conj(Yu(0,0))*KroneckerDelta(1
      ,gO2)*Yd(0,0))) + Conj(ZP(gI2,0))*(2*Conj(Yu(0,0))*Conj(ZU(gI1,1))*(2*
      KroneckerDelta(0,gO2)*Mu + 1.4142135623730951*vu*KroneckerDelta(1,gO2)*Yd(0,
      0)) + Conj(ZU(gI1,0))*(-1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*
      AbsSqr(Yd(0,0)) + Sqr(g2)) + 4*KroneckerDelta(1,gO2)*TYd(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVGSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZD(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVPSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-7.745966692414834*g1*Conj(ZD(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZD(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) - 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVZSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.2581988897471611*g1*Conj(ZD(gI2,1))*KroneckerDelta(1,gO2)*Sin(
      ThetaW()) - 0.03333333333333333*Conj(ZD(gI2,0))*KroneckerDelta(0,gO2)*(15*g2
      *Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVWmSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZU(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFuChaPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(Yu(0,0))*KroneckerDelta(0,gO2)*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFuChaPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFdChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yd(0,
      0))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFdChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdGluFdPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdGluFdPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(16*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)
      *Sqr(g1)*Sqr(Sin(ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())) + Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSuconjUSuconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZA(
      gI1,0)*ZA(gI2,0) - (-5*AbsSqr(Yu(0,0)) + Sqr(g1))*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZA(gI1,0)
      *ZA(gI2,0) - (20*AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Yd(0,
      0)) + Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(-4*KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)) + KroneckerDelta(
      0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZB(gI1,0) - 2*Conj(ZB(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZC(gI2,1))*(-15*Conj(Yu(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(0,0)*ZC(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZC(gI1,1)) - Conj(ZC(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZC(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZC(gI1,0) - 15*Conj(Yu(0,0))*KroneckerDelta(0,gO2)*Yu(1,1)*
      ZC(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZD(gI1,0) - 2*Conj(ZD(gI2,1))*(-4*KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(10*AbsSqr(Yd(0,0)) + Sqr(g1)))*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZE(gI1,0) - 2*Conj(ZE(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZM(gI1,0) - 2*Conj(ZM(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZS(gI1,0) - 2*Conj(ZS(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZT(gI2,1))*(-15*Conj(Yu(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(0,0)*ZT(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZT(gI1,1)) - Conj(ZT(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZT(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZT(gI1,0) - 15*Conj(Yu(0,0))*KroneckerDelta(0,gO2)*Yu(2,2)*
      ZT(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZTau(gI1,0) - 2*Conj(ZTau(gI2,1))*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.06666666666666667*(Conj(ZU(gI2,1))*(-4*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(4*Sqr(g1) + 5*Sqr(g3))*ZU(gI1,1) + KroneckerDelta(0,
      gO1)*(KroneckerDelta(1,gO2)*(-45*AbsSqr(Yu(0,0)) + Sqr(g1) + 20*Sqr(g3))*ZU(
      gI1,0) + 3*KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1))*ZU(gI1,1)))
      - Conj(ZU(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZU(gI1,0) - KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1))*ZU(gI1,0) + KroneckerDelta(0,gO2)*(-45*
      AbsSqr(Yu(0,0)) + Sqr(g1) + 20*Sqr(g3))*ZU(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZH(
      gI1,0)*ZH(gI2,0) - (-5*AbsSqr(Yu(0,0)) + Sqr(g1))*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZH(gI1,0)
      *ZH(gI2,0) - (20*AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuconjHpmSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZD(gI2,1))*(2*Conj(TYd(0,0))*KroneckerDelta(0,gO2)*ZP(gI1,
      0) + Conj(Yd(0,0))*(2*KroneckerDelta(0,gO2)*Mu*ZP(gI1,1) +
      1.4142135623730951*KroneckerDelta(1,gO2)*Yu(0,0)*(vu*ZP(gI1,0) + vd*ZP(gI1,1
      )))) - 0.25*Conj(ZD(gI2,0))*(1.4142135623730951*KroneckerDelta(0,gO2)*(vd*(
      -2*AbsSqr(Yd(0,0)) + Sqr(g2))*ZP(gI1,0) + vu*(-2*AbsSqr(Yu(0,0)) + Sqr(g2))*
      ZP(gI1,1)) - 4*KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(0,0)*ZP(gI1,0) + ZP(gI1,1)
      *TYu(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuSuAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(0,0))*Conj(ZU(
      gI1,1))*KroneckerDelta(0,gO2)*Mu*ZA(gI2,0) - Conj(Mu)*Conj(ZU(gI1,0))*
      KroneckerDelta(1,gO2)*Yu(0,0)*ZA(gI2,0) + ZA(gI2,1)*(Conj(ZU(gI1,1))*Conj(
      TYu(0,0))*KroneckerDelta(0,gO2) - Conj(ZU(gI1,0))*KroneckerDelta(1,gO2)*TYu(
      0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuSuhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZU(gI1,1))*(-7.0710678118654755*Conj(TYu(0,0))*
      KroneckerDelta(0,gO2)*ZH(gI2,1) + 2*KroneckerDelta(1,gO2)*Sqr(g1)*(-(vd*ZH(
      gI2,0)) + vu*ZH(gI2,1)) + 5*Conj(Yu(0,0))*(1.4142135623730951*KroneckerDelta
      (0,gO2)*Mu*ZH(gI2,0) - 2*vu*KroneckerDelta(1,gO2)*Yu(0,0)*ZH(gI2,1))) + Conj
      (ZU(gI1,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZH(gI2,0) - vu*
      (20*AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(0,0)*ZH(gI2,0) - ZH(gI2,1)*TYu(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSubarChaFdPR(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(0,0))*KroneckerDelta(0,gO2)*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSubarChaFdPL(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0))*KroneckerDelta(0,gO1)) + Conj(UP(gI1,1))*
      KroneckerDelta(1,gO1)*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuconjVWmSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZD(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVGSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZU(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVPSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(15.491933384829668*g1*Conj(ZU(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZU(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVZSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-15.491933384829668*g1*Conj(ZU(gI2,1))*
      KroneckerDelta(1,gO2)*Sin(ThetaW()) + Conj(ZU(gI2,0))*KroneckerDelta(0,gO2)*
      (15*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuFuChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yu(0,0
      ))*KroneckerDelta(0,gO2)*ZN(gI2,3);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuFuChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) -
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,3)
      )*KroneckerDelta(1,gO1)*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuGluFuPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuGluFuPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.1*(12*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)*Sqr(Sin
      (ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 5*Sqr(g2)*Sqr(Cos(
      ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(-10*AbsSqr(Ye(
      0,0)) + 3*Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*Sqr(g1)
      + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSeconjUSeconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjUSeVWmSveL(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (0,0)) + 3*Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - 3*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(0,0)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Ye(0,0)) - 3*Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0)) + Conj(ZP(gI2,1))*(-6*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZB(gI2,1))*(-10*Conj(Yd(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(0,0)*ZB(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZB(gI1,1)) + Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZB(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZB(gI1,0) + 10*Conj(Ye(0,0))*KroneckerDelta(0,gO2)*Yd(2,2)*ZB
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZD(gI2,1))*(-10*Conj(Yd(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(0,0)*ZD(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZD(gI1,1)) + Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZD(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZD(gI1,0) + 10*Conj(Ye(0,0))*KroneckerDelta(0,gO2)*Yd(0,0)*ZD
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZE(gI2,1))*(-12*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*ZE(gI1,1) + KroneckerDelta(0,gO1)*(-10*AbsSqr(Ye(0,0)) + 3*Sqr(
      g1))*(KroneckerDelta(1,gO2)*ZE(gI1,0) + KroneckerDelta(0,gO2)*ZE(gI1,1))) -
      Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*
      Sqr(g2))*ZE(gI1,0) - KroneckerDelta(1,gO1)*(-10*AbsSqr(Ye(0,0)) + 3*Sqr(g1))
      *(KroneckerDelta(1,gO2)*ZE(gI1,0) + KroneckerDelta(0,gO2)*ZE(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(10*Conj(Ye(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(0,0)*ZM(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZM(gI1,1)) - Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(3*Sqr(g1) + 5*Sqr(g2))*ZM(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZM(gI1,0) + 10*Conj(Ye(0,0))*KroneckerDelta(0,
      gO2)*Ye(1,1)*ZM(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZS(gI2,1))*(-10*Conj(Yd(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(0,0)*ZS(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZS(gI1,1)) + Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZS(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZS(gI1,0) + 10*Conj(Ye(0,0))*KroneckerDelta(0,gO2)*Yd(1,1)*ZS
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(10*Conj(Ye(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(0,0)*ZTau(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1)) - Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(3*Sqr(g1) + 5*Sqr(g2))*ZTau(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZTau(gI1,0) + 10*Conj(Ye(0,0))*KroneckerDelta(
      0,gO2)*Ye(2,2)*ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSehhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (0,0)) + 3*Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - 3*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(0,0)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSeAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZE(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYe(0,0))*ZA(gI2,0) + Conj(Ye(0,0))*Mu*ZA(gI2,1)
      ) - Conj(ZE(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(0,0)*ZA(gI2,1) + ZA(
      gI2,0)*TYe(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSehh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI1,1))*(7.0710678118654755*Conj(TYe(0,0))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Ye(0,0))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*((10*vd*AbsSqr(Ye
      (0,0)) - 3*vd*Sqr(g1))*ZH(gI2,0) + 3*vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZE(gI1,0)
      )*(KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Ye(0,0)) - 3*Sqr(g1) + 5*Sqr(g2))*
      ZH(gI2,0) + vu*(3*Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(0,0)*ZH(gI2,1) - ZH(gI2,0)*TYe(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSveLHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,1))*(-1.4142135623730951*vu*KroneckerDelta(0,gO2)
      *Sqr(g2) + 4*Conj(Mu)*KroneckerDelta(1,gO2)*Ye(0,0)) + Conj(ZP(gI2,0))*(
      -1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Ye(0,0)) + Sqr(g2))
      + 4*KroneckerDelta(1,gO2)*TYe(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeVPSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(-7.745966692414834*g1*Conj(ZE(gI2,1))*Cos(ThetaW())*
      KroneckerDelta(1,gO2) - Conj(ZE(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 5*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeVZSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(7.745966692414834*g1*Conj(ZE(gI2,1))*KroneckerDelta(1,gO2)*Sin
      (ThetaW()) - Conj(ZE(gI2,0))*KroneckerDelta(0,gO2)*(5*g2*Cos(ThetaW()) -
      3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

double CLASSNAME::CpconjUSeFveChaPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFveChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Ye(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFeChiPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Ye(0,
      0))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFeChiPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Ye(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.1*(12*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)*Sqr(Sin
      (ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 5*Sqr(g2)*Sqr(Cos(
      ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(-10*AbsSqr(Ye(
      1,1)) + 3*Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*Sqr(g1)
      + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSmconjUSmconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjUSmVWmSvmL(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (1,1)) + 3*Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - 3*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(1,1)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Ye(1,1)) - 3*Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0)) + Conj(ZP(gI2,1))*(-6*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZB(gI2,1))*(-10*Conj(Yd(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(1,1)*ZB(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZB(gI1,1)) + Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZB(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZB(gI1,0) + 10*Conj(Ye(1,1))*KroneckerDelta(0,gO2)*Yd(2,2)*ZB
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZD(gI2,1))*(-10*Conj(Yd(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(1,1)*ZD(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZD(gI1,1)) + Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZD(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZD(gI1,0) + 10*Conj(Ye(1,1))*KroneckerDelta(0,gO2)*Yd(0,0)*ZD
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(10*Conj(Ye(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(1,1)*ZE(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZE(gI1,1)) - Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(3*Sqr(g1) + 5*Sqr(g2))*ZE(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZE(gI1,0) + 10*Conj(Ye(1,1))*KroneckerDelta(0,
      gO2)*Ye(0,0)*ZE(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZM(gI2,1))*(-12*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*ZM(gI1,1) + KroneckerDelta(0,gO1)*(-10*AbsSqr(Ye(1,1)) + 3*Sqr(
      g1))*(KroneckerDelta(1,gO2)*ZM(gI1,0) + KroneckerDelta(0,gO2)*ZM(gI1,1))) -
      Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*
      Sqr(g2))*ZM(gI1,0) - KroneckerDelta(1,gO1)*(-10*AbsSqr(Ye(1,1)) + 3*Sqr(g1))
      *(KroneckerDelta(1,gO2)*ZM(gI1,0) + KroneckerDelta(0,gO2)*ZM(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZS(gI2,1))*(-10*Conj(Yd(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(1,1)*ZS(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZS(gI1,1)) + Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZS(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZS(gI1,0) + 10*Conj(Ye(1,1))*KroneckerDelta(0,gO2)*Yd(1,1)*ZS
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(10*Conj(Ye(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(1,1)*ZTau(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1)) - Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(3*Sqr(g1) + 5*Sqr(g2))*ZTau(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZTau(gI1,0) + 10*Conj(Ye(1,1))*KroneckerDelta(
      0,gO2)*Ye(2,2)*ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSmconjUSmhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (1,1)) + 3*Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - 3*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(1,1)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmSmAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZM(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYe(1,1))*ZA(gI2,0) + Conj(Ye(1,1))*Mu*ZA(gI2,1)
      ) - Conj(ZM(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(1,1)*ZA(gI2,1) + ZA(
      gI2,0)*TYe(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmSmhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI1,1))*(7.0710678118654755*Conj(TYe(1,1))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Ye(1,1))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*((10*vd*AbsSqr(Ye
      (1,1)) - 3*vd*Sqr(g1))*ZH(gI2,0) + 3*vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZM(gI1,0)
      )*(KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Ye(1,1)) - 3*Sqr(g1) + 5*Sqr(g2))*
      ZH(gI2,0) + vu*(3*Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(1,1)*ZH(gI2,1) - ZH(gI2,0)*TYe(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmSvmLHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,1))*(-1.4142135623730951*vu*KroneckerDelta(0,gO2)
      *Sqr(g2) + 4*Conj(Mu)*KroneckerDelta(1,gO2)*Ye(1,1)) + Conj(ZP(gI2,0))*(
      -1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Ye(1,1)) + Sqr(g2))
      + 4*KroneckerDelta(1,gO2)*TYe(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmVPSm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(-7.745966692414834*g1*Conj(ZM(gI2,1))*Cos(ThetaW())*
      KroneckerDelta(1,gO2) - Conj(ZM(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 5*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmVZSm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(7.745966692414834*g1*Conj(ZM(gI2,1))*KroneckerDelta(1,gO2)*Sin
      (ThetaW()) - Conj(ZM(gI2,0))*KroneckerDelta(0,gO2)*(5*g2*Cos(ThetaW()) -
      3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

double CLASSNAME::CpconjUSmFvmChaPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmFvmChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Ye(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmFmChiPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Ye(1,
      1))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSmFmChiPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Ye(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.1*(12*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)*Sqr(Sin
      (ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 5*Sqr(g2)*Sqr(Cos(
      ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(6*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(-10*AbsSqr(Ye(
      2,2)) + 3*Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*Sqr(g1)
      + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUStauconjUStauconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjUStauVWmSvtL(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (2,2)) + 3*Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - 3*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(2,2)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Ye(2,2)) - 3*Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0)) + Conj(ZP(gI2,1))*(-6*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZB(gI2,1))*(-10*Conj(Yd(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(2,2)*ZB(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZB(gI1,1)) + Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZB(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZB(gI1,0) + 10*Conj(Ye(2,2))*KroneckerDelta(0,gO2)*Yd(2,2)*ZB
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZD(gI2,1))*(-10*Conj(Yd(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(2,2)*ZD(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZD(gI1,1)) + Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZD(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZD(gI1,0) + 10*Conj(Ye(2,2))*KroneckerDelta(0,gO2)*Yd(0,0)*ZD
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(10*Conj(Ye(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(2,2)*ZE(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZE(gI1,1)) - Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(3*Sqr(g1) + 5*Sqr(g2))*ZE(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZE(gI1,0) + 10*Conj(Ye(2,2))*KroneckerDelta(0,
      gO2)*Ye(0,0)*ZE(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(10*Conj(Ye(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(2,2)*ZM(gI1,0) - 3*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZM(gI1,1)) - Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(3*Sqr(g1) + 5*Sqr(g2))*ZM(gI1,0) + 2*KroneckerDelta(1,gO1)*(-3*
      KroneckerDelta(1,gO2)*Sqr(g1)*ZM(gI1,0) + 10*Conj(Ye(2,2))*KroneckerDelta(0,
      gO2)*Ye(1,1)*ZM(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZS(gI2,1))*(-10*Conj(Yd(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Ye(2,2)*ZS(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZS(gI1,1)) + Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZS(gI1,0) - 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZS(gI1,0) + 10*Conj(Ye(2,2))*KroneckerDelta(0,gO2)*Yd(1,1)*ZS
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZTau(gI2,1))*(-12*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*ZTau(gI1,1) + KroneckerDelta(0,gO1)*(-10*AbsSqr(Ye(2,2)) + 3*
      Sqr(g1))*(KroneckerDelta(1,gO2)*ZTau(gI1,0) + KroneckerDelta(0,gO2)*ZTau(gI1
      ,1))) - Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(3*
      Sqr(g1) + 5*Sqr(g2))*ZTau(gI1,0) - KroneckerDelta(1,gO1)*(-10*AbsSqr(Ye(2,2)
      ) + 3*Sqr(g1))*(KroneckerDelta(1,gO2)*ZTau(gI1,0) + KroneckerDelta(0,gO2)*
      ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(-2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStauconjUStauhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Ye
      (2,2)) + 3*Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - 3*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Ye(2,2)) - 3*Sqr(g1
      ) + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) + (3*Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(
      gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauStauAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZTau(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYe(2,2))*ZA(gI2,0) + Conj(Ye(2,2))*Mu*ZA(gI2,1)
      ) - Conj(ZTau(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(2,2)*ZA(gI2,1) + ZA
      (gI2,0)*TYe(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauStauhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI1,1))*(7.0710678118654755*Conj(TYe(2,2))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Ye(2,2))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*((10*vd*AbsSqr(Ye
      (2,2)) - 3*vd*Sqr(g1))*ZH(gI2,0) + 3*vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZTau(gI1,
      0))*(KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Ye(2,2)) - 3*Sqr(g1) + 5*Sqr(g2))
      *ZH(gI2,0) + vu*(3*Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Ye(2,2)*ZH(gI2,1) - ZH(gI2,0)*TYe(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauSvtLHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,1))*(-1.4142135623730951*vu*KroneckerDelta(0,gO2)
      *Sqr(g2) + 4*Conj(Mu)*KroneckerDelta(1,gO2)*Ye(2,2)) + Conj(ZP(gI2,0))*(
      -1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Ye(2,2)) + Sqr(g2))
      + 4*KroneckerDelta(1,gO2)*TYe(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauVPStau(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(-7.745966692414834*g1*Conj(ZTau(gI2,1))*Cos(ThetaW())*
      KroneckerDelta(1,gO2) - Conj(ZTau(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 5*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauVZStau(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(7.745966692414834*g1*Conj(ZTau(gI2,1))*KroneckerDelta(1,gO2)*
      Sin(ThetaW()) - Conj(ZTau(gI2,0))*KroneckerDelta(0,gO2)*(5*g2*Cos(ThetaW())
      - 3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

double CLASSNAME::CpconjUStauFvtChaPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauFvtChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Ye(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauFtauChiPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Ye(2,
      2))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStauFtauChiPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Ye(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) +
      15*Sqr(g2)*Sqr(Cos(ThetaW()))) + 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*Sqr(Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSsconjUSsconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (1,1)) + Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(1,1)) + Sqr(g1)
      + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-10*AbsSqr(Yd(1,1)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(2*KroneckerDelta(1,
      gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZB(gI2,1))*(30*Conj(Yd(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(1,1)*ZB(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZB(gI1,1)) - Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZB(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZB(gI1,0) + 30*Conj(Yd(1,1))*KroneckerDelta(0,gO2)*Yd(2,2)*
      ZB(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZC(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Yd(1,1)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZC(gI1,0)) + 4*Conj(ZC(gI2,1))*(2*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)))*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZD(gI2,1))*(30*Conj(Yd(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(1,1)*ZD(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZD(gI1,1)) - Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZD(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZD(gI1,0) + 30*Conj(Yd(1,1))*KroneckerDelta(0,gO2)*Yd(0,0)*
      ZD(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(10*Conj(Ye(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(1,1)*ZE(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZE(gI1,1)) + Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZE(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZE(gI1,0) - 10*Conj(Yd(1,1))*KroneckerDelta(0,gO2)*Ye(0,0)*ZE
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(10*Conj(Ye(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(1,1)*ZM(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZM(gI1,1)) + Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZM(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZM(gI1,0) - 10*Conj(Yd(1,1))*KroneckerDelta(0,gO2)*Ye(1,1)*ZM
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-(Conj(ZS(gI2,1))*(8*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(Sqr(g1) + 5*Sqr(g3))*ZS(gI1,1) + KroneckerDelta(0,gO1
      )*(KroneckerDelta(1,gO2)*(90*AbsSqr(Yd(1,1)) + Sqr(g1) - 40*Sqr(g3))*ZS(gI1,
      0) + 3*KroneckerDelta(0,gO2)*(10*AbsSqr(Yd(1,1)) + Sqr(g1))*ZS(gI1,1)))) -
      Conj(ZS(gI2,0))*(2*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZS(gI1,0) + KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(10*AbsSqr(Yd(1,1)) + Sqr(g1))*ZS(gI1,0) + KroneckerDelta(0,gO2)*(90*
      AbsSqr(Yd(1,1)) + Sqr(g1) - 40*Sqr(g3))*ZS(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZT(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZT(gI1,0)) + 4*Conj(ZT(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(10*Conj(Ye(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(1,1)*ZTau(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1)) + Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2))*ZTau(gI1,0) + 2*KroneckerDelta(1,gO1)*(
      KroneckerDelta(1,gO2)*Sqr(g1)*ZTau(gI1,0) - 10*Conj(Yd(1,1))*KroneckerDelta(
      0,gO2)*Ye(2,2)*ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSsconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZU(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZU(gI1,0)) + 4*Conj(ZU(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSsconjUSshhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (1,1)) + Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(1,1)) + Sqr(g1)
      + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsScHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZC(gI1,1))*(2*Conj(ZP(gI2,1))*Conj(TYu(1,1))*
      KroneckerDelta(0,gO2) + Conj(Yu(1,1))*(1.4142135623730951*vd*Conj(ZP(gI2,1))
      *KroneckerDelta(1,gO2)*Yd(1,1) + Conj(ZP(gI2,0))*(2*KroneckerDelta(0,gO2)*Mu
      + 1.4142135623730951*vu*KroneckerDelta(1,gO2)*Yd(1,1)))) - 0.25*Conj(ZC(gI1
      ,0))*(Conj(ZP(gI2,1))*(1.4142135623730951*vu*KroneckerDelta(0,gO2)*(-2*
      AbsSqr(Yu(1,1)) + Sqr(g2)) - 4*Conj(Mu)*KroneckerDelta(1,gO2)*Yd(1,1)) +
      Conj(ZP(gI2,0))*(1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Yd(1
      ,1)) + Sqr(g2)) - 4*KroneckerDelta(1,gO2)*TYd(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsSsAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZS(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYd(1,1))*ZA(gI2,0) + Conj(Yd(1,1))*Mu*ZA(gI2,1)
      ) - Conj(ZS(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(1,1)*ZA(gI2,1) + ZA(
      gI2,0)*TYd(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsSshh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZS(gI1,1))*(7.0710678118654755*Conj(TYd(1,1))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Yd(1,1))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*(-(vd*(-10*AbsSqr
      (Yd(1,1)) + Sqr(g1))*ZH(gI2,0)) + vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZS(gI1,0))*(
      KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2))*ZH(gI2
      ,0) - vu*(Sqr(g1) + 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(1,1)*ZH(gI2,1) - ZH(gI2,0)*TYd(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsVWmSc(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZC(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsVGSs(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZS(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsVPSs(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-7.745966692414834*g1*Conj(ZS(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZS(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) - 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsVZSs(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.2581988897471611*g1*Conj(ZS(gI2,1))*KroneckerDelta(1,gO2)*Sin(
      ThetaW()) - 0.03333333333333333*Conj(ZS(gI2,0))*KroneckerDelta(0,gO2)*(15*g2
      *Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsFcChaPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(Yu(1,1))*KroneckerDelta(0,gO2)*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsFcChaPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsFsChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yd(1,
      1))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsFsChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsGluFsPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSsGluFsPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(16*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)
      *Sqr(g1)*Sqr(Sin(ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())) + Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUScconjUScconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZA(
      gI1,0)*ZA(gI2,0) - (-5*AbsSqr(Yu(1,1)) + Sqr(g1))*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZA(gI1,0)
      *ZA(gI2,0) - (20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Yd(1,
      1)) + Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(-4*KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)) + KroneckerDelta(
      0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZB(gI1,0) - 2*Conj(ZB(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.06666666666666667*(Conj(ZC(gI2,1))*(-4*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(4*Sqr(g1) + 5*Sqr(g3))*ZC(gI1,1) + KroneckerDelta(0,
      gO1)*(KroneckerDelta(1,gO2)*(-45*AbsSqr(Yu(1,1)) + Sqr(g1) + 20*Sqr(g3))*ZC(
      gI1,0) + 3*KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1))*ZC(gI1,1)))
      - Conj(ZC(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZC(gI1,0) - KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1))*ZC(gI1,0) + KroneckerDelta(0,gO2)*(-45*
      AbsSqr(Yu(1,1)) + Sqr(g1) + 20*Sqr(g3))*ZC(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZD(gI1,0) - 2*Conj(ZD(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZE(gI1,0) - 2*Conj(ZE(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZM(gI1,0) - 2*Conj(ZM(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZS(gI1,0) - 2*Conj(ZS(gI2,1))*(-4*KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(10*AbsSqr(Yd(1,1)) + Sqr(g1)))*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZT(gI2,1))*(-15*Conj(Yu(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(1,1)*ZT(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZT(gI1,1)) - Conj(ZT(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZT(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZT(gI1,0) - 15*Conj(Yu(1,1))*KroneckerDelta(0,gO2)*Yu(2,2)*
      ZT(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZTau(gI1,0) - 2*Conj(ZTau(gI2,1))*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUScconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZU(gI2,1))*(-15*Conj(Yu(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(1,1)*ZU(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZU(gI1,1)) - Conj(ZU(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZU(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZU(gI1,0) - 15*Conj(Yu(1,1))*KroneckerDelta(0,gO2)*Yu(0,0)*
      ZU(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUScconjUSchhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZH(
      gI1,0)*ZH(gI2,0) - (-5*AbsSqr(Yu(1,1)) + Sqr(g1))*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZH(gI1,0)
      *ZH(gI2,0) - (20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpconjUScconjHpmSs(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZS(gI2,1))*(2*Conj(TYd(1,1))*KroneckerDelta(0,gO2)*ZP(gI1,
      0) + Conj(Yd(1,1))*(2*KroneckerDelta(0,gO2)*Mu*ZP(gI1,1) +
      1.4142135623730951*KroneckerDelta(1,gO2)*Yu(1,1)*(vu*ZP(gI1,0) + vd*ZP(gI1,1
      )))) - 0.25*Conj(ZS(gI2,0))*(1.4142135623730951*KroneckerDelta(0,gO2)*(vd*(
      -2*AbsSqr(Yd(1,1)) + Sqr(g2))*ZP(gI1,0) + vu*(-2*AbsSqr(Yu(1,1)) + Sqr(g2))*
      ZP(gI1,1)) - 4*KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(1,1)*ZP(gI1,0) + ZP(gI1,1)
      *TYu(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUScScAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(1,1))*Conj(ZC(
      gI1,1))*KroneckerDelta(0,gO2)*Mu*ZA(gI2,0) - Conj(Mu)*Conj(ZC(gI1,0))*
      KroneckerDelta(1,gO2)*Yu(1,1)*ZA(gI2,0) + ZA(gI2,1)*(Conj(ZC(gI1,1))*Conj(
      TYu(1,1))*KroneckerDelta(0,gO2) - Conj(ZC(gI1,0))*KroneckerDelta(1,gO2)*TYu(
      1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUScSchh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZC(gI1,1))*(-7.0710678118654755*Conj(TYu(1,1))*
      KroneckerDelta(0,gO2)*ZH(gI2,1) + 2*KroneckerDelta(1,gO2)*Sqr(g1)*(-(vd*ZH(
      gI2,0)) + vu*ZH(gI2,1)) + 5*Conj(Yu(1,1))*(1.4142135623730951*KroneckerDelta
      (0,gO2)*Mu*ZH(gI2,0) - 2*vu*KroneckerDelta(1,gO2)*Yu(1,1)*ZH(gI2,1))) + Conj
      (ZC(gI1,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZH(gI2,0) - vu*
      (20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(1,1)*ZH(gI2,0) - ZH(gI2,1)*TYu(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUScbarChaFsPR(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(1,1))*KroneckerDelta(0,gO2)*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScbarChaFsPL(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0))*KroneckerDelta(0,gO1)) + Conj(UP(gI1,1))*
      KroneckerDelta(1,gO1)*Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScVGSc(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZC(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUScVPSc(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(15.491933384829668*g1*Conj(ZC(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZC(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUScVZSc(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-15.491933384829668*g1*Conj(ZC(gI2,1))*
      KroneckerDelta(1,gO2)*Sin(ThetaW()) + Conj(ZC(gI2,0))*KroneckerDelta(0,gO2)*
      (15*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUScconjVWmSs(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZS(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScFcChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yu(1,1
      ))*KroneckerDelta(0,gO2)*ZN(gI2,3);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScFcChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) -
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,3)
      )*KroneckerDelta(1,gO1)*Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScGluFcPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUScGluFcPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) +
      15*Sqr(g2)*Sqr(Cos(ThetaW()))) + 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1)*Sqr(Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUSbconjUSbconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (2,2)) + Sqr(g1))*ZA(gI1,0)*ZA(gI2,0) - Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(2,2)) + Sqr(g1)
      + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-10*AbsSqr(Yd(2,2)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(2*KroneckerDelta(1,
      gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(20*AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-(Conj(ZB(gI2,1))*(8*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(Sqr(g1) + 5*Sqr(g3))*ZB(gI1,1) + KroneckerDelta(0,gO1
      )*(KroneckerDelta(1,gO2)*(90*AbsSqr(Yd(2,2)) + Sqr(g1) - 40*Sqr(g3))*ZB(gI1,
      0) + 3*KroneckerDelta(0,gO2)*(10*AbsSqr(Yd(2,2)) + Sqr(g1))*ZB(gI1,1)))) -
      Conj(ZB(gI2,0))*(2*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZB(gI1,0) + KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(10*AbsSqr(Yd(2,2)) + Sqr(g1))*ZB(gI1,0) + KroneckerDelta(0,gO2)*(90*
      AbsSqr(Yd(2,2)) + Sqr(g1) - 40*Sqr(g3))*ZB(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZC(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZC(gI1,0)) + 4*Conj(ZC(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZD(gI2,1))*(30*Conj(Yd(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(2,2)*ZD(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZD(gI1,1)) - Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZD(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZD(gI1,0) + 30*Conj(Yd(2,2))*KroneckerDelta(0,gO2)*Yd(0,0)*
      ZD(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(10*Conj(Ye(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(2,2)*ZE(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZE(gI1,1)) + Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZE(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZE(gI1,0) - 10*Conj(Yd(2,2))*KroneckerDelta(0,gO2)*Ye(0,0)*ZE
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(10*Conj(Ye(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(2,2)*ZM(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZM(gI1,1)) + Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) - 5*Sqr(g2))*ZM(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta(
      1,gO2)*Sqr(g1)*ZM(gI1,0) - 10*Conj(Yd(2,2))*KroneckerDelta(0,gO2)*Ye(1,1)*ZM
      (gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZS(gI2,1))*(30*Conj(Yd(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(2,2)*ZS(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZS(gI1,1)) - Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZS(gI1,0) + 2*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZS(gI1,0) + 30*Conj(Yd(2,2))*KroneckerDelta(0,gO2)*Yd(1,1)*
      ZS(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZT(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*(10*AbsSqr(Yd(2,2)) + Sqr(g1)) + KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZT(gI1,0)) + 4*Conj(ZT(gI2,1))*(2*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)))*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(10*Conj(Ye(2,2))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yd(2,2)*ZTau(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1)) + Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0
      ,gO2)*(Sqr(g1) - 5*Sqr(g2))*ZTau(gI1,0) + 2*KroneckerDelta(1,gO1)*(
      KroneckerDelta(1,gO2)*Sqr(g1)*ZTau(gI1,0) - 10*Conj(Yd(2,2))*KroneckerDelta(
      0,gO2)*Ye(2,2)*ZTau(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZU(gI2,0))*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr
      (g2)))*ZU(gI1,0)) + 4*Conj(ZU(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2) + 2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSbconjUSbhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*((-10*AbsSqr(Yd
      (2,2)) + Sqr(g1))*ZH(gI1,0)*ZH(gI2,0) - Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((-20*AbsSqr(Yd(2,2)) + Sqr(g1)
      + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) - (Sqr(g1) + 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1)
      ));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbSbAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZB(gI1,1))*
      KroneckerDelta(0,gO2)*(Conj(TYd(2,2))*ZA(gI2,0) + Conj(Yd(2,2))*Mu*ZA(gI2,1)
      ) - Conj(ZB(gI1,0))*KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(2,2)*ZA(gI2,1) + ZA(
      gI2,0)*TYd(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbSbhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZB(gI1,1))*(7.0710678118654755*Conj(TYd(2,2))*
      KroneckerDelta(0,gO2)*ZH(gI2,0) - 7.0710678118654755*Conj(Yd(2,2))*
      KroneckerDelta(0,gO2)*Mu*ZH(gI2,1) + KroneckerDelta(1,gO2)*(-(vd*(-10*AbsSqr
      (Yd(2,2)) + Sqr(g1))*ZH(gI2,0)) + vu*Sqr(g1)*ZH(gI2,1))) + Conj(ZB(gI1,0))*(
      KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr(g2))*ZH(gI2
      ,0) - vu*(Sqr(g1) + 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yd(2,2)*ZH(gI2,1) - ZH(gI2,0)*TYd(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbStHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,1))*(Conj(ZT(gI1,0))*(-1.4142135623730951*vu*
      KroneckerDelta(0,gO2)*(-2*AbsSqr(Yu(2,2)) + Sqr(g2)) + 4*Conj(Mu)*
      KroneckerDelta(1,gO2)*Yd(2,2)) + 2*Conj(ZT(gI1,1))*(2*Conj(TYu(2,2))*
      KroneckerDelta(0,gO2) + 1.4142135623730951*vd*Conj(Yu(2,2))*KroneckerDelta(1
      ,gO2)*Yd(2,2))) + Conj(ZP(gI2,0))*(2*Conj(Yu(2,2))*Conj(ZT(gI1,1))*(2*
      KroneckerDelta(0,gO2)*Mu + 1.4142135623730951*vu*KroneckerDelta(1,gO2)*Yd(2,
      2)) + Conj(ZT(gI1,0))*(-1.4142135623730951*vd*KroneckerDelta(0,gO2)*(-2*
      AbsSqr(Yd(2,2)) + Sqr(g2)) + 4*KroneckerDelta(1,gO2)*TYd(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbVGSb(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZB(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbVPSb(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-7.745966692414834*g1*Conj(ZB(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZB(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) - 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbVZSb(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.2581988897471611*g1*Conj(ZB(gI2,1))*KroneckerDelta(1,gO2)*Sin(
      ThetaW()) - 0.03333333333333333*Conj(ZB(gI2,0))*KroneckerDelta(0,gO2)*(15*g2
      *Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbVWmSt(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZT(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbFtChaPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(Yu(2,2))*KroneckerDelta(0,gO2)*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbFtChaPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(UM(gI2,1))*
      KroneckerDelta(1,gO1)*Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbFbChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yd(2,
      2))*KroneckerDelta(0,gO2)*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbFbChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) +
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,2)
      )*KroneckerDelta(1,gO1)*Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbGluFbPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUSbGluFbPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(16*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)
      *Sqr(g1)*Sqr(Sin(ThetaW())) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(
      -7.745966692414834*g1*g2*Cos(ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())) + Sqr(g1)*Sqr(Sin(ThetaW()))));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 5*Sqr(g2)));

   return result;
}

double CLASSNAME::CpUStconjUStconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZA(
      gI1,0)*ZA(gI2,0) - (-5*AbsSqr(Yu(2,2)) + Sqr(g1))*ZA(gI1,1)*ZA(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZA(gI1,0)
      *ZA(gI2,0) - (20*AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Yd(2,
      2)) + Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,0) - Conj(ZP(gI2,1))*(-4*KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)) + KroneckerDelta(
      0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(g2)))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)) - KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2)*(Sqr(g1) - 5*Sqr(g2)))*ZB(gI1,0) - 2*Conj(ZB(gI2,1))*(-4*KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*(10*AbsSqr(Yd(2,2)) + Sqr(g1)))*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZC(gI2,1))*(-15*Conj(Yu(1,1))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(2,2)*ZC(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZC(gI1,1)) - Conj(ZC(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZC(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZC(gI1,0) - 15*Conj(Yu(2,2))*KroneckerDelta(0,gO2)*Yu(1,1)*
      ZC(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZD(gI1,0) - 2*Conj(ZD(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZE(gI1,0) - 2*Conj(ZE(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZM(gI1,0) - 2*Conj(ZM(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*Sqr(g1) - KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) - 15*Sqr(g2
      )))*ZS(gI1,0) - 2*Conj(ZS(gI2,1))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(g1)*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.06666666666666667*(Conj(ZT(gI2,1))*(-4*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(4*Sqr(g1) + 5*Sqr(g3))*ZT(gI1,1) + KroneckerDelta(0,
      gO1)*(KroneckerDelta(1,gO2)*(-45*AbsSqr(Yu(2,2)) + Sqr(g1) + 20*Sqr(g3))*ZT(
      gI1,0) + 3*KroneckerDelta(0,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1))*ZT(gI1,1)))
      - Conj(ZT(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 15
      *Sqr(g2) + 20*Sqr(g3))*ZT(gI1,0) - KroneckerDelta(1,gO1)*(3*KroneckerDelta(1
      ,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1))*ZT(gI1,0) + KroneckerDelta(0,gO2)*(-45*
      AbsSqr(Yu(2,2)) + Sqr(g1) + 20*Sqr(g3))*ZT(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,
      gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(Sqr(g1) + 5*Sqr(
      g2)))*ZTau(gI1,0) - 2*Conj(ZTau(gI2,1))*(KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUStconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(4*Conj(ZU(gI2,1))*(-15*Conj(Yu(0,0))*KroneckerDelta(0,gO1)*
      KroneckerDelta(1,gO2)*Yu(2,2)*ZU(gI1,0) + (KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2) - 4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*Sqr(
      g1)*ZU(gI1,1)) - Conj(ZU(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      )*(Sqr(g1) + 15*Sqr(g2))*ZU(gI1,0) - 4*KroneckerDelta(1,gO1)*(KroneckerDelta
      (1,gO2)*Sqr(g1)*ZU(gI1,0) - 15*Conj(Yu(2,2))*KroneckerDelta(0,gO2)*Yu(0,0)*
      ZU(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUStconjUSthhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-4*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(Sqr(g1)*ZH(
      gI1,0)*ZH(gI2,0) - (-5*AbsSqr(Yu(2,2)) + Sqr(g1))*ZH(gI1,1)*ZH(gI2,1)) +
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*((Sqr(g1) - 5*Sqr(g2))*ZH(gI1,0)
      *ZH(gI2,0) - (20*AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1))
      );

   return result;
}

std::complex<double> CLASSNAME::CpconjUStconjHpmSb(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZB(gI2,1))*(2*Conj(TYd(2,2))*KroneckerDelta(0,gO2)*ZP(gI1,
      0) + Conj(Yd(2,2))*(2*KroneckerDelta(0,gO2)*Mu*ZP(gI1,1) +
      1.4142135623730951*KroneckerDelta(1,gO2)*Yu(2,2)*(vu*ZP(gI1,0) + vd*ZP(gI1,1
      )))) - 0.25*Conj(ZB(gI2,0))*(1.4142135623730951*KroneckerDelta(0,gO2)*(vd*(
      -2*AbsSqr(Yd(2,2)) + Sqr(g2))*ZP(gI1,0) + vu*(-2*AbsSqr(Yu(2,2)) + Sqr(g2))*
      ZP(gI1,1)) - 4*KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(2,2)*ZP(gI1,0) + ZP(gI1,1)
      *TYu(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStStAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(2,2))*Conj(ZT(
      gI1,1))*KroneckerDelta(0,gO2)*Mu*ZA(gI2,0) - Conj(Mu)*Conj(ZT(gI1,0))*
      KroneckerDelta(1,gO2)*Yu(2,2)*ZA(gI2,0) + ZA(gI2,1)*(Conj(ZT(gI1,1))*Conj(
      TYu(2,2))*KroneckerDelta(0,gO2) - Conj(ZT(gI1,0))*KroneckerDelta(1,gO2)*TYu(
      2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStSthh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZT(gI1,1))*(-7.0710678118654755*Conj(TYu(2,2))*
      KroneckerDelta(0,gO2)*ZH(gI2,1) + 2*KroneckerDelta(1,gO2)*Sqr(g1)*(-(vd*ZH(
      gI2,0)) + vu*ZH(gI2,1)) + 5*Conj(Yu(2,2))*(1.4142135623730951*KroneckerDelta
      (0,gO2)*Mu*ZH(gI2,0) - 2*vu*KroneckerDelta(1,gO2)*Yu(2,2)*ZH(gI2,1))) + Conj
      (ZT(gI1,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZH(gI2,0) - vu*
      (20*AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2))*ZH(gI2,1)) + 14.142135623730951*
      KroneckerDelta(1,gO2)*(Conj(Mu)*Yu(2,2)*ZH(gI2,0) - ZH(gI2,1)*TYu(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStbarChaFbPR(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(2,2))*KroneckerDelta(0,gO2)*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStbarChaFbPL(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0))*KroneckerDelta(0,gO1)) + Conj(UP(gI1,1))*
      KroneckerDelta(1,gO1)*Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStconjVWmSb(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZB(gI2,0))*KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStVGSt(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += g3*Conj(ZT(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUStVPSt(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(15.491933384829668*g1*Conj(ZT(gI2,1))*Cos(
      ThetaW())*KroneckerDelta(1,gO2) + Conj(ZT(gI2,0))*KroneckerDelta(0,gO2)*(
      3.872983346207417*g1*Cos(ThetaW()) + 15*g2*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStVZSt(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(-15.491933384829668*g1*Conj(ZT(gI2,1))*
      KroneckerDelta(1,gO2)*Sin(ThetaW()) + Conj(ZT(gI2,0))*KroneckerDelta(0,gO2)*
      (15*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpconjUStFtChiPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*KroneckerDelta(1,gO2)*ZN(gI2,0) - Conj(Yu(2,2
      ))*KroneckerDelta(0,gO2)*ZN(gI2,3);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStFtChiPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*Conj(ZN(gI2,0))*KroneckerDelta(0,gO1) -
      0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,3)
      )*KroneckerDelta(1,gO1)*Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStGluFtPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpconjUStGluFtPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpUhhVZVZ(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(vd*KroneckerDelta(0,gO2) + vu*KroneckerDelta(1,gO2))*(
      7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*Sqr(g1) + 5*Sqr(g2) + Cos(2*
      ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSveLSveL(unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(3*Sqr(
      g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSvmLSvmL(unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(3*Sqr(
      g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSvtLSvtL(unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(3*Sqr(
      g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjVWmVWm(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5*(vd*KroneckerDelta(0,gO2) + vu*KroneckerDelta(1,gO2))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUhhbargWmgWm(unsigned gO1) const
{
   std::complex<double> result;

   result = -0.25*(vd*KroneckerDelta(0,gO1) + vu*KroneckerDelta(1,gO1))*Sqr(g2)
      ;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbargWmCgWmC(unsigned gO1) const
{
   std::complex<double> result;

   result = -0.25*(vd*KroneckerDelta(0,gO1) + vu*KroneckerDelta(1,gO1))*Sqr(g2)
      ;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbargZgZ(unsigned gO1) const
{
   std::complex<double> result;

   result = -0.025*(vd*KroneckerDelta(0,gO1) + vu*KroneckerDelta(1,gO1))*(
      7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*Sqr(g1) + 5*Sqr(g2) + Cos(2*
      ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(
      1,gO1)*KroneckerDelta(1,gO2))*(7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*
      Sqr(g1) + 5*Sqr(g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2))*(ZA(gI1,0)*ZA(gI2,0)
      - ZA(gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI2,0))*(KroneckerDelta(1,gO1)*(KroneckerDelta(1,
      gO2)*(-3*Sqr(g1) + 5*Sqr(g2))*ZP(gI1,0) + 5*KroneckerDelta(0,gO2)*Sqr(g2)*ZP
      (gI1,1)) + KroneckerDelta(0,gO1)*(KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*Sqr(
      g2))*ZP(gI1,0) + 5*KroneckerDelta(1,gO2)*Sqr(g2)*ZP(gI1,1)))) - Conj(ZP(gI2,
      1))*(KroneckerDelta(0,gO2)*(5*KroneckerDelta(1,gO1)*Sqr(g2)*ZP(gI1,0) +
      KroneckerDelta(0,gO1)*(-3*Sqr(g1) + 5*Sqr(g2))*ZP(gI1,1)) + KroneckerDelta(1
      ,gO2)*(5*KroneckerDelta(0,gO1)*Sqr(g2)*ZP(gI1,0) + KroneckerDelta(1,gO1)*(3*
      Sqr(g1) + 5*Sqr(g2))*ZP(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr(g2)))*ZB(gI1,0) + 2*Conj(ZB(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(2,2)) + Sqr(g1)))*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)))*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr(g2)))*ZD(gI1,0) + 2*Conj(ZD(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(0,0)) + Sqr(g1)))*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      (3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Ye(0,0)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZE(gI1,0) + 2*Conj(ZE(gI2,1))*(-3*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(0,0)) + 3*Sqr(g1)))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      (3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Ye(1,1)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZM(gI1,0) + 2*Conj(ZM(gI2,1))*(-3*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(1,1)) + 3*Sqr(g1)))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2)))*ZS(gI1,0) + 2*Conj(ZS(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(1,1)) + Sqr(g1)))*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)))*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20
      *AbsSqr(Ye(2,2)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZTau(gI1,0) + 2*Conj(ZTau(gI2,1))
      *(-3*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,
      gO1)*KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(2,2)) + 3*Sqr(g1)))*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)))*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(3*Sqr(g1) + 5*Sqr(g2))*(KroneckerDelta(1,gO1)*(KroneckerDelta
      (0,gO2)*(ZH(gI1,1)*ZH(gI2,0) + ZH(gI1,0)*ZH(gI2,1)) + KroneckerDelta(1,gO2)*
      (ZH(gI1,0)*ZH(gI2,0) - 3*ZH(gI1,1)*ZH(gI2,1))) + KroneckerDelta(0,gO1)*(
      KroneckerDelta(1,gO2)*(ZH(gI1,1)*ZH(gI2,0) + ZH(gI1,0)*ZH(gI2,1)) +
      KroneckerDelta(0,gO2)*(-3*ZH(gI1,0)*ZH(gI2,0) + ZH(gI1,1)*ZH(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhAhAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(3*Sqr(
      g1) + 5*Sqr(g2))*(ZA(gI1,0)*ZA(gI2,0) - ZA(gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI2,0))*(KroneckerDelta(1,gO2)*((-3*vu*Sqr(g1) + 5*
      vu*Sqr(g2))*ZP(gI1,0) + 5*vd*Sqr(g2)*ZP(gI1,1)) + KroneckerDelta(0,gO2)*(vd*
      (3*Sqr(g1) + 5*Sqr(g2))*ZP(gI1,0) + 5*vu*Sqr(g2)*ZP(gI1,1)))) - Conj(ZP(gI2,
      1))*(KroneckerDelta(0,gO2)*(5*vu*Sqr(g2)*ZP(gI1,0) + vd*(-3*Sqr(g1) + 5*Sqr(
      g2))*ZP(gI1,1)) + KroneckerDelta(1,gO2)*(5*vd*Sqr(g2)*ZP(gI1,0) + vu*(3*Sqr(
      g1) + 5*Sqr(g2))*ZP(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSbSb(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZB(gI2,1))*(7.0710678118654755*Conj(TYd(2,2))*
      KroneckerDelta(0,gO2)*ZB(gI1,0) + (-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZB(gI1,1) - 5*Conj(Yd(2,2))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZB(gI1,0) - 2*vd*KroneckerDelta(
      0,gO2)*Yd(2,2)*ZB(gI1,1))) + Conj(ZB(gI2,0))*(-(KroneckerDelta(1,gO2)*(vu*(
      Sqr(g1) + 5*Sqr(g2))*ZB(gI1,0) - 14.142135623730951*Conj(Mu)*Yd(2,2)*ZB(gI1,
      1))) + KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr(g2))
      *ZB(gI1,0) - 14.142135623730951*ZB(gI1,1)*TYd(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjScSc(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZC(gI2,1))*(-7.0710678118654755*Conj(TYu(1,1))*
      KroneckerDelta(1,gO2)*ZC(gI1,0) + 2*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZC(gI1,1) + 5*Conj(Yu(1,1))*(
      1.4142135623730951*KroneckerDelta(0,gO2)*Mu*ZC(gI1,0) - 2*vu*KroneckerDelta(
      1,gO2)*Yu(1,1)*ZC(gI1,1))) + Conj(ZC(gI2,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr
      (g1) - 5*Sqr(g2))*ZC(gI1,0) + 14.142135623730951*Conj(Mu)*Yu(1,1)*ZC(gI1,1))
      - KroneckerDelta(1,gO2)*(vu*(20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2))*ZC(
      gI1,0) + 14.142135623730951*ZC(gI1,1)*TYu(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZD(gI2,1))*(7.0710678118654755*Conj(TYd(0,0))*
      KroneckerDelta(0,gO2)*ZD(gI1,0) + (-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZD(gI1,1) - 5*Conj(Yd(0,0))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZD(gI1,0) - 2*vd*KroneckerDelta(
      0,gO2)*Yd(0,0)*ZD(gI1,1))) + Conj(ZD(gI2,0))*(-(KroneckerDelta(1,gO2)*(vu*(
      Sqr(g1) + 5*Sqr(g2))*ZD(gI1,0) - 14.142135623730951*Conj(Mu)*Yd(0,0)*ZD(gI1,
      1))) + KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr(g2))
      *ZD(gI1,0) - 14.142135623730951*ZD(gI1,1)*TYd(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gI2,1))*(7.0710678118654755*Conj(TYe(0,0))*
      KroneckerDelta(0,gO2)*ZE(gI1,0) + 3*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZE(gI1,1) - 5*Conj(Ye(0,0))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZE(gI1,0) - 2*vd*KroneckerDelta(
      0,gO2)*Ye(0,0)*ZE(gI1,1))) + Conj(ZE(gI2,0))*(KroneckerDelta(1,gO2)*(vu*(3*
      Sqr(g1) - 5*Sqr(g2))*ZE(gI1,0) + 14.142135623730951*Conj(Mu)*Ye(0,0)*ZE(gI1,
      1)) - KroneckerDelta(0,gO2)*(vd*(20*AbsSqr(Ye(0,0)) + 3*Sqr(g1) - 5*Sqr(g2))
      *ZE(gI1,0) + 14.142135623730951*ZE(gI1,1)*TYe(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSmSm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZM(gI2,1))*(7.0710678118654755*Conj(TYe(1,1))*
      KroneckerDelta(0,gO2)*ZM(gI1,0) + 3*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZM(gI1,1) - 5*Conj(Ye(1,1))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZM(gI1,0) - 2*vd*KroneckerDelta(
      0,gO2)*Ye(1,1)*ZM(gI1,1))) + Conj(ZM(gI2,0))*(KroneckerDelta(1,gO2)*(vu*(3*
      Sqr(g1) - 5*Sqr(g2))*ZM(gI1,0) + 14.142135623730951*Conj(Mu)*Ye(1,1)*ZM(gI1,
      1)) - KroneckerDelta(0,gO2)*(vd*(20*AbsSqr(Ye(1,1)) + 3*Sqr(g1) - 5*Sqr(g2))
      *ZM(gI1,0) + 14.142135623730951*ZM(gI1,1)*TYe(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSsSs(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZS(gI2,1))*(7.0710678118654755*Conj(TYd(1,1))*
      KroneckerDelta(0,gO2)*ZS(gI1,0) + (-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZS(gI1,1) - 5*Conj(Yd(1,1))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZS(gI1,0) - 2*vd*KroneckerDelta(
      0,gO2)*Yd(1,1)*ZS(gI1,1))) + Conj(ZS(gI2,0))*(-(KroneckerDelta(1,gO2)*(vu*(
      Sqr(g1) + 5*Sqr(g2))*ZS(gI1,0) - 14.142135623730951*Conj(Mu)*Yd(1,1)*ZS(gI1,
      1))) + KroneckerDelta(0,gO2)*(vd*(-20*AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2))
      *ZS(gI1,0) - 14.142135623730951*ZS(gI1,1)*TYd(1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjStSt(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZT(gI2,1))*(-7.0710678118654755*Conj(TYu(2,2))*
      KroneckerDelta(1,gO2)*ZT(gI1,0) + 2*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZT(gI1,1) + 5*Conj(Yu(2,2))*(
      1.4142135623730951*KroneckerDelta(0,gO2)*Mu*ZT(gI1,0) - 2*vu*KroneckerDelta(
      1,gO2)*Yu(2,2)*ZT(gI1,1))) + Conj(ZT(gI2,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr
      (g1) - 5*Sqr(g2))*ZT(gI1,0) + 14.142135623730951*Conj(Mu)*Yu(2,2)*ZT(gI1,1))
      - KroneckerDelta(1,gO2)*(vu*(20*AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2))*ZT(
      gI1,0) + 14.142135623730951*ZT(gI1,1)*TYu(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjStauStau(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-2*Conj(ZTau(gI2,1))*(7.0710678118654755*Conj(TYe(2,2))*
      KroneckerDelta(0,gO2)*ZTau(gI1,0) + 3*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZTau(gI1,1) - 5*Conj(Ye(2,2))*(
      1.4142135623730951*KroneckerDelta(1,gO2)*Mu*ZTau(gI1,0) - 2*vd*
      KroneckerDelta(0,gO2)*Ye(2,2)*ZTau(gI1,1))) + Conj(ZTau(gI2,0))*(
      KroneckerDelta(1,gO2)*(vu*(3*Sqr(g1) - 5*Sqr(g2))*ZTau(gI1,0) +
      14.142135623730951*Conj(Mu)*Ye(2,2)*ZTau(gI1,1)) - KroneckerDelta(0,gO2)*(vd
      *(20*AbsSqr(Ye(2,2)) + 3*Sqr(g1) - 5*Sqr(g2))*ZTau(gI1,0) +
      14.142135623730951*ZTau(gI1,1)*TYe(2,2))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(2*Conj(ZU(gI2,1))*(-7.0710678118654755*Conj(TYu(0,0))*
      KroneckerDelta(1,gO2)*ZU(gI1,0) + 2*(-(vd*KroneckerDelta(0,gO2)) + vu*
      KroneckerDelta(1,gO2))*Sqr(g1)*ZU(gI1,1) + 5*Conj(Yu(0,0))*(
      1.4142135623730951*KroneckerDelta(0,gO2)*Mu*ZU(gI1,0) - 2*vu*KroneckerDelta(
      1,gO2)*Yu(0,0)*ZU(gI1,1))) + Conj(ZU(gI2,0))*(KroneckerDelta(0,gO2)*(vd*(Sqr
      (g1) - 5*Sqr(g2))*ZU(gI1,0) + 14.142135623730951*Conj(Mu)*Yu(0,0)*ZU(gI1,1))
      - KroneckerDelta(1,gO2)*(vu*(20*AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2))*ZU(
      gI1,0) + 14.142135623730951*ZU(gI1,1)*TYu(0,0))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhhhhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(3*Sqr(g1) + 5*Sqr(g2))*(KroneckerDelta(1,gO2)*(ZH(gI1,0)*(vu*
      ZH(gI2,0) + vd*ZH(gI2,1)) + ZH(gI1,1)*(vd*ZH(gI2,0) - 3*vu*ZH(gI2,1))) +
      KroneckerDelta(0,gO2)*(ZH(gI1,1)*(vu*ZH(gI2,0) + vd*ZH(gI2,1)) + ZH(gI1,0)*(
      -3*vd*ZH(gI2,0) + vu*ZH(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.7071067811865475*g2*(KroneckerDelta(0,gO2)*UM(gI1,1)*UP(gI2,0) +
      KroneckerDelta(1,gO2)*UM(gI1,0)*UP(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.7071067811865475*g2*(Conj(UM(gI2,1))*Conj(UP(gI1,0))*
      KroneckerDelta(0,gO1) + Conj(UM(gI2,0))*Conj(UP(gI1,1))*KroneckerDelta(1,gO1
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUhhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(KroneckerDelta(0,gO2)*(ZN(gI1,2)*(3.872983346207417*g1*ZN(gI2,
      0) - 5*g2*ZN(gI2,1)) + (3.872983346207417*g1*ZN(gI1,0) - 5*g2*ZN(gI1,1))*ZN(
      gI2,2)) - KroneckerDelta(1,gO2)*(ZN(gI1,3)*(3.872983346207417*g1*ZN(gI2,0) -
      5*g2*ZN(gI2,1)) + (3.872983346207417*g1*ZN(gI1,0) - 5*g2*ZN(gI1,1))*ZN(gI2,
      3)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZN(gI1,2))*(3.872983346207417*g1*Conj(ZN(gI2,0)) - 5*g2*
      Conj(ZN(gI2,1)))*KroneckerDelta(0,gO1) - 5*g2*Conj(ZN(gI1,1))*Conj(ZN(gI2,2)
      )*KroneckerDelta(0,gO1) - 3.872983346207417*g1*Conj(ZN(gI1,3))*Conj(ZN(gI2,0
      ))*KroneckerDelta(1,gO1) + 5*g2*Conj(ZN(gI1,3))*Conj(ZN(gI2,1))*
      KroneckerDelta(1,gO1) + 5*g2*Conj(ZN(gI1,1))*Conj(ZN(gI2,3))*KroneckerDelta(
      1,gO1) + 3.872983346207417*g1*Conj(ZN(gI1,0))*(Conj(ZN(gI2,2))*
      KroneckerDelta(0,gO1) - Conj(ZN(gI2,3))*KroneckerDelta(1,gO1)));

   return result;
}

std::complex<double> CLASSNAME::CpUhhVZAh(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.1)*(5*g2*Cos(ThetaW()) +
      3.872983346207417*g1*Sin(ThetaW()))*(KroneckerDelta(0,gO2)*ZA(gI2,0) -
      KroneckerDelta(1,gO2)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjVWmHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*g2*(Conj(ZP(gI2,0))*KroneckerDelta(0,gO2) - Conj(ZP(gI2,1))*
      KroneckerDelta(1,gO2));

   return result;
}

double CLASSNAME::CpUhhbarFeFePR(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Ye(0,0))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFeFePL(unsigned gO1) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Ye(0,0);

   return result;
}

double CLASSNAME::CpUhhbarFmFmPR(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Ye(1,1))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFmFmPL(unsigned gO1) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Ye(1,1);

   return result;
}

double CLASSNAME::CpUhhbarFtauFtauPR(unsigned gO2) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Ye(2,2))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFtauFtauPL(unsigned gO1) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Ye(2,2);

   return result;
}

double CLASSNAME::CpUhhbarFbFbPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yd(2,2))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFbFbPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Yd(2,2);

   return result;
}

double CLASSNAME::CpUhhbarFcFcPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yu(1,1))*KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFcFcPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(1,gO1)*Yu(1,1);

   return result;
}

double CLASSNAME::CpUhhbarFdFdPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yd(0,0))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFdFdPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Yd(0,0);

   return result;
}

double CLASSNAME::CpUhhbarFsFsPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yd(1,1))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFsFsPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(0,gO1)*Yd(1,1);

   return result;
}

double CLASSNAME::CpUhhbarFtFtPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yu(2,2))*KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFtFtPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(1,gO1)*Yu(2,2);

   return result;
}

double CLASSNAME::CpUhhbarFuFuPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*Conj(Yu(0,0))*KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUhhbarFuFuPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*KroneckerDelta(1,gO1)*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbargWmgWm(unsigned gO1) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*(vd*KroneckerDelta(0,gO1) - vu*
      KroneckerDelta(1,gO1))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbargWmCgWmC(unsigned gO1) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.25)*(vd*KroneckerDelta(0,gO1) - vu*
      KroneckerDelta(1,gO1))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(
      1,gO1)*KroneckerDelta(1,gO2))*(7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*
      Sqr(g1) + 5*Sqr(g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(3*Sqr(g1) + 5*Sqr(g2))*(KroneckerDelta(1,gO1)*(KroneckerDelta
      (0,gO2)*(ZA(gI1,1)*ZA(gI2,0) + ZA(gI1,0)*ZA(gI2,1)) + KroneckerDelta(1,gO2)*
      (ZA(gI1,0)*ZA(gI2,0) - 3*ZA(gI1,1)*ZA(gI2,1))) + KroneckerDelta(0,gO1)*(
      KroneckerDelta(1,gO2)*(ZA(gI1,1)*ZA(gI2,0) + ZA(gI1,0)*ZA(gI2,1)) +
      KroneckerDelta(0,gO2)*(-3*ZA(gI1,0)*ZA(gI2,0) + ZA(gI1,1)*ZA(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZP(gI2,0))*(KroneckerDelta(1,gO1)*(KroneckerDelta(1,gO2)
      *(3*Sqr(g1) - 5*Sqr(g2))*ZP(gI1,0) + 5*KroneckerDelta(0,gO2)*Sqr(g2)*ZP(gI1,
      1)) + KroneckerDelta(0,gO1)*(-(KroneckerDelta(0,gO2)*(3*Sqr(g1) + 5*Sqr(g2))
      *ZP(gI1,0)) + 5*KroneckerDelta(1,gO2)*Sqr(g2)*ZP(gI1,1))) + Conj(ZP(gI2,1))*
      (KroneckerDelta(0,gO2)*(5*KroneckerDelta(1,gO1)*Sqr(g2)*ZP(gI1,0) +
      KroneckerDelta(0,gO1)*(3*Sqr(g1) - 5*Sqr(g2))*ZP(gI1,1)) + KroneckerDelta(1,
      gO2)*(5*KroneckerDelta(0,gO1)*Sqr(g2)*ZP(gI1,0) - KroneckerDelta(1,gO1)*(3*
      Sqr(g1) + 5*Sqr(g2))*ZP(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr(g2)))*ZB(gI1,0) + 2*Conj(ZB(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(2,2)) + Sqr(g1)))*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)))*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr(g2)))*ZD(gI1,0) + 2*Conj(ZD(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(0,0)) + Sqr(g1)))*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      (3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Ye(0,0)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZE(gI1,0) + 2*Conj(ZE(gI2,1))*(-3*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(0,0)) + 3*Sqr(g1)))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      (3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Ye(1,1)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZM(gI1,0) + 2*Conj(ZM(gI2,1))*(-3*
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(1,1)) + 3*Sqr(g1)))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2)))*ZS(gI1,0) + 2*Conj(ZS(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(1,1)) + Sqr(g1)))*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)))*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(3*Sqr(g1) - 5*Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20
      *AbsSqr(Ye(2,2)) - 3*Sqr(g1) + 5*Sqr(g2)))*ZTau(gI1,0) + 2*Conj(ZTau(gI2,1))
      *(-3*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1) + KroneckerDelta(0,
      gO1)*KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(2,2)) + 3*Sqr(g1)))*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)))*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2))*(ZH(gI1,0)*ZH(gI2,0)
      - ZH(gI1,1)*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjHpmHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*(vu*KroneckerDelta(0,gO2) + vd*
      KroneckerDelta(1,gO2))*Sqr(g2)*(Conj(ZP(gI2,1))*ZP(gI1,0) - Conj(ZP(gI2,0))*
      ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSbSb(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZB(gI2,1))*(Conj(
      TYd(2,2))*KroneckerDelta(0,gO2) + Conj(Yd(2,2))*KroneckerDelta(1,gO2)*Mu)*ZB
      (gI1,0) - Conj(ZB(gI2,0))*ZB(gI1,1)*(Conj(Mu)*KroneckerDelta(1,gO2)*Yd(2,2)
      + KroneckerDelta(0,gO2)*TYd(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjScSc(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZC(gI2,1))*Conj(
      TYu(1,1))*KroneckerDelta(1,gO2)*ZC(gI1,0) + Conj(Yu(1,1))*Conj(ZC(gI2,1))*
      KroneckerDelta(0,gO2)*Mu*ZC(gI1,0) - Conj(ZC(gI2,0))*ZC(gI1,1)*(Conj(Mu)*
      KroneckerDelta(0,gO2)*Yu(1,1) + KroneckerDelta(1,gO2)*TYu(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZD(gI2,1))*(Conj(
      TYd(0,0))*KroneckerDelta(0,gO2) + Conj(Yd(0,0))*KroneckerDelta(1,gO2)*Mu)*ZD
      (gI1,0) - Conj(ZD(gI2,0))*ZD(gI1,1)*(Conj(Mu)*KroneckerDelta(1,gO2)*Yd(0,0)
      + KroneckerDelta(0,gO2)*TYd(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZE(gI2,1))*(Conj(
      TYe(0,0))*KroneckerDelta(0,gO2) + Conj(Ye(0,0))*KroneckerDelta(1,gO2)*Mu)*ZE
      (gI1,0) - Conj(ZE(gI2,0))*ZE(gI1,1)*(Conj(Mu)*KroneckerDelta(1,gO2)*Ye(0,0)
      + KroneckerDelta(0,gO2)*TYe(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSmSm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZM(gI2,1))*(Conj(
      TYe(1,1))*KroneckerDelta(0,gO2) + Conj(Ye(1,1))*KroneckerDelta(1,gO2)*Mu)*ZM
      (gI1,0) - Conj(ZM(gI2,0))*ZM(gI1,1)*(Conj(Mu)*KroneckerDelta(1,gO2)*Ye(1,1)
      + KroneckerDelta(0,gO2)*TYe(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSsSs(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZS(gI2,1))*(Conj(
      TYd(1,1))*KroneckerDelta(0,gO2) + Conj(Yd(1,1))*KroneckerDelta(1,gO2)*Mu)*ZS
      (gI1,0) - Conj(ZS(gI2,0))*ZS(gI1,1)*(Conj(Mu)*KroneckerDelta(1,gO2)*Yd(1,1)
      + KroneckerDelta(0,gO2)*TYd(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjStSt(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZT(gI2,1))*Conj(
      TYu(2,2))*KroneckerDelta(1,gO2)*ZT(gI1,0) + Conj(Yu(2,2))*Conj(ZT(gI2,1))*
      KroneckerDelta(0,gO2)*Mu*ZT(gI1,0) - Conj(ZT(gI2,0))*ZT(gI1,1)*(Conj(Mu)*
      KroneckerDelta(0,gO2)*Yu(2,2) + KroneckerDelta(1,gO2)*TYu(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjStauStau(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZTau(gI2,1))*(
      Conj(TYe(2,2))*KroneckerDelta(0,gO2) + Conj(Ye(2,2))*KroneckerDelta(1,gO2)*
      Mu)*ZTau(gI1,0) - Conj(ZTau(gI2,0))*ZTau(gI1,1)*(Conj(Mu)*KroneckerDelta(1,
      gO2)*Ye(2,2) + KroneckerDelta(0,gO2)*TYe(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZU(gI2,1))*Conj(
      TYu(0,0))*KroneckerDelta(1,gO2)*ZU(gI1,0) + Conj(Yu(0,0))*Conj(ZU(gI2,1))*
      KroneckerDelta(0,gO2)*Mu*ZU(gI1,0) - Conj(ZU(gI2,0))*ZU(gI1,1)*(Conj(Mu)*
      KroneckerDelta(0,gO2)*Yu(0,0) + KroneckerDelta(1,gO2)*TYu(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhhhAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(3*Sqr(g1) + 5*Sqr(g2))*(KroneckerDelta(0,gO2)*ZA(gI2,0) -
      KroneckerDelta(1,gO2)*ZA(gI2,1))*(vd*ZH(gI1,0) - vu*ZH(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarChaChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*g2*(KroneckerDelta(0,
      gO2)*UM(gI1,1)*UP(gI2,0) + KroneckerDelta(1,gO2)*UM(gI1,0)*UP(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarChaChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gI2,1))*
      Conj(UP(gI1,0))*KroneckerDelta(0,gO1) + Conj(UM(gI2,0))*Conj(UP(gI1,1))*
      KroneckerDelta(1,gO1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhChiChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.1)*(KroneckerDelta(0,gO2)*(ZN(gI1,2)*(
      3.872983346207417*g1*ZN(gI2,0) - 5*g2*ZN(gI2,1)) + (3.872983346207417*g1*ZN(
      gI1,0) - 5*g2*ZN(gI1,1))*ZN(gI2,2)) - KroneckerDelta(1,gO2)*(ZN(gI1,3)*(
      3.872983346207417*g1*ZN(gI2,0) - 5*g2*ZN(gI2,1)) + (3.872983346207417*g1*ZN(
      gI1,0) - 5*g2*ZN(gI1,1))*ZN(gI2,3)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhChiChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.1)*(Conj(ZN(gI1,2))*(3.872983346207417*g1
      *Conj(ZN(gI2,0)) - 5*g2*Conj(ZN(gI2,1)))*KroneckerDelta(0,gO1) - 5*g2*Conj(
      ZN(gI1,1))*Conj(ZN(gI2,2))*KroneckerDelta(0,gO1) - 3.872983346207417*g1*Conj
      (ZN(gI1,3))*Conj(ZN(gI2,0))*KroneckerDelta(1,gO1) + 5*g2*Conj(ZN(gI1,3))*
      Conj(ZN(gI2,1))*KroneckerDelta(1,gO1) + 5*g2*Conj(ZN(gI1,1))*Conj(ZN(gI2,3))
      *KroneckerDelta(1,gO1) + 3.872983346207417*g1*Conj(ZN(gI1,0))*(Conj(ZN(gI2,2
      ))*KroneckerDelta(0,gO1) - Conj(ZN(gI2,3))*KroneckerDelta(1,gO1)));

   return result;
}

std::complex<double> CLASSNAME::CpUAhVZhh(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.1)*(5*g2*Cos(ThetaW()) +
      3.872983346207417*g1*Sin(ThetaW()))*(KroneckerDelta(0,gO2)*ZH(gI2,0) -
      KroneckerDelta(1,gO2)*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjVWmHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2*(Conj(ZP(gI2,0))*KroneckerDelta(0,
      gO2) + Conj(ZP(gI2,1))*KroneckerDelta(1,gO2));

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFeFePR(unsigned gO2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(0,0))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFeFePL(unsigned gO1) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Ye(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFmFmPR(unsigned gO2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(1,1))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFmFmPL(unsigned gO1) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Ye(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFtauFtauPR(unsigned gO2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(2,2))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFtauFtauPL(unsigned gO1) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Ye(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFbFbPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(2,2))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFbFbPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFcFcPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(1,1))*
      KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFcFcPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,gO1)*
      Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFdFdPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(0,0))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFdFdPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFsFsPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(1,1))*
      KroneckerDelta(0,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFsFsPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1)*
      Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFtFtPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(2,2))*
      KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFtFtPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,gO1)*
      Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFuFuPR(unsigned gO2, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(0,0))*
      KroneckerDelta(1,gO2);

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFuFuPL(unsigned gO1, unsigned , unsigned ) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,gO1)*
      Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVWmVP(unsigned gO2) const
{
   std::complex<double> result;

   result = -0.3872983346207417*g1*g2*Cos(ThetaW())*(vd*KroneckerDelta(0,gO2) -
      vu*KroneckerDelta(1,gO2));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVZVWm(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.3872983346207417*g1*g2*(vd*KroneckerDelta(0,gO2) - vu*
      KroneckerDelta(1,gO2))*Sin(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmbargWmCgZ(unsigned gO1) const
{
   std::complex<double> result;

   result = 0.05*g2*(vd*KroneckerDelta(0,gO1) - vu*KroneckerDelta(1,gO1))*(5*g2
      *Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmgWmCbargZ(unsigned gO2) const
{
   std::complex<double> result;

   result = -0.05*g2*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(5*
      g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmbargZgWm(unsigned gO1) const
{
   std::complex<double> result;

   result = -0.05*g2*(vd*KroneckerDelta(0,gO1) - vu*KroneckerDelta(1,gO1))*(5*
      g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmgZbargWm(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*g2*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*(5*g2
      *Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(
      1,gO1)*KroneckerDelta(1,gO2))*(-7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*
      Sqr(g1) + 5*Sqr(g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSveLSveL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(3*Sqr(g1) - 5*
      Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Ye(0,0))
      - 3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSvmLSvmL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(3*Sqr(g1) - 5*
      Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Ye(1,1))
      - 3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSvtLSvtL(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(3*Sqr(g1) - 5*
      Sqr(g2)) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*AbsSqr(Ye(2,2))
      - 3*Sqr(g1) + 5*Sqr(g2)));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) + KroneckerDelta(1
      ,gO1)*KroneckerDelta(1,gO2))*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(KroneckerDelta(0,gO1)*(5*KroneckerDelta(1,gO2)*Sqr(g2)*(ZA(
      gI1,1)*ZA(gI2,0) + ZA(gI1,0)*ZA(gI2,1)) - KroneckerDelta(0,gO2)*((3*Sqr(g1)
      + 5*Sqr(g2))*ZA(gI1,0)*ZA(gI2,0) + (-3*Sqr(g1) + 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2
      ,1))) + KroneckerDelta(1,gO1)*(5*KroneckerDelta(0,gO2)*Sqr(g2)*(ZA(gI1,1)*ZA
      (gI2,0) + ZA(gI1,0)*ZA(gI2,1)) + KroneckerDelta(1,gO2)*((3*Sqr(g1) - 5*Sqr(
      g2))*ZA(gI1,0)*ZA(gI2,0) - (3*Sqr(g1) + 5*Sqr(g2))*ZA(gI1,1)*ZA(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(3*Sqr(g1) + 5*Sqr(g2))*(-(Conj(ZP(gI2,1))*(-2*KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2)*ZP(gI1,1) + KroneckerDelta(0,gO1)*(
      KroneckerDelta(1,gO2)*ZP(gI1,0) + KroneckerDelta(0,gO2)*ZP(gI1,1)))) + Conj(
      ZP(gI2,0))*(2*KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*ZP(gI1,0) -
      KroneckerDelta(1,gO1)*(KroneckerDelta(1,gO2)*ZP(gI1,0) + KroneckerDelta(0,
      gO2)*ZP(gI1,1))));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSbSb(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2)))*ZB(gI1,0) + 2*Conj(ZB(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(2,2)) + Sqr(g1)))*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjScSc(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2)))*ZC(gI1,0) - 4*Conj(ZC(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(1,1)) + Sqr(g1)))*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2)))*ZD(gI1,0) + 2*Conj(ZD(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(0,0)) + Sqr(g1)))*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZE(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      ) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2))*ZE(
      gI1,0)) + 2*Conj(ZE(gI2,1))*(-3*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(0,0)) +
      3*Sqr(g1)))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSmSm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZM(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2
      ) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2))*ZM(
      gI1,0)) + 2*Conj(ZM(gI2,1))*(-3*KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*
      Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(1,1)) +
      3*Sqr(g1)))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSsSs(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*
      (Sqr(g1) - 5*Sqr(g2)) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*(20*
      AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2)))*ZS(gI1,0) + 2*Conj(ZS(gI2,1))*(-(
      KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2)*Sqr(g1)) + KroneckerDelta(0,gO1)
      *KroneckerDelta(0,gO2)*(-10*AbsSqr(Yd(1,1)) + Sqr(g1)))*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjStSt(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr(g2)))*ZT(gI1,0) - 4*Conj(ZT(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(2,2)) + Sqr(g1)))*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjStauStau(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZTau(gI2,0))*(KroneckerDelta(0,gO1)*KroneckerDelta(0,
      gO2) - KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2))*(3*Sqr(g1) + 5*Sqr(g2))*
      ZTau(gI1,0)) + 2*Conj(ZTau(gI2,1))*(-3*KroneckerDelta(1,gO1)*KroneckerDelta(
      1,gO2)*Sqr(g1) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-10*AbsSqr(Ye(
      2,2)) + 3*Sqr(g1)))*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(-(KroneckerDelta(1,gO1)*KroneckerDelta(1,gO2
      )*(Sqr(g1) + 5*Sqr(g2))) + KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*(-20*
      AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr(g2)))*ZU(gI1,0) - 4*Conj(ZU(gI2,1))*(
      KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2)*Sqr(g1) - KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*(-5*AbsSqr(Yu(0,0)) + Sqr(g1)))*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(KroneckerDelta(0,gO1)*(5*KroneckerDelta(1,gO2)*Sqr(g2)*(ZH(
      gI1,1)*ZH(gI2,0) + ZH(gI1,0)*ZH(gI2,1)) + KroneckerDelta(0,gO2)*((3*Sqr(g1)
      + 5*Sqr(g2))*ZH(gI1,0)*ZH(gI2,0) + (-3*Sqr(g1) + 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2
      ,1)))) + KroneckerDelta(1,gO1)*(-5*KroneckerDelta(0,gO2)*Sqr(g2)*(ZH(gI1,1)*
      ZH(gI2,0) + ZH(gI1,0)*ZH(gI2,1)) + KroneckerDelta(1,gO2)*((3*Sqr(g1) - 5*Sqr
      (g2))*ZH(gI1,0)*ZH(gI2,0) - (3*Sqr(g1) + 5*Sqr(g2))*ZH(gI1,1)*ZH(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjScSs(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZS(gI2,1))*(2*Conj(TYd(1,1))*KroneckerDelta(0,gO2)*ZC(gI1,
      0) + Conj(Yd(1,1))*(1.4142135623730951*vu*KroneckerDelta(0,gO2)*Yu(1,1)*ZC(
      gI1,1) + KroneckerDelta(1,gO2)*(2*Mu*ZC(gI1,0) + 1.4142135623730951*vd*Yu(1,
      1)*ZC(gI1,1)))) - 0.25*Conj(ZS(gI2,0))*(KroneckerDelta(0,gO2)*(
      1.4142135623730951*vd*(-2*AbsSqr(Yd(1,1)) + Sqr(g2))*ZC(gI1,0) - 4*Conj(Mu)*
      Yu(1,1)*ZC(gI1,1)) + KroneckerDelta(1,gO2)*(1.4142135623730951*vu*(-2*AbsSqr
      (Yu(1,1)) + Sqr(g2))*ZC(gI1,0) - 4*ZC(gI1,1)*TYu(1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjStSb(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZB(gI2,1))*(2*Conj(TYd(2,2))*KroneckerDelta(0,gO2)*ZT(gI1,
      0) + Conj(Yd(2,2))*(1.4142135623730951*vu*KroneckerDelta(0,gO2)*Yu(2,2)*ZT(
      gI1,1) + KroneckerDelta(1,gO2)*(2*Mu*ZT(gI1,0) + 1.4142135623730951*vd*Yu(2,
      2)*ZT(gI1,1)))) - 0.25*Conj(ZB(gI2,0))*(KroneckerDelta(0,gO2)*(
      1.4142135623730951*vd*(-2*AbsSqr(Yd(2,2)) + Sqr(g2))*ZT(gI1,0) - 4*Conj(Mu)*
      Yu(2,2)*ZT(gI1,1)) + KroneckerDelta(1,gO2)*(1.4142135623730951*vu*(-2*AbsSqr
      (Yu(2,2)) + Sqr(g2))*ZT(gI1,0) - 4*ZT(gI1,1)*TYu(2,2)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSuSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZD(gI2,1))*(2*Conj(TYd(0,0))*KroneckerDelta(0,gO2)*ZU(gI1,
      0) + Conj(Yd(0,0))*(1.4142135623730951*vu*KroneckerDelta(0,gO2)*Yu(0,0)*ZU(
      gI1,1) + KroneckerDelta(1,gO2)*(2*Mu*ZU(gI1,0) + 1.4142135623730951*vd*Yu(0,
      0)*ZU(gI1,1)))) - 0.25*Conj(ZD(gI2,0))*(KroneckerDelta(0,gO2)*(
      1.4142135623730951*vd*(-2*AbsSqr(Yd(0,0)) + Sqr(g2))*ZU(gI1,0) - 4*Conj(Mu)*
      Yu(0,0)*ZU(gI1,1)) + KroneckerDelta(1,gO2)*(1.4142135623730951*vu*(-2*AbsSqr
      (Yu(0,0)) + Sqr(g2))*ZU(gI1,0) - 4*ZU(gI1,1)*TYu(0,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmHpmAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*(Conj(ZP(gI1,1))*KroneckerDelta(0,gO2
      ) - Conj(ZP(gI1,0))*KroneckerDelta(1,gO2))*Sqr(g2)*(vu*ZA(gI2,0) + vd*ZA(gI2
      ,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmHpmhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-(Conj(ZP(gI1,0))*(5*KroneckerDelta(1,gO2)*Sqr(g2)*(vu*ZH(gI2
      ,0) + vd*ZH(gI2,1)) + KroneckerDelta(0,gO2)*(vd*(3*Sqr(g1) + 5*Sqr(g2))*ZH(
      gI2,0) + vu*(-3*Sqr(g1) + 5*Sqr(g2))*ZH(gI2,1)))) - Conj(ZP(gI1,1))*(5*
      KroneckerDelta(0,gO2)*Sqr(g2)*(vu*ZH(gI2,0) + vd*ZH(gI2,1)) + KroneckerDelta
      (1,gO2)*((-3*vd*Sqr(g1) + 5*vd*Sqr(g2))*ZH(gI2,0) + vu*(3*Sqr(g1) + 5*Sqr(g2
      ))*ZH(gI2,1))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmChiChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*KroneckerDelta(1,gO2)*(UP(gI2,1)*(1.0954451150103321*g1*ZN(gI1
      ,0) + 1.4142135623730951*g2*ZN(gI1,1)) + 2*g2*UP(gI2,0)*ZN(gI1,3));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmChiChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(Conj(UM(gI2,1))*(1.0954451150103321*g1*Conj(ZN(gI1,0)) +
      1.4142135623730951*g2*Conj(ZN(gI1,1))) - 2*g2*Conj(UM(gI2,0))*Conj(ZN(gI1,2)
      ))*KroneckerDelta(0,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSveLSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZE(gI2,1))*(Conj(TYe(0,0))*KroneckerDelta(0,gO2) +
      Conj(Ye(0,0))*KroneckerDelta(1,gO2)*Mu) - 1.4142135623730951*Conj(ZE(gI2,0))
      *(vu*KroneckerDelta(1,gO2)*Sqr(g2) + vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Ye(
      0,0)) + Sqr(g2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSvmLSm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZM(gI2,1))*(Conj(TYe(1,1))*KroneckerDelta(0,gO2) +
      Conj(Ye(1,1))*KroneckerDelta(1,gO2)*Mu) - 1.4142135623730951*Conj(ZM(gI2,0))
      *(vu*KroneckerDelta(1,gO2)*Sqr(g2) + vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(Ye(
      1,1)) + Sqr(g2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSvtLStau(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZTau(gI2,1))*(Conj(TYe(2,2))*KroneckerDelta(0,gO2) +
      Conj(Ye(2,2))*KroneckerDelta(1,gO2)*Mu) - 1.4142135623730951*Conj(ZTau(gI2,0
      ))*(vu*KroneckerDelta(1,gO2)*Sqr(g2) + vd*KroneckerDelta(0,gO2)*(-2*AbsSqr(
      Ye(2,2)) + Sqr(g2))));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVWmAh(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2*(KroneckerDelta(0,gO2)*ZA(gI2,0) +
      KroneckerDelta(1,gO2)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVWmhh(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*g2*(KroneckerDelta(0,gO2)*ZH(gI2,0) - KroneckerDelta(1,gO2)*ZH(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVPHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += -0.3872983346207417*g1*Conj(ZP(gI2,gO2))*Cos(ThetaW());
   }
   if (gI2 < 2) {
      result += -0.5*g2*Conj(ZP(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmVZHpm(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 2) {
      result += -0.5*g2*Conj(ZP(gI2,gO2))*Cos(ThetaW());
   }
   if (gI2 < 2) {
      result += 0.3872983346207417*g1*Conj(ZP(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

double CLASSNAME::CpconjUHpmbarFveFePR(unsigned gO2) const
{
   double result = 0.0;

   result = Conj(Ye(0,0))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFveFePL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjUHpmbarFvmFmPR(unsigned gO2) const
{
   double result = 0.0;

   result = Conj(Ye(1,1))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFvmFmPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjUHpmbarFvtFtauPR(unsigned gO2) const
{
   double result = 0.0;

   result = Conj(Ye(2,2))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFvtFtauPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjUHpmbarFcFsPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = Conj(Yd(1,1))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFcFsPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = KroneckerDelta(1,gO1)*Yu(1,1);

   return result;
}

double CLASSNAME::CpconjUHpmbarFtFbPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = Conj(Yd(2,2))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFtFbPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = KroneckerDelta(1,gO1)*Yu(2,2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFuFdPR(unsigned gO2, unsigned , unsigned ) const
{
   double result = 0.0;

   result = Conj(Yd(0,0))*KroneckerDelta(0,gO2);

   return result;
}

double CLASSNAME::CpconjUHpmbarFuFdPL(unsigned gO1, unsigned , unsigned ) const
{
   double result = 0.0;

   result = KroneckerDelta(1,gO1)*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLVZVZ() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpSveLconjSveLconjSveLSveL() const
{
   double result = 0.0;

   result = 0.1*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSveLconjSveLconjSvmLSvmL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSveLconjSveLconjSvtLSvtL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSveLconjSveLconjVWmVWm() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjSveLVZSveL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLAhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gI1,0)*ZA(gI2,0) - ZA(gI1,1)*ZA(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,0))*(-4*AbsSqr(Ye(0,0)) - 0.6*Sqr(g1) + Sqr(g2))*
      ZP(gI1,0) + Conj(ZP(gI2,1))*(0.6*Sqr(g1) - Sqr(g2))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZB(gI1,0) + 2*Conj(ZB(
      gI2,1))*Sqr(g1)*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZC(gI1,0) - 4*Conj(ZC(
      gI2,1))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZD(gI1,0) + 2*Conj(ZD(
      gI2,1))*Sqr(g1)*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(-(Conj(ZE(gI2,0))*(0.6*Sqr(g1) + Sqr(g2))*ZE(gI1,0)) + 2*Conj
      (ZE(gI2,1))*(-2*AbsSqr(Ye(0,0)) + 0.6*Sqr(g1))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZM(gI1,0) + 6*Conj(
      ZM(gI2,1))*Sqr(g1)*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZS(gI1,0) + 2*Conj(ZS(
      gI2,1))*Sqr(g1)*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZT(gI1,0) - 4*Conj(ZT(
      gI2,1))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZTau(gI1,0) + 6*
      Conj(ZTau(gI2,1))*Sqr(g1)*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZU(gI1,0) - 4*Conj(ZU(
      gI2,1))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSveLconjSveLhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gI1,0)*ZH(gI2,0) - ZH(gI1,1)*ZH(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLconjHpmSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZE(gI2,1))*(Conj(TYe(0,0))*ZP(gI1,0) + Conj(Ye(0,0))*
      Mu*ZP(gI1,1)) - 1.4142135623730951*Conj(ZE(gI2,0))*(vd*(-2*AbsSqr(Ye(0,0)) +
      Sqr(g2))*ZP(gI1,0) + vu*Sqr(g2)*ZP(gI1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLbarChaFePR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(0,0))*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLbarChaFePL(unsigned gI1) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLSveLhh(unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(vd*ZH(gI2,0) - vu*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLconjVWmSe(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZE(gI2,0));

   return result;
}

double CLASSNAME::CpconjSveLFveChiPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjSveLFveChiPL(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*Conj(ZN(gI2,0)) - g2*Conj
      (ZN(gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLVZVZ() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpSvmLconjSvmLconjSveLSveL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvmLconjSvmLconjSvmLSvmL() const
{
   double result = 0.0;

   result = 0.1*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvmLconjSvmLconjSvtLSvtL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvmLconjSvmLconjVWmVWm() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjSvmLVZSvmL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLAhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gI1,0)*ZA(gI2,0) - ZA(gI1,1)*ZA(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,0))*(-4*AbsSqr(Ye(1,1)) - 0.6*Sqr(g1) + Sqr(g2))*
      ZP(gI1,0) + Conj(ZP(gI2,1))*(0.6*Sqr(g1) - Sqr(g2))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZB(gI1,0) + 2*Conj(ZB(
      gI2,1))*Sqr(g1)*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZC(gI1,0) - 4*Conj(ZC(
      gI2,1))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZD(gI1,0) + 2*Conj(ZD(
      gI2,1))*Sqr(g1)*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZE(gI1,0) + 6*Conj(
      ZE(gI2,1))*Sqr(g1)*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(-(Conj(ZM(gI2,0))*(0.6*Sqr(g1) + Sqr(g2))*ZM(gI1,0)) + 2*Conj
      (ZM(gI2,1))*(-2*AbsSqr(Ye(1,1)) + 0.6*Sqr(g1))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZS(gI1,0) + 2*Conj(ZS(
      gI2,1))*Sqr(g1)*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZT(gI1,0) - 4*Conj(ZT(
      gI2,1))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZTau(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZTau(gI1,0) + 6*
      Conj(ZTau(gI2,1))*Sqr(g1)*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZU(gI1,0) - 4*Conj(ZU(
      gI2,1))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvmLconjSvmLhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gI1,0)*ZH(gI2,0) - ZH(gI1,1)*ZH(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLconjHpmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZM(gI2,1))*(Conj(TYe(1,1))*ZP(gI1,0) + Conj(Ye(1,1))*
      Mu*ZP(gI1,1)) - 1.4142135623730951*Conj(ZM(gI2,0))*(vd*(-2*AbsSqr(Ye(1,1)) +
      Sqr(g2))*ZP(gI1,0) + vu*Sqr(g2)*ZP(gI1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLbarChaFmPR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(1,1))*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLbarChaFmPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLSvmLhh(unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(vd*ZH(gI2,0) - vu*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLconjVWmSm(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZM(gI2,0));

   return result;
}

double CLASSNAME::CpconjSvmLFvmChiPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjSvmLFvmChiPL(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*Conj(ZN(gI2,0)) - g2*Conj
      (ZN(gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLVZVZ() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpSvtLconjSvtLconjSveLSveL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvtLconjSvtLconjSvmLSvmL() const
{
   double result = 0.0;

   result = 0.05*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvtLconjSvtLconjSvtLSvtL() const
{
   double result = 0.0;

   result = 0.1*(-3*Sqr(g1) - 5*Sqr(g2));

   return result;
}

double CLASSNAME::CpSvtLconjSvtLconjVWmVWm() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjSvtLVZSvtL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLAhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZA(gI1,0)*ZA(gI2,0) - ZA(gI1,1)*ZA(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(Conj(ZP(gI2,0))*(-4*AbsSqr(Ye(2,2)) - 0.6*Sqr(g1) + Sqr(g2))*
      ZP(gI1,0) + Conj(ZP(gI2,1))*(0.6*Sqr(g1) - Sqr(g2))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZB(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZB(gI1,0) + 2*Conj(ZB(
      gI2,1))*Sqr(g1)*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZC(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZC(gI1,0) - 4*Conj(ZC(
      gI2,1))*Sqr(g1)*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZD(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZD(gI1,0) + 2*Conj(ZD(
      gI2,1))*Sqr(g1)*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZE(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZE(gI1,0) + 6*Conj(
      ZE(gI2,1))*Sqr(g1)*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZM(gI2,0))*(-3*Sqr(g1) + 5*Sqr(g2))*ZM(gI1,0) + 6*Conj(
      ZM(gI2,1))*Sqr(g1)*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZS(gI2,0))*(Sqr(g1) + 5*Sqr(g2))*ZS(gI1,0) + 2*Conj(ZS(
      gI2,1))*Sqr(g1)*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZT(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZT(gI1,0) - 4*Conj(ZT(
      gI2,1))*Sqr(g1)*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(-(Conj(ZTau(gI2,0))*(0.6*Sqr(g1) + Sqr(g2))*ZTau(gI1,0)) + 2*
      Conj(ZTau(gI2,1))*(-2*AbsSqr(Ye(2,2)) + 0.6*Sqr(g1))*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(Conj(ZU(gI2,0))*(Sqr(g1) - 5*Sqr(g2))*ZU(gI1,0) - 4*Conj(ZU(
      gI2,1))*Sqr(g1)*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpSvtLconjSvtLhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(ZH(gI1,0)*ZH(gI2,0) - ZH(gI1,1)*ZH(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLconjHpmStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.25*(4*Conj(ZTau(gI2,1))*(Conj(TYe(2,2))*ZP(gI1,0) + Conj(Ye(2,2))
      *Mu*ZP(gI1,1)) - 1.4142135623730951*Conj(ZTau(gI2,0))*(vd*(-2*AbsSqr(Ye(2,2)
      ) + Sqr(g2))*ZP(gI1,0) + vu*Sqr(g2)*ZP(gI1,1)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLbarChaFtauPR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(2,2))*UM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLbarChaFtauPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -(g2*Conj(UP(gI1,0)));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLSvtLhh(unsigned gI2) const
{
   std::complex<double> result;

   result = -0.25*(0.6*Sqr(g1) + Sqr(g2))*(vd*ZH(gI2,0) - vu*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLconjVWmStau(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZTau(gI2,0));

   return result;
}

double CLASSNAME::CpconjSvtLFvtChiPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjSvtLFvtChiPL(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*Conj(ZN(gI2,0)) - g2*Conj
      (ZN(gI2,1)));

   return result;
}

double CLASSNAME::CpVZbargWmgWm() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbargWmCgWmC() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpVZconjSveLSveL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjSvmLSvmL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZconjSvtLSvtL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSveLSveL() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSvmLSvmL() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSvtLSvtL() const
{
   std::complex<double> result;

   result = 0.1*(g1*Sin(ThetaW())*(7.745966692414834*g2*Cos(ThetaW()) + 3*g1*
      Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpVZconjVWmVWm() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFeFePL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFeFePR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFmFmPL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFmFmPR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFtauFtauPL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFtauFtauPR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFveFvePL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFveFvePR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpVZbarFvmFvmPL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFvmFvmPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpVZbarFvtFvtPL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFvtFvtPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpVZVZAhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*Sqr(g1) + 5*Sqr(
      g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)))*(ZA(gI1,0)*ZA(gI2,0) + ZA(
      gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(-7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*Sqr(g1) + 5*Sqr(
      g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)))*(Conj(ZP(gI2,0))*ZP(gI1,0) +
      Conj(ZP(gI2,1))*ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZB(gI2,0))*(g1*Sin(ThetaW())*(
      7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())))*ZB(gI1,0) + 4*Conj(ZB(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZB(gI1,
      1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZC(gI2,0))*(-7.745966692414834*g1*g2*Cos(
      ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(ThetaW())) + Sqr(g1)*Sqr(Sin(
      ThetaW())))*ZC(gI1,0) + 16*Conj(ZC(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZC(gI1
      ,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZD(gI2,0))*(g1*Sin(ThetaW())*(
      7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())))*ZD(gI1,0) + 4*Conj(ZD(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZD(gI1,
      1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZE(gI2,0))*(-7.745966692414834*g1*g2*Cos(ThetaW())*Sin(
      ThetaW()) + 5*Sqr(g2)*Sqr(Cos(ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW())))*ZE(
      gI1,0) + 12*Conj(ZE(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZM(gI2,0))*(-7.745966692414834*g1*g2*Cos(ThetaW())*Sin(
      ThetaW()) + 5*Sqr(g2)*Sqr(Cos(ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW())))*ZM(
      gI1,0) + 12*Conj(ZM(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZS(gI2,0))*(g1*Sin(ThetaW())*(
      7.745966692414834*g2*Cos(ThetaW()) + g1*Sin(ThetaW())) + 15*Sqr(g2)*Sqr(Cos(
      ThetaW())))*ZS(gI1,0) + 4*Conj(ZS(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZS(gI1,
      1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZT(gI2,0))*(-7.745966692414834*g1*g2*Cos(
      ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(ThetaW())) + Sqr(g1)*Sqr(Sin(
      ThetaW())))*ZT(gI1,0) + 16*Conj(ZT(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZT(gI1
      ,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZTau(gI2,0))*(-7.745966692414834*g1*g2*Cos(ThetaW())*Sin(
      ThetaW()) + 5*Sqr(g2)*Sqr(Cos(ThetaW())) + 3*Sqr(g1)*Sqr(Sin(ThetaW())))*
      ZTau(gI1,0) + 12*Conj(ZTau(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.03333333333333333*(Conj(ZU(gI2,0))*(-7.745966692414834*g1*g2*Cos(
      ThetaW())*Sin(ThetaW()) + 15*Sqr(g2)*Sqr(Cos(ThetaW())) + Sqr(g1)*Sqr(Sin(
      ThetaW())))*ZU(gI1,0) + 16*Conj(ZU(gI2,1))*Sqr(g1)*Sqr(Sin(ThetaW()))*ZU(gI1
      ,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.05*(7.745966692414834*g1*g2*Sin(2*ThetaW()) + 3*Sqr(g1) + 5*Sqr(
      g2) + Cos(2*ThetaW())*(-3*Sqr(g1) + 5*Sqr(g2)))*(ZH(gI1,0)*ZH(gI2,0) + ZH(
      gI1,1)*ZH(gI2,1));

   return result;
}

double CLASSNAME::CpVZconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.1*KroneckerDelta(gI1,gI2)*(-5*g2*Cos(ThetaW()) +
      3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-(Conj(ZB(gI2,0))*(3*g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()))*ZB(gI1,0)) + 1.5491933384829668*g1*Conj
      (ZB(gI2,1))*Sin(ThetaW())*ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(Conj(ZC(gI2,0))*(3*g2*Cos(ThetaW()) -
      0.7745966692414834*g1*Sin(ThetaW()))*ZC(gI1,0) - 3.0983866769659336*g1*Conj(
      ZC(gI2,1))*Sin(ThetaW())*ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-(Conj(ZD(gI2,0))*(3*g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()))*ZD(gI1,0)) + 1.5491933384829668*g1*Conj
      (ZD(gI2,1))*Sin(ThetaW())*ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(Conj(ZE(gI2,0))*(-(g2*Cos(ThetaW())) + 0.7745966692414834*g1*
      Sin(ThetaW()))*ZE(gI1,0) + 1.5491933384829668*g1*Conj(ZE(gI2,1))*Sin(ThetaW(
      ))*ZE(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(Conj(ZM(gI2,0))*(-(g2*Cos(ThetaW())) + 0.7745966692414834*g1*
      Sin(ThetaW()))*ZM(gI1,0) + 1.5491933384829668*g1*Conj(ZM(gI2,1))*Sin(ThetaW(
      ))*ZM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-(Conj(ZS(gI2,0))*(3*g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()))*ZS(gI1,0)) + 1.5491933384829668*g1*Conj
      (ZS(gI2,1))*Sin(ThetaW())*ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(Conj(ZT(gI2,0))*(3*g2*Cos(ThetaW()) -
      0.7745966692414834*g1*Sin(ThetaW()))*ZT(gI1,0) - 3.0983866769659336*g1*Conj(
      ZT(gI2,1))*Sin(ThetaW())*ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(Conj(ZTau(gI2,0))*(-(g2*Cos(ThetaW())) + 0.7745966692414834*g1
      *Sin(ThetaW()))*ZTau(gI1,0) + 1.5491933384829668*g1*Conj(ZTau(gI2,1))*Sin(
      ThetaW())*ZTau(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(Conj(ZU(gI2,0))*(3*g2*Cos(ThetaW()) -
      0.7745966692414834*g1*Sin(ThetaW()))*ZU(gI1,0) - 3.0983866769659336*g1*Conj(
      ZU(gI2,1))*Sin(ThetaW())*ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZhhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*(g2*Cos(ThetaW()) + 0.7745966692414834
      *g1*Sin(ThetaW()))*(ZA(gI2,0)*ZH(gI1,0) - ZA(gI2,1)*ZH(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZbarChaChaPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(2*g2*Conj(UM(gI2,0))*Cos(ThetaW())*UM(gI1,0) + Conj(UM(gI2,1))
      *(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()))*UM(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZbarChaChaPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(2*g2*Conj(UP(gI1,0))*Cos(ThetaW())*UP(gI2,0) + Conj(UP(gI1,1))
      *(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()))*UP(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZChiChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()))*(Conj
      (ZN(gI2,2))*ZN(gI1,2) - Conj(ZN(gI2,3))*ZN(gI1,3));

   return result;
}

std::complex<double> CLASSNAME::CpVZChiChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()))*(Conj(
      ZN(gI1,2))*ZN(gI2,2) - Conj(ZN(gI1,3))*ZN(gI2,3));

   return result;
}

std::complex<double> CLASSNAME::CpVZVZhh(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin(ThetaW()))*(vd
      *ZH(gI2,0) + vu*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpVZconjVWmHpm(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.3872983346207417*g1*g2*(vd*Conj(ZP(gI2,0)) - vu*Conj(ZP(gI2,1)))*
      Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFbFbPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFbFbPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFcFcPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFcFcPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFdFdPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFdFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFsFsPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFsFsPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFtFtPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFtFtPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZbarFuFuPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVZbarFuFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpVZVZconjVWmVWm1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZconjVWmVWm2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVZVZconjVWmVWm3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpconjVWmbargPgWm() const
{
   double result = 0.0;

   result = g2*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWmbargWmCgP() const
{
   double result = 0.0;

   result = -(g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjVWmbargWmCgZ() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpconjVWmbargZgWm() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpVWmconjVWmconjSveLSveL() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpVWmconjVWmconjSvmLSvmL() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpVWmconjVWmconjSvtLSvtL() const
{
   double result = 0.0;

   result = 0.5*Sqr(g2);

   return result;
}

double CLASSNAME::CpconjVWmVWmVP() const
{
   double result = 0.0;

   result = -(g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpconjVWmVZVWm() const
{
   double result = 0.0;

   result = g2*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpconjVWmbarFveFePL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFveFePR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjVWmbarFvmFmPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFvmFmPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjVWmbarFvtFtauPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFvtFtauPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmAhAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2)*(ZA(gI1,0)*ZA(gI2,0) + ZA(gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjHpmHpm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2)*(Conj(ZP(gI2,0))*ZP(gI1,0) + Conj(ZP(gI2,1))*ZP(gI1,1))
      ;

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSbSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZB(gI2,0))*Sqr(g2)*ZB(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjScSc(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZC(gI2,0))*Sqr(g2)*ZC(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZD(gI2,0))*Sqr(g2)*ZD(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZE(gI2,0))*Sqr(g2)*ZE(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSmSm(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZM(gI2,0))*Sqr(g2)*ZM(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSsSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZS(gI2,0))*Sqr(g2)*ZS(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjStSt(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZT(gI2,0))*Sqr(g2)*ZT(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjStauStau(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZTau(gI2,0))*Sqr(g2)*ZTau(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Conj(ZU(gI2,0))*Sqr(g2)*ZU(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2)*(ZH(gI1,0)*ZH(gI2,0) + ZH(gI1,1)*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjScSs(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZS(gI2,0))*ZC(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjStSb(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZB(gI2,0))*ZT(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSuSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZD(gI2,0))*ZU(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmHpmAh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.5)*g2*(Conj(ZP(gI1,0))*ZA(gI2,0) + Conj(
      ZP(gI1,1))*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmHpmhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*g2*(Conj(ZP(gI1,0))*ZH(gI2,0) - Conj(ZP(gI1,1))*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmChiChaPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*g2*(2*Conj(UM(gI2,0))*ZN(gI1,1) + 1.4142135623730951*Conj(UM(
      gI2,1))*ZN(gI1,2));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmChiChaPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZN(gI1,1))*UP(gI2,0)) + 0.7071067811865475*g2*Conj(ZN(gI1
      ,3))*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmVPHpm(unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3872983346207417*g1*g2*(vd*Conj(ZP(gI2,0)) - vu*Conj(ZP(gI2,1)))
      *Cos(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmVWmhh(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2)*(vd*ZH(gI2,0) + vu*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmVZHpm(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.3872983346207417*g1*g2*(vd*Conj(ZP(gI2,0)) - vu*Conj(ZP(gI2,1)))*
      Sin(ThetaW());

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSveLSe(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZE(gI2,0));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSvmLSm(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZM(gI2,0));

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSvtLStau(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*g2*Conj(ZTau(gI2,0));

   return result;
}

double CLASSNAME::CpconjVWmbarFcFsPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFcFsPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjVWmbarFtFbPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFtFbPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpconjVWmbarFuFdPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpconjVWmbarFuFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpVWmconjVWmVPVP1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmVPVP2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmVPVP3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmVZVZ1() const
{
   double result = 0.0;

   result = -2*Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmVZVZ2() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmVZVZ3() const
{
   double result = 0.0;

   result = Sqr(g2)*Sqr(Cos(ThetaW()));

   return result;
}

double CLASSNAME::CpVWmconjVWmconjVWmVWm1() const
{
   double result = 0.0;

   result = -Sqr(g2);

   return result;
}

double CLASSNAME::CpVWmconjVWmconjVWmVWm2() const
{
   double result = 0.0;

   result = -Sqr(g2);

   return result;
}

double CLASSNAME::CpVWmconjVWmconjVWmVWm3() const
{
   double result = 0.0;

   result = 2*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjHpmChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(UM(gI2,1))*(5.477225575051661*g1*KroneckerDelta(0,gO2) +
      7.0710678118654755*g2*KroneckerDelta(1,gO2)) - 10*g2*Conj(UM(gI2,0))*
      KroneckerDelta(2,gO2))*ZP(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjHpmChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.1*(10*g2*KroneckerDelta(3,gO1)*UP(gI2,0) + 1.4142135623730951*(
      3.872983346207417*g1*KroneckerDelta(0,gO1) + 5*g2*KroneckerDelta(1,gO1))*UP(
      gI2,1))*ZP(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChihhChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(Conj(ZN(gI2,2))*(3.872983346207417*g1*KroneckerDelta(0,gO2) -
      5*g2*KroneckerDelta(1,gO2))*ZH(gI1,0) - 5*g2*Conj(ZN(gI2,1))*KroneckerDelta(
      2,gO2)*ZH(gI1,0) - 3.872983346207417*g1*Conj(ZN(gI2,3))*KroneckerDelta(0,gO2
      )*ZH(gI1,1) + 5*g2*Conj(ZN(gI2,3))*KroneckerDelta(1,gO2)*ZH(gI1,1) + 5*g2*
      Conj(ZN(gI2,1))*KroneckerDelta(3,gO2)*ZH(gI1,1) + 3.872983346207417*g1*Conj(
      ZN(gI2,0))*(KroneckerDelta(2,gO2)*ZH(gI1,0) - KroneckerDelta(3,gO2)*ZH(gI1,1
      )));

   return result;
}

std::complex<double> CLASSNAME::CpUChihhChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(KroneckerDelta(2,gO1)*ZH(gI1,0)*(3.872983346207417*g1*ZN(gI2,0
      ) - 5*g2*ZN(gI2,1)) + KroneckerDelta(3,gO1)*ZH(gI1,1)*(-3.872983346207417*g1
      *ZN(gI2,0) + 5*g2*ZN(gI2,1)) + (3.872983346207417*g1*KroneckerDelta(0,gO1) -
      5*g2*KroneckerDelta(1,gO1))*(ZH(gI1,0)*ZN(gI2,2) - ZH(gI1,1)*ZN(gI2,3)));

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSbFbPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZB(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZB(gI1,0) - KroneckerDelta(2,gO2
      )*Yd(2,2)*ZB(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSbFbPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yd(2,2))*KroneckerDelta(2,gO1)*ZB(gI1,0)) -
      0.3651483716701107*g1*KroneckerDelta(0,gO1)*ZB(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjScFcPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZC(gI1,0) -
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZC(gI1,0) - KroneckerDelta(3,gO2
      )*Yu(1,1)*ZC(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjScFcPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yu(1,1))*KroneckerDelta(3,gO1)*ZC(gI1,0)) +
      0.7302967433402214*g1*KroneckerDelta(0,gO1)*ZC(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSdFdPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZD(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZD(gI1,0) - KroneckerDelta(2,gO2
      )*Yd(0,0)*ZD(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSdFdPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yd(0,0))*KroneckerDelta(2,gO1)*ZD(gI1,0)) -
      0.3651483716701107*g1*KroneckerDelta(0,gO1)*ZD(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSeFePL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2)*ZE(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZE(gI1,0) - KroneckerDelta(2,gO2
      )*Ye(0,0)*ZE(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSeFePR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   result = -(Conj(Ye(0,0))*KroneckerDelta(2,gO1)*ZE(gI1,0)) -
      1.0954451150103321*g1*KroneckerDelta(0,gO1)*ZE(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSmFmPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2)*ZM(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZM(gI1,0) - KroneckerDelta(2,gO2
      )*Ye(1,1)*ZM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSmFmPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   result = -(Conj(Ye(1,1))*KroneckerDelta(2,gO1)*ZM(gI1,0)) -
      1.0954451150103321*g1*KroneckerDelta(0,gO1)*ZM(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSsFsPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZS(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZS(gI1,0) - KroneckerDelta(2,gO2
      )*Yd(1,1)*ZS(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSsFsPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yd(1,1))*KroneckerDelta(2,gO1)*ZS(gI1,0)) -
      0.3651483716701107*g1*KroneckerDelta(0,gO1)*ZS(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjStFtPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZT(gI1,0) -
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZT(gI1,0) - KroneckerDelta(3,gO2
      )*Yu(2,2)*ZT(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjStFtPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yu(2,2))*KroneckerDelta(3,gO1)*ZT(gI1,0)) +
      0.7302967433402214*g1*KroneckerDelta(0,gO1)*ZT(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjStauFtauPL(unsigned gO2, unsigned gI1) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2)*ZTau(gI1,0) +
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZTau(gI1,0) - KroneckerDelta(2,
      gO2)*Ye(2,2)*ZTau(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjStauFtauPR(unsigned gO1, unsigned gI1) const
{
   std::complex<double> result;

   result = -(Conj(Ye(2,2))*KroneckerDelta(2,gO1)*ZTau(gI1,0)) -
      1.0954451150103321*g1*KroneckerDelta(0,gO1)*ZTau(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSuFuPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -0.18257418583505536*g1*KroneckerDelta(0,gO2)*ZU(gI1,0) -
      0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZU(gI1,0) - KroneckerDelta(3,gO2
      )*Yu(0,0)*ZU(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSuFuPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(Conj(Yu(0,0))*KroneckerDelta(3,gO1)*ZU(gI1,0)) +
      0.7302967433402214*g1*KroneckerDelta(0,gO1)*ZU(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiChiAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,-0.1)*(Conj(ZN(gI1,2))*(3.872983346207417*g1
      *KroneckerDelta(0,gO2) - 5*g2*KroneckerDelta(1,gO2))*ZA(gI2,0) - 5*g2*Conj(
      ZN(gI1,1))*KroneckerDelta(2,gO2)*ZA(gI2,0) - 3.872983346207417*g1*Conj(ZN(
      gI1,3))*KroneckerDelta(0,gO2)*ZA(gI2,1) + 5*g2*Conj(ZN(gI1,3))*
      KroneckerDelta(1,gO2)*ZA(gI2,1) + 5*g2*Conj(ZN(gI1,1))*KroneckerDelta(3,gO2)
      *ZA(gI2,1) + 3.872983346207417*g1*Conj(ZN(gI1,0))*(KroneckerDelta(2,gO2)*ZA(
      gI2,0) - KroneckerDelta(3,gO2)*ZA(gI2,1)));

   return result;
}

std::complex<double> CLASSNAME::CpUChiChiAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0,0.1)*(KroneckerDelta(2,gO1)*ZA(gI2,0)*(
      3.872983346207417*g1*ZN(gI1,0) - 5*g2*ZN(gI1,1)) + KroneckerDelta(3,gO1)*ZA(
      gI2,1)*(-3.872983346207417*g1*ZN(gI1,0) + 5*g2*ZN(gI1,1)) + (
      3.872983346207417*g1*KroneckerDelta(0,gO1) - 5*g2*KroneckerDelta(1,gO1))*(ZA
      (gI2,0)*ZN(gI1,2) - ZA(gI2,1)*ZN(gI1,3)));

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjVWmChaPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*KroneckerDelta(1,gO2)*UP(gI2,0)) + 0.7071067811865475*g2*
      KroneckerDelta(3,gO2)*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjVWmChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*g2*(2*Conj(UM(gI2,0))*KroneckerDelta(1,gO1) +
      1.4142135623730951*Conj(UM(gI2,1))*KroneckerDelta(2,gO1));

   return result;
}

std::complex<double> CLASSNAME::CpUChiVZChiPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*(5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW()))*(
      KroneckerDelta(2,gO2)*ZN(gI2,2) - KroneckerDelta(3,gO2)*ZN(gI2,3));

   return result;
}

std::complex<double> CLASSNAME::CpUChiVZChiPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.1*(Conj(ZN(gI2,2))*KroneckerDelta(2,gO1) - Conj(ZN(gI2,3))*
      KroneckerDelta(3,gO1))*(5*g2*Cos(ThetaW()) + 3.872983346207417*g1*Sin(ThetaW
      ()));

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSveLFvePL(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2) - 0.7071067811865475*g2
      *KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUChiconjSveLFvePR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSvmLFvmPL(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2) - 0.7071067811865475*g2
      *KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUChiconjSvmLFvmPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSvtLFvtPL(unsigned gO2) const
{
   std::complex<double> result;

   result = 0.5477225575051661*g1*KroneckerDelta(0,gO2) - 0.7071067811865475*g2
      *KroneckerDelta(1,gO2);

   return result;
}

double CLASSNAME::CpUChiconjSvtLFvtPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaChaAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gI1,1))*
      KroneckerDelta(0,gO2)*ZA(gI2,0) + Conj(UM(gI1,0))*KroneckerDelta(1,gO2)*ZA(
      gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaChaAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*g2*(KroneckerDelta(1,
      gO1)*UP(gI1,0)*ZA(gI2,0) + KroneckerDelta(0,gO1)*UP(gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChahhChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.7071067811865475*g2*(Conj(UM(gI2,1))*KroneckerDelta(0,gO2)*ZH(
      gI1,0) + Conj(UM(gI2,0))*KroneckerDelta(1,gO2)*ZH(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChahhChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.7071067811865475*g2*(KroneckerDelta(1,gO1)*UP(gI2,0)*ZH(gI1,0) +
      KroneckerDelta(0,gO1)*UP(gI2,1)*ZH(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaHpmChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.1*Conj(ZP(gI1,1))*(10*g2*Conj(ZN(gI2,3))*KroneckerDelta(0,gO2) +
      1.4142135623730951*(3.872983346207417*g1*Conj(ZN(gI2,0)) + 5*g2*Conj(ZN(gI2
      ,1)))*KroneckerDelta(1,gO2));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaHpmChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*Conj(ZP(gI1,0))*(KroneckerDelta(1,gO1)*(5.477225575051661*g1*ZN
      (gI2,0) + 7.0710678118654755*g2*ZN(gI2,1)) - 10*g2*KroneckerDelta(0,gO1)*ZN(
      gI2,2));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjScFsPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*KroneckerDelta(0,gO2)*ZC(gI1,0)) + KroneckerDelta(1,gO2)*Yu(1,
      1)*ZC(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjScFsPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(1,1))*KroneckerDelta(1,gO1)*ZC(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjStFbPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*KroneckerDelta(0,gO2)*ZT(gI1,0)) + KroneckerDelta(1,gO2)*Yu(2,
      2)*ZT(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjStFbPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(2,2))*KroneckerDelta(1,gO1)*ZT(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjSuFdPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -(g2*KroneckerDelta(0,gO2)*ZU(gI1,0)) + KroneckerDelta(1,gO2)*Yu(0,
      0)*ZU(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjSuFdPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(0,0))*KroneckerDelta(1,gO1)*ZU(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVPChaPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = g2*KroneckerDelta(0,gO2)*Sin(ThetaW())*UP(gI2,0) + 0.1*
      KroneckerDelta(1,gO2)*(3.872983346207417*g1*Cos(ThetaW()) + 5*g2*Sin(ThetaW(
      )))*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVPChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = g2*Conj(UM(gI2,0))*KroneckerDelta(0,gO1)*Sin(ThetaW()) + 0.1*Conj(
      UM(gI2,1))*KroneckerDelta(1,gO1)*(3.872983346207417*g1*Cos(ThetaW()) + 5*g2*
      Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVZChaPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = g2*Cos(ThetaW())*KroneckerDelta(0,gO2)*UP(gI2,0) + 0.1*
      KroneckerDelta(1,gO2)*(5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW(
      )))*UP(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVZChaPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = g2*Conj(UM(gI2,0))*Cos(ThetaW())*KroneckerDelta(0,gO1) + 0.1*Conj(
      UM(gI2,1))*KroneckerDelta(1,gO1)*(5*g2*Cos(ThetaW()) - 3.872983346207417*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarUChabarFveSePL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFveSePR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZE(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Ye(0,0))*Conj(ZE
      (gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

double CLASSNAME::CpbarUChabarFvmSmPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFvmSmPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZM(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Ye(1,1))*Conj(ZM
      (gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

double CLASSNAME::CpbarUChabarFvtStauPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFvtStauPR(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZTau(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Ye(2,2))*Conj(
      ZTau(gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFcSsPL(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZS(gI2,0))*KroneckerDelta(1,gO2)*Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFcSsPR(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZS(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Yd(1,1))*Conj(ZS
      (gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFtSbPL(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZB(gI2,0))*KroneckerDelta(1,gO2)*Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFtSbPR(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZB(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Yd(2,2))*Conj(ZB
      (gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFuSdPL(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZD(gI2,0))*KroneckerDelta(1,gO2)*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFuSdPR(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZD(gI2,0))*KroneckerDelta(0,gO1)) + Conj(Yd(0,0))*Conj(ZD
      (gI2,1))*KroneckerDelta(1,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVWmChiPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*KroneckerDelta(0,gO2)*ZN(gI2,1)) + 0.7071067811865475*g2*
      KroneckerDelta(1,gO2)*ZN(gI2,3);

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaVWmChiPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.5*g2*(2*Conj(ZN(gI2,1))*KroneckerDelta(0,gO1) +
      1.4142135623730951*Conj(ZN(gI2,2))*KroneckerDelta(1,gO1));

   return result;
}

double CLASSNAME::CpbarUChaconjSveLFePL(unsigned gO2) const
{
   double result = 0.0;

   result = -(g2*KroneckerDelta(0,gO2));

   return result;
}

double CLASSNAME::CpbarUChaconjSveLFePR(unsigned gO1) const
{
   double result = 0.0;

   result = Conj(Ye(0,0))*KroneckerDelta(1,gO1);

   return result;
}

double CLASSNAME::CpbarUChaconjSvmLFmPL(unsigned gO2) const
{
   double result = 0.0;

   result = -(g2*KroneckerDelta(0,gO2));

   return result;
}

double CLASSNAME::CpbarUChaconjSvmLFmPR(unsigned gO1) const
{
   double result = 0.0;

   result = Conj(Ye(1,1))*KroneckerDelta(1,gO1);

   return result;
}

double CLASSNAME::CpbarUChaconjSvtLFtauPL(unsigned gO2) const
{
   double result = 0.0;

   result = -(g2*KroneckerDelta(0,gO2));

   return result;
}

double CLASSNAME::CpbarUChaconjSvtLFtauPR(unsigned gO1) const
{
   double result = 0.0;

   result = Conj(Ye(2,2))*KroneckerDelta(1,gO1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSbFbPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZB(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSbFbPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZB(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjScFcPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZC(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjScFcPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZC(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSdFdPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZD(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSdFdPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZD(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSsFsPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZS(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSsFsPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZS(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjStFtPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZT(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjStFtPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZT(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSuFuPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*PhaseGlu*ZU(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSuFuPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*Conj(PhaseGlu)*ZU(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpGluVGGluPR() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-1)*g3*AbsSqr(PhaseGlu);

   return result;
}

std::complex<double> CLASSNAME::CpGluVGGluPL() const
{
   std::complex<double> result;

   result = std::complex<double>(0,-1)*g3*AbsSqr(PhaseGlu);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSuChaPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Conj(ZU(gI1,0))*Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSuChaPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZU(gI1,0))*UP(gI2,0)) + Conj(Yu(0,0))*Conj(ZU(gI1,1))*UP(
      gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*Conj(ZD(gI1,1))*Conj(ZN(gI2,0)) - Conj(ZD(
      gI1,0))*Conj(ZN(gI2,2))*Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZD(gI1,0))*(-0.18257418583505536*g1*ZN(gI2,0) +
      0.7071067811865475*g2*ZN(gI2,1)) - Conj(Yd(0,0))*Conj(ZD(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yd(0,0)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yd(0,0))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdHpmFuPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Yd(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdHpmFuPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yu(0,0))*Conj(ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZD(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZD(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(0,0)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(0,0))*ZA(gI2,0)
      ;

   return result;
}

double CLASSNAME::CpbarFdVGFdPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFdVGFdPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFdVPFdPR() const
{
   double result = 0.0;

   result = 0.2581988897471611*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFdVPFdPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) + 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFdVWmFuPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFdVWmFuPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFdVZFdPR() const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFdVZFdPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFsScChaPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Conj(ZC(gI1,0))*Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsScChaPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZC(gI1,0))*UP(gI2,0)) + Conj(Yu(1,1))*Conj(ZC(gI1,1))*UP(
      gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsSsChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*Conj(ZN(gI2,0))*Conj(ZS(gI1,1)) - Conj(ZN(
      gI2,2))*Conj(ZS(gI1,0))*Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsSsChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZS(gI1,0))*(-0.18257418583505536*g1*ZN(gI2,0) +
      0.7071067811865475*g2*ZN(gI2,1)) - Conj(Yd(1,1))*Conj(ZS(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFshhFsPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yd(1,1)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFshhFsPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yd(1,1))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsHpmFcPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Yd(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsHpmFcPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yu(1,1))*Conj(ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFsSsGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZS(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFsSsGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZS(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFsFsAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(1,1)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFsFsAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(1,1))*ZA(gI2,0)
      ;

   return result;
}

double CLASSNAME::CpbarFsVGFsPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFsVGFsPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFsVPFsPR() const
{
   double result = 0.0;

   result = 0.2581988897471611*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFsVPFsPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) + 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFsVWmFcPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFsVWmFcPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFsVZFsPR() const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFsVZFsPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFbStChaPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Conj(ZT(gI1,0))*Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbStChaPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZT(gI1,0))*UP(gI2,0)) + Conj(Yu(2,2))*Conj(ZT(gI1,1))*UP(
      gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbSbChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.3651483716701107*g1*Conj(ZB(gI1,1))*Conj(ZN(gI2,0)) - Conj(ZB(
      gI1,0))*Conj(ZN(gI2,2))*Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbSbChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(ZB(gI1,0))*(-0.18257418583505536*g1*ZN(gI2,0) +
      0.7071067811865475*g2*ZN(gI2,1)) - Conj(Yd(2,2))*Conj(ZB(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbhhFbPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yd(2,2)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbhhFbPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yd(2,2))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbHpmFtPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Yd(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbHpmFtPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yu(2,2))*Conj(ZP(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFbSbGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZB(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFbSbGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZB(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFbFbAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(2,2)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFbFbAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yd(2,2))*ZA(gI2,0)
      ;

   return result;
}

double CLASSNAME::CpbarFbVGFbPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFbVGFbPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFbVPFbPR() const
{
   double result = 0.0;

   result = 0.2581988897471611*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFbVPFbPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) + 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFbVWmFtPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFbVWmFtPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFbVZFbPR() const
{
   double result = 0.0;

   result = -0.2581988897471611*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFbVZFbPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*Sin
      (ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFubarChaSdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UP(gI1,1))*Conj(ZD(gI2,0))*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFubarChaSdPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZD(gI2,0))*UM(gI1,0)) + Conj(Yd(0,0))*Conj(ZD(gI2,1))*UM(
      gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*Conj(ZN(gI2,0))*Conj(ZU(gI1,1)) - Conj(ZN(gI2
      ,3))*Conj(ZU(gI1,0))*Yu(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-1.4142135623730951*Conj(ZU(gI1,0))*(
      0.7745966692414834*g1*ZN(gI2,0) + 3*g2*ZN(gI2,1)) - 6*Conj(Yu(0,0))*Conj(ZU(
      gI1,1))*ZN(gI2,3));

   return result;
}

std::complex<double> CLASSNAME::CpbarFuconjHpmFdPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Yu(0,0)*ZP(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuconjHpmFdPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(0,0))*ZP(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yu(0,0)*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yu(0,0))*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZU(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZU(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(0,0)*ZA(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(0,0))*ZA(gI2,1)
      ;

   return result;
}

double CLASSNAME::CpbarFuVGFuPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFuVGFuPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFuVPFuPR() const
{
   double result = 0.0;

   result = -0.5163977794943222*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFuVPFuPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) - 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFuVZFuPR() const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFuVZFuPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFuconjVWmFdPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFuconjVWmFdPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

std::complex<double> CLASSNAME::CpbarFcbarChaSsPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UP(gI1,1))*Conj(ZS(gI2,0))*Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcbarChaSsPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZS(gI2,0))*UM(gI1,0)) + Conj(Yd(1,1))*Conj(ZS(gI2,1))*UM(
      gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcScChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*Conj(ZC(gI1,1))*Conj(ZN(gI2,0)) - Conj(ZC(gI1
      ,0))*Conj(ZN(gI2,3))*Yu(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcScChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-1.4142135623730951*Conj(ZC(gI1,0))*(
      0.7745966692414834*g1*ZN(gI2,0) + 3*g2*ZN(gI2,1)) - 6*Conj(Yu(1,1))*Conj(ZC(
      gI1,1))*ZN(gI2,3));

   return result;
}

std::complex<double> CLASSNAME::CpbarFcconjHpmFsPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Yu(1,1)*ZP(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcconjHpmFsPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(1,1))*ZP(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFchhFcPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yu(1,1)*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFchhFcPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yu(1,1))*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcScGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZC(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFcScGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZC(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFcFcAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(1,1)*ZA(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFcFcAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(1,1))*ZA(gI2,1)
      ;

   return result;
}

double CLASSNAME::CpbarFcVGFcPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFcVGFcPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFcVPFcPR() const
{
   double result = 0.0;

   result = -0.5163977794943222*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFcVPFcPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) - 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFcVZFcPR() const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFcVZFcPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFcconjVWmFsPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFcconjVWmFsPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

std::complex<double> CLASSNAME::CpbarFtbarChaSbPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UP(gI1,1))*Conj(ZB(gI2,0))*Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtbarChaSbPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZB(gI2,0))*UM(gI1,0)) + Conj(Yd(2,2))*Conj(ZB(gI2,1))*UM(
      gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtStChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7302967433402214*g1*Conj(ZN(gI2,0))*Conj(ZT(gI1,1)) - Conj(ZN(gI2
      ,3))*Conj(ZT(gI1,0))*Yu(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtStChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.16666666666666666*(-1.4142135623730951*Conj(ZT(gI1,0))*(
      0.7745966692414834*g1*ZN(gI2,0) + 3*g2*ZN(gI2,1)) - 6*Conj(Yu(2,2))*Conj(ZT(
      gI1,1))*ZN(gI2,3));

   return result;
}

std::complex<double> CLASSNAME::CpbarFtconjHpmFbPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Yu(2,2)*ZP(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtconjHpmFbPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = Conj(Yd(2,2))*ZP(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFthhFtPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Yu(2,2)*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFthhFtPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Yu(2,2))*ZH(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtStGluPL(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = 1.4142135623730951*g3*PhaseGlu*Conj(ZT(gI1,1));

   return result;
}

std::complex<double> CLASSNAME::CpbarFtStGluPR(unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   result = -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZT(gI1,0));

   return result;
}

std::complex<double> CLASSNAME::CpbarFtFtAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(2,2)*ZA(gI2,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtFtAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Yu(2,2))*ZA(gI2,1)
      ;

   return result;
}

double CLASSNAME::CpbarFtVGFtPR() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFtVGFtPL() const
{
   double result = 0.0;

   result = -g3;

   return result;
}

double CLASSNAME::CpbarFtVPFtPR() const
{
   double result = 0.0;

   result = -0.5163977794943222*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFtVPFtPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-0.7745966692414834*g1*Cos(ThetaW()) - 3*g2*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFtVZFtPR() const
{
   double result = 0.0;

   result = 0.5163977794943222*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFtVZFtPL() const
{
   double result = 0.0;

   result = 0.16666666666666666*(-3*g2*Cos(ThetaW()) + 0.7745966692414834*g1*
      Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFtconjVWmFbPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFtconjVWmFbPL(unsigned ) const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFvebarChaSePL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvebarChaSePR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZE(gI2,0))*UM(gI1,0)) + Conj(Ye(0,0))*Conj(ZE(gI2,1))*UM(
      gI1,1);

   return result;
}

double CLASSNAME::CpbarFveconjHpmFePL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFveconjHpmFePR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(0,0))*ZP(gI1,0);

   return result;
}

double CLASSNAME::CpbarFveSveLChiPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFveSveLChiPR(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*ZN(gI2,0) - g2*ZN(gI2,1))
      ;

   return result;
}

double CLASSNAME::CpbarFveVZFvePR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFveVZFvePL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFveconjVWmFePR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFveconjVWmFePL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFvmbarChaSmPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvmbarChaSmPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZM(gI2,0))*UM(gI1,0)) + Conj(Ye(1,1))*Conj(ZM(gI2,1))*UM(
      gI1,1);

   return result;
}

double CLASSNAME::CpbarFvmconjHpmFmPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvmconjHpmFmPR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(1,1))*ZP(gI1,0);

   return result;
}

double CLASSNAME::CpbarFvmSvmLChiPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvmSvmLChiPR(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*ZN(gI2,0) - g2*ZN(gI2,1))
      ;

   return result;
}

double CLASSNAME::CpbarFvmVZFvmPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFvmVZFvmPL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFvmconjVWmFmPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFvmconjVWmFmPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFvtbarChaStauPL(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvtbarChaStauPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*Conj(ZTau(gI2,0))*UM(gI1,0)) + Conj(Ye(2,2))*Conj(ZTau(gI2,1))
      *UM(gI1,1);

   return result;
}

double CLASSNAME::CpbarFvtconjHpmFtauPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvtconjHpmFtauPR(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(Ye(2,2))*ZP(gI1,0);

   return result;
}

double CLASSNAME::CpbarFvtSvtLChiPL(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFvtSvtLChiPR(unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*(0.7745966692414834*g1*ZN(gI2,0) - g2*ZN(gI2,1))
      ;

   return result;
}

double CLASSNAME::CpbarFvtVZFvtPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFvtVZFvtPL() const
{
   double result = 0.0;

   result = 0.1*(-5*g2*Cos(ThetaW()) - 3.872983346207417*g1*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFvtconjVWmFtauPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFvtconjVWmFtauPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSeChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*Conj(ZE(gI1,1))*Conj(ZN(gI2,0)) - Conj(ZE(
      gI1,0))*Conj(ZN(gI2,2))*Ye(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSeChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*Conj(ZE(gI1,0))*(0.7745966692414834*g1*ZN(gI2,0)
      + g2*ZN(gI2,1)) - Conj(Ye(0,0))*Conj(ZE(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Ye(0,0)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Ye(0,0))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFeHpmFvePL(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Ye(0,0);

   return result;
}

double CLASSNAME::CpbarFeHpmFvePR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(0,0)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(0,0))*ZA(gI2,0)
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSveLChaPL(unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Ye(0,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSveLChaPR(unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*UP(gI2,0));

   return result;
}

double CLASSNAME::CpbarFeVPFePR() const
{
   double result = 0.0;

   result = 0.7745966692414834*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFeVPFePL() const
{
   double result = 0.0;

   result = 0.5*(0.7745966692414834*g1*Cos(ThetaW()) + g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFeVWmFvePR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFeVWmFvePL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFeVZFePR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFeVZFePL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFmSmChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*Conj(ZM(gI1,1))*Conj(ZN(gI2,0)) - Conj(ZM(
      gI1,0))*Conj(ZN(gI2,2))*Ye(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmSmChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*Conj(ZM(gI1,0))*(0.7745966692414834*g1*ZN(gI2,0)
      + g2*ZN(gI2,1)) - Conj(Ye(1,1))*Conj(ZM(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmhhFmPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Ye(1,1)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmhhFmPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Ye(1,1))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmHpmFvmPL(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Ye(1,1);

   return result;
}

double CLASSNAME::CpbarFmHpmFvmPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFmFmAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(1,1)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmFmAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(1,1))*ZA(gI2,0)
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFmSvmLChaPL(unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Ye(1,1);

   return result;
}

std::complex<double> CLASSNAME::CpbarFmSvmLChaPR(unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*UP(gI2,0));

   return result;
}

double CLASSNAME::CpbarFmVPFmPR() const
{
   double result = 0.0;

   result = 0.7745966692414834*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFmVPFmPL() const
{
   double result = 0.0;

   result = 0.5*(0.7745966692414834*g1*Cos(ThetaW()) + g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFmVWmFvmPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFmVWmFvmPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFmVZFmPR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFmVZFmPL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauStauChiPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -1.0954451150103321*g1*Conj(ZN(gI2,0))*Conj(ZTau(gI1,1)) - Conj(ZN(
      gI2,2))*Conj(ZTau(gI1,0))*Ye(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauStauChiPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.7071067811865475*Conj(ZTau(gI1,0))*(0.7745966692414834*g1*ZN(gI2,
      0) + g2*ZN(gI2,1)) - Conj(Ye(2,2))*Conj(ZTau(gI1,1))*ZN(gI2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauhhFtauPL(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Ye(2,2)*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauhhFtauPR(unsigned gI1) const
{
   std::complex<double> result;

   result = -0.7071067811865475*Conj(Ye(2,2))*ZH(gI1,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauHpmFvtPL(unsigned gI1) const
{
   std::complex<double> result;

   result = Conj(ZP(gI1,0))*Ye(2,2);

   return result;
}

double CLASSNAME::CpbarFtauHpmFvtPR(unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauFtauAhPL(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(2,2)*ZA(gI2,0);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauFtauAhPR(unsigned gI2) const
{
   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*Conj(Ye(2,2))*ZA(gI2,0)
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauSvtLChaPL(unsigned gI2) const
{
   std::complex<double> result;

   result = Conj(UM(gI2,1))*Ye(2,2);

   return result;
}

std::complex<double> CLASSNAME::CpbarFtauSvtLChaPR(unsigned gI2) const
{
   std::complex<double> result;

   result = -(g2*UP(gI2,0));

   return result;
}

double CLASSNAME::CpbarFtauVPFtauPR() const
{
   double result = 0.0;

   result = 0.7745966692414834*g1*Cos(ThetaW());

   return result;
}

double CLASSNAME::CpbarFtauVPFtauPL() const
{
   double result = 0.0;

   result = 0.5*(0.7745966692414834*g1*Cos(ThetaW()) + g2*Sin(ThetaW()));

   return result;
}

double CLASSNAME::CpbarFtauVWmFvtPR() const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarFtauVWmFvtPL() const
{
   double result = 0.0;

   result = -0.7071067811865475*g2;

   return result;
}

double CLASSNAME::CpbarFtauVZFtauPR() const
{
   double result = 0.0;

   result = -0.7745966692414834*g1*Sin(ThetaW());

   return result;
}

double CLASSNAME::CpbarFtauVZFtauPL() const
{
   double result = 0.0;

   result = 0.5*(g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW()));

   return result;
}


std::complex<double> CLASSNAME::self_energy_Sd(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSdconjUSdconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSdconjUSdconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSdconjUSdconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSdconjUSdconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSdconjUSdVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUSdGluFdPL(gO2,1,1))*
      CpconjUSdGluFdPL(gO1,1,1) + Conj(CpconjUSdGluFdPR(gO2,1,1))*CpconjUSdGluFdPR
      (gO1,1,1))*G0(p,MGlu,MFd);
   std::complex<double> tmp_0;
   std::complex<double> tmp_1;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1 += A0(MAh(gI1))*CpUSdconjUSdAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_0 += tmp_1;
   result += (-0.5) * tmp_0;
   std::complex<double> tmp_2;
   std::complex<double> tmp_3;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_3 += A0(MHpm(gI1))*CpUSdconjUSdconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_2 += tmp_3;
   result += (-1) * tmp_2;
   std::complex<double> tmp_4;
   std::complex<double> tmp_5;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_5 += A0(MSb(gI1))*CpUSdconjUSdconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_4 += tmp_5;
   result += (-1) * tmp_4;
   std::complex<double> tmp_6;
   std::complex<double> tmp_7;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_7 += A0(MSc(gI1))*CpUSdconjUSdconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_6 += tmp_7;
   result += (-1) * tmp_6;
   std::complex<double> tmp_8;
   std::complex<double> tmp_9;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_9 += A0(MSd(gI1))*CpUSdconjUSdconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_8 += tmp_9;
   result += (-1) * tmp_8;
   std::complex<double> tmp_10;
   std::complex<double> tmp_11;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_11 += A0(MSe(gI1))*CpUSdconjUSdconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_10 += tmp_11;
   result += (-1) * tmp_10;
   std::complex<double> tmp_12;
   std::complex<double> tmp_13;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_13 += A0(MSm(gI1))*CpUSdconjUSdconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_12 += tmp_13;
   result += (-1) * tmp_12;
   std::complex<double> tmp_14;
   std::complex<double> tmp_15;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_15 += A0(MSs(gI1))*CpUSdconjUSdconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_14 += tmp_15;
   result += (-1) * tmp_14;
   std::complex<double> tmp_16;
   std::complex<double> tmp_17;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_17 += A0(MStau(gI1))*CpUSdconjUSdconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_16 += tmp_17;
   result += (-1) * tmp_16;
   std::complex<double> tmp_18;
   std::complex<double> tmp_19;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_19 += A0(MSt(gI1))*CpUSdconjUSdconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_18 += tmp_19;
   result += (-1) * tmp_18;
   std::complex<double> tmp_20;
   std::complex<double> tmp_21;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_21 += A0(MSu(gI1))*CpUSdconjUSdconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_20 += tmp_21;
   result += (-1) * tmp_20;
   std::complex<double> tmp_22;
   std::complex<double> tmp_23;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_23 += A0(Mhh(gI1))*CpUSdconjUSdhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_22 += tmp_23;
   result += (-0.5) * tmp_22;
   std::complex<double> tmp_24;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_25;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_25 += B0(p,MSd(gI1),MAh(gI2))*Conj(CpconjUSdSdAh(gO2,gI1,gI2
            ))*CpconjUSdSdAh(gO1,gI1,gI2);
      }
      tmp_24 += tmp_25;
   }
   result += tmp_24;
   std::complex<double> tmp_26;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_27;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_27 += B0(p,MSd(gI1),Mhh(gI2))*Conj(CpconjUSdSdhh(gO2,gI1,gI2
            ))*CpconjUSdSdhh(gO1,gI1,gI2);
      }
      tmp_26 += tmp_27;
   }
   result += tmp_26;
   std::complex<double> tmp_28;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_29;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_29 += B0(p,MSu(gI1),MHpm(gI2))*Conj(CpconjUSdSuHpm(gO2,gI1,
            gI2))*CpconjUSdSuHpm(gO1,gI1,gI2);
      }
      tmp_28 += tmp_29;
   }
   result += tmp_28;
   std::complex<double> tmp_30;
   std::complex<double> tmp_31;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_31 += Conj(CpconjUSdVGSd(gO2,gI2))*CpconjUSdVGSd(gO1,gI2)*F0(p,MSd
         (gI2),0);
   }
   tmp_30 += tmp_31;
   result += (1.3333333333333333) * tmp_30;
   std::complex<double> tmp_32;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_32 += Conj(CpconjUSdVPSd(gO2,gI2))*CpconjUSdVPSd(gO1,gI2)*F0(p,MSd
         (gI2),0);
   }
   result += tmp_32;
   std::complex<double> tmp_33;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_33 += Conj(CpconjUSdVZSd(gO2,gI2))*CpconjUSdVZSd(gO1,gI2)*F0(p,MSd
         (gI2),MVZ);
   }
   result += tmp_33;
   std::complex<double> tmp_34;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_34 += Conj(CpconjUSdVWmSu(gO2,gI2))*CpconjUSdVWmSu(gO1,gI2)*F0(p,
         MSu(gI2),MVWm);
   }
   result += tmp_34;
   std::complex<double> tmp_35;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_35 += (Conj(CpconjUSdFuChaPL(gO2,1,gI2))*CpconjUSdFuChaPL(gO1,1,
         gI2) + Conj(CpconjUSdFuChaPR(gO2,1,gI2))*CpconjUSdFuChaPR(gO1,1,gI2))*G0(
         p,MFu,MCha(gI2));
   }
   result += tmp_35;
   std::complex<double> tmp_36;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_36 += (Conj(CpconjUSdFdChiPL(gO2,1,gI2))*CpconjUSdFdChiPL(gO1,1,
         gI2) + Conj(CpconjUSdFdChiPR(gO2,1,gI2))*CpconjUSdFdChiPR(gO1,1,gI2))*G0(
         p,MFd,MChi(gI2));
   }
   result += tmp_36;
   std::complex<double> tmp_37;
   std::complex<double> tmp_38;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_38 += B0(p,MFd,MChi(gI2))*(Conj(CpconjUSdFdChiPR(gO2,1,gI2))*
         CpconjUSdFdChiPL(gO1,1,gI2) + Conj(CpconjUSdFdChiPL(gO2,1,gI2))*
         CpconjUSdFdChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_37 += tmp_38;
   result += (-2*MFd) * tmp_37;
   std::complex<double> tmp_39;
   std::complex<double> tmp_40;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_40 += B0(p,MFu,MCha(gI2))*(Conj(CpconjUSdFuChaPR(gO2,1,gI2))*
         CpconjUSdFuChaPL(gO1,1,gI2) + Conj(CpconjUSdFuChaPL(gO2,1,gI2))*
         CpconjUSdFuChaPR(gO1,1,gI2))*MCha(gI2);
   }
   tmp_39 += tmp_40;
   result += (-2*MFu) * tmp_39;
   result += -2.6666666666666665*MFd*MGlu*B0(p,MGlu,MFd)*(Conj(CpconjUSdGluFdPR
      (gO2,1,1))*CpconjUSdGluFdPL(gO1,1,1) + Conj(CpconjUSdGluFdPL(gO2,1,1))*
      CpconjUSdGluFdPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Su(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSuconjUSuconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSuconjUSuconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSuconjUSuconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSuconjUSuconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSuconjUSuVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUSuGluFuPL(gO2,1,1))*
      CpconjUSuGluFuPL(gO1,1,1) + Conj(CpconjUSuGluFuPR(gO2,1,1))*CpconjUSuGluFuPR
      (gO1,1,1))*G0(p,MGlu,MFu);
   std::complex<double> tmp_41;
   std::complex<double> tmp_42;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_42 += A0(MAh(gI1))*CpUSuconjUSuAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_41 += tmp_42;
   result += (-0.5) * tmp_41;
   std::complex<double> tmp_43;
   std::complex<double> tmp_44;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_44 += A0(MHpm(gI1))*CpUSuconjUSuconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_43 += tmp_44;
   result += (-1) * tmp_43;
   std::complex<double> tmp_45;
   std::complex<double> tmp_46;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_46 += A0(MSb(gI1))*CpUSuconjUSuconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_45 += tmp_46;
   result += (-1) * tmp_45;
   std::complex<double> tmp_47;
   std::complex<double> tmp_48;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_48 += A0(MSc(gI1))*CpUSuconjUSuconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_47 += tmp_48;
   result += (-1) * tmp_47;
   std::complex<double> tmp_49;
   std::complex<double> tmp_50;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_50 += A0(MSd(gI1))*CpUSuconjUSuconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_49 += tmp_50;
   result += (-1) * tmp_49;
   std::complex<double> tmp_51;
   std::complex<double> tmp_52;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_52 += A0(MSe(gI1))*CpUSuconjUSuconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_51 += tmp_52;
   result += (-1) * tmp_51;
   std::complex<double> tmp_53;
   std::complex<double> tmp_54;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_54 += A0(MSm(gI1))*CpUSuconjUSuconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_53 += tmp_54;
   result += (-1) * tmp_53;
   std::complex<double> tmp_55;
   std::complex<double> tmp_56;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_56 += A0(MSs(gI1))*CpUSuconjUSuconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_55 += tmp_56;
   result += (-1) * tmp_55;
   std::complex<double> tmp_57;
   std::complex<double> tmp_58;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_58 += A0(MStau(gI1))*CpUSuconjUSuconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_57 += tmp_58;
   result += (-1) * tmp_57;
   std::complex<double> tmp_59;
   std::complex<double> tmp_60;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_60 += A0(MSt(gI1))*CpUSuconjUSuconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_59 += tmp_60;
   result += (-1) * tmp_59;
   std::complex<double> tmp_61;
   std::complex<double> tmp_62;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_62 += A0(MSu(gI1))*CpUSuconjUSuconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_61 += tmp_62;
   result += (-1) * tmp_61;
   std::complex<double> tmp_63;
   std::complex<double> tmp_64;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_64 += A0(Mhh(gI1))*CpUSuconjUSuhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_63 += tmp_64;
   result += (-0.5) * tmp_63;
   std::complex<double> tmp_65;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_65 += (Conj(CpconjUSubarChaFdPL(gO2,gI1,1))*CpconjUSubarChaFdPL(
         gO1,gI1,1) + Conj(CpconjUSubarChaFdPR(gO2,gI1,1))*CpconjUSubarChaFdPR(gO1
         ,gI1,1))*G0(p,MCha(gI1),MFd);
   }
   result += tmp_65;
   std::complex<double> tmp_66;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_67;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_67 += B0(p,MHpm(gI1),MSd(gI2))*Conj(CpconjUSuconjHpmSd(gO2,
            gI1,gI2))*CpconjUSuconjHpmSd(gO1,gI1,gI2);
      }
      tmp_66 += tmp_67;
   }
   result += tmp_66;
   std::complex<double> tmp_68;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_69;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_69 += B0(p,MSu(gI1),MAh(gI2))*Conj(CpconjUSuSuAh(gO2,gI1,gI2
            ))*CpconjUSuSuAh(gO1,gI1,gI2);
      }
      tmp_68 += tmp_69;
   }
   result += tmp_68;
   std::complex<double> tmp_70;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_71;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_71 += B0(p,MSu(gI1),Mhh(gI2))*Conj(CpconjUSuSuhh(gO2,gI1,gI2
            ))*CpconjUSuSuhh(gO1,gI1,gI2);
      }
      tmp_70 += tmp_71;
   }
   result += tmp_70;
   std::complex<double> tmp_72;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_72 += Conj(CpconjUSuconjVWmSd(gO2,gI2))*CpconjUSuconjVWmSd(gO1,gI2
         )*F0(p,MSd(gI2),MVWm);
   }
   result += tmp_72;
   std::complex<double> tmp_73;
   std::complex<double> tmp_74;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_74 += Conj(CpconjUSuVGSu(gO2,gI2))*CpconjUSuVGSu(gO1,gI2)*F0(p,MSu
         (gI2),0);
   }
   tmp_73 += tmp_74;
   result += (1.3333333333333333) * tmp_73;
   std::complex<double> tmp_75;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_75 += Conj(CpconjUSuVPSu(gO2,gI2))*CpconjUSuVPSu(gO1,gI2)*F0(p,MSu
         (gI2),0);
   }
   result += tmp_75;
   std::complex<double> tmp_76;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_76 += Conj(CpconjUSuVZSu(gO2,gI2))*CpconjUSuVZSu(gO1,gI2)*F0(p,MSu
         (gI2),MVZ);
   }
   result += tmp_76;
   std::complex<double> tmp_77;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_77 += (Conj(CpconjUSuFuChiPL(gO2,1,gI2))*CpconjUSuFuChiPL(gO1,1,
         gI2) + Conj(CpconjUSuFuChiPR(gO2,1,gI2))*CpconjUSuFuChiPR(gO1,1,gI2))*G0(
         p,MFu,MChi(gI2));
   }
   result += tmp_77;
   std::complex<double> tmp_78;
   std::complex<double> tmp_79;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_79 += B0(p,MCha(gI1),MFd)*(Conj(CpconjUSubarChaFdPR(gO2,gI1,1))*
         CpconjUSubarChaFdPL(gO1,gI1,1) + Conj(CpconjUSubarChaFdPL(gO2,gI1,1))*
         CpconjUSubarChaFdPR(gO1,gI1,1))*MCha(gI1);
   }
   tmp_78 += tmp_79;
   result += (-2*MFd) * tmp_78;
   std::complex<double> tmp_80;
   std::complex<double> tmp_81;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_81 += B0(p,MFu,MChi(gI2))*(Conj(CpconjUSuFuChiPR(gO2,1,gI2))*
         CpconjUSuFuChiPL(gO1,1,gI2) + Conj(CpconjUSuFuChiPL(gO2,1,gI2))*
         CpconjUSuFuChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_80 += tmp_81;
   result += (-2*MFu) * tmp_80;
   result += -2.6666666666666665*MFu*MGlu*B0(p,MGlu,MFu)*(Conj(CpconjUSuGluFuPR
      (gO2,1,1))*CpconjUSuGluFuPL(gO1,1,1) + Conj(CpconjUSuGluFuPL(gO2,1,1))*
      CpconjUSuGluFuPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Se(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSeconjUSeconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSeconjUSeconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSeconjUSeconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSeconjUSeconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSeconjUSeVZVZ(gO1,gO2);
   result += Conj(CpconjUSeVWmSveL(gO2))*CpconjUSeVWmSveL(gO1)*F0(p,MSveL,MVWm)
      ;
   std::complex<double> tmp_82;
   std::complex<double> tmp_83;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_83 += A0(MAh(gI1))*CpUSeconjUSeAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_82 += tmp_83;
   result += (-0.5) * tmp_82;
   std::complex<double> tmp_84;
   std::complex<double> tmp_85;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_85 += A0(MHpm(gI1))*CpUSeconjUSeconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_84 += tmp_85;
   result += (-1) * tmp_84;
   std::complex<double> tmp_86;
   std::complex<double> tmp_87;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_87 += A0(MSb(gI1))*CpUSeconjUSeconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_86 += tmp_87;
   result += (-3) * tmp_86;
   std::complex<double> tmp_88;
   std::complex<double> tmp_89;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_89 += A0(MSc(gI1))*CpUSeconjUSeconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_88 += tmp_89;
   result += (-3) * tmp_88;
   std::complex<double> tmp_90;
   std::complex<double> tmp_91;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_91 += A0(MSd(gI1))*CpUSeconjUSeconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_90 += tmp_91;
   result += (-3) * tmp_90;
   std::complex<double> tmp_92;
   std::complex<double> tmp_93;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_93 += A0(MSe(gI1))*CpUSeconjUSeconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_92 += tmp_93;
   result += (-1) * tmp_92;
   std::complex<double> tmp_94;
   std::complex<double> tmp_95;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_95 += A0(MSm(gI1))*CpUSeconjUSeconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_94 += tmp_95;
   result += (-1) * tmp_94;
   std::complex<double> tmp_96;
   std::complex<double> tmp_97;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_97 += A0(MSs(gI1))*CpUSeconjUSeconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_96 += tmp_97;
   result += (-3) * tmp_96;
   std::complex<double> tmp_98;
   std::complex<double> tmp_99;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_99 += A0(MStau(gI1))*CpUSeconjUSeconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_98 += tmp_99;
   result += (-1) * tmp_98;
   std::complex<double> tmp_100;
   std::complex<double> tmp_101;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_101 += A0(MSt(gI1))*CpUSeconjUSeconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_100 += tmp_101;
   result += (-3) * tmp_100;
   std::complex<double> tmp_102;
   std::complex<double> tmp_103;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_103 += A0(MSu(gI1))*CpUSeconjUSeconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_102 += tmp_103;
   result += (-3) * tmp_102;
   std::complex<double> tmp_104;
   std::complex<double> tmp_105;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_105 += A0(Mhh(gI1))*CpUSeconjUSehhhh(gO1,gO2,gI1,gI1);
   }
   tmp_104 += tmp_105;
   result += (-0.5) * tmp_104;
   std::complex<double> tmp_106;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_107;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_107 += B0(p,MSe(gI1),MAh(gI2))*Conj(CpconjUSeSeAh(gO2,gI1,
            gI2))*CpconjUSeSeAh(gO1,gI1,gI2);
      }
      tmp_106 += tmp_107;
   }
   result += tmp_106;
   std::complex<double> tmp_108;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_109;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_109 += B0(p,MSe(gI1),Mhh(gI2))*Conj(CpconjUSeSehh(gO2,gI1,
            gI2))*CpconjUSeSehh(gO1,gI1,gI2);
      }
      tmp_108 += tmp_109;
   }
   result += tmp_108;
   std::complex<double> tmp_110;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_110 += B0(p,MSveL,MHpm(gI2))*Conj(CpconjUSeSveLHpm(gO2,gI2))*
         CpconjUSeSveLHpm(gO1,gI2);
   }
   result += tmp_110;
   std::complex<double> tmp_111;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_111 += Conj(CpconjUSeVPSe(gO2,gI2))*CpconjUSeVPSe(gO1,gI2)*F0(p,
         MSe(gI2),0);
   }
   result += tmp_111;
   std::complex<double> tmp_112;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_112 += Conj(CpconjUSeVZSe(gO2,gI2))*CpconjUSeVZSe(gO1,gI2)*F0(p,
         MSe(gI2),MVZ);
   }
   result += tmp_112;
   std::complex<double> tmp_113;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_113 += (Conj(CpconjUSeFveChaPL(gO2,gI2))*CpconjUSeFveChaPL(gO1,gI2
         ) + Conj(CpconjUSeFveChaPR(gO2,gI2))*CpconjUSeFveChaPR(gO1,gI2))*G0(p,
         MFve,MCha(gI2));
   }
   result += tmp_113;
   std::complex<double> tmp_114;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_114 += (Conj(CpconjUSeFeChiPL(gO2,gI2))*CpconjUSeFeChiPL(gO1,gI2)
         + Conj(CpconjUSeFeChiPR(gO2,gI2))*CpconjUSeFeChiPR(gO1,gI2))*G0(p,MFe,
         MChi(gI2));
   }
   result += tmp_114;
   std::complex<double> tmp_115;
   std::complex<double> tmp_116;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_116 += B0(p,MFe,MChi(gI2))*(Conj(CpconjUSeFeChiPR(gO2,gI2))*
         CpconjUSeFeChiPL(gO1,gI2) + Conj(CpconjUSeFeChiPL(gO2,gI2))*
         CpconjUSeFeChiPR(gO1,gI2))*MChi(gI2);
   }
   tmp_115 += tmp_116;
   result += (-2*MFe) * tmp_115;
   std::complex<double> tmp_117;
   std::complex<double> tmp_118;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_118 += B0(p,MFve,MCha(gI2))*(Conj(CpconjUSeFveChaPR(gO2,gI2))*
         CpconjUSeFveChaPL(gO1,gI2) + Conj(CpconjUSeFveChaPL(gO2,gI2))*
         CpconjUSeFveChaPR(gO1,gI2))*MCha(gI2);
   }
   tmp_117 += tmp_118;
   result += (-2*MFve) * tmp_117;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Sm(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSmconjUSmconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSmconjUSmconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSmconjUSmconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSmconjUSmconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSmconjUSmVZVZ(gO1,gO2);
   result += Conj(CpconjUSmVWmSvmL(gO2))*CpconjUSmVWmSvmL(gO1)*F0(p,MSvmL,MVWm)
      ;
   std::complex<double> tmp_119;
   std::complex<double> tmp_120;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_120 += A0(MAh(gI1))*CpUSmconjUSmAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_119 += tmp_120;
   result += (-0.5) * tmp_119;
   std::complex<double> tmp_121;
   std::complex<double> tmp_122;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_122 += A0(MHpm(gI1))*CpUSmconjUSmconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_121 += tmp_122;
   result += (-1) * tmp_121;
   std::complex<double> tmp_123;
   std::complex<double> tmp_124;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_124 += A0(MSb(gI1))*CpUSmconjUSmconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_123 += tmp_124;
   result += (-3) * tmp_123;
   std::complex<double> tmp_125;
   std::complex<double> tmp_126;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_126 += A0(MSc(gI1))*CpUSmconjUSmconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_125 += tmp_126;
   result += (-3) * tmp_125;
   std::complex<double> tmp_127;
   std::complex<double> tmp_128;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_128 += A0(MSd(gI1))*CpUSmconjUSmconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_127 += tmp_128;
   result += (-3) * tmp_127;
   std::complex<double> tmp_129;
   std::complex<double> tmp_130;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_130 += A0(MSe(gI1))*CpUSmconjUSmconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_129 += tmp_130;
   result += (-1) * tmp_129;
   std::complex<double> tmp_131;
   std::complex<double> tmp_132;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_132 += A0(MSm(gI1))*CpUSmconjUSmconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_131 += tmp_132;
   result += (-1) * tmp_131;
   std::complex<double> tmp_133;
   std::complex<double> tmp_134;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_134 += A0(MSs(gI1))*CpUSmconjUSmconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_133 += tmp_134;
   result += (-3) * tmp_133;
   std::complex<double> tmp_135;
   std::complex<double> tmp_136;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_136 += A0(MStau(gI1))*CpUSmconjUSmconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_135 += tmp_136;
   result += (-1) * tmp_135;
   std::complex<double> tmp_137;
   std::complex<double> tmp_138;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_138 += A0(MSt(gI1))*CpUSmconjUSmconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_137 += tmp_138;
   result += (-3) * tmp_137;
   std::complex<double> tmp_139;
   std::complex<double> tmp_140;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_140 += A0(MSu(gI1))*CpUSmconjUSmconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_139 += tmp_140;
   result += (-3) * tmp_139;
   std::complex<double> tmp_141;
   std::complex<double> tmp_142;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_142 += A0(Mhh(gI1))*CpUSmconjUSmhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_141 += tmp_142;
   result += (-0.5) * tmp_141;
   std::complex<double> tmp_143;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_144;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_144 += B0(p,MSm(gI1),MAh(gI2))*Conj(CpconjUSmSmAh(gO2,gI1,
            gI2))*CpconjUSmSmAh(gO1,gI1,gI2);
      }
      tmp_143 += tmp_144;
   }
   result += tmp_143;
   std::complex<double> tmp_145;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_146;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_146 += B0(p,MSm(gI1),Mhh(gI2))*Conj(CpconjUSmSmhh(gO2,gI1,
            gI2))*CpconjUSmSmhh(gO1,gI1,gI2);
      }
      tmp_145 += tmp_146;
   }
   result += tmp_145;
   std::complex<double> tmp_147;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_147 += B0(p,MSvmL,MHpm(gI2))*Conj(CpconjUSmSvmLHpm(gO2,gI2))*
         CpconjUSmSvmLHpm(gO1,gI2);
   }
   result += tmp_147;
   std::complex<double> tmp_148;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_148 += Conj(CpconjUSmVPSm(gO2,gI2))*CpconjUSmVPSm(gO1,gI2)*F0(p,
         MSm(gI2),0);
   }
   result += tmp_148;
   std::complex<double> tmp_149;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_149 += Conj(CpconjUSmVZSm(gO2,gI2))*CpconjUSmVZSm(gO1,gI2)*F0(p,
         MSm(gI2),MVZ);
   }
   result += tmp_149;
   std::complex<double> tmp_150;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_150 += (Conj(CpconjUSmFvmChaPL(gO2,gI2))*CpconjUSmFvmChaPL(gO1,gI2
         ) + Conj(CpconjUSmFvmChaPR(gO2,gI2))*CpconjUSmFvmChaPR(gO1,gI2))*G0(p,
         MFvm,MCha(gI2));
   }
   result += tmp_150;
   std::complex<double> tmp_151;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_151 += (Conj(CpconjUSmFmChiPL(gO2,gI2))*CpconjUSmFmChiPL(gO1,gI2)
         + Conj(CpconjUSmFmChiPR(gO2,gI2))*CpconjUSmFmChiPR(gO1,gI2))*G0(p,MFm,
         MChi(gI2));
   }
   result += tmp_151;
   std::complex<double> tmp_152;
   std::complex<double> tmp_153;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_153 += B0(p,MFm,MChi(gI2))*(Conj(CpconjUSmFmChiPR(gO2,gI2))*
         CpconjUSmFmChiPL(gO1,gI2) + Conj(CpconjUSmFmChiPL(gO2,gI2))*
         CpconjUSmFmChiPR(gO1,gI2))*MChi(gI2);
   }
   tmp_152 += tmp_153;
   result += (-2*MFm) * tmp_152;
   std::complex<double> tmp_154;
   std::complex<double> tmp_155;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_155 += B0(p,MFvm,MCha(gI2))*(Conj(CpconjUSmFvmChaPR(gO2,gI2))*
         CpconjUSmFvmChaPL(gO1,gI2) + Conj(CpconjUSmFvmChaPL(gO2,gI2))*
         CpconjUSmFvmChaPR(gO1,gI2))*MCha(gI2);
   }
   tmp_154 += tmp_155;
   result += (-2*MFvm) * tmp_154;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Stau(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUStauconjUStauconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUStauconjUStauconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUStauconjUStauconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUStauconjUStauconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUStauconjUStauVZVZ(gO1,gO2);
   result += Conj(CpconjUStauVWmSvtL(gO2))*CpconjUStauVWmSvtL(gO1)*F0(p,MSvtL,
      MVWm);
   std::complex<double> tmp_156;
   std::complex<double> tmp_157;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_157 += A0(MAh(gI1))*CpUStauconjUStauAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_156 += tmp_157;
   result += (-0.5) * tmp_156;
   std::complex<double> tmp_158;
   std::complex<double> tmp_159;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_159 += A0(MHpm(gI1))*CpUStauconjUStauconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_158 += tmp_159;
   result += (-1) * tmp_158;
   std::complex<double> tmp_160;
   std::complex<double> tmp_161;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_161 += A0(MSb(gI1))*CpUStauconjUStauconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_160 += tmp_161;
   result += (-3) * tmp_160;
   std::complex<double> tmp_162;
   std::complex<double> tmp_163;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_163 += A0(MSc(gI1))*CpUStauconjUStauconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_162 += tmp_163;
   result += (-3) * tmp_162;
   std::complex<double> tmp_164;
   std::complex<double> tmp_165;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_165 += A0(MSd(gI1))*CpUStauconjUStauconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_164 += tmp_165;
   result += (-3) * tmp_164;
   std::complex<double> tmp_166;
   std::complex<double> tmp_167;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_167 += A0(MSe(gI1))*CpUStauconjUStauconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_166 += tmp_167;
   result += (-1) * tmp_166;
   std::complex<double> tmp_168;
   std::complex<double> tmp_169;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_169 += A0(MSm(gI1))*CpUStauconjUStauconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_168 += tmp_169;
   result += (-1) * tmp_168;
   std::complex<double> tmp_170;
   std::complex<double> tmp_171;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_171 += A0(MSs(gI1))*CpUStauconjUStauconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_170 += tmp_171;
   result += (-3) * tmp_170;
   std::complex<double> tmp_172;
   std::complex<double> tmp_173;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_173 += A0(MStau(gI1))*CpUStauconjUStauconjStauStau(gO1,gO2,gI1,gI1
         );
   }
   tmp_172 += tmp_173;
   result += (-1) * tmp_172;
   std::complex<double> tmp_174;
   std::complex<double> tmp_175;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_175 += A0(MSt(gI1))*CpUStauconjUStauconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_174 += tmp_175;
   result += (-3) * tmp_174;
   std::complex<double> tmp_176;
   std::complex<double> tmp_177;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_177 += A0(MSu(gI1))*CpUStauconjUStauconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_176 += tmp_177;
   result += (-3) * tmp_176;
   std::complex<double> tmp_178;
   std::complex<double> tmp_179;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_179 += A0(Mhh(gI1))*CpUStauconjUStauhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_178 += tmp_179;
   result += (-0.5) * tmp_178;
   std::complex<double> tmp_180;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_181;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_181 += B0(p,MStau(gI1),MAh(gI2))*Conj(CpconjUStauStauAh(gO2,
            gI1,gI2))*CpconjUStauStauAh(gO1,gI1,gI2);
      }
      tmp_180 += tmp_181;
   }
   result += tmp_180;
   std::complex<double> tmp_182;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_183;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_183 += B0(p,MStau(gI1),Mhh(gI2))*Conj(CpconjUStauStauhh(gO2,
            gI1,gI2))*CpconjUStauStauhh(gO1,gI1,gI2);
      }
      tmp_182 += tmp_183;
   }
   result += tmp_182;
   std::complex<double> tmp_184;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_184 += B0(p,MSvtL,MHpm(gI2))*Conj(CpconjUStauSvtLHpm(gO2,gI2))*
         CpconjUStauSvtLHpm(gO1,gI2);
   }
   result += tmp_184;
   std::complex<double> tmp_185;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_185 += Conj(CpconjUStauVPStau(gO2,gI2))*CpconjUStauVPStau(gO1,gI2)
         *F0(p,MStau(gI2),0);
   }
   result += tmp_185;
   std::complex<double> tmp_186;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_186 += Conj(CpconjUStauVZStau(gO2,gI2))*CpconjUStauVZStau(gO1,gI2)
         *F0(p,MStau(gI2),MVZ);
   }
   result += tmp_186;
   std::complex<double> tmp_187;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_187 += (Conj(CpconjUStauFvtChaPL(gO2,gI2))*CpconjUStauFvtChaPL(gO1
         ,gI2) + Conj(CpconjUStauFvtChaPR(gO2,gI2))*CpconjUStauFvtChaPR(gO1,gI2))*
         G0(p,MFvt,MCha(gI2));
   }
   result += tmp_187;
   std::complex<double> tmp_188;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_188 += (Conj(CpconjUStauFtauChiPL(gO2,gI2))*CpconjUStauFtauChiPL(
         gO1,gI2) + Conj(CpconjUStauFtauChiPR(gO2,gI2))*CpconjUStauFtauChiPR(gO1,
         gI2))*G0(p,MFtau,MChi(gI2));
   }
   result += tmp_188;
   std::complex<double> tmp_189;
   std::complex<double> tmp_190;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_190 += B0(p,MFtau,MChi(gI2))*(Conj(CpconjUStauFtauChiPR(gO2,gI2))*
         CpconjUStauFtauChiPL(gO1,gI2) + Conj(CpconjUStauFtauChiPL(gO2,gI2))*
         CpconjUStauFtauChiPR(gO1,gI2))*MChi(gI2);
   }
   tmp_189 += tmp_190;
   result += (-2*MFtau) * tmp_189;
   std::complex<double> tmp_191;
   std::complex<double> tmp_192;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_192 += B0(p,MFvt,MCha(gI2))*(Conj(CpconjUStauFvtChaPR(gO2,gI2))*
         CpconjUStauFvtChaPL(gO1,gI2) + Conj(CpconjUStauFvtChaPL(gO2,gI2))*
         CpconjUStauFvtChaPR(gO1,gI2))*MCha(gI2);
   }
   tmp_191 += tmp_192;
   result += (-2*MFvt) * tmp_191;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ss(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSsconjUSsconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSsconjUSsconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSsconjUSsconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSsconjUSsconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSsconjUSsVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUSsGluFsPL(gO2,1,1))*
      CpconjUSsGluFsPL(gO1,1,1) + Conj(CpconjUSsGluFsPR(gO2,1,1))*CpconjUSsGluFsPR
      (gO1,1,1))*G0(p,MGlu,MFs);
   std::complex<double> tmp_193;
   std::complex<double> tmp_194;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_194 += A0(MAh(gI1))*CpUSsconjUSsAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_193 += tmp_194;
   result += (-0.5) * tmp_193;
   std::complex<double> tmp_195;
   std::complex<double> tmp_196;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_196 += A0(MHpm(gI1))*CpUSsconjUSsconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_195 += tmp_196;
   result += (-1) * tmp_195;
   std::complex<double> tmp_197;
   std::complex<double> tmp_198;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_198 += A0(MSb(gI1))*CpUSsconjUSsconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_197 += tmp_198;
   result += (-1) * tmp_197;
   std::complex<double> tmp_199;
   std::complex<double> tmp_200;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_200 += A0(MSc(gI1))*CpUSsconjUSsconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_199 += tmp_200;
   result += (-1) * tmp_199;
   std::complex<double> tmp_201;
   std::complex<double> tmp_202;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_202 += A0(MSd(gI1))*CpUSsconjUSsconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_201 += tmp_202;
   result += (-1) * tmp_201;
   std::complex<double> tmp_203;
   std::complex<double> tmp_204;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_204 += A0(MSe(gI1))*CpUSsconjUSsconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_203 += tmp_204;
   result += (-1) * tmp_203;
   std::complex<double> tmp_205;
   std::complex<double> tmp_206;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_206 += A0(MSm(gI1))*CpUSsconjUSsconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_205 += tmp_206;
   result += (-1) * tmp_205;
   std::complex<double> tmp_207;
   std::complex<double> tmp_208;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_208 += A0(MSs(gI1))*CpUSsconjUSsconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_207 += tmp_208;
   result += (-1) * tmp_207;
   std::complex<double> tmp_209;
   std::complex<double> tmp_210;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_210 += A0(MStau(gI1))*CpUSsconjUSsconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_209 += tmp_210;
   result += (-1) * tmp_209;
   std::complex<double> tmp_211;
   std::complex<double> tmp_212;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_212 += A0(MSt(gI1))*CpUSsconjUSsconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_211 += tmp_212;
   result += (-1) * tmp_211;
   std::complex<double> tmp_213;
   std::complex<double> tmp_214;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_214 += A0(MSu(gI1))*CpUSsconjUSsconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_213 += tmp_214;
   result += (-1) * tmp_213;
   std::complex<double> tmp_215;
   std::complex<double> tmp_216;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_216 += A0(Mhh(gI1))*CpUSsconjUSshhhh(gO1,gO2,gI1,gI1);
   }
   tmp_215 += tmp_216;
   result += (-0.5) * tmp_215;
   std::complex<double> tmp_217;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_218;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_218 += B0(p,MSc(gI1),MHpm(gI2))*Conj(CpconjUSsScHpm(gO2,gI1,
            gI2))*CpconjUSsScHpm(gO1,gI1,gI2);
      }
      tmp_217 += tmp_218;
   }
   result += tmp_217;
   std::complex<double> tmp_219;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_220;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_220 += B0(p,MSs(gI1),MAh(gI2))*Conj(CpconjUSsSsAh(gO2,gI1,
            gI2))*CpconjUSsSsAh(gO1,gI1,gI2);
      }
      tmp_219 += tmp_220;
   }
   result += tmp_219;
   std::complex<double> tmp_221;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_222;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_222 += B0(p,MSs(gI1),Mhh(gI2))*Conj(CpconjUSsSshh(gO2,gI1,
            gI2))*CpconjUSsSshh(gO1,gI1,gI2);
      }
      tmp_221 += tmp_222;
   }
   result += tmp_221;
   std::complex<double> tmp_223;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_223 += Conj(CpconjUSsVWmSc(gO2,gI2))*CpconjUSsVWmSc(gO1,gI2)*F0(p,
         MSc(gI2),MVWm);
   }
   result += tmp_223;
   std::complex<double> tmp_224;
   std::complex<double> tmp_225;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_225 += Conj(CpconjUSsVGSs(gO2,gI2))*CpconjUSsVGSs(gO1,gI2)*F0(p,
         MSs(gI2),0);
   }
   tmp_224 += tmp_225;
   result += (1.3333333333333333) * tmp_224;
   std::complex<double> tmp_226;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_226 += Conj(CpconjUSsVPSs(gO2,gI2))*CpconjUSsVPSs(gO1,gI2)*F0(p,
         MSs(gI2),0);
   }
   result += tmp_226;
   std::complex<double> tmp_227;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_227 += Conj(CpconjUSsVZSs(gO2,gI2))*CpconjUSsVZSs(gO1,gI2)*F0(p,
         MSs(gI2),MVZ);
   }
   result += tmp_227;
   std::complex<double> tmp_228;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_228 += (Conj(CpconjUSsFcChaPL(gO2,1,gI2))*CpconjUSsFcChaPL(gO1,1,
         gI2) + Conj(CpconjUSsFcChaPR(gO2,1,gI2))*CpconjUSsFcChaPR(gO1,1,gI2))*G0(
         p,MFc,MCha(gI2));
   }
   result += tmp_228;
   std::complex<double> tmp_229;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_229 += (Conj(CpconjUSsFsChiPL(gO2,1,gI2))*CpconjUSsFsChiPL(gO1,1,
         gI2) + Conj(CpconjUSsFsChiPR(gO2,1,gI2))*CpconjUSsFsChiPR(gO1,1,gI2))*G0(
         p,MFs,MChi(gI2));
   }
   result += tmp_229;
   std::complex<double> tmp_230;
   std::complex<double> tmp_231;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_231 += B0(p,MFc,MCha(gI2))*(Conj(CpconjUSsFcChaPR(gO2,1,gI2))*
         CpconjUSsFcChaPL(gO1,1,gI2) + Conj(CpconjUSsFcChaPL(gO2,1,gI2))*
         CpconjUSsFcChaPR(gO1,1,gI2))*MCha(gI2);
   }
   tmp_230 += tmp_231;
   result += (-2*MFc) * tmp_230;
   std::complex<double> tmp_232;
   std::complex<double> tmp_233;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_233 += B0(p,MFs,MChi(gI2))*(Conj(CpconjUSsFsChiPR(gO2,1,gI2))*
         CpconjUSsFsChiPL(gO1,1,gI2) + Conj(CpconjUSsFsChiPL(gO2,1,gI2))*
         CpconjUSsFsChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_232 += tmp_233;
   result += (-2*MFs) * tmp_232;
   result += -2.6666666666666665*MFs*MGlu*B0(p,MGlu,MFs)*(Conj(CpconjUSsGluFsPR
      (gO2,1,1))*CpconjUSsGluFsPL(gO1,1,1) + Conj(CpconjUSsGluFsPL(gO2,1,1))*
      CpconjUSsGluFsPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Sc(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUScconjUScconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUScconjUScconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUScconjUScconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUScconjUScconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUScconjUScVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUScGluFcPL(gO2,1,1))*
      CpconjUScGluFcPL(gO1,1,1) + Conj(CpconjUScGluFcPR(gO2,1,1))*CpconjUScGluFcPR
      (gO1,1,1))*G0(p,MGlu,MFc);
   std::complex<double> tmp_234;
   std::complex<double> tmp_235;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_235 += A0(MAh(gI1))*CpUScconjUScAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_234 += tmp_235;
   result += (-0.5) * tmp_234;
   std::complex<double> tmp_236;
   std::complex<double> tmp_237;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_237 += A0(MHpm(gI1))*CpUScconjUScconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_236 += tmp_237;
   result += (-1) * tmp_236;
   std::complex<double> tmp_238;
   std::complex<double> tmp_239;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_239 += A0(MSb(gI1))*CpUScconjUScconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_238 += tmp_239;
   result += (-1) * tmp_238;
   std::complex<double> tmp_240;
   std::complex<double> tmp_241;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_241 += A0(MSc(gI1))*CpUScconjUScconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_240 += tmp_241;
   result += (-1) * tmp_240;
   std::complex<double> tmp_242;
   std::complex<double> tmp_243;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_243 += A0(MSd(gI1))*CpUScconjUScconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_242 += tmp_243;
   result += (-1) * tmp_242;
   std::complex<double> tmp_244;
   std::complex<double> tmp_245;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_245 += A0(MSe(gI1))*CpUScconjUScconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_244 += tmp_245;
   result += (-1) * tmp_244;
   std::complex<double> tmp_246;
   std::complex<double> tmp_247;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_247 += A0(MSm(gI1))*CpUScconjUScconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_246 += tmp_247;
   result += (-1) * tmp_246;
   std::complex<double> tmp_248;
   std::complex<double> tmp_249;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_249 += A0(MSs(gI1))*CpUScconjUScconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_248 += tmp_249;
   result += (-1) * tmp_248;
   std::complex<double> tmp_250;
   std::complex<double> tmp_251;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_251 += A0(MStau(gI1))*CpUScconjUScconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_250 += tmp_251;
   result += (-1) * tmp_250;
   std::complex<double> tmp_252;
   std::complex<double> tmp_253;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_253 += A0(MSt(gI1))*CpUScconjUScconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_252 += tmp_253;
   result += (-1) * tmp_252;
   std::complex<double> tmp_254;
   std::complex<double> tmp_255;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_255 += A0(MSu(gI1))*CpUScconjUScconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_254 += tmp_255;
   result += (-1) * tmp_254;
   std::complex<double> tmp_256;
   std::complex<double> tmp_257;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_257 += A0(Mhh(gI1))*CpUScconjUSchhhh(gO1,gO2,gI1,gI1);
   }
   tmp_256 += tmp_257;
   result += (-0.5) * tmp_256;
   std::complex<double> tmp_258;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_258 += (Conj(CpconjUScbarChaFsPL(gO2,gI1,1))*CpconjUScbarChaFsPL(
         gO1,gI1,1) + Conj(CpconjUScbarChaFsPR(gO2,gI1,1))*CpconjUScbarChaFsPR(gO1
         ,gI1,1))*G0(p,MCha(gI1),MFs);
   }
   result += tmp_258;
   std::complex<double> tmp_259;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_260;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_260 += B0(p,MHpm(gI1),MSs(gI2))*Conj(CpconjUScconjHpmSs(gO2,
            gI1,gI2))*CpconjUScconjHpmSs(gO1,gI1,gI2);
      }
      tmp_259 += tmp_260;
   }
   result += tmp_259;
   std::complex<double> tmp_261;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_262;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_262 += B0(p,MSc(gI1),MAh(gI2))*Conj(CpconjUScScAh(gO2,gI1,
            gI2))*CpconjUScScAh(gO1,gI1,gI2);
      }
      tmp_261 += tmp_262;
   }
   result += tmp_261;
   std::complex<double> tmp_263;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_264;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_264 += B0(p,MSc(gI1),Mhh(gI2))*Conj(CpconjUScSchh(gO2,gI1,
            gI2))*CpconjUScSchh(gO1,gI1,gI2);
      }
      tmp_263 += tmp_264;
   }
   result += tmp_263;
   std::complex<double> tmp_265;
   std::complex<double> tmp_266;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_266 += Conj(CpconjUScVGSc(gO2,gI2))*CpconjUScVGSc(gO1,gI2)*F0(p,
         MSc(gI2),0);
   }
   tmp_265 += tmp_266;
   result += (1.3333333333333333) * tmp_265;
   std::complex<double> tmp_267;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_267 += Conj(CpconjUScVPSc(gO2,gI2))*CpconjUScVPSc(gO1,gI2)*F0(p,
         MSc(gI2),0);
   }
   result += tmp_267;
   std::complex<double> tmp_268;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_268 += Conj(CpconjUScVZSc(gO2,gI2))*CpconjUScVZSc(gO1,gI2)*F0(p,
         MSc(gI2),MVZ);
   }
   result += tmp_268;
   std::complex<double> tmp_269;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_269 += Conj(CpconjUScconjVWmSs(gO2,gI2))*CpconjUScconjVWmSs(gO1,
         gI2)*F0(p,MSs(gI2),MVWm);
   }
   result += tmp_269;
   std::complex<double> tmp_270;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_270 += (Conj(CpconjUScFcChiPL(gO2,1,gI2))*CpconjUScFcChiPL(gO1,1,
         gI2) + Conj(CpconjUScFcChiPR(gO2,1,gI2))*CpconjUScFcChiPR(gO1,1,gI2))*G0(
         p,MFc,MChi(gI2));
   }
   result += tmp_270;
   std::complex<double> tmp_271;
   std::complex<double> tmp_272;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_272 += B0(p,MFc,MChi(gI2))*(Conj(CpconjUScFcChiPR(gO2,1,gI2))*
         CpconjUScFcChiPL(gO1,1,gI2) + Conj(CpconjUScFcChiPL(gO2,1,gI2))*
         CpconjUScFcChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_271 += tmp_272;
   result += (-2*MFc) * tmp_271;
   std::complex<double> tmp_273;
   std::complex<double> tmp_274;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_274 += B0(p,MCha(gI1),MFs)*(Conj(CpconjUScbarChaFsPR(gO2,gI1,1))*
         CpconjUScbarChaFsPL(gO1,gI1,1) + Conj(CpconjUScbarChaFsPL(gO2,gI1,1))*
         CpconjUScbarChaFsPR(gO1,gI1,1))*MCha(gI1);
   }
   tmp_273 += tmp_274;
   result += (-2*MFs) * tmp_273;
   result += -2.6666666666666665*MFc*MGlu*B0(p,MGlu,MFc)*(Conj(CpconjUScGluFcPR
      (gO2,1,1))*CpconjUScGluFcPL(gO1,1,1) + Conj(CpconjUScGluFcPL(gO2,1,1))*
      CpconjUScGluFcPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Sb(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUSbconjUSbconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUSbconjUSbconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUSbconjUSbconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUSbconjUSbconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSbconjUSbVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUSbGluFbPL(gO2,1,1))*
      CpconjUSbGluFbPL(gO1,1,1) + Conj(CpconjUSbGluFbPR(gO2,1,1))*CpconjUSbGluFbPR
      (gO1,1,1))*G0(p,MGlu,MFb);
   std::complex<double> tmp_275;
   std::complex<double> tmp_276;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_276 += A0(MAh(gI1))*CpUSbconjUSbAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_275 += tmp_276;
   result += (-0.5) * tmp_275;
   std::complex<double> tmp_277;
   std::complex<double> tmp_278;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_278 += A0(MHpm(gI1))*CpUSbconjUSbconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_277 += tmp_278;
   result += (-1) * tmp_277;
   std::complex<double> tmp_279;
   std::complex<double> tmp_280;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_280 += A0(MSb(gI1))*CpUSbconjUSbconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_279 += tmp_280;
   result += (-1) * tmp_279;
   std::complex<double> tmp_281;
   std::complex<double> tmp_282;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_282 += A0(MSc(gI1))*CpUSbconjUSbconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_281 += tmp_282;
   result += (-1) * tmp_281;
   std::complex<double> tmp_283;
   std::complex<double> tmp_284;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_284 += A0(MSd(gI1))*CpUSbconjUSbconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_283 += tmp_284;
   result += (-1) * tmp_283;
   std::complex<double> tmp_285;
   std::complex<double> tmp_286;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_286 += A0(MSe(gI1))*CpUSbconjUSbconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_285 += tmp_286;
   result += (-1) * tmp_285;
   std::complex<double> tmp_287;
   std::complex<double> tmp_288;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_288 += A0(MSm(gI1))*CpUSbconjUSbconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_287 += tmp_288;
   result += (-1) * tmp_287;
   std::complex<double> tmp_289;
   std::complex<double> tmp_290;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_290 += A0(MSs(gI1))*CpUSbconjUSbconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_289 += tmp_290;
   result += (-1) * tmp_289;
   std::complex<double> tmp_291;
   std::complex<double> tmp_292;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_292 += A0(MStau(gI1))*CpUSbconjUSbconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_291 += tmp_292;
   result += (-1) * tmp_291;
   std::complex<double> tmp_293;
   std::complex<double> tmp_294;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_294 += A0(MSt(gI1))*CpUSbconjUSbconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_293 += tmp_294;
   result += (-1) * tmp_293;
   std::complex<double> tmp_295;
   std::complex<double> tmp_296;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_296 += A0(MSu(gI1))*CpUSbconjUSbconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_295 += tmp_296;
   result += (-1) * tmp_295;
   std::complex<double> tmp_297;
   std::complex<double> tmp_298;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_298 += A0(Mhh(gI1))*CpUSbconjUSbhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_297 += tmp_298;
   result += (-0.5) * tmp_297;
   std::complex<double> tmp_299;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_300;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_300 += B0(p,MSb(gI1),MAh(gI2))*Conj(CpconjUSbSbAh(gO2,gI1,
            gI2))*CpconjUSbSbAh(gO1,gI1,gI2);
      }
      tmp_299 += tmp_300;
   }
   result += tmp_299;
   std::complex<double> tmp_301;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_302;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_302 += B0(p,MSb(gI1),Mhh(gI2))*Conj(CpconjUSbSbhh(gO2,gI1,
            gI2))*CpconjUSbSbhh(gO1,gI1,gI2);
      }
      tmp_301 += tmp_302;
   }
   result += tmp_301;
   std::complex<double> tmp_303;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_304;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_304 += B0(p,MSt(gI1),MHpm(gI2))*Conj(CpconjUSbStHpm(gO2,gI1,
            gI2))*CpconjUSbStHpm(gO1,gI1,gI2);
      }
      tmp_303 += tmp_304;
   }
   result += tmp_303;
   std::complex<double> tmp_305;
   std::complex<double> tmp_306;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_306 += Conj(CpconjUSbVGSb(gO2,gI2))*CpconjUSbVGSb(gO1,gI2)*F0(p,
         MSb(gI2),0);
   }
   tmp_305 += tmp_306;
   result += (1.3333333333333333) * tmp_305;
   std::complex<double> tmp_307;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_307 += Conj(CpconjUSbVPSb(gO2,gI2))*CpconjUSbVPSb(gO1,gI2)*F0(p,
         MSb(gI2),0);
   }
   result += tmp_307;
   std::complex<double> tmp_308;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_308 += Conj(CpconjUSbVZSb(gO2,gI2))*CpconjUSbVZSb(gO1,gI2)*F0(p,
         MSb(gI2),MVZ);
   }
   result += tmp_308;
   std::complex<double> tmp_309;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_309 += Conj(CpconjUSbVWmSt(gO2,gI2))*CpconjUSbVWmSt(gO1,gI2)*F0(p,
         MSt(gI2),MVWm);
   }
   result += tmp_309;
   std::complex<double> tmp_310;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_310 += (Conj(CpconjUSbFtChaPL(gO2,1,gI2))*CpconjUSbFtChaPL(gO1,1,
         gI2) + Conj(CpconjUSbFtChaPR(gO2,1,gI2))*CpconjUSbFtChaPR(gO1,1,gI2))*G0(
         p,MFt,MCha(gI2));
   }
   result += tmp_310;
   std::complex<double> tmp_311;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_311 += (Conj(CpconjUSbFbChiPL(gO2,1,gI2))*CpconjUSbFbChiPL(gO1,1,
         gI2) + Conj(CpconjUSbFbChiPR(gO2,1,gI2))*CpconjUSbFbChiPR(gO1,1,gI2))*G0(
         p,MFb,MChi(gI2));
   }
   result += tmp_311;
   std::complex<double> tmp_312;
   std::complex<double> tmp_313;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_313 += B0(p,MFb,MChi(gI2))*(Conj(CpconjUSbFbChiPR(gO2,1,gI2))*
         CpconjUSbFbChiPL(gO1,1,gI2) + Conj(CpconjUSbFbChiPL(gO2,1,gI2))*
         CpconjUSbFbChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_312 += tmp_313;
   result += (-2*MFb) * tmp_312;
   std::complex<double> tmp_314;
   std::complex<double> tmp_315;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_315 += B0(p,MFt,MCha(gI2))*(Conj(CpconjUSbFtChaPR(gO2,1,gI2))*
         CpconjUSbFtChaPL(gO1,1,gI2) + Conj(CpconjUSbFtChaPL(gO2,1,gI2))*
         CpconjUSbFtChaPR(gO1,1,gI2))*MCha(gI2);
   }
   tmp_314 += tmp_315;
   result += (-2*MFt) * tmp_314;
   result += -2.6666666666666665*MFb*MGlu*B0(p,MGlu,MFb)*(Conj(CpconjUSbGluFbPR
      (gO2,1,1))*CpconjUSbGluFbPL(gO1,1,1) + Conj(CpconjUSbGluFbPL(gO2,1,1))*
      CpconjUSbGluFbPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_St(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpUStconjUStconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUStconjUStconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUStconjUStconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUStconjUStconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUStconjUStVZVZ(gO1,gO2);
   result += 1.3333333333333333*(Conj(CpconjUStGluFtPL(gO2,1,1))*
      CpconjUStGluFtPL(gO1,1,1) + Conj(CpconjUStGluFtPR(gO2,1,1))*CpconjUStGluFtPR
      (gO1,1,1))*G0(p,MGlu,MFt);
   std::complex<double> tmp_316;
   std::complex<double> tmp_317;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_317 += A0(MAh(gI1))*CpUStconjUStAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_316 += tmp_317;
   result += (-0.5) * tmp_316;
   std::complex<double> tmp_318;
   std::complex<double> tmp_319;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_319 += A0(MHpm(gI1))*CpUStconjUStconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_318 += tmp_319;
   result += (-1) * tmp_318;
   std::complex<double> tmp_320;
   std::complex<double> tmp_321;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_321 += A0(MSb(gI1))*CpUStconjUStconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_320 += tmp_321;
   result += (-1) * tmp_320;
   std::complex<double> tmp_322;
   std::complex<double> tmp_323;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_323 += A0(MSc(gI1))*CpUStconjUStconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_322 += tmp_323;
   result += (-1) * tmp_322;
   std::complex<double> tmp_324;
   std::complex<double> tmp_325;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_325 += A0(MSd(gI1))*CpUStconjUStconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_324 += tmp_325;
   result += (-1) * tmp_324;
   std::complex<double> tmp_326;
   std::complex<double> tmp_327;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_327 += A0(MSe(gI1))*CpUStconjUStconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_326 += tmp_327;
   result += (-1) * tmp_326;
   std::complex<double> tmp_328;
   std::complex<double> tmp_329;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_329 += A0(MSm(gI1))*CpUStconjUStconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_328 += tmp_329;
   result += (-1) * tmp_328;
   std::complex<double> tmp_330;
   std::complex<double> tmp_331;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_331 += A0(MSs(gI1))*CpUStconjUStconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_330 += tmp_331;
   result += (-1) * tmp_330;
   std::complex<double> tmp_332;
   std::complex<double> tmp_333;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_333 += A0(MStau(gI1))*CpUStconjUStconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_332 += tmp_333;
   result += (-1) * tmp_332;
   std::complex<double> tmp_334;
   std::complex<double> tmp_335;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_335 += A0(MSt(gI1))*CpUStconjUStconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_334 += tmp_335;
   result += (-1) * tmp_334;
   std::complex<double> tmp_336;
   std::complex<double> tmp_337;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_337 += A0(MSu(gI1))*CpUStconjUStconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_336 += tmp_337;
   result += (-1) * tmp_336;
   std::complex<double> tmp_338;
   std::complex<double> tmp_339;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_339 += A0(Mhh(gI1))*CpUStconjUSthhhh(gO1,gO2,gI1,gI1);
   }
   tmp_338 += tmp_339;
   result += (-0.5) * tmp_338;
   std::complex<double> tmp_340;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_340 += (Conj(CpconjUStbarChaFbPL(gO2,gI1,1))*CpconjUStbarChaFbPL(
         gO1,gI1,1) + Conj(CpconjUStbarChaFbPR(gO2,gI1,1))*CpconjUStbarChaFbPR(gO1
         ,gI1,1))*G0(p,MCha(gI1),MFb);
   }
   result += tmp_340;
   std::complex<double> tmp_341;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_342;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_342 += B0(p,MHpm(gI1),MSb(gI2))*Conj(CpconjUStconjHpmSb(gO2,
            gI1,gI2))*CpconjUStconjHpmSb(gO1,gI1,gI2);
      }
      tmp_341 += tmp_342;
   }
   result += tmp_341;
   std::complex<double> tmp_343;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_344;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_344 += B0(p,MSt(gI1),MAh(gI2))*Conj(CpconjUStStAh(gO2,gI1,
            gI2))*CpconjUStStAh(gO1,gI1,gI2);
      }
      tmp_343 += tmp_344;
   }
   result += tmp_343;
   std::complex<double> tmp_345;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_346;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_346 += B0(p,MSt(gI1),Mhh(gI2))*Conj(CpconjUStSthh(gO2,gI1,
            gI2))*CpconjUStSthh(gO1,gI1,gI2);
      }
      tmp_345 += tmp_346;
   }
   result += tmp_345;
   std::complex<double> tmp_347;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_347 += Conj(CpconjUStconjVWmSb(gO2,gI2))*CpconjUStconjVWmSb(gO1,
         gI2)*F0(p,MSb(gI2),MVWm);
   }
   result += tmp_347;
   std::complex<double> tmp_348;
   std::complex<double> tmp_349;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_349 += Conj(CpconjUStVGSt(gO2,gI2))*CpconjUStVGSt(gO1,gI2)*F0(p,
         MSt(gI2),0);
   }
   tmp_348 += tmp_349;
   result += (1.3333333333333333) * tmp_348;
   std::complex<double> tmp_350;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_350 += Conj(CpconjUStVPSt(gO2,gI2))*CpconjUStVPSt(gO1,gI2)*F0(p,
         MSt(gI2),0);
   }
   result += tmp_350;
   std::complex<double> tmp_351;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_351 += Conj(CpconjUStVZSt(gO2,gI2))*CpconjUStVZSt(gO1,gI2)*F0(p,
         MSt(gI2),MVZ);
   }
   result += tmp_351;
   std::complex<double> tmp_352;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_352 += (Conj(CpconjUStFtChiPL(gO2,1,gI2))*CpconjUStFtChiPL(gO1,1,
         gI2) + Conj(CpconjUStFtChiPR(gO2,1,gI2))*CpconjUStFtChiPR(gO1,1,gI2))*G0(
         p,MFt,MChi(gI2));
   }
   result += tmp_352;
   std::complex<double> tmp_353;
   std::complex<double> tmp_354;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_354 += B0(p,MCha(gI1),MFb)*(Conj(CpconjUStbarChaFbPR(gO2,gI1,1))*
         CpconjUStbarChaFbPL(gO1,gI1,1) + Conj(CpconjUStbarChaFbPL(gO2,gI1,1))*
         CpconjUStbarChaFbPR(gO1,gI1,1))*MCha(gI1);
   }
   tmp_353 += tmp_354;
   result += (-2*MFb) * tmp_353;
   std::complex<double> tmp_355;
   std::complex<double> tmp_356;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_356 += B0(p,MFt,MChi(gI2))*(Conj(CpconjUStFtChiPR(gO2,1,gI2))*
         CpconjUStFtChiPL(gO1,1,gI2) + Conj(CpconjUStFtChiPL(gO2,1,gI2))*
         CpconjUStFtChiPR(gO1,1,gI2))*MChi(gI2);
   }
   tmp_355 += tmp_356;
   result += (-2*MFt) * tmp_355;
   result += -2.6666666666666665*MFt*MGlu*B0(p,MGlu,MFt)*(Conj(CpconjUStGluFtPR
      (gO2,1,1))*CpconjUStGluFtPL(gO1,1,1) + Conj(CpconjUStGluFtPL(gO2,1,1))*
      CpconjUStGluFtPR(gO1,1,1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_hh(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B0(p,MVWm,MVWm)*CpUhhbargWmCgWmC(gO1)*CpUhhbargWmCgWmC(gO2));
   result += -(B0(p,MVWm,MVWm)*CpUhhbargWmgWm(gO1)*CpUhhbargWmgWm(gO2));
   result += -(B0(p,MVZ,MVZ)*CpUhhbargZgZ(gO1)*CpUhhbargZgZ(gO2));
   result += B0(p,MSveL,MSveL)*Conj(CpUhhconjSveLSveL(gO2))*CpUhhconjSveLSveL(
      gO1);
   result += B0(p,MSvmL,MSvmL)*Conj(CpUhhconjSvmLSvmL(gO2))*CpUhhconjSvmLSvmL(
      gO1);
   result += B0(p,MSvtL,MSvtL)*Conj(CpUhhconjSvtLSvtL(gO2))*CpUhhconjSvtLSvtL(
      gO1);
   result += 4*B0(p,MVWm,MVWm)*Conj(CpUhhconjVWmVWm(gO2))*CpUhhconjVWmVWm(gO1);
   result += -(A0(MSveL)*CpUhhUhhconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUhhUhhconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUhhUhhconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUhhUhhconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUhhUhhVZVZ(gO1,gO2);
   result += 2*B0(p,MVZ,MVZ)*Conj(CpUhhVZVZ(gO2))*CpUhhVZVZ(gO1);
   result += 3*(Conj(CpUhhbarFbFbPL(gO2,1,1))*CpUhhbarFbFbPL(gO1,1,1) + Conj(
      CpUhhbarFbFbPR(gO2,1,1))*CpUhhbarFbFbPR(gO1,1,1))*G0(p,MFb,MFb);
   result += 3*(Conj(CpUhhbarFcFcPL(gO2,1,1))*CpUhhbarFcFcPL(gO1,1,1) + Conj(
      CpUhhbarFcFcPR(gO2,1,1))*CpUhhbarFcFcPR(gO1,1,1))*G0(p,MFc,MFc);
   result += 3*(Conj(CpUhhbarFdFdPL(gO2,1,1))*CpUhhbarFdFdPL(gO1,1,1) + Conj(
      CpUhhbarFdFdPR(gO2,1,1))*CpUhhbarFdFdPR(gO1,1,1))*G0(p,MFd,MFd);
   result += (Conj(CpUhhbarFeFePL(gO2))*CpUhhbarFeFePL(gO1) + Conj(
      CpUhhbarFeFePR(gO2))*CpUhhbarFeFePR(gO1))*G0(p,MFe,MFe);
   result += (Conj(CpUhhbarFmFmPL(gO2))*CpUhhbarFmFmPL(gO1) + Conj(
      CpUhhbarFmFmPR(gO2))*CpUhhbarFmFmPR(gO1))*G0(p,MFm,MFm);
   result += 3*(Conj(CpUhhbarFsFsPL(gO2,1,1))*CpUhhbarFsFsPL(gO1,1,1) + Conj(
      CpUhhbarFsFsPR(gO2,1,1))*CpUhhbarFsFsPR(gO1,1,1))*G0(p,MFs,MFs);
   result += 3*(Conj(CpUhhbarFtFtPL(gO2,1,1))*CpUhhbarFtFtPL(gO1,1,1) + Conj(
      CpUhhbarFtFtPR(gO2,1,1))*CpUhhbarFtFtPR(gO1,1,1))*G0(p,MFt,MFt);
   result += (Conj(CpUhhbarFtauFtauPL(gO2))*CpUhhbarFtauFtauPL(gO1) + Conj(
      CpUhhbarFtauFtauPR(gO2))*CpUhhbarFtauFtauPR(gO1))*G0(p,MFtau,MFtau);
   result += 3*(Conj(CpUhhbarFuFuPL(gO2,1,1))*CpUhhbarFuFuPL(gO1,1,1) + Conj(
      CpUhhbarFuFuPR(gO2,1,1))*CpUhhbarFuFuPR(gO1,1,1))*G0(p,MFu,MFu);
   std::complex<double> tmp_357;
   std::complex<double> tmp_358;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_358 += A0(MAh(gI1))*CpUhhUhhAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_357 += tmp_358;
   result += (-0.5) * tmp_357;
   std::complex<double> tmp_359;
   std::complex<double> tmp_360;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_360 += A0(MHpm(gI1))*CpUhhUhhconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_359 += tmp_360;
   result += (-1) * tmp_359;
   std::complex<double> tmp_361;
   std::complex<double> tmp_362;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_362 += A0(MSb(gI1))*CpUhhUhhconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_361 += tmp_362;
   result += (-3) * tmp_361;
   std::complex<double> tmp_363;
   std::complex<double> tmp_364;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_364 += A0(MSc(gI1))*CpUhhUhhconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_363 += tmp_364;
   result += (-3) * tmp_363;
   std::complex<double> tmp_365;
   std::complex<double> tmp_366;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_366 += A0(MSd(gI1))*CpUhhUhhconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_365 += tmp_366;
   result += (-3) * tmp_365;
   std::complex<double> tmp_367;
   std::complex<double> tmp_368;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_368 += A0(MSe(gI1))*CpUhhUhhconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_367 += tmp_368;
   result += (-1) * tmp_367;
   std::complex<double> tmp_369;
   std::complex<double> tmp_370;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_370 += A0(MSm(gI1))*CpUhhUhhconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_369 += tmp_370;
   result += (-1) * tmp_369;
   std::complex<double> tmp_371;
   std::complex<double> tmp_372;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_372 += A0(MSs(gI1))*CpUhhUhhconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_371 += tmp_372;
   result += (-3) * tmp_371;
   std::complex<double> tmp_373;
   std::complex<double> tmp_374;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_374 += A0(MStau(gI1))*CpUhhUhhconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_373 += tmp_374;
   result += (-1) * tmp_373;
   std::complex<double> tmp_375;
   std::complex<double> tmp_376;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_376 += A0(MSt(gI1))*CpUhhUhhconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_375 += tmp_376;
   result += (-3) * tmp_375;
   std::complex<double> tmp_377;
   std::complex<double> tmp_378;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_378 += A0(MSu(gI1))*CpUhhUhhconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_377 += tmp_378;
   result += (-3) * tmp_377;
   std::complex<double> tmp_379;
   std::complex<double> tmp_380;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_380 += A0(Mhh(gI1))*CpUhhUhhhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_379 += tmp_380;
   result += (-0.5) * tmp_379;
   std::complex<double> tmp_381;
   std::complex<double> tmp_382;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_383;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_383 += B0(p,MAh(gI1),MAh(gI2))*Conj(CpUhhAhAh(gO2,gI1,gI2))*
            CpUhhAhAh(gO1,gI1,gI2);
      }
      tmp_382 += tmp_383;
   }
   tmp_381 += tmp_382;
   result += (0.5) * tmp_381;
   std::complex<double> tmp_384;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_385;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_385 += B0(p,MHpm(gI1),MHpm(gI2))*Conj(CpUhhconjHpmHpm(gO2,
            gI1,gI2))*CpUhhconjHpmHpm(gO1,gI1,gI2);
      }
      tmp_384 += tmp_385;
   }
   result += tmp_384;
   std::complex<double> tmp_386;
   std::complex<double> tmp_387;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_388;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_388 += B0(p,MSb(gI1),MSb(gI2))*Conj(CpUhhconjSbSb(gO2,gI1,
            gI2))*CpUhhconjSbSb(gO1,gI1,gI2);
      }
      tmp_387 += tmp_388;
   }
   tmp_386 += tmp_387;
   result += (3) * tmp_386;
   std::complex<double> tmp_389;
   std::complex<double> tmp_390;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_391;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_391 += B0(p,MSc(gI1),MSc(gI2))*Conj(CpUhhconjScSc(gO2,gI1,
            gI2))*CpUhhconjScSc(gO1,gI1,gI2);
      }
      tmp_390 += tmp_391;
   }
   tmp_389 += tmp_390;
   result += (3) * tmp_389;
   std::complex<double> tmp_392;
   std::complex<double> tmp_393;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_394;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_394 += B0(p,MSd(gI1),MSd(gI2))*Conj(CpUhhconjSdSd(gO2,gI1,
            gI2))*CpUhhconjSdSd(gO1,gI1,gI2);
      }
      tmp_393 += tmp_394;
   }
   tmp_392 += tmp_393;
   result += (3) * tmp_392;
   std::complex<double> tmp_395;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_396;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_396 += B0(p,MSe(gI1),MSe(gI2))*Conj(CpUhhconjSeSe(gO2,gI1,
            gI2))*CpUhhconjSeSe(gO1,gI1,gI2);
      }
      tmp_395 += tmp_396;
   }
   result += tmp_395;
   std::complex<double> tmp_397;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_398;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_398 += B0(p,MSm(gI1),MSm(gI2))*Conj(CpUhhconjSmSm(gO2,gI1,
            gI2))*CpUhhconjSmSm(gO1,gI1,gI2);
      }
      tmp_397 += tmp_398;
   }
   result += tmp_397;
   std::complex<double> tmp_399;
   std::complex<double> tmp_400;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_401;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_401 += B0(p,MSs(gI1),MSs(gI2))*Conj(CpUhhconjSsSs(gO2,gI1,
            gI2))*CpUhhconjSsSs(gO1,gI1,gI2);
      }
      tmp_400 += tmp_401;
   }
   tmp_399 += tmp_400;
   result += (3) * tmp_399;
   std::complex<double> tmp_402;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_403;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_403 += B0(p,MStau(gI1),MStau(gI2))*Conj(CpUhhconjStauStau(
            gO2,gI1,gI2))*CpUhhconjStauStau(gO1,gI1,gI2);
      }
      tmp_402 += tmp_403;
   }
   result += tmp_402;
   std::complex<double> tmp_404;
   std::complex<double> tmp_405;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_406;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_406 += B0(p,MSt(gI1),MSt(gI2))*Conj(CpUhhconjStSt(gO2,gI1,
            gI2))*CpUhhconjStSt(gO1,gI1,gI2);
      }
      tmp_405 += tmp_406;
   }
   tmp_404 += tmp_405;
   result += (3) * tmp_404;
   std::complex<double> tmp_407;
   std::complex<double> tmp_408;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_409;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_409 += B0(p,MSu(gI1),MSu(gI2))*Conj(CpUhhconjSuSu(gO2,gI1,
            gI2))*CpUhhconjSuSu(gO1,gI1,gI2);
      }
      tmp_408 += tmp_409;
   }
   tmp_407 += tmp_408;
   result += (3) * tmp_407;
   std::complex<double> tmp_410;
   std::complex<double> tmp_411;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_412;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_412 += B0(p,Mhh(gI1),Mhh(gI2))*Conj(CpUhhhhhh(gO2,gI1,gI2))*
            CpUhhhhhh(gO1,gI1,gI2);
      }
      tmp_411 += tmp_412;
   }
   tmp_410 += tmp_411;
   result += (0.5) * tmp_410;
   std::complex<double> tmp_413;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_414;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_414 += (Conj(CpUhhbarChaChaPL(gO2,gI1,gI2))*CpUhhbarChaChaPL
            (gO1,gI1,gI2) + Conj(CpUhhbarChaChaPR(gO2,gI1,gI2))*CpUhhbarChaChaPR(
            gO1,gI1,gI2))*G0(p,MCha(gI1),MCha(gI2));
      }
      tmp_413 += tmp_414;
   }
   result += tmp_413;
   std::complex<double> tmp_415;
   std::complex<double> tmp_416;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_417;
      std::complex<double> tmp_418;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_418 += B0(p,MCha(gI1),MCha(gI2))*(Conj(CpUhhbarChaChaPR(gO2,
            gI1,gI2))*CpUhhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUhhbarChaChaPL(gO2,
            gI1,gI2))*CpUhhbarChaChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_417 += tmp_418;
      tmp_416 += (MCha(gI1)) * tmp_417;
   }
   tmp_415 += tmp_416;
   result += (-2) * tmp_415;
   std::complex<double> tmp_419;
   std::complex<double> tmp_420;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_421;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_421 += (Conj(CpUhhChiChiPL(gO2,gI1,gI2))*CpUhhChiChiPL(gO1,
            gI1,gI2) + Conj(CpUhhChiChiPR(gO2,gI1,gI2))*CpUhhChiChiPR(gO1,gI1,gI2)
            )*G0(p,MChi(gI1),MChi(gI2));
      }
      tmp_420 += tmp_421;
   }
   tmp_419 += tmp_420;
   result += (0.5) * tmp_419;
   std::complex<double> tmp_422;
   std::complex<double> tmp_423;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_424;
      std::complex<double> tmp_425;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_425 += B0(p,MChi(gI1),MChi(gI2))*(Conj(CpUhhChiChiPR(gO2,gI1
            ,gI2))*CpUhhChiChiPL(gO1,gI1,gI2) + Conj(CpUhhChiChiPL(gO2,gI1,gI2))*
            CpUhhChiChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_424 += tmp_425;
      tmp_423 += (MChi(gI1)) * tmp_424;
   }
   tmp_422 += tmp_423;
   result += (-1) * tmp_422;
   std::complex<double> tmp_426;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_426 += Conj(CpUhhVZAh(gO2,gI2))*CpUhhVZAh(gO1,gI2)*F0(p,MAh(gI2),
         MVZ);
   }
   result += tmp_426;
   std::complex<double> tmp_427;
   std::complex<double> tmp_428;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_428 += Conj(CpUhhconjVWmHpm(gO2,gI2))*CpUhhconjVWmHpm(gO1,gI2)*F0(
         p,MHpm(gI2),MVWm);
   }
   tmp_427 += tmp_428;
   result += (2) * tmp_427;
   result += -6*B0(p,MFb,MFb)*(Conj(CpUhhbarFbFbPR(gO2,1,1))*CpUhhbarFbFbPL(gO1
      ,1,1) + Conj(CpUhhbarFbFbPL(gO2,1,1))*CpUhhbarFbFbPR(gO1,1,1))*Sqr(MFb);
   result += -6*B0(p,MFc,MFc)*(Conj(CpUhhbarFcFcPR(gO2,1,1))*CpUhhbarFcFcPL(gO1
      ,1,1) + Conj(CpUhhbarFcFcPL(gO2,1,1))*CpUhhbarFcFcPR(gO1,1,1))*Sqr(MFc);
   result += -6*B0(p,MFd,MFd)*(Conj(CpUhhbarFdFdPR(gO2,1,1))*CpUhhbarFdFdPL(gO1
      ,1,1) + Conj(CpUhhbarFdFdPL(gO2,1,1))*CpUhhbarFdFdPR(gO1,1,1))*Sqr(MFd);
   result += -2*B0(p,MFe,MFe)*(Conj(CpUhhbarFeFePR(gO2))*CpUhhbarFeFePL(gO1) +
      Conj(CpUhhbarFeFePL(gO2))*CpUhhbarFeFePR(gO1))*Sqr(MFe);
   result += -2*B0(p,MFm,MFm)*(Conj(CpUhhbarFmFmPR(gO2))*CpUhhbarFmFmPL(gO1) +
      Conj(CpUhhbarFmFmPL(gO2))*CpUhhbarFmFmPR(gO1))*Sqr(MFm);
   result += -6*B0(p,MFs,MFs)*(Conj(CpUhhbarFsFsPR(gO2,1,1))*CpUhhbarFsFsPL(gO1
      ,1,1) + Conj(CpUhhbarFsFsPL(gO2,1,1))*CpUhhbarFsFsPR(gO1,1,1))*Sqr(MFs);
   result += -6*B0(p,MFt,MFt)*(Conj(CpUhhbarFtFtPR(gO2,1,1))*CpUhhbarFtFtPL(gO1
      ,1,1) + Conj(CpUhhbarFtFtPL(gO2,1,1))*CpUhhbarFtFtPR(gO1,1,1))*Sqr(MFt);
   result += -2*B0(p,MFtau,MFtau)*(Conj(CpUhhbarFtauFtauPR(gO2))*
      CpUhhbarFtauFtauPL(gO1) + Conj(CpUhhbarFtauFtauPL(gO2))*CpUhhbarFtauFtauPR(
      gO1))*Sqr(MFtau);
   result += -6*B0(p,MFu,MFu)*(Conj(CpUhhbarFuFuPR(gO2,1,1))*CpUhhbarFuFuPL(gO1
      ,1,1) + Conj(CpUhhbarFuFuPL(gO2,1,1))*CpUhhbarFuFuPR(gO1,1,1))*Sqr(MFu);

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ah(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B0(p,MVWm,MVWm)*CpUAhbargWmCgWmC(gO1)*CpUAhbargWmCgWmC(gO2));
   result += -(B0(p,MVWm,MVWm)*CpUAhbargWmgWm(gO1)*CpUAhbargWmgWm(gO2));
   result += -(A0(MSveL)*CpUAhUAhconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUAhUAhconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUAhUAhconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUAhUAhconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUAhUAhVZVZ(gO1,gO2);
   result += 3*(Conj(CpUAhbarFbFbPL(gO2,1,1))*CpUAhbarFbFbPL(gO1,1,1) + Conj(
      CpUAhbarFbFbPR(gO2,1,1))*CpUAhbarFbFbPR(gO1,1,1))*G0(p,MFb,MFb);
   result += 3*(Conj(CpUAhbarFcFcPL(gO2,1,1))*CpUAhbarFcFcPL(gO1,1,1) + Conj(
      CpUAhbarFcFcPR(gO2,1,1))*CpUAhbarFcFcPR(gO1,1,1))*G0(p,MFc,MFc);
   result += 3*(Conj(CpUAhbarFdFdPL(gO2,1,1))*CpUAhbarFdFdPL(gO1,1,1) + Conj(
      CpUAhbarFdFdPR(gO2,1,1))*CpUAhbarFdFdPR(gO1,1,1))*G0(p,MFd,MFd);
   result += (Conj(CpUAhbarFeFePL(gO2))*CpUAhbarFeFePL(gO1) + Conj(
      CpUAhbarFeFePR(gO2))*CpUAhbarFeFePR(gO1))*G0(p,MFe,MFe);
   result += (Conj(CpUAhbarFmFmPL(gO2))*CpUAhbarFmFmPL(gO1) + Conj(
      CpUAhbarFmFmPR(gO2))*CpUAhbarFmFmPR(gO1))*G0(p,MFm,MFm);
   result += 3*(Conj(CpUAhbarFsFsPL(gO2,1,1))*CpUAhbarFsFsPL(gO1,1,1) + Conj(
      CpUAhbarFsFsPR(gO2,1,1))*CpUAhbarFsFsPR(gO1,1,1))*G0(p,MFs,MFs);
   result += 3*(Conj(CpUAhbarFtFtPL(gO2,1,1))*CpUAhbarFtFtPL(gO1,1,1) + Conj(
      CpUAhbarFtFtPR(gO2,1,1))*CpUAhbarFtFtPR(gO1,1,1))*G0(p,MFt,MFt);
   result += (Conj(CpUAhbarFtauFtauPL(gO2))*CpUAhbarFtauFtauPL(gO1) + Conj(
      CpUAhbarFtauFtauPR(gO2))*CpUAhbarFtauFtauPR(gO1))*G0(p,MFtau,MFtau);
   result += 3*(Conj(CpUAhbarFuFuPL(gO2,1,1))*CpUAhbarFuFuPL(gO1,1,1) + Conj(
      CpUAhbarFuFuPR(gO2,1,1))*CpUAhbarFuFuPR(gO1,1,1))*G0(p,MFu,MFu);
   std::complex<double> tmp_429;
   std::complex<double> tmp_430;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_430 += A0(MAh(gI1))*CpUAhUAhAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_429 += tmp_430;
   result += (-0.5) * tmp_429;
   std::complex<double> tmp_431;
   std::complex<double> tmp_432;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_432 += A0(MHpm(gI1))*CpUAhUAhconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_431 += tmp_432;
   result += (-1) * tmp_431;
   std::complex<double> tmp_433;
   std::complex<double> tmp_434;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_434 += A0(MSb(gI1))*CpUAhUAhconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_433 += tmp_434;
   result += (-3) * tmp_433;
   std::complex<double> tmp_435;
   std::complex<double> tmp_436;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_436 += A0(MSc(gI1))*CpUAhUAhconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_435 += tmp_436;
   result += (-3) * tmp_435;
   std::complex<double> tmp_437;
   std::complex<double> tmp_438;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_438 += A0(MSd(gI1))*CpUAhUAhconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_437 += tmp_438;
   result += (-3) * tmp_437;
   std::complex<double> tmp_439;
   std::complex<double> tmp_440;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_440 += A0(MSe(gI1))*CpUAhUAhconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_439 += tmp_440;
   result += (-1) * tmp_439;
   std::complex<double> tmp_441;
   std::complex<double> tmp_442;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_442 += A0(MSm(gI1))*CpUAhUAhconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_441 += tmp_442;
   result += (-1) * tmp_441;
   std::complex<double> tmp_443;
   std::complex<double> tmp_444;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_444 += A0(MSs(gI1))*CpUAhUAhconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_443 += tmp_444;
   result += (-3) * tmp_443;
   std::complex<double> tmp_445;
   std::complex<double> tmp_446;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_446 += A0(MStau(gI1))*CpUAhUAhconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_445 += tmp_446;
   result += (-1) * tmp_445;
   std::complex<double> tmp_447;
   std::complex<double> tmp_448;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_448 += A0(MSt(gI1))*CpUAhUAhconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_447 += tmp_448;
   result += (-3) * tmp_447;
   std::complex<double> tmp_449;
   std::complex<double> tmp_450;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_450 += A0(MSu(gI1))*CpUAhUAhconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_449 += tmp_450;
   result += (-3) * tmp_449;
   std::complex<double> tmp_451;
   std::complex<double> tmp_452;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_452 += A0(Mhh(gI1))*CpUAhUAhhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_451 += tmp_452;
   result += (-0.5) * tmp_451;
   std::complex<double> tmp_453;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_454;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_454 += B0(p,MHpm(gI1),MHpm(gI2))*Conj(CpUAhconjHpmHpm(gO2,
            gI1,gI2))*CpUAhconjHpmHpm(gO1,gI1,gI2);
      }
      tmp_453 += tmp_454;
   }
   result += tmp_453;
   std::complex<double> tmp_455;
   std::complex<double> tmp_456;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_457;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_457 += B0(p,MSb(gI1),MSb(gI2))*Conj(CpUAhconjSbSb(gO2,gI1,
            gI2))*CpUAhconjSbSb(gO1,gI1,gI2);
      }
      tmp_456 += tmp_457;
   }
   tmp_455 += tmp_456;
   result += (3) * tmp_455;
   std::complex<double> tmp_458;
   std::complex<double> tmp_459;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_460;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_460 += B0(p,MSc(gI1),MSc(gI2))*Conj(CpUAhconjScSc(gO2,gI1,
            gI2))*CpUAhconjScSc(gO1,gI1,gI2);
      }
      tmp_459 += tmp_460;
   }
   tmp_458 += tmp_459;
   result += (3) * tmp_458;
   std::complex<double> tmp_461;
   std::complex<double> tmp_462;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_463;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_463 += B0(p,MSd(gI1),MSd(gI2))*Conj(CpUAhconjSdSd(gO2,gI1,
            gI2))*CpUAhconjSdSd(gO1,gI1,gI2);
      }
      tmp_462 += tmp_463;
   }
   tmp_461 += tmp_462;
   result += (3) * tmp_461;
   std::complex<double> tmp_464;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_465;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_465 += B0(p,MSe(gI1),MSe(gI2))*Conj(CpUAhconjSeSe(gO2,gI1,
            gI2))*CpUAhconjSeSe(gO1,gI1,gI2);
      }
      tmp_464 += tmp_465;
   }
   result += tmp_464;
   std::complex<double> tmp_466;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_467;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_467 += B0(p,MSm(gI1),MSm(gI2))*Conj(CpUAhconjSmSm(gO2,gI1,
            gI2))*CpUAhconjSmSm(gO1,gI1,gI2);
      }
      tmp_466 += tmp_467;
   }
   result += tmp_466;
   std::complex<double> tmp_468;
   std::complex<double> tmp_469;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_470;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_470 += B0(p,MSs(gI1),MSs(gI2))*Conj(CpUAhconjSsSs(gO2,gI1,
            gI2))*CpUAhconjSsSs(gO1,gI1,gI2);
      }
      tmp_469 += tmp_470;
   }
   tmp_468 += tmp_469;
   result += (3) * tmp_468;
   std::complex<double> tmp_471;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_472;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_472 += B0(p,MStau(gI1),MStau(gI2))*Conj(CpUAhconjStauStau(
            gO2,gI1,gI2))*CpUAhconjStauStau(gO1,gI1,gI2);
      }
      tmp_471 += tmp_472;
   }
   result += tmp_471;
   std::complex<double> tmp_473;
   std::complex<double> tmp_474;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_475;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_475 += B0(p,MSt(gI1),MSt(gI2))*Conj(CpUAhconjStSt(gO2,gI1,
            gI2))*CpUAhconjStSt(gO1,gI1,gI2);
      }
      tmp_474 += tmp_475;
   }
   tmp_473 += tmp_474;
   result += (3) * tmp_473;
   std::complex<double> tmp_476;
   std::complex<double> tmp_477;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_478;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_478 += B0(p,MSu(gI1),MSu(gI2))*Conj(CpUAhconjSuSu(gO2,gI1,
            gI2))*CpUAhconjSuSu(gO1,gI1,gI2);
      }
      tmp_477 += tmp_478;
   }
   tmp_476 += tmp_477;
   result += (3) * tmp_476;
   std::complex<double> tmp_479;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_480;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_480 += B0(p,Mhh(gI1),MAh(gI2))*Conj(CpUAhhhAh(gO2,gI1,gI2))*
            CpUAhhhAh(gO1,gI1,gI2);
      }
      tmp_479 += tmp_480;
   }
   result += tmp_479;
   std::complex<double> tmp_481;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_482;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_482 += (Conj(CpUAhbarChaChaPL(gO2,gI1,gI2))*CpUAhbarChaChaPL
            (gO1,gI1,gI2) + Conj(CpUAhbarChaChaPR(gO2,gI1,gI2))*CpUAhbarChaChaPR(
            gO1,gI1,gI2))*G0(p,MCha(gI1),MCha(gI2));
      }
      tmp_481 += tmp_482;
   }
   result += tmp_481;
   std::complex<double> tmp_483;
   std::complex<double> tmp_484;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_485;
      std::complex<double> tmp_486;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_486 += B0(p,MCha(gI1),MCha(gI2))*(Conj(CpUAhbarChaChaPR(gO2,
            gI1,gI2))*CpUAhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUAhbarChaChaPL(gO2,
            gI1,gI2))*CpUAhbarChaChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_485 += tmp_486;
      tmp_484 += (MCha(gI1)) * tmp_485;
   }
   tmp_483 += tmp_484;
   result += (-2) * tmp_483;
   std::complex<double> tmp_487;
   std::complex<double> tmp_488;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_489;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_489 += (Conj(CpUAhChiChiPL(gO2,gI1,gI2))*CpUAhChiChiPL(gO1,
            gI1,gI2) + Conj(CpUAhChiChiPR(gO2,gI1,gI2))*CpUAhChiChiPR(gO1,gI1,gI2)
            )*G0(p,MChi(gI1),MChi(gI2));
      }
      tmp_488 += tmp_489;
   }
   tmp_487 += tmp_488;
   result += (0.5) * tmp_487;
   std::complex<double> tmp_490;
   std::complex<double> tmp_491;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_492;
      std::complex<double> tmp_493;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_493 += B0(p,MChi(gI1),MChi(gI2))*(Conj(CpUAhChiChiPR(gO2,gI1
            ,gI2))*CpUAhChiChiPL(gO1,gI1,gI2) + Conj(CpUAhChiChiPL(gO2,gI1,gI2))*
            CpUAhChiChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_492 += tmp_493;
      tmp_491 += (MChi(gI1)) * tmp_492;
   }
   tmp_490 += tmp_491;
   result += (-1) * tmp_490;
   std::complex<double> tmp_494;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_494 += Conj(CpUAhVZhh(gO2,gI2))*CpUAhVZhh(gO1,gI2)*F0(p,Mhh(gI2),
         MVZ);
   }
   result += tmp_494;
   std::complex<double> tmp_495;
   std::complex<double> tmp_496;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_496 += Conj(CpUAhconjVWmHpm(gO2,gI2))*CpUAhconjVWmHpm(gO1,gI2)*F0(
         p,MHpm(gI2),MVWm);
   }
   tmp_495 += tmp_496;
   result += (2) * tmp_495;
   result += -6*B0(p,MFb,MFb)*(Conj(CpUAhbarFbFbPR(gO2,1,1))*CpUAhbarFbFbPL(gO1
      ,1,1) + Conj(CpUAhbarFbFbPL(gO2,1,1))*CpUAhbarFbFbPR(gO1,1,1))*Sqr(MFb);
   result += -6*B0(p,MFc,MFc)*(Conj(CpUAhbarFcFcPR(gO2,1,1))*CpUAhbarFcFcPL(gO1
      ,1,1) + Conj(CpUAhbarFcFcPL(gO2,1,1))*CpUAhbarFcFcPR(gO1,1,1))*Sqr(MFc);
   result += -6*B0(p,MFd,MFd)*(Conj(CpUAhbarFdFdPR(gO2,1,1))*CpUAhbarFdFdPL(gO1
      ,1,1) + Conj(CpUAhbarFdFdPL(gO2,1,1))*CpUAhbarFdFdPR(gO1,1,1))*Sqr(MFd);
   result += -2*B0(p,MFe,MFe)*(Conj(CpUAhbarFeFePR(gO2))*CpUAhbarFeFePL(gO1) +
      Conj(CpUAhbarFeFePL(gO2))*CpUAhbarFeFePR(gO1))*Sqr(MFe);
   result += -2*B0(p,MFm,MFm)*(Conj(CpUAhbarFmFmPR(gO2))*CpUAhbarFmFmPL(gO1) +
      Conj(CpUAhbarFmFmPL(gO2))*CpUAhbarFmFmPR(gO1))*Sqr(MFm);
   result += -6*B0(p,MFs,MFs)*(Conj(CpUAhbarFsFsPR(gO2,1,1))*CpUAhbarFsFsPL(gO1
      ,1,1) + Conj(CpUAhbarFsFsPL(gO2,1,1))*CpUAhbarFsFsPR(gO1,1,1))*Sqr(MFs);
   result += -6*B0(p,MFt,MFt)*(Conj(CpUAhbarFtFtPR(gO2,1,1))*CpUAhbarFtFtPL(gO1
      ,1,1) + Conj(CpUAhbarFtFtPL(gO2,1,1))*CpUAhbarFtFtPR(gO1,1,1))*Sqr(MFt);
   result += -2*B0(p,MFtau,MFtau)*(Conj(CpUAhbarFtauFtauPR(gO2))*
      CpUAhbarFtauFtauPL(gO1) + Conj(CpUAhbarFtauFtauPL(gO2))*CpUAhbarFtauFtauPR(
      gO1))*Sqr(MFtau);
   result += -6*B0(p,MFu,MFu)*(Conj(CpUAhbarFuFuPR(gO2,1,1))*CpUAhbarFuFuPL(gO1
      ,1,1) + Conj(CpUAhbarFuFuPL(gO2,1,1))*CpUAhbarFuFuPR(gO1,1,1))*Sqr(MFu);

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Hpm(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*B0(p,0,MVWm)*Conj(CpconjUHpmVWmVP(gO2))*CpconjUHpmVWmVP(gO1);
   result += 4*B0(p,MVWm,MVZ)*Conj(CpconjUHpmVZVWm(gO2))*CpconjUHpmVZVWm(gO1);
   result += -(A0(MSveL)*CpUHpmconjUHpmconjSveLSveL(gO1,gO2));
   result += -(A0(MSvmL)*CpUHpmconjUHpmconjSvmLSvmL(gO1,gO2));
   result += -(A0(MSvtL)*CpUHpmconjUHpmconjSvtLSvtL(gO1,gO2));
   result += 4*A0(MVWm)*CpUHpmconjUHpmconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUHpmconjUHpmVZVZ(gO1,gO2);
   result += -(B0(p,MVZ,MVWm)*CpconjUHpmbargWmCgZ(gO1)*CpUHpmgWmCbargZ(gO2));
   result += -(B0(p,MVWm,MVZ)*CpconjUHpmbargZgWm(gO1)*CpUHpmgZbargWm(gO2));
   result += 3*(Conj(CpconjUHpmbarFcFsPL(gO2,1,1))*CpconjUHpmbarFcFsPL(gO1,1,1)
      + Conj(CpconjUHpmbarFcFsPR(gO2,1,1))*CpconjUHpmbarFcFsPR(gO1,1,1))*G0(p,MFc
      ,MFs);
   result += 3*(Conj(CpconjUHpmbarFtFbPL(gO2,1,1))*CpconjUHpmbarFtFbPL(gO1,1,1)
      + Conj(CpconjUHpmbarFtFbPR(gO2,1,1))*CpconjUHpmbarFtFbPR(gO1,1,1))*G0(p,MFt
      ,MFb);
   result += 3*(Conj(CpconjUHpmbarFuFdPL(gO2,1,1))*CpconjUHpmbarFuFdPL(gO1,1,1)
      + Conj(CpconjUHpmbarFuFdPR(gO2,1,1))*CpconjUHpmbarFuFdPR(gO1,1,1))*G0(p,MFu
      ,MFd);
   result += (Conj(CpconjUHpmbarFveFePL(gO2))*CpconjUHpmbarFveFePL(gO1) + Conj(
      CpconjUHpmbarFveFePR(gO2))*CpconjUHpmbarFveFePR(gO1))*G0(p,MFve,MFe);
   result += (Conj(CpconjUHpmbarFvmFmPL(gO2))*CpconjUHpmbarFvmFmPL(gO1) + Conj(
      CpconjUHpmbarFvmFmPR(gO2))*CpconjUHpmbarFvmFmPR(gO1))*G0(p,MFvm,MFm);
   result += (Conj(CpconjUHpmbarFvtFtauPL(gO2))*CpconjUHpmbarFvtFtauPL(gO1) +
      Conj(CpconjUHpmbarFvtFtauPR(gO2))*CpconjUHpmbarFvtFtauPR(gO1))*G0(p,MFvt,
      MFtau);
   std::complex<double> tmp_497;
   std::complex<double> tmp_498;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_498 += A0(MAh(gI1))*CpUHpmconjUHpmAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_497 += tmp_498;
   result += (-0.5) * tmp_497;
   std::complex<double> tmp_499;
   std::complex<double> tmp_500;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_500 += A0(MHpm(gI1))*CpUHpmconjUHpmconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_499 += tmp_500;
   result += (-1) * tmp_499;
   std::complex<double> tmp_501;
   std::complex<double> tmp_502;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_502 += A0(MSb(gI1))*CpUHpmconjUHpmconjSbSb(gO1,gO2,gI1,gI1);
   }
   tmp_501 += tmp_502;
   result += (-3) * tmp_501;
   std::complex<double> tmp_503;
   std::complex<double> tmp_504;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_504 += A0(MSc(gI1))*CpUHpmconjUHpmconjScSc(gO1,gO2,gI1,gI1);
   }
   tmp_503 += tmp_504;
   result += (-3) * tmp_503;
   std::complex<double> tmp_505;
   std::complex<double> tmp_506;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_506 += A0(MSd(gI1))*CpUHpmconjUHpmconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_505 += tmp_506;
   result += (-3) * tmp_505;
   std::complex<double> tmp_507;
   std::complex<double> tmp_508;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_508 += A0(MSe(gI1))*CpUHpmconjUHpmconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_507 += tmp_508;
   result += (-1) * tmp_507;
   std::complex<double> tmp_509;
   std::complex<double> tmp_510;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_510 += A0(MSm(gI1))*CpUHpmconjUHpmconjSmSm(gO1,gO2,gI1,gI1);
   }
   tmp_509 += tmp_510;
   result += (-1) * tmp_509;
   std::complex<double> tmp_511;
   std::complex<double> tmp_512;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_512 += A0(MSs(gI1))*CpUHpmconjUHpmconjSsSs(gO1,gO2,gI1,gI1);
   }
   tmp_511 += tmp_512;
   result += (-3) * tmp_511;
   std::complex<double> tmp_513;
   std::complex<double> tmp_514;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_514 += A0(MStau(gI1))*CpUHpmconjUHpmconjStauStau(gO1,gO2,gI1,gI1);
   }
   tmp_513 += tmp_514;
   result += (-1) * tmp_513;
   std::complex<double> tmp_515;
   std::complex<double> tmp_516;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_516 += A0(MSt(gI1))*CpUHpmconjUHpmconjStSt(gO1,gO2,gI1,gI1);
   }
   tmp_515 += tmp_516;
   result += (-3) * tmp_515;
   std::complex<double> tmp_517;
   std::complex<double> tmp_518;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_518 += A0(MSu(gI1))*CpUHpmconjUHpmconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_517 += tmp_518;
   result += (-3) * tmp_517;
   std::complex<double> tmp_519;
   std::complex<double> tmp_520;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_520 += A0(Mhh(gI1))*CpUHpmconjUHpmhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_519 += tmp_520;
   result += (-0.5) * tmp_519;
   std::complex<double> tmp_521;
   std::complex<double> tmp_522;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_523;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_523 += B0(p,MSc(gI1),MSs(gI2))*Conj(CpconjUHpmconjScSs(gO2,
            gI1,gI2))*CpconjUHpmconjScSs(gO1,gI1,gI2);
      }
      tmp_522 += tmp_523;
   }
   tmp_521 += tmp_522;
   result += (3) * tmp_521;
   std::complex<double> tmp_524;
   std::complex<double> tmp_525;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_526;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_526 += B0(p,MSt(gI1),MSb(gI2))*Conj(CpconjUHpmconjStSb(gO2,
            gI1,gI2))*CpconjUHpmconjStSb(gO1,gI1,gI2);
      }
      tmp_525 += tmp_526;
   }
   tmp_524 += tmp_525;
   result += (3) * tmp_524;
   std::complex<double> tmp_527;
   std::complex<double> tmp_528;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_529;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_529 += B0(p,MSu(gI1),MSd(gI2))*Conj(CpconjUHpmconjSuSd(gO2,
            gI1,gI2))*CpconjUHpmconjSuSd(gO1,gI1,gI2);
      }
      tmp_528 += tmp_529;
   }
   tmp_527 += tmp_528;
   result += (3) * tmp_527;
   std::complex<double> tmp_530;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_531;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_531 += B0(p,MHpm(gI1),MAh(gI2))*Conj(CpconjUHpmHpmAh(gO2,gI1
            ,gI2))*CpconjUHpmHpmAh(gO1,gI1,gI2);
      }
      tmp_530 += tmp_531;
   }
   result += tmp_530;
   std::complex<double> tmp_532;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_533;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_533 += B0(p,MHpm(gI1),Mhh(gI2))*Conj(CpconjUHpmHpmhh(gO2,gI1
            ,gI2))*CpconjUHpmHpmhh(gO1,gI1,gI2);
      }
      tmp_532 += tmp_533;
   }
   result += tmp_532;
   std::complex<double> tmp_534;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_535;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_535 += (Conj(CpconjUHpmChiChaPL(gO2,gI1,gI2))*
            CpconjUHpmChiChaPL(gO1,gI1,gI2) + Conj(CpconjUHpmChiChaPR(gO2,gI1,gI2)
            )*CpconjUHpmChiChaPR(gO1,gI1,gI2))*G0(p,MChi(gI1),MCha(gI2));
      }
      tmp_534 += tmp_535;
   }
   result += tmp_534;
   std::complex<double> tmp_536;
   std::complex<double> tmp_537;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_538;
      std::complex<double> tmp_539;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_539 += B0(p,MChi(gI1),MCha(gI2))*(Conj(CpconjUHpmChiChaPR(
            gO2,gI1,gI2))*CpconjUHpmChiChaPL(gO1,gI1,gI2) + Conj(
            CpconjUHpmChiChaPL(gO2,gI1,gI2))*CpconjUHpmChiChaPR(gO1,gI1,gI2))*MCha
            (gI2);
      }
      tmp_538 += tmp_539;
      tmp_537 += (MChi(gI1)) * tmp_538;
   }
   tmp_536 += tmp_537;
   result += (-2) * tmp_536;
   std::complex<double> tmp_540;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_540 += B0(p,MSveL,MSe(gI2))*Conj(CpconjUHpmconjSveLSe(gO2,gI2))*
         CpconjUHpmconjSveLSe(gO1,gI2);
   }
   result += tmp_540;
   std::complex<double> tmp_541;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_541 += B0(p,MSvmL,MSm(gI2))*Conj(CpconjUHpmconjSvmLSm(gO2,gI2))*
         CpconjUHpmconjSvmLSm(gO1,gI2);
   }
   result += tmp_541;
   std::complex<double> tmp_542;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_542 += B0(p,MSvtL,MStau(gI2))*Conj(CpconjUHpmconjSvtLStau(gO2,gI2)
         )*CpconjUHpmconjSvtLStau(gO1,gI2);
   }
   result += tmp_542;
   std::complex<double> tmp_543;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_543 += Conj(CpconjUHpmVWmAh(gO2,gI2))*CpconjUHpmVWmAh(gO1,gI2)*F0(
         p,MAh(gI2),MVWm);
   }
   result += tmp_543;
   std::complex<double> tmp_544;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_544 += Conj(CpconjUHpmVWmhh(gO2,gI2))*CpconjUHpmVWmhh(gO1,gI2)*F0(
         p,Mhh(gI2),MVWm);
   }
   result += tmp_544;
   std::complex<double> tmp_545;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_545 += Conj(CpconjUHpmVPHpm(gO2,gI2))*CpconjUHpmVPHpm(gO1,gI2)*F0(
         p,MHpm(gI2),0);
   }
   result += tmp_545;
   std::complex<double> tmp_546;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_546 += Conj(CpconjUHpmVZHpm(gO2,gI2))*CpconjUHpmVZHpm(gO1,gI2)*F0(
         p,MHpm(gI2),MVZ);
   }
   result += tmp_546;
   result += -6*MFc*MFs*B0(p,MFc,MFs)*(Conj(CpconjUHpmbarFcFsPR(gO2,1,1))*
      CpconjUHpmbarFcFsPL(gO1,1,1) + Conj(CpconjUHpmbarFcFsPL(gO2,1,1))*
      CpconjUHpmbarFcFsPR(gO1,1,1));
   result += -6*MFb*MFt*B0(p,MFt,MFb)*(Conj(CpconjUHpmbarFtFbPR(gO2,1,1))*
      CpconjUHpmbarFtFbPL(gO1,1,1) + Conj(CpconjUHpmbarFtFbPL(gO2,1,1))*
      CpconjUHpmbarFtFbPR(gO1,1,1));
   result += -6*MFd*MFu*B0(p,MFu,MFd)*(Conj(CpconjUHpmbarFuFdPR(gO2,1,1))*
      CpconjUHpmbarFuFdPL(gO1,1,1) + Conj(CpconjUHpmbarFuFdPL(gO2,1,1))*
      CpconjUHpmbarFuFdPR(gO1,1,1));
   result += -2*MFe*MFve*B0(p,MFve,MFe)*(Conj(CpconjUHpmbarFveFePR(gO2))*
      CpconjUHpmbarFveFePL(gO1) + Conj(CpconjUHpmbarFveFePL(gO2))*
      CpconjUHpmbarFveFePR(gO1));
   result += -2*MFm*MFvm*B0(p,MFvm,MFm)*(Conj(CpconjUHpmbarFvmFmPR(gO2))*
      CpconjUHpmbarFvmFmPL(gO1) + Conj(CpconjUHpmbarFvmFmPL(gO2))*
      CpconjUHpmbarFvmFmPR(gO1));
   result += -2*MFtau*MFvt*B0(p,MFvt,MFtau)*(Conj(CpconjUHpmbarFvtFtauPR(gO2))*
      CpconjUHpmbarFvtFtauPL(gO1) + Conj(CpconjUHpmbarFvtFtauPL(gO2))*
      CpconjUHpmbarFvtFtauPR(gO1));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_SveL(double p ) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpSveLconjSveLconjSveLSveL());
   result += -(A0(MSvmL)*CpSveLconjSveLconjSvmLSvmL());
   result += -(A0(MSvtL)*CpSveLconjSveLconjSvtLSvtL());
   result += 4*A0(MVWm)*CpSveLconjSveLconjVWmVWm();
   result += 2*A0(MVZ)*CpSveLconjSveLVZVZ();
   result += AbsSqr(CpconjSveLVZSveL())*F0(p,MSveL,MVZ);
   std::complex<double> tmp_547;
   std::complex<double> tmp_548;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_548 += A0(MAh(gI1))*CpSveLconjSveLAhAh(gI1,gI1);
   }
   tmp_547 += tmp_548;
   result += (-0.5) * tmp_547;
   std::complex<double> tmp_549;
   std::complex<double> tmp_550;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_550 += A0(MHpm(gI1))*CpSveLconjSveLconjHpmHpm(gI1,gI1);
   }
   tmp_549 += tmp_550;
   result += (-1) * tmp_549;
   std::complex<double> tmp_551;
   std::complex<double> tmp_552;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_552 += A0(MSb(gI1))*CpSveLconjSveLconjSbSb(gI1,gI1);
   }
   tmp_551 += tmp_552;
   result += (-3) * tmp_551;
   std::complex<double> tmp_553;
   std::complex<double> tmp_554;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_554 += A0(MSc(gI1))*CpSveLconjSveLconjScSc(gI1,gI1);
   }
   tmp_553 += tmp_554;
   result += (-3) * tmp_553;
   std::complex<double> tmp_555;
   std::complex<double> tmp_556;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_556 += A0(MSd(gI1))*CpSveLconjSveLconjSdSd(gI1,gI1);
   }
   tmp_555 += tmp_556;
   result += (-3) * tmp_555;
   std::complex<double> tmp_557;
   std::complex<double> tmp_558;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_558 += A0(MSe(gI1))*CpSveLconjSveLconjSeSe(gI1,gI1);
   }
   tmp_557 += tmp_558;
   result += (-1) * tmp_557;
   std::complex<double> tmp_559;
   std::complex<double> tmp_560;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_560 += A0(MSm(gI1))*CpSveLconjSveLconjSmSm(gI1,gI1);
   }
   tmp_559 += tmp_560;
   result += (-1) * tmp_559;
   std::complex<double> tmp_561;
   std::complex<double> tmp_562;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_562 += A0(MSs(gI1))*CpSveLconjSveLconjSsSs(gI1,gI1);
   }
   tmp_561 += tmp_562;
   result += (-3) * tmp_561;
   std::complex<double> tmp_563;
   std::complex<double> tmp_564;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_564 += A0(MStau(gI1))*CpSveLconjSveLconjStauStau(gI1,gI1);
   }
   tmp_563 += tmp_564;
   result += (-1) * tmp_563;
   std::complex<double> tmp_565;
   std::complex<double> tmp_566;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_566 += A0(MSt(gI1))*CpSveLconjSveLconjStSt(gI1,gI1);
   }
   tmp_565 += tmp_566;
   result += (-3) * tmp_565;
   std::complex<double> tmp_567;
   std::complex<double> tmp_568;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_568 += A0(MSu(gI1))*CpSveLconjSveLconjSuSu(gI1,gI1);
   }
   tmp_567 += tmp_568;
   result += (-3) * tmp_567;
   std::complex<double> tmp_569;
   std::complex<double> tmp_570;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_570 += A0(Mhh(gI1))*CpSveLconjSveLhhhh(gI1,gI1);
   }
   tmp_569 += tmp_570;
   result += (-0.5) * tmp_569;
   std::complex<double> tmp_571;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_571 += (AbsSqr(CpconjSveLbarChaFePL(gI1)) + AbsSqr(
         CpconjSveLbarChaFePR(gI1)))*G0(p,MCha(gI1),MFe);
   }
   result += tmp_571;
   std::complex<double> tmp_572;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_573;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_573 += AbsSqr(CpconjSveLconjHpmSe(gI1,gI2))*B0(p,MHpm(gI1),
            MSe(gI2));
      }
      tmp_572 += tmp_573;
   }
   result += tmp_572;
   std::complex<double> tmp_574;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_574 += AbsSqr(CpconjSveLSveLhh(gI2))*B0(p,MSveL,Mhh(gI2));
   }
   result += tmp_574;
   std::complex<double> tmp_575;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_575 += AbsSqr(CpconjSveLconjVWmSe(gI2))*F0(p,MSe(gI2),MVWm);
   }
   result += tmp_575;
   std::complex<double> tmp_576;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_576 += (AbsSqr(CpconjSveLFveChiPL(gI2)) + AbsSqr(
         CpconjSveLFveChiPR(gI2)))*G0(p,MFve,MChi(gI2));
   }
   result += tmp_576;
   std::complex<double> tmp_577;
   std::complex<double> tmp_578;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_578 += B0(p,MCha(gI1),MFe)*(Conj(CpconjSveLbarChaFePR(gI1))*
         CpconjSveLbarChaFePL(gI1) + Conj(CpconjSveLbarChaFePL(gI1))*
         CpconjSveLbarChaFePR(gI1))*MCha(gI1);
   }
   tmp_577 += tmp_578;
   result += (-2*MFe) * tmp_577;
   std::complex<double> tmp_579;
   std::complex<double> tmp_580;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_580 += B0(p,MFve,MChi(gI2))*(Conj(CpconjSveLFveChiPR(gI2))*
         CpconjSveLFveChiPL(gI2) + Conj(CpconjSveLFveChiPL(gI2))*
         CpconjSveLFveChiPR(gI2))*MChi(gI2);
   }
   tmp_579 += tmp_580;
   result += (-2*MFve) * tmp_579;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_SvmL(double p ) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpSvmLconjSvmLconjSveLSveL());
   result += -(A0(MSvmL)*CpSvmLconjSvmLconjSvmLSvmL());
   result += -(A0(MSvtL)*CpSvmLconjSvmLconjSvtLSvtL());
   result += 4*A0(MVWm)*CpSvmLconjSvmLconjVWmVWm();
   result += 2*A0(MVZ)*CpSvmLconjSvmLVZVZ();
   result += AbsSqr(CpconjSvmLVZSvmL())*F0(p,MSvmL,MVZ);
   std::complex<double> tmp_581;
   std::complex<double> tmp_582;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_582 += A0(MAh(gI1))*CpSvmLconjSvmLAhAh(gI1,gI1);
   }
   tmp_581 += tmp_582;
   result += (-0.5) * tmp_581;
   std::complex<double> tmp_583;
   std::complex<double> tmp_584;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_584 += A0(MHpm(gI1))*CpSvmLconjSvmLconjHpmHpm(gI1,gI1);
   }
   tmp_583 += tmp_584;
   result += (-1) * tmp_583;
   std::complex<double> tmp_585;
   std::complex<double> tmp_586;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_586 += A0(MSb(gI1))*CpSvmLconjSvmLconjSbSb(gI1,gI1);
   }
   tmp_585 += tmp_586;
   result += (-3) * tmp_585;
   std::complex<double> tmp_587;
   std::complex<double> tmp_588;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_588 += A0(MSc(gI1))*CpSvmLconjSvmLconjScSc(gI1,gI1);
   }
   tmp_587 += tmp_588;
   result += (-3) * tmp_587;
   std::complex<double> tmp_589;
   std::complex<double> tmp_590;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_590 += A0(MSd(gI1))*CpSvmLconjSvmLconjSdSd(gI1,gI1);
   }
   tmp_589 += tmp_590;
   result += (-3) * tmp_589;
   std::complex<double> tmp_591;
   std::complex<double> tmp_592;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_592 += A0(MSe(gI1))*CpSvmLconjSvmLconjSeSe(gI1,gI1);
   }
   tmp_591 += tmp_592;
   result += (-1) * tmp_591;
   std::complex<double> tmp_593;
   std::complex<double> tmp_594;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_594 += A0(MSm(gI1))*CpSvmLconjSvmLconjSmSm(gI1,gI1);
   }
   tmp_593 += tmp_594;
   result += (-1) * tmp_593;
   std::complex<double> tmp_595;
   std::complex<double> tmp_596;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_596 += A0(MSs(gI1))*CpSvmLconjSvmLconjSsSs(gI1,gI1);
   }
   tmp_595 += tmp_596;
   result += (-3) * tmp_595;
   std::complex<double> tmp_597;
   std::complex<double> tmp_598;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_598 += A0(MStau(gI1))*CpSvmLconjSvmLconjStauStau(gI1,gI1);
   }
   tmp_597 += tmp_598;
   result += (-1) * tmp_597;
   std::complex<double> tmp_599;
   std::complex<double> tmp_600;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_600 += A0(MSt(gI1))*CpSvmLconjSvmLconjStSt(gI1,gI1);
   }
   tmp_599 += tmp_600;
   result += (-3) * tmp_599;
   std::complex<double> tmp_601;
   std::complex<double> tmp_602;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_602 += A0(MSu(gI1))*CpSvmLconjSvmLconjSuSu(gI1,gI1);
   }
   tmp_601 += tmp_602;
   result += (-3) * tmp_601;
   std::complex<double> tmp_603;
   std::complex<double> tmp_604;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_604 += A0(Mhh(gI1))*CpSvmLconjSvmLhhhh(gI1,gI1);
   }
   tmp_603 += tmp_604;
   result += (-0.5) * tmp_603;
   std::complex<double> tmp_605;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_605 += (AbsSqr(CpconjSvmLbarChaFmPL(gI1)) + AbsSqr(
         CpconjSvmLbarChaFmPR(gI1)))*G0(p,MCha(gI1),MFm);
   }
   result += tmp_605;
   std::complex<double> tmp_606;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_607;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_607 += AbsSqr(CpconjSvmLconjHpmSm(gI1,gI2))*B0(p,MHpm(gI1),
            MSm(gI2));
      }
      tmp_606 += tmp_607;
   }
   result += tmp_606;
   std::complex<double> tmp_608;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_608 += AbsSqr(CpconjSvmLSvmLhh(gI2))*B0(p,MSvmL,Mhh(gI2));
   }
   result += tmp_608;
   std::complex<double> tmp_609;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_609 += AbsSqr(CpconjSvmLconjVWmSm(gI2))*F0(p,MSm(gI2),MVWm);
   }
   result += tmp_609;
   std::complex<double> tmp_610;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_610 += (AbsSqr(CpconjSvmLFvmChiPL(gI2)) + AbsSqr(
         CpconjSvmLFvmChiPR(gI2)))*G0(p,MFvm,MChi(gI2));
   }
   result += tmp_610;
   std::complex<double> tmp_611;
   std::complex<double> tmp_612;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_612 += B0(p,MCha(gI1),MFm)*(Conj(CpconjSvmLbarChaFmPR(gI1))*
         CpconjSvmLbarChaFmPL(gI1) + Conj(CpconjSvmLbarChaFmPL(gI1))*
         CpconjSvmLbarChaFmPR(gI1))*MCha(gI1);
   }
   tmp_611 += tmp_612;
   result += (-2*MFm) * tmp_611;
   std::complex<double> tmp_613;
   std::complex<double> tmp_614;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_614 += B0(p,MFvm,MChi(gI2))*(Conj(CpconjSvmLFvmChiPR(gI2))*
         CpconjSvmLFvmChiPL(gI2) + Conj(CpconjSvmLFvmChiPL(gI2))*
         CpconjSvmLFvmChiPR(gI2))*MChi(gI2);
   }
   tmp_613 += tmp_614;
   result += (-2*MFvm) * tmp_613;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_SvtL(double p ) const
{
   std::complex<double> result;

   result += -(A0(MSveL)*CpSvtLconjSvtLconjSveLSveL());
   result += -(A0(MSvmL)*CpSvtLconjSvtLconjSvmLSvmL());
   result += -(A0(MSvtL)*CpSvtLconjSvtLconjSvtLSvtL());
   result += 4*A0(MVWm)*CpSvtLconjSvtLconjVWmVWm();
   result += 2*A0(MVZ)*CpSvtLconjSvtLVZVZ();
   result += AbsSqr(CpconjSvtLVZSvtL())*F0(p,MSvtL,MVZ);
   std::complex<double> tmp_615;
   std::complex<double> tmp_616;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_616 += A0(MAh(gI1))*CpSvtLconjSvtLAhAh(gI1,gI1);
   }
   tmp_615 += tmp_616;
   result += (-0.5) * tmp_615;
   std::complex<double> tmp_617;
   std::complex<double> tmp_618;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_618 += A0(MHpm(gI1))*CpSvtLconjSvtLconjHpmHpm(gI1,gI1);
   }
   tmp_617 += tmp_618;
   result += (-1) * tmp_617;
   std::complex<double> tmp_619;
   std::complex<double> tmp_620;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_620 += A0(MSb(gI1))*CpSvtLconjSvtLconjSbSb(gI1,gI1);
   }
   tmp_619 += tmp_620;
   result += (-3) * tmp_619;
   std::complex<double> tmp_621;
   std::complex<double> tmp_622;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_622 += A0(MSc(gI1))*CpSvtLconjSvtLconjScSc(gI1,gI1);
   }
   tmp_621 += tmp_622;
   result += (-3) * tmp_621;
   std::complex<double> tmp_623;
   std::complex<double> tmp_624;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_624 += A0(MSd(gI1))*CpSvtLconjSvtLconjSdSd(gI1,gI1);
   }
   tmp_623 += tmp_624;
   result += (-3) * tmp_623;
   std::complex<double> tmp_625;
   std::complex<double> tmp_626;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_626 += A0(MSe(gI1))*CpSvtLconjSvtLconjSeSe(gI1,gI1);
   }
   tmp_625 += tmp_626;
   result += (-1) * tmp_625;
   std::complex<double> tmp_627;
   std::complex<double> tmp_628;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_628 += A0(MSm(gI1))*CpSvtLconjSvtLconjSmSm(gI1,gI1);
   }
   tmp_627 += tmp_628;
   result += (-1) * tmp_627;
   std::complex<double> tmp_629;
   std::complex<double> tmp_630;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_630 += A0(MSs(gI1))*CpSvtLconjSvtLconjSsSs(gI1,gI1);
   }
   tmp_629 += tmp_630;
   result += (-3) * tmp_629;
   std::complex<double> tmp_631;
   std::complex<double> tmp_632;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_632 += A0(MStau(gI1))*CpSvtLconjSvtLconjStauStau(gI1,gI1);
   }
   tmp_631 += tmp_632;
   result += (-1) * tmp_631;
   std::complex<double> tmp_633;
   std::complex<double> tmp_634;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_634 += A0(MSt(gI1))*CpSvtLconjSvtLconjStSt(gI1,gI1);
   }
   tmp_633 += tmp_634;
   result += (-3) * tmp_633;
   std::complex<double> tmp_635;
   std::complex<double> tmp_636;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_636 += A0(MSu(gI1))*CpSvtLconjSvtLconjSuSu(gI1,gI1);
   }
   tmp_635 += tmp_636;
   result += (-3) * tmp_635;
   std::complex<double> tmp_637;
   std::complex<double> tmp_638;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_638 += A0(Mhh(gI1))*CpSvtLconjSvtLhhhh(gI1,gI1);
   }
   tmp_637 += tmp_638;
   result += (-0.5) * tmp_637;
   std::complex<double> tmp_639;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_639 += (AbsSqr(CpconjSvtLbarChaFtauPL(gI1)) + AbsSqr(
         CpconjSvtLbarChaFtauPR(gI1)))*G0(p,MCha(gI1),MFtau);
   }
   result += tmp_639;
   std::complex<double> tmp_640;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_641;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_641 += AbsSqr(CpconjSvtLconjHpmStau(gI1,gI2))*B0(p,MHpm(gI1)
            ,MStau(gI2));
      }
      tmp_640 += tmp_641;
   }
   result += tmp_640;
   std::complex<double> tmp_642;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_642 += AbsSqr(CpconjSvtLSvtLhh(gI2))*B0(p,MSvtL,Mhh(gI2));
   }
   result += tmp_642;
   std::complex<double> tmp_643;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_643 += AbsSqr(CpconjSvtLconjVWmStau(gI2))*F0(p,MStau(gI2),MVWm);
   }
   result += tmp_643;
   std::complex<double> tmp_644;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_644 += (AbsSqr(CpconjSvtLFvtChiPL(gI2)) + AbsSqr(
         CpconjSvtLFvtChiPR(gI2)))*G0(p,MFvt,MChi(gI2));
   }
   result += tmp_644;
   std::complex<double> tmp_645;
   std::complex<double> tmp_646;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_646 += B0(p,MCha(gI1),MFtau)*(Conj(CpconjSvtLbarChaFtauPR(gI1))*
         CpconjSvtLbarChaFtauPL(gI1) + Conj(CpconjSvtLbarChaFtauPL(gI1))*
         CpconjSvtLbarChaFtauPR(gI1))*MCha(gI1);
   }
   tmp_645 += tmp_646;
   result += (-2*MFtau) * tmp_645;
   std::complex<double> tmp_647;
   std::complex<double> tmp_648;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_648 += B0(p,MFvt,MChi(gI2))*(Conj(CpconjSvtLFvtChiPR(gI2))*
         CpconjSvtLFvtChiPL(gI2) + Conj(CpconjSvtLFvtChiPL(gI2))*
         CpconjSvtLFvtChiPR(gI2))*MChi(gI2);
   }
   tmp_647 += tmp_648;
   result += (-2*MFvt) * tmp_647;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpVZbargWmCgWmC())*B00(p,MVWm,MVWm);
   result += AbsSqr(CpVZbargWmgWm())*B00(p,MVWm,MVWm);
   result += -4*AbsSqr(CpVZconjSveLSveL())*B00(p,MSveL,MSveL);
   result += -4*AbsSqr(CpVZconjSvmLSvmL())*B00(p,MSvmL,MSvmL);
   result += -4*AbsSqr(CpVZconjSvtLSvtL())*B00(p,MSvtL,MSvtL);
   result += A0(MSveL)*CpVZVZconjSveLSveL();
   result += A0(MSvmL)*CpVZVZconjSvmLSvmL();
   result += A0(MSvtL)*CpVZVZconjSvtLSvtL();
   result += -(A0(MVWm)*(4*CpVZVZconjVWmVWm1() + CpVZVZconjVWmVWm2() +
      CpVZVZconjVWmVWm3()));
   result += (AbsSqr(CpVZbarFeFePL()) + AbsSqr(CpVZbarFeFePR()))*H0(p,MFe,MFe);
   result += (AbsSqr(CpVZbarFmFmPL()) + AbsSqr(CpVZbarFmFmPR()))*H0(p,MFm,MFm);
   result += (AbsSqr(CpVZbarFtauFtauPL()) + AbsSqr(CpVZbarFtauFtauPR()))*H0(p,
      MFtau,MFtau);
   result += (AbsSqr(CpVZbarFveFvePL()) + AbsSqr(CpVZbarFveFvePR()))*H0(p,MFve,
      MFve);
   result += (AbsSqr(CpVZbarFvmFvmPL()) + AbsSqr(CpVZbarFvmFvmPR()))*H0(p,MFvm,
      MFvm);
   result += (AbsSqr(CpVZbarFvtFvtPL()) + AbsSqr(CpVZbarFvtFvtPR()))*H0(p,MFvt,
      MFvt);
   std::complex<double> tmp_649;
   std::complex<double> tmp_650;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_650 += A0(MAh(gI1))*CpVZVZAhAh(gI1,gI1);
   }
   tmp_649 += tmp_650;
   result += (0.5) * tmp_649;
   std::complex<double> tmp_651;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_651 += A0(MHpm(gI1))*CpVZVZconjHpmHpm(gI1,gI1);
   }
   result += tmp_651;
   std::complex<double> tmp_652;
   std::complex<double> tmp_653;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_653 += A0(MSb(gI1))*CpVZVZconjSbSb(gI1,gI1);
   }
   tmp_652 += tmp_653;
   result += (3) * tmp_652;
   std::complex<double> tmp_654;
   std::complex<double> tmp_655;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_655 += A0(MSc(gI1))*CpVZVZconjScSc(gI1,gI1);
   }
   tmp_654 += tmp_655;
   result += (3) * tmp_654;
   std::complex<double> tmp_656;
   std::complex<double> tmp_657;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_657 += A0(MSd(gI1))*CpVZVZconjSdSd(gI1,gI1);
   }
   tmp_656 += tmp_657;
   result += (3) * tmp_656;
   std::complex<double> tmp_658;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_658 += A0(MSe(gI1))*CpVZVZconjSeSe(gI1,gI1);
   }
   result += tmp_658;
   std::complex<double> tmp_659;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_659 += A0(MSm(gI1))*CpVZVZconjSmSm(gI1,gI1);
   }
   result += tmp_659;
   std::complex<double> tmp_660;
   std::complex<double> tmp_661;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_661 += A0(MSs(gI1))*CpVZVZconjSsSs(gI1,gI1);
   }
   tmp_660 += tmp_661;
   result += (3) * tmp_660;
   std::complex<double> tmp_662;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_662 += A0(MStau(gI1))*CpVZVZconjStauStau(gI1,gI1);
   }
   result += tmp_662;
   std::complex<double> tmp_663;
   std::complex<double> tmp_664;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_664 += A0(MSt(gI1))*CpVZVZconjStSt(gI1,gI1);
   }
   tmp_663 += tmp_664;
   result += (3) * tmp_663;
   std::complex<double> tmp_665;
   std::complex<double> tmp_666;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_666 += A0(MSu(gI1))*CpVZVZconjSuSu(gI1,gI1);
   }
   tmp_665 += tmp_666;
   result += (3) * tmp_665;
   std::complex<double> tmp_667;
   std::complex<double> tmp_668;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_668 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_667 += tmp_668;
   result += (0.5) * tmp_667;
   std::complex<double> tmp_669;
   std::complex<double> tmp_670;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_671;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_671 += AbsSqr(CpVZconjHpmHpm(gI1,gI2))*B00(p,MHpm(gI1),MHpm(
            gI2));
      }
      tmp_670 += tmp_671;
   }
   tmp_669 += tmp_670;
   result += (-4) * tmp_669;
   std::complex<double> tmp_672;
   std::complex<double> tmp_673;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_674;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_674 += AbsSqr(CpVZconjSbSb(gI1,gI2))*B00(p,MSb(gI1),MSb(gI2)
            );
      }
      tmp_673 += tmp_674;
   }
   tmp_672 += tmp_673;
   result += (-12) * tmp_672;
   std::complex<double> tmp_675;
   std::complex<double> tmp_676;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_677;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_677 += AbsSqr(CpVZconjScSc(gI1,gI2))*B00(p,MSc(gI1),MSc(gI2)
            );
      }
      tmp_676 += tmp_677;
   }
   tmp_675 += tmp_676;
   result += (-12) * tmp_675;
   std::complex<double> tmp_678;
   std::complex<double> tmp_679;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_680;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_680 += AbsSqr(CpVZconjSdSd(gI1,gI2))*B00(p,MSd(gI1),MSd(gI2)
            );
      }
      tmp_679 += tmp_680;
   }
   tmp_678 += tmp_679;
   result += (-12) * tmp_678;
   std::complex<double> tmp_681;
   std::complex<double> tmp_682;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_683;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_683 += AbsSqr(CpVZconjSeSe(gI1,gI2))*B00(p,MSe(gI1),MSe(gI2)
            );
      }
      tmp_682 += tmp_683;
   }
   tmp_681 += tmp_682;
   result += (-4) * tmp_681;
   std::complex<double> tmp_684;
   std::complex<double> tmp_685;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_686;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_686 += AbsSqr(CpVZconjSmSm(gI1,gI2))*B00(p,MSm(gI1),MSm(gI2)
            );
      }
      tmp_685 += tmp_686;
   }
   tmp_684 += tmp_685;
   result += (-4) * tmp_684;
   std::complex<double> tmp_687;
   std::complex<double> tmp_688;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_689;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_689 += AbsSqr(CpVZconjSsSs(gI1,gI2))*B00(p,MSs(gI1),MSs(gI2)
            );
      }
      tmp_688 += tmp_689;
   }
   tmp_687 += tmp_688;
   result += (-12) * tmp_687;
   std::complex<double> tmp_690;
   std::complex<double> tmp_691;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_692;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_692 += AbsSqr(CpVZconjStauStau(gI1,gI2))*B00(p,MStau(gI1),
            MStau(gI2));
      }
      tmp_691 += tmp_692;
   }
   tmp_690 += tmp_691;
   result += (-4) * tmp_690;
   std::complex<double> tmp_693;
   std::complex<double> tmp_694;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_695;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_695 += AbsSqr(CpVZconjStSt(gI1,gI2))*B00(p,MSt(gI1),MSt(gI2)
            );
      }
      tmp_694 += tmp_695;
   }
   tmp_693 += tmp_694;
   result += (-12) * tmp_693;
   std::complex<double> tmp_696;
   std::complex<double> tmp_697;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_698;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_698 += AbsSqr(CpVZconjSuSu(gI1,gI2))*B00(p,MSu(gI1),MSu(gI2)
            );
      }
      tmp_697 += tmp_698;
   }
   tmp_696 += tmp_697;
   result += (-12) * tmp_696;
   std::complex<double> tmp_699;
   std::complex<double> tmp_700;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_701;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_701 += AbsSqr(CpVZhhAh(gI1,gI2))*B00(p,MAh(gI2),Mhh(gI1));
      }
      tmp_700 += tmp_701;
   }
   tmp_699 += tmp_700;
   result += (-4) * tmp_699;
   std::complex<double> tmp_702;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_703;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_703 += (AbsSqr(CpVZbarChaChaPL(gI1,gI2)) + AbsSqr(
            CpVZbarChaChaPR(gI1,gI2)))*H0(p,MCha(gI1),MCha(gI2));
         tmp_703 += 4*B0(p,MCha(gI1),MCha(gI2))*MCha(gI1)*MCha(gI2)*Re(
            Conj(CpVZbarChaChaPL(gI1,gI2))*CpVZbarChaChaPR(gI1,gI2));
      }
      tmp_702 += tmp_703;
   }
   result += tmp_702;
   std::complex<double> tmp_704;
   std::complex<double> tmp_705;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_706;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_706 += (AbsSqr(CpVZChiChiPL(gI1,gI2)) + AbsSqr(CpVZChiChiPR(
            gI1,gI2)))*H0(p,MChi(gI1),MChi(gI2));
         tmp_706 += 4*B0(p,MChi(gI1),MChi(gI2))*MChi(gI1)*MChi(gI2)*Re(
            Conj(CpVZChiChiPL(gI1,gI2))*CpVZChiChiPR(gI1,gI2));
      }
      tmp_705 += tmp_706;
   }
   tmp_704 += tmp_705;
   result += (0.5) * tmp_704;
   std::complex<double> tmp_707;
   std::complex<double> tmp_708;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_708 += AbsSqr(CpVZconjVWmHpm(gI2))*B0(p,MVWm,MHpm(gI2));
   }
   tmp_707 += tmp_708;
   result += (2) * tmp_707;
   std::complex<double> tmp_709;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_709 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_709;
   result += -(AbsSqr(CpVZconjVWmVWm())*(2*A0(MVWm) + 10*B00(p,MVWm,MVWm) + B0(
      p,MVWm,MVWm)*(2*Sqr(MVWm) + 4*Sqr(p))));
   result += 3*((AbsSqr(CpVZbarFbFbPL(1,1)) + AbsSqr(CpVZbarFbFbPR(1,1)))*H0(p,
      MFb,MFb) + 4*B0(p,MFb,MFb)*Re(Conj(CpVZbarFbFbPL(1,1))*CpVZbarFbFbPR(1,1))*
      Sqr(MFb));
   result += 3*((AbsSqr(CpVZbarFcFcPL(1,1)) + AbsSqr(CpVZbarFcFcPR(1,1)))*H0(p,
      MFc,MFc) + 4*B0(p,MFc,MFc)*Re(Conj(CpVZbarFcFcPL(1,1))*CpVZbarFcFcPR(1,1))*
      Sqr(MFc));
   result += 3*((AbsSqr(CpVZbarFdFdPL(1,1)) + AbsSqr(CpVZbarFdFdPR(1,1)))*H0(p,
      MFd,MFd) + 4*B0(p,MFd,MFd)*Re(Conj(CpVZbarFdFdPL(1,1))*CpVZbarFdFdPR(1,1))*
      Sqr(MFd));
   result += 4*B0(p,MFe,MFe)*Re(Conj(CpVZbarFeFePL())*CpVZbarFeFePR())*Sqr(MFe)
      ;
   result += 4*B0(p,MFm,MFm)*Re(Conj(CpVZbarFmFmPL())*CpVZbarFmFmPR())*Sqr(MFm)
      ;
   result += 3*((AbsSqr(CpVZbarFsFsPL(1,1)) + AbsSqr(CpVZbarFsFsPR(1,1)))*H0(p,
      MFs,MFs) + 4*B0(p,MFs,MFs)*Re(Conj(CpVZbarFsFsPL(1,1))*CpVZbarFsFsPR(1,1))*
      Sqr(MFs));
   result += 4*B0(p,MFtau,MFtau)*Re(Conj(CpVZbarFtauFtauPL())*CpVZbarFtauFtauPR
      ())*Sqr(MFtau);
   result += 3*((AbsSqr(CpVZbarFtFtPL(1,1)) + AbsSqr(CpVZbarFtFtPR(1,1)))*H0(p,
      MFt,MFt) + 4*B0(p,MFt,MFt)*Re(Conj(CpVZbarFtFtPL(1,1))*CpVZbarFtFtPR(1,1))*
      Sqr(MFt));
   result += 3*((AbsSqr(CpVZbarFuFuPL(1,1)) + AbsSqr(CpVZbarFuFuPR(1,1)))*H0(p,
      MFu,MFu) + 4*B0(p,MFu,MFu)*Re(Conj(CpVZbarFuFuPL(1,1))*CpVZbarFuFuPR(1,1))*
      Sqr(MFu));
   result += 4*B0(p,MFve,MFve)*Re(Conj(CpVZbarFveFvePL())*CpVZbarFveFvePR())*
      Sqr(MFve);
   result += 4*B0(p,MFvm,MFvm)*Re(Conj(CpVZbarFvmFvmPL())*CpVZbarFvmFvmPR())*
      Sqr(MFvm);
   result += 4*B0(p,MFvt,MFvt)*Re(Conj(CpVZbarFvtFvtPL())*CpVZbarFvtFvtPR())*
      Sqr(MFvt);

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWm(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpconjVWmbargPgWm())*B00(p,MVWm,MVP);
   result += AbsSqr(CpconjVWmbargWmCgP())*B00(p,MVP,MVWm);
   result += AbsSqr(CpconjVWmbargWmCgZ())*B00(p,MVZ,MVWm);
   result += AbsSqr(CpconjVWmbargZgWm())*B00(p,MVWm,MVZ);
   result += A0(MSveL)*CpVWmconjVWmconjSveLSveL();
   result += A0(MSvmL)*CpVWmconjVWmconjSvmLSvmL();
   result += A0(MSvtL)*CpVWmconjVWmconjSvtLSvtL();
   result += -(A0(MVWm)*(4*CpVWmconjVWmconjVWmVWm1() + CpVWmconjVWmconjVWmVWm2(
      ) + CpVWmconjVWmconjVWmVWm3()));
   result += 0;
   result += -0.5*A0(MVZ)*(4*CpVWmconjVWmVZVZ1() + CpVWmconjVWmVZVZ2() +
      CpVWmconjVWmVZVZ3());
   result += (AbsSqr(CpconjVWmbarFveFePL()) + AbsSqr(CpconjVWmbarFveFePR()))*H0
      (p,MFve,MFe);
   result += (AbsSqr(CpconjVWmbarFvmFmPL()) + AbsSqr(CpconjVWmbarFvmFmPR()))*H0
      (p,MFvm,MFm);
   result += (AbsSqr(CpconjVWmbarFvtFtauPL()) + AbsSqr(CpconjVWmbarFvtFtauPR())
      )*H0(p,MFvt,MFtau);
   std::complex<double> tmp_710;
   std::complex<double> tmp_711;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_711 += A0(MAh(gI1))*CpVWmconjVWmAhAh(gI1,gI1);
   }
   tmp_710 += tmp_711;
   result += (0.5) * tmp_710;
   std::complex<double> tmp_712;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_712 += A0(MHpm(gI1))*CpVWmconjVWmconjHpmHpm(gI1,gI1);
   }
   result += tmp_712;
   std::complex<double> tmp_713;
   std::complex<double> tmp_714;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_714 += A0(MSb(gI1))*CpVWmconjVWmconjSbSb(gI1,gI1);
   }
   tmp_713 += tmp_714;
   result += (3) * tmp_713;
   std::complex<double> tmp_715;
   std::complex<double> tmp_716;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_716 += A0(MSc(gI1))*CpVWmconjVWmconjScSc(gI1,gI1);
   }
   tmp_715 += tmp_716;
   result += (3) * tmp_715;
   std::complex<double> tmp_717;
   std::complex<double> tmp_718;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_718 += A0(MSd(gI1))*CpVWmconjVWmconjSdSd(gI1,gI1);
   }
   tmp_717 += tmp_718;
   result += (3) * tmp_717;
   std::complex<double> tmp_719;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_719 += A0(MSe(gI1))*CpVWmconjVWmconjSeSe(gI1,gI1);
   }
   result += tmp_719;
   std::complex<double> tmp_720;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_720 += A0(MSm(gI1))*CpVWmconjVWmconjSmSm(gI1,gI1);
   }
   result += tmp_720;
   std::complex<double> tmp_721;
   std::complex<double> tmp_722;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_722 += A0(MSs(gI1))*CpVWmconjVWmconjSsSs(gI1,gI1);
   }
   tmp_721 += tmp_722;
   result += (3) * tmp_721;
   std::complex<double> tmp_723;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_723 += A0(MStau(gI1))*CpVWmconjVWmconjStauStau(gI1,gI1);
   }
   result += tmp_723;
   std::complex<double> tmp_724;
   std::complex<double> tmp_725;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_725 += A0(MSt(gI1))*CpVWmconjVWmconjStSt(gI1,gI1);
   }
   tmp_724 += tmp_725;
   result += (3) * tmp_724;
   std::complex<double> tmp_726;
   std::complex<double> tmp_727;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_727 += A0(MSu(gI1))*CpVWmconjVWmconjSuSu(gI1,gI1);
   }
   tmp_726 += tmp_727;
   result += (3) * tmp_726;
   std::complex<double> tmp_728;
   std::complex<double> tmp_729;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_729 += A0(Mhh(gI1))*CpVWmconjVWmhhhh(gI1,gI1);
   }
   tmp_728 += tmp_729;
   result += (0.5) * tmp_728;
   std::complex<double> tmp_730;
   std::complex<double> tmp_731;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_732;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_732 += AbsSqr(CpconjVWmconjScSs(gI1,gI2))*B00(p,MSs(gI2),MSc
            (gI1));
      }
      tmp_731 += tmp_732;
   }
   tmp_730 += tmp_731;
   result += (-12) * tmp_730;
   std::complex<double> tmp_733;
   std::complex<double> tmp_734;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_735;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_735 += AbsSqr(CpconjVWmconjStSb(gI1,gI2))*B00(p,MSb(gI2),MSt
            (gI1));
      }
      tmp_734 += tmp_735;
   }
   tmp_733 += tmp_734;
   result += (-12) * tmp_733;
   std::complex<double> tmp_736;
   std::complex<double> tmp_737;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_738;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_738 += AbsSqr(CpconjVWmconjSuSd(gI1,gI2))*B00(p,MSd(gI2),MSu
            (gI1));
      }
      tmp_737 += tmp_738;
   }
   tmp_736 += tmp_737;
   result += (-12) * tmp_736;
   std::complex<double> tmp_739;
   std::complex<double> tmp_740;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_741;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_741 += AbsSqr(CpconjVWmHpmAh(gI1,gI2))*B00(p,MAh(gI2),MHpm(
            gI1));
      }
      tmp_740 += tmp_741;
   }
   tmp_739 += tmp_740;
   result += (-4) * tmp_739;
   std::complex<double> tmp_742;
   std::complex<double> tmp_743;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_744;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_744 += AbsSqr(CpconjVWmHpmhh(gI1,gI2))*B00(p,Mhh(gI2),MHpm(
            gI1));
      }
      tmp_743 += tmp_744;
   }
   tmp_742 += tmp_743;
   result += (-4) * tmp_742;
   std::complex<double> tmp_745;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_746;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_746 += (AbsSqr(CpconjVWmChiChaPL(gI1,gI2)) + AbsSqr(
            CpconjVWmChiChaPR(gI1,gI2)))*H0(p,MChi(gI1),MCha(gI2));
         tmp_746 += 4*B0(p,MChi(gI1),MCha(gI2))*MCha(gI2)*MChi(gI1)*Re(
            Conj(CpconjVWmChiChaPL(gI1,gI2))*CpconjVWmChiChaPR(gI1,gI2));
      }
      tmp_745 += tmp_746;
   }
   result += tmp_745;
   std::complex<double> tmp_747;
   std::complex<double> tmp_748;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_748 += AbsSqr(CpconjVWmconjSveLSe(gI2))*B00(p,MSe(gI2),MSveL);
   }
   tmp_747 += tmp_748;
   result += (-4) * tmp_747;
   std::complex<double> tmp_749;
   std::complex<double> tmp_750;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_750 += AbsSqr(CpconjVWmconjSvmLSm(gI2))*B00(p,MSm(gI2),MSvmL);
   }
   tmp_749 += tmp_750;
   result += (-4) * tmp_749;
   std::complex<double> tmp_751;
   std::complex<double> tmp_752;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_752 += AbsSqr(CpconjVWmconjSvtLStau(gI2))*B00(p,MStau(gI2),MSvtL);
   }
   tmp_751 += tmp_752;
   result += (-4) * tmp_751;
   std::complex<double> tmp_753;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_753 += AbsSqr(CpconjVWmVPHpm(gI2))*B0(p,0,MHpm(gI2));
   }
   result += tmp_753;
   std::complex<double> tmp_754;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_754 += AbsSqr(CpconjVWmVWmhh(gI2))*B0(p,MVWm,Mhh(gI2));
   }
   result += tmp_754;
   std::complex<double> tmp_755;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_755 += AbsSqr(CpconjVWmVZHpm(gI2))*B0(p,MVZ,MHpm(gI2));
   }
   result += tmp_755;
   result += -(AbsSqr(CpconjVWmVWmVP())*(A0(MVWm) + 10*B00(p,MVWm,0) + B0(p,
      MVWm,0)*(Sqr(MVWm) + 4*Sqr(p))));
   result += -(AbsSqr(CpconjVWmVZVWm())*(A0(MVWm) + A0(MVZ) + 10*B00(p,MVZ,MVWm
      ) + B0(p,MVZ,MVWm)*(Sqr(MVWm) + Sqr(MVZ) + 4*Sqr(p))));
   result += 3*((AbsSqr(CpconjVWmbarFcFsPL(1,1)) + AbsSqr(CpconjVWmbarFcFsPR(1,
      1)))*H0(p,MFc,MFs) + 4*MFc*MFs*B0(p,MFc,MFs)*Re(Conj(CpconjVWmbarFcFsPL(1,1)
      )*CpconjVWmbarFcFsPR(1,1)));
   result += 3*((AbsSqr(CpconjVWmbarFtFbPL(1,1)) + AbsSqr(CpconjVWmbarFtFbPR(1,
      1)))*H0(p,MFt,MFb) + 4*MFb*MFt*B0(p,MFt,MFb)*Re(Conj(CpconjVWmbarFtFbPL(1,1)
      )*CpconjVWmbarFtFbPR(1,1)));
   result += 3*((AbsSqr(CpconjVWmbarFuFdPL(1,1)) + AbsSqr(CpconjVWmbarFuFdPR(1,
      1)))*H0(p,MFu,MFd) + 4*MFd*MFu*B0(p,MFu,MFd)*Re(Conj(CpconjVWmbarFuFdPL(1,1)
      )*CpconjVWmbarFuFdPR(1,1)));
   result += 4*MFe*MFve*B0(p,MFve,MFe)*Re(Conj(CpconjVWmbarFveFePL())*
      CpconjVWmbarFveFePR());
   result += 4*MFm*MFvm*B0(p,MFvm,MFm)*Re(Conj(CpconjVWmbarFvmFmPL())*
      CpconjVWmbarFvmFmPR());
   result += 4*MFtau*MFvt*B0(p,MFvt,MFtau)*Re(Conj(CpconjVWmbarFvtFtauPL())*
      CpconjVWmbarFvtFtauPR());

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_756;
   std::complex<double> tmp_757;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_758;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_758 += B0(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPL(gO2
            ,gI1,gI2))*CpUChiconjHpmChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_757 += tmp_758;
   }
   tmp_756 += tmp_757;
   result += (2) * tmp_756;
   std::complex<double> tmp_759;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_760;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_760 += B0(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPL(gO2,gI1,
            gI2))*CpUChihhChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_759 += tmp_760;
   }
   result += tmp_759;
   std::complex<double> tmp_761;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_762;
      std::complex<double> tmp_763;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_763 += B0(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPL(gO2,gI1,
            gI2))*CpUChiChiAhPR(gO1,gI1,gI2);
      }
      tmp_762 += tmp_763;
      tmp_761 += (MChi(gI1)) * tmp_762;
   }
   result += tmp_761;
   std::complex<double> tmp_764;
   std::complex<double> tmp_765;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_765 += B0(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPR(gO2,gI2))*
         CpUChiconjVWmChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_764 += tmp_765;
   result += (-8) * tmp_764;
   std::complex<double> tmp_766;
   std::complex<double> tmp_767;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_767 += B0(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPR(gO2,gI2))*
         CpUChiVZChiPL(gO1,gI2)*MChi(gI2);
   }
   tmp_766 += tmp_767;
   result += (-4) * tmp_766;
   std::complex<double> tmp_768;
   std::complex<double> tmp_769;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_769 += B0(p,MFb,MSb(gI1))*Conj(CpUChiconjSbFbPL(gO2,gI1,1))*
         CpUChiconjSbFbPR(gO1,gI1,1);
   }
   tmp_768 += tmp_769;
   result += (6*MFb) * tmp_768;
   std::complex<double> tmp_770;
   std::complex<double> tmp_771;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_771 += B0(p,MFc,MSc(gI1))*Conj(CpUChiconjScFcPL(gO2,gI1,1))*
         CpUChiconjScFcPR(gO1,gI1,1);
   }
   tmp_770 += tmp_771;
   result += (6*MFc) * tmp_770;
   std::complex<double> tmp_772;
   std::complex<double> tmp_773;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_773 += B0(p,MFd,MSd(gI1))*Conj(CpUChiconjSdFdPL(gO2,gI1,1))*
         CpUChiconjSdFdPR(gO1,gI1,1);
   }
   tmp_772 += tmp_773;
   result += (6*MFd) * tmp_772;
   std::complex<double> tmp_774;
   std::complex<double> tmp_775;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_775 += B0(p,MFe,MSe(gI1))*Conj(CpUChiconjSeFePL(gO2,gI1))*
         CpUChiconjSeFePR(gO1,gI1);
   }
   tmp_774 += tmp_775;
   result += (2*MFe) * tmp_774;
   std::complex<double> tmp_776;
   std::complex<double> tmp_777;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_777 += B0(p,MFm,MSm(gI1))*Conj(CpUChiconjSmFmPL(gO2,gI1))*
         CpUChiconjSmFmPR(gO1,gI1);
   }
   tmp_776 += tmp_777;
   result += (2*MFm) * tmp_776;
   std::complex<double> tmp_778;
   std::complex<double> tmp_779;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_779 += B0(p,MFs,MSs(gI1))*Conj(CpUChiconjSsFsPL(gO2,gI1,1))*
         CpUChiconjSsFsPR(gO1,gI1,1);
   }
   tmp_778 += tmp_779;
   result += (6*MFs) * tmp_778;
   std::complex<double> tmp_780;
   std::complex<double> tmp_781;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_781 += B0(p,MFt,MSt(gI1))*Conj(CpUChiconjStFtPL(gO2,gI1,1))*
         CpUChiconjStFtPR(gO1,gI1,1);
   }
   tmp_780 += tmp_781;
   result += (6*MFt) * tmp_780;
   std::complex<double> tmp_782;
   std::complex<double> tmp_783;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_783 += B0(p,MFtau,MStau(gI1))*Conj(CpUChiconjStauFtauPL(gO2,gI1))*
         CpUChiconjStauFtauPR(gO1,gI1);
   }
   tmp_782 += tmp_783;
   result += (2*MFtau) * tmp_782;
   std::complex<double> tmp_784;
   std::complex<double> tmp_785;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_785 += B0(p,MFu,MSu(gI1))*Conj(CpUChiconjSuFuPL(gO2,gI1,1))*
         CpUChiconjSuFuPR(gO1,gI1,1);
   }
   tmp_784 += tmp_785;
   result += (6*MFu) * tmp_784;
   result += 2*MFve*B0(p,MFve,MSveL)*Conj(CpUChiconjSveLFvePL(gO2))*
      CpUChiconjSveLFvePR(gO1);
   result += 2*MFvm*B0(p,MFvm,MSvmL)*Conj(CpUChiconjSvmLFvmPL(gO2))*
      CpUChiconjSvmLFvmPR(gO1);
   result += 2*MFvt*B0(p,MFvt,MSvtL)*Conj(CpUChiconjSvtLFvtPL(gO2))*
      CpUChiconjSvtLFvtPR(gO1);

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B1(p,MFve,MSveL)*Conj(CpUChiconjSveLFvePR(gO2))*
      CpUChiconjSveLFvePR(gO1));
   result += -(B1(p,MFvm,MSvmL)*Conj(CpUChiconjSvmLFvmPR(gO2))*
      CpUChiconjSvmLFvmPR(gO1));
   result += -(B1(p,MFvt,MSvtL)*Conj(CpUChiconjSvtLFvtPR(gO2))*
      CpUChiconjSvtLFvtPR(gO1));
   std::complex<double> tmp_786;
   std::complex<double> tmp_787;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_787 += B1(p,MFb,MSb(gI1))*Conj(CpUChiconjSbFbPR(gO2,gI1,1))*
         CpUChiconjSbFbPR(gO1,gI1,1);
   }
   tmp_786 += tmp_787;
   result += (-3) * tmp_786;
   std::complex<double> tmp_788;
   std::complex<double> tmp_789;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_789 += B1(p,MFc,MSc(gI1))*Conj(CpUChiconjScFcPR(gO2,gI1,1))*
         CpUChiconjScFcPR(gO1,gI1,1);
   }
   tmp_788 += tmp_789;
   result += (-3) * tmp_788;
   std::complex<double> tmp_790;
   std::complex<double> tmp_791;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_791 += B1(p,MFd,MSd(gI1))*Conj(CpUChiconjSdFdPR(gO2,gI1,1))*
         CpUChiconjSdFdPR(gO1,gI1,1);
   }
   tmp_790 += tmp_791;
   result += (-3) * tmp_790;
   std::complex<double> tmp_792;
   std::complex<double> tmp_793;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_793 += B1(p,MFe,MSe(gI1))*Conj(CpUChiconjSeFePR(gO2,gI1))*
         CpUChiconjSeFePR(gO1,gI1);
   }
   tmp_792 += tmp_793;
   result += (-1) * tmp_792;
   std::complex<double> tmp_794;
   std::complex<double> tmp_795;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_795 += B1(p,MFm,MSm(gI1))*Conj(CpUChiconjSmFmPR(gO2,gI1))*
         CpUChiconjSmFmPR(gO1,gI1);
   }
   tmp_794 += tmp_795;
   result += (-1) * tmp_794;
   std::complex<double> tmp_796;
   std::complex<double> tmp_797;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_797 += B1(p,MFs,MSs(gI1))*Conj(CpUChiconjSsFsPR(gO2,gI1,1))*
         CpUChiconjSsFsPR(gO1,gI1,1);
   }
   tmp_796 += tmp_797;
   result += (-3) * tmp_796;
   std::complex<double> tmp_798;
   std::complex<double> tmp_799;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_799 += B1(p,MFtau,MStau(gI1))*Conj(CpUChiconjStauFtauPR(gO2,gI1))*
         CpUChiconjStauFtauPR(gO1,gI1);
   }
   tmp_798 += tmp_799;
   result += (-1) * tmp_798;
   std::complex<double> tmp_800;
   std::complex<double> tmp_801;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_801 += B1(p,MFt,MSt(gI1))*Conj(CpUChiconjStFtPR(gO2,gI1,1))*
         CpUChiconjStFtPR(gO1,gI1,1);
   }
   tmp_800 += tmp_801;
   result += (-3) * tmp_800;
   std::complex<double> tmp_802;
   std::complex<double> tmp_803;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_803 += B1(p,MFu,MSu(gI1))*Conj(CpUChiconjSuFuPR(gO2,gI1,1))*
         CpUChiconjSuFuPR(gO1,gI1,1);
   }
   tmp_802 += tmp_803;
   result += (-3) * tmp_802;
   std::complex<double> tmp_804;
   std::complex<double> tmp_805;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_806;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_806 += B1(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPR(gO2
            ,gI1,gI2))*CpUChiconjHpmChaPR(gO1,gI1,gI2);
      }
      tmp_805 += tmp_806;
   }
   tmp_804 += tmp_805;
   result += (-1) * tmp_804;
   std::complex<double> tmp_807;
   std::complex<double> tmp_808;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_809;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_809 += B1(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPR(gO2,gI1,
            gI2))*CpUChihhChiPR(gO1,gI1,gI2);
      }
      tmp_808 += tmp_809;
   }
   tmp_807 += tmp_808;
   result += (-0.5) * tmp_807;
   std::complex<double> tmp_810;
   std::complex<double> tmp_811;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_812;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_812 += B1(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPR(gO2,gI1,
            gI2))*CpUChiChiAhPR(gO1,gI1,gI2);
      }
      tmp_811 += tmp_812;
   }
   tmp_810 += tmp_811;
   result += (-0.5) * tmp_810;
   std::complex<double> tmp_813;
   std::complex<double> tmp_814;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_814 += B1(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPL(gO2,gI2))*
         CpUChiconjVWmChaPL(gO1,gI2);
   }
   tmp_813 += tmp_814;
   result += (-2) * tmp_813;
   std::complex<double> tmp_815;
   std::complex<double> tmp_816;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_816 += B1(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPL(gO2,gI2))*
         CpUChiVZChiPL(gO1,gI2);
   }
   tmp_815 += tmp_816;
   result += (-1) * tmp_815;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B1(p,MFve,MSveL)*Conj(CpUChiconjSveLFvePL(gO2))*
      CpUChiconjSveLFvePL(gO1));
   result += -(B1(p,MFvm,MSvmL)*Conj(CpUChiconjSvmLFvmPL(gO2))*
      CpUChiconjSvmLFvmPL(gO1));
   result += -(B1(p,MFvt,MSvtL)*Conj(CpUChiconjSvtLFvtPL(gO2))*
      CpUChiconjSvtLFvtPL(gO1));
   std::complex<double> tmp_817;
   std::complex<double> tmp_818;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_818 += B1(p,MFb,MSb(gI1))*Conj(CpUChiconjSbFbPL(gO2,gI1,1))*
         CpUChiconjSbFbPL(gO1,gI1,1);
   }
   tmp_817 += tmp_818;
   result += (-3) * tmp_817;
   std::complex<double> tmp_819;
   std::complex<double> tmp_820;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_820 += B1(p,MFc,MSc(gI1))*Conj(CpUChiconjScFcPL(gO2,gI1,1))*
         CpUChiconjScFcPL(gO1,gI1,1);
   }
   tmp_819 += tmp_820;
   result += (-3) * tmp_819;
   std::complex<double> tmp_821;
   std::complex<double> tmp_822;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_822 += B1(p,MFd,MSd(gI1))*Conj(CpUChiconjSdFdPL(gO2,gI1,1))*
         CpUChiconjSdFdPL(gO1,gI1,1);
   }
   tmp_821 += tmp_822;
   result += (-3) * tmp_821;
   std::complex<double> tmp_823;
   std::complex<double> tmp_824;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_824 += B1(p,MFe,MSe(gI1))*Conj(CpUChiconjSeFePL(gO2,gI1))*
         CpUChiconjSeFePL(gO1,gI1);
   }
   tmp_823 += tmp_824;
   result += (-1) * tmp_823;
   std::complex<double> tmp_825;
   std::complex<double> tmp_826;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_826 += B1(p,MFm,MSm(gI1))*Conj(CpUChiconjSmFmPL(gO2,gI1))*
         CpUChiconjSmFmPL(gO1,gI1);
   }
   tmp_825 += tmp_826;
   result += (-1) * tmp_825;
   std::complex<double> tmp_827;
   std::complex<double> tmp_828;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_828 += B1(p,MFs,MSs(gI1))*Conj(CpUChiconjSsFsPL(gO2,gI1,1))*
         CpUChiconjSsFsPL(gO1,gI1,1);
   }
   tmp_827 += tmp_828;
   result += (-3) * tmp_827;
   std::complex<double> tmp_829;
   std::complex<double> tmp_830;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_830 += B1(p,MFtau,MStau(gI1))*Conj(CpUChiconjStauFtauPL(gO2,gI1))*
         CpUChiconjStauFtauPL(gO1,gI1);
   }
   tmp_829 += tmp_830;
   result += (-1) * tmp_829;
   std::complex<double> tmp_831;
   std::complex<double> tmp_832;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_832 += B1(p,MFt,MSt(gI1))*Conj(CpUChiconjStFtPL(gO2,gI1,1))*
         CpUChiconjStFtPL(gO1,gI1,1);
   }
   tmp_831 += tmp_832;
   result += (-3) * tmp_831;
   std::complex<double> tmp_833;
   std::complex<double> tmp_834;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_834 += B1(p,MFu,MSu(gI1))*Conj(CpUChiconjSuFuPL(gO2,gI1,1))*
         CpUChiconjSuFuPL(gO1,gI1,1);
   }
   tmp_833 += tmp_834;
   result += (-3) * tmp_833;
   std::complex<double> tmp_835;
   std::complex<double> tmp_836;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_837;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_837 += B1(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPL(gO2
            ,gI1,gI2))*CpUChiconjHpmChaPL(gO1,gI1,gI2);
      }
      tmp_836 += tmp_837;
   }
   tmp_835 += tmp_836;
   result += (-1) * tmp_835;
   std::complex<double> tmp_838;
   std::complex<double> tmp_839;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_840;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_840 += B1(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPL(gO2,gI1,
            gI2))*CpUChihhChiPL(gO1,gI1,gI2);
      }
      tmp_839 += tmp_840;
   }
   tmp_838 += tmp_839;
   result += (-0.5) * tmp_838;
   std::complex<double> tmp_841;
   std::complex<double> tmp_842;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_843;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_843 += B1(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPL(gO2,gI1,
            gI2))*CpUChiChiAhPL(gO1,gI1,gI2);
      }
      tmp_842 += tmp_843;
   }
   tmp_841 += tmp_842;
   result += (-0.5) * tmp_841;
   std::complex<double> tmp_844;
   std::complex<double> tmp_845;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_845 += B1(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPR(gO2,gI2))*
         CpUChiconjVWmChaPR(gO1,gI2);
   }
   tmp_844 += tmp_845;
   result += (-2) * tmp_844;
   std::complex<double> tmp_846;
   std::complex<double> tmp_847;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_847 += B1(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPR(gO2,gI2))*
         CpUChiVZChiPR(gO1,gI2);
   }
   tmp_846 += tmp_847;
   result += (-1) * tmp_846;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_848;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_849;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_849 += B0(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPL(gO2,
            gI1,gI2))*CpbarUChahhChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_848 += tmp_849;
   }
   result += tmp_848;
   std::complex<double> tmp_850;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_851;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_851 += B0(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPL(gO2,
            gI1,gI2))*CpbarUChaHpmChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_850 += tmp_851;
   }
   result += tmp_850;
   std::complex<double> tmp_852;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_853;
      std::complex<double> tmp_854;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_854 += B0(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPL(gO2,
            gI1,gI2))*CpbarUChaChaAhPR(gO1,gI1,gI2);
      }
      tmp_853 += tmp_854;
      tmp_852 += (MCha(gI1)) * tmp_853;
   }
   result += tmp_852;
   std::complex<double> tmp_855;
   std::complex<double> tmp_856;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_856 += B0(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPR(gO2,gI2))*
         CpbarUChaVPChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_855 += tmp_856;
   result += (-4) * tmp_855;
   std::complex<double> tmp_857;
   std::complex<double> tmp_858;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_858 += B0(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPR(gO2,gI2))*
         CpbarUChaVZChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_857 += tmp_858;
   result += (-4) * tmp_857;
   std::complex<double> tmp_859;
   std::complex<double> tmp_860;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_860 += B0(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPR(gO2,gI2))*
         CpbarUChaVWmChiPL(gO1,gI2)*MChi(gI2);
   }
   tmp_859 += tmp_860;
   result += (-4) * tmp_859;
   std::complex<double> tmp_861;
   std::complex<double> tmp_862;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_862 += B0(p,MFb,MSt(gI1))*Conj(CpbarUChaconjStFbPL(gO2,gI1,1))*
         CpbarUChaconjStFbPR(gO1,gI1,1);
   }
   tmp_861 += tmp_862;
   result += (3*MFb) * tmp_861;
   std::complex<double> tmp_863;
   std::complex<double> tmp_864;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_864 += B0(p,MFc,MSs(gI2))*Conj(CpbarUChabarFcSsPL(gO2,1,gI2))*
         CpbarUChabarFcSsPR(gO1,1,gI2);
   }
   tmp_863 += tmp_864;
   result += (3*MFc) * tmp_863;
   std::complex<double> tmp_865;
   std::complex<double> tmp_866;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_866 += B0(p,MFd,MSu(gI1))*Conj(CpbarUChaconjSuFdPL(gO2,gI1,1))*
         CpbarUChaconjSuFdPR(gO1,gI1,1);
   }
   tmp_865 += tmp_866;
   result += (3*MFd) * tmp_865;
   result += MFe*B0(p,MFe,MSveL)*Conj(CpbarUChaconjSveLFePL(gO2))*
      CpbarUChaconjSveLFePR(gO1);
   result += MFm*B0(p,MFm,MSvmL)*Conj(CpbarUChaconjSvmLFmPL(gO2))*
      CpbarUChaconjSvmLFmPR(gO1);
   std::complex<double> tmp_867;
   std::complex<double> tmp_868;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_868 += B0(p,MFs,MSc(gI1))*Conj(CpbarUChaconjScFsPL(gO2,gI1,1))*
         CpbarUChaconjScFsPR(gO1,gI1,1);
   }
   tmp_867 += tmp_868;
   result += (3*MFs) * tmp_867;
   std::complex<double> tmp_869;
   std::complex<double> tmp_870;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_870 += B0(p,MFt,MSb(gI2))*Conj(CpbarUChabarFtSbPL(gO2,1,gI2))*
         CpbarUChabarFtSbPR(gO1,1,gI2);
   }
   tmp_869 += tmp_870;
   result += (3*MFt) * tmp_869;
   result += MFtau*B0(p,MFtau,MSvtL)*Conj(CpbarUChaconjSvtLFtauPL(gO2))*
      CpbarUChaconjSvtLFtauPR(gO1);
   std::complex<double> tmp_871;
   std::complex<double> tmp_872;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_872 += B0(p,MFu,MSd(gI2))*Conj(CpbarUChabarFuSdPL(gO2,1,gI2))*
         CpbarUChabarFuSdPR(gO1,1,gI2);
   }
   tmp_871 += tmp_872;
   result += (3*MFu) * tmp_871;
   std::complex<double> tmp_873;
   std::complex<double> tmp_874;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_874 += B0(p,MFve,MSe(gI2))*Conj(CpbarUChabarFveSePL(gO2,gI2))*
         CpbarUChabarFveSePR(gO1,gI2);
   }
   tmp_873 += tmp_874;
   result += (MFve) * tmp_873;
   std::complex<double> tmp_875;
   std::complex<double> tmp_876;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_876 += B0(p,MFvm,MSm(gI2))*Conj(CpbarUChabarFvmSmPL(gO2,gI2))*
         CpbarUChabarFvmSmPR(gO1,gI2);
   }
   tmp_875 += tmp_876;
   result += (MFvm) * tmp_875;
   std::complex<double> tmp_877;
   std::complex<double> tmp_878;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_878 += B0(p,MFvt,MStau(gI2))*Conj(CpbarUChabarFvtStauPL(gO2,gI2))*
         CpbarUChabarFvtStauPR(gO1,gI2);
   }
   tmp_877 += tmp_878;
   result += (MFvt) * tmp_877;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -0.5*B1(p,MFe,MSveL)*Conj(CpbarUChaconjSveLFePR(gO2))*
      CpbarUChaconjSveLFePR(gO1);
   result += -0.5*B1(p,MFm,MSvmL)*Conj(CpbarUChaconjSvmLFmPR(gO2))*
      CpbarUChaconjSvmLFmPR(gO1);
   result += -0.5*B1(p,MFtau,MSvtL)*Conj(CpbarUChaconjSvtLFtauPR(gO2))*
      CpbarUChaconjSvtLFtauPR(gO1);
   std::complex<double> tmp_879;
   std::complex<double> tmp_880;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_880 += B1(p,MFs,MSc(gI1))*Conj(CpbarUChaconjScFsPR(gO2,gI1,1))*
         CpbarUChaconjScFsPR(gO1,gI1,1);
   }
   tmp_879 += tmp_880;
   result += (-1.5) * tmp_879;
   std::complex<double> tmp_881;
   std::complex<double> tmp_882;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_882 += B1(p,MFb,MSt(gI1))*Conj(CpbarUChaconjStFbPR(gO2,gI1,1))*
         CpbarUChaconjStFbPR(gO1,gI1,1);
   }
   tmp_881 += tmp_882;
   result += (-1.5) * tmp_881;
   std::complex<double> tmp_883;
   std::complex<double> tmp_884;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_884 += B1(p,MFd,MSu(gI1))*Conj(CpbarUChaconjSuFdPR(gO2,gI1,1))*
         CpbarUChaconjSuFdPR(gO1,gI1,1);
   }
   tmp_883 += tmp_884;
   result += (-1.5) * tmp_883;
   std::complex<double> tmp_885;
   std::complex<double> tmp_886;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_887;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_887 += B1(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPR(gO2,
            gI1,gI2))*CpbarUChaChaAhPR(gO1,gI1,gI2);
      }
      tmp_886 += tmp_887;
   }
   tmp_885 += tmp_886;
   result += (-0.5) * tmp_885;
   std::complex<double> tmp_888;
   std::complex<double> tmp_889;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_890;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_890 += B1(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPR(gO2,
            gI1,gI2))*CpbarUChahhChaPR(gO1,gI1,gI2);
      }
      tmp_889 += tmp_890;
   }
   tmp_888 += tmp_889;
   result += (-0.5) * tmp_888;
   std::complex<double> tmp_891;
   std::complex<double> tmp_892;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_893;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_893 += B1(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPR(gO2,
            gI1,gI2))*CpbarUChaHpmChiPR(gO1,gI1,gI2);
      }
      tmp_892 += tmp_893;
   }
   tmp_891 += tmp_892;
   result += (-0.5) * tmp_891;
   std::complex<double> tmp_894;
   std::complex<double> tmp_895;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_895 += B1(p,MFc,MSs(gI2))*Conj(CpbarUChabarFcSsPR(gO2,1,gI2))*
         CpbarUChabarFcSsPR(gO1,1,gI2);
   }
   tmp_894 += tmp_895;
   result += (-1.5) * tmp_894;
   std::complex<double> tmp_896;
   std::complex<double> tmp_897;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_897 += B1(p,MFt,MSb(gI2))*Conj(CpbarUChabarFtSbPR(gO2,1,gI2))*
         CpbarUChabarFtSbPR(gO1,1,gI2);
   }
   tmp_896 += tmp_897;
   result += (-1.5) * tmp_896;
   std::complex<double> tmp_898;
   std::complex<double> tmp_899;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_899 += B1(p,MFu,MSd(gI2))*Conj(CpbarUChabarFuSdPR(gO2,1,gI2))*
         CpbarUChabarFuSdPR(gO1,1,gI2);
   }
   tmp_898 += tmp_899;
   result += (-1.5) * tmp_898;
   std::complex<double> tmp_900;
   std::complex<double> tmp_901;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_901 += B1(p,MFve,MSe(gI2))*Conj(CpbarUChabarFveSePR(gO2,gI2))*
         CpbarUChabarFveSePR(gO1,gI2);
   }
   tmp_900 += tmp_901;
   result += (-0.5) * tmp_900;
   std::complex<double> tmp_902;
   std::complex<double> tmp_903;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_903 += B1(p,MFvm,MSm(gI2))*Conj(CpbarUChabarFvmSmPR(gO2,gI2))*
         CpbarUChabarFvmSmPR(gO1,gI2);
   }
   tmp_902 += tmp_903;
   result += (-0.5) * tmp_902;
   std::complex<double> tmp_904;
   std::complex<double> tmp_905;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_905 += B1(p,MFvt,MStau(gI2))*Conj(CpbarUChabarFvtStauPR(gO2,gI2))*
         CpbarUChabarFvtStauPR(gO1,gI2);
   }
   tmp_904 += tmp_905;
   result += (-0.5) * tmp_904;
   std::complex<double> tmp_906;
   std::complex<double> tmp_907;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_907 += B1(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPL(gO2,gI2))*
         CpbarUChaVPChaPL(gO1,gI2);
   }
   tmp_906 += tmp_907;
   result += (-1) * tmp_906;
   std::complex<double> tmp_908;
   std::complex<double> tmp_909;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_909 += B1(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPL(gO2,gI2))*
         CpbarUChaVZChaPL(gO1,gI2);
   }
   tmp_908 += tmp_909;
   result += (-1) * tmp_908;
   std::complex<double> tmp_910;
   std::complex<double> tmp_911;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_911 += B1(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPL(gO2,gI2))*
         CpbarUChaVWmChiPL(gO1,gI2);
   }
   tmp_910 += tmp_911;
   result += (-1) * tmp_910;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -0.5*B1(p,MFe,MSveL)*Conj(CpbarUChaconjSveLFePL(gO2))*
      CpbarUChaconjSveLFePL(gO1);
   result += -0.5*B1(p,MFm,MSvmL)*Conj(CpbarUChaconjSvmLFmPL(gO2))*
      CpbarUChaconjSvmLFmPL(gO1);
   result += -0.5*B1(p,MFtau,MSvtL)*Conj(CpbarUChaconjSvtLFtauPL(gO2))*
      CpbarUChaconjSvtLFtauPL(gO1);
   std::complex<double> tmp_912;
   std::complex<double> tmp_913;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_913 += B1(p,MFs,MSc(gI1))*Conj(CpbarUChaconjScFsPL(gO2,gI1,1))*
         CpbarUChaconjScFsPL(gO1,gI1,1);
   }
   tmp_912 += tmp_913;
   result += (-1.5) * tmp_912;
   std::complex<double> tmp_914;
   std::complex<double> tmp_915;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_915 += B1(p,MFb,MSt(gI1))*Conj(CpbarUChaconjStFbPL(gO2,gI1,1))*
         CpbarUChaconjStFbPL(gO1,gI1,1);
   }
   tmp_914 += tmp_915;
   result += (-1.5) * tmp_914;
   std::complex<double> tmp_916;
   std::complex<double> tmp_917;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_917 += B1(p,MFd,MSu(gI1))*Conj(CpbarUChaconjSuFdPL(gO2,gI1,1))*
         CpbarUChaconjSuFdPL(gO1,gI1,1);
   }
   tmp_916 += tmp_917;
   result += (-1.5) * tmp_916;
   std::complex<double> tmp_918;
   std::complex<double> tmp_919;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_920;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_920 += B1(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPL(gO2,
            gI1,gI2))*CpbarUChaChaAhPL(gO1,gI1,gI2);
      }
      tmp_919 += tmp_920;
   }
   tmp_918 += tmp_919;
   result += (-0.5) * tmp_918;
   std::complex<double> tmp_921;
   std::complex<double> tmp_922;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_923;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_923 += B1(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPL(gO2,
            gI1,gI2))*CpbarUChahhChaPL(gO1,gI1,gI2);
      }
      tmp_922 += tmp_923;
   }
   tmp_921 += tmp_922;
   result += (-0.5) * tmp_921;
   std::complex<double> tmp_924;
   std::complex<double> tmp_925;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_926;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_926 += B1(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPL(gO2,
            gI1,gI2))*CpbarUChaHpmChiPL(gO1,gI1,gI2);
      }
      tmp_925 += tmp_926;
   }
   tmp_924 += tmp_925;
   result += (-0.5) * tmp_924;
   std::complex<double> tmp_927;
   std::complex<double> tmp_928;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_928 += B1(p,MFc,MSs(gI2))*Conj(CpbarUChabarFcSsPL(gO2,1,gI2))*
         CpbarUChabarFcSsPL(gO1,1,gI2);
   }
   tmp_927 += tmp_928;
   result += (-1.5) * tmp_927;
   std::complex<double> tmp_929;
   std::complex<double> tmp_930;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_930 += B1(p,MFt,MSb(gI2))*Conj(CpbarUChabarFtSbPL(gO2,1,gI2))*
         CpbarUChabarFtSbPL(gO1,1,gI2);
   }
   tmp_929 += tmp_930;
   result += (-1.5) * tmp_929;
   std::complex<double> tmp_931;
   std::complex<double> tmp_932;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_932 += B1(p,MFu,MSd(gI2))*Conj(CpbarUChabarFuSdPL(gO2,1,gI2))*
         CpbarUChabarFuSdPL(gO1,1,gI2);
   }
   tmp_931 += tmp_932;
   result += (-1.5) * tmp_931;
   std::complex<double> tmp_933;
   std::complex<double> tmp_934;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_934 += B1(p,MFve,MSe(gI2))*Conj(CpbarUChabarFveSePL(gO2,gI2))*
         CpbarUChabarFveSePL(gO1,gI2);
   }
   tmp_933 += tmp_934;
   result += (-0.5) * tmp_933;
   std::complex<double> tmp_935;
   std::complex<double> tmp_936;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_936 += B1(p,MFvm,MSm(gI2))*Conj(CpbarUChabarFvmSmPL(gO2,gI2))*
         CpbarUChabarFvmSmPL(gO1,gI2);
   }
   tmp_935 += tmp_936;
   result += (-0.5) * tmp_935;
   std::complex<double> tmp_937;
   std::complex<double> tmp_938;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_938 += B1(p,MFvt,MStau(gI2))*Conj(CpbarUChabarFvtStauPL(gO2,gI2))*
         CpbarUChabarFvtStauPL(gO1,gI2);
   }
   tmp_937 += tmp_938;
   result += (-0.5) * tmp_937;
   std::complex<double> tmp_939;
   std::complex<double> tmp_940;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_940 += B1(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPR(gO2,gI2))*
         CpbarUChaVPChaPR(gO1,gI2);
   }
   tmp_939 += tmp_940;
   result += (-1) * tmp_939;
   std::complex<double> tmp_941;
   std::complex<double> tmp_942;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_942 += B1(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPR(gO2,gI2))*
         CpbarUChaVZChaPR(gO1,gI2);
   }
   tmp_941 += tmp_942;
   result += (-1) * tmp_941;
   std::complex<double> tmp_943;
   std::complex<double> tmp_944;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_944 += B1(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPR(gO2,gI2))*
         CpbarUChaVWmChiPR(gO1,gI2);
   }
   tmp_943 += tmp_944;
   result += (-1) * tmp_943;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_945;
   std::complex<double> tmp_946;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_946 += B0(p,MFb,MSb(gI1))*Conj(CpGluconjSbFbPL(gI1,1))*
         CpGluconjSbFbPR(gI1,1);
   }
   tmp_945 += tmp_946;
   result += (MFb) * tmp_945;
   std::complex<double> tmp_947;
   std::complex<double> tmp_948;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_948 += B0(p,MFc,MSc(gI1))*Conj(CpGluconjScFcPL(gI1,1))*
         CpGluconjScFcPR(gI1,1);
   }
   tmp_947 += tmp_948;
   result += (MFc) * tmp_947;
   std::complex<double> tmp_949;
   std::complex<double> tmp_950;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_950 += B0(p,MFd,MSd(gI1))*Conj(CpGluconjSdFdPL(gI1,1))*
         CpGluconjSdFdPR(gI1,1);
   }
   tmp_949 += tmp_950;
   result += (MFd) * tmp_949;
   std::complex<double> tmp_951;
   std::complex<double> tmp_952;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_952 += B0(p,MFs,MSs(gI1))*Conj(CpGluconjSsFsPL(gI1,1))*
         CpGluconjSsFsPR(gI1,1);
   }
   tmp_951 += tmp_952;
   result += (MFs) * tmp_951;
   std::complex<double> tmp_953;
   std::complex<double> tmp_954;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_954 += B0(p,MFt,MSt(gI1))*Conj(CpGluconjStFtPL(gI1,1))*
         CpGluconjStFtPR(gI1,1);
   }
   tmp_953 += tmp_954;
   result += (MFt) * tmp_953;
   std::complex<double> tmp_955;
   std::complex<double> tmp_956;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_956 += B0(p,MFu,MSu(gI1))*Conj(CpGluconjSuFuPL(gI1,1))*
         CpGluconjSuFuPR(gI1,1);
   }
   tmp_955 += tmp_956;
   result += (MFu) * tmp_955;
   result += -12*MGlu*B0(p,MGlu,0)*Conj(CpGluVGGluPR())*CpGluVGGluPL();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_PR(double p ) const
{
   std::complex<double> result;

   result += -3*AbsSqr(CpGluVGGluPL())*B1(p,MGlu,0);
   std::complex<double> tmp_957;
   std::complex<double> tmp_958;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_958 += AbsSqr(CpGluconjSbFbPR(gI1,1))*B1(p,MFb,MSb(gI1));
   }
   tmp_957 += tmp_958;
   result += (-0.5) * tmp_957;
   std::complex<double> tmp_959;
   std::complex<double> tmp_960;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_960 += AbsSqr(CpGluconjScFcPR(gI1,1))*B1(p,MFc,MSc(gI1));
   }
   tmp_959 += tmp_960;
   result += (-0.5) * tmp_959;
   std::complex<double> tmp_961;
   std::complex<double> tmp_962;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_962 += AbsSqr(CpGluconjSdFdPR(gI1,1))*B1(p,MFd,MSd(gI1));
   }
   tmp_961 += tmp_962;
   result += (-0.5) * tmp_961;
   std::complex<double> tmp_963;
   std::complex<double> tmp_964;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_964 += AbsSqr(CpGluconjSsFsPR(gI1,1))*B1(p,MFs,MSs(gI1));
   }
   tmp_963 += tmp_964;
   result += (-0.5) * tmp_963;
   std::complex<double> tmp_965;
   std::complex<double> tmp_966;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_966 += AbsSqr(CpGluconjStFtPR(gI1,1))*B1(p,MFt,MSt(gI1));
   }
   tmp_965 += tmp_966;
   result += (-0.5) * tmp_965;
   std::complex<double> tmp_967;
   std::complex<double> tmp_968;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_968 += AbsSqr(CpGluconjSuFuPR(gI1,1))*B1(p,MFu,MSu(gI1));
   }
   tmp_967 += tmp_968;
   result += (-0.5) * tmp_967;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_PL(double p ) const
{
   std::complex<double> result;

   result += -3*AbsSqr(CpGluVGGluPR())*B1(p,MGlu,0);
   std::complex<double> tmp_969;
   std::complex<double> tmp_970;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_970 += AbsSqr(CpGluconjSbFbPL(gI1,1))*B1(p,MFb,MSb(gI1));
   }
   tmp_969 += tmp_970;
   result += (-0.5) * tmp_969;
   std::complex<double> tmp_971;
   std::complex<double> tmp_972;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_972 += AbsSqr(CpGluconjScFcPL(gI1,1))*B1(p,MFc,MSc(gI1));
   }
   tmp_971 += tmp_972;
   result += (-0.5) * tmp_971;
   std::complex<double> tmp_973;
   std::complex<double> tmp_974;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_974 += AbsSqr(CpGluconjSdFdPL(gI1,1))*B1(p,MFd,MSd(gI1));
   }
   tmp_973 += tmp_974;
   result += (-0.5) * tmp_973;
   std::complex<double> tmp_975;
   std::complex<double> tmp_976;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_976 += AbsSqr(CpGluconjSsFsPL(gI1,1))*B1(p,MFs,MSs(gI1));
   }
   tmp_975 += tmp_976;
   result += (-0.5) * tmp_975;
   std::complex<double> tmp_977;
   std::complex<double> tmp_978;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_978 += AbsSqr(CpGluconjStFtPL(gI1,1))*B1(p,MFt,MSt(gI1));
   }
   tmp_977 += tmp_978;
   result += (-0.5) * tmp_977;
   std::complex<double> tmp_979;
   std::complex<double> tmp_980;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_980 += AbsSqr(CpGluconjSuFuPL(gI1,1))*B1(p,MFu,MSu(gI1));
   }
   tmp_979 += tmp_980;
   result += (-0.5) * tmp_979;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_981;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_982;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_982 += B0(p,MCha(gI2),MSu(gI1))*Conj(CpbarFdSuChaPL(gI1,gI2)
            )*CpbarFdSuChaPR(gI1,gI2)*MCha(gI2);
      }
      tmp_981 += tmp_982;
   }
   result += tmp_981;
   std::complex<double> tmp_983;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_984;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_984 += B0(p,MChi(gI2),MSd(gI1))*Conj(CpbarFdSdChiPL(gI1,gI2)
            )*CpbarFdSdChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_983 += tmp_984;
   }
   result += tmp_983;
   result += -5.333333333333333*MFd*B0(p,MFd,0)*Conj(CpbarFdVGFdPR())*
      CpbarFdVGFdPL();
   result += -4*MFd*B0(p,MFd,0)*Conj(CpbarFdVPFdPR())*CpbarFdVPFdPL();
   result += -4*MFd*B0(p,MFd,MVZ)*Conj(CpbarFdVZFdPR())*CpbarFdVZFdPL();
   std::complex<double> tmp_985;
   std::complex<double> tmp_986;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_986 += B0(p,MFd,Mhh(gI1))*Conj(CpbarFdhhFdPL(gI1))*CpbarFdhhFdPR(
         gI1);
   }
   tmp_985 += tmp_986;
   result += (MFd) * tmp_985;
   std::complex<double> tmp_987;
   std::complex<double> tmp_988;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_988 += B0(p,MFd,MAh(gI2))*Conj(CpbarFdFdAhPL(gI2))*CpbarFdFdAhPR(
         gI2);
   }
   tmp_987 += tmp_988;
   result += (MFd) * tmp_987;
   result += -4*MFu*B0(p,MFu,MVWm)*Conj(CpbarFdVWmFuPR(1))*CpbarFdVWmFuPL(1);
   std::complex<double> tmp_989;
   std::complex<double> tmp_990;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_990 += B0(p,MFu,MHpm(gI1))*Conj(CpbarFdHpmFuPL(gI1,1))*
         CpbarFdHpmFuPR(gI1,1);
   }
   tmp_989 += tmp_990;
   result += (MFu) * tmp_989;
   std::complex<double> tmp_991;
   std::complex<double> tmp_992;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_992 += B0(p,MGlu,MSd(gI1))*Conj(CpbarFdSdGluPL(gI1,1))*
         CpbarFdSdGluPR(gI1,1);
   }
   tmp_991 += tmp_992;
   result += (1.3333333333333333*MGlu) * tmp_991;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFdVGFdPL())*B1(p,MFd,0);
   result += -(AbsSqr(CpbarFdVPFdPL())*B1(p,MFd,0));
   result += -(AbsSqr(CpbarFdVWmFuPL(1))*B1(p,MFu,MVWm));
   result += -(AbsSqr(CpbarFdVZFdPL())*B1(p,MFd,MVZ));
   std::complex<double> tmp_993;
   std::complex<double> tmp_994;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_994 += AbsSqr(CpbarFdhhFdPR(gI1))*B1(p,MFd,Mhh(gI1));
   }
   tmp_993 += tmp_994;
   result += (-0.5) * tmp_993;
   std::complex<double> tmp_995;
   std::complex<double> tmp_996;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_996 += AbsSqr(CpbarFdHpmFuPR(gI1,1))*B1(p,MFu,MHpm(gI1));
   }
   tmp_995 += tmp_996;
   result += (-0.5) * tmp_995;
   std::complex<double> tmp_997;
   std::complex<double> tmp_998;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_998 += AbsSqr(CpbarFdSdGluPR(gI1,1))*B1(p,MGlu,MSd(gI1));
   }
   tmp_997 += tmp_998;
   result += (-0.6666666666666666) * tmp_997;
   std::complex<double> tmp_999;
   std::complex<double> tmp_1000;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1001;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1001 += AbsSqr(CpbarFdSuChaPR(gI1,gI2))*B1(p,MCha(gI2),MSu(
            gI1));
      }
      tmp_1000 += tmp_1001;
   }
   tmp_999 += tmp_1000;
   result += (-0.5) * tmp_999;
   std::complex<double> tmp_1002;
   std::complex<double> tmp_1003;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1004;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1004 += AbsSqr(CpbarFdSdChiPR(gI1,gI2))*B1(p,MChi(gI2),MSd(
            gI1));
      }
      tmp_1003 += tmp_1004;
   }
   tmp_1002 += tmp_1003;
   result += (-0.5) * tmp_1002;
   std::complex<double> tmp_1005;
   std::complex<double> tmp_1006;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1006 += AbsSqr(CpbarFdFdAhPR(gI2))*B1(p,MFd,MAh(gI2));
   }
   tmp_1005 += tmp_1006;
   result += (-0.5) * tmp_1005;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFdVGFdPR())*B1(p,MFd,0);
   result += -(AbsSqr(CpbarFdVPFdPR())*B1(p,MFd,0));
   result += -(AbsSqr(CpbarFdVWmFuPR(1))*B1(p,MFu,MVWm));
   result += -(AbsSqr(CpbarFdVZFdPR())*B1(p,MFd,MVZ));
   std::complex<double> tmp_1007;
   std::complex<double> tmp_1008;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1008 += AbsSqr(CpbarFdhhFdPL(gI1))*B1(p,MFd,Mhh(gI1));
   }
   tmp_1007 += tmp_1008;
   result += (-0.5) * tmp_1007;
   std::complex<double> tmp_1009;
   std::complex<double> tmp_1010;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1010 += AbsSqr(CpbarFdHpmFuPL(gI1,1))*B1(p,MFu,MHpm(gI1));
   }
   tmp_1009 += tmp_1010;
   result += (-0.5) * tmp_1009;
   std::complex<double> tmp_1011;
   std::complex<double> tmp_1012;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1012 += AbsSqr(CpbarFdSdGluPL(gI1,1))*B1(p,MGlu,MSd(gI1));
   }
   tmp_1011 += tmp_1012;
   result += (-0.6666666666666666) * tmp_1011;
   std::complex<double> tmp_1013;
   std::complex<double> tmp_1014;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1015;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1015 += AbsSqr(CpbarFdSuChaPL(gI1,gI2))*B1(p,MCha(gI2),MSu(
            gI1));
      }
      tmp_1014 += tmp_1015;
   }
   tmp_1013 += tmp_1014;
   result += (-0.5) * tmp_1013;
   std::complex<double> tmp_1016;
   std::complex<double> tmp_1017;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1018;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1018 += AbsSqr(CpbarFdSdChiPL(gI1,gI2))*B1(p,MChi(gI2),MSd(
            gI1));
      }
      tmp_1017 += tmp_1018;
   }
   tmp_1016 += tmp_1017;
   result += (-0.5) * tmp_1016;
   std::complex<double> tmp_1019;
   std::complex<double> tmp_1020;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1020 += AbsSqr(CpbarFdFdAhPL(gI2))*B1(p,MFd,MAh(gI2));
   }
   tmp_1019 += tmp_1020;
   result += (-0.5) * tmp_1019;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fs_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1021;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1022;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1022 += B0(p,MCha(gI2),MSc(gI1))*Conj(CpbarFsScChaPL(gI1,gI2
            ))*CpbarFsScChaPR(gI1,gI2)*MCha(gI2);
      }
      tmp_1021 += tmp_1022;
   }
   result += tmp_1021;
   std::complex<double> tmp_1023;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1024;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1024 += B0(p,MChi(gI2),MSs(gI1))*Conj(CpbarFsSsChiPL(gI1,gI2
            ))*CpbarFsSsChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1023 += tmp_1024;
   }
   result += tmp_1023;
   result += -4*MFc*B0(p,MFc,MVWm)*Conj(CpbarFsVWmFcPR(1))*CpbarFsVWmFcPL(1);
   std::complex<double> tmp_1025;
   std::complex<double> tmp_1026;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1026 += B0(p,MFc,MHpm(gI1))*Conj(CpbarFsHpmFcPL(gI1,1))*
         CpbarFsHpmFcPR(gI1,1);
   }
   tmp_1025 += tmp_1026;
   result += (MFc) * tmp_1025;
   result += -5.333333333333333*MFs*B0(p,MFs,0)*Conj(CpbarFsVGFsPR())*
      CpbarFsVGFsPL();
   result += -4*MFs*B0(p,MFs,0)*Conj(CpbarFsVPFsPR())*CpbarFsVPFsPL();
   result += -4*MFs*B0(p,MFs,MVZ)*Conj(CpbarFsVZFsPR())*CpbarFsVZFsPL();
   std::complex<double> tmp_1027;
   std::complex<double> tmp_1028;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1028 += B0(p,MFs,Mhh(gI1))*Conj(CpbarFshhFsPL(gI1))*CpbarFshhFsPR(
         gI1);
   }
   tmp_1027 += tmp_1028;
   result += (MFs) * tmp_1027;
   std::complex<double> tmp_1029;
   std::complex<double> tmp_1030;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1030 += B0(p,MFs,MAh(gI2))*Conj(CpbarFsFsAhPL(gI2))*CpbarFsFsAhPR(
         gI2);
   }
   tmp_1029 += tmp_1030;
   result += (MFs) * tmp_1029;
   std::complex<double> tmp_1031;
   std::complex<double> tmp_1032;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1032 += B0(p,MGlu,MSs(gI1))*Conj(CpbarFsSsGluPL(gI1,1))*
         CpbarFsSsGluPR(gI1,1);
   }
   tmp_1031 += tmp_1032;
   result += (1.3333333333333333*MGlu) * tmp_1031;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fs_PR(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFsVGFsPL())*B1(p,MFs,0);
   result += -(AbsSqr(CpbarFsVPFsPL())*B1(p,MFs,0));
   result += -(AbsSqr(CpbarFsVWmFcPL(1))*B1(p,MFc,MVWm));
   result += -(AbsSqr(CpbarFsVZFsPL())*B1(p,MFs,MVZ));
   std::complex<double> tmp_1033;
   std::complex<double> tmp_1034;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1034 += AbsSqr(CpbarFshhFsPR(gI1))*B1(p,MFs,Mhh(gI1));
   }
   tmp_1033 += tmp_1034;
   result += (-0.5) * tmp_1033;
   std::complex<double> tmp_1035;
   std::complex<double> tmp_1036;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1036 += AbsSqr(CpbarFsHpmFcPR(gI1,1))*B1(p,MFc,MHpm(gI1));
   }
   tmp_1035 += tmp_1036;
   result += (-0.5) * tmp_1035;
   std::complex<double> tmp_1037;
   std::complex<double> tmp_1038;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1038 += AbsSqr(CpbarFsSsGluPR(gI1,1))*B1(p,MGlu,MSs(gI1));
   }
   tmp_1037 += tmp_1038;
   result += (-0.6666666666666666) * tmp_1037;
   std::complex<double> tmp_1039;
   std::complex<double> tmp_1040;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1041;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1041 += AbsSqr(CpbarFsScChaPR(gI1,gI2))*B1(p,MCha(gI2),MSc(
            gI1));
      }
      tmp_1040 += tmp_1041;
   }
   tmp_1039 += tmp_1040;
   result += (-0.5) * tmp_1039;
   std::complex<double> tmp_1042;
   std::complex<double> tmp_1043;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1044;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1044 += AbsSqr(CpbarFsSsChiPR(gI1,gI2))*B1(p,MChi(gI2),MSs(
            gI1));
      }
      tmp_1043 += tmp_1044;
   }
   tmp_1042 += tmp_1043;
   result += (-0.5) * tmp_1042;
   std::complex<double> tmp_1045;
   std::complex<double> tmp_1046;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1046 += AbsSqr(CpbarFsFsAhPR(gI2))*B1(p,MFs,MAh(gI2));
   }
   tmp_1045 += tmp_1046;
   result += (-0.5) * tmp_1045;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fs_PL(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFsVGFsPR())*B1(p,MFs,0);
   result += -(AbsSqr(CpbarFsVPFsPR())*B1(p,MFs,0));
   result += -(AbsSqr(CpbarFsVWmFcPR(1))*B1(p,MFc,MVWm));
   result += -(AbsSqr(CpbarFsVZFsPR())*B1(p,MFs,MVZ));
   std::complex<double> tmp_1047;
   std::complex<double> tmp_1048;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1048 += AbsSqr(CpbarFshhFsPL(gI1))*B1(p,MFs,Mhh(gI1));
   }
   tmp_1047 += tmp_1048;
   result += (-0.5) * tmp_1047;
   std::complex<double> tmp_1049;
   std::complex<double> tmp_1050;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1050 += AbsSqr(CpbarFsHpmFcPL(gI1,1))*B1(p,MFc,MHpm(gI1));
   }
   tmp_1049 += tmp_1050;
   result += (-0.5) * tmp_1049;
   std::complex<double> tmp_1051;
   std::complex<double> tmp_1052;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1052 += AbsSqr(CpbarFsSsGluPL(gI1,1))*B1(p,MGlu,MSs(gI1));
   }
   tmp_1051 += tmp_1052;
   result += (-0.6666666666666666) * tmp_1051;
   std::complex<double> tmp_1053;
   std::complex<double> tmp_1054;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1055;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1055 += AbsSqr(CpbarFsScChaPL(gI1,gI2))*B1(p,MCha(gI2),MSc(
            gI1));
      }
      tmp_1054 += tmp_1055;
   }
   tmp_1053 += tmp_1054;
   result += (-0.5) * tmp_1053;
   std::complex<double> tmp_1056;
   std::complex<double> tmp_1057;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1058;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1058 += AbsSqr(CpbarFsSsChiPL(gI1,gI2))*B1(p,MChi(gI2),MSs(
            gI1));
      }
      tmp_1057 += tmp_1058;
   }
   tmp_1056 += tmp_1057;
   result += (-0.5) * tmp_1056;
   std::complex<double> tmp_1059;
   std::complex<double> tmp_1060;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1060 += AbsSqr(CpbarFsFsAhPL(gI2))*B1(p,MFs,MAh(gI2));
   }
   tmp_1059 += tmp_1060;
   result += (-0.5) * tmp_1059;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1061;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1062;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1062 += B0(p,MCha(gI2),MSt(gI1))*Conj(CpbarFbStChaPL(gI1,gI2
            ))*CpbarFbStChaPR(gI1,gI2)*MCha(gI2);
      }
      tmp_1061 += tmp_1062;
   }
   result += tmp_1061;
   std::complex<double> tmp_1063;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1064;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1064 += B0(p,MChi(gI2),MSb(gI1))*Conj(CpbarFbSbChiPL(gI1,gI2
            ))*CpbarFbSbChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1063 += tmp_1064;
   }
   result += tmp_1063;
   result += -5.333333333333333*MFb*B0(p,MFb,0)*Conj(CpbarFbVGFbPR())*
      CpbarFbVGFbPL();
   result += -4*MFb*B0(p,MFb,0)*Conj(CpbarFbVPFbPR())*CpbarFbVPFbPL();
   result += -4*MFb*B0(p,MFb,MVZ)*Conj(CpbarFbVZFbPR())*CpbarFbVZFbPL();
   std::complex<double> tmp_1065;
   std::complex<double> tmp_1066;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1066 += B0(p,MFb,Mhh(gI1))*Conj(CpbarFbhhFbPL(gI1))*CpbarFbhhFbPR(
         gI1);
   }
   tmp_1065 += tmp_1066;
   result += (MFb) * tmp_1065;
   std::complex<double> tmp_1067;
   std::complex<double> tmp_1068;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1068 += B0(p,MFb,MAh(gI2))*Conj(CpbarFbFbAhPL(gI2))*CpbarFbFbAhPR(
         gI2);
   }
   tmp_1067 += tmp_1068;
   result += (MFb) * tmp_1067;
   result += -4*MFt*B0(p,MFt,MVWm)*Conj(CpbarFbVWmFtPR(1))*CpbarFbVWmFtPL(1);
   std::complex<double> tmp_1069;
   std::complex<double> tmp_1070;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1070 += B0(p,MFt,MHpm(gI1))*Conj(CpbarFbHpmFtPL(gI1,1))*
         CpbarFbHpmFtPR(gI1,1);
   }
   tmp_1069 += tmp_1070;
   result += (MFt) * tmp_1069;
   std::complex<double> tmp_1071;
   std::complex<double> tmp_1072;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1072 += B0(p,MGlu,MSb(gI1))*Conj(CpbarFbSbGluPL(gI1,1))*
         CpbarFbSbGluPR(gI1,1);
   }
   tmp_1071 += tmp_1072;
   result += (1.3333333333333333*MGlu) * tmp_1071;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_PR(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFbVGFbPL())*B1(p,MFb,0);
   result += -(AbsSqr(CpbarFbVPFbPL())*B1(p,MFb,0));
   result += -(AbsSqr(CpbarFbVWmFtPL(1))*B1(p,MFt,MVWm));
   result += -(AbsSqr(CpbarFbVZFbPL())*B1(p,MFb,MVZ));
   std::complex<double> tmp_1073;
   std::complex<double> tmp_1074;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1074 += AbsSqr(CpbarFbhhFbPR(gI1))*B1(p,MFb,Mhh(gI1));
   }
   tmp_1073 += tmp_1074;
   result += (-0.5) * tmp_1073;
   std::complex<double> tmp_1075;
   std::complex<double> tmp_1076;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1076 += AbsSqr(CpbarFbHpmFtPR(gI1,1))*B1(p,MFt,MHpm(gI1));
   }
   tmp_1075 += tmp_1076;
   result += (-0.5) * tmp_1075;
   std::complex<double> tmp_1077;
   std::complex<double> tmp_1078;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1078 += AbsSqr(CpbarFbSbGluPR(gI1,1))*B1(p,MGlu,MSb(gI1));
   }
   tmp_1077 += tmp_1078;
   result += (-0.6666666666666666) * tmp_1077;
   std::complex<double> tmp_1079;
   std::complex<double> tmp_1080;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1081;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1081 += AbsSqr(CpbarFbStChaPR(gI1,gI2))*B1(p,MCha(gI2),MSt(
            gI1));
      }
      tmp_1080 += tmp_1081;
   }
   tmp_1079 += tmp_1080;
   result += (-0.5) * tmp_1079;
   std::complex<double> tmp_1082;
   std::complex<double> tmp_1083;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1084;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1084 += AbsSqr(CpbarFbSbChiPR(gI1,gI2))*B1(p,MChi(gI2),MSb(
            gI1));
      }
      tmp_1083 += tmp_1084;
   }
   tmp_1082 += tmp_1083;
   result += (-0.5) * tmp_1082;
   std::complex<double> tmp_1085;
   std::complex<double> tmp_1086;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1086 += AbsSqr(CpbarFbFbAhPR(gI2))*B1(p,MFb,MAh(gI2));
   }
   tmp_1085 += tmp_1086;
   result += (-0.5) * tmp_1085;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_PL(double p ) const
{
   std::complex<double> result;

   result += -1.3333333333333333*AbsSqr(CpbarFbVGFbPR())*B1(p,MFb,0);
   result += -(AbsSqr(CpbarFbVPFbPR())*B1(p,MFb,0));
   result += -(AbsSqr(CpbarFbVWmFtPR(1))*B1(p,MFt,MVWm));
   result += -(AbsSqr(CpbarFbVZFbPR())*B1(p,MFb,MVZ));
   std::complex<double> tmp_1087;
   std::complex<double> tmp_1088;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1088 += AbsSqr(CpbarFbhhFbPL(gI1))*B1(p,MFb,Mhh(gI1));
   }
   tmp_1087 += tmp_1088;
   result += (-0.5) * tmp_1087;
   std::complex<double> tmp_1089;
   std::complex<double> tmp_1090;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1090 += AbsSqr(CpbarFbHpmFtPL(gI1,1))*B1(p,MFt,MHpm(gI1));
   }
   tmp_1089 += tmp_1090;
   result += (-0.5) * tmp_1089;
   std::complex<double> tmp_1091;
   std::complex<double> tmp_1092;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1092 += AbsSqr(CpbarFbSbGluPL(gI1,1))*B1(p,MGlu,MSb(gI1));
   }
   tmp_1091 += tmp_1092;
   result += (-0.6666666666666666) * tmp_1091;
   std::complex<double> tmp_1093;
   std::complex<double> tmp_1094;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1095;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1095 += AbsSqr(CpbarFbStChaPL(gI1,gI2))*B1(p,MCha(gI2),MSt(
            gI1));
      }
      tmp_1094 += tmp_1095;
   }
   tmp_1093 += tmp_1094;
   result += (-0.5) * tmp_1093;
   std::complex<double> tmp_1096;
   std::complex<double> tmp_1097;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1098;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1098 += AbsSqr(CpbarFbSbChiPL(gI1,gI2))*B1(p,MChi(gI2),MSb(
            gI1));
      }
      tmp_1097 += tmp_1098;
   }
   tmp_1096 += tmp_1097;
   result += (-0.5) * tmp_1096;
   std::complex<double> tmp_1099;
   std::complex<double> tmp_1100;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1100 += AbsSqr(CpbarFbFbAhPL(gI2))*B1(p,MFb,MAh(gI2));
   }
   tmp_1099 += tmp_1100;
   result += (-0.5) * tmp_1099;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1101;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1102;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1102 += B0(p,MChi(gI2),MSu(gI1))*Conj(CpbarFuSuChiPL(gI1,gI2
            ))*CpbarFuSuChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1101 += tmp_1102;
   }
   result += tmp_1101;
   std::complex<double> tmp_1103;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1104;
      std::complex<double> tmp_1105;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1105 += B0(p,MCha(gI1),MSd(gI2))*Conj(CpbarFubarChaSdPL(gI1,
            gI2))*CpbarFubarChaSdPR(gI1,gI2);
      }
      tmp_1104 += tmp_1105;
      tmp_1103 += (MCha(gI1)) * tmp_1104;
   }
   result += tmp_1103;
   result += -4*MFd*B0(p,MFd,MVWm)*Conj(CpbarFuconjVWmFdPR(1))*
      CpbarFuconjVWmFdPL(1);
   std::complex<double> tmp_1106;
   std::complex<double> tmp_1107;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1107 += B0(p,MFd,MHpm(gI1))*Conj(CpbarFuconjHpmFdPL(gI1,1))*
         CpbarFuconjHpmFdPR(gI1,1);
   }
   tmp_1106 += tmp_1107;
   result += (MFd) * tmp_1106;
   result += -5.333333333333333*MFu*B0(p,MFu,0)*Conj(CpbarFuVGFuPR())*
      CpbarFuVGFuPL();
   result += -4*MFu*B0(p,MFu,0)*Conj(CpbarFuVPFuPR())*CpbarFuVPFuPL();
   result += -4*MFu*B0(p,MFu,MVZ)*Conj(CpbarFuVZFuPR())*CpbarFuVZFuPL();
   std::complex<double> tmp_1108;
   std::complex<double> tmp_1109;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1109 += B0(p,MFu,Mhh(gI1))*Conj(CpbarFuhhFuPL(gI1))*CpbarFuhhFuPR(
         gI1);
   }
   tmp_1108 += tmp_1109;
   result += (MFu) * tmp_1108;
   std::complex<double> tmp_1110;
   std::complex<double> tmp_1111;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1111 += B0(p,MFu,MAh(gI2))*Conj(CpbarFuFuAhPL(gI2))*CpbarFuFuAhPR(
         gI2);
   }
   tmp_1110 += tmp_1111;
   result += (MFu) * tmp_1110;
   std::complex<double> tmp_1112;
   std::complex<double> tmp_1113;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1113 += B0(p,MGlu,MSu(gI1))*Conj(CpbarFuSuGluPL(gI1,1))*
         CpbarFuSuGluPR(gI1,1);
   }
   tmp_1112 += tmp_1113;
   result += (1.3333333333333333*MGlu) * tmp_1112;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFuconjVWmFdPL(1))*B1(p,MFd,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFuVGFuPL())*B1(p,MFu,0);
   result += -(AbsSqr(CpbarFuVPFuPL())*B1(p,MFu,0));
   result += -(AbsSqr(CpbarFuVZFuPL())*B1(p,MFu,MVZ));
   std::complex<double> tmp_1114;
   std::complex<double> tmp_1115;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1115 += AbsSqr(CpbarFuconjHpmFdPR(gI1,1))*B1(p,MFd,MHpm(gI1));
   }
   tmp_1114 += tmp_1115;
   result += (-0.5) * tmp_1114;
   std::complex<double> tmp_1116;
   std::complex<double> tmp_1117;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1117 += AbsSqr(CpbarFuhhFuPR(gI1))*B1(p,MFu,Mhh(gI1));
   }
   tmp_1116 += tmp_1117;
   result += (-0.5) * tmp_1116;
   std::complex<double> tmp_1118;
   std::complex<double> tmp_1119;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1119 += AbsSqr(CpbarFuSuGluPR(gI1,1))*B1(p,MGlu,MSu(gI1));
   }
   tmp_1118 += tmp_1119;
   result += (-0.6666666666666666) * tmp_1118;
   std::complex<double> tmp_1120;
   std::complex<double> tmp_1121;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1122;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1122 += AbsSqr(CpbarFubarChaSdPR(gI1,gI2))*B1(p,MCha(gI1),
            MSd(gI2));
      }
      tmp_1121 += tmp_1122;
   }
   tmp_1120 += tmp_1121;
   result += (-0.5) * tmp_1120;
   std::complex<double> tmp_1123;
   std::complex<double> tmp_1124;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1125;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1125 += AbsSqr(CpbarFuSuChiPR(gI1,gI2))*B1(p,MChi(gI2),MSu(
            gI1));
      }
      tmp_1124 += tmp_1125;
   }
   tmp_1123 += tmp_1124;
   result += (-0.5) * tmp_1123;
   std::complex<double> tmp_1126;
   std::complex<double> tmp_1127;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1127 += AbsSqr(CpbarFuFuAhPR(gI2))*B1(p,MFu,MAh(gI2));
   }
   tmp_1126 += tmp_1127;
   result += (-0.5) * tmp_1126;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFuconjVWmFdPR(1))*B1(p,MFd,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFuVGFuPR())*B1(p,MFu,0);
   result += -(AbsSqr(CpbarFuVPFuPR())*B1(p,MFu,0));
   result += -(AbsSqr(CpbarFuVZFuPR())*B1(p,MFu,MVZ));
   std::complex<double> tmp_1128;
   std::complex<double> tmp_1129;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1129 += AbsSqr(CpbarFuconjHpmFdPL(gI1,1))*B1(p,MFd,MHpm(gI1));
   }
   tmp_1128 += tmp_1129;
   result += (-0.5) * tmp_1128;
   std::complex<double> tmp_1130;
   std::complex<double> tmp_1131;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1131 += AbsSqr(CpbarFuhhFuPL(gI1))*B1(p,MFu,Mhh(gI1));
   }
   tmp_1130 += tmp_1131;
   result += (-0.5) * tmp_1130;
   std::complex<double> tmp_1132;
   std::complex<double> tmp_1133;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1133 += AbsSqr(CpbarFuSuGluPL(gI1,1))*B1(p,MGlu,MSu(gI1));
   }
   tmp_1132 += tmp_1133;
   result += (-0.6666666666666666) * tmp_1132;
   std::complex<double> tmp_1134;
   std::complex<double> tmp_1135;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1136;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1136 += AbsSqr(CpbarFubarChaSdPL(gI1,gI2))*B1(p,MCha(gI1),
            MSd(gI2));
      }
      tmp_1135 += tmp_1136;
   }
   tmp_1134 += tmp_1135;
   result += (-0.5) * tmp_1134;
   std::complex<double> tmp_1137;
   std::complex<double> tmp_1138;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1139;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1139 += AbsSqr(CpbarFuSuChiPL(gI1,gI2))*B1(p,MChi(gI2),MSu(
            gI1));
      }
      tmp_1138 += tmp_1139;
   }
   tmp_1137 += tmp_1138;
   result += (-0.5) * tmp_1137;
   std::complex<double> tmp_1140;
   std::complex<double> tmp_1141;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1141 += AbsSqr(CpbarFuFuAhPL(gI2))*B1(p,MFu,MAh(gI2));
   }
   tmp_1140 += tmp_1141;
   result += (-0.5) * tmp_1140;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fc_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1142;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1143;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1143 += B0(p,MChi(gI2),MSc(gI1))*Conj(CpbarFcScChiPL(gI1,gI2
            ))*CpbarFcScChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1142 += tmp_1143;
   }
   result += tmp_1142;
   std::complex<double> tmp_1144;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1145;
      std::complex<double> tmp_1146;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1146 += B0(p,MCha(gI1),MSs(gI2))*Conj(CpbarFcbarChaSsPL(gI1,
            gI2))*CpbarFcbarChaSsPR(gI1,gI2);
      }
      tmp_1145 += tmp_1146;
      tmp_1144 += (MCha(gI1)) * tmp_1145;
   }
   result += tmp_1144;
   result += -5.333333333333333*MFc*B0(p,MFc,0)*Conj(CpbarFcVGFcPR())*
      CpbarFcVGFcPL();
   result += -4*MFc*B0(p,MFc,0)*Conj(CpbarFcVPFcPR())*CpbarFcVPFcPL();
   result += -4*MFc*B0(p,MFc,MVZ)*Conj(CpbarFcVZFcPR())*CpbarFcVZFcPL();
   std::complex<double> tmp_1147;
   std::complex<double> tmp_1148;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1148 += B0(p,MFc,Mhh(gI1))*Conj(CpbarFchhFcPL(gI1))*CpbarFchhFcPR(
         gI1);
   }
   tmp_1147 += tmp_1148;
   result += (MFc) * tmp_1147;
   std::complex<double> tmp_1149;
   std::complex<double> tmp_1150;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1150 += B0(p,MFc,MAh(gI2))*Conj(CpbarFcFcAhPL(gI2))*CpbarFcFcAhPR(
         gI2);
   }
   tmp_1149 += tmp_1150;
   result += (MFc) * tmp_1149;
   result += -4*MFs*B0(p,MFs,MVWm)*Conj(CpbarFcconjVWmFsPR(1))*
      CpbarFcconjVWmFsPL(1);
   std::complex<double> tmp_1151;
   std::complex<double> tmp_1152;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1152 += B0(p,MFs,MHpm(gI1))*Conj(CpbarFcconjHpmFsPL(gI1,1))*
         CpbarFcconjHpmFsPR(gI1,1);
   }
   tmp_1151 += tmp_1152;
   result += (MFs) * tmp_1151;
   std::complex<double> tmp_1153;
   std::complex<double> tmp_1154;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1154 += B0(p,MGlu,MSc(gI1))*Conj(CpbarFcScGluPL(gI1,1))*
         CpbarFcScGluPR(gI1,1);
   }
   tmp_1153 += tmp_1154;
   result += (1.3333333333333333*MGlu) * tmp_1153;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fc_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFcconjVWmFsPL(1))*B1(p,MFs,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFcVGFcPL())*B1(p,MFc,0);
   result += -(AbsSqr(CpbarFcVPFcPL())*B1(p,MFc,0));
   result += -(AbsSqr(CpbarFcVZFcPL())*B1(p,MFc,MVZ));
   std::complex<double> tmp_1155;
   std::complex<double> tmp_1156;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1156 += AbsSqr(CpbarFcconjHpmFsPR(gI1,1))*B1(p,MFs,MHpm(gI1));
   }
   tmp_1155 += tmp_1156;
   result += (-0.5) * tmp_1155;
   std::complex<double> tmp_1157;
   std::complex<double> tmp_1158;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1158 += AbsSqr(CpbarFchhFcPR(gI1))*B1(p,MFc,Mhh(gI1));
   }
   tmp_1157 += tmp_1158;
   result += (-0.5) * tmp_1157;
   std::complex<double> tmp_1159;
   std::complex<double> tmp_1160;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1160 += AbsSqr(CpbarFcScGluPR(gI1,1))*B1(p,MGlu,MSc(gI1));
   }
   tmp_1159 += tmp_1160;
   result += (-0.6666666666666666) * tmp_1159;
   std::complex<double> tmp_1161;
   std::complex<double> tmp_1162;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1163;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1163 += AbsSqr(CpbarFcbarChaSsPR(gI1,gI2))*B1(p,MCha(gI1),
            MSs(gI2));
      }
      tmp_1162 += tmp_1163;
   }
   tmp_1161 += tmp_1162;
   result += (-0.5) * tmp_1161;
   std::complex<double> tmp_1164;
   std::complex<double> tmp_1165;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1166;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1166 += AbsSqr(CpbarFcScChiPR(gI1,gI2))*B1(p,MChi(gI2),MSc(
            gI1));
      }
      tmp_1165 += tmp_1166;
   }
   tmp_1164 += tmp_1165;
   result += (-0.5) * tmp_1164;
   std::complex<double> tmp_1167;
   std::complex<double> tmp_1168;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1168 += AbsSqr(CpbarFcFcAhPR(gI2))*B1(p,MFc,MAh(gI2));
   }
   tmp_1167 += tmp_1168;
   result += (-0.5) * tmp_1167;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fc_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFcconjVWmFsPR(1))*B1(p,MFs,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFcVGFcPR())*B1(p,MFc,0);
   result += -(AbsSqr(CpbarFcVPFcPR())*B1(p,MFc,0));
   result += -(AbsSqr(CpbarFcVZFcPR())*B1(p,MFc,MVZ));
   std::complex<double> tmp_1169;
   std::complex<double> tmp_1170;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1170 += AbsSqr(CpbarFcconjHpmFsPL(gI1,1))*B1(p,MFs,MHpm(gI1));
   }
   tmp_1169 += tmp_1170;
   result += (-0.5) * tmp_1169;
   std::complex<double> tmp_1171;
   std::complex<double> tmp_1172;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1172 += AbsSqr(CpbarFchhFcPL(gI1))*B1(p,MFc,Mhh(gI1));
   }
   tmp_1171 += tmp_1172;
   result += (-0.5) * tmp_1171;
   std::complex<double> tmp_1173;
   std::complex<double> tmp_1174;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1174 += AbsSqr(CpbarFcScGluPL(gI1,1))*B1(p,MGlu,MSc(gI1));
   }
   tmp_1173 += tmp_1174;
   result += (-0.6666666666666666) * tmp_1173;
   std::complex<double> tmp_1175;
   std::complex<double> tmp_1176;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1177;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1177 += AbsSqr(CpbarFcbarChaSsPL(gI1,gI2))*B1(p,MCha(gI1),
            MSs(gI2));
      }
      tmp_1176 += tmp_1177;
   }
   tmp_1175 += tmp_1176;
   result += (-0.5) * tmp_1175;
   std::complex<double> tmp_1178;
   std::complex<double> tmp_1179;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1180;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1180 += AbsSqr(CpbarFcScChiPL(gI1,gI2))*B1(p,MChi(gI2),MSc(
            gI1));
      }
      tmp_1179 += tmp_1180;
   }
   tmp_1178 += tmp_1179;
   result += (-0.5) * tmp_1178;
   std::complex<double> tmp_1181;
   std::complex<double> tmp_1182;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1182 += AbsSqr(CpbarFcFcAhPL(gI2))*B1(p,MFc,MAh(gI2));
   }
   tmp_1181 += tmp_1182;
   result += (-0.5) * tmp_1181;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1183;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1184;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1184 += B0(p,MChi(gI2),MSt(gI1))*Conj(CpbarFtStChiPL(gI1,gI2
            ))*CpbarFtStChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1183 += tmp_1184;
   }
   result += tmp_1183;
   std::complex<double> tmp_1185;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1186;
      std::complex<double> tmp_1187;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1187 += B0(p,MCha(gI1),MSb(gI2))*Conj(CpbarFtbarChaSbPL(gI1,
            gI2))*CpbarFtbarChaSbPR(gI1,gI2);
      }
      tmp_1186 += tmp_1187;
      tmp_1185 += (MCha(gI1)) * tmp_1186;
   }
   result += tmp_1185;
   result += -4*MFb*B0(p,MFb,MVWm)*Conj(CpbarFtconjVWmFbPR(1))*
      CpbarFtconjVWmFbPL(1);
   std::complex<double> tmp_1188;
   std::complex<double> tmp_1189;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1189 += B0(p,MFb,MHpm(gI1))*Conj(CpbarFtconjHpmFbPL(gI1,1))*
         CpbarFtconjHpmFbPR(gI1,1);
   }
   tmp_1188 += tmp_1189;
   result += (MFb) * tmp_1188;
   result += -5.333333333333333*MFt*B0(p,MFt,0)*Conj(CpbarFtVGFtPR())*
      CpbarFtVGFtPL();
   result += -4*MFt*B0(p,MFt,0)*Conj(CpbarFtVPFtPR())*CpbarFtVPFtPL();
   result += -4*MFt*B0(p,MFt,MVZ)*Conj(CpbarFtVZFtPR())*CpbarFtVZFtPL();
   std::complex<double> tmp_1190;
   std::complex<double> tmp_1191;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1191 += B0(p,MFt,Mhh(gI1))*Conj(CpbarFthhFtPL(gI1))*CpbarFthhFtPR(
         gI1);
   }
   tmp_1190 += tmp_1191;
   result += (MFt) * tmp_1190;
   std::complex<double> tmp_1192;
   std::complex<double> tmp_1193;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1193 += B0(p,MFt,MAh(gI2))*Conj(CpbarFtFtAhPL(gI2))*CpbarFtFtAhPR(
         gI2);
   }
   tmp_1192 += tmp_1193;
   result += (MFt) * tmp_1192;
   std::complex<double> tmp_1194;
   std::complex<double> tmp_1195;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1195 += B0(p,MGlu,MSt(gI1))*Conj(CpbarFtStGluPL(gI1,1))*
         CpbarFtStGluPR(gI1,1);
   }
   tmp_1194 += tmp_1195;
   result += (1.3333333333333333*MGlu) * tmp_1194;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPL(1))*B1(p,MFb,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFtVGFtPL())*B1(p,MFt,0);
   result += -(AbsSqr(CpbarFtVPFtPL())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPL())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1196;
   std::complex<double> tmp_1197;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1197 += AbsSqr(CpbarFtconjHpmFbPR(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1196 += tmp_1197;
   result += (-0.5) * tmp_1196;
   std::complex<double> tmp_1198;
   std::complex<double> tmp_1199;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1199 += AbsSqr(CpbarFthhFtPR(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1198 += tmp_1199;
   result += (-0.5) * tmp_1198;
   std::complex<double> tmp_1200;
   std::complex<double> tmp_1201;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1201 += AbsSqr(CpbarFtStGluPR(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1200 += tmp_1201;
   result += (-0.6666666666666666) * tmp_1200;
   std::complex<double> tmp_1202;
   std::complex<double> tmp_1203;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1204;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1204 += AbsSqr(CpbarFtbarChaSbPR(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1203 += tmp_1204;
   }
   tmp_1202 += tmp_1203;
   result += (-0.5) * tmp_1202;
   std::complex<double> tmp_1205;
   std::complex<double> tmp_1206;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1207;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1207 += AbsSqr(CpbarFtStChiPR(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1206 += tmp_1207;
   }
   tmp_1205 += tmp_1206;
   result += (-0.5) * tmp_1205;
   std::complex<double> tmp_1208;
   std::complex<double> tmp_1209;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1209 += AbsSqr(CpbarFtFtAhPR(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1208 += tmp_1209;
   result += (-0.5) * tmp_1208;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPR(1))*B1(p,MFb,MVWm));
   result += -1.3333333333333333*AbsSqr(CpbarFtVGFtPR())*B1(p,MFt,0);
   result += -(AbsSqr(CpbarFtVPFtPR())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPR())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1210;
   std::complex<double> tmp_1211;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1211 += AbsSqr(CpbarFtconjHpmFbPL(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1210 += tmp_1211;
   result += (-0.5) * tmp_1210;
   std::complex<double> tmp_1212;
   std::complex<double> tmp_1213;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1213 += AbsSqr(CpbarFthhFtPL(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1212 += tmp_1213;
   result += (-0.5) * tmp_1212;
   std::complex<double> tmp_1214;
   std::complex<double> tmp_1215;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1215 += AbsSqr(CpbarFtStGluPL(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1214 += tmp_1215;
   result += (-0.6666666666666666) * tmp_1214;
   std::complex<double> tmp_1216;
   std::complex<double> tmp_1217;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1218;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1218 += AbsSqr(CpbarFtbarChaSbPL(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1217 += tmp_1218;
   }
   tmp_1216 += tmp_1217;
   result += (-0.5) * tmp_1216;
   std::complex<double> tmp_1219;
   std::complex<double> tmp_1220;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1221;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1221 += AbsSqr(CpbarFtStChiPL(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1220 += tmp_1221;
   }
   tmp_1219 += tmp_1220;
   result += (-0.5) * tmp_1219;
   std::complex<double> tmp_1222;
   std::complex<double> tmp_1223;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1223 += AbsSqr(CpbarFtFtAhPL(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1222 += tmp_1223;
   result += (-0.5) * tmp_1222;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fve_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1224;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1225;
      std::complex<double> tmp_1226;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1226 += B0(p,MCha(gI1),MSe(gI2))*Conj(CpbarFvebarChaSePL(gI1
            ,gI2))*CpbarFvebarChaSePR(gI1,gI2);
      }
      tmp_1225 += tmp_1226;
      tmp_1224 += (MCha(gI1)) * tmp_1225;
   }
   result += tmp_1224;
   std::complex<double> tmp_1227;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1227 += B0(p,MChi(gI2),MSveL)*Conj(CpbarFveSveLChiPL(gI2))*
         CpbarFveSveLChiPR(gI2)*MChi(gI2);
   }
   result += tmp_1227;
   result += -4*MFe*B0(p,MFe,MVWm)*Conj(CpbarFveconjVWmFePR())*
      CpbarFveconjVWmFePL();
   std::complex<double> tmp_1228;
   std::complex<double> tmp_1229;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1229 += B0(p,MFe,MHpm(gI1))*Conj(CpbarFveconjHpmFePL(gI1))*
         CpbarFveconjHpmFePR(gI1);
   }
   tmp_1228 += tmp_1229;
   result += (MFe) * tmp_1228;
   result += -4*MFve*B0(p,MFve,MVZ)*Conj(CpbarFveVZFvePR())*CpbarFveVZFvePL();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fve_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFveconjVWmFePL())*B1(p,MFe,MVWm));
   result += -(AbsSqr(CpbarFveVZFvePL())*B1(p,MFve,MVZ));
   std::complex<double> tmp_1230;
   std::complex<double> tmp_1231;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1231 += AbsSqr(CpbarFveconjHpmFePR(gI1))*B1(p,MFe,MHpm(gI1));
   }
   tmp_1230 += tmp_1231;
   result += (-0.5) * tmp_1230;
   std::complex<double> tmp_1232;
   std::complex<double> tmp_1233;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1234;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1234 += AbsSqr(CpbarFvebarChaSePR(gI1,gI2))*B1(p,MCha(gI1),
            MSe(gI2));
      }
      tmp_1233 += tmp_1234;
   }
   tmp_1232 += tmp_1233;
   result += (-0.5) * tmp_1232;
   std::complex<double> tmp_1235;
   std::complex<double> tmp_1236;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1236 += AbsSqr(CpbarFveSveLChiPR(gI2))*B1(p,MChi(gI2),MSveL);
   }
   tmp_1235 += tmp_1236;
   result += (-0.5) * tmp_1235;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fve_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFveconjVWmFePR())*B1(p,MFe,MVWm));
   result += -(AbsSqr(CpbarFveVZFvePR())*B1(p,MFve,MVZ));
   std::complex<double> tmp_1237;
   std::complex<double> tmp_1238;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1238 += AbsSqr(CpbarFveconjHpmFePL(gI1))*B1(p,MFe,MHpm(gI1));
   }
   tmp_1237 += tmp_1238;
   result += (-0.5) * tmp_1237;
   std::complex<double> tmp_1239;
   std::complex<double> tmp_1240;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1241;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1241 += AbsSqr(CpbarFvebarChaSePL(gI1,gI2))*B1(p,MCha(gI1),
            MSe(gI2));
      }
      tmp_1240 += tmp_1241;
   }
   tmp_1239 += tmp_1240;
   result += (-0.5) * tmp_1239;
   std::complex<double> tmp_1242;
   std::complex<double> tmp_1243;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1243 += AbsSqr(CpbarFveSveLChiPL(gI2))*B1(p,MChi(gI2),MSveL);
   }
   tmp_1242 += tmp_1243;
   result += (-0.5) * tmp_1242;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvm_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1244;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1245;
      std::complex<double> tmp_1246;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1246 += B0(p,MCha(gI1),MSm(gI2))*Conj(CpbarFvmbarChaSmPL(gI1
            ,gI2))*CpbarFvmbarChaSmPR(gI1,gI2);
      }
      tmp_1245 += tmp_1246;
      tmp_1244 += (MCha(gI1)) * tmp_1245;
   }
   result += tmp_1244;
   std::complex<double> tmp_1247;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1247 += B0(p,MChi(gI2),MSvmL)*Conj(CpbarFvmSvmLChiPL(gI2))*
         CpbarFvmSvmLChiPR(gI2)*MChi(gI2);
   }
   result += tmp_1247;
   result += -4*MFm*B0(p,MFm,MVWm)*Conj(CpbarFvmconjVWmFmPR())*
      CpbarFvmconjVWmFmPL();
   std::complex<double> tmp_1248;
   std::complex<double> tmp_1249;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1249 += B0(p,MFm,MHpm(gI1))*Conj(CpbarFvmconjHpmFmPL(gI1))*
         CpbarFvmconjHpmFmPR(gI1);
   }
   tmp_1248 += tmp_1249;
   result += (MFm) * tmp_1248;
   result += -4*MFvm*B0(p,MFvm,MVZ)*Conj(CpbarFvmVZFvmPR())*CpbarFvmVZFvmPL();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvm_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFvmconjVWmFmPL())*B1(p,MFm,MVWm));
   result += -(AbsSqr(CpbarFvmVZFvmPL())*B1(p,MFvm,MVZ));
   std::complex<double> tmp_1250;
   std::complex<double> tmp_1251;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1251 += AbsSqr(CpbarFvmconjHpmFmPR(gI1))*B1(p,MFm,MHpm(gI1));
   }
   tmp_1250 += tmp_1251;
   result += (-0.5) * tmp_1250;
   std::complex<double> tmp_1252;
   std::complex<double> tmp_1253;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1254;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1254 += AbsSqr(CpbarFvmbarChaSmPR(gI1,gI2))*B1(p,MCha(gI1),
            MSm(gI2));
      }
      tmp_1253 += tmp_1254;
   }
   tmp_1252 += tmp_1253;
   result += (-0.5) * tmp_1252;
   std::complex<double> tmp_1255;
   std::complex<double> tmp_1256;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1256 += AbsSqr(CpbarFvmSvmLChiPR(gI2))*B1(p,MChi(gI2),MSvmL);
   }
   tmp_1255 += tmp_1256;
   result += (-0.5) * tmp_1255;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvm_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFvmconjVWmFmPR())*B1(p,MFm,MVWm));
   result += -(AbsSqr(CpbarFvmVZFvmPR())*B1(p,MFvm,MVZ));
   std::complex<double> tmp_1257;
   std::complex<double> tmp_1258;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1258 += AbsSqr(CpbarFvmconjHpmFmPL(gI1))*B1(p,MFm,MHpm(gI1));
   }
   tmp_1257 += tmp_1258;
   result += (-0.5) * tmp_1257;
   std::complex<double> tmp_1259;
   std::complex<double> tmp_1260;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1261;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1261 += AbsSqr(CpbarFvmbarChaSmPL(gI1,gI2))*B1(p,MCha(gI1),
            MSm(gI2));
      }
      tmp_1260 += tmp_1261;
   }
   tmp_1259 += tmp_1260;
   result += (-0.5) * tmp_1259;
   std::complex<double> tmp_1262;
   std::complex<double> tmp_1263;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1263 += AbsSqr(CpbarFvmSvmLChiPL(gI2))*B1(p,MChi(gI2),MSvmL);
   }
   tmp_1262 += tmp_1263;
   result += (-0.5) * tmp_1262;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvt_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1264;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1265;
      std::complex<double> tmp_1266;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1266 += B0(p,MCha(gI1),MStau(gI2))*Conj(CpbarFvtbarChaStauPL
            (gI1,gI2))*CpbarFvtbarChaStauPR(gI1,gI2);
      }
      tmp_1265 += tmp_1266;
      tmp_1264 += (MCha(gI1)) * tmp_1265;
   }
   result += tmp_1264;
   std::complex<double> tmp_1267;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1267 += B0(p,MChi(gI2),MSvtL)*Conj(CpbarFvtSvtLChiPL(gI2))*
         CpbarFvtSvtLChiPR(gI2)*MChi(gI2);
   }
   result += tmp_1267;
   result += -4*MFtau*B0(p,MFtau,MVWm)*Conj(CpbarFvtconjVWmFtauPR())*
      CpbarFvtconjVWmFtauPL();
   std::complex<double> tmp_1268;
   std::complex<double> tmp_1269;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1269 += B0(p,MFtau,MHpm(gI1))*Conj(CpbarFvtconjHpmFtauPL(gI1))*
         CpbarFvtconjHpmFtauPR(gI1);
   }
   tmp_1268 += tmp_1269;
   result += (MFtau) * tmp_1268;
   result += -4*MFvt*B0(p,MFvt,MVZ)*Conj(CpbarFvtVZFvtPR())*CpbarFvtVZFvtPL();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvt_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFvtconjVWmFtauPL())*B1(p,MFtau,MVWm));
   result += -(AbsSqr(CpbarFvtVZFvtPL())*B1(p,MFvt,MVZ));
   std::complex<double> tmp_1270;
   std::complex<double> tmp_1271;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1271 += AbsSqr(CpbarFvtconjHpmFtauPR(gI1))*B1(p,MFtau,MHpm(gI1));
   }
   tmp_1270 += tmp_1271;
   result += (-0.5) * tmp_1270;
   std::complex<double> tmp_1272;
   std::complex<double> tmp_1273;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1274;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1274 += AbsSqr(CpbarFvtbarChaStauPR(gI1,gI2))*B1(p,MCha(gI1)
            ,MStau(gI2));
      }
      tmp_1273 += tmp_1274;
   }
   tmp_1272 += tmp_1273;
   result += (-0.5) * tmp_1272;
   std::complex<double> tmp_1275;
   std::complex<double> tmp_1276;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1276 += AbsSqr(CpbarFvtSvtLChiPR(gI2))*B1(p,MChi(gI2),MSvtL);
   }
   tmp_1275 += tmp_1276;
   result += (-0.5) * tmp_1275;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fvt_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFvtconjVWmFtauPR())*B1(p,MFtau,MVWm));
   result += -(AbsSqr(CpbarFvtVZFvtPR())*B1(p,MFvt,MVZ));
   std::complex<double> tmp_1277;
   std::complex<double> tmp_1278;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1278 += AbsSqr(CpbarFvtconjHpmFtauPL(gI1))*B1(p,MFtau,MHpm(gI1));
   }
   tmp_1277 += tmp_1278;
   result += (-0.5) * tmp_1277;
   std::complex<double> tmp_1279;
   std::complex<double> tmp_1280;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1281;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1281 += AbsSqr(CpbarFvtbarChaStauPL(gI1,gI2))*B1(p,MCha(gI1)
            ,MStau(gI2));
      }
      tmp_1280 += tmp_1281;
   }
   tmp_1279 += tmp_1280;
   result += (-0.5) * tmp_1279;
   std::complex<double> tmp_1282;
   std::complex<double> tmp_1283;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_1283 += AbsSqr(CpbarFvtSvtLChiPL(gI2))*B1(p,MChi(gI2),MSvtL);
   }
   tmp_1282 += tmp_1283;
   result += (-0.5) * tmp_1282;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1284;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1285;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1285 += B0(p,MChi(gI2),MSe(gI1))*Conj(CpbarFeSeChiPL(gI1,gI2
            ))*CpbarFeSeChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1284 += tmp_1285;
   }
   result += tmp_1284;
   std::complex<double> tmp_1286;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1286 += B0(p,MCha(gI2),MSveL)*Conj(CpbarFeSveLChaPL(gI2))*
         CpbarFeSveLChaPR(gI2)*MCha(gI2);
   }
   result += tmp_1286;
   result += -4*MFe*B0(p,MFe,0)*Conj(CpbarFeVPFePR())*CpbarFeVPFePL();
   result += -4*MFe*B0(p,MFe,MVZ)*Conj(CpbarFeVZFePR())*CpbarFeVZFePL();
   std::complex<double> tmp_1287;
   std::complex<double> tmp_1288;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1288 += B0(p,MFe,Mhh(gI1))*Conj(CpbarFehhFePL(gI1))*CpbarFehhFePR(
         gI1);
   }
   tmp_1287 += tmp_1288;
   result += (MFe) * tmp_1287;
   std::complex<double> tmp_1289;
   std::complex<double> tmp_1290;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1290 += B0(p,MFe,MAh(gI2))*Conj(CpbarFeFeAhPL(gI2))*CpbarFeFeAhPR(
         gI2);
   }
   tmp_1289 += tmp_1290;
   result += (MFe) * tmp_1289;
   result += -4*MFve*B0(p,MFve,MVWm)*Conj(CpbarFeVWmFvePR())*CpbarFeVWmFvePL();
   std::complex<double> tmp_1291;
   std::complex<double> tmp_1292;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1292 += B0(p,MFve,MHpm(gI1))*Conj(CpbarFeHpmFvePL(gI1))*
         CpbarFeHpmFvePR(gI1);
   }
   tmp_1291 += tmp_1292;
   result += (MFve) * tmp_1291;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFeVPFePL())*B1(p,MFe,0));
   result += -(AbsSqr(CpbarFeVWmFvePL())*B1(p,MFve,MVWm));
   result += -(AbsSqr(CpbarFeVZFePL())*B1(p,MFe,MVZ));
   std::complex<double> tmp_1293;
   std::complex<double> tmp_1294;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1294 += AbsSqr(CpbarFehhFePR(gI1))*B1(p,MFe,Mhh(gI1));
   }
   tmp_1293 += tmp_1294;
   result += (-0.5) * tmp_1293;
   std::complex<double> tmp_1295;
   std::complex<double> tmp_1296;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1296 += AbsSqr(CpbarFeHpmFvePR(gI1))*B1(p,MFve,MHpm(gI1));
   }
   tmp_1295 += tmp_1296;
   result += (-0.5) * tmp_1295;
   std::complex<double> tmp_1297;
   std::complex<double> tmp_1298;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1299;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1299 += AbsSqr(CpbarFeSeChiPR(gI1,gI2))*B1(p,MChi(gI2),MSe(
            gI1));
      }
      tmp_1298 += tmp_1299;
   }
   tmp_1297 += tmp_1298;
   result += (-0.5) * tmp_1297;
   std::complex<double> tmp_1300;
   std::complex<double> tmp_1301;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1301 += AbsSqr(CpbarFeFeAhPR(gI2))*B1(p,MFe,MAh(gI2));
   }
   tmp_1300 += tmp_1301;
   result += (-0.5) * tmp_1300;
   std::complex<double> tmp_1302;
   std::complex<double> tmp_1303;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1303 += AbsSqr(CpbarFeSveLChaPR(gI2))*B1(p,MCha(gI2),MSveL);
   }
   tmp_1302 += tmp_1303;
   result += (-0.5) * tmp_1302;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFeVPFePR())*B1(p,MFe,0));
   result += -(AbsSqr(CpbarFeVWmFvePR())*B1(p,MFve,MVWm));
   result += -(AbsSqr(CpbarFeVZFePR())*B1(p,MFe,MVZ));
   std::complex<double> tmp_1304;
   std::complex<double> tmp_1305;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1305 += AbsSqr(CpbarFehhFePL(gI1))*B1(p,MFe,Mhh(gI1));
   }
   tmp_1304 += tmp_1305;
   result += (-0.5) * tmp_1304;
   std::complex<double> tmp_1306;
   std::complex<double> tmp_1307;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1307 += AbsSqr(CpbarFeHpmFvePL(gI1))*B1(p,MFve,MHpm(gI1));
   }
   tmp_1306 += tmp_1307;
   result += (-0.5) * tmp_1306;
   std::complex<double> tmp_1308;
   std::complex<double> tmp_1309;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1310;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1310 += AbsSqr(CpbarFeSeChiPL(gI1,gI2))*B1(p,MChi(gI2),MSe(
            gI1));
      }
      tmp_1309 += tmp_1310;
   }
   tmp_1308 += tmp_1309;
   result += (-0.5) * tmp_1308;
   std::complex<double> tmp_1311;
   std::complex<double> tmp_1312;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1312 += AbsSqr(CpbarFeFeAhPL(gI2))*B1(p,MFe,MAh(gI2));
   }
   tmp_1311 += tmp_1312;
   result += (-0.5) * tmp_1311;
   std::complex<double> tmp_1313;
   std::complex<double> tmp_1314;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1314 += AbsSqr(CpbarFeSveLChaPL(gI2))*B1(p,MCha(gI2),MSveL);
   }
   tmp_1313 += tmp_1314;
   result += (-0.5) * tmp_1313;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fm_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1315;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1316;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1316 += B0(p,MChi(gI2),MSm(gI1))*Conj(CpbarFmSmChiPL(gI1,gI2
            ))*CpbarFmSmChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1315 += tmp_1316;
   }
   result += tmp_1315;
   std::complex<double> tmp_1317;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1317 += B0(p,MCha(gI2),MSvmL)*Conj(CpbarFmSvmLChaPL(gI2))*
         CpbarFmSvmLChaPR(gI2)*MCha(gI2);
   }
   result += tmp_1317;
   result += -4*MFm*B0(p,MFm,0)*Conj(CpbarFmVPFmPR())*CpbarFmVPFmPL();
   result += -4*MFm*B0(p,MFm,MVZ)*Conj(CpbarFmVZFmPR())*CpbarFmVZFmPL();
   std::complex<double> tmp_1318;
   std::complex<double> tmp_1319;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1319 += B0(p,MFm,Mhh(gI1))*Conj(CpbarFmhhFmPL(gI1))*CpbarFmhhFmPR(
         gI1);
   }
   tmp_1318 += tmp_1319;
   result += (MFm) * tmp_1318;
   std::complex<double> tmp_1320;
   std::complex<double> tmp_1321;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1321 += B0(p,MFm,MAh(gI2))*Conj(CpbarFmFmAhPL(gI2))*CpbarFmFmAhPR(
         gI2);
   }
   tmp_1320 += tmp_1321;
   result += (MFm) * tmp_1320;
   result += -4*MFvm*B0(p,MFvm,MVWm)*Conj(CpbarFmVWmFvmPR())*CpbarFmVWmFvmPL();
   std::complex<double> tmp_1322;
   std::complex<double> tmp_1323;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1323 += B0(p,MFvm,MHpm(gI1))*Conj(CpbarFmHpmFvmPL(gI1))*
         CpbarFmHpmFvmPR(gI1);
   }
   tmp_1322 += tmp_1323;
   result += (MFvm) * tmp_1322;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fm_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFmVPFmPL())*B1(p,MFm,0));
   result += -(AbsSqr(CpbarFmVWmFvmPL())*B1(p,MFvm,MVWm));
   result += -(AbsSqr(CpbarFmVZFmPL())*B1(p,MFm,MVZ));
   std::complex<double> tmp_1324;
   std::complex<double> tmp_1325;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1325 += AbsSqr(CpbarFmhhFmPR(gI1))*B1(p,MFm,Mhh(gI1));
   }
   tmp_1324 += tmp_1325;
   result += (-0.5) * tmp_1324;
   std::complex<double> tmp_1326;
   std::complex<double> tmp_1327;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1327 += AbsSqr(CpbarFmHpmFvmPR(gI1))*B1(p,MFvm,MHpm(gI1));
   }
   tmp_1326 += tmp_1327;
   result += (-0.5) * tmp_1326;
   std::complex<double> tmp_1328;
   std::complex<double> tmp_1329;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1330;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1330 += AbsSqr(CpbarFmSmChiPR(gI1,gI2))*B1(p,MChi(gI2),MSm(
            gI1));
      }
      tmp_1329 += tmp_1330;
   }
   tmp_1328 += tmp_1329;
   result += (-0.5) * tmp_1328;
   std::complex<double> tmp_1331;
   std::complex<double> tmp_1332;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1332 += AbsSqr(CpbarFmFmAhPR(gI2))*B1(p,MFm,MAh(gI2));
   }
   tmp_1331 += tmp_1332;
   result += (-0.5) * tmp_1331;
   std::complex<double> tmp_1333;
   std::complex<double> tmp_1334;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1334 += AbsSqr(CpbarFmSvmLChaPR(gI2))*B1(p,MCha(gI2),MSvmL);
   }
   tmp_1333 += tmp_1334;
   result += (-0.5) * tmp_1333;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fm_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFmVPFmPR())*B1(p,MFm,0));
   result += -(AbsSqr(CpbarFmVWmFvmPR())*B1(p,MFvm,MVWm));
   result += -(AbsSqr(CpbarFmVZFmPR())*B1(p,MFm,MVZ));
   std::complex<double> tmp_1335;
   std::complex<double> tmp_1336;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1336 += AbsSqr(CpbarFmhhFmPL(gI1))*B1(p,MFm,Mhh(gI1));
   }
   tmp_1335 += tmp_1336;
   result += (-0.5) * tmp_1335;
   std::complex<double> tmp_1337;
   std::complex<double> tmp_1338;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1338 += AbsSqr(CpbarFmHpmFvmPL(gI1))*B1(p,MFvm,MHpm(gI1));
   }
   tmp_1337 += tmp_1338;
   result += (-0.5) * tmp_1337;
   std::complex<double> tmp_1339;
   std::complex<double> tmp_1340;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1341;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1341 += AbsSqr(CpbarFmSmChiPL(gI1,gI2))*B1(p,MChi(gI2),MSm(
            gI1));
      }
      tmp_1340 += tmp_1341;
   }
   tmp_1339 += tmp_1340;
   result += (-0.5) * tmp_1339;
   std::complex<double> tmp_1342;
   std::complex<double> tmp_1343;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1343 += AbsSqr(CpbarFmFmAhPL(gI2))*B1(p,MFm,MAh(gI2));
   }
   tmp_1342 += tmp_1343;
   result += (-0.5) * tmp_1342;
   std::complex<double> tmp_1344;
   std::complex<double> tmp_1345;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1345 += AbsSqr(CpbarFmSvmLChaPL(gI2))*B1(p,MCha(gI2),MSvmL);
   }
   tmp_1344 += tmp_1345;
   result += (-0.5) * tmp_1344;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1346;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1347;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1347 += B0(p,MChi(gI2),MStau(gI1))*Conj(CpbarFtauStauChiPL(
            gI1,gI2))*CpbarFtauStauChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1346 += tmp_1347;
   }
   result += tmp_1346;
   std::complex<double> tmp_1348;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1348 += B0(p,MCha(gI2),MSvtL)*Conj(CpbarFtauSvtLChaPL(gI2))*
         CpbarFtauSvtLChaPR(gI2)*MCha(gI2);
   }
   result += tmp_1348;
   result += -4*MFtau*B0(p,MFtau,0)*Conj(CpbarFtauVPFtauPR())*CpbarFtauVPFtauPL
      ();
   result += -4*MFtau*B0(p,MFtau,MVZ)*Conj(CpbarFtauVZFtauPR())*
      CpbarFtauVZFtauPL();
   std::complex<double> tmp_1349;
   std::complex<double> tmp_1350;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1350 += B0(p,MFtau,Mhh(gI1))*Conj(CpbarFtauhhFtauPL(gI1))*
         CpbarFtauhhFtauPR(gI1);
   }
   tmp_1349 += tmp_1350;
   result += (MFtau) * tmp_1349;
   std::complex<double> tmp_1351;
   std::complex<double> tmp_1352;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1352 += B0(p,MFtau,MAh(gI2))*Conj(CpbarFtauFtauAhPL(gI2))*
         CpbarFtauFtauAhPR(gI2);
   }
   tmp_1351 += tmp_1352;
   result += (MFtau) * tmp_1351;
   result += -4*MFvt*B0(p,MFvt,MVWm)*Conj(CpbarFtauVWmFvtPR())*
      CpbarFtauVWmFvtPL();
   std::complex<double> tmp_1353;
   std::complex<double> tmp_1354;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1354 += B0(p,MFvt,MHpm(gI1))*Conj(CpbarFtauHpmFvtPL(gI1))*
         CpbarFtauHpmFvtPR(gI1);
   }
   tmp_1353 += tmp_1354;
   result += (MFvt) * tmp_1353;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_PR(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtauVPFtauPL())*B1(p,MFtau,0));
   result += -(AbsSqr(CpbarFtauVWmFvtPL())*B1(p,MFvt,MVWm));
   result += -(AbsSqr(CpbarFtauVZFtauPL())*B1(p,MFtau,MVZ));
   std::complex<double> tmp_1355;
   std::complex<double> tmp_1356;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1356 += AbsSqr(CpbarFtauhhFtauPR(gI1))*B1(p,MFtau,Mhh(gI1));
   }
   tmp_1355 += tmp_1356;
   result += (-0.5) * tmp_1355;
   std::complex<double> tmp_1357;
   std::complex<double> tmp_1358;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1358 += AbsSqr(CpbarFtauHpmFvtPR(gI1))*B1(p,MFvt,MHpm(gI1));
   }
   tmp_1357 += tmp_1358;
   result += (-0.5) * tmp_1357;
   std::complex<double> tmp_1359;
   std::complex<double> tmp_1360;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1361;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1361 += AbsSqr(CpbarFtauStauChiPR(gI1,gI2))*B1(p,MChi(gI2),
            MStau(gI1));
      }
      tmp_1360 += tmp_1361;
   }
   tmp_1359 += tmp_1360;
   result += (-0.5) * tmp_1359;
   std::complex<double> tmp_1362;
   std::complex<double> tmp_1363;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1363 += AbsSqr(CpbarFtauFtauAhPR(gI2))*B1(p,MFtau,MAh(gI2));
   }
   tmp_1362 += tmp_1363;
   result += (-0.5) * tmp_1362;
   std::complex<double> tmp_1364;
   std::complex<double> tmp_1365;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1365 += AbsSqr(CpbarFtauSvtLChaPR(gI2))*B1(p,MCha(gI2),MSvtL);
   }
   tmp_1364 += tmp_1365;
   result += (-0.5) * tmp_1364;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_PL(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtauVPFtauPR())*B1(p,MFtau,0));
   result += -(AbsSqr(CpbarFtauVWmFvtPR())*B1(p,MFvt,MVWm));
   result += -(AbsSqr(CpbarFtauVZFtauPR())*B1(p,MFtau,MVZ));
   std::complex<double> tmp_1366;
   std::complex<double> tmp_1367;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1367 += AbsSqr(CpbarFtauhhFtauPL(gI1))*B1(p,MFtau,Mhh(gI1));
   }
   tmp_1366 += tmp_1367;
   result += (-0.5) * tmp_1366;
   std::complex<double> tmp_1368;
   std::complex<double> tmp_1369;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1369 += AbsSqr(CpbarFtauHpmFvtPL(gI1))*B1(p,MFvt,MHpm(gI1));
   }
   tmp_1368 += tmp_1369;
   result += (-0.5) * tmp_1368;
   std::complex<double> tmp_1370;
   std::complex<double> tmp_1371;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1372;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1372 += AbsSqr(CpbarFtauStauChiPL(gI1,gI2))*B1(p,MChi(gI2),
            MStau(gI1));
      }
      tmp_1371 += tmp_1372;
   }
   tmp_1370 += tmp_1371;
   result += (-0.5) * tmp_1370;
   std::complex<double> tmp_1373;
   std::complex<double> tmp_1374;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1374 += AbsSqr(CpbarFtauFtauAhPL(gI2))*B1(p,MFtau,MAh(gI2));
   }
   tmp_1373 += tmp_1374;
   result += (-0.5) * tmp_1373;
   std::complex<double> tmp_1375;
   std::complex<double> tmp_1376;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1376 += AbsSqr(CpbarFtauSvtLChaPL(gI2))*B1(p,MCha(gI2),MSvtL);
   }
   tmp_1375 += tmp_1376;
   result += (-0.5) * tmp_1375;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpVZconjSveLSveL())*B00(p,MSveL,MSveL);
   result += -4*AbsSqr(CpVZconjSvmLSvmL())*B00(p,MSvmL,MSvmL);
   result += -4*AbsSqr(CpVZconjSvtLSvtL())*B00(p,MSvtL,MSvtL);
   result += A0(MSveL)*CpVZVZconjSveLSveL();
   result += A0(MSvmL)*CpVZVZconjSvmLSvmL();
   result += A0(MSvtL)*CpVZVZconjSvtLSvtL();
   std::complex<double> tmp_1377;
   std::complex<double> tmp_1378;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1378 += AbsSqr(CpVZhhAh(gI1,1))*B00(p,MAh(1),Mhh(gI1));
   }
   tmp_1377 += tmp_1378;
   result += (-4) * tmp_1377;
   std::complex<double> tmp_1379;
   std::complex<double> tmp_1380;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1380 += A0(MSb(gI1))*CpVZVZconjSbSb(gI1,gI1);
   }
   tmp_1379 += tmp_1380;
   result += (3) * tmp_1379;
   std::complex<double> tmp_1381;
   std::complex<double> tmp_1382;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1382 += A0(MSc(gI1))*CpVZVZconjScSc(gI1,gI1);
   }
   tmp_1381 += tmp_1382;
   result += (3) * tmp_1381;
   std::complex<double> tmp_1383;
   std::complex<double> tmp_1384;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1384 += A0(MSd(gI1))*CpVZVZconjSdSd(gI1,gI1);
   }
   tmp_1383 += tmp_1384;
   result += (3) * tmp_1383;
   std::complex<double> tmp_1385;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1385 += A0(MSe(gI1))*CpVZVZconjSeSe(gI1,gI1);
   }
   result += tmp_1385;
   std::complex<double> tmp_1386;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1386 += A0(MSm(gI1))*CpVZVZconjSmSm(gI1,gI1);
   }
   result += tmp_1386;
   std::complex<double> tmp_1387;
   std::complex<double> tmp_1388;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1388 += A0(MSs(gI1))*CpVZVZconjSsSs(gI1,gI1);
   }
   tmp_1387 += tmp_1388;
   result += (3) * tmp_1387;
   std::complex<double> tmp_1389;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1389 += A0(MStau(gI1))*CpVZVZconjStauStau(gI1,gI1);
   }
   result += tmp_1389;
   std::complex<double> tmp_1390;
   std::complex<double> tmp_1391;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1391 += A0(MSt(gI1))*CpVZVZconjStSt(gI1,gI1);
   }
   tmp_1390 += tmp_1391;
   result += (3) * tmp_1390;
   std::complex<double> tmp_1392;
   std::complex<double> tmp_1393;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1393 += A0(MSu(gI1))*CpVZVZconjSuSu(gI1,gI1);
   }
   tmp_1392 += tmp_1393;
   result += (3) * tmp_1392;
   std::complex<double> tmp_1394;
   std::complex<double> tmp_1395;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1395 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_1394 += tmp_1395;
   result += (0.5) * tmp_1394;
   std::complex<double> tmp_1396;
   std::complex<double> tmp_1397;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1398;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1398 += AbsSqr(CpVZconjSbSb(gI1,gI2))*B00(p,MSb(gI1),MSb(gI2
            ));
      }
      tmp_1397 += tmp_1398;
   }
   tmp_1396 += tmp_1397;
   result += (-12) * tmp_1396;
   std::complex<double> tmp_1399;
   std::complex<double> tmp_1400;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1401;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1401 += AbsSqr(CpVZconjScSc(gI1,gI2))*B00(p,MSc(gI1),MSc(gI2
            ));
      }
      tmp_1400 += tmp_1401;
   }
   tmp_1399 += tmp_1400;
   result += (-12) * tmp_1399;
   std::complex<double> tmp_1402;
   std::complex<double> tmp_1403;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1404;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1404 += AbsSqr(CpVZconjSdSd(gI1,gI2))*B00(p,MSd(gI1),MSd(gI2
            ));
      }
      tmp_1403 += tmp_1404;
   }
   tmp_1402 += tmp_1403;
   result += (-12) * tmp_1402;
   std::complex<double> tmp_1405;
   std::complex<double> tmp_1406;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1407;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1407 += AbsSqr(CpVZconjSeSe(gI1,gI2))*B00(p,MSe(gI1),MSe(gI2
            ));
      }
      tmp_1406 += tmp_1407;
   }
   tmp_1405 += tmp_1406;
   result += (-4) * tmp_1405;
   std::complex<double> tmp_1408;
   std::complex<double> tmp_1409;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1410;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1410 += AbsSqr(CpVZconjSmSm(gI1,gI2))*B00(p,MSm(gI1),MSm(gI2
            ));
      }
      tmp_1409 += tmp_1410;
   }
   tmp_1408 += tmp_1409;
   result += (-4) * tmp_1408;
   std::complex<double> tmp_1411;
   std::complex<double> tmp_1412;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1413;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1413 += AbsSqr(CpVZconjSsSs(gI1,gI2))*B00(p,MSs(gI1),MSs(gI2
            ));
      }
      tmp_1412 += tmp_1413;
   }
   tmp_1411 += tmp_1412;
   result += (-12) * tmp_1411;
   std::complex<double> tmp_1414;
   std::complex<double> tmp_1415;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1416;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1416 += AbsSqr(CpVZconjStauStau(gI1,gI2))*B00(p,MStau(gI1),
            MStau(gI2));
      }
      tmp_1415 += tmp_1416;
   }
   tmp_1414 += tmp_1415;
   result += (-4) * tmp_1414;
   std::complex<double> tmp_1417;
   std::complex<double> tmp_1418;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1419;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1419 += AbsSqr(CpVZconjStSt(gI1,gI2))*B00(p,MSt(gI1),MSt(gI2
            ));
      }
      tmp_1418 += tmp_1419;
   }
   tmp_1417 += tmp_1418;
   result += (-12) * tmp_1417;
   std::complex<double> tmp_1420;
   std::complex<double> tmp_1421;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1422;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1422 += AbsSqr(CpVZconjSuSu(gI1,gI2))*B00(p,MSu(gI1),MSu(gI2
            ));
      }
      tmp_1421 += tmp_1422;
   }
   tmp_1420 += tmp_1421;
   result += (-12) * tmp_1420;
   std::complex<double> tmp_1423;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1424;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1424 += (AbsSqr(CpVZbarChaChaPL(gI1,gI2)) + AbsSqr(
            CpVZbarChaChaPR(gI1,gI2)))*H0(p,MCha(gI1),MCha(gI2));
         tmp_1424 += 4*B0(p,MCha(gI1),MCha(gI2))*MCha(gI1)*MCha(gI2)*Re(
            Conj(CpVZbarChaChaPL(gI1,gI2))*CpVZbarChaChaPR(gI1,gI2));
      }
      tmp_1423 += tmp_1424;
   }
   result += tmp_1423;
   std::complex<double> tmp_1425;
   std::complex<double> tmp_1426;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1427;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1427 += (AbsSqr(CpVZChiChiPL(gI1,gI2)) + AbsSqr(CpVZChiChiPR
            (gI1,gI2)))*H0(p,MChi(gI1),MChi(gI2));
         tmp_1427 += 4*B0(p,MChi(gI1),MChi(gI2))*MChi(gI1)*MChi(gI2)*Re(
            Conj(CpVZChiChiPL(gI1,gI2))*CpVZChiChiPR(gI1,gI2));
      }
      tmp_1426 += tmp_1427;
   }
   tmp_1425 += tmp_1426;
   result += (0.5) * tmp_1425;
   std::complex<double> tmp_1428;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1428 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_1428;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWm_heavy(double p ) const
{
   std::complex<double> result;

   result += A0(MSveL)*CpVWmconjVWmconjSveLSveL();
   result += A0(MSvmL)*CpVWmconjVWmconjSvmLSvmL();
   result += A0(MSvtL)*CpVWmconjVWmconjSvtLSvtL();
   std::complex<double> tmp_1429;
   std::complex<double> tmp_1430;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1430 += A0(MSb(gI1))*CpVWmconjVWmconjSbSb(gI1,gI1);
   }
   tmp_1429 += tmp_1430;
   result += (3) * tmp_1429;
   std::complex<double> tmp_1431;
   std::complex<double> tmp_1432;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1432 += A0(MSc(gI1))*CpVWmconjVWmconjScSc(gI1,gI1);
   }
   tmp_1431 += tmp_1432;
   result += (3) * tmp_1431;
   std::complex<double> tmp_1433;
   std::complex<double> tmp_1434;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1434 += A0(MSd(gI1))*CpVWmconjVWmconjSdSd(gI1,gI1);
   }
   tmp_1433 += tmp_1434;
   result += (3) * tmp_1433;
   std::complex<double> tmp_1435;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1435 += A0(MSe(gI1))*CpVWmconjVWmconjSeSe(gI1,gI1);
   }
   result += tmp_1435;
   std::complex<double> tmp_1436;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1436 += A0(MSm(gI1))*CpVWmconjVWmconjSmSm(gI1,gI1);
   }
   result += tmp_1436;
   std::complex<double> tmp_1437;
   std::complex<double> tmp_1438;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1438 += A0(MSs(gI1))*CpVWmconjVWmconjSsSs(gI1,gI1);
   }
   tmp_1437 += tmp_1438;
   result += (3) * tmp_1437;
   std::complex<double> tmp_1439;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1439 += A0(MStau(gI1))*CpVWmconjVWmconjStauStau(gI1,gI1);
   }
   result += tmp_1439;
   std::complex<double> tmp_1440;
   std::complex<double> tmp_1441;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1441 += A0(MSt(gI1))*CpVWmconjVWmconjStSt(gI1,gI1);
   }
   tmp_1440 += tmp_1441;
   result += (3) * tmp_1440;
   std::complex<double> tmp_1442;
   std::complex<double> tmp_1443;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1443 += A0(MSu(gI1))*CpVWmconjVWmconjSuSu(gI1,gI1);
   }
   tmp_1442 += tmp_1443;
   result += (3) * tmp_1442;
   std::complex<double> tmp_1444;
   std::complex<double> tmp_1445;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1445 += A0(Mhh(gI1))*CpVWmconjVWmhhhh(gI1,gI1);
   }
   tmp_1444 += tmp_1445;
   result += (0.5) * tmp_1444;
   std::complex<double> tmp_1446;
   std::complex<double> tmp_1447;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1448;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1448 += AbsSqr(CpconjVWmconjScSs(gI1,gI2))*B00(p,MSs(gI2),
            MSc(gI1));
      }
      tmp_1447 += tmp_1448;
   }
   tmp_1446 += tmp_1447;
   result += (-12) * tmp_1446;
   std::complex<double> tmp_1449;
   std::complex<double> tmp_1450;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1451;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1451 += AbsSqr(CpconjVWmconjStSb(gI1,gI2))*B00(p,MSb(gI2),
            MSt(gI1));
      }
      tmp_1450 += tmp_1451;
   }
   tmp_1449 += tmp_1450;
   result += (-12) * tmp_1449;
   std::complex<double> tmp_1452;
   std::complex<double> tmp_1453;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1454;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1454 += AbsSqr(CpconjVWmconjSuSd(gI1,gI2))*B00(p,MSd(gI2),
            MSu(gI1));
      }
      tmp_1453 += tmp_1454;
   }
   tmp_1452 += tmp_1453;
   result += (-12) * tmp_1452;
   std::complex<double> tmp_1455;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1456;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1456 += (AbsSqr(CpconjVWmChiChaPL(gI1,gI2)) + AbsSqr(
            CpconjVWmChiChaPR(gI1,gI2)))*H0(p,MChi(gI1),MCha(gI2));
         tmp_1456 += 4*B0(p,MChi(gI1),MCha(gI2))*MCha(gI2)*MChi(gI1)*Re(
            Conj(CpconjVWmChiChaPL(gI1,gI2))*CpconjVWmChiChaPR(gI1,gI2));
      }
      tmp_1455 += tmp_1456;
   }
   result += tmp_1455;
   std::complex<double> tmp_1457;
   std::complex<double> tmp_1458;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1458 += AbsSqr(CpconjVWmconjSveLSe(gI2))*B00(p,MSe(gI2),MSveL);
   }
   tmp_1457 += tmp_1458;
   result += (-4) * tmp_1457;
   std::complex<double> tmp_1459;
   std::complex<double> tmp_1460;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1460 += AbsSqr(CpconjVWmconjSvmLSm(gI2))*B00(p,MSm(gI2),MSvmL);
   }
   tmp_1459 += tmp_1460;
   result += (-4) * tmp_1459;
   std::complex<double> tmp_1461;
   std::complex<double> tmp_1462;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1462 += AbsSqr(CpconjVWmconjSvtLStau(gI2))*B00(p,MStau(gI2),MSvtL)
         ;
   }
   tmp_1461 += tmp_1462;
   result += (-4) * tmp_1461;
   std::complex<double> tmp_1463;
   std::complex<double> tmp_1464;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1464 += AbsSqr(CpconjVWmHpmhh(1,gI2))*B00(p,Mhh(gI2),MHpm(1));
   }
   tmp_1463 += tmp_1464;
   result += (-4) * tmp_1463;
   std::complex<double> tmp_1465;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1465 += AbsSqr(CpconjVWmVWmhh(gI2))*B0(p,MVWm,Mhh(gI2));
   }
   result += tmp_1465;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_1_heavy_rotated(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1466;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1467;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1467 += B0(p,MCha(gI2),MSt(gI1))*Conj(CpbarFbStChaPL(gI1,gI2
            ))*CpbarFbStChaPR(gI1,gI2)*MCha(gI2);
      }
      tmp_1466 += tmp_1467;
   }
   result += tmp_1466;
   std::complex<double> tmp_1468;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1469;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1469 += B0(p,MChi(gI2),MSb(gI1))*Conj(CpbarFbSbChiPL(gI1,gI2
            ))*CpbarFbSbChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1468 += tmp_1469;
   }
   result += tmp_1468;
   result += -4*MFb*B0(p,MFb,MVZ)*Conj(CpbarFbVZFbPR())*CpbarFbVZFbPL();
   std::complex<double> tmp_1470;
   std::complex<double> tmp_1471;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1471 += B0(p,MFb,Mhh(gI1))*Conj(CpbarFbhhFbPL(gI1))*CpbarFbhhFbPR(
         gI1);
   }
   tmp_1470 += tmp_1471;
   result += (MFb) * tmp_1470;
   std::complex<double> tmp_1472;
   std::complex<double> tmp_1473;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1473 += B0(p,MFb,MAh(gI2))*Conj(CpbarFbFbAhPL(gI2))*CpbarFbFbAhPR(
         gI2);
   }
   tmp_1472 += tmp_1473;
   result += (MFb) * tmp_1472;
   result += -4*MFt*B0(p,MFt,MVWm)*Conj(CpbarFbVWmFtPR(1))*CpbarFbVWmFtPL(1);
   std::complex<double> tmp_1474;
   std::complex<double> tmp_1475;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1475 += B0(p,MFt,MHpm(gI1))*Conj(CpbarFbHpmFtPL(gI1,1))*
         CpbarFbHpmFtPR(gI1,1);
   }
   tmp_1474 += tmp_1475;
   result += (MFt) * tmp_1474;
   std::complex<double> tmp_1476;
   std::complex<double> tmp_1477;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1477 += B0(p,MGlu,MSb(gI1))*Conj(CpbarFbSbGluPL(gI1,1))*
         CpbarFbSbGluPR(gI1,1);
   }
   tmp_1476 += tmp_1477;
   result += (1.3333333333333333*MGlu) * tmp_1476;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_PR_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFbVWmFtPL(1))*B1(p,MFt,MVWm));
   result += -(AbsSqr(CpbarFbVZFbPL())*B1(p,MFb,MVZ));
   std::complex<double> tmp_1478;
   std::complex<double> tmp_1479;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1479 += AbsSqr(CpbarFbhhFbPR(gI1))*B1(p,MFb,Mhh(gI1));
   }
   tmp_1478 += tmp_1479;
   result += (-0.5) * tmp_1478;
   std::complex<double> tmp_1480;
   std::complex<double> tmp_1481;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1481 += AbsSqr(CpbarFbHpmFtPR(gI1,1))*B1(p,MFt,MHpm(gI1));
   }
   tmp_1480 += tmp_1481;
   result += (-0.5) * tmp_1480;
   std::complex<double> tmp_1482;
   std::complex<double> tmp_1483;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1483 += AbsSqr(CpbarFbSbGluPR(gI1,1))*B1(p,MGlu,MSb(gI1));
   }
   tmp_1482 += tmp_1483;
   result += (-0.6666666666666666) * tmp_1482;
   std::complex<double> tmp_1484;
   std::complex<double> tmp_1485;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1486;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1486 += AbsSqr(CpbarFbStChaPR(gI1,gI2))*B1(p,MCha(gI2),MSt(
            gI1));
      }
      tmp_1485 += tmp_1486;
   }
   tmp_1484 += tmp_1485;
   result += (-0.5) * tmp_1484;
   std::complex<double> tmp_1487;
   std::complex<double> tmp_1488;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1489;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1489 += AbsSqr(CpbarFbSbChiPR(gI1,gI2))*B1(p,MChi(gI2),MSb(
            gI1));
      }
      tmp_1488 += tmp_1489;
   }
   tmp_1487 += tmp_1488;
   result += (-0.5) * tmp_1487;
   std::complex<double> tmp_1490;
   std::complex<double> tmp_1491;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1491 += AbsSqr(CpbarFbFbAhPR(gI2))*B1(p,MFb,MAh(gI2));
   }
   tmp_1490 += tmp_1491;
   result += (-0.5) * tmp_1490;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fb_PL_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFbVWmFtPR(1))*B1(p,MFt,MVWm));
   result += -(AbsSqr(CpbarFbVZFbPR())*B1(p,MFb,MVZ));
   std::complex<double> tmp_1492;
   std::complex<double> tmp_1493;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1493 += AbsSqr(CpbarFbhhFbPL(gI1))*B1(p,MFb,Mhh(gI1));
   }
   tmp_1492 += tmp_1493;
   result += (-0.5) * tmp_1492;
   std::complex<double> tmp_1494;
   std::complex<double> tmp_1495;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1495 += AbsSqr(CpbarFbHpmFtPL(gI1,1))*B1(p,MFt,MHpm(gI1));
   }
   tmp_1494 += tmp_1495;
   result += (-0.5) * tmp_1494;
   std::complex<double> tmp_1496;
   std::complex<double> tmp_1497;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1497 += AbsSqr(CpbarFbSbGluPL(gI1,1))*B1(p,MGlu,MSb(gI1));
   }
   tmp_1496 += tmp_1497;
   result += (-0.6666666666666666) * tmp_1496;
   std::complex<double> tmp_1498;
   std::complex<double> tmp_1499;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1500;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1500 += AbsSqr(CpbarFbStChaPL(gI1,gI2))*B1(p,MCha(gI2),MSt(
            gI1));
      }
      tmp_1499 += tmp_1500;
   }
   tmp_1498 += tmp_1499;
   result += (-0.5) * tmp_1498;
   std::complex<double> tmp_1501;
   std::complex<double> tmp_1502;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1503;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1503 += AbsSqr(CpbarFbSbChiPL(gI1,gI2))*B1(p,MChi(gI2),MSb(
            gI1));
      }
      tmp_1502 += tmp_1503;
   }
   tmp_1501 += tmp_1502;
   result += (-0.5) * tmp_1501;
   std::complex<double> tmp_1504;
   std::complex<double> tmp_1505;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1505 += AbsSqr(CpbarFbFbAhPL(gI2))*B1(p,MFb,MAh(gI2));
   }
   tmp_1504 += tmp_1505;
   result += (-0.5) * tmp_1504;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_1_heavy_rotated(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1506;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1507;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1507 += B0(p,MChi(gI2),MStau(gI1))*Conj(CpbarFtauStauChiPL(
            gI1,gI2))*CpbarFtauStauChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1506 += tmp_1507;
   }
   result += tmp_1506;
   std::complex<double> tmp_1508;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1508 += B0(p,MCha(gI2),MSvtL)*Conj(CpbarFtauSvtLChaPL(gI2))*
         CpbarFtauSvtLChaPR(gI2)*MCha(gI2);
   }
   result += tmp_1508;
   result += -4*MFtau*B0(p,MFtau,MVZ)*Conj(CpbarFtauVZFtauPR())*
      CpbarFtauVZFtauPL();
   std::complex<double> tmp_1509;
   std::complex<double> tmp_1510;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1510 += B0(p,MFtau,Mhh(gI1))*Conj(CpbarFtauhhFtauPL(gI1))*
         CpbarFtauhhFtauPR(gI1);
   }
   tmp_1509 += tmp_1510;
   result += (MFtau) * tmp_1509;
   std::complex<double> tmp_1511;
   std::complex<double> tmp_1512;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1512 += B0(p,MFtau,MAh(gI2))*Conj(CpbarFtauFtauAhPL(gI2))*
         CpbarFtauFtauAhPR(gI2);
   }
   tmp_1511 += tmp_1512;
   result += (MFtau) * tmp_1511;
   result += -4*MFvt*B0(p,MFvt,MVWm)*Conj(CpbarFtauVWmFvtPR())*
      CpbarFtauVWmFvtPL();
   std::complex<double> tmp_1513;
   std::complex<double> tmp_1514;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1514 += B0(p,MFvt,MHpm(gI1))*Conj(CpbarFtauHpmFvtPL(gI1))*
         CpbarFtauHpmFvtPR(gI1);
   }
   tmp_1513 += tmp_1514;
   result += (MFvt) * tmp_1513;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_PR_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtauVWmFvtPL())*B1(p,MFvt,MVWm));
   result += -(AbsSqr(CpbarFtauVZFtauPL())*B1(p,MFtau,MVZ));
   std::complex<double> tmp_1515;
   std::complex<double> tmp_1516;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1516 += AbsSqr(CpbarFtauhhFtauPR(gI1))*B1(p,MFtau,Mhh(gI1));
   }
   tmp_1515 += tmp_1516;
   result += (-0.5) * tmp_1515;
   std::complex<double> tmp_1517;
   std::complex<double> tmp_1518;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1518 += AbsSqr(CpbarFtauHpmFvtPR(gI1))*B1(p,MFvt,MHpm(gI1));
   }
   tmp_1517 += tmp_1518;
   result += (-0.5) * tmp_1517;
   std::complex<double> tmp_1519;
   std::complex<double> tmp_1520;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1521;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1521 += AbsSqr(CpbarFtauStauChiPR(gI1,gI2))*B1(p,MChi(gI2),
            MStau(gI1));
      }
      tmp_1520 += tmp_1521;
   }
   tmp_1519 += tmp_1520;
   result += (-0.5) * tmp_1519;
   std::complex<double> tmp_1522;
   std::complex<double> tmp_1523;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1523 += AbsSqr(CpbarFtauFtauAhPR(gI2))*B1(p,MFtau,MAh(gI2));
   }
   tmp_1522 += tmp_1523;
   result += (-0.5) * tmp_1522;
   std::complex<double> tmp_1524;
   std::complex<double> tmp_1525;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1525 += AbsSqr(CpbarFtauSvtLChaPR(gI2))*B1(p,MCha(gI2),MSvtL);
   }
   tmp_1524 += tmp_1525;
   result += (-0.5) * tmp_1524;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ftau_PL_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtauVWmFvtPR())*B1(p,MFvt,MVWm));
   result += -(AbsSqr(CpbarFtauVZFtauPR())*B1(p,MFtau,MVZ));
   std::complex<double> tmp_1526;
   std::complex<double> tmp_1527;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1527 += AbsSqr(CpbarFtauhhFtauPL(gI1))*B1(p,MFtau,Mhh(gI1));
   }
   tmp_1526 += tmp_1527;
   result += (-0.5) * tmp_1526;
   std::complex<double> tmp_1528;
   std::complex<double> tmp_1529;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1529 += AbsSqr(CpbarFtauHpmFvtPL(gI1))*B1(p,MFvt,MHpm(gI1));
   }
   tmp_1528 += tmp_1529;
   result += (-0.5) * tmp_1528;
   std::complex<double> tmp_1530;
   std::complex<double> tmp_1531;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1532;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1532 += AbsSqr(CpbarFtauStauChiPL(gI1,gI2))*B1(p,MChi(gI2),
            MStau(gI1));
      }
      tmp_1531 += tmp_1532;
   }
   tmp_1530 += tmp_1531;
   result += (-0.5) * tmp_1530;
   std::complex<double> tmp_1533;
   std::complex<double> tmp_1534;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1534 += AbsSqr(CpbarFtauFtauAhPL(gI2))*B1(p,MFtau,MAh(gI2));
   }
   tmp_1533 += tmp_1534;
   result += (-0.5) * tmp_1533;
   std::complex<double> tmp_1535;
   std::complex<double> tmp_1536;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1536 += AbsSqr(CpbarFtauSvtLChaPL(gI2))*B1(p,MCha(gI2),MSvtL);
   }
   tmp_1535 += tmp_1536;
   result += (-0.5) * tmp_1535;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_1_heavy_rotated(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1537;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1538;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1538 += B0(p,MChi(gI2),MSt(gI1))*Conj(CpbarFtStChiPL(gI1,gI2
            ))*CpbarFtStChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1537 += tmp_1538;
   }
   result += tmp_1537;
   std::complex<double> tmp_1539;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1540;
      std::complex<double> tmp_1541;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1541 += B0(p,MCha(gI1),MSb(gI2))*Conj(CpbarFtbarChaSbPL(gI1,
            gI2))*CpbarFtbarChaSbPR(gI1,gI2);
      }
      tmp_1540 += tmp_1541;
      tmp_1539 += (MCha(gI1)) * tmp_1540;
   }
   result += tmp_1539;
   result += -4*MFb*B0(p,MFb,MVWm)*Conj(CpbarFtconjVWmFbPR(1))*
      CpbarFtconjVWmFbPL(1);
   std::complex<double> tmp_1542;
   std::complex<double> tmp_1543;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1543 += B0(p,MFb,MHpm(gI1))*Conj(CpbarFtconjHpmFbPL(gI1,1))*
         CpbarFtconjHpmFbPR(gI1,1);
   }
   tmp_1542 += tmp_1543;
   result += (MFb) * tmp_1542;
   result += -4*MFt*B0(p,MFt,0)*Conj(CpbarFtVPFtPR())*CpbarFtVPFtPL();
   result += -4*MFt*B0(p,MFt,MVZ)*Conj(CpbarFtVZFtPR())*CpbarFtVZFtPL();
   std::complex<double> tmp_1544;
   std::complex<double> tmp_1545;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1545 += B0(p,MFt,Mhh(gI1))*Conj(CpbarFthhFtPL(gI1))*CpbarFthhFtPR(
         gI1);
   }
   tmp_1544 += tmp_1545;
   result += (MFt) * tmp_1544;
   std::complex<double> tmp_1546;
   std::complex<double> tmp_1547;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1547 += B0(p,MFt,MAh(gI2))*Conj(CpbarFtFtAhPL(gI2))*CpbarFtFtAhPR(
         gI2);
   }
   tmp_1546 += tmp_1547;
   result += (MFt) * tmp_1546;
   std::complex<double> tmp_1548;
   std::complex<double> tmp_1549;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1549 += B0(p,MGlu,MSt(gI1))*Conj(CpbarFtStGluPL(gI1,1))*
         CpbarFtStGluPR(gI1,1);
   }
   tmp_1548 += tmp_1549;
   result += (1.3333333333333333*MGlu) * tmp_1548;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PR_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPL(1))*B1(p,MFb,MVWm));
   result += -(AbsSqr(CpbarFtVPFtPL())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPL())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1550;
   std::complex<double> tmp_1551;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1551 += AbsSqr(CpbarFtconjHpmFbPR(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1550 += tmp_1551;
   result += (-0.5) * tmp_1550;
   std::complex<double> tmp_1552;
   std::complex<double> tmp_1553;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1553 += AbsSqr(CpbarFthhFtPR(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1552 += tmp_1553;
   result += (-0.5) * tmp_1552;
   std::complex<double> tmp_1554;
   std::complex<double> tmp_1555;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1555 += AbsSqr(CpbarFtStGluPR(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1554 += tmp_1555;
   result += (-0.6666666666666666) * tmp_1554;
   std::complex<double> tmp_1556;
   std::complex<double> tmp_1557;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1558;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1558 += AbsSqr(CpbarFtbarChaSbPR(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1557 += tmp_1558;
   }
   tmp_1556 += tmp_1557;
   result += (-0.5) * tmp_1556;
   std::complex<double> tmp_1559;
   std::complex<double> tmp_1560;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1561;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1561 += AbsSqr(CpbarFtStChiPR(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1560 += tmp_1561;
   }
   tmp_1559 += tmp_1560;
   result += (-0.5) * tmp_1559;
   std::complex<double> tmp_1562;
   std::complex<double> tmp_1563;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1563 += AbsSqr(CpbarFtFtAhPR(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1562 += tmp_1563;
   result += (-0.5) * tmp_1562;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PL_heavy_rotated(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPR(1))*B1(p,MFb,MVWm));
   result += -(AbsSqr(CpbarFtVPFtPR())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPR())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1564;
   std::complex<double> tmp_1565;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1565 += AbsSqr(CpbarFtconjHpmFbPL(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1564 += tmp_1565;
   result += (-0.5) * tmp_1564;
   std::complex<double> tmp_1566;
   std::complex<double> tmp_1567;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1567 += AbsSqr(CpbarFthhFtPL(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1566 += tmp_1567;
   result += (-0.5) * tmp_1566;
   std::complex<double> tmp_1568;
   std::complex<double> tmp_1569;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1569 += AbsSqr(CpbarFtStGluPL(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1568 += tmp_1569;
   result += (-0.6666666666666666) * tmp_1568;
   std::complex<double> tmp_1570;
   std::complex<double> tmp_1571;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1572;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1572 += AbsSqr(CpbarFtbarChaSbPL(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1571 += tmp_1572;
   }
   tmp_1570 += tmp_1571;
   result += (-0.5) * tmp_1570;
   std::complex<double> tmp_1573;
   std::complex<double> tmp_1574;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1575;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1575 += AbsSqr(CpbarFtStChiPL(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1574 += tmp_1575;
   }
   tmp_1573 += tmp_1574;
   result += (-0.5) * tmp_1573;
   std::complex<double> tmp_1576;
   std::complex<double> tmp_1577;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1577 += AbsSqr(CpbarFtFtAhPL(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1576 += tmp_1577;
   result += (-0.5) * tmp_1576;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_1_heavy(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1578;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1579;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1579 += B0(p,MChi(gI2),MSt(gI1))*Conj(CpbarFtStChiPL(gI1,gI2
            ))*CpbarFtStChiPR(gI1,gI2)*MChi(gI2);
      }
      tmp_1578 += tmp_1579;
   }
   result += tmp_1578;
   std::complex<double> tmp_1580;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1581;
      std::complex<double> tmp_1582;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1582 += B0(p,MCha(gI1),MSb(gI2))*Conj(CpbarFtbarChaSbPL(gI1,
            gI2))*CpbarFtbarChaSbPR(gI1,gI2);
      }
      tmp_1581 += tmp_1582;
      tmp_1580 += (MCha(gI1)) * tmp_1581;
   }
   result += tmp_1580;
   result += -4*MFb*B0(p,MFb,MVWm)*Conj(CpbarFtconjVWmFbPR(1))*
      CpbarFtconjVWmFbPL(1);
   std::complex<double> tmp_1583;
   std::complex<double> tmp_1584;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1584 += B0(p,MFb,MHpm(gI1))*Conj(CpbarFtconjHpmFbPL(gI1,1))*
         CpbarFtconjHpmFbPR(gI1,1);
   }
   tmp_1583 += tmp_1584;
   result += (MFb) * tmp_1583;
   result += -4*MFt*B0(p,MFt,0)*Conj(CpbarFtVPFtPR())*CpbarFtVPFtPL();
   result += -4*MFt*B0(p,MFt,MVZ)*Conj(CpbarFtVZFtPR())*CpbarFtVZFtPL();
   std::complex<double> tmp_1585;
   std::complex<double> tmp_1586;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1586 += B0(p,MFt,Mhh(gI1))*Conj(CpbarFthhFtPL(gI1))*CpbarFthhFtPR(
         gI1);
   }
   tmp_1585 += tmp_1586;
   result += (MFt) * tmp_1585;
   std::complex<double> tmp_1587;
   std::complex<double> tmp_1588;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1588 += B0(p,MFt,MAh(gI2))*Conj(CpbarFtFtAhPL(gI2))*CpbarFtFtAhPR(
         gI2);
   }
   tmp_1587 += tmp_1588;
   result += (MFt) * tmp_1587;
   std::complex<double> tmp_1589;
   std::complex<double> tmp_1590;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1590 += B0(p,MGlu,MSt(gI1))*Conj(CpbarFtStGluPL(gI1,1))*
         CpbarFtStGluPR(gI1,1);
   }
   tmp_1589 += tmp_1590;
   result += (1.3333333333333333*MGlu) * tmp_1589;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PR_heavy(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPL(1))*B1(p,MFb,MVWm));
   result += -(AbsSqr(CpbarFtVPFtPL())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPL())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1591;
   std::complex<double> tmp_1592;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1592 += AbsSqr(CpbarFtconjHpmFbPR(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1591 += tmp_1592;
   result += (-0.5) * tmp_1591;
   std::complex<double> tmp_1593;
   std::complex<double> tmp_1594;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1594 += AbsSqr(CpbarFthhFtPR(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1593 += tmp_1594;
   result += (-0.5) * tmp_1593;
   std::complex<double> tmp_1595;
   std::complex<double> tmp_1596;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1596 += AbsSqr(CpbarFtStGluPR(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1595 += tmp_1596;
   result += (-0.6666666666666666) * tmp_1595;
   std::complex<double> tmp_1597;
   std::complex<double> tmp_1598;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1599;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1599 += AbsSqr(CpbarFtbarChaSbPR(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1598 += tmp_1599;
   }
   tmp_1597 += tmp_1598;
   result += (-0.5) * tmp_1597;
   std::complex<double> tmp_1600;
   std::complex<double> tmp_1601;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1602;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1602 += AbsSqr(CpbarFtStChiPR(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1601 += tmp_1602;
   }
   tmp_1600 += tmp_1601;
   result += (-0.5) * tmp_1600;
   std::complex<double> tmp_1603;
   std::complex<double> tmp_1604;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1604 += AbsSqr(CpbarFtFtAhPR(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1603 += tmp_1604;
   result += (-0.5) * tmp_1603;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ft_PL_heavy(double p ) const
{
   std::complex<double> result;

   result += -(AbsSqr(CpbarFtconjVWmFbPR(1))*B1(p,MFb,MVWm));
   result += -(AbsSqr(CpbarFtVPFtPR())*B1(p,MFt,0));
   result += -(AbsSqr(CpbarFtVZFtPR())*B1(p,MFt,MVZ));
   std::complex<double> tmp_1605;
   std::complex<double> tmp_1606;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1606 += AbsSqr(CpbarFtconjHpmFbPL(gI1,1))*B1(p,MFb,MHpm(gI1));
   }
   tmp_1605 += tmp_1606;
   result += (-0.5) * tmp_1605;
   std::complex<double> tmp_1607;
   std::complex<double> tmp_1608;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1608 += AbsSqr(CpbarFthhFtPL(gI1))*B1(p,MFt,Mhh(gI1));
   }
   tmp_1607 += tmp_1608;
   result += (-0.5) * tmp_1607;
   std::complex<double> tmp_1609;
   std::complex<double> tmp_1610;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1610 += AbsSqr(CpbarFtStGluPL(gI1,1))*B1(p,MGlu,MSt(gI1));
   }
   tmp_1609 += tmp_1610;
   result += (-0.6666666666666666) * tmp_1609;
   std::complex<double> tmp_1611;
   std::complex<double> tmp_1612;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1613;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1613 += AbsSqr(CpbarFtbarChaSbPL(gI1,gI2))*B1(p,MCha(gI1),
            MSb(gI2));
      }
      tmp_1612 += tmp_1613;
   }
   tmp_1611 += tmp_1612;
   result += (-0.5) * tmp_1611;
   std::complex<double> tmp_1614;
   std::complex<double> tmp_1615;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1616;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1616 += AbsSqr(CpbarFtStChiPL(gI1,gI2))*B1(p,MChi(gI2),MSt(
            gI1));
      }
      tmp_1615 += tmp_1616;
   }
   tmp_1614 += tmp_1615;
   result += (-0.5) * tmp_1614;
   std::complex<double> tmp_1617;
   std::complex<double> tmp_1618;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1618 += AbsSqr(CpbarFtFtAhPL(gI2))*B1(p,MFt,MAh(gI2));
   }
   tmp_1617 += tmp_1618;
   result += (-0.5) * tmp_1617;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::tadpole_hh(unsigned gO1) const
{
   std::complex<double> result;

   result += A0(MVWm)*CpUhhbargWmCgWmC(gO1);
   result += A0(MVWm)*CpUhhbargWmgWm(gO1);
   result += A0(MVZ)*CpUhhbargZgZ(gO1);
   result += -(A0(MSveL)*CpUhhconjSveLSveL(gO1));
   result += -(A0(MSvmL)*CpUhhconjSvmLSvmL(gO1));
   result += -(A0(MSvtL)*CpUhhconjSvtLSvtL(gO1));
   result += 4*A0(MVWm)*CpUhhconjVWmVWm(gO1);
   result += 2*A0(MVZ)*CpUhhVZVZ(gO1);
   std::complex<double> tmp_1619;
   std::complex<double> tmp_1620;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1620 += A0(MAh(gI1))*CpUhhAhAh(gO1,gI1,gI1);
   }
   tmp_1619 += tmp_1620;
   result += (-0.5) * tmp_1619;
   std::complex<double> tmp_1621;
   std::complex<double> tmp_1622;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1622 += A0(MHpm(gI1))*CpUhhconjHpmHpm(gO1,gI1,gI1);
   }
   tmp_1621 += tmp_1622;
   result += (-1) * tmp_1621;
   std::complex<double> tmp_1623;
   std::complex<double> tmp_1624;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1624 += A0(MSb(gI1))*CpUhhconjSbSb(gO1,gI1,gI1);
   }
   tmp_1623 += tmp_1624;
   result += (-3) * tmp_1623;
   std::complex<double> tmp_1625;
   std::complex<double> tmp_1626;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1626 += A0(MSc(gI1))*CpUhhconjScSc(gO1,gI1,gI1);
   }
   tmp_1625 += tmp_1626;
   result += (-3) * tmp_1625;
   std::complex<double> tmp_1627;
   std::complex<double> tmp_1628;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1628 += A0(MSd(gI1))*CpUhhconjSdSd(gO1,gI1,gI1);
   }
   tmp_1627 += tmp_1628;
   result += (-3) * tmp_1627;
   std::complex<double> tmp_1629;
   std::complex<double> tmp_1630;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1630 += A0(MSe(gI1))*CpUhhconjSeSe(gO1,gI1,gI1);
   }
   tmp_1629 += tmp_1630;
   result += (-1) * tmp_1629;
   std::complex<double> tmp_1631;
   std::complex<double> tmp_1632;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1632 += A0(MSm(gI1))*CpUhhconjSmSm(gO1,gI1,gI1);
   }
   tmp_1631 += tmp_1632;
   result += (-1) * tmp_1631;
   std::complex<double> tmp_1633;
   std::complex<double> tmp_1634;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1634 += A0(MSs(gI1))*CpUhhconjSsSs(gO1,gI1,gI1);
   }
   tmp_1633 += tmp_1634;
   result += (-3) * tmp_1633;
   std::complex<double> tmp_1635;
   std::complex<double> tmp_1636;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1636 += A0(MStau(gI1))*CpUhhconjStauStau(gO1,gI1,gI1);
   }
   tmp_1635 += tmp_1636;
   result += (-1) * tmp_1635;
   std::complex<double> tmp_1637;
   std::complex<double> tmp_1638;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1638 += A0(MSt(gI1))*CpUhhconjStSt(gO1,gI1,gI1);
   }
   tmp_1637 += tmp_1638;
   result += (-3) * tmp_1637;
   std::complex<double> tmp_1639;
   std::complex<double> tmp_1640;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1640 += A0(MSu(gI1))*CpUhhconjSuSu(gO1,gI1,gI1);
   }
   tmp_1639 += tmp_1640;
   result += (-3) * tmp_1639;
   std::complex<double> tmp_1641;
   std::complex<double> tmp_1642;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1642 += A0(Mhh(gI1))*CpUhhhhhh(gO1,gI1,gI1);
   }
   tmp_1641 += tmp_1642;
   result += (-0.5) * tmp_1641;
   std::complex<double> tmp_1643;
   std::complex<double> tmp_1644;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1644 += A0(MCha(gI1))*(CpUhhbarChaChaPL(gO1,gI1,gI1) +
         CpUhhbarChaChaPR(gO1,gI1,gI1))*MCha(gI1);
   }
   tmp_1643 += tmp_1644;
   result += (2) * tmp_1643;
   std::complex<double> tmp_1645;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      tmp_1645 += A0(MChi(gI1))*(CpUhhChiChiPL(gO1,gI1,gI1) + CpUhhChiChiPR(
         gO1,gI1,gI1))*MChi(gI1);
   }
   result += tmp_1645;
   result += 6*MFb*A0(MFb)*(CpUhhbarFbFbPL(gO1,1,1) + CpUhhbarFbFbPR(gO1,1,1));
   result += 6*MFc*A0(MFc)*(CpUhhbarFcFcPL(gO1,1,1) + CpUhhbarFcFcPR(gO1,1,1));
   result += 6*MFd*A0(MFd)*(CpUhhbarFdFdPL(gO1,1,1) + CpUhhbarFdFdPR(gO1,1,1));
   result += 2*MFe*A0(MFe)*(CpUhhbarFeFePL(gO1) + CpUhhbarFeFePR(gO1));
   result += 2*MFm*A0(MFm)*(CpUhhbarFmFmPL(gO1) + CpUhhbarFmFmPR(gO1));
   result += 6*MFs*A0(MFs)*(CpUhhbarFsFsPL(gO1,1,1) + CpUhhbarFsFsPR(gO1,1,1));
   result += 6*MFt*A0(MFt)*(CpUhhbarFtFtPL(gO1,1,1) + CpUhhbarFtFtPR(gO1,1,1));
   result += 2*MFtau*A0(MFtau)*(CpUhhbarFtauFtauPL(gO1) + CpUhhbarFtauFtauPR(
      gO1));
   result += 6*MFu*A0(MFu)*(CpUhhbarFuFuPL(gO1,1,1) + CpUhhbarFuFuPR(gO1,1,1));

   return result * oneOver16PiSqr;

}


void CLASSNAME::calculate_MTopSquark_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = Re(mq2(2,2));
   sf_data.mr2 = Re(mu2(2,2));
   sf_data.yf  = Re(Yu(2,2));
   sf_data.vd  = Re(vd);
   sf_data.vu  = Re(vu);
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = Re(TYu(2,2));
   sf_data.mu  = Re(Mu);
   sf_data.T3  = sfermions::Isospin[sfermions::up];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::up];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::up];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MBottomSquark_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = Re(mq2(2,2));
   sf_data.mr2 = Re(md2(2,2));
   sf_data.yf  = Re(Yd(2,2));
   sf_data.vd  = Re(vd);
   sf_data.vu  = Re(vu);
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = Re(TYd(2,2));
   sf_data.mu  = Re(Mu);
   sf_data.T3  = sfermions::Isospin[sfermions::down];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::down];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::down];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MSneutrino_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = Re(ml2(2,2));
   sf_data.mr2 = 0.;
   sf_data.yf  = 0.;
   sf_data.vd  = Re(vd);
   sf_data.vu  = Re(vu);
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = 0.;
   sf_data.mu  = Re(Mu);
   sf_data.T3  = sfermions::Isospin[sfermions::neutrino];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::neutrino];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::neutrino];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MSelectron_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = Re(ml2(2,2));
   sf_data.mr2 = Re(me2(2,2));
   sf_data.yf  = Re(Ye(2,2));
   sf_data.vd  = Re(vd);
   sf_data.vu  = Re(vu);
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = Re(TYe(2,2));
   sf_data.mu  = Re(Mu);
   sf_data.T3  = sfermions::Isospin[sfermions::electron];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::electron];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::electron];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}


void CLASSNAME::self_energy_hh_2loop(double result[3]) const
{
   // calculate 3rd generation sfermion masses and mixing angles
   double mst_1, mst_2, theta_t;
   double msb_1, msb_2, theta_b;
   double mstau_1, mstau_2, theta_tau;
   double msnu_1, msnu_2, theta_nu;

   calculate_MTopSquark_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MBottomSquark_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MSelectron_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MSneutrino_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFt);
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   const double tanb2 = Sqr(tanb);
   const double sinb = tanb / Sqrt(1. + tanb2);
   const double cosb = 1. / Sqrt(1. + tanb2);
   double amu = Re(-Mu);
   double mg = MGlu;
   double mAsq = Sqr(get_MPseudoscalarHiggs()(0));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFb);
   double rmtausq = Sqr(MFtau);
   double fmasq = Abs(mAsq);

   double s11s = 0., s22s = 0., s12s = 0.;
   double s11b = 0., s12b = 0., s22b = 0.;
   double s11tau = 0., s12tau = 0., s22tau = 0.;
   double s11w = 0., s22w = 0., s12w = 0.;
   double p2s = 0., p2w = 0., p2b = 0., p2tau = 0.;
   int scheme = 0; // chooses DR-bar scheme from slavich et al

   LOCK_MUTEX();

   if (HIGGS_2LOOP_CORRECTION_AT_AS) {
      self_energy_higgs_2loop_at_as_mssm(
         &rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
         &tanb, &vev2, &gs, &scheme, &s11s, &s22s, &s12s);
      self_energy_pseudoscalar_2loop_at_as_mssm(
         &rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
         &tanb, &vev2, &gs, &p2s);
   }

   if (HIGGS_2LOOP_CORRECTION_AB_AS) {
      self_energy_higgs_2loop_ab_as_mssm(
         &rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
         &cotbeta, &vev2, &gs, &scheme, &s22b, &s11b, &s12b);
      self_energy_pseudoscalar_2loop_ab_as_mssm(
         &rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
         &cotbeta, &vev2, &gs, &p2b);
   }

   if (HIGGS_2LOOP_CORRECTION_AT_AT) {
      self_energy_higgs_2loop_at_at_mssm(
         &rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
         &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &s11w,
         &s12w, &s22w);
      self_energy_pseudoscalar_2loop_at_at_mssm(
         &rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
         &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &p2w);
   }

   if (HIGGS_2LOOP_CORRECTION_ATAU_ATAU) {
      self_energy_higgs_2loop_atau_atau_mssm(
         &rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
         &costau, &scalesq, &amu, &tanb, &vev2, &scheme, &s11tau,
         &s22tau, &s12tau);
      self_energy_pseudoscalar_2loop_atau_atau_mssm(
         &rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
         &costau, &scalesq, &amu, &tanb, &vev2, &p2tau);
   }

   UNLOCK_MUTEX();

   // calculate dMA, which is the two loop correction to take the DRbar
   // psuedoscalar mass ( = -2m3sq/sin(2beta)) to the pole mass (as in
   // Eq. (8) of hep-ph/0305127)
   const double dMA = p2s + p2w + p2b + p2tau;

   // dMA contains two loop tadpoles, which we'll subtract
   double tadpole[2];
   tadpole_hh_2loop(tadpole);

   result[0] = - s11s - s11w - s11b - s11tau; // 1,1 element
   result[1] = - s12s - s12w - s12b - s12tau; // 1,2 element
   result[2] = - s22s - s22w - s22b - s22tau; // 2,2 element

   result[0] += - dMA * Sqr(sinb) + tadpole[0] / vd;
   result[1] += + dMA * sinb * cosb;
   result[2] += - dMA * Sqr(cosb) + tadpole[1] / vu;

}

void CLASSNAME::self_energy_Ah_2loop(double result[3]) const
{
   // calculate 3rd generation sfermion masses and mixing angles
   double mst_1, mst_2, theta_t;
   double msb_1, msb_2, theta_b;
   double mstau_1, mstau_2, theta_tau;
   double msnu_1, msnu_2, theta_nu;

   calculate_MTopSquark_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MBottomSquark_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MSelectron_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MSneutrino_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFt);
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   const double tanb2 = Sqr(tanb);
   const double sinb = tanb / Sqrt(1. + tanb2);
   const double cosb = 1. / Sqrt(1. + tanb2);
   const double sinb2 = Sqr(sinb);
   const double cosb2 = Sqr(cosb);
   double amu = Re(-Mu);
   double mg = MGlu;
   double mAsq = Sqr(get_MPseudoscalarHiggs()(0));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFb);
   double rmtausq = Sqr(MFtau);
   double fmasq = Abs(mAsq);

   double p2s = 0., p2w = 0., p2b = 0., p2tau = 0.;

   LOCK_MUTEX();

   if (HIGGS_2LOOP_CORRECTION_AT_AS) {
      self_energy_pseudoscalar_2loop_at_as_mssm(
         &rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
         &tanb, &vev2, &gs, &p2s);
   }

   if (HIGGS_2LOOP_CORRECTION_AB_AS) {
      self_energy_pseudoscalar_2loop_ab_as_mssm(
         &rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
         &cotbeta, &vev2, &gs, &p2b);
   }

   if (HIGGS_2LOOP_CORRECTION_AT_AT) {
      self_energy_pseudoscalar_2loop_at_at_mssm(
         &rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
         &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &p2w);
   }

   if (HIGGS_2LOOP_CORRECTION_ATAU_ATAU) {
      self_energy_pseudoscalar_2loop_atau_atau_mssm(
         &rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
         &costau, &scalesq, &amu, &tanb, &vev2, &p2tau);
   }

   UNLOCK_MUTEX();

   const double dMA = p2s + p2w + p2b + p2tau;

   // see hep-ph/0105096 Eq. (9)
   result[0] = - dMA * sinb2;
   result[1] = - dMA * sinb * cosb;
   result[2] = - dMA * cosb2;

   // dMA contains two loop tadpoles, which we'll now subtract
   double tadpole[2];
   tadpole_hh_2loop(tadpole);

   result[0] += tadpole[0] / vd;
   result[2] += tadpole[1] / vu;

}



void CLASSNAME::tadpole_hh_2loop(double result[2]) const
{
   // calculate 3rd generation sfermion masses and mixing angles
   double mst_1, mst_2, theta_t;
   double msb_1, msb_2, theta_b;
   double mstau_1, mstau_2, theta_tau;
   double msnu_1, msnu_2, theta_nu;

   calculate_MTopSquark_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MBottomSquark_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MSelectron_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MSneutrino_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFt);
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   double amu = Re(-Mu);
   double mg = MGlu;
   double mAsq = Sqr(get_MPseudoscalarHiggs()(0));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFb);
   double rmtausq = Sqr(MFtau);

   double s1s = 0., s2s = 0., s1t = 0., s2t = 0.;
   double s1b = 0., s2b = 0., s1tau = 0., s2tau = 0.;

   LOCK_MUTEX();

   if (HIGGS_2LOOP_CORRECTION_AT_AS) {
      tadpole_higgs_2loop_at_as_mssm(
         &rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq,
         &amu, &tanb, &vev2, &gs, &s1s, &s2s);
   }

   if (HIGGS_2LOOP_CORRECTION_AT_AT) {
      tadpole_higgs_2loop_at_at_mssm(
         &rmtsq, &rmbsq, &mAsq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
         &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &s1t, &s2t);
   }

   if (HIGGS_2LOOP_CORRECTION_AB_AS) {
      tadpole_higgs_2loop_ab_as_mssm(
         &rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq,
         &amu, &cotbeta, &vev2, &gs, &s2b, &s1b);
   }

   if (HIGGS_2LOOP_CORRECTION_ATAU_ATAU) {
      tadpole_higgs_2loop_atau_atau_mssm(
         &rmtausq, &mAsq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
         &costau, &scalesq, &amu, &tanb, &vev2, &s1tau, &s2tau);
   }

   UNLOCK_MUTEX();

   if (!std::isnan(s1s * s1t * s1b * s1tau * s2s * s2t * s2b * s2tau)) {
      result[0] = (- s1s - s1t - s1b - s1tau) * vd;
      result[1] = (- s2s - s2t - s2b - s2tau) * vu;
   } else {
      result[0] = 0.;
      result[1] = 0.;
   }

}


void CLASSNAME::calculate_MVG_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MVG) = 0.;
}

void CLASSNAME::calculate_MGlu_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Glu());
   const double p = MGlu;
   const double self_energy_1  = Re(self_energy_Glu_1(p));
   const double self_energy_PL = Re(self_energy_Glu_PL(p));
   const double self_energy_PR = Re(self_energy_Glu_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MGlu) = calculate_singlet_mass(M_1loop);
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
   const double M_tree(get_mass_matrix_Fd());
   const double p = MFd;
   const double self_energy_1  = Re(self_energy_Fd_1(p));
   const double self_energy_PL = Re(self_energy_Fd_PL(p));
   const double self_energy_PR = Re(self_energy_Fd_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFd) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFs_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fs());
   const double p = MFs;
   const double self_energy_1  = Re(self_energy_Fs_1(p));
   const double self_energy_PL = Re(self_energy_Fs_PL(p));
   const double self_energy_PR = Re(self_energy_Fs_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFs) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFb_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fb());
   const double p = MFb;
   const double self_energy_1  = Re(self_energy_Fb_1(p));
   const double self_energy_PL = Re(self_energy_Fb_PL(p));
   const double self_energy_PR = Re(self_energy_Fb_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFb) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFu_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fu());
   const double p = MFu;
   const double self_energy_1  = Re(self_energy_Fu_1(p));
   const double self_energy_PL = Re(self_energy_Fu_PL(p));
   const double self_energy_PR = Re(self_energy_Fu_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFu) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFc_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fc());
   const double p = MFc;
   const double self_energy_1  = Re(self_energy_Fc_1(p));
   const double self_energy_PL = Re(self_energy_Fc_PL(p));
   const double self_energy_PR = Re(self_energy_Fc_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFc) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFt_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Ft());
   const bool add_2loop_corrections = pole_mass_loop_order > 1 &&
      TOP_2LOOP_CORRECTION_QCD;
   const double currentScale = get_scale();

   const double qcd_1l = 0.025330295910584444*(-1.6666666666666667 + 1.*
      Log(Sqr(MFt)/Sqr(currentScale)))*Sqr(g3);

   double qcd_2l = 0.;

   if (add_2loop_corrections) {
      qcd_2l = -0.005191204615668296*Power(g3,4) +
         0.0032883224409535764*Power(g3,4)*Log(Sqr(MFt)/Sqr(currentScale)) -
         0.0008822328500119351*Power(g3,4)*Sqr(Log(Power(MFt,2)/Sqr(
         currentScale)));
   }

   const double p = MFt;
   const double self_energy_1  = Re(self_energy_Ft_1_heavy(p));
   const double self_energy_PL = Re(self_energy_Ft_PL_heavy(p));
   const double self_energy_PR = Re(self_energy_Ft_PR_heavy(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR) - M_tree * (qcd_1l + qcd_2l);

   PHYSICAL(MFt) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFve_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MFve) = 0.;
}

void CLASSNAME::calculate_MFvm_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MFvm) = 0.;
}

void CLASSNAME::calculate_MFvt_pole()
{
   // diagonalization with medium precision
   PHYSICAL(MFvt) = 0.;
}

void CLASSNAME::calculate_MFe_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fe());
   const double p = MFe;
   const double self_energy_1  = Re(self_energy_Fe_1(p));
   const double self_energy_PL = Re(self_energy_Fe_PL(p));
   const double self_energy_PR = Re(self_energy_Fe_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFe) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFm_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Fm());
   const double p = MFm;
   const double self_energy_1  = Re(self_energy_Fm_1(p));
   const double self_energy_PL = Re(self_energy_Fm_PL(p));
   const double self_energy_PR = Re(self_energy_Fm_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFm) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MFtau_pole()
{
   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_Ftau());
   const double p = MFtau;
   const double self_energy_1  = Re(self_energy_Ftau_1(p));
   const double self_energy_PL = Re(self_energy_Ftau_PL(p));
   const double self_energy_PR = Re(self_energy_Ftau_PR(p));
   const auto M_1loop = M_tree - self_energy_1 - M_tree * (self_energy_PL
      + self_energy_PR);
   PHYSICAL(MFtau) = calculate_singlet_mass(M_1loop);
}

void CLASSNAME::calculate_MSveL_pole()
{
   if (!force_output && problems.is_tachyon(SveL))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_SveL());
   const double p = MSveL;
   const double self_energy = Re(self_energy_SveL(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(SveL);

   PHYSICAL(MSveL) = AbsSqrt(mass_sqr);
}

void CLASSNAME::calculate_MSvmL_pole()
{
   if (!force_output && problems.is_tachyon(SvmL))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_SvmL());
   const double p = MSvmL;
   const double self_energy = Re(self_energy_SvmL(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(SvmL);

   PHYSICAL(MSvmL) = AbsSqrt(mass_sqr);
}

void CLASSNAME::calculate_MSvtL_pole()
{
   if (!force_output && problems.is_tachyon(SvtL))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_SvtL());
   const double p = MSvtL;
   const double self_energy = Re(self_energy_SvtL(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(SvtL);

   PHYSICAL(MSvtL) = AbsSqrt(mass_sqr);
}

void CLASSNAME::calculate_MSd_pole()
{
   if (!force_output && problems.is_tachyon(Sd))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Sd());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSd(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sd(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZD;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZD,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Sd, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZD);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sd);

      PHYSICAL(MSd(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZD) = mix_ZD;
   }
}

void CLASSNAME::calculate_MSu_pole()
{
   if (!force_output && problems.is_tachyon(Su))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Su());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSu(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Su(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZU;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZU,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Su, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZU);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Su);

      PHYSICAL(MSu(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZU) = mix_ZU;
   }
}

void CLASSNAME::calculate_MSe_pole()
{
   if (!force_output && problems.is_tachyon(Se))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Se());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSe(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Se(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZE;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZE,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Se, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZE);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Se);

      PHYSICAL(MSe(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZE) = mix_ZE;
   }
}

void CLASSNAME::calculate_MSm_pole()
{
   if (!force_output && problems.is_tachyon(Sm))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Sm());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSm(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sm(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZM;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZM,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Sm, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZM);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sm);

      PHYSICAL(MSm(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZM) = mix_ZM;
   }
}

void CLASSNAME::calculate_MStau_pole()
{
   if (!force_output && problems.is_tachyon(Stau))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Stau());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MStau(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Stau(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZTau;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZTau,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Stau,
            eigenvalue_error > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZTau);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Stau);

      PHYSICAL(MStau(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZTau) = mix_ZTau;
   }
}

void CLASSNAME::calculate_MSs_pole()
{
   if (!force_output && problems.is_tachyon(Ss))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Ss());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSs(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Ss(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZS;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZS,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Ss, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZS);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Ss);

      PHYSICAL(MSs(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZS) = mix_ZS;
   }
}

void CLASSNAME::calculate_MSc_pole()
{
   if (!force_output && problems.is_tachyon(Sc))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Sc());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSc(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sc(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZC;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZC,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Sc, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZC);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sc);

      PHYSICAL(MSc(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZC) = mix_ZC;
   }
}

void CLASSNAME::calculate_MSb_pole()
{
   if (!force_output && problems.is_tachyon(Sb))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Sb());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSb(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sb(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZB;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZB,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Sb, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZB);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sb);

      PHYSICAL(MSb(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZB) = mix_ZB;
   }
}

void CLASSNAME::calculate_MSt_pole()
{
   if (!force_output && problems.is_tachyon(St))
      return;

   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_St());

   for (unsigned es = 0; es < 2; ++es) {

      const double p = Abs(MSt(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = i1; i2 < 2; ++i2) {
            self_energy(i1,i2) = Re(self_energy_St(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree - self_energy);
      Eigen::Array<double,2,1> eigen_values;
      Eigen::Matrix<double,2,2> mix_ZT;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZT,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::St, eigenvalue_error
            > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZT);
      #endif

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(St);

      PHYSICAL(MSt(es)) = AbsSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZT) = mix_ZT;
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

      // two-loop Higgs self-energy contributions
      double two_loop[3] = { 0. };
      if (pole_mass_loop_order > 1)
         self_energy_hh_2loop(two_loop);

      for (unsigned es = 0; es < 2; ++es) {

         const double p = Abs(old_Mhh(es));
         for (unsigned i1 = 0; i1 < 2; ++i1) {
            for (unsigned i2 = i1; i2 < 2; ++i2) {
               self_energy(i1,i2) = Re(self_energy_hh(p,i1,i2
                  ));
            }
         }

         self_energy(0, 0) += two_loop[0];
         self_energy(0, 1) += two_loop[1];
         self_energy(1, 1) += two_loop[2];

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZH;
         #ifdef CHECK_EIGENVALUE_ERROR
            double eigenvalue_error;
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZH, eigenvalue_error);
            problems.flag_bad_mass(MSSMNoFV_info::hh,
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
      problems.flag_no_pole_mass_convergence(MSSMNoFV_info::hh);
   else
      problems.unflag_no_pole_mass_convergence(MSSMNoFV_info::hh);
}

void CLASSNAME::calculate_MAh_pole()
{
   if (!force_output && problems.is_tachyon(Ah))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MAh) old_MAh(MAh), new_MAh(MAh);

   do {
      Eigen::Matrix<double,2,2> self_energy;
      const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Ah());

      // two-loop Higgs self-energy contributions
      double two_loop[3] = { 0. };
      if (pole_mass_loop_order > 1)
         self_energy_Ah_2loop(two_loop);

      for (unsigned es = 0; es < 2; ++es) {
         // skip goldstone bosons
         if (is_equal_rel(MAh(es), MVZ, 1e-10)) {
            PHYSICAL(MAh(es)) = MVZ;
            continue;
         }

         const double p = Abs(old_MAh(es));
         for (unsigned i1 = 0; i1 < 2; ++i1) {
            for (unsigned i2 = i1; i2 < 2; ++i2) {
               self_energy(i1,i2) = Re(self_energy_Ah(p,i1,i2
                  ));
            }
         }

         self_energy(0, 0) += two_loop[0];
         self_energy(0, 1) += two_loop[1];
         self_energy(1, 1) += two_loop[2];

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZA;
         #ifdef CHECK_EIGENVALUE_ERROR
            double eigenvalue_error;
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZA, eigenvalue_error);
            problems.flag_bad_mass(MSSMNoFV_info::Ah,
               eigenvalue_error > precision * Abs(eigen_values(0)));
         #else
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZA);
         #endif

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(Ah);

         PHYSICAL(MAh(es)) = AbsSqrt(eigen_values(es));
         if (es == 1)
            PHYSICAL(ZA) = mix_ZA;
      }

      new_MAh = PHYSICAL(MAh);
      diff = MaxRelDiff(new_MAh, old_MAh);
      old_MAh = new_MAh;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(MSSMNoFV_info::Ah);
   else
      problems.unflag_no_pole_mass_convergence(MSSMNoFV_info::Ah);
}

void CLASSNAME::calculate_MHpm_pole()
{
   if (!force_output && problems.is_tachyon(Hpm))
      return;

   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MHpm) old_MHpm(MHpm), new_MHpm(MHpm);

   do {
      Eigen::Matrix<double,2,2> self_energy;
      const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Hpm());

      for (unsigned es = 0; es < 2; ++es) {
         // skip goldstone bosons
         if (is_equal_rel(MHpm(es), MVWm, 1e-10)) {
            PHYSICAL(MHpm(es)) = MVWm;
            continue;
         }

         const double p = Abs(old_MHpm(es));
         for (unsigned i1 = 0; i1 < 2; ++i1) {
            for (unsigned i2 = i1; i2 < 2; ++i2) {
               self_energy(i1,i2) = Re(self_energy_Hpm(p,i1,
                  i2));
            }
         }

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZP;
         #ifdef CHECK_EIGENVALUE_ERROR
            double eigenvalue_error;
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZP, eigenvalue_error);
            problems.flag_bad_mass(MSSMNoFV_info::Hpm,
               eigenvalue_error > precision * Abs(eigen_values(0)));
         #else
            fs_diagonalize_hermitian(M_1loop, eigen_values,
               mix_ZP);
         #endif

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(Hpm);

         PHYSICAL(MHpm(es)) = AbsSqrt(eigen_values(es));
         if (es == 1)
            PHYSICAL(ZP) = mix_ZP;
      }

      new_MHpm = PHYSICAL(MHpm);
      diff = MaxRelDiff(new_MHpm, old_MHpm);
      old_MHpm = new_MHpm;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);

   if (diff > precision)
      problems.flag_no_pole_mass_convergence(MSSMNoFV_info::Hpm);
   else
      problems.unflag_no_pole_mass_convergence(MSSMNoFV_info::Hpm);
}

void CLASSNAME::calculate_MChi_pole()
{
   // diagonalization with medium precision
   Eigen::Matrix<double,4,4> self_energy_1;
   Eigen::Matrix<double,4,4> self_energy_PL;
   Eigen::Matrix<double,4,4> self_energy_PR;
   const Eigen::Matrix<double,4,4> M_tree(get_mass_matrix_Chi());
   for (unsigned es = 0; es < 4; ++es) {
      const double p = Abs(MChi(es));
      for (unsigned i1 = 0; i1 < 4; ++i1) {
         for (unsigned i2 = 0; i2 < 4; ++i2) {
            self_energy_1(i1,i2)  = Re(self_energy_Chi_1(p,i1,i2
               ));
            self_energy_PL(i1,i2) = Re(self_energy_Chi_PL(p,i1,
               i2));
            self_energy_PR(i1,i2) = Re(self_energy_Chi_PR(p,i1,
               i2));
         }
      }
      const Eigen::Matrix<double,4,4> delta_M(- self_energy_PR *
         M_tree - M_tree * self_energy_PL - self_energy_1);
      const Eigen::Matrix<double,4,4> M_1loop(M_tree + 0.5 * (delta_M
         + delta_M.transpose()));
      Eigen::Array<double,4,1> eigen_values;
      decltype(ZN) mix_ZN;
      #ifdef CHECK_EIGENVALUE_ERROR
         double eigenvalue_error;
         fs_diagonalize_symmetric(M_1loop, eigen_values, mix_ZN,
            eigenvalue_error);
         problems.flag_bad_mass(MSSMNoFV_info::Chi,
            eigenvalue_error > precision * Abs(eigen_values(0)));
      #else
         fs_diagonalize_symmetric(M_1loop, eigen_values, mix_ZN);
      #endif
      if (es == 0)
         PHYSICAL(ZN) = mix_ZN;
      PHYSICAL(MChi(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MCha_pole()
{
   // diagonalization with medium precision
   Eigen::Matrix<double,2,2> self_energy_1;
   Eigen::Matrix<double,2,2> self_energy_PL;
   Eigen::Matrix<double,2,2> self_energy_PR;
   const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Cha());
   for (unsigned es = 0; es < 2; ++es) {
      const double p = Abs(MCha(es));
      for (unsigned i1 = 0; i1 < 2; ++i1) {
         for (unsigned i2 = 0; i2 < 2; ++i2) {
            self_energy_1(i1,i2)  = Re(self_energy_Cha_1(p,i1,i2
               ));
            self_energy_PL(i1,i2) = Re(self_energy_Cha_PL(p,i1,
               i2));
            self_energy_PR(i1,i2) = Re(self_energy_Cha_PR(p,i1,
               i2));
         }
      }
      const Eigen::Matrix<double,2,2> delta_M(- self_energy_PR *
         M_tree - M_tree * self_energy_PL - self_energy_1);
      const Eigen::Matrix<double,2,2> M_1loop(M_tree + delta_M);
      Eigen::Array<double,2,1> eigen_values;
      decltype(UM) mix_UM;
      decltype(UP) mix_UP;
   #ifdef CHECK_EIGENVALUE_ERROR
      double eigenvalue_error;
      fs_svd(M_1loop, eigen_values, mix_UM, mix_UP, eigenvalue_error);
      problems.flag_bad_mass(MSSMNoFV_info::Cha, eigenvalue_error >
         precision * Abs(eigen_values(0)));
   #else
      fs_svd(M_1loop, eigen_values, mix_UM, mix_UP);
   #endif
      if (es == 0) {
         PHYSICAL(UM) = mix_UM;
         PHYSICAL(UP) = mix_UP;
      }
      PHYSICAL(MCha(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MVWm_pole()
{
   if (!force_output && problems.is_tachyon(VWm))
      return;

   // diagonalization with medium precision
   const double M_tree(get_mass_matrix_VWm());
   const double p = MVWm;
   const double self_energy = Re(self_energy_VWm(p));
   const double mass_sqr = M_tree - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VWm);

   PHYSICAL(MVWm) = AbsSqrt(mass_sqr);
}

double CLASSNAME::calculate_MVWm_pole(double p)
{
   if (!force_output && problems.is_tachyon(VWm))
      return 0.;

   const double self_energy = Re(self_energy_VWm(p));
   const double mass_sqr = get_mass_matrix_VWm() - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VWm);

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


double CLASSNAME::calculate_MFt_DRbar(double m_pole, int) const
{
   const double p = m_pole;
   const double self_energy_1  = Re(self_energy_Ft_1_heavy_rotated(p));
   const double self_energy_PL = Re(self_energy_Ft_PL_heavy_rotated(p));
   const double self_energy_PR = Re(self_energy_Ft_PR_heavy_rotated(p));

   const double currentScale = get_scale();
   const double qcd_1l = 0.025330295910584444*(-1.6666666666666667 + 1.*
      Log(Sqr(MFt)/Sqr(currentScale)))*Sqr(g3);
   const double qcd_2l = -0.003408916029785599*Power(g3,4) +
      0.0011495761378943394*Power(g3,4)*Log(Sqr(MFt)/Sqr(currentScale)) -
      0.00024060895909416413*Power(g3,4)*Sqr(Log(Power(MFt,2)/Sqr(currentScale)
      ));

   const double m_susy_drbar = m_pole + self_energy_1 + m_pole * (
      self_energy_PL + self_energy_PR + qcd_1l + qcd_2l);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFb_DRbar(double m_sm_msbar, int) const
{
   const double p = m_sm_msbar;
   const double self_energy_1  = Re(self_energy_Fb_1_heavy_rotated(p));
   const double self_energy_PL = Re(self_energy_Fb_PL_heavy_rotated(p));
   const double self_energy_PR = Re(self_energy_Fb_PR_heavy_rotated(p));
   const double m_tree = MFb;
   const double drbar_conversion = 1 - 0.00020496318737651018*Power(g3,4)
      + 0.0006860288475783287*Sqr(g1) + 0.0023747152416172916*Sqr(g2) -
      0.008443431970194815*Sqr(g3);
   const double m_sm_drbar = m_sm_msbar * drbar_conversion;

   const double m_susy_drbar = m_sm_drbar / (1.0 - self_energy_1/m_tree -
      self_energy_PL - self_energy_PR);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFtau_DRbar(double m_sm_msbar, int) const
{
   const double p = m_sm_msbar;
   const double self_energy_1  = Re(self_energy_Ftau_1_heavy_rotated(p));
   const double self_energy_PL = Re(self_energy_Ftau_PL_heavy_rotated(p))
      ;
   const double self_energy_PR = Re(self_energy_Ftau_PR_heavy_rotated(p))
      ;
   const double drbar_conversion = 1 - 0.0023747152416172916*(0.6*Sqr(g1)
      - Sqr(g2));
   const double m_sm_drbar = m_sm_msbar * drbar_conversion;

   const double m_susy_drbar = m_sm_drbar + self_energy_1 + m_sm_drbar *
      (self_energy_PL + self_energy_PR);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFvt_DRbar(double m_pole, int) const
{
   const double p = m_pole;
   const double self_energy_1  = Re(self_energy_Fvt_1(p));
   const double self_energy_PL = Re(self_energy_Fvt_PL(p));
   const double self_energy_PR = Re(self_energy_Fvt_PR(p));

   const double m_drbar = m_pole + self_energy_1 + m_pole * (
      self_energy_PL + self_energy_PR);

   return m_drbar;
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

double CLASSNAME::calculate_MVWm_DRbar(double m_pole)
{
   const double p = m_pole;
   const double self_energy = Re(self_energy_VWm(p));
   const double mass_sqr = Sqr(m_pole) + self_energy;

   if (mass_sqr < 0.) {
      problems.flag_tachyon(VWm);
      return m_pole;
   }

   return AbsSqrt(mass_sqr);
}


double CLASSNAME::ThetaW() const
{
   return ArcTan((0.7745966692414834*g1)/g2);
}

double CLASSNAME::v() const
{
   return 2*Sqrt(Sqr(MVWm)/Sqr(g2));
}


std::ostream& operator<<(std::ostream& ostr, const MSSMNoFV_mass_eigenstates& model)
{
   model.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
