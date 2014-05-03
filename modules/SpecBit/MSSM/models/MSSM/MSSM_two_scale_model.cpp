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

// File generated at Fri 2 May 2014 14:58:17

#include "MSSM_two_scale_model.hpp"
#include "wrappers.hpp"
#include "linalg2.hpp"
#include "logger.hpp"
#include "error.hpp"
#include "root_finder.hpp"
#include "gsl_utils.hpp"
#include "config.h"

#ifdef ENABLE_LOOPTOOLS
#include <clooptools.h>
#endif

#include "sfermions.hpp"
#include "mssm_twoloophiggs.h"


#include <cmath>
#include <iostream>

#ifdef ENABLE_THREADS
#include <thread>
#endif

namespace flexiblesusy {

using namespace MSSM_info;

#define CLASSNAME MSSM<Two_scale>

#define PHYSICAL(parameter) physical.parameter
#define INPUT(parameter) model->get_input().parameter
#define LOCALINPUT(parameter) input.parameter

#ifdef ENABLE_THREADS
std::mutex CLASSNAME::mtx_fortran;
#endif

#ifdef ENABLE_THREADS
#define LOCK_MUTEX() mtx_fortran.lock()
#define UNLOCK_MUTEX() mtx_fortran.unlock()
#else
#define LOCK_MUTEX()
#define UNLOCK_MUTEX()
#endif

CLASSNAME::MSSM(const MSSM_input_parameters& input_)
   : Two_scale_model()
   , MSSM_soft_parameters(input_)
   , number_of_ewsb_iterations(100)
   , number_of_mass_iterations(20)
   , ewsb_loop_order(2)
   , pole_mass_loop_order(2)
   , calculate_sm_pole_masses(false)
   , precision(1.0e-3)
   , ewsb_iteration_precision(1.0e-5)
   , physical()
   , problems(MSSM_info::particle_names)
   , thread_exception()
   , MVG(0), MGlu(0), MFv(Eigen::Array<double,3,1>::Zero()), MVP(0), MVZ(0),
      MSd(Eigen::Array<double,6,1>::Zero()), MSv(Eigen::Array<double,3,1>::Zero())
      , MSu(Eigen::Array<double,6,1>::Zero()), MSe(Eigen::Array<double,6,1>::Zero(
      )), Mhh(Eigen::Array<double,2,1>::Zero()), MAh(Eigen::Array<double,2,1>
      ::Zero()), MHpm(Eigen::Array<double,2,1>::Zero()), MChi(Eigen::Array<double,
      4,1>::Zero()), MCha(Eigen::Array<double,2,1>::Zero()), MFe(Eigen::Array<
      double,3,1>::Zero()), MFd(Eigen::Array<double,3,1>::Zero()), MFu(
      Eigen::Array<double,3,1>::Zero()), MVWm(0)

   , ZD(Eigen::Matrix<double,6,6>::Zero()), ZV(Eigen::Matrix<double,3,3>::Zero(
      )), ZU(Eigen::Matrix<double,6,6>::Zero()), ZE(Eigen::Matrix<double,6,6>
      ::Zero()), ZH(Eigen::Matrix<double,2,2>::Zero()), ZA(Eigen::Matrix<double,2,
      2>::Zero()), ZP(Eigen::Matrix<double,2,2>::Zero()), ZN(Eigen::Matrix<
      std::complex<double>,4,4>::Zero()), UM(Eigen::Matrix<std::complex<double>,2,
      2>::Zero()), UP(Eigen::Matrix<std::complex<double>,2,2>::Zero()), ZEL(
      Eigen::Matrix<std::complex<double>,3,3>::Zero()), ZER(Eigen::Matrix<
      std::complex<double>,3,3>::Zero()), ZDL(Eigen::Matrix<std::complex<double>,3
      ,3>::Zero()), ZDR(Eigen::Matrix<std::complex<double>,3,3>::Zero()), ZUL(
      Eigen::Matrix<std::complex<double>,3,3>::Zero()), ZUR(Eigen::Matrix<
      std::complex<double>,3,3>::Zero())

   , PhaseGlu(1,0)

{
}

CLASSNAME::~MSSM()
{
}
//inspired by softsusy's lsp method.  
//This MSSM version assumes all states mass ordered. 
//returns lsp mass and gives 3 integers to specify the state 
// for most general case of a particle type with mass matrix 
// row and col set to -1 when not needed 
//(row only is used for vector) 
//particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
//3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
double CLASSNAME::get_lsp_mass(int & particle_type, int & row, int & col) const
{
   row = -1; col = -1;  particle_type =-1;//set default
   double minmass = fabs(MChi(0)); //most common lsp
   particle_type = 0;
   row = 0;
  
   /// sneutrinos 1
   double lightest = MSv(0);
   if (lightest < minmass) { 
      minmass = lightest; 
      particle_type = 1; 
      row=0;
   }
   

   /// up squarks 2
   lightest = MSu(0);
   if (lightest < minmass) { 
      minmass = lightest; 
      particle_type = 2;
      row=0;
   }
   
   /// down squarks 3
   lightest = MSd(0);
   if (lightest < minmass) { 
      minmass = lightest; 
      particle_type = 3;
      row=0;      
   }
   
   /// sleptons 4
   lightest = MSe(0);
   if (lightest < minmass) { 
      minmass = lightest; 
      particle_type = 4; 
      row=0;    
   }
   
  /// charginos 5
   lightest = fabs(MCha(0));
   if (lightest < minmass) { 
      minmass = lightest; 
      particle_type = 5; 
      row=0;    
   }
   
   /// gluino 6
   lightest = fabs(MGlu);
   if (lightest < minmass) {
      minmass = lightest; 
      particle_type = 6; 
      row=0;    
   }
   
   //We have no gravitino mass right now.   this should be added.
   // /// gravitino -1 
   // lightest = displayGravitino();
   // if (lightest < minmass) {
   //   minmass = lightest; posi = 0; posj = 0; particle_type = -1; }  
   
   return minmass;
}

//The MSSM has just one LSP - often the lightest neutralino
int CLASSNAME::get_numbers_stable_particles() const {
   return 1;
}

   //these are just wrappers.  Need to test this carefully though
   //inheritance is complicated
void CLASSNAME::RunToScale(double scale){
   run_to(scale);
}
double CLASSNAME::GetScale() const {
   return get_scale();
}
void CLASSNAME::SetScale(double scale){
   set_scale(scale);
}

//Takes a string and an index. 
double CLASSNAME::get_Pole_Mass(std::string polemass) const {
   if(polemass == "MZ") 
      {
         return get_MVZ();
      }
   else if(polemass == "MW") 
      {
         return get_MVWm();
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MA0") 
      {
         return get_MAh()(2);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MHpm") 
      {
         return get_MHpm()(2);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
   else if(polemass == "MGoldstone0") 
      {
         return get_MAh()(1);
      }
   //I really need to know goldstone index here!
   //Dangerous otherwise
    else if(polemass == "MGoldstonePM") 
      {
         return get_MHpm()(1);
      }
    else if (polemass == "MGluino")
       {
          return get_MGlu();
       }
    else if(polemass == "MGluon")
      {
         return get_MVG();
      }
   else if(polemass == "MPhoton")
      {
         return get_MVP();
      }
   else if(polemass == "Mtop")
      {
         return get_MFu()(3);
      }
    else if(polemass == "Mcharm")
      {
         return get_MFu()(2);
      }
    else if(polemass == "Mup")
      {
         return get_MFu()(1);
      }
    else if(polemass == "Mbottom")
      {
         return get_MFd()(3);
      }
    else if(polemass == "Mstrange")
      {
         return get_MFd()(2);
      }
    else if(polemass == "Mdown")
      {
         return get_MFd()(1);
      }
    else if(polemass == "Mtau")
      {
         return get_MFe()(3);
      }
    else if(polemass == "Mmuon")
      {
         return get_MFe()(2);
      }
    else if(polemass == "Melectron")
      {
         return get_MFe()(1);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}

//Takes a string and an index. 
double CLASSNAME::get_Pole_Mass(std::string polemass, int i) const {
   if(polemass == "MSd") 
      {
         return get_MSd()(i);
      }
   else if(polemass == "MSv") 
      {
         return get_MSv()(i);
      }
   else if(polemass == "MSu")
      {
         return get_MSu()(i);
      }
   else if(polemass == "MSe")
      {
         return get_MSe()(i);
      } 
   else if(polemass == "Mh0") 
      {
         return get_Mhh()(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
   else if(polemass == "MA0") 
      {
         return get_MAh()(i);
      }
   //Here we may access the goldstone boson
   //this is probably too dangerous to keep!
    else if(polemass == "MHpm") 
      {
         return get_MHpm()(i);
      }
   else if(polemass == "MCha") 
      {
         return get_MCha()(i);
      }
   else if(polemass == "MChi") 
      {
         return get_MChi()(i);
      }
   else{ 
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;
   }
}


//Takes a string and an index. 
double CLASSNAME::get_Pole_Mass(std::string polemass, int i, int j) const {
   std::cout << "Error: The pole mass you requested does not exist in the MSSM" << std::endl;
   return -1.0;

}

double CLASSNAME::get_Mixing_angle(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}

double CLASSNAME::get_Mixing_element(std::string, int i, int j) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}
double CLASSNAME::get_mass2_parameter(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}
double CLASSNAME::get_mass_parameter(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}
double CLASSNAME::get_dimensionless_parameter(std::string) const {
   std::cout << "Error: Sorry I know nothing" << std::endl;
   return 6666666666666.6666666666666;
}


void CLASSNAME::do_calculate_sm_pole_masses(bool flag)
{
   calculate_sm_pole_masses = flag;
}

bool CLASSNAME::do_calculate_sm_pole_masses() const
{
   return calculate_sm_pole_masses;
}

void CLASSNAME::set_ewsb_loop_order(unsigned loop_order)
{
   ewsb_loop_order = loop_order;
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

const MSSM_physical& CLASSNAME::get_physical() const
{
   return physical;
}

const Problems<MSSM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems() const
{
   return problems;
}

Problems<MSSM_info::NUMBER_OF_PARTICLES>& CLASSNAME::get_problems()
{
   return problems;
}

int CLASSNAME::tadpole_equations(const gsl_vector* x, void* params, gsl_vector* f)
{
   if (contains_nan(x, number_of_ewsb_equations)) {
      for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
         gsl_vector_set(f, i, std::numeric_limits<double>::max());
      return GSL_EDOM;
   }

   const CLASSNAME::Ewsb_parameters* ewsb_parameters
      = static_cast<CLASSNAME::Ewsb_parameters*>(params);
   MSSM* model = ewsb_parameters->model;
   const unsigned ewsb_loop_order = ewsb_parameters->ewsb_loop_order;

   double tadpole[number_of_ewsb_equations];

   model->set_BMu(gsl_vector_get(x, 0));
   model->set_Mu(INPUT(SignMu) * Abs(gsl_vector_get(x, 1)));

   tadpole[0] = model->get_ewsb_eq_hh_1();
   tadpole[1] = model->get_ewsb_eq_hh_2();

   if (ewsb_loop_order > 0) {
      model->calculate_DRbar_parameters();
      tadpole[0] -= Re(model->tadpole_hh(0));
      tadpole[1] -= Re(model->tadpole_hh(1));

      if (ewsb_loop_order > 1) {
         double two_loop_tadpole[2];
         model->tadpole_hh_2loop(two_loop_tadpole);
         tadpole[0] -= two_loop_tadpole[0];
         tadpole[1] -= two_loop_tadpole[1];

      }
   }

   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      gsl_vector_set(f, i, tadpole[i]);

   return GSL_SUCCESS;
}

int CLASSNAME::solve_ewsb_iteratively()
{
   const gsl_multiroot_fsolver_type* solvers[] =
      {gsl_multiroot_fsolver_hybrid, gsl_multiroot_fsolver_hybrids};

   double x_init[number_of_ewsb_equations];
   ewsb_initial_guess(x_init);

#ifdef ENABLE_VERBOSE
   std::cout << "Solving EWSB equations ...\n"
      "\tInitial guess: x_init =";
   for (std::size_t i = 0; i < number_of_ewsb_equations; ++i)
      std::cout << " " << x_init[i];
   std::cout << '\n';
#endif

   int status;
   for (std::size_t i = 0; i < sizeof(solvers)/sizeof(*solvers); ++i) {
      VERBOSE_MSG("\tStarting EWSB iteration using solver " << i);
      status = solve_ewsb_iteratively_with(solvers[i], x_init);
      if (status == GSL_SUCCESS) {
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

   if (status != GSL_SUCCESS) {
      problems.flag_no_ewsb();
#ifdef ENABLE_VERBOSE
      WARNING("\tCould not find a solution to the EWSB equations!"
              " (requested precision: " << ewsb_iteration_precision << ")");
#endif
   } else {
      problems.unflag_no_ewsb();
   }

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

   BMu = (0.05*(-20*mHd2*vd*vu + 20*mHu2*vd*vu - 3*Power(vd,3)*vu*Sqr(g1) + 3*
      vd*Power(vu,3)*Sqr(g1) - 5*Power(vd,3)*vu*Sqr(g2) + 5*vd*Power(vu,3)*Sqr(g2)
      ))/(Sqr(vd) - Sqr(vu));
   Mu = 0.15811388300841897*LOCALINPUT(SignMu)*Sqrt((-40*mHd2*vd + 40*vu*BMu -
      3*Power(vd,3)*Sqr(g1) - 5*Power(vd,3)*Sqr(g2) + 3*vd*Sqr(g1)*Sqr(vu) + 5*vd*
      Sqr(g2)*Sqr(vu))/vd);

   const bool is_finite = std::isfinite(BMu) && std::isfinite(Mu);

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

   const double new_mHd2 = (0.025*(-40*vd*AbsSqr(Mu) + 20*vu*BMu + 20*vu*Conj(
      BMu) - 3*Power(vd,3)*Sqr(g1) - 5*Power(vd,3)*Sqr(g2) + 3*vd*Sqr(g1)*Sqr(vu)
      + 5*vd*Sqr(g2)*Sqr(vu)))/vd;
   const double new_mHu2 = (0.025*(-40*vu*AbsSqr(Mu) + 20*vd*BMu + 20*vd*Conj(
      BMu) - 3*Power(vu,3)*Sqr(g1) - 5*Power(vu,3)*Sqr(g2) + 3*vu*Sqr(g1)*Sqr(vd)
      + 5*vu*Sqr(g2)*Sqr(vd)))/vu;

   if (std::isfinite(new_mHd2))
      mHd2 = new_mHd2;
   else
      error = 1;
   if (std::isfinite(new_mHu2))
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

int CLASSNAME::solve_ewsb_iteratively_with(const gsl_multiroot_fsolver_type* solver,
                                           const double x_init[number_of_ewsb_equations])
{
   Ewsb_parameters params = {this, ewsb_loop_order};
   Root_finder<number_of_ewsb_equations> root_finder(CLASSNAME::tadpole_equations,
                              &params,
                              number_of_ewsb_iterations,
                              ewsb_iteration_precision);
   root_finder.set_solver_type(solver);
   const int status = root_finder.find_root(x_init);

   return status;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   ostr << "========================================\n"
           "MSSM\n"
           "========================================\n";
   MSSM_soft_parameters::print(ostr);
   ostr << "----------------------------------------\n"
           "tree-level DRbar masses:\n"
           "----------------------------------------\n";
   ostr << "MVG = " << MVG << '\n';
   ostr << "MGlu = " << MGlu << '\n';
   ostr << "MFv = " << MFv.transpose() << '\n';
   ostr << "MVP = " << MVP << '\n';
   ostr << "MVZ = " << MVZ << '\n';
   ostr << "MSd = " << MSd.transpose() << '\n';
   ostr << "MSv = " << MSv.transpose() << '\n';
   ostr << "MSu = " << MSu.transpose() << '\n';
   ostr << "MSe = " << MSe.transpose() << '\n';
   ostr << "Mhh = " << Mhh.transpose() << '\n';
   ostr << "MAh = " << MAh.transpose() << '\n';
   ostr << "MHpm = " << MHpm.transpose() << '\n';
   ostr << "MChi = " << MChi.transpose() << '\n';
   ostr << "MCha = " << MCha.transpose() << '\n';
   ostr << "MFe = " << MFe.transpose() << '\n';
   ostr << "MFd = " << MFd.transpose() << '\n';
   ostr << "MFu = " << MFu.transpose() << '\n';
   ostr << "MVWm = " << MVWm << '\n';

   ostr << "----------------------------------------\n"
           "tree-level DRbar mixing matrices:\n"
           "----------------------------------------\n";
   ostr << "ZD = " << ZD << '\n';
   ostr << "ZV = " << ZV << '\n';
   ostr << "ZU = " << ZU << '\n';
   ostr << "ZE = " << ZE << '\n';
   ostr << "ZH = " << ZH << '\n';
   ostr << "ZA = " << ZA << '\n';
   ostr << "ZP = " << ZP << '\n';
   ostr << "ZN = " << ZN << '\n';
   ostr << "UM = " << UM << '\n';
   ostr << "UP = " << UP << '\n';
   ostr << "ZEL = " << ZEL << '\n';
   ostr << "ZER = " << ZER << '\n';
   ostr << "ZDL = " << ZDL << '\n';
   ostr << "ZDR = " << ZDR << '\n';
   ostr << "ZUL = " << ZUL << '\n';
   ostr << "ZUR = " << ZUR << '\n';

   physical.print(ostr);
}

double CLASSNAME::A0(double m) const
{
   return a0(m, get_scale());
}

double CLASSNAME::B0(double p, double m1, double m2) const
{
#ifdef ENABLE_LOOPTOOLS
   setmudim(Sqr(get_scale()));
   return Re(::B0(p*p, m1*m1, m2*m2));
#else
   return b0(p, m1, m2, get_scale());
#endif
}

double CLASSNAME::B1(double p, double m1, double m2) const
{
#ifdef ENABLE_LOOPTOOLS
   setmudim(Sqr(get_scale()));
   return Re(::B1(p*p, m1*m1, m2*m2));
#else
   return -b1(p, m1, m2, get_scale());
#endif
}

double CLASSNAME::B00(double p, double m1, double m2) const
{
#ifdef ENABLE_LOOPTOOLS
   setmudim(Sqr(get_scale()));
   return Re(::B00(p*p, m1*m1, m2*m2));
#else
   return b22(p, m1, m2, get_scale());
#endif
}

double CLASSNAME::B22(double p, double m1, double m2) const
{
   return B00(p, m1, m2) - 0.25 * A0(m1) - 0.25 * A0(m2);
}

double CLASSNAME::H0(double p, double m1, double m2) const
{
   return 4.0 * B00(p, m1, m2) + G0(p, m1, m2);
}

double CLASSNAME::F0(double p, double m1, double m2) const
{
   return A0(m1) - 2.0 * A0(m2) - (2.0 * Sqr(p) + 2.0 * Sqr(m1) - Sqr(m2)) *
      B0(p, m1, m2);
}

double CLASSNAME::G0(double p, double m1, double m2) const
{
   return (Sqr(p) - Sqr(m1) - Sqr(m2)) * B0(p, m1, m2) - A0(m1) - A0(m2);
}

void CLASSNAME::calculate_DRbar_parameters()
{
   const auto old_mHd2 = mHd2;
   const auto old_mHu2 = mHu2;

   solve_ewsb_tree_level_via_soft_higgs_masses();

   calculate_MVG();
   calculate_MVP();
   calculate_MVZ();
   calculate_MVWm();
   calculate_MGlu();
   calculate_MFv();
   calculate_MSd();
   calculate_MSv();
   calculate_MSu();
   calculate_MSe();
   calculate_Mhh();
   calculate_MAh();
   calculate_MHpm();
   calculate_MChi();
   calculate_MCha();
   calculate_MFe();
   calculate_MFd();
   calculate_MFu();

   mHd2 = old_mHd2;
   mHu2 = old_mHu2;

}

void CLASSNAME::calculate_pole_masses()
{
#ifdef ENABLE_THREADS
   thread_exception = nullptr;

   std::thread thread_MGlu(Thread(this, &CLASSNAME::calculate_MGlu_pole));
   std::thread thread_MSd(Thread(this, &CLASSNAME::calculate_MSd_pole));
   std::thread thread_MSv(Thread(this, &CLASSNAME::calculate_MSv_pole));
   std::thread thread_MSu(Thread(this, &CLASSNAME::calculate_MSu_pole));
   std::thread thread_MSe(Thread(this, &CLASSNAME::calculate_MSe_pole));
   std::thread thread_Mhh(Thread(this, &CLASSNAME::calculate_Mhh_pole));
   std::thread thread_MAh(Thread(this, &CLASSNAME::calculate_MAh_pole));
   std::thread thread_MHpm(Thread(this, &CLASSNAME::calculate_MHpm_pole));
   std::thread thread_MChi(Thread(this, &CLASSNAME::calculate_MChi_pole));
   std::thread thread_MCha(Thread(this, &CLASSNAME::calculate_MCha_pole));

   if (calculate_sm_pole_masses) {
      std::thread thread_MFd(Thread(this, &CLASSNAME::calculate_MFd_pole));
      std::thread thread_MFe(Thread(this, &CLASSNAME::calculate_MFe_pole));
      std::thread thread_MFu(Thread(this, &CLASSNAME::calculate_MFu_pole));
      std::thread thread_MFv(Thread(this, &CLASSNAME::calculate_MFv_pole));
      std::thread thread_MVG(Thread(this, &CLASSNAME::calculate_MVG_pole));
      std::thread thread_MVP(Thread(this, &CLASSNAME::calculate_MVP_pole));
      std::thread thread_MVWm(Thread(this, &CLASSNAME::calculate_MVWm_pole));
      std::thread thread_MVZ(Thread(this, &CLASSNAME::calculate_MVZ_pole));
      thread_MFd.join();
      thread_MFe.join();
      thread_MFu.join();
      thread_MFv.join();
      thread_MVG.join();
      thread_MVP.join();
      thread_MVWm.join();
      thread_MVZ.join();
   }

   thread_MGlu.join();
   thread_MSd.join();
   thread_MSv.join();
   thread_MSu.join();
   thread_MSe.join();
   thread_Mhh.join();
   thread_MAh.join();
   thread_MHpm.join();
   thread_MChi.join();
   thread_MCha.join();

   if (thread_exception != nullptr)
      std::rethrow_exception(thread_exception);

#else
   calculate_MGlu_pole();
   calculate_MSd_pole();
   calculate_MSv_pole();
   calculate_MSu_pole();
   calculate_MSe_pole();
   calculate_Mhh_pole();
   calculate_MAh_pole();
   calculate_MHpm_pole();
   calculate_MChi_pole();
   calculate_MCha_pole();

   if (calculate_sm_pole_masses) {
      calculate_MFd_pole();
      calculate_MFe_pole();
      calculate_MFu_pole();
      calculate_MFv_pole();
      calculate_MVG_pole();
      calculate_MVP_pole();
      calculate_MVWm_pole();
      calculate_MVZ_pole();
   }

#endif
}

void CLASSNAME::copy_DRbar_masses_to_pole_masses()
{
   PHYSICAL(MVG) = MVG;
   PHYSICAL(MGlu) = MGlu;
   PHYSICAL(MFv) = MFv;
   PHYSICAL(MVP) = MVP;
   PHYSICAL(MVZ) = MVZ;
   PHYSICAL(MSd) = MSd;
   PHYSICAL(ZD) = ZD;
   PHYSICAL(MSv) = MSv;
   PHYSICAL(ZV) = ZV;
   PHYSICAL(MSu) = MSu;
   PHYSICAL(ZU) = ZU;
   PHYSICAL(MSe) = MSe;
   PHYSICAL(ZE) = ZE;
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
   PHYSICAL(MFe) = MFe;
   PHYSICAL(ZEL) = ZEL;
   PHYSICAL(ZER) = ZER;
   PHYSICAL(MFd) = MFd;
   PHYSICAL(ZDL) = ZDL;
   PHYSICAL(ZDR) = ZDR;
   PHYSICAL(MFu) = MFu;
   PHYSICAL(ZUL) = ZUL;
   PHYSICAL(ZUR) = ZUR;
   PHYSICAL(MVWm) = MVWm;

}

void CLASSNAME::calculate_spectrum()
{
   calculate_DRbar_parameters();
   if (pole_mass_loop_order > 0)
      calculate_pole_masses();
   else
      copy_DRbar_masses_to_pole_masses();

   if (problems.have_serious_problem()) {
      clear_DRbar_parameters();
      physical.clear();
   }
}

void CLASSNAME::clear_DRbar_parameters()
{
   MVG = 0.0;
   MGlu = 0.0;
   MFv = Eigen::Array<double,3,1>::Zero();
   MVP = 0.0;
   MVZ = 0.0;
   MSd = Eigen::Array<double,6,1>::Zero();
   ZD = Eigen::Matrix<double,6,6>::Zero();
   MSv = Eigen::Array<double,3,1>::Zero();
   ZV = Eigen::Matrix<double,3,3>::Zero();
   MSu = Eigen::Array<double,6,1>::Zero();
   ZU = Eigen::Matrix<double,6,6>::Zero();
   MSe = Eigen::Array<double,6,1>::Zero();
   ZE = Eigen::Matrix<double,6,6>::Zero();
   Mhh = Eigen::Array<double,2,1>::Zero();
   ZH = Eigen::Matrix<double,2,2>::Zero();
   MAh = Eigen::Array<double,2,1>::Zero();
   ZA = Eigen::Matrix<double,2,2>::Zero();
   MHpm = Eigen::Array<double,2,1>::Zero();
   ZP = Eigen::Matrix<double,2,2>::Zero();
   MChi = Eigen::Array<double,4,1>::Zero();
   ZN = Eigen::Matrix<std::complex<double>,4,4>::Zero();
   MCha = Eigen::Array<double,2,1>::Zero();
   UM = Eigen::Matrix<std::complex<double>,2,2>::Zero();
   UP = Eigen::Matrix<std::complex<double>,2,2>::Zero();
   MFe = Eigen::Array<double,3,1>::Zero();
   ZEL = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   ZER = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFd = Eigen::Array<double,3,1>::Zero();
   ZDL = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   ZDR = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFu = Eigen::Array<double,3,1>::Zero();
   ZUL = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   ZUR = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MVWm = 0.0;

}

void CLASSNAME::clear()
{
   MSSM_soft_parameters::clear();
   clear_DRbar_parameters();
   physical.clear();
   problems.clear();
}

std::string CLASSNAME::name() const
{
   return "MSSM";
}

void CLASSNAME::run_to(double scale, double eps)
{
   if (eps < 0.0)
      eps = precision;
   MSSM_soft_parameters::run_to(scale, eps);
}

void CLASSNAME::calculate_MVG()
{
   MVG = 0;
}

void CLASSNAME::calculate_MGlu()
{
   MGlu = MassG;

   if (MGlu < 0.) {
      MGlu *= -1;
      PhaseGlu = std::complex<double>(0., 1.);
   }
}

void CLASSNAME::calculate_MFv()
{
   MFv.setConstant(0);
}

void CLASSNAME::calculate_MVP()
{
   MVP = 0;
}

void CLASSNAME::calculate_MVZ()
{
   MVZ = 0.25*(Sqr(vd) + Sqr(vu))*Sqr(g2*Cos(ThetaW()) +
      0.7745966692414834*g1*Sin(ThetaW()));

   if (MVZ < 0.)
      problems.flag_tachyon(VZ);
   else
      problems.unflag_tachyon(VZ);

   MVZ = AbsSqrt(MVZ);
}

Eigen::Matrix<double,6,6> CLASSNAME::get_mass_matrix_Sd() const
{
   Eigen::Matrix<double,6,6> mass_matrix_Sd;
   mass_matrix_Sd(0,0) = mq2(0,0) + 0.5*(AbsSqr(Yd(0,0)) + AbsSqr(Yd(1,0)
      ) + AbsSqr(Yd(2,0)))*Sqr(vd) - 0.025*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Sd(0,1) = mq2(0,1) + 0.5*Sqr(vd)*(Conj(Yd(0,0))*Yd(0,1) +
      Conj(Yd(1,0))*Yd(1,1) + Conj(Yd(2,0))*Yd(2,1));
   mass_matrix_Sd(0,2) = mq2(0,2) + 0.5*Sqr(vd)*(Conj(Yd(0,0))*Yd(0,2) +
      Conj(Yd(1,0))*Yd(1,2) + Conj(Yd(2,0))*Yd(2,2));
   mass_matrix_Sd(0,3) = 0.7071067811865475*vd*Conj(TYd(0,0)) -
      0.7071067811865475*vu*Conj(Yd(0,0))*Mu;
   mass_matrix_Sd(0,4) = 0.7071067811865475*vd*Conj(TYd(1,0)) -
      0.7071067811865475*vu*Conj(Yd(1,0))*Mu;
   mass_matrix_Sd(0,5) = 0.7071067811865475*vd*Conj(TYd(2,0)) -
      0.7071067811865475*vu*Conj(Yd(2,0))*Mu;
   mass_matrix_Sd(1,0) = Conj(mass_matrix_Sd(0,1));
   mass_matrix_Sd(1,1) = mq2(1,1) + 0.5*(AbsSqr(Yd(0,1)) + AbsSqr(Yd(1,1)
      ) + AbsSqr(Yd(2,1)))*Sqr(vd) - 0.025*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Sd(1,2) = mq2(1,2) + 0.5*Sqr(vd)*(Conj(Yd(0,1))*Yd(0,2) +
      Conj(Yd(1,1))*Yd(1,2) + Conj(Yd(2,1))*Yd(2,2));
   mass_matrix_Sd(1,3) = 0.7071067811865475*vd*Conj(TYd(0,1)) -
      0.7071067811865475*vu*Conj(Yd(0,1))*Mu;
   mass_matrix_Sd(1,4) = 0.7071067811865475*vd*Conj(TYd(1,1)) -
      0.7071067811865475*vu*Conj(Yd(1,1))*Mu;
   mass_matrix_Sd(1,5) = 0.7071067811865475*vd*Conj(TYd(2,1)) -
      0.7071067811865475*vu*Conj(Yd(2,1))*Mu;
   mass_matrix_Sd(2,0) = Conj(mass_matrix_Sd(0,2));
   mass_matrix_Sd(2,1) = Conj(mass_matrix_Sd(1,2));
   mass_matrix_Sd(2,2) = mq2(2,2) + 0.5*(AbsSqr(Yd(0,2)) + AbsSqr(Yd(1,2)
      ) + AbsSqr(Yd(2,2)))*Sqr(vd) - 0.025*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) + 0.025*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Sd(2,3) = 0.7071067811865475*vd*Conj(TYd(0,2)) -
      0.7071067811865475*vu*Conj(Yd(0,2))*Mu;
   mass_matrix_Sd(2,4) = 0.7071067811865475*vd*Conj(TYd(1,2)) -
      0.7071067811865475*vu*Conj(Yd(1,2))*Mu;
   mass_matrix_Sd(2,5) = 0.7071067811865475*vd*Conj(TYd(2,2)) -
      0.7071067811865475*vu*Conj(Yd(2,2))*Mu;
   mass_matrix_Sd(3,0) = Conj(mass_matrix_Sd(0,3));
   mass_matrix_Sd(3,1) = Conj(mass_matrix_Sd(1,3));
   mass_matrix_Sd(3,2) = Conj(mass_matrix_Sd(2,3));
   mass_matrix_Sd(3,3) = md2(0,0) + 0.5*(AbsSqr(Yd(0,0)) + AbsSqr(Yd(0,1)
      ) + AbsSqr(Yd(0,2)))*Sqr(vd) - 0.05*Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu
      );
   mass_matrix_Sd(3,4) = md2(0,1) + 0.5*Sqr(vd)*(Conj(Yd(1,0))*Yd(0,0) +
      Conj(Yd(1,1))*Yd(0,1) + Conj(Yd(1,2))*Yd(0,2));
   mass_matrix_Sd(3,5) = md2(0,2) + 0.5*Sqr(vd)*(Conj(Yd(2,0))*Yd(0,0) +
      Conj(Yd(2,1))*Yd(0,1) + Conj(Yd(2,2))*Yd(0,2));
   mass_matrix_Sd(4,0) = Conj(mass_matrix_Sd(0,4));
   mass_matrix_Sd(4,1) = Conj(mass_matrix_Sd(1,4));
   mass_matrix_Sd(4,2) = Conj(mass_matrix_Sd(2,4));
   mass_matrix_Sd(4,3) = Conj(mass_matrix_Sd(3,4));
   mass_matrix_Sd(4,4) = md2(1,1) + 0.5*(AbsSqr(Yd(1,0)) + AbsSqr(Yd(1,1)
      ) + AbsSqr(Yd(1,2)))*Sqr(vd) - 0.05*Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu
      );
   mass_matrix_Sd(4,5) = md2(1,2) + 0.5*Sqr(vd)*(Conj(Yd(2,0))*Yd(1,0) +
      Conj(Yd(2,1))*Yd(1,1) + Conj(Yd(2,2))*Yd(1,2));
   mass_matrix_Sd(5,0) = Conj(mass_matrix_Sd(0,5));
   mass_matrix_Sd(5,1) = Conj(mass_matrix_Sd(1,5));
   mass_matrix_Sd(5,2) = Conj(mass_matrix_Sd(2,5));
   mass_matrix_Sd(5,3) = Conj(mass_matrix_Sd(3,5));
   mass_matrix_Sd(5,4) = Conj(mass_matrix_Sd(4,5));
   mass_matrix_Sd(5,5) = md2(2,2) + 0.5*(AbsSqr(Yd(2,0)) + AbsSqr(Yd(2,1)
      ) + AbsSqr(Yd(2,2)))*Sqr(vd) - 0.05*Sqr(g1)*Sqr(vd) + 0.05*Sqr(g1)*Sqr(vu
      );

   return mass_matrix_Sd;
}

void CLASSNAME::calculate_MSd()
{
   const auto mass_matrix_Sd(get_mass_matrix_Sd());
   fs_diagonalize_hermitian(mass_matrix_Sd, MSd, ZD);

   if (MSd.minCoeff() < 0.)
      problems.flag_tachyon(Sd);
   else
      problems.unflag_tachyon(Sd);

   MSd = AbsSqrt(MSd);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Sv() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Sv;
   mass_matrix_Sv(0,0) = ml2(0,0) + 0.075*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Sv(0,1) = ml2(0,1);
   mass_matrix_Sv(0,2) = ml2(0,2);
   mass_matrix_Sv(1,0) = Conj(mass_matrix_Sv(0,1));
   mass_matrix_Sv(1,1) = ml2(1,1) + 0.075*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Sv(1,2) = ml2(1,2);
   mass_matrix_Sv(2,0) = Conj(mass_matrix_Sv(0,2));
   mass_matrix_Sv(2,1) = Conj(mass_matrix_Sv(1,2));
   mass_matrix_Sv(2,2) = ml2(2,2) + 0.075*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);

   return mass_matrix_Sv;
}

void CLASSNAME::calculate_MSv()
{
   const auto mass_matrix_Sv(get_mass_matrix_Sv());
   fs_diagonalize_hermitian(mass_matrix_Sv, MSv, ZV);

   if (MSv.minCoeff() < 0.)
      problems.flag_tachyon(Sv);
   else
      problems.unflag_tachyon(Sv);

   MSv = AbsSqrt(MSv);
}

Eigen::Matrix<double,6,6> CLASSNAME::get_mass_matrix_Su() const
{
   Eigen::Matrix<double,6,6> mass_matrix_Su;
   mass_matrix_Su(0,0) = mq2(0,0) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*(AbsSqr(Yu(0,0)) + AbsSqr(Yu(1,0)) + AbsSqr(Yu(2,0)))*Sqr(
      vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Su(0,1) = mq2(0,1) + 0.5*Sqr(vu)*(Conj(Yu(0,0))*Yu(0,1) +
      Conj(Yu(1,0))*Yu(1,1) + Conj(Yu(2,0))*Yu(2,1));
   mass_matrix_Su(0,2) = mq2(0,2) + 0.5*Sqr(vu)*(Conj(Yu(0,0))*Yu(0,2) +
      Conj(Yu(1,0))*Yu(1,2) + Conj(Yu(2,0))*Yu(2,2));
   mass_matrix_Su(0,3) = 0.7071067811865475*vu*Conj(TYu(0,0)) -
      0.7071067811865475*vd*Conj(Yu(0,0))*Mu;
   mass_matrix_Su(0,4) = 0.7071067811865475*vu*Conj(TYu(1,0)) -
      0.7071067811865475*vd*Conj(Yu(1,0))*Mu;
   mass_matrix_Su(0,5) = 0.7071067811865475*vu*Conj(TYu(2,0)) -
      0.7071067811865475*vd*Conj(Yu(2,0))*Mu;
   mass_matrix_Su(1,0) = Conj(mass_matrix_Su(0,1));
   mass_matrix_Su(1,1) = mq2(1,1) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*(AbsSqr(Yu(0,1)) + AbsSqr(Yu(1,1)) + AbsSqr(Yu(2,1)))*Sqr(
      vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Su(1,2) = mq2(1,2) + 0.5*Sqr(vu)*(Conj(Yu(0,1))*Yu(0,2) +
      Conj(Yu(1,1))*Yu(1,2) + Conj(Yu(2,1))*Yu(2,2));
   mass_matrix_Su(1,3) = 0.7071067811865475*vu*Conj(TYu(0,1)) -
      0.7071067811865475*vd*Conj(Yu(0,1))*Mu;
   mass_matrix_Su(1,4) = 0.7071067811865475*vu*Conj(TYu(1,1)) -
      0.7071067811865475*vd*Conj(Yu(1,1))*Mu;
   mass_matrix_Su(1,5) = 0.7071067811865475*vu*Conj(TYu(2,1)) -
      0.7071067811865475*vd*Conj(Yu(2,1))*Mu;
   mass_matrix_Su(2,0) = Conj(mass_matrix_Su(0,2));
   mass_matrix_Su(2,1) = Conj(mass_matrix_Su(1,2));
   mass_matrix_Su(2,2) = mq2(2,2) - 0.025*Sqr(g1)*Sqr(vd) + 0.125*Sqr(g2)
      *Sqr(vd) + 0.5*(AbsSqr(Yu(0,2)) + AbsSqr(Yu(1,2)) + AbsSqr(Yu(2,2)))*Sqr(
      vu) + 0.025*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Su(2,3) = 0.7071067811865475*vu*Conj(TYu(0,2)) -
      0.7071067811865475*vd*Conj(Yu(0,2))*Mu;
   mass_matrix_Su(2,4) = 0.7071067811865475*vu*Conj(TYu(1,2)) -
      0.7071067811865475*vd*Conj(Yu(1,2))*Mu;
   mass_matrix_Su(2,5) = 0.7071067811865475*vu*Conj(TYu(2,2)) -
      0.7071067811865475*vd*Conj(Yu(2,2))*Mu;
   mass_matrix_Su(3,0) = Conj(mass_matrix_Su(0,3));
   mass_matrix_Su(3,1) = Conj(mass_matrix_Su(1,3));
   mass_matrix_Su(3,2) = Conj(mass_matrix_Su(2,3));
   mass_matrix_Su(3,3) = mu2(0,0) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*(AbsSqr(Yu(
      0,0)) + AbsSqr(Yu(0,1)) + AbsSqr(Yu(0,2)))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);
   mass_matrix_Su(3,4) = mu2(0,1) + 0.5*Sqr(vu)*(Conj(Yu(1,0))*Yu(0,0) +
      Conj(Yu(1,1))*Yu(0,1) + Conj(Yu(1,2))*Yu(0,2));
   mass_matrix_Su(3,5) = mu2(0,2) + 0.5*Sqr(vu)*(Conj(Yu(2,0))*Yu(0,0) +
      Conj(Yu(2,1))*Yu(0,1) + Conj(Yu(2,2))*Yu(0,2));
   mass_matrix_Su(4,0) = Conj(mass_matrix_Su(0,4));
   mass_matrix_Su(4,1) = Conj(mass_matrix_Su(1,4));
   mass_matrix_Su(4,2) = Conj(mass_matrix_Su(2,4));
   mass_matrix_Su(4,3) = Conj(mass_matrix_Su(3,4));
   mass_matrix_Su(4,4) = mu2(1,1) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*(AbsSqr(Yu(
      1,0)) + AbsSqr(Yu(1,1)) + AbsSqr(Yu(1,2)))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);
   mass_matrix_Su(4,5) = mu2(1,2) + 0.5*Sqr(vu)*(Conj(Yu(2,0))*Yu(1,0) +
      Conj(Yu(2,1))*Yu(1,1) + Conj(Yu(2,2))*Yu(1,2));
   mass_matrix_Su(5,0) = Conj(mass_matrix_Su(0,5));
   mass_matrix_Su(5,1) = Conj(mass_matrix_Su(1,5));
   mass_matrix_Su(5,2) = Conj(mass_matrix_Su(2,5));
   mass_matrix_Su(5,3) = Conj(mass_matrix_Su(3,5));
   mass_matrix_Su(5,4) = Conj(mass_matrix_Su(4,5));
   mass_matrix_Su(5,5) = mu2(2,2) + 0.1*Sqr(g1)*Sqr(vd) + 0.5*(AbsSqr(Yu(
      2,0)) + AbsSqr(Yu(2,1)) + AbsSqr(Yu(2,2)))*Sqr(vu) - 0.1*Sqr(g1)*Sqr(vu);

   return mass_matrix_Su;
}

void CLASSNAME::calculate_MSu()
{
   const auto mass_matrix_Su(get_mass_matrix_Su());
   fs_diagonalize_hermitian(mass_matrix_Su, MSu, ZU);

   if (MSu.minCoeff() < 0.)
      problems.flag_tachyon(Su);
   else
      problems.unflag_tachyon(Su);

   MSu = AbsSqrt(MSu);
}

Eigen::Matrix<double,6,6> CLASSNAME::get_mass_matrix_Se() const
{
   Eigen::Matrix<double,6,6> mass_matrix_Se;
   mass_matrix_Se(0,0) = ml2(0,0) + 0.5*(AbsSqr(Ye(0,0)) + AbsSqr(Ye(1,0)
      ) + AbsSqr(Ye(2,0)))*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Se(0,1) = ml2(0,1) + 0.5*Sqr(vd)*(Conj(Ye(0,0))*Ye(0,1) +
      Conj(Ye(1,0))*Ye(1,1) + Conj(Ye(2,0))*Ye(2,1));
   mass_matrix_Se(0,2) = ml2(0,2) + 0.5*Sqr(vd)*(Conj(Ye(0,0))*Ye(0,2) +
      Conj(Ye(1,0))*Ye(1,2) + Conj(Ye(2,0))*Ye(2,2));
   mass_matrix_Se(0,3) = 0.7071067811865475*vd*Conj(TYe(0,0)) -
      0.7071067811865475*vu*Conj(Ye(0,0))*Mu;
   mass_matrix_Se(0,4) = 0.7071067811865475*vd*Conj(TYe(1,0)) -
      0.7071067811865475*vu*Conj(Ye(1,0))*Mu;
   mass_matrix_Se(0,5) = 0.7071067811865475*vd*Conj(TYe(2,0)) -
      0.7071067811865475*vu*Conj(Ye(2,0))*Mu;
   mass_matrix_Se(1,0) = Conj(mass_matrix_Se(0,1));
   mass_matrix_Se(1,1) = ml2(1,1) + 0.5*(AbsSqr(Ye(0,1)) + AbsSqr(Ye(1,1)
      ) + AbsSqr(Ye(2,1)))*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Se(1,2) = ml2(1,2) + 0.5*Sqr(vd)*(Conj(Ye(0,1))*Ye(0,2) +
      Conj(Ye(1,1))*Ye(1,2) + Conj(Ye(2,1))*Ye(2,2));
   mass_matrix_Se(1,3) = 0.7071067811865475*vd*Conj(TYe(0,1)) -
      0.7071067811865475*vu*Conj(Ye(0,1))*Mu;
   mass_matrix_Se(1,4) = 0.7071067811865475*vd*Conj(TYe(1,1)) -
      0.7071067811865475*vu*Conj(Ye(1,1))*Mu;
   mass_matrix_Se(1,5) = 0.7071067811865475*vd*Conj(TYe(2,1)) -
      0.7071067811865475*vu*Conj(Ye(2,1))*Mu;
   mass_matrix_Se(2,0) = Conj(mass_matrix_Se(0,2));
   mass_matrix_Se(2,1) = Conj(mass_matrix_Se(1,2));
   mass_matrix_Se(2,2) = ml2(2,2) + 0.5*(AbsSqr(Ye(0,2)) + AbsSqr(Ye(1,2)
      ) + AbsSqr(Ye(2,2)))*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vd) - 0.125*Sqr(g2)*Sqr(
      vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Se(2,3) = 0.7071067811865475*vd*Conj(TYe(0,2)) -
      0.7071067811865475*vu*Conj(Ye(0,2))*Mu;
   mass_matrix_Se(2,4) = 0.7071067811865475*vd*Conj(TYe(1,2)) -
      0.7071067811865475*vu*Conj(Ye(1,2))*Mu;
   mass_matrix_Se(2,5) = 0.7071067811865475*vd*Conj(TYe(2,2)) -
      0.7071067811865475*vu*Conj(Ye(2,2))*Mu;
   mass_matrix_Se(3,0) = Conj(mass_matrix_Se(0,3));
   mass_matrix_Se(3,1) = Conj(mass_matrix_Se(1,3));
   mass_matrix_Se(3,2) = Conj(mass_matrix_Se(2,3));
   mass_matrix_Se(3,3) = me2(0,0) + 0.5*(AbsSqr(Ye(0,0)) + AbsSqr(Ye(0,1)
      ) + AbsSqr(Ye(0,2)))*Sqr(vd) - 0.15*Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu
      );
   mass_matrix_Se(3,4) = me2(0,1) + 0.5*Sqr(vd)*(Conj(Ye(1,0))*Ye(0,0) +
      Conj(Ye(1,1))*Ye(0,1) + Conj(Ye(1,2))*Ye(0,2));
   mass_matrix_Se(3,5) = me2(0,2) + 0.5*Sqr(vd)*(Conj(Ye(2,0))*Ye(0,0) +
      Conj(Ye(2,1))*Ye(0,1) + Conj(Ye(2,2))*Ye(0,2));
   mass_matrix_Se(4,0) = Conj(mass_matrix_Se(0,4));
   mass_matrix_Se(4,1) = Conj(mass_matrix_Se(1,4));
   mass_matrix_Se(4,2) = Conj(mass_matrix_Se(2,4));
   mass_matrix_Se(4,3) = Conj(mass_matrix_Se(3,4));
   mass_matrix_Se(4,4) = me2(1,1) + 0.5*(AbsSqr(Ye(1,0)) + AbsSqr(Ye(1,1)
      ) + AbsSqr(Ye(1,2)))*Sqr(vd) - 0.15*Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu
      );
   mass_matrix_Se(4,5) = me2(1,2) + 0.5*Sqr(vd)*(Conj(Ye(2,0))*Ye(1,0) +
      Conj(Ye(2,1))*Ye(1,1) + Conj(Ye(2,2))*Ye(1,2));
   mass_matrix_Se(5,0) = Conj(mass_matrix_Se(0,5));
   mass_matrix_Se(5,1) = Conj(mass_matrix_Se(1,5));
   mass_matrix_Se(5,2) = Conj(mass_matrix_Se(2,5));
   mass_matrix_Se(5,3) = Conj(mass_matrix_Se(3,5));
   mass_matrix_Se(5,4) = Conj(mass_matrix_Se(4,5));
   mass_matrix_Se(5,5) = me2(2,2) + 0.5*(AbsSqr(Ye(2,0)) + AbsSqr(Ye(2,1)
      ) + AbsSqr(Ye(2,2)))*Sqr(vd) - 0.15*Sqr(g1)*Sqr(vd) + 0.15*Sqr(g1)*Sqr(vu
      );

   return mass_matrix_Se;
}

void CLASSNAME::calculate_MSe()
{
   const auto mass_matrix_Se(get_mass_matrix_Se());
   fs_diagonalize_hermitian(mass_matrix_Se, MSe, ZE);

   if (MSe.minCoeff() < 0.)
      problems.flag_tachyon(Se);
   else
      problems.unflag_tachyon(Se);

   MSe = AbsSqrt(MSe);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_hh() const
{
   Eigen::Matrix<double,2,2> mass_matrix_hh;
   mass_matrix_hh(0,0) = mHd2 + AbsSqr(Mu) + 0.225*Sqr(g1)*Sqr(vd) +
      0.375*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) - 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_hh(0,1) = -0.5*BMu - 0.5*Conj(BMu) - 0.15*vd*vu*Sqr(g1) -
      0.25*vd*vu*Sqr(g2);
   mass_matrix_hh(1,0) = mass_matrix_hh(0,1);
   mass_matrix_hh(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) -
      0.125*Sqr(g2)*Sqr(vd) + 0.225*Sqr(g1)*Sqr(vu) + 0.375*Sqr(g2)*Sqr(vu);

   return mass_matrix_hh;
}

void CLASSNAME::calculate_Mhh()
{
   const auto mass_matrix_hh(get_mass_matrix_hh());
   fs_diagonalize_hermitian(mass_matrix_hh, Mhh, ZH);

   if (Mhh.minCoeff() < 0.)
      problems.flag_tachyon(hh);
   else
      problems.unflag_tachyon(hh);

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
   mass_matrix_Ah(1,0) = mass_matrix_Ah(0,1);
   mass_matrix_Ah(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) -
      0.125*Sqr(g2)*Sqr(vd) + 0.3872983346207417*g1*g2*Cos(ThetaW())*Sin(ThetaW
      ())*Sqr(vu) + 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu) + 0.25*Sqr(g2
      )*Sqr(vu)*Sqr(Cos(ThetaW())) + 0.15*Sqr(g1)*Sqr(vu)*Sqr(Sin(ThetaW()));

   return mass_matrix_Ah;
}

void CLASSNAME::calculate_MAh()
{
   const auto mass_matrix_Ah(get_mass_matrix_Ah());
   fs_diagonalize_hermitian(mass_matrix_Ah, MAh, ZA);

   if (MAh.minCoeff() < 0.)
      problems.flag_tachyon(Ah);
   else
      problems.unflag_tachyon(Ah);

   MAh = AbsSqrt(MAh);
}

Eigen::Matrix<double,2,2> CLASSNAME::get_mass_matrix_Hpm() const
{
   Eigen::Matrix<double,2,2> mass_matrix_Hpm;
   mass_matrix_Hpm(0,0) = mHd2 + AbsSqr(Mu) + 0.075*Sqr(g1)*Sqr(vd) +
      0.375*Sqr(g2)*Sqr(vd) - 0.075*Sqr(g1)*Sqr(vu) + 0.125*Sqr(g2)*Sqr(vu);
   mass_matrix_Hpm(0,1) = Conj(BMu);
   mass_matrix_Hpm(1,0) = Conj(mass_matrix_Hpm(0,1));
   mass_matrix_Hpm(1,1) = mHu2 + AbsSqr(Mu) - 0.075*Sqr(g1)*Sqr(vd) +
      0.125*Sqr(g2)*Sqr(vd) + 0.075*Sqr(g1)*Sqr(vu) + 0.375*Sqr(g2)*Sqr(vu);

   return mass_matrix_Hpm;
}

void CLASSNAME::calculate_MHpm()
{
   const auto mass_matrix_Hpm(get_mass_matrix_Hpm());
   fs_diagonalize_hermitian(mass_matrix_Hpm, MHpm, ZP);

   if (MHpm.minCoeff() < 0.)
      problems.flag_tachyon(Hpm);
   else
      problems.unflag_tachyon(Hpm);

   MHpm = AbsSqrt(MHpm);
}

Eigen::Matrix<double,4,4> CLASSNAME::get_mass_matrix_Chi() const
{
   Eigen::Matrix<double,4,4> mass_matrix_Chi;
   mass_matrix_Chi(0,0) = MassB;
   mass_matrix_Chi(0,1) = 0;
   mass_matrix_Chi(0,2) = -0.3872983346207417*g1*vd;
   mass_matrix_Chi(0,3) = 0.3872983346207417*g1*vu;
   mass_matrix_Chi(1,0) = mass_matrix_Chi(0,1);
   mass_matrix_Chi(1,1) = MassWB;
   mass_matrix_Chi(1,2) = 0.5*g2*vd;
   mass_matrix_Chi(1,3) = -0.5*g2*vu;
   mass_matrix_Chi(2,0) = mass_matrix_Chi(0,2);
   mass_matrix_Chi(2,1) = mass_matrix_Chi(1,2);
   mass_matrix_Chi(2,2) = 0;
   mass_matrix_Chi(2,3) = -Mu;
   mass_matrix_Chi(3,0) = mass_matrix_Chi(0,3);
   mass_matrix_Chi(3,1) = mass_matrix_Chi(1,3);
   mass_matrix_Chi(3,2) = mass_matrix_Chi(2,3);
   mass_matrix_Chi(3,3) = 0;

   return mass_matrix_Chi;
}

void CLASSNAME::calculate_MChi()
{
   const auto mass_matrix_Chi(get_mass_matrix_Chi());
   fs_diagonalize_symmetric(mass_matrix_Chi, MChi, ZN);
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
   fs_svd(mass_matrix_Cha, MCha, UM, UP);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fe() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fe;
   mass_matrix_Fe(0,0) = 0.7071067811865475*vd*Ye(0,0);
   mass_matrix_Fe(0,1) = 0.7071067811865475*vd*Ye(1,0);
   mass_matrix_Fe(0,2) = 0.7071067811865475*vd*Ye(2,0);
   mass_matrix_Fe(1,0) = 0.7071067811865475*vd*Ye(0,1);
   mass_matrix_Fe(1,1) = 0.7071067811865475*vd*Ye(1,1);
   mass_matrix_Fe(1,2) = 0.7071067811865475*vd*Ye(2,1);
   mass_matrix_Fe(2,0) = 0.7071067811865475*vd*Ye(0,2);
   mass_matrix_Fe(2,1) = 0.7071067811865475*vd*Ye(1,2);
   mass_matrix_Fe(2,2) = 0.7071067811865475*vd*Ye(2,2);

   return mass_matrix_Fe;
}

void CLASSNAME::calculate_MFe()
{
   const auto mass_matrix_Fe(get_mass_matrix_Fe());
   fs_svd(mass_matrix_Fe, MFe, ZEL, ZER);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fd() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fd;
   mass_matrix_Fd(0,0) = 0.7071067811865475*vd*Yd(0,0);
   mass_matrix_Fd(0,1) = 0.7071067811865475*vd*Yd(1,0);
   mass_matrix_Fd(0,2) = 0.7071067811865475*vd*Yd(2,0);
   mass_matrix_Fd(1,0) = 0.7071067811865475*vd*Yd(0,1);
   mass_matrix_Fd(1,1) = 0.7071067811865475*vd*Yd(1,1);
   mass_matrix_Fd(1,2) = 0.7071067811865475*vd*Yd(2,1);
   mass_matrix_Fd(2,0) = 0.7071067811865475*vd*Yd(0,2);
   mass_matrix_Fd(2,1) = 0.7071067811865475*vd*Yd(1,2);
   mass_matrix_Fd(2,2) = 0.7071067811865475*vd*Yd(2,2);

   return mass_matrix_Fd;
}

void CLASSNAME::calculate_MFd()
{
   const auto mass_matrix_Fd(get_mass_matrix_Fd());
   fs_svd(mass_matrix_Fd, MFd, ZDL, ZDR);
}

Eigen::Matrix<double,3,3> CLASSNAME::get_mass_matrix_Fu() const
{
   Eigen::Matrix<double,3,3> mass_matrix_Fu;
   mass_matrix_Fu(0,0) = 0.7071067811865475*vu*Yu(0,0);
   mass_matrix_Fu(0,1) = 0.7071067811865475*vu*Yu(1,0);
   mass_matrix_Fu(0,2) = 0.7071067811865475*vu*Yu(2,0);
   mass_matrix_Fu(1,0) = 0.7071067811865475*vu*Yu(0,1);
   mass_matrix_Fu(1,1) = 0.7071067811865475*vu*Yu(1,1);
   mass_matrix_Fu(1,2) = 0.7071067811865475*vu*Yu(2,1);
   mass_matrix_Fu(2,0) = 0.7071067811865475*vu*Yu(0,2);
   mass_matrix_Fu(2,1) = 0.7071067811865475*vu*Yu(1,2);
   mass_matrix_Fu(2,2) = 0.7071067811865475*vu*Yu(2,2);

   return mass_matrix_Fu;
}

void CLASSNAME::calculate_MFu()
{
   const auto mass_matrix_Fu(get_mass_matrix_Fu());
   fs_svd(mass_matrix_Fu, MFu, ZUL, ZUR);
}

void CLASSNAME::calculate_MVWm()
{
   MVWm = 0.25*Sqr(g2)*(Sqr(vd) + Sqr(vu));

   if (MVWm < 0.)
      problems.flag_tachyon(VWm);
   else
      problems.unflag_tachyon(VWm);

   MVWm = AbsSqrt(MVWm);
}


double CLASSNAME::get_ewsb_eq_hh_1() const
{
   double result = mHd2*vd + vd*AbsSqr(Mu) - 0.5*vu*BMu - 0.5*vu*Conj(BMu) +
      0.075*Power(vd,3)*Sqr(g1) + 0.125*Power(vd,3)*Sqr(g2) - 0.075*vd*Sqr(g1)*Sqr
      (vu) - 0.125*vd*Sqr(g2)*Sqr(vu);

   return result;
}

double CLASSNAME::get_ewsb_eq_hh_2() const
{
   double result = mHu2*vu + vu*AbsSqr(Mu) - 0.5*vd*BMu - 0.5*vd*Conj(BMu) +
      0.075*Power(vu,3)*Sqr(g1) + 0.125*Power(vu,3)*Sqr(g2) - 0.075*vu*Sqr(g1)*Sqr
      (vd) - 0.125*vu*Sqr(g2)*Sqr(vd);

   return result;
}



std::complex<double> CLASSNAME::CpUSdconjUSdVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_0;
   std::complex<double> tmp_1;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_0 += tmp_1;
   result += (0.13333333333333333*Sqr(g1)*Sqr(Sin(ThetaW()))) * tmp_0;
   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2)*Sqr(Cos(ThetaW()));
   }
   if (gO1 < 3) {
      result += 0.2581988897471611*g1*g2*Cos(ThetaW())*KroneckerDelta(gO1,
         gO2)*Sin(ThetaW());
   }
   if (gO1 < 3) {
      result += 0.03333333333333333*KroneckerDelta(gO1,gO2)*Sqr(g1)*Sqr(Sin(
         ThetaW()));
   }

   return result;
}

double CLASSNAME::CpUSdconjUSdconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2;
   std::complex<double> tmp_3;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_3 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_2 += tmp_3;
   result += (0.1*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0)) * tmp_2;
   std::complex<double> tmp_4;
   std::complex<double> tmp_5;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_6;
      std::complex<double> tmp_7;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_8;
         std::complex<double> tmp_9;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_9 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_8 += tmp_9;
         tmp_7 += (KroneckerDelta(gO2,3 + j2)) * tmp_8;
      }
      tmp_6 += tmp_7;
      tmp_5 += (KroneckerDelta(gO1,3 + j3)) * tmp_6;
   }
   tmp_4 += tmp_5;
   result += (-(ZA(gI1,0)*ZA(gI2,0))) * tmp_4;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,0)*ZA(gI2,0);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_10;
      std::complex<double> tmp_11;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_11 += Conj(Yd(j1,gO2))*Yd(j1,gO1);
      }
      tmp_10 += tmp_11;
      result += (-(ZA(gI1,0)*ZA(gI2,0))) * tmp_10;
   }
   std::complex<double> tmp_12;
   std::complex<double> tmp_13;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_13 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_12 += tmp_13;
   result += (-0.1*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) * tmp_12;
   if (gO1 < 3) {
      result += -0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,1)*ZA(gI2,1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_14;
   std::complex<double> tmp_15;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_15 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_14 += tmp_15;
   result += (0.1*Conj(ZP(gI2,0))*Sqr(g1)*ZP(gI1,0)) * tmp_14;
   std::complex<double> tmp_16;
   std::complex<double> tmp_17;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_18;
      std::complex<double> tmp_19;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_20;
         std::complex<double> tmp_21;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_21 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_20 += tmp_21;
         tmp_19 += (KroneckerDelta(gO2,3 + j2)) * tmp_20;
      }
      tmp_18 += tmp_19;
      tmp_17 += (KroneckerDelta(gO1,3 + j3)) * tmp_18;
   }
   tmp_16 += tmp_17;
   result += (-(Conj(ZP(gI2,0))*ZP(gI1,0))) * tmp_16;
   if (gO1 < 3) {
      result += 0.05*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1,
         0);
   }
   if (gO1 < 3) {
      result += -0.25*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1
         ,0);
   }
   std::complex<double> tmp_22;
   std::complex<double> tmp_23;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_23 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_22 += tmp_23;
   result += (-0.1*Conj(ZP(gI2,1))*Sqr(g1)*ZP(gI1,1)) * tmp_22;
   if (gO1 < 3) {
      result += -0.05*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1
         ,1);
   }
   if (gO1 < 3) {
      result += 0.25*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1,
         1);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_24;
      std::complex<double> tmp_25;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_25 += Conj(Yu(j1,gO2))*Yu(j1,gO1);
      }
      tmp_24 += tmp_25;
      result += (-(Conj(ZP(gI2,1))*ZP(gI1,1))) * tmp_24;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_26;
   std::complex<double> tmp_27;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_27 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_26 += tmp_27;
   result += (0.1*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0)) * tmp_26;
   std::complex<double> tmp_28;
   std::complex<double> tmp_29;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_30;
      std::complex<double> tmp_31;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_32;
         std::complex<double> tmp_33;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_33 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_32 += tmp_33;
         tmp_31 += (KroneckerDelta(gO2,3 + j2)) * tmp_32;
      }
      tmp_30 += tmp_31;
      tmp_29 += (KroneckerDelta(gO1,3 + j3)) * tmp_30;
   }
   tmp_28 += tmp_29;
   result += (-(ZH(gI1,0)*ZH(gI2,0))) * tmp_28;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,0)*ZH(gI2,0);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_34;
      std::complex<double> tmp_35;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_35 += Conj(Yd(j1,gO2))*Yd(j1,gO1);
      }
      tmp_34 += tmp_35;
      result += (-(ZH(gI1,0)*ZH(gI2,0))) * tmp_34;
   }
   std::complex<double> tmp_36;
   std::complex<double> tmp_37;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_37 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_36 += tmp_37;
   result += (-0.1*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) * tmp_36;
   if (gO1 < 3) {
      result += -0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,1)*ZH(gI2,1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_38;
   std::complex<double> tmp_39;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_39 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_38 += tmp_39;
   result += (0.1*KroneckerDelta(gI1,gI2)*Sqr(g1)) * tmp_38;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g1)
         ;
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g2)
         ;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFuChaPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_40;
      std::complex<double> tmp_41;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_41 += Conj(Yu(j1,gO2))*ZUR(gI1,j1);
      }
      tmp_40 += tmp_41;
      result += (UP(gI2,1)) * tmp_40;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFuChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_42;
   std::complex<double> tmp_43;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_44;
      std::complex<double> tmp_45;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_45 += KroneckerDelta(gO1,3 + j1)*Yd(j1,j2);
      }
      tmp_44 += tmp_45;
      tmp_43 += (Conj(ZUL(gI1,j2))) * tmp_44;
   }
   tmp_42 += tmp_43;
   result += (Conj(UM(gI2,1))) * tmp_42;
   if (gO1 < 3) {
      result += -(g2*Conj(UM(gI2,0))*Conj(ZUL(gI1,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFdChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_46;
   std::complex<double> tmp_47;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_47 += KroneckerDelta(gO2,3 + j1)*ZDR(gI1,j1);
   }
   tmp_46 += tmp_47;
   result += (-0.3651483716701107*g1*ZN(gI2,0)) * tmp_46;
   if (gO2 < 3) {
      std::complex<double> tmp_48;
      std::complex<double> tmp_49;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_49 += Conj(Yd(j1,gO2))*ZDR(gI1,j1);
      }
      tmp_48 += tmp_49;
      result += (-ZN(gI2,2)) * tmp_48;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdFdChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_50;
   std::complex<double> tmp_51;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_52;
      std::complex<double> tmp_53;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_53 += KroneckerDelta(gO1,3 + j1)*Yd(j1,j2);
      }
      tmp_52 += tmp_53;
      tmp_51 += (Conj(ZDL(gI1,j2))) * tmp_52;
   }
   tmp_50 += tmp_51;
   result += (-Conj(ZN(gI2,2))) * tmp_50;
   if (gO1 < 3) {
      result += -0.18257418583505536*g1*Conj(ZDL(gI1,gO1))*Conj(ZN(gI2,0));
   }
   if (gO1 < 3) {
      result += 0.7071067811865475*g2*Conj(ZDL(gI1,gO1))*Conj(ZN(gI2,1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_54;
   std::complex<double> tmp_56;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_56 += KroneckerDelta(gO1,3 + j1)*ZD(gI1,3 + j1);
   }
   tmp_54 += tmp_56;
   std::complex<double> tmp_55;
   std::complex<double> tmp_57;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_57 += Conj(ZD(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
   }
   tmp_55 += tmp_57;
   result += (-0.03333333333333333*Sqr(g1)) * tmp_54 * tmp_55;
   std::complex<double> tmp_58;
   std::complex<double> tmp_60;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_60 += KroneckerDelta(gO1,3 + j1)*ZD(gI1,3 + j1);
   }
   tmp_58 += tmp_60;
   std::complex<double> tmp_59;
   std::complex<double> tmp_61;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_61 += Conj(ZD(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
   }
   tmp_59 += tmp_61;
   result += (-0.6666666666666666*Sqr(g3)) * tmp_58 * tmp_59;
   std::complex<double> tmp_62;
   std::complex<double> tmp_64;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_64 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_62 += tmp_64;
   std::complex<double> tmp_63;
   std::complex<double> tmp_65;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_65 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_63 += tmp_65;
   result += (-0.05*Sqr(g1)) * tmp_62 * tmp_63;
   std::complex<double> tmp_66;
   std::complex<double> tmp_68;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_68 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_66 += tmp_68;
   std::complex<double> tmp_67;
   std::complex<double> tmp_69;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_69 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_67 += tmp_69;
   result += (-0.1*Sqr(g1)) * tmp_66 * tmp_67;
   std::complex<double> tmp_70;
   std::complex<double> tmp_72;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_72 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_70 += tmp_72;
   std::complex<double> tmp_71;
   std::complex<double> tmp_73;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_73 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
   }
   tmp_71 += tmp_73;
   result += (-0.05*Sqr(g1)) * tmp_70 * tmp_71;
   std::complex<double> tmp_74;
   std::complex<double> tmp_76;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_76 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_74 += tmp_76;
   std::complex<double> tmp_75;
   std::complex<double> tmp_77;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_77 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
   }
   tmp_75 += tmp_77;
   result += (-0.1*Sqr(g1)) * tmp_74 * tmp_75;
   std::complex<double> tmp_78;
   std::complex<double> tmp_80;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_80 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_78 += tmp_80;
   std::complex<double> tmp_79;
   std::complex<double> tmp_81;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_81 += KroneckerDelta(gO1,3 + j2)*ZD(gI1,3 + j2);
   }
   tmp_79 += tmp_81;
   result += (-0.03333333333333333*Sqr(g1)) * tmp_78 * tmp_79;
   std::complex<double> tmp_82;
   std::complex<double> tmp_84;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_84 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_82 += tmp_84;
   std::complex<double> tmp_83;
   std::complex<double> tmp_85;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_85 += KroneckerDelta(gO1,3 + j2)*ZD(gI1,3 + j2);
   }
   tmp_83 += tmp_85;
   result += (-0.6666666666666666*Sqr(g3)) * tmp_82 * tmp_83;
   std::complex<double> tmp_86;
   std::complex<double> tmp_88;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_89;
      std::complex<double> tmp_90;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_90 += KroneckerDelta(gO2,3 + j1)*Yd(j1,j2);
      }
      tmp_89 += tmp_90;
      tmp_88 += (Conj(ZD(gI2,j2))) * tmp_89;
   }
   tmp_86 += tmp_88;
   std::complex<double> tmp_87;
   std::complex<double> tmp_91;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_92;
      std::complex<double> tmp_93;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_93 += Conj(Yd(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_92 += tmp_93;
      tmp_91 += (ZD(gI1,j4)) * tmp_92;
   }
   tmp_87 += tmp_91;
   result += (-1) * tmp_86 * tmp_87;
   if (gO1 < 3) {
      std::complex<double> tmp_94;
      std::complex<double> tmp_95;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_95 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_94 += tmp_95;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_94;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_96;
      std::complex<double> tmp_97;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_97 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_96 += tmp_97;
      result += (-0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_96;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_98;
      std::complex<double> tmp_99;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_99 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
      }
      tmp_98 += tmp_99;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_98;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_100;
      std::complex<double> tmp_101;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_101 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_100 += tmp_101;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_100;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_102;
      std::complex<double> tmp_103;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_103 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_102 += tmp_103;
      result += (-0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_102;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_104;
      std::complex<double> tmp_105;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_105 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
      }
      tmp_104 += tmp_105;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_104;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_106;
      std::complex<double> tmp_108;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_108 += KroneckerDelta(gO2,3 + j1)*Yd(j1,gO1);
      }
      tmp_106 += tmp_108;
      std::complex<double> tmp_107;
      std::complex<double> tmp_109;
      for (unsigned j4 = 0; j4 < 3; ++j4) {
         std::complex<double> tmp_110;
         std::complex<double> tmp_111;
         for (unsigned j3 = 0; j3 < 3; ++j3) {
            tmp_111 += Conj(Yd(j3,j4))*Conj(ZD(gI2,3 + j3));
         }
         tmp_110 += tmp_111;
         tmp_109 += (ZD(gI1,j4)) * tmp_110;
      }
      tmp_107 += tmp_109;
      result += (-3) * tmp_106 * tmp_107;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_112;
      std::complex<double> tmp_113;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_113 += KroneckerDelta(gO1,3 + j1)*ZD(gI1,3 + j1);
      }
      tmp_112 += tmp_113;
      result += (-0.016666666666666666*Conj(ZD(gI2,gO2))*Sqr(g1)) * tmp_112;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_114;
      std::complex<double> tmp_115;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_115 += KroneckerDelta(gO1,3 + j1)*ZD(gI1,3 + j1);
      }
      tmp_114 += tmp_115;
      result += (0.6666666666666666*Conj(ZD(gI2,gO2))*Sqr(g3)) * tmp_114;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_116;
      std::complex<double> tmp_117;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_117 += KroneckerDelta(gO1,3 + j2)*ZD(gI1,3 + j2);
      }
      tmp_116 += tmp_117;
      result += (-0.016666666666666666*Conj(ZD(gI2,gO2))*Sqr(g1)) * tmp_116;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_118;
      std::complex<double> tmp_119;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_119 += KroneckerDelta(gO1,3 + j2)*ZD(gI1,3 + j2);
      }
      tmp_118 += tmp_119;
      result += (0.6666666666666666*Conj(ZD(gI2,gO2))*Sqr(g3)) * tmp_118;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_120;
      std::complex<double> tmp_122;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_123;
         std::complex<double> tmp_124;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_124 += Yd(j1,j2)*ZD(gI1,3 + j1);
         }
         tmp_123 += tmp_124;
         tmp_122 += (Conj(ZD(gI2,j2))) * tmp_123;
      }
      tmp_120 += tmp_122;
      std::complex<double> tmp_121;
      std::complex<double> tmp_125;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_125 += Conj(Yd(j3,gO2))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_121 += tmp_125;
      result += (-3) * tmp_120 * tmp_121;
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_126;
      std::complex<double> tmp_128;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_128 += Yd(j1,gO1)*ZD(gI1,3 + j1);
      }
      tmp_126 += tmp_128;
      std::complex<double> tmp_127;
      std::complex<double> tmp_129;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_129 += Conj(Yd(j3,gO2))*Conj(ZD(gI2,3 + j3));
      }
      tmp_127 += tmp_129;
      result += (-1) * tmp_126 * tmp_127;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_130;
      std::complex<double> tmp_131;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_131 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
      }
      tmp_130 += tmp_131;
      result += (-0.016666666666666666*Sqr(g1)*ZD(gI1,gO1)) * tmp_130;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_132;
      std::complex<double> tmp_133;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_133 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
      }
      tmp_132 += tmp_133;
      result += (0.6666666666666666*Sqr(g3)*ZD(gI1,gO1)) * tmp_132;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_134;
      std::complex<double> tmp_135;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_135 += Conj(ZD(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
      }
      tmp_134 += tmp_135;
      result += (-0.016666666666666666*Sqr(g1)*ZD(gI1,gO1)) * tmp_134;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_136;
      std::complex<double> tmp_137;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_137 += Conj(ZD(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
      }
      tmp_136 += tmp_137;
      result += (0.6666666666666666*Sqr(g3)*ZD(gI1,gO1)) * tmp_136;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.016666666666666666*Conj(ZD(gI2,gO2))*Sqr(g1)*ZD(gI1,gO1);
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.25*Conj(ZD(gI2,gO2))*Sqr(g2)*ZD(gI1,gO1);
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -1.3333333333333333*Conj(ZD(gI2,gO2))*Sqr(g3)*ZD(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_138;
   std::complex<double> tmp_140;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_140 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_138 += tmp_140;
   std::complex<double> tmp_139;
   std::complex<double> tmp_141;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_141 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_139 += tmp_141;
   result += (0.05*Sqr(g1)) * tmp_138 * tmp_139;
   std::complex<double> tmp_142;
   std::complex<double> tmp_144;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_144 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_142 += tmp_144;
   std::complex<double> tmp_143;
   std::complex<double> tmp_145;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_145 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_143 += tmp_145;
   result += (-0.1*Sqr(g1)) * tmp_142 * tmp_143;
   std::complex<double> tmp_146;
   std::complex<double> tmp_148;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_148 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_146 += tmp_148;
   std::complex<double> tmp_147;
   std::complex<double> tmp_149;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_149 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
   }
   tmp_147 += tmp_149;
   result += (0.05*Sqr(g1)) * tmp_146 * tmp_147;
   std::complex<double> tmp_150;
   std::complex<double> tmp_152;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_152 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_150 += tmp_152;
   std::complex<double> tmp_151;
   std::complex<double> tmp_153;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_153 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
   }
   tmp_151 += tmp_153;
   result += (-0.1*Sqr(g1)) * tmp_150 * tmp_151;
   if (gO1 < 3) {
      std::complex<double> tmp_154;
      std::complex<double> tmp_155;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_155 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_154 += tmp_155;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_154;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_156;
      std::complex<double> tmp_157;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_157 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_156 += tmp_157;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_156;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_158;
      std::complex<double> tmp_159;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_159 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
      }
      tmp_158 += tmp_159;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_158;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_160;
      std::complex<double> tmp_161;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_161 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_160 += tmp_161;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_160;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_162;
      std::complex<double> tmp_163;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_163 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_162 += tmp_163;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_162;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_164;
      std::complex<double> tmp_165;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_165 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
      }
      tmp_164 += tmp_165;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_164;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_166;
      std::complex<double> tmp_168;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_168 += KroneckerDelta(gO2,3 + j1)*Yd(j1,gO1);
      }
      tmp_166 += tmp_168;
      std::complex<double> tmp_167;
      std::complex<double> tmp_169;
      for (unsigned j4 = 0; j4 < 3; ++j4) {
         std::complex<double> tmp_170;
         std::complex<double> tmp_171;
         for (unsigned j3 = 0; j3 < 3; ++j3) {
            tmp_171 += Conj(Ye(j3,j4))*Conj(ZE(gI2,3 + j3));
         }
         tmp_170 += tmp_171;
         tmp_169 += (ZE(gI1,j4)) * tmp_170;
      }
      tmp_167 += tmp_169;
      result += (-1) * tmp_166 * tmp_167;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_172;
      std::complex<double> tmp_174;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_175;
         std::complex<double> tmp_176;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_176 += Ye(j1,j2)*ZE(gI1,3 + j1);
         }
         tmp_175 += tmp_176;
         tmp_174 += (Conj(ZE(gI2,j2))) * tmp_175;
      }
      tmp_172 += tmp_174;
      std::complex<double> tmp_173;
      std::complex<double> tmp_177;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_177 += Conj(Yd(j3,gO2))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_173 += tmp_177;
      result += (-1) * tmp_172 * tmp_173;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSdconjUSdconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_178;
   std::complex<double> tmp_180;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_180 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_178 += tmp_180;
   std::complex<double> tmp_179;
   std::complex<double> tmp_181;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_181 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_179 += tmp_181;
   result += (-0.05*Sqr(g1)) * tmp_178 * tmp_179;
   std::complex<double> tmp_182;
   std::complex<double> tmp_184;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_184 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_182 += tmp_184;
   std::complex<double> tmp_183;
   std::complex<double> tmp_185;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_185 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_183 += tmp_185;
   result += (0.2*Sqr(g1)) * tmp_182 * tmp_183;
   std::complex<double> tmp_186;
   std::complex<double> tmp_188;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_188 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_186 += tmp_188;
   std::complex<double> tmp_187;
   std::complex<double> tmp_189;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_189 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
   }
   tmp_187 += tmp_189;
   result += (-0.05*Sqr(g1)) * tmp_186 * tmp_187;
   std::complex<double> tmp_190;
   std::complex<double> tmp_192;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_192 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_190 += tmp_192;
   std::complex<double> tmp_191;
   std::complex<double> tmp_193;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_193 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
   }
   tmp_191 += tmp_193;
   result += (0.2*Sqr(g1)) * tmp_190 * tmp_191;
   std::complex<double> tmp_194;
   std::complex<double> tmp_196;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_197;
      std::complex<double> tmp_198;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_198 += KroneckerDelta(gO2,3 + j1)*Yd(j1,j2);
      }
      tmp_197 += tmp_198;
      tmp_196 += (Conj(ZU(gI2,j2))) * tmp_197;
   }
   tmp_194 += tmp_196;
   std::complex<double> tmp_195;
   std::complex<double> tmp_199;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_200;
      std::complex<double> tmp_201;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_201 += Conj(Yd(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_200 += tmp_201;
      tmp_199 += (ZU(gI1,j4)) * tmp_200;
   }
   tmp_195 += tmp_199;
   result += (-1) * tmp_194 * tmp_195;
   if (gO1 < 3) {
      std::complex<double> tmp_202;
      std::complex<double> tmp_203;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_203 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_202 += tmp_203;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_202;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_204;
      std::complex<double> tmp_205;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_205 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_204 += tmp_205;
      result += (0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_204;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_206;
      std::complex<double> tmp_207;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_207 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
      }
      tmp_206 += tmp_207;
      result += (0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_206;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_208;
      std::complex<double> tmp_209;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_209 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_208 += tmp_209;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_208;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_210;
      std::complex<double> tmp_211;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_211 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_210 += tmp_211;
      result += (0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_210;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_212;
      std::complex<double> tmp_213;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_213 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
      }
      tmp_212 += tmp_213;
      result += (0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_212;
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_214;
      std::complex<double> tmp_216;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_216 += Yu(j1,gO1)*ZU(gI1,3 + j1);
      }
      tmp_214 += tmp_216;
      std::complex<double> tmp_215;
      std::complex<double> tmp_217;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_217 += Conj(Yu(j3,gO2))*Conj(ZU(gI2,3 + j3));
      }
      tmp_215 += tmp_217;
      result += (-1) * tmp_214 * tmp_215;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.5*Conj(ZU(gI2,gO2))*Sqr(g2)*ZU(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSdAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_218;
   std::complex<double> tmp_219;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_220;
      std::complex<double> tmp_221;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_221 += KroneckerDelta(gO2,3 + j1)*TYd(j1,j2);
      }
      tmp_220 += tmp_221;
      tmp_219 += (Conj(ZD(gI1,j2))) * tmp_220;
   }
   tmp_218 += tmp_219;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) * tmp_218
      ;
   if (gO2 < 3) {
      std::complex<double> tmp_222;
      std::complex<double> tmp_223;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_223 += Conj(ZD(gI1,3 + j1))*Conj(TYd(j1,gO2));
      }
      tmp_222 += tmp_223;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) *
         tmp_222;
   }
   std::complex<double> tmp_224;
   std::complex<double> tmp_225;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_226;
      std::complex<double> tmp_227;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_227 += KroneckerDelta(gO2,3 + j1)*Yd(j1,j2);
      }
      tmp_226 += tmp_227;
      tmp_225 += (Conj(ZD(gI1,j2))) * tmp_226;
   }
   tmp_224 += tmp_225;
   result += (std::complex<double>(0.,-0.7071067811865475)*Conj(Mu)*ZA(gI2,1))
      * tmp_224;
   if (gO2 < 3) {
      std::complex<double> tmp_228;
      std::complex<double> tmp_229;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_229 += Conj(Yd(j1,gO2))*Conj(ZD(gI1,3 + j1));
      }
      tmp_228 += tmp_229;
      result += (std::complex<double>(0.,0.7071067811865475)*Mu*ZA(gI2,1)) *
         tmp_228;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSdhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_230;
   std::complex<double> tmp_231;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_231 += Conj(ZD(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_230 += tmp_231;
   result += (0.1*vd*Sqr(g1)*ZH(gI2,0)) * tmp_230;
   std::complex<double> tmp_232;
   std::complex<double> tmp_233;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_234;
      std::complex<double> tmp_235;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_235 += KroneckerDelta(gO2,3 + j1)*TYd(j1,j2);
      }
      tmp_234 += tmp_235;
      tmp_233 += (Conj(ZD(gI1,j2))) * tmp_234;
   }
   tmp_232 += tmp_233;
   result += (-0.7071067811865475*ZH(gI2,0)) * tmp_232;
   std::complex<double> tmp_236;
   std::complex<double> tmp_237;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_238;
      std::complex<double> tmp_239;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_240;
         std::complex<double> tmp_241;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_241 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_240 += tmp_241;
         tmp_239 += (KroneckerDelta(gO2,3 + j2)) * tmp_240;
      }
      tmp_238 += tmp_239;
      tmp_237 += (Conj(ZD(gI1,3 + j3))) * tmp_238;
   }
   tmp_236 += tmp_237;
   result += (-(vd*ZH(gI2,0))) * tmp_236;
   if (gO2 < 3) {
      result += 0.05*vd*Conj(ZD(gI1,gO2))*Sqr(g1)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      result += 0.25*vd*Conj(ZD(gI1,gO2))*Sqr(g2)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_242;
      std::complex<double> tmp_243;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_243 += Conj(ZD(gI1,3 + j1))*Conj(TYd(j1,gO2));
      }
      tmp_242 += tmp_243;
      result += (-0.7071067811865475*ZH(gI2,0)) * tmp_242;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_244;
      std::complex<double> tmp_245;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_246;
         std::complex<double> tmp_247;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_247 += Conj(Yd(j1,gO2))*Yd(j1,j2);
         }
         tmp_246 += tmp_247;
         tmp_245 += (Conj(ZD(gI1,j2))) * tmp_246;
      }
      tmp_244 += tmp_245;
      result += (-(vd*ZH(gI2,0))) * tmp_244;
   }
   std::complex<double> tmp_248;
   std::complex<double> tmp_249;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_249 += Conj(ZD(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_248 += tmp_249;
   result += (-0.1*vu*Sqr(g1)*ZH(gI2,1)) * tmp_248;
   std::complex<double> tmp_250;
   std::complex<double> tmp_251;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_252;
      std::complex<double> tmp_253;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_253 += KroneckerDelta(gO2,3 + j1)*Yd(j1,j2);
      }
      tmp_252 += tmp_253;
      tmp_251 += (Conj(ZD(gI1,j2))) * tmp_252;
   }
   tmp_250 += tmp_251;
   result += (0.7071067811865475*Conj(Mu)*ZH(gI2,1)) * tmp_250;
   if (gO2 < 3) {
      result += -0.05*vu*Conj(ZD(gI1,gO2))*Sqr(g1)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      result += -0.25*vu*Conj(ZD(gI1,gO2))*Sqr(g2)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_254;
      std::complex<double> tmp_255;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_255 += Conj(Yd(j1,gO2))*Conj(ZD(gI1,3 + j1));
      }
      tmp_254 += tmp_255;
      result += (0.7071067811865475*Mu*ZH(gI2,1)) * tmp_254;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdSuHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_256;
   std::complex<double> tmp_257;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_258;
      std::complex<double> tmp_259;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_259 += KroneckerDelta(gO2,3 + j1)*Yd(j1,j2);
      }
      tmp_258 += tmp_259;
      tmp_257 += (Conj(ZU(gI1,j2))) * tmp_258;
   }
   tmp_256 += tmp_257;
   result += (Conj(Mu)*Conj(ZP(gI2,1))) * tmp_256;
   std::complex<double> tmp_260;
   std::complex<double> tmp_261;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_262;
      std::complex<double> tmp_263;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_263 += KroneckerDelta(gO2,3 + j1)*TYd(j1,j2);
      }
      tmp_262 += tmp_263;
      tmp_261 += (Conj(ZU(gI1,j2))) * tmp_262;
   }
   tmp_260 += tmp_261;
   result += (Conj(ZP(gI2,0))) * tmp_260;
   std::complex<double> tmp_264;
   std::complex<double> tmp_265;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_266;
      std::complex<double> tmp_267;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_268;
         std::complex<double> tmp_269;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_269 += Conj(Yu(j3,j1))*Yd(j2,j1);
         }
         tmp_268 += tmp_269;
         tmp_267 += (KroneckerDelta(gO2,3 + j2)) * tmp_268;
      }
      tmp_266 += tmp_267;
      tmp_265 += (Conj(ZU(gI1,3 + j3))) * tmp_266;
   }
   tmp_264 += tmp_265;
   result += (0.7071067811865475*vu*Conj(ZP(gI2,0))) * tmp_264;
   std::complex<double> tmp_270;
   std::complex<double> tmp_271;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_272;
      std::complex<double> tmp_273;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_274;
         std::complex<double> tmp_275;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_275 += Conj(Yu(j3,j1))*Yd(j2,j1);
         }
         tmp_274 += tmp_275;
         tmp_273 += (KroneckerDelta(gO2,3 + j2)) * tmp_274;
      }
      tmp_272 += tmp_273;
      tmp_271 += (Conj(ZU(gI1,3 + j3))) * tmp_272;
   }
   tmp_270 += tmp_271;
   result += (0.7071067811865475*vd*Conj(ZP(gI2,1))) * tmp_270;
   if (gO2 < 3) {
      result += -0.35355339059327373*vd*Conj(ZP(gI2,0))*Conj(ZU(gI1,gO2))*
         Sqr(g2);
   }
   if (gO2 < 3) {
      result += -0.35355339059327373*vu*Conj(ZP(gI2,1))*Conj(ZU(gI1,gO2))*
         Sqr(g2);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_276;
      std::complex<double> tmp_277;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_277 += Conj(Yu(j1,gO2))*Conj(ZU(gI1,3 + j1));
      }
      tmp_276 += tmp_277;
      result += (Conj(ZP(gI2,0))*Mu) * tmp_276;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_278;
      std::complex<double> tmp_279;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_279 += Conj(ZU(gI1,3 + j1))*Conj(TYu(j1,gO2));
      }
      tmp_278 += tmp_279;
      result += (Conj(ZP(gI2,1))) * tmp_278;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_280;
      std::complex<double> tmp_281;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_282;
         std::complex<double> tmp_283;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_283 += Conj(Yd(j1,gO2))*Yd(j1,j2);
         }
         tmp_282 += tmp_283;
         tmp_281 += (Conj(ZU(gI1,j2))) * tmp_282;
      }
      tmp_280 += tmp_281;
      result += (0.7071067811865475*vd*Conj(ZP(gI2,0))) * tmp_280;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_284;
      std::complex<double> tmp_285;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_286;
         std::complex<double> tmp_287;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_287 += Conj(Yu(j1,gO2))*Yu(j1,j2);
         }
         tmp_286 += tmp_287;
         tmp_285 += (Conj(ZU(gI1,j2))) * tmp_286;
      }
      tmp_284 += tmp_285;
      result += (0.7071067811865475*vu*Conj(ZP(gI2,1))) * tmp_284;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdGluFdPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_288;
   std::complex<double> tmp_289;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_289 += KroneckerDelta(gO2,3 + j1)*ZDR(gI2,j1);
   }
   tmp_288 += tmp_289;
   result += (1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_288;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdGluFdPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -1.4142135623730951*g3*PhaseGlu*Conj(ZDL(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVGSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 6) {
      result += g3*Conj(ZD(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVPSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_290;
   std::complex<double> tmp_291;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_291 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_290 += tmp_291;
   result += (-0.2581988897471611*g1*Cos(ThetaW())) * tmp_290;
   if (gO2 < 3) {
      result += 0.12909944487358055*g1*Conj(ZD(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += -0.5*g2*Conj(ZD(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVZSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_292;
   std::complex<double> tmp_293;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_293 += Conj(ZD(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_292 += tmp_293;
   result += (0.2581988897471611*g1*Sin(ThetaW())) * tmp_292;
   if (gO2 < 3) {
      result += -0.5*g2*Conj(ZD(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += -0.12909944487358055*g1*Conj(ZD(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSdVWmSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 0.7071067811865475*g2*Conj(ZU(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result = 0.1*KroneckerDelta(gO1,gO2)*(g1*Sin(ThetaW())*(7.745966692414834*g2
      *Cos(ThetaW()) + 3*g1*Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpUSvconjUSvconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*KroneckerDelta(gO1,gO2)*(3*Sqr(g1) + 5*Sqr(g2))*(ZA(gI1,0)*ZA
      (gI2,0) - ZA(gI1,1)*ZA(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result += -0.15*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1,0);
   result += 0.25*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1,0);
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_294;
      std::complex<double> tmp_295;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_295 += Conj(Ye(j1,gO2))*Ye(j1,gO1);
      }
      tmp_294 += tmp_295;
      result += (-(Conj(ZP(gI2,0))*ZP(gI1,0))) * tmp_294;
   }
   result += 0.15*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1,1);
   result += -0.25*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1,1);

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*KroneckerDelta(gO1,gO2)*(3*Sqr(g1) + 5*Sqr(g2))*(ZH(gI1,0)*ZH
      (gI2,0) - ZH(gI1,1)*ZH(gI2,1));

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvbarChaFePR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_296;
      std::complex<double> tmp_297;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_297 += Conj(Ye(j1,gO2))*ZER(gI2,j1);
      }
      tmp_296 += tmp_297;
      result += (UM(gI1,1)) * tmp_296;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvbarChaFePL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -(g2*Conj(UP(gI1,0))*Conj(ZEL(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvconjHpmSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += -0.35355339059327373*vd*Conj(ZE(gI2,gO2))*Sqr(g2)*ZP(gI1,0);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_298;
      std::complex<double> tmp_299;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_299 += Conj(ZE(gI2,3 + j1))*Conj(TYe(j1,gO2));
      }
      tmp_298 += tmp_299;
      result += (ZP(gI1,0)) * tmp_298;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_300;
      std::complex<double> tmp_301;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_302;
         std::complex<double> tmp_303;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_303 += Conj(Ye(j1,gO2))*Ye(j1,j2);
         }
         tmp_302 += tmp_303;
         tmp_301 += (Conj(ZE(gI2,j2))) * tmp_302;
      }
      tmp_300 += tmp_301;
      result += (0.7071067811865475*vd*ZP(gI1,0)) * tmp_300;
   }
   if (gO2 < 3) {
      result += -0.35355339059327373*vu*Conj(ZE(gI2,gO2))*Sqr(g2)*ZP(gI1,1);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_304;
      std::complex<double> tmp_305;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_305 += Conj(Ye(j1,gO2))*Conj(ZE(gI2,3 + j1));
      }
      tmp_304 += tmp_305;
      result += (Mu*ZP(gI1,1)) * tmp_304;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result += -0.15*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g1);
   result += -0.25*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g2);
   if (gI1 < 3 && gI2 < 3) {
      result += -0.15*Conj(ZV(gI2,gO2))*Sqr(g1)*ZV(gI1,gO1);
   }
   if (gI1 < 3 && gI2 < 3) {
      result += -0.25*Conj(ZV(gI2,gO2))*Sqr(g2)*ZV(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvSvhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI1 < 3) {
      result += -0.15*vd*Conj(ZV(gI1,gO2))*Sqr(g1)*ZH(gI2,0);
   }
   if (gI1 < 3) {
      result += -0.25*vd*Conj(ZV(gI1,gO2))*Sqr(g2)*ZH(gI2,0);
   }
   if (gI1 < 3) {
      result += 0.15*vu*Conj(ZV(gI1,gO2))*Sqr(g1)*ZH(gI2,1);
   }
   if (gI1 < 3) {
      result += 0.25*vu*Conj(ZV(gI1,gO2))*Sqr(g2)*ZH(gI2,1);
   }

   return result;
}

double CLASSNAME::CpconjUSvFvChiPR(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvFvChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI1 < 3) {
      result += 0.5477225575051661*g1*Conj(ZN(gI2,0))*KroneckerDelta(gI1,gO1
         );
   }
   if (gI1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZN(gI2,1))*KroneckerDelta(gI1,
         gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_306;
   std::complex<double> tmp_307;
   std::complex<double> tmp_308;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_308 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_307 += tmp_308;
   tmp_306 += (std::complex<double>(0,0.05)*KroneckerDelta(gO1,gO2)*Sqr(g1)) *
      tmp_307;
   std::complex<double> tmp_309;
   std::complex<double> tmp_310;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_310 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_309 += tmp_310;
   tmp_306 += (std::complex<double>(0,0.25)*KroneckerDelta(gO1,gO2)*Sqr(g2)) *
      tmp_309;
   std::complex<double> tmp_311;
   std::complex<double> tmp_312;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_312 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_311 += tmp_312;
   tmp_306 += (std::complex<double>(0,0.1)*KroneckerDelta(gO1,gO2)*Sqr(g1)) *
      tmp_311;
   result += (std::complex<double>(0,-1)) * tmp_306;

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_313;
   std::complex<double> tmp_314;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_314 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_313 += tmp_314;
   result += (-0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_313;
   std::complex<double> tmp_315;
   std::complex<double> tmp_316;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_316 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_315 += tmp_316;
   result += (0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_315;
   std::complex<double> tmp_317;
   std::complex<double> tmp_318;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_318 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_317 += tmp_318;
   result += (0.3*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_317;
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_319;
      std::complex<double> tmp_321;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_321 += Ye(j1,gO1)*ZE(gI1,3 + j1);
      }
      tmp_319 += tmp_321;
      std::complex<double> tmp_320;
      std::complex<double> tmp_322;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_322 += Conj(Ye(j3,gO2))*Conj(ZE(gI2,3 + j3));
      }
      tmp_320 += tmp_322;
      result += (-1) * tmp_319 * tmp_320;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.5*Conj(ZE(gI2,gO2))*Sqr(g2)*ZE(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSvconjUSvconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_323;
   std::complex<double> tmp_324;
   std::complex<double> tmp_325;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_325 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_324 += tmp_325;
   tmp_323 += (std::complex<double>(0,0.05)*KroneckerDelta(gO1,gO2)*Sqr(g1)) *
      tmp_324;
   std::complex<double> tmp_326;
   std::complex<double> tmp_327;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_327 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_326 += tmp_327;
   tmp_323 += (std::complex<double>(0,-0.25)*KroneckerDelta(gO1,gO2)*Sqr(g2)) *
      tmp_326;
   std::complex<double> tmp_328;
   std::complex<double> tmp_329;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_329 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_328 += tmp_329;
   tmp_323 += (std::complex<double>(0,-0.2)*KroneckerDelta(gO1,gO2)*Sqr(g1)) *
      tmp_328;
   result += (std::complex<double>(0,-1)) * tmp_323;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvVZSv(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g2*Conj(ZV(gI2,gO2))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.3872983346207417*g1*Conj(ZV(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSvconjVWmSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 0.7071067811865475*g2*Conj(ZE(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_330;
   std::complex<double> tmp_331;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_331 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_330 += tmp_331;
   result += (0.5333333333333333*Sqr(g1)*Sqr(Sin(ThetaW()))) * tmp_330;
   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2)*Sqr(Cos(ThetaW()));
   }
   if (gO1 < 3) {
      result += -0.2581988897471611*g1*g2*Cos(ThetaW())*KroneckerDelta(gO1,
         gO2)*Sin(ThetaW());
   }
   if (gO1 < 3) {
      result += 0.03333333333333333*KroneckerDelta(gO1,gO2)*Sqr(g1)*Sqr(Sin(
         ThetaW()));
   }

   return result;
}

double CLASSNAME::CpUSuconjUSuconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_332;
   std::complex<double> tmp_333;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_333 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_332 += tmp_333;
   result += (-0.2*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0)) * tmp_332;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,0)*ZA(gI2,0);
   }
   std::complex<double> tmp_334;
   std::complex<double> tmp_335;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_335 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_334 += tmp_335;
   result += (0.2*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) * tmp_334;
   std::complex<double> tmp_336;
   std::complex<double> tmp_337;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_338;
      std::complex<double> tmp_339;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_340;
         std::complex<double> tmp_341;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_341 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_340 += tmp_341;
         tmp_339 += (KroneckerDelta(gO2,3 + j2)) * tmp_340;
      }
      tmp_338 += tmp_339;
      tmp_337 += (KroneckerDelta(gO1,3 + j3)) * tmp_338;
   }
   tmp_336 += tmp_337;
   result += (-(ZA(gI1,1)*ZA(gI2,1))) * tmp_336;
   if (gO1 < 3) {
      result += -0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,1)*ZA(gI2,1);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_342;
      std::complex<double> tmp_343;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_343 += Conj(Yu(j1,gO2))*Yu(j1,gO1);
      }
      tmp_342 += tmp_343;
      result += (-(ZA(gI1,1)*ZA(gI2,1))) * tmp_342;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_344;
   std::complex<double> tmp_345;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_345 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_344 += tmp_345;
   result += (-0.2*Conj(ZP(gI2,0))*Sqr(g1)*ZP(gI1,0)) * tmp_344;
   if (gO1 < 3) {
      result += 0.05*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1,
         0);
   }
   if (gO1 < 3) {
      result += 0.25*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1,
         0);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_346;
      std::complex<double> tmp_347;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_347 += Conj(Yd(j1,gO2))*Yd(j1,gO1);
      }
      tmp_346 += tmp_347;
      result += (-(Conj(ZP(gI2,0))*ZP(gI1,0))) * tmp_346;
   }
   std::complex<double> tmp_348;
   std::complex<double> tmp_349;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_349 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_348 += tmp_349;
   result += (0.2*Conj(ZP(gI2,1))*Sqr(g1)*ZP(gI1,1)) * tmp_348;
   std::complex<double> tmp_350;
   std::complex<double> tmp_351;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_352;
      std::complex<double> tmp_353;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_354;
         std::complex<double> tmp_355;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_355 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_354 += tmp_355;
         tmp_353 += (KroneckerDelta(gO2,3 + j2)) * tmp_354;
      }
      tmp_352 += tmp_353;
      tmp_351 += (KroneckerDelta(gO1,3 + j3)) * tmp_352;
   }
   tmp_350 += tmp_351;
   result += (-(Conj(ZP(gI2,1))*ZP(gI1,1))) * tmp_350;
   if (gO1 < 3) {
      result += -0.05*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1
         ,1);
   }
   if (gO1 < 3) {
      result += -0.25*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1
         ,1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuhhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_356;
   std::complex<double> tmp_357;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_357 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_356 += tmp_357;
   result += (-0.2*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0)) * tmp_356;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,0)*ZH(gI2,0);
   }
   std::complex<double> tmp_358;
   std::complex<double> tmp_359;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_359 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_358 += tmp_359;
   result += (0.2*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) * tmp_358;
   std::complex<double> tmp_360;
   std::complex<double> tmp_361;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_362;
      std::complex<double> tmp_363;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_364;
         std::complex<double> tmp_365;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_365 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_364 += tmp_365;
         tmp_363 += (KroneckerDelta(gO2,3 + j2)) * tmp_364;
      }
      tmp_362 += tmp_363;
      tmp_361 += (KroneckerDelta(gO1,3 + j3)) * tmp_362;
   }
   tmp_360 += tmp_361;
   result += (-(ZH(gI1,1)*ZH(gI2,1))) * tmp_360;
   if (gO1 < 3) {
      result += -0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,1)*ZH(gI2,1);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_366;
      std::complex<double> tmp_367;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_367 += Conj(Yu(j1,gO2))*Yu(j1,gO1);
      }
      tmp_366 += tmp_367;
      result += (-(ZH(gI1,1)*ZH(gI2,1))) * tmp_366;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSubarChaFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_368;
      std::complex<double> tmp_369;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_369 += Conj(Yd(j1,gO2))*ZDR(gI2,j1);
      }
      tmp_368 += tmp_369;
      result += (UM(gI1,1)) * tmp_368;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSubarChaFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_370;
   std::complex<double> tmp_371;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_372;
      std::complex<double> tmp_373;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_373 += KroneckerDelta(gO1,3 + j1)*Yu(j1,j2);
      }
      tmp_372 += tmp_373;
      tmp_371 += (Conj(ZDL(gI2,j2))) * tmp_372;
   }
   tmp_370 += tmp_371;
   result += (Conj(UP(gI1,1))) * tmp_370;
   if (gO1 < 3) {
      result += -(g2*Conj(UP(gI1,0))*Conj(ZDL(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuconjHpmSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_374;
   std::complex<double> tmp_375;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_376;
      std::complex<double> tmp_377;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_377 += KroneckerDelta(gO2,3 + j1)*Yu(j1,j2);
      }
      tmp_376 += tmp_377;
      tmp_375 += (Conj(ZD(gI2,j2))) * tmp_376;
   }
   tmp_374 += tmp_375;
   result += (Conj(Mu)*ZP(gI1,0)) * tmp_374;
   std::complex<double> tmp_378;
   std::complex<double> tmp_379;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_380;
      std::complex<double> tmp_381;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_382;
         std::complex<double> tmp_383;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_383 += Conj(Yd(j3,j1))*Yu(j2,j1);
         }
         tmp_382 += tmp_383;
         tmp_381 += (KroneckerDelta(gO2,3 + j2)) * tmp_382;
      }
      tmp_380 += tmp_381;
      tmp_379 += (Conj(ZD(gI2,3 + j3))) * tmp_380;
   }
   tmp_378 += tmp_379;
   result += (0.7071067811865475*vu*ZP(gI1,0)) * tmp_378;
   if (gO2 < 3) {
      result += -0.35355339059327373*vd*Conj(ZD(gI2,gO2))*Sqr(g2)*ZP(gI1,0);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_384;
      std::complex<double> tmp_385;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_385 += Conj(ZD(gI2,3 + j1))*Conj(TYd(j1,gO2));
      }
      tmp_384 += tmp_385;
      result += (ZP(gI1,0)) * tmp_384;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_386;
      std::complex<double> tmp_387;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_388;
         std::complex<double> tmp_389;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_389 += Conj(Yd(j1,gO2))*Yd(j1,j2);
         }
         tmp_388 += tmp_389;
         tmp_387 += (Conj(ZD(gI2,j2))) * tmp_388;
      }
      tmp_386 += tmp_387;
      result += (0.7071067811865475*vd*ZP(gI1,0)) * tmp_386;
   }
   std::complex<double> tmp_390;
   std::complex<double> tmp_391;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_392;
      std::complex<double> tmp_393;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_393 += KroneckerDelta(gO2,3 + j1)*TYu(j1,j2);
      }
      tmp_392 += tmp_393;
      tmp_391 += (Conj(ZD(gI2,j2))) * tmp_392;
   }
   tmp_390 += tmp_391;
   result += (ZP(gI1,1)) * tmp_390;
   std::complex<double> tmp_394;
   std::complex<double> tmp_395;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_396;
      std::complex<double> tmp_397;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_398;
         std::complex<double> tmp_399;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_399 += Conj(Yd(j3,j1))*Yu(j2,j1);
         }
         tmp_398 += tmp_399;
         tmp_397 += (KroneckerDelta(gO2,3 + j2)) * tmp_398;
      }
      tmp_396 += tmp_397;
      tmp_395 += (Conj(ZD(gI2,3 + j3))) * tmp_396;
   }
   tmp_394 += tmp_395;
   result += (0.7071067811865475*vd*ZP(gI1,1)) * tmp_394;
   if (gO2 < 3) {
      result += -0.35355339059327373*vu*Conj(ZD(gI2,gO2))*Sqr(g2)*ZP(gI1,1);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_400;
      std::complex<double> tmp_401;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_401 += Conj(Yd(j1,gO2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_400 += tmp_401;
      result += (Mu*ZP(gI1,1)) * tmp_400;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_402;
      std::complex<double> tmp_403;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_404;
         std::complex<double> tmp_405;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_405 += Conj(Yu(j1,gO2))*Yu(j1,j2);
         }
         tmp_404 += tmp_405;
         tmp_403 += (Conj(ZD(gI2,j2))) * tmp_404;
      }
      tmp_402 += tmp_403;
      result += (0.7071067811865475*vu*ZP(gI1,1)) * tmp_402;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_406;
   std::complex<double> tmp_407;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_407 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_406 += tmp_407;
   result += (-0.2*KroneckerDelta(gI1,gI2)*Sqr(g1)) * tmp_406;
   if (gO1 < 3) {
      result += 0.05*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g1)
         ;
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g2
         );
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuFuChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_408;
   std::complex<double> tmp_409;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_409 += KroneckerDelta(gO2,3 + j1)*ZUR(gI1,j1);
   }
   tmp_408 += tmp_409;
   result += (0.7302967433402214*g1*ZN(gI2,0)) * tmp_408;
   if (gO2 < 3) {
      std::complex<double> tmp_410;
      std::complex<double> tmp_411;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_411 += Conj(Yu(j1,gO2))*ZUR(gI1,j1);
      }
      tmp_410 += tmp_411;
      result += (-ZN(gI2,3)) * tmp_410;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuFuChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_412;
   std::complex<double> tmp_413;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_414;
      std::complex<double> tmp_415;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_415 += KroneckerDelta(gO1,3 + j1)*Yu(j1,j2);
      }
      tmp_414 += tmp_415;
      tmp_413 += (Conj(ZUL(gI1,j2))) * tmp_414;
   }
   tmp_412 += tmp_413;
   result += (-Conj(ZN(gI2,3))) * tmp_412;
   if (gO1 < 3) {
      result += -0.18257418583505536*g1*Conj(ZN(gI2,0))*Conj(ZUL(gI1,gO1));
   }
   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZN(gI2,1))*Conj(ZUL(gI1,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_416;
   std::complex<double> tmp_418;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_418 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_416 += tmp_418;
   std::complex<double> tmp_417;
   std::complex<double> tmp_419;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_419 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_417 += tmp_419;
   result += (0.1*Sqr(g1)) * tmp_416 * tmp_417;
   std::complex<double> tmp_420;
   std::complex<double> tmp_422;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_422 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_420 += tmp_422;
   std::complex<double> tmp_421;
   std::complex<double> tmp_423;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_423 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_421 += tmp_423;
   result += (0.2*Sqr(g1)) * tmp_420 * tmp_421;
   std::complex<double> tmp_424;
   std::complex<double> tmp_426;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_426 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_424 += tmp_426;
   std::complex<double> tmp_425;
   std::complex<double> tmp_427;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_427 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
   }
   tmp_425 += tmp_427;
   result += (0.1*Sqr(g1)) * tmp_424 * tmp_425;
   std::complex<double> tmp_428;
   std::complex<double> tmp_430;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_430 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_428 += tmp_430;
   std::complex<double> tmp_429;
   std::complex<double> tmp_431;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_431 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
   }
   tmp_429 += tmp_431;
   result += (0.2*Sqr(g1)) * tmp_428 * tmp_429;
   std::complex<double> tmp_432;
   std::complex<double> tmp_434;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_435;
      std::complex<double> tmp_436;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_436 += KroneckerDelta(gO2,3 + j1)*Yu(j1,j2);
      }
      tmp_435 += tmp_436;
      tmp_434 += (Conj(ZD(gI2,j2))) * tmp_435;
   }
   tmp_432 += tmp_434;
   std::complex<double> tmp_433;
   std::complex<double> tmp_437;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_438;
      std::complex<double> tmp_439;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_439 += Conj(Yu(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_438 += tmp_439;
      tmp_437 += (ZD(gI1,j4)) * tmp_438;
   }
   tmp_433 += tmp_437;
   result += (-1) * tmp_432 * tmp_433;
   if (gO1 < 3) {
      std::complex<double> tmp_440;
      std::complex<double> tmp_441;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_441 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_440 += tmp_441;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_440;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_442;
      std::complex<double> tmp_443;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_443 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_442 += tmp_443;
      result += (0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_442;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_444;
      std::complex<double> tmp_445;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_445 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
      }
      tmp_444 += tmp_445;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_444;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_446;
      std::complex<double> tmp_447;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_447 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_446 += tmp_447;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_446;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_448;
      std::complex<double> tmp_449;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_449 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_448 += tmp_449;
      result += (0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_448;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_450;
      std::complex<double> tmp_451;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_451 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
      }
      tmp_450 += tmp_451;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_450;
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_452;
      std::complex<double> tmp_454;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_454 += Yd(j1,gO1)*ZD(gI1,3 + j1);
      }
      tmp_452 += tmp_454;
      std::complex<double> tmp_453;
      std::complex<double> tmp_455;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_455 += Conj(Yd(j3,gO2))*Conj(ZD(gI2,3 + j3));
      }
      tmp_453 += tmp_455;
      result += (-1) * tmp_452 * tmp_453;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.5*Conj(ZD(gI2,gO2))*Sqr(g2)*ZD(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_456;
   std::complex<double> tmp_458;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_458 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_456 += tmp_458;
   std::complex<double> tmp_457;
   std::complex<double> tmp_459;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_459 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_457 += tmp_459;
   result += (-0.1*Sqr(g1)) * tmp_456 * tmp_457;
   std::complex<double> tmp_460;
   std::complex<double> tmp_462;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_462 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_460 += tmp_462;
   std::complex<double> tmp_461;
   std::complex<double> tmp_463;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_463 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_461 += tmp_463;
   result += (0.2*Sqr(g1)) * tmp_460 * tmp_461;
   std::complex<double> tmp_464;
   std::complex<double> tmp_466;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_466 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_464 += tmp_466;
   std::complex<double> tmp_465;
   std::complex<double> tmp_467;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_467 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
   }
   tmp_465 += tmp_467;
   result += (-0.1*Sqr(g1)) * tmp_464 * tmp_465;
   std::complex<double> tmp_468;
   std::complex<double> tmp_470;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_470 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_468 += tmp_470;
   std::complex<double> tmp_469;
   std::complex<double> tmp_471;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_471 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
   }
   tmp_469 += tmp_471;
   result += (0.2*Sqr(g1)) * tmp_468 * tmp_469;
   if (gO1 < 3) {
      std::complex<double> tmp_472;
      std::complex<double> tmp_473;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_473 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_472 += tmp_473;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_472;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_474;
      std::complex<double> tmp_475;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_475 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_474 += tmp_475;
      result += (0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_474;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_476;
      std::complex<double> tmp_477;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_477 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
      }
      tmp_476 += tmp_477;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_476;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_478;
      std::complex<double> tmp_479;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_479 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_478 += tmp_479;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_478;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_480;
      std::complex<double> tmp_481;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_481 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_480 += tmp_481;
      result += (0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_480;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_482;
      std::complex<double> tmp_483;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_483 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
      }
      tmp_482 += tmp_483;
      result += (-0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_482;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSuconjUSuconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_484;
   std::complex<double> tmp_486;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_486 += KroneckerDelta(gO1,3 + j1)*ZU(gI1,3 + j1);
   }
   tmp_484 += tmp_486;
   std::complex<double> tmp_485;
   std::complex<double> tmp_487;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_487 += Conj(ZU(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
   }
   tmp_485 += tmp_487;
   result += (-0.13333333333333333*Sqr(g1)) * tmp_484 * tmp_485;
   std::complex<double> tmp_488;
   std::complex<double> tmp_490;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_490 += KroneckerDelta(gO1,3 + j1)*ZU(gI1,3 + j1);
   }
   tmp_488 += tmp_490;
   std::complex<double> tmp_489;
   std::complex<double> tmp_491;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_491 += Conj(ZU(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
   }
   tmp_489 += tmp_491;
   result += (-0.6666666666666666*Sqr(g3)) * tmp_488 * tmp_489;
   std::complex<double> tmp_492;
   std::complex<double> tmp_494;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_494 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_492 += tmp_494;
   std::complex<double> tmp_493;
   std::complex<double> tmp_495;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_495 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_493 += tmp_495;
   result += (0.1*Sqr(g1)) * tmp_492 * tmp_493;
   std::complex<double> tmp_496;
   std::complex<double> tmp_498;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_498 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_496 += tmp_498;
   std::complex<double> tmp_497;
   std::complex<double> tmp_499;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_499 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_497 += tmp_499;
   result += (-0.4*Sqr(g1)) * tmp_496 * tmp_497;
   std::complex<double> tmp_500;
   std::complex<double> tmp_502;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_502 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_500 += tmp_502;
   std::complex<double> tmp_501;
   std::complex<double> tmp_503;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_503 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
   }
   tmp_501 += tmp_503;
   result += (0.1*Sqr(g1)) * tmp_500 * tmp_501;
   std::complex<double> tmp_504;
   std::complex<double> tmp_506;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_506 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_504 += tmp_506;
   std::complex<double> tmp_505;
   std::complex<double> tmp_507;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_507 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
   }
   tmp_505 += tmp_507;
   result += (-0.4*Sqr(g1)) * tmp_504 * tmp_505;
   std::complex<double> tmp_508;
   std::complex<double> tmp_510;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_510 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_508 += tmp_510;
   std::complex<double> tmp_509;
   std::complex<double> tmp_511;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_511 += KroneckerDelta(gO1,3 + j2)*ZU(gI1,3 + j2);
   }
   tmp_509 += tmp_511;
   result += (-0.13333333333333333*Sqr(g1)) * tmp_508 * tmp_509;
   std::complex<double> tmp_512;
   std::complex<double> tmp_514;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_514 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_512 += tmp_514;
   std::complex<double> tmp_513;
   std::complex<double> tmp_515;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_515 += KroneckerDelta(gO1,3 + j2)*ZU(gI1,3 + j2);
   }
   tmp_513 += tmp_515;
   result += (-0.6666666666666666*Sqr(g3)) * tmp_512 * tmp_513;
   std::complex<double> tmp_516;
   std::complex<double> tmp_518;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_519;
      std::complex<double> tmp_520;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_520 += KroneckerDelta(gO2,3 + j1)*Yu(j1,j2);
      }
      tmp_519 += tmp_520;
      tmp_518 += (Conj(ZU(gI2,j2))) * tmp_519;
   }
   tmp_516 += tmp_518;
   std::complex<double> tmp_517;
   std::complex<double> tmp_521;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_522;
      std::complex<double> tmp_523;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_523 += Conj(Yu(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_522 += tmp_523;
      tmp_521 += (ZU(gI1,j4)) * tmp_522;
   }
   tmp_517 += tmp_521;
   result += (-1) * tmp_516 * tmp_517;
   if (gO1 < 3) {
      std::complex<double> tmp_524;
      std::complex<double> tmp_525;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_525 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_524 += tmp_525;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_524;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_526;
      std::complex<double> tmp_527;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_527 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_526 += tmp_527;
      result += (-0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_526;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_528;
      std::complex<double> tmp_529;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_529 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
      }
      tmp_528 += tmp_529;
      result += (0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_528;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_530;
      std::complex<double> tmp_531;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_531 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_530 += tmp_531;
      result += (-0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_530;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_532;
      std::complex<double> tmp_533;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_533 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_532 += tmp_533;
      result += (-0.375*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_532;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_534;
      std::complex<double> tmp_535;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_535 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
      }
      tmp_534 += tmp_535;
      result += (0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_534;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_536;
      std::complex<double> tmp_538;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_538 += KroneckerDelta(gO2,3 + j1)*Yu(j1,gO1);
      }
      tmp_536 += tmp_538;
      std::complex<double> tmp_537;
      std::complex<double> tmp_539;
      for (unsigned j4 = 0; j4 < 3; ++j4) {
         std::complex<double> tmp_540;
         std::complex<double> tmp_541;
         for (unsigned j3 = 0; j3 < 3; ++j3) {
            tmp_541 += Conj(Yu(j3,j4))*Conj(ZU(gI2,3 + j3));
         }
         tmp_540 += tmp_541;
         tmp_539 += (ZU(gI1,j4)) * tmp_540;
      }
      tmp_537 += tmp_539;
      result += (-3) * tmp_536 * tmp_537;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_542;
      std::complex<double> tmp_543;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_543 += KroneckerDelta(gO1,3 + j1)*ZU(gI1,3 + j1);
      }
      tmp_542 += tmp_543;
      result += (0.03333333333333333*Conj(ZU(gI2,gO2))*Sqr(g1)) * tmp_542;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_544;
      std::complex<double> tmp_545;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_545 += KroneckerDelta(gO1,3 + j1)*ZU(gI1,3 + j1);
      }
      tmp_544 += tmp_545;
      result += (0.6666666666666666*Conj(ZU(gI2,gO2))*Sqr(g3)) * tmp_544;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_546;
      std::complex<double> tmp_547;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_547 += KroneckerDelta(gO1,3 + j2)*ZU(gI1,3 + j2);
      }
      tmp_546 += tmp_547;
      result += (0.03333333333333333*Conj(ZU(gI2,gO2))*Sqr(g1)) * tmp_546;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_548;
      std::complex<double> tmp_549;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_549 += KroneckerDelta(gO1,3 + j2)*ZU(gI1,3 + j2);
      }
      tmp_548 += tmp_549;
      result += (0.6666666666666666*Conj(ZU(gI2,gO2))*Sqr(g3)) * tmp_548;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_550;
      std::complex<double> tmp_552;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_553;
         std::complex<double> tmp_554;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_554 += Yu(j1,j2)*ZU(gI1,3 + j1);
         }
         tmp_553 += tmp_554;
         tmp_552 += (Conj(ZU(gI2,j2))) * tmp_553;
      }
      tmp_550 += tmp_552;
      std::complex<double> tmp_551;
      std::complex<double> tmp_555;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_555 += Conj(Yu(j3,gO2))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_551 += tmp_555;
      result += (-3) * tmp_550 * tmp_551;
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_556;
      std::complex<double> tmp_558;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_558 += Yu(j1,gO1)*ZU(gI1,3 + j1);
      }
      tmp_556 += tmp_558;
      std::complex<double> tmp_557;
      std::complex<double> tmp_559;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_559 += Conj(Yu(j3,gO2))*Conj(ZU(gI2,3 + j3));
      }
      tmp_557 += tmp_559;
      result += (-1) * tmp_556 * tmp_557;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_560;
      std::complex<double> tmp_561;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_561 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
      }
      tmp_560 += tmp_561;
      result += (0.03333333333333333*Sqr(g1)*ZU(gI1,gO1)) * tmp_560;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_562;
      std::complex<double> tmp_563;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_563 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
      }
      tmp_562 += tmp_563;
      result += (0.6666666666666666*Sqr(g3)*ZU(gI1,gO1)) * tmp_562;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_564;
      std::complex<double> tmp_565;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_565 += Conj(ZU(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
      }
      tmp_564 += tmp_565;
      result += (0.03333333333333333*Sqr(g1)*ZU(gI1,gO1)) * tmp_564;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_566;
      std::complex<double> tmp_567;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_567 += Conj(ZU(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
      }
      tmp_566 += tmp_567;
      result += (0.6666666666666666*Sqr(g3)*ZU(gI1,gO1)) * tmp_566;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.016666666666666666*Conj(ZU(gI2,gO2))*Sqr(g1)*ZU(gI1,gO1);
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.25*Conj(ZU(gI2,gO2))*Sqr(g2)*ZU(gI1,gO1);
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -1.3333333333333333*Conj(ZU(gI2,gO2))*Sqr(g3)*ZU(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuSuAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_568;
   std::complex<double> tmp_569;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_570;
      std::complex<double> tmp_571;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_571 += KroneckerDelta(gO2,3 + j1)*Yu(j1,j2);
      }
      tmp_570 += tmp_571;
      tmp_569 += (Conj(ZU(gI1,j2))) * tmp_570;
   }
   tmp_568 += tmp_569;
   result += (std::complex<double>(0.,-0.7071067811865475)*Conj(Mu)*ZA(gI2,0))
      * tmp_568;
   if (gO2 < 3) {
      std::complex<double> tmp_572;
      std::complex<double> tmp_573;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_573 += Conj(Yu(j1,gO2))*Conj(ZU(gI1,3 + j1));
      }
      tmp_572 += tmp_573;
      result += (std::complex<double>(0.,0.7071067811865475)*Mu*ZA(gI2,0)) *
         tmp_572;
   }
   std::complex<double> tmp_574;
   std::complex<double> tmp_575;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_576;
      std::complex<double> tmp_577;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_577 += KroneckerDelta(gO2,3 + j1)*TYu(j1,j2);
      }
      tmp_576 += tmp_577;
      tmp_575 += (Conj(ZU(gI1,j2))) * tmp_576;
   }
   tmp_574 += tmp_575;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,1)) * tmp_574
      ;
   if (gO2 < 3) {
      std::complex<double> tmp_578;
      std::complex<double> tmp_579;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_579 += Conj(ZU(gI1,3 + j1))*Conj(TYu(j1,gO2));
      }
      tmp_578 += tmp_579;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,1)) *
         tmp_578;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuSuhh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_580;
   std::complex<double> tmp_581;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_581 += Conj(ZU(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_580 += tmp_581;
   result += (-0.2*vd*Sqr(g1)*ZH(gI2,0)) * tmp_580;
   std::complex<double> tmp_582;
   std::complex<double> tmp_583;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_584;
      std::complex<double> tmp_585;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_585 += KroneckerDelta(gO2,3 + j1)*Yu(j1,j2);
      }
      tmp_584 += tmp_585;
      tmp_583 += (Conj(ZU(gI1,j2))) * tmp_584;
   }
   tmp_582 += tmp_583;
   result += (0.7071067811865475*Conj(Mu)*ZH(gI2,0)) * tmp_582;
   if (gO2 < 3) {
      result += 0.05*vd*Conj(ZU(gI1,gO2))*Sqr(g1)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      result += -0.25*vd*Conj(ZU(gI1,gO2))*Sqr(g2)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_586;
      std::complex<double> tmp_587;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_587 += Conj(Yu(j1,gO2))*Conj(ZU(gI1,3 + j1));
      }
      tmp_586 += tmp_587;
      result += (0.7071067811865475*Mu*ZH(gI2,0)) * tmp_586;
   }
   std::complex<double> tmp_588;
   std::complex<double> tmp_589;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_589 += Conj(ZU(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_588 += tmp_589;
   result += (0.2*vu*Sqr(g1)*ZH(gI2,1)) * tmp_588;
   std::complex<double> tmp_590;
   std::complex<double> tmp_591;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_592;
      std::complex<double> tmp_593;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_593 += KroneckerDelta(gO2,3 + j1)*TYu(j1,j2);
      }
      tmp_592 += tmp_593;
      tmp_591 += (Conj(ZU(gI1,j2))) * tmp_592;
   }
   tmp_590 += tmp_591;
   result += (-0.7071067811865475*ZH(gI2,1)) * tmp_590;
   std::complex<double> tmp_594;
   std::complex<double> tmp_595;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_596;
      std::complex<double> tmp_597;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_598;
         std::complex<double> tmp_599;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_599 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_598 += tmp_599;
         tmp_597 += (KroneckerDelta(gO2,3 + j2)) * tmp_598;
      }
      tmp_596 += tmp_597;
      tmp_595 += (Conj(ZU(gI1,3 + j3))) * tmp_596;
   }
   tmp_594 += tmp_595;
   result += (-(vu*ZH(gI2,1))) * tmp_594;
   if (gO2 < 3) {
      result += -0.05*vu*Conj(ZU(gI1,gO2))*Sqr(g1)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      result += 0.25*vu*Conj(ZU(gI1,gO2))*Sqr(g2)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_600;
      std::complex<double> tmp_601;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_601 += Conj(ZU(gI1,3 + j1))*Conj(TYu(j1,gO2));
      }
      tmp_600 += tmp_601;
      result += (-0.7071067811865475*ZH(gI2,1)) * tmp_600;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_602;
      std::complex<double> tmp_603;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_604;
         std::complex<double> tmp_605;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_605 += Conj(Yu(j1,gO2))*Yu(j1,j2);
         }
         tmp_604 += tmp_605;
         tmp_603 += (Conj(ZU(gI1,j2))) * tmp_604;
      }
      tmp_602 += tmp_603;
      result += (-(vu*ZH(gI2,1))) * tmp_602;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuGluFuPR(unsigned gO2, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_606;
   std::complex<double> tmp_607;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_607 += KroneckerDelta(gO2,3 + j1)*ZUR(gI2,j1);
   }
   tmp_606 += tmp_607;
   result += (1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_606;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuGluFuPL(unsigned gO1, unsigned , unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -1.4142135623730951*g3*PhaseGlu*Conj(ZUL(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuconjVWmSd(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 0.7071067811865475*g2*Conj(ZD(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVGSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 6) {
      result += g3*Conj(ZU(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVPSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_608;
   std::complex<double> tmp_609;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_609 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_608 += tmp_609;
   result += (0.5163977794943222*g1*Cos(ThetaW())) * tmp_608;
   if (gO2 < 3) {
      result += 0.12909944487358055*g1*Conj(ZU(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += 0.5*g2*Conj(ZU(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSuVZSu(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_610;
   std::complex<double> tmp_611;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_611 += Conj(ZU(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_610 += tmp_611;
   result += (-0.5163977794943222*g1*Sin(ThetaW())) * tmp_610;
   if (gO2 < 3) {
      result += 0.5*g2*Conj(ZU(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += -0.12909944487358055*g1*Conj(ZU(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeVZVZ(unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_612;
   std::complex<double> tmp_613;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_613 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_612 += tmp_613;
   result += (1.2*Sqr(g1)*Sqr(Sin(ThetaW()))) * tmp_612;
   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2)*Sqr(Cos(ThetaW()));
   }
   if (gO1 < 3) {
      result += -0.7745966692414834*g1*g2*Cos(ThetaW())*KroneckerDelta(gO1,
         gO2)*Sin(ThetaW());
   }
   if (gO1 < 3) {
      result += 0.3*KroneckerDelta(gO1,gO2)*Sqr(g1)*Sqr(Sin(ThetaW()));
   }

   return result;
}

double CLASSNAME::CpUSeconjUSeconjVWmVWm(unsigned gO1, unsigned gO2) const
{
   double result = 0.0;

   if (gO1 < 3) {
      result += 0.5*KroneckerDelta(gO1,gO2)*Sqr(g2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeAhAh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_614;
   std::complex<double> tmp_615;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_615 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_614 += tmp_615;
   result += (0.3*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0)) * tmp_614;
   std::complex<double> tmp_616;
   std::complex<double> tmp_617;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_618;
      std::complex<double> tmp_619;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_620;
         std::complex<double> tmp_621;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_621 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_620 += tmp_621;
         tmp_619 += (KroneckerDelta(gO2,3 + j2)) * tmp_620;
      }
      tmp_618 += tmp_619;
      tmp_617 += (KroneckerDelta(gO1,3 + j3)) * tmp_618;
   }
   tmp_616 += tmp_617;
   result += (-(ZA(gI1,0)*ZA(gI2,0))) * tmp_616;
   if (gO1 < 3) {
      result += -0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,0)*ZA(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,0)*ZA(gI2,0);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_622;
      std::complex<double> tmp_623;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_623 += Conj(Ye(j1,gO2))*Ye(j1,gO1);
      }
      tmp_622 += tmp_623;
      result += (-(ZA(gI1,0)*ZA(gI2,0))) * tmp_622;
   }
   std::complex<double> tmp_624;
   std::complex<double> tmp_625;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_625 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_624 += tmp_625;
   result += (-0.3*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1)) * tmp_624;
   if (gO1 < 3) {
      result += 0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZA(gI1,1)*ZA(gI2,1);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZA(gI1,1)*ZA(gI2,1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjHpmHpm(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_626;
   std::complex<double> tmp_627;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_627 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_626 += tmp_627;
   result += (0.3*Conj(ZP(gI2,0))*Sqr(g1)*ZP(gI1,0)) * tmp_626;
   std::complex<double> tmp_628;
   std::complex<double> tmp_629;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_630;
      std::complex<double> tmp_631;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_632;
         std::complex<double> tmp_633;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_633 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_632 += tmp_633;
         tmp_631 += (KroneckerDelta(gO2,3 + j2)) * tmp_632;
      }
      tmp_630 += tmp_631;
      tmp_629 += (KroneckerDelta(gO1,3 + j3)) * tmp_630;
   }
   tmp_628 += tmp_629;
   result += (-(Conj(ZP(gI2,0))*ZP(gI1,0))) * tmp_628;
   if (gO1 < 3) {
      result += -0.15*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1
         ,0);
   }
   if (gO1 < 3) {
      result += -0.25*Conj(ZP(gI2,0))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1
         ,0);
   }
   std::complex<double> tmp_634;
   std::complex<double> tmp_635;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_635 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_634 += tmp_635;
   result += (-0.3*Conj(ZP(gI2,1))*Sqr(g1)*ZP(gI1,1)) * tmp_634;
   if (gO1 < 3) {
      result += 0.15*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZP(gI1,
         1);
   }
   if (gO1 < 3) {
      result += 0.25*Conj(ZP(gI2,1))*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZP(gI1,
         1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSehhhh(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_636;
   std::complex<double> tmp_637;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_637 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_636 += tmp_637;
   result += (0.3*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0)) * tmp_636;
   std::complex<double> tmp_638;
   std::complex<double> tmp_639;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_640;
      std::complex<double> tmp_641;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_642;
         std::complex<double> tmp_643;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_643 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_642 += tmp_643;
         tmp_641 += (KroneckerDelta(gO2,3 + j2)) * tmp_642;
      }
      tmp_640 += tmp_641;
      tmp_639 += (KroneckerDelta(gO1,3 + j3)) * tmp_640;
   }
   tmp_638 += tmp_639;
   result += (-(ZH(gI1,0)*ZH(gI2,0))) * tmp_638;
   if (gO1 < 3) {
      result += -0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,0)*ZH(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,0)*ZH(gI2,0);
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_644;
      std::complex<double> tmp_645;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_645 += Conj(Ye(j1,gO2))*Ye(j1,gO1);
      }
      tmp_644 += tmp_645;
      result += (-(ZH(gI1,0)*ZH(gI2,0))) * tmp_644;
   }
   std::complex<double> tmp_646;
   std::complex<double> tmp_647;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_647 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_646 += tmp_647;
   result += (-0.3*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1)) * tmp_646;
   if (gO1 < 3) {
      result += 0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)*ZH(gI1,1)*ZH(gI2,1);
   }
   if (gO1 < 3) {
      result += -0.25*KroneckerDelta(gO1,gO2)*Sqr(g2)*ZH(gI1,1)*ZH(gI2,1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_648;
   std::complex<double> tmp_649;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_649 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_648 += tmp_649;
   result += (0.3*KroneckerDelta(gI1,gI2)*Sqr(g1)) * tmp_648;
   std::complex<double> tmp_650;
   std::complex<double> tmp_652;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_653;
      std::complex<double> tmp_654;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_654 += KroneckerDelta(gO2,3 + j1)*Ye(j1,j2);
      }
      tmp_653 += tmp_654;
      tmp_652 += (Conj(ZV(gI2,j2))) * tmp_653;
   }
   tmp_650 += tmp_652;
   std::complex<double> tmp_651;
   std::complex<double> tmp_655;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_656;
      std::complex<double> tmp_657;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_657 += Conj(Ye(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_656 += tmp_657;
      tmp_655 += (ZV(gI1,j4)) * tmp_656;
   }
   tmp_651 += tmp_655;
   result += (-1) * tmp_650 * tmp_651;
   if (gO1 < 3) {
      result += -0.15*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g1
         );
   }
   if (gO1 < 3) {
      result += 0.25*KroneckerDelta(gI1,gI2)*KroneckerDelta(gO1,gO2)*Sqr(g2)
         ;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.5*Conj(ZV(gI2,gO2))*Sqr(g2)*ZV(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSvHpm(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_658;
   std::complex<double> tmp_659;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_660;
      std::complex<double> tmp_661;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_661 += KroneckerDelta(gO2,3 + j1)*Ye(j1,j2);
      }
      tmp_660 += tmp_661;
      tmp_659 += (Conj(ZV(gI1,j2))) * tmp_660;
   }
   tmp_658 += tmp_659;
   result += (Conj(Mu)*Conj(ZP(gI2,1))) * tmp_658;
   std::complex<double> tmp_662;
   std::complex<double> tmp_663;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_664;
      std::complex<double> tmp_665;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_665 += KroneckerDelta(gO2,3 + j1)*TYe(j1,j2);
      }
      tmp_664 += tmp_665;
      tmp_663 += (Conj(ZV(gI1,j2))) * tmp_664;
   }
   tmp_662 += tmp_663;
   result += (Conj(ZP(gI2,0))) * tmp_662;
   if (gO2 < 3) {
      result += -0.35355339059327373*vd*Conj(ZP(gI2,0))*Conj(ZV(gI1,gO2))*
         Sqr(g2);
   }
   if (gO2 < 3) {
      result += -0.35355339059327373*vu*Conj(ZP(gI2,1))*Conj(ZV(gI1,gO2))*
         Sqr(g2);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_666;
      std::complex<double> tmp_667;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_668;
         std::complex<double> tmp_669;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_669 += Conj(Ye(j1,gO2))*Ye(j1,j2);
         }
         tmp_668 += tmp_669;
         tmp_667 += (Conj(ZV(gI1,j2))) * tmp_668;
      }
      tmp_666 += tmp_667;
      result += (0.7071067811865475*vd*Conj(ZP(gI2,0))) * tmp_666;
   }

   return result;
}

double CLASSNAME::CpconjUSeFvChaPR(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFvChaPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_670;
   std::complex<double> tmp_671;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_671 += KroneckerDelta(gO1,3 + j1)*Ye(j1,gI1);
   }
   tmp_670 += tmp_671;
   result += (Conj(UM(gI2,1))) * tmp_670;
   if (gI1 < 3) {
      result += -(g2*Conj(UM(gI2,0))*KroneckerDelta(gI1,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFeChiPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_672;
   std::complex<double> tmp_673;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_673 += KroneckerDelta(gO2,3 + j1)*ZER(gI1,j1);
   }
   tmp_672 += tmp_673;
   result += (-1.0954451150103321*g1*ZN(gI2,0)) * tmp_672;
   if (gO2 < 3) {
      std::complex<double> tmp_674;
      std::complex<double> tmp_675;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_675 += Conj(Ye(j1,gO2))*ZER(gI1,j1);
      }
      tmp_674 += tmp_675;
      result += (-ZN(gI2,2)) * tmp_674;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeFeChiPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_676;
   std::complex<double> tmp_677;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_678;
      std::complex<double> tmp_679;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_679 += KroneckerDelta(gO1,3 + j1)*Ye(j1,j2);
      }
      tmp_678 += tmp_679;
      tmp_677 += (Conj(ZEL(gI1,j2))) * tmp_678;
   }
   tmp_676 += tmp_677;
   result += (-Conj(ZN(gI2,2))) * tmp_676;
   if (gO1 < 3) {
      result += 0.5477225575051661*g1*Conj(ZEL(gI1,gO1))*Conj(ZN(gI2,0));
   }
   if (gO1 < 3) {
      result += 0.7071067811865475*g2*Conj(ZEL(gI1,gO1))*Conj(ZN(gI2,1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_680;
   std::complex<double> tmp_682;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_682 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_680 += tmp_682;
   std::complex<double> tmp_681;
   std::complex<double> tmp_683;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_683 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_681 += tmp_683;
   result += (-0.05*Sqr(g1)) * tmp_680 * tmp_681;
   std::complex<double> tmp_684;
   std::complex<double> tmp_686;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_686 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_684 += tmp_686;
   std::complex<double> tmp_685;
   std::complex<double> tmp_687;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_687 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_685 += tmp_687;
   result += (-0.1*Sqr(g1)) * tmp_684 * tmp_685;
   std::complex<double> tmp_688;
   std::complex<double> tmp_690;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_690 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_688 += tmp_690;
   std::complex<double> tmp_689;
   std::complex<double> tmp_691;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_691 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
   }
   tmp_689 += tmp_691;
   result += (-0.05*Sqr(g1)) * tmp_688 * tmp_689;
   std::complex<double> tmp_692;
   std::complex<double> tmp_694;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_694 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_692 += tmp_694;
   std::complex<double> tmp_693;
   std::complex<double> tmp_695;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_695 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
   }
   tmp_693 += tmp_695;
   result += (-0.1*Sqr(g1)) * tmp_692 * tmp_693;
   if (gO1 < 3) {
      std::complex<double> tmp_696;
      std::complex<double> tmp_697;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_697 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_696 += tmp_697;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_696;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_698;
      std::complex<double> tmp_699;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_699 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
      }
      tmp_698 += tmp_699;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_698;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_700;
      std::complex<double> tmp_701;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_701 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
      }
      tmp_700 += tmp_701;
      result += (0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_700;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_702;
      std::complex<double> tmp_703;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_703 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_702 += tmp_703;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_702;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_704;
      std::complex<double> tmp_705;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_705 += Conj(ZD(gI2,j2))*ZD(gI1,j2);
      }
      tmp_704 += tmp_705;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_704;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_706;
      std::complex<double> tmp_707;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_707 += Conj(ZD(gI2,3 + j2))*ZD(gI1,3 + j2);
      }
      tmp_706 += tmp_707;
      result += (0.05*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_706;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_708;
      std::complex<double> tmp_710;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_710 += KroneckerDelta(gO2,3 + j1)*Ye(j1,gO1);
      }
      tmp_708 += tmp_710;
      std::complex<double> tmp_709;
      std::complex<double> tmp_711;
      for (unsigned j4 = 0; j4 < 3; ++j4) {
         std::complex<double> tmp_712;
         std::complex<double> tmp_713;
         for (unsigned j3 = 0; j3 < 3; ++j3) {
            tmp_713 += Conj(Yd(j3,j4))*Conj(ZD(gI2,3 + j3));
         }
         tmp_712 += tmp_713;
         tmp_711 += (ZD(gI1,j4)) * tmp_712;
      }
      tmp_709 += tmp_711;
      result += (-1) * tmp_708 * tmp_709;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_714;
      std::complex<double> tmp_716;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_717;
         std::complex<double> tmp_718;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_718 += Yd(j1,j2)*ZD(gI1,3 + j1);
         }
         tmp_717 += tmp_718;
         tmp_716 += (Conj(ZD(gI2,j2))) * tmp_717;
      }
      tmp_714 += tmp_716;
      std::complex<double> tmp_715;
      std::complex<double> tmp_719;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_719 += Conj(Ye(j3,gO2))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_715 += tmp_719;
      result += (-1) * tmp_714 * tmp_715;
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_720;
   std::complex<double> tmp_722;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_722 += KroneckerDelta(gO1,3 + j1)*ZE(gI1,3 + j1);
   }
   tmp_720 += tmp_722;
   std::complex<double> tmp_721;
   std::complex<double> tmp_723;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_723 += Conj(ZE(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
   }
   tmp_721 += tmp_723;
   result += (-0.3*Sqr(g1)) * tmp_720 * tmp_721;
   std::complex<double> tmp_724;
   std::complex<double> tmp_726;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_726 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_724 += tmp_726;
   std::complex<double> tmp_725;
   std::complex<double> tmp_727;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_727 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_725 += tmp_727;
   result += (0.15*Sqr(g1)) * tmp_724 * tmp_725;
   std::complex<double> tmp_728;
   std::complex<double> tmp_730;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_730 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_728 += tmp_730;
   std::complex<double> tmp_729;
   std::complex<double> tmp_731;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_731 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_729 += tmp_731;
   result += (-0.3*Sqr(g1)) * tmp_728 * tmp_729;
   std::complex<double> tmp_732;
   std::complex<double> tmp_734;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_734 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_732 += tmp_734;
   std::complex<double> tmp_733;
   std::complex<double> tmp_735;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_735 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
   }
   tmp_733 += tmp_735;
   result += (0.15*Sqr(g1)) * tmp_732 * tmp_733;
   std::complex<double> tmp_736;
   std::complex<double> tmp_738;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_738 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_736 += tmp_738;
   std::complex<double> tmp_737;
   std::complex<double> tmp_739;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_739 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
   }
   tmp_737 += tmp_739;
   result += (-0.3*Sqr(g1)) * tmp_736 * tmp_737;
   std::complex<double> tmp_740;
   std::complex<double> tmp_742;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_742 += Conj(ZE(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_740 += tmp_742;
   std::complex<double> tmp_741;
   std::complex<double> tmp_743;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_743 += KroneckerDelta(gO1,3 + j2)*ZE(gI1,3 + j2);
   }
   tmp_741 += tmp_743;
   result += (-0.3*Sqr(g1)) * tmp_740 * tmp_741;
   std::complex<double> tmp_744;
   std::complex<double> tmp_746;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_747;
      std::complex<double> tmp_748;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_748 += KroneckerDelta(gO2,3 + j1)*Ye(j1,j2);
      }
      tmp_747 += tmp_748;
      tmp_746 += (Conj(ZE(gI2,j2))) * tmp_747;
   }
   tmp_744 += tmp_746;
   std::complex<double> tmp_745;
   std::complex<double> tmp_749;
   for (unsigned j4 = 0; j4 < 3; ++j4) {
      std::complex<double> tmp_750;
      std::complex<double> tmp_751;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_751 += Conj(Ye(j3,j4))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_750 += tmp_751;
      tmp_749 += (ZE(gI1,j4)) * tmp_750;
   }
   tmp_745 += tmp_749;
   result += (-1) * tmp_744 * tmp_745;
   if (gO1 < 3) {
      std::complex<double> tmp_752;
      std::complex<double> tmp_753;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_753 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_752 += tmp_753;
      result += (-0.075*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_752;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_754;
      std::complex<double> tmp_755;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_755 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
      }
      tmp_754 += tmp_755;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_754;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_756;
      std::complex<double> tmp_757;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_757 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
      }
      tmp_756 += tmp_757;
      result += (0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_756;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_758;
      std::complex<double> tmp_759;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_759 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_758 += tmp_759;
      result += (-0.075*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_758;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_760;
      std::complex<double> tmp_761;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_761 += Conj(ZE(gI2,j2))*ZE(gI1,j2);
      }
      tmp_760 += tmp_761;
      result += (-0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_760;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_762;
      std::complex<double> tmp_763;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_763 += Conj(ZE(gI2,3 + j2))*ZE(gI1,3 + j2);
      }
      tmp_762 += tmp_763;
      result += (0.15*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_762;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_764;
      std::complex<double> tmp_766;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_766 += KroneckerDelta(gO2,3 + j1)*Ye(j1,gO1);
      }
      tmp_764 += tmp_766;
      std::complex<double> tmp_765;
      std::complex<double> tmp_767;
      for (unsigned j4 = 0; j4 < 3; ++j4) {
         std::complex<double> tmp_768;
         std::complex<double> tmp_769;
         for (unsigned j3 = 0; j3 < 3; ++j3) {
            tmp_769 += Conj(Ye(j3,j4))*Conj(ZE(gI2,3 + j3));
         }
         tmp_768 += tmp_769;
         tmp_767 += (ZE(gI1,j4)) * tmp_768;
      }
      tmp_765 += tmp_767;
      result += (-1) * tmp_764 * tmp_765;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_770;
      std::complex<double> tmp_771;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_771 += KroneckerDelta(gO1,3 + j1)*ZE(gI1,3 + j1);
      }
      tmp_770 += tmp_771;
      result += (0.15*Conj(ZE(gI2,gO2))*Sqr(g1)) * tmp_770;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_772;
      std::complex<double> tmp_773;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_773 += KroneckerDelta(gO1,3 + j2)*ZE(gI1,3 + j2);
      }
      tmp_772 += tmp_773;
      result += (0.15*Conj(ZE(gI2,gO2))*Sqr(g1)) * tmp_772;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_774;
      std::complex<double> tmp_776;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_777;
         std::complex<double> tmp_778;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_778 += Ye(j1,j2)*ZE(gI1,3 + j1);
         }
         tmp_777 += tmp_778;
         tmp_776 += (Conj(ZE(gI2,j2))) * tmp_777;
      }
      tmp_774 += tmp_776;
      std::complex<double> tmp_775;
      std::complex<double> tmp_779;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_779 += Conj(Ye(j3,gO2))*KroneckerDelta(gO1,3 + j3);
      }
      tmp_775 += tmp_779;
      result += (-1) * tmp_774 * tmp_775;
   }
   if (gO1 < 3 && gO2 < 3) {
      std::complex<double> tmp_780;
      std::complex<double> tmp_782;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_782 += Ye(j1,gO1)*ZE(gI1,3 + j1);
      }
      tmp_780 += tmp_782;
      std::complex<double> tmp_781;
      std::complex<double> tmp_783;
      for (unsigned j3 = 0; j3 < 3; ++j3) {
         tmp_783 += Conj(Ye(j3,gO2))*Conj(ZE(gI2,3 + j3));
      }
      tmp_781 += tmp_783;
      result += (-1) * tmp_780 * tmp_781;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_784;
      std::complex<double> tmp_785;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_785 += Conj(ZE(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
      }
      tmp_784 += tmp_785;
      result += (0.15*Sqr(g1)*ZE(gI1,gO1)) * tmp_784;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_786;
      std::complex<double> tmp_787;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_787 += Conj(ZE(gI2,3 + j2))*KroneckerDelta(gO2,3 + j2);
      }
      tmp_786 += tmp_787;
      result += (0.15*Sqr(g1)*ZE(gI1,gO1)) * tmp_786;
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.15*Conj(ZE(gI2,gO2))*Sqr(g1)*ZE(gI1,gO1);
   }
   if (gO1 < 3 && gO2 < 3) {
      result += -0.25*Conj(ZE(gI2,gO2))*Sqr(g2)*ZE(gI1,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpUSeconjUSeconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_788;
   std::complex<double> tmp_790;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_790 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_788 += tmp_790;
   std::complex<double> tmp_789;
   std::complex<double> tmp_791;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_791 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_789 += tmp_791;
   result += (-0.05*Sqr(g1)) * tmp_788 * tmp_789;
   std::complex<double> tmp_792;
   std::complex<double> tmp_794;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_794 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_792 += tmp_794;
   std::complex<double> tmp_793;
   std::complex<double> tmp_795;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_795 += KroneckerDelta(gO1,3 + j2)*KroneckerDelta(gO2,3 + j2);
   }
   tmp_793 += tmp_795;
   result += (0.2*Sqr(g1)) * tmp_792 * tmp_793;
   std::complex<double> tmp_796;
   std::complex<double> tmp_798;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_798 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_796 += tmp_798;
   std::complex<double> tmp_797;
   std::complex<double> tmp_799;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_799 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
   }
   tmp_797 += tmp_799;
   result += (-0.05*Sqr(g1)) * tmp_796 * tmp_797;
   std::complex<double> tmp_800;
   std::complex<double> tmp_802;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_802 += KroneckerDelta(gO1,3 + j1)*KroneckerDelta(gO2,3 + j1);
   }
   tmp_800 += tmp_802;
   std::complex<double> tmp_801;
   std::complex<double> tmp_803;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      tmp_803 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
   }
   tmp_801 += tmp_803;
   result += (0.2*Sqr(g1)) * tmp_800 * tmp_801;
   if (gO1 < 3) {
      std::complex<double> tmp_804;
      std::complex<double> tmp_805;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_805 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_804 += tmp_805;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_804;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_806;
      std::complex<double> tmp_807;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_807 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
      }
      tmp_806 += tmp_807;
      result += (0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_806;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_808;
      std::complex<double> tmp_809;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_809 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
      }
      tmp_808 += tmp_809;
      result += (-0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_808;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_810;
      std::complex<double> tmp_811;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_811 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_810 += tmp_811;
      result += (0.025*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_810;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_812;
      std::complex<double> tmp_813;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_813 += Conj(ZU(gI2,j2))*ZU(gI1,j2);
      }
      tmp_812 += tmp_813;
      result += (0.125*KroneckerDelta(gO1,gO2)*Sqr(g2)) * tmp_812;
   }
   if (gO1 < 3) {
      std::complex<double> tmp_814;
      std::complex<double> tmp_815;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_815 += Conj(ZU(gI2,3 + j2))*ZU(gI1,3 + j2);
      }
      tmp_814 += tmp_815;
      result += (-0.1*KroneckerDelta(gO1,gO2)*Sqr(g1)) * tmp_814;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSeAh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_816;
   std::complex<double> tmp_817;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_818;
      std::complex<double> tmp_819;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_819 += KroneckerDelta(gO2,3 + j1)*TYe(j1,j2);
      }
      tmp_818 += tmp_819;
      tmp_817 += (Conj(ZE(gI1,j2))) * tmp_818;
   }
   tmp_816 += tmp_817;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) * tmp_816
      ;
   if (gO2 < 3) {
      std::complex<double> tmp_820;
      std::complex<double> tmp_821;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_821 += Conj(ZE(gI1,3 + j1))*Conj(TYe(j1,gO2));
      }
      tmp_820 += tmp_821;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) *
         tmp_820;
   }
   std::complex<double> tmp_822;
   std::complex<double> tmp_823;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_824;
      std::complex<double> tmp_825;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_825 += KroneckerDelta(gO2,3 + j1)*Ye(j1,j2);
      }
      tmp_824 += tmp_825;
      tmp_823 += (Conj(ZE(gI1,j2))) * tmp_824;
   }
   tmp_822 += tmp_823;
   result += (std::complex<double>(0.,-0.7071067811865475)*Conj(Mu)*ZA(gI2,1))
      * tmp_822;
   if (gO2 < 3) {
      std::complex<double> tmp_826;
      std::complex<double> tmp_827;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_827 += Conj(Ye(j1,gO2))*Conj(ZE(gI1,3 + j1));
      }
      tmp_826 += tmp_827;
      result += (std::complex<double>(0.,0.7071067811865475)*Mu*ZA(gI2,1)) *
         tmp_826;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeSehh(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_828;
   std::complex<double> tmp_829;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_829 += Conj(ZE(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_828 += tmp_829;
   result += (0.3*vd*Sqr(g1)*ZH(gI2,0)) * tmp_828;
   std::complex<double> tmp_830;
   std::complex<double> tmp_831;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_832;
      std::complex<double> tmp_833;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_833 += KroneckerDelta(gO2,3 + j1)*TYe(j1,j2);
      }
      tmp_832 += tmp_833;
      tmp_831 += (Conj(ZE(gI1,j2))) * tmp_832;
   }
   tmp_830 += tmp_831;
   result += (-0.7071067811865475*ZH(gI2,0)) * tmp_830;
   std::complex<double> tmp_834;
   std::complex<double> tmp_835;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_836;
      std::complex<double> tmp_837;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_838;
         std::complex<double> tmp_839;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_839 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_838 += tmp_839;
         tmp_837 += (KroneckerDelta(gO2,3 + j2)) * tmp_838;
      }
      tmp_836 += tmp_837;
      tmp_835 += (Conj(ZE(gI1,3 + j3))) * tmp_836;
   }
   tmp_834 += tmp_835;
   result += (-(vd*ZH(gI2,0))) * tmp_834;
   if (gO2 < 3) {
      result += -0.15*vd*Conj(ZE(gI1,gO2))*Sqr(g1)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      result += 0.25*vd*Conj(ZE(gI1,gO2))*Sqr(g2)*ZH(gI2,0);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_840;
      std::complex<double> tmp_841;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_841 += Conj(ZE(gI1,3 + j1))*Conj(TYe(j1,gO2));
      }
      tmp_840 += tmp_841;
      result += (-0.7071067811865475*ZH(gI2,0)) * tmp_840;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_842;
      std::complex<double> tmp_843;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_844;
         std::complex<double> tmp_845;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_845 += Conj(Ye(j1,gO2))*Ye(j1,j2);
         }
         tmp_844 += tmp_845;
         tmp_843 += (Conj(ZE(gI1,j2))) * tmp_844;
      }
      tmp_842 += tmp_843;
      result += (-(vd*ZH(gI2,0))) * tmp_842;
   }
   std::complex<double> tmp_846;
   std::complex<double> tmp_847;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_847 += Conj(ZE(gI1,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_846 += tmp_847;
   result += (-0.3*vu*Sqr(g1)*ZH(gI2,1)) * tmp_846;
   std::complex<double> tmp_848;
   std::complex<double> tmp_849;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_850;
      std::complex<double> tmp_851;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_851 += KroneckerDelta(gO2,3 + j1)*Ye(j1,j2);
      }
      tmp_850 += tmp_851;
      tmp_849 += (Conj(ZE(gI1,j2))) * tmp_850;
   }
   tmp_848 += tmp_849;
   result += (0.7071067811865475*Conj(Mu)*ZH(gI2,1)) * tmp_848;
   if (gO2 < 3) {
      result += 0.15*vu*Conj(ZE(gI1,gO2))*Sqr(g1)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      result += -0.25*vu*Conj(ZE(gI1,gO2))*Sqr(g2)*ZH(gI2,1);
   }
   if (gO2 < 3) {
      std::complex<double> tmp_852;
      std::complex<double> tmp_853;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_853 += Conj(Ye(j1,gO2))*Conj(ZE(gI1,3 + j1));
      }
      tmp_852 += tmp_853;
      result += (0.7071067811865475*Mu*ZH(gI2,1)) * tmp_852;
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeVWmSv(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 0.7071067811865475*g2*Conj(ZV(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeVPSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_854;
   std::complex<double> tmp_855;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_855 += Conj(ZE(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_854 += tmp_855;
   result += (-0.7745966692414834*g1*Cos(ThetaW())) * tmp_854;
   if (gO2 < 3) {
      result += -0.3872983346207417*g1*Conj(ZE(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += -0.5*g2*Conj(ZE(gI2,gO2))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpconjUSeVZSe(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_856;
   std::complex<double> tmp_857;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_857 += Conj(ZE(gI2,3 + j1))*KroneckerDelta(gO2,3 + j1);
   }
   tmp_856 += tmp_857;
   result += (0.7745966692414834*g1*Sin(ThetaW())) * tmp_856;
   if (gO2 < 3) {
      result += -0.5*g2*Conj(ZE(gI2,gO2))*Cos(ThetaW());
   }
   if (gO2 < 3) {
      result += 0.3872983346207417*g1*Conj(ZE(gI2,gO2))*Sin(ThetaW());
   }

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

std::complex<double> CLASSNAME::CpUhhUhhconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*KroneckerDelta(gI1,gI2)*(3*Sqr(g1) + 5*Sqr(g2
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSvSv(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(vd*KroneckerDelta(0,gO2) - vu*KroneckerDelta(1,gO2))*
      KroneckerDelta(gI1,gI2)*(3*Sqr(g1) + 5*Sqr(g2));

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_858;
   std::complex<double> tmp_859;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_860;
      std::complex<double> tmp_861;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_861 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_860 += tmp_861;
      tmp_859 += (ZDL(gI1,j2)) * tmp_860;
   }
   tmp_858 += tmp_859;
   result += (-0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_858;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_862;
   std::complex<double> tmp_863;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_864;
      std::complex<double> tmp_865;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_865 += Conj(ZDR(gI1,j1))*Yd(j1,j2);
      }
      tmp_864 += tmp_865;
      tmp_863 += (Conj(ZDL(gI2,j2))) * tmp_864;
   }
   tmp_862 += tmp_863;
   result += (-0.7071067811865475*KroneckerDelta(0,gO1)) * tmp_862;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_866;
   std::complex<double> tmp_867;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_868;
      std::complex<double> tmp_869;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_869 += Conj(Ye(j1,j2))*ZER(gI2,j1);
      }
      tmp_868 += tmp_869;
      tmp_867 += (ZEL(gI1,j2)) * tmp_868;
   }
   tmp_866 += tmp_867;
   result += (-0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_866;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_870;
   std::complex<double> tmp_871;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_872;
      std::complex<double> tmp_873;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_873 += Conj(ZER(gI1,j1))*Ye(j1,j2);
      }
      tmp_872 += tmp_873;
      tmp_871 += (Conj(ZEL(gI2,j2))) * tmp_872;
   }
   tmp_870 += tmp_871;
   result += (-0.7071067811865475*KroneckerDelta(0,gO1)) * tmp_870;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_874;
   std::complex<double> tmp_875;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_876;
      std::complex<double> tmp_877;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_877 += Conj(Yu(j1,j2))*ZUR(gI2,j1);
      }
      tmp_876 += tmp_877;
      tmp_875 += (ZUL(gI1,j2)) * tmp_876;
   }
   tmp_874 += tmp_875;
   result += (-0.7071067811865475*KroneckerDelta(1,gO2)) * tmp_874;

   return result;
}

std::complex<double> CLASSNAME::CpUhhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_878;
   std::complex<double> tmp_879;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_880;
      std::complex<double> tmp_881;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_881 += Conj(ZUR(gI1,j1))*Yu(j1,j2);
      }
      tmp_880 += tmp_881;
      tmp_879 += (Conj(ZUL(gI2,j2))) * tmp_880;
   }
   tmp_878 += tmp_879;
   result += (-0.7071067811865475*KroneckerDelta(1,gO1)) * tmp_878;

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

std::complex<double> CLASSNAME::CpUhhUhhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_882;
   std::complex<double> tmp_883;
   std::complex<double> tmp_884;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_884 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_883 += tmp_884;
   tmp_882 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_883;
   std::complex<double> tmp_885;
   std::complex<double> tmp_886;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_886 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_885 += tmp_886;
   tmp_882 += (std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_885;
   std::complex<double> tmp_887;
   std::complex<double> tmp_888;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_888 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_887 += tmp_888;
   tmp_882 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_887;
   std::complex<double> tmp_889;
   std::complex<double> tmp_890;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_890 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_889 += tmp_890;
   tmp_882 += (std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_889;
   std::complex<double> tmp_891;
   std::complex<double> tmp_892;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_892 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_891 += tmp_892;
   tmp_882 += (std::complex<double>(0,0.1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*Sqr(g1)) * tmp_891;
   std::complex<double> tmp_893;
   std::complex<double> tmp_894;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_894 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_893 += tmp_894;
   tmp_882 += (std::complex<double>(0,-0.1)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_893;
   std::complex<double> tmp_895;
   std::complex<double> tmp_896;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_897;
      std::complex<double> tmp_898;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_899;
         std::complex<double> tmp_900;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_900 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_899 += tmp_900;
         tmp_898 += (ZD(gI1,3 + j2)) * tmp_899;
      }
      tmp_897 += tmp_898;
      tmp_896 += (Conj(ZD(gI2,3 + j3))) * tmp_897;
   }
   tmp_895 += tmp_896;
   tmp_882 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2)) * tmp_895;
   std::complex<double> tmp_901;
   std::complex<double> tmp_902;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_903;
      std::complex<double> tmp_904;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_905;
         std::complex<double> tmp_906;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_906 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_905 += tmp_906;
         tmp_904 += (Conj(ZD(gI2,j2))) * tmp_905;
      }
      tmp_903 += tmp_904;
      tmp_902 += (ZD(gI1,j3)) * tmp_903;
   }
   tmp_901 += tmp_902;
   tmp_882 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2)) * tmp_901;
   result += (std::complex<double>(0,-1)) * tmp_882;

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_907;
   std::complex<double> tmp_908;
   std::complex<double> tmp_909;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_909 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_908 += tmp_909;
   tmp_907 += (std::complex<double>(0,-0.15)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_908;
   std::complex<double> tmp_910;
   std::complex<double> tmp_911;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_911 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_910 += tmp_911;
   tmp_907 += (std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_910;
   std::complex<double> tmp_912;
   std::complex<double> tmp_913;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_913 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_912 += tmp_913;
   tmp_907 += (std::complex<double>(0,0.15)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_912;
   std::complex<double> tmp_914;
   std::complex<double> tmp_915;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_915 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_914 += tmp_915;
   tmp_907 += (std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_914;
   std::complex<double> tmp_916;
   std::complex<double> tmp_917;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_917 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_916 += tmp_917;
   tmp_907 += (std::complex<double>(0,0.3)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)*Sqr(g1)) * tmp_916;
   std::complex<double> tmp_918;
   std::complex<double> tmp_919;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_919 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_918 += tmp_919;
   tmp_907 += (std::complex<double>(0,-0.3)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_918;
   std::complex<double> tmp_920;
   std::complex<double> tmp_921;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_922;
      std::complex<double> tmp_923;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_924;
         std::complex<double> tmp_925;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_925 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_924 += tmp_925;
         tmp_923 += (ZE(gI1,3 + j2)) * tmp_924;
      }
      tmp_922 += tmp_923;
      tmp_921 += (Conj(ZE(gI2,3 + j3))) * tmp_922;
   }
   tmp_920 += tmp_921;
   tmp_907 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2)) * tmp_920;
   std::complex<double> tmp_926;
   std::complex<double> tmp_927;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_928;
      std::complex<double> tmp_929;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_930;
         std::complex<double> tmp_931;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_931 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_930 += tmp_931;
         tmp_929 += (Conj(ZE(gI2,j2))) * tmp_930;
      }
      tmp_928 += tmp_929;
      tmp_927 += (ZE(gI1,j3)) * tmp_928;
   }
   tmp_926 += tmp_927;
   tmp_907 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta(
      0,gO2)) * tmp_926;
   result += (std::complex<double>(0,-1)) * tmp_907;

   return result;
}

std::complex<double> CLASSNAME::CpUhhUhhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_932;
   std::complex<double> tmp_933;
   std::complex<double> tmp_934;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_934 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_933 += tmp_934;
   tmp_932 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_933;
   std::complex<double> tmp_935;
   std::complex<double> tmp_936;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_936 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_935 += tmp_936;
   tmp_932 += (std::complex<double>(0,-0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_935;
   std::complex<double> tmp_937;
   std::complex<double> tmp_938;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_938 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_937 += tmp_938;
   tmp_932 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_937;
   std::complex<double> tmp_939;
   std::complex<double> tmp_940;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_940 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_939 += tmp_940;
   tmp_932 += (std::complex<double>(0,0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_939;
   std::complex<double> tmp_941;
   std::complex<double> tmp_942;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_942 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_941 += tmp_942;
   tmp_932 += (std::complex<double>(0,-0.2)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_941;
   std::complex<double> tmp_943;
   std::complex<double> tmp_944;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_944 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_943 += tmp_944;
   tmp_932 += (std::complex<double>(0,0.2)*KroneckerDelta(1,gO1)*KroneckerDelta
      (1,gO2)*Sqr(g1)) * tmp_943;
   std::complex<double> tmp_945;
   std::complex<double> tmp_946;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_947;
      std::complex<double> tmp_948;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_949;
         std::complex<double> tmp_950;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_950 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_949 += tmp_950;
         tmp_948 += (ZU(gI1,3 + j2)) * tmp_949;
      }
      tmp_947 += tmp_948;
      tmp_946 += (Conj(ZU(gI2,3 + j3))) * tmp_947;
   }
   tmp_945 += tmp_946;
   tmp_932 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta(
      1,gO2)) * tmp_945;
   std::complex<double> tmp_951;
   std::complex<double> tmp_952;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_953;
      std::complex<double> tmp_954;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_955;
         std::complex<double> tmp_956;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_956 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_955 += tmp_956;
         tmp_954 += (Conj(ZU(gI2,j2))) * tmp_955;
      }
      tmp_953 += tmp_954;
      tmp_952 += (ZU(gI1,j3)) * tmp_953;
   }
   tmp_951 += tmp_952;
   tmp_932 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta(
      1,gO2)) * tmp_951;
   result += (std::complex<double>(0,-1)) * tmp_932;

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_957;
   std::complex<double> tmp_958;
   std::complex<double> tmp_959;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_959 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_958 += tmp_959;
   tmp_957 += (std::complex<double>(0,0.05)*vd*KroneckerDelta(0,gO2)*Sqr(g1)) *
      tmp_958;
   std::complex<double> tmp_960;
   std::complex<double> tmp_961;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_961 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_960 += tmp_961;
   tmp_957 += (std::complex<double>(0,0.25)*vd*KroneckerDelta(0,gO2)*Sqr(g2)) *
      tmp_960;
   std::complex<double> tmp_962;
   std::complex<double> tmp_963;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_963 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_962 += tmp_963;
   tmp_957 += (std::complex<double>(0,-0.05)*vu*KroneckerDelta(1,gO2)*Sqr(g1))
      * tmp_962;
   std::complex<double> tmp_964;
   std::complex<double> tmp_965;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_965 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_964 += tmp_965;
   tmp_957 += (std::complex<double>(0,-0.25)*vu*KroneckerDelta(1,gO2)*Sqr(g2))
      * tmp_964;
   std::complex<double> tmp_966;
   std::complex<double> tmp_967;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_967 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_966 += tmp_967;
   tmp_957 += (std::complex<double>(0,0.1)*vd*KroneckerDelta(0,gO2)*Sqr(g1)) *
      tmp_966;
   std::complex<double> tmp_968;
   std::complex<double> tmp_969;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_969 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_968 += tmp_969;
   tmp_957 += (std::complex<double>(0,-0.1)*vu*KroneckerDelta(1,gO2)*Sqr(g1)) *
      tmp_968;
   std::complex<double> tmp_970;
   std::complex<double> tmp_971;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_972;
      std::complex<double> tmp_973;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_973 += Yd(j1,j2)*ZD(gI1,3 + j1);
      }
      tmp_972 += tmp_973;
      tmp_971 += (Conj(ZD(gI2,j2))) * tmp_972;
   }
   tmp_970 += tmp_971;
   tmp_957 += (std::complex<double>(0.,0.7071067811865475)*Conj(Mu)*
      KroneckerDelta(1,gO2)) * tmp_970;
   std::complex<double> tmp_974;
   std::complex<double> tmp_975;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_976;
      std::complex<double> tmp_977;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_977 += ZD(gI1,3 + j1)*TYd(j1,j2);
      }
      tmp_976 += tmp_977;
      tmp_975 += (Conj(ZD(gI2,j2))) * tmp_976;
   }
   tmp_974 += tmp_975;
   tmp_957 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,
      gO2)) * tmp_974;
   std::complex<double> tmp_978;
   std::complex<double> tmp_979;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_980;
      std::complex<double> tmp_981;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_981 += Conj(Yd(j1,j2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_980 += tmp_981;
      tmp_979 += (ZD(gI1,j2)) * tmp_980;
   }
   tmp_978 += tmp_979;
   tmp_957 += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(1,gO2
      )*Mu) * tmp_978;
   std::complex<double> tmp_982;
   std::complex<double> tmp_983;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_984;
      std::complex<double> tmp_985;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_985 += Conj(ZD(gI2,3 + j1))*Conj(TYd(j1,j2));
      }
      tmp_984 += tmp_985;
      tmp_983 += (ZD(gI1,j2)) * tmp_984;
   }
   tmp_982 += tmp_983;
   tmp_957 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,
      gO2)) * tmp_982;
   std::complex<double> tmp_986;
   std::complex<double> tmp_987;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_988;
      std::complex<double> tmp_989;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_990;
         std::complex<double> tmp_991;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_991 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_990 += tmp_991;
         tmp_989 += (ZD(gI1,3 + j2)) * tmp_990;
      }
      tmp_988 += tmp_989;
      tmp_987 += (Conj(ZD(gI2,3 + j3))) * tmp_988;
   }
   tmp_986 += tmp_987;
   tmp_957 += (std::complex<double>(0,-1)*vd*KroneckerDelta(0,gO2)) * tmp_986;
   std::complex<double> tmp_992;
   std::complex<double> tmp_993;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_994;
      std::complex<double> tmp_995;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_996;
         std::complex<double> tmp_997;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_997 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_996 += tmp_997;
         tmp_995 += (Conj(ZD(gI2,j2))) * tmp_996;
      }
      tmp_994 += tmp_995;
      tmp_993 += (ZD(gI1,j3)) * tmp_994;
   }
   tmp_992 += tmp_993;
   tmp_957 += (std::complex<double>(0,-1)*vd*KroneckerDelta(0,gO2)) * tmp_992;
   result += (std::complex<double>(0,-1)) * tmp_957;

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_998;
   std::complex<double> tmp_999;
   std::complex<double> tmp_1000;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1000 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_999 += tmp_1000;
   tmp_998 += (std::complex<double>(0,-0.15)*vd*KroneckerDelta(0,gO2)*Sqr(g1))
      * tmp_999;
   std::complex<double> tmp_1001;
   std::complex<double> tmp_1002;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1002 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1001 += tmp_1002;
   tmp_998 += (std::complex<double>(0,0.25)*vd*KroneckerDelta(0,gO2)*Sqr(g2)) *
      tmp_1001;
   std::complex<double> tmp_1003;
   std::complex<double> tmp_1004;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1004 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1003 += tmp_1004;
   tmp_998 += (std::complex<double>(0,0.15)*vu*KroneckerDelta(1,gO2)*Sqr(g1)) *
      tmp_1003;
   std::complex<double> tmp_1005;
   std::complex<double> tmp_1006;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1006 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1005 += tmp_1006;
   tmp_998 += (std::complex<double>(0,-0.25)*vu*KroneckerDelta(1,gO2)*Sqr(g2))
      * tmp_1005;
   std::complex<double> tmp_1007;
   std::complex<double> tmp_1008;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1008 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1007 += tmp_1008;
   tmp_998 += (std::complex<double>(0,0.3)*vd*KroneckerDelta(0,gO2)*Sqr(g1)) *
      tmp_1007;
   std::complex<double> tmp_1009;
   std::complex<double> tmp_1010;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1010 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1009 += tmp_1010;
   tmp_998 += (std::complex<double>(0,-0.3)*vu*KroneckerDelta(1,gO2)*Sqr(g1)) *
      tmp_1009;
   std::complex<double> tmp_1011;
   std::complex<double> tmp_1012;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1013;
      std::complex<double> tmp_1014;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1014 += Ye(j1,j2)*ZE(gI1,3 + j1);
      }
      tmp_1013 += tmp_1014;
      tmp_1012 += (Conj(ZE(gI2,j2))) * tmp_1013;
   }
   tmp_1011 += tmp_1012;
   tmp_998 += (std::complex<double>(0.,0.7071067811865475)*Conj(Mu)*
      KroneckerDelta(1,gO2)) * tmp_1011;
   std::complex<double> tmp_1015;
   std::complex<double> tmp_1016;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1017;
      std::complex<double> tmp_1018;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1018 += ZE(gI1,3 + j1)*TYe(j1,j2);
      }
      tmp_1017 += tmp_1018;
      tmp_1016 += (Conj(ZE(gI2,j2))) * tmp_1017;
   }
   tmp_1015 += tmp_1016;
   tmp_998 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,
      gO2)) * tmp_1015;
   std::complex<double> tmp_1019;
   std::complex<double> tmp_1020;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1021;
      std::complex<double> tmp_1022;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1022 += Conj(Ye(j1,j2))*Conj(ZE(gI2,3 + j1));
      }
      tmp_1021 += tmp_1022;
      tmp_1020 += (ZE(gI1,j2)) * tmp_1021;
   }
   tmp_1019 += tmp_1020;
   tmp_998 += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(1,gO2
      )*Mu) * tmp_1019;
   std::complex<double> tmp_1023;
   std::complex<double> tmp_1024;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1025;
      std::complex<double> tmp_1026;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1026 += Conj(ZE(gI2,3 + j1))*Conj(TYe(j1,j2));
      }
      tmp_1025 += tmp_1026;
      tmp_1024 += (ZE(gI1,j2)) * tmp_1025;
   }
   tmp_1023 += tmp_1024;
   tmp_998 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,
      gO2)) * tmp_1023;
   std::complex<double> tmp_1027;
   std::complex<double> tmp_1028;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1029;
      std::complex<double> tmp_1030;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1031;
         std::complex<double> tmp_1032;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1032 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_1031 += tmp_1032;
         tmp_1030 += (ZE(gI1,3 + j2)) * tmp_1031;
      }
      tmp_1029 += tmp_1030;
      tmp_1028 += (Conj(ZE(gI2,3 + j3))) * tmp_1029;
   }
   tmp_1027 += tmp_1028;
   tmp_998 += (std::complex<double>(0,-1)*vd*KroneckerDelta(0,gO2)) * tmp_1027;
   std::complex<double> tmp_1033;
   std::complex<double> tmp_1034;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1035;
      std::complex<double> tmp_1036;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1037;
         std::complex<double> tmp_1038;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1038 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_1037 += tmp_1038;
         tmp_1036 += (Conj(ZE(gI2,j2))) * tmp_1037;
      }
      tmp_1035 += tmp_1036;
      tmp_1034 += (ZE(gI1,j3)) * tmp_1035;
   }
   tmp_1033 += tmp_1034;
   tmp_998 += (std::complex<double>(0,-1)*vd*KroneckerDelta(0,gO2)) * tmp_1033;
   result += (std::complex<double>(0,-1)) * tmp_998;

   return result;
}

std::complex<double> CLASSNAME::CpUhhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1039;
   std::complex<double> tmp_1040;
   std::complex<double> tmp_1041;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1041 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1040 += tmp_1041;
   tmp_1039 += (std::complex<double>(0,0.05)*vd*KroneckerDelta(0,gO2)*Sqr(g1))
      * tmp_1040;
   std::complex<double> tmp_1042;
   std::complex<double> tmp_1043;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1043 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1042 += tmp_1043;
   tmp_1039 += (std::complex<double>(0,-0.25)*vd*KroneckerDelta(0,gO2)*Sqr(g2))
      * tmp_1042;
   std::complex<double> tmp_1044;
   std::complex<double> tmp_1045;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1045 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1044 += tmp_1045;
   tmp_1039 += (std::complex<double>(0,-0.05)*vu*KroneckerDelta(1,gO2)*Sqr(g1))
      * tmp_1044;
   std::complex<double> tmp_1046;
   std::complex<double> tmp_1047;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1047 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1046 += tmp_1047;
   tmp_1039 += (std::complex<double>(0,0.25)*vu*KroneckerDelta(1,gO2)*Sqr(g2))
      * tmp_1046;
   std::complex<double> tmp_1048;
   std::complex<double> tmp_1049;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1049 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1048 += tmp_1049;
   tmp_1039 += (std::complex<double>(0,-0.2)*vd*KroneckerDelta(0,gO2)*Sqr(g1))
      * tmp_1048;
   std::complex<double> tmp_1050;
   std::complex<double> tmp_1051;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1051 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1050 += tmp_1051;
   tmp_1039 += (std::complex<double>(0,0.2)*vu*KroneckerDelta(1,gO2)*Sqr(g1)) *
      tmp_1050;
   std::complex<double> tmp_1052;
   std::complex<double> tmp_1053;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1054;
      std::complex<double> tmp_1055;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1055 += Yu(j1,j2)*ZU(gI1,3 + j1);
      }
      tmp_1054 += tmp_1055;
      tmp_1053 += (Conj(ZU(gI2,j2))) * tmp_1054;
   }
   tmp_1052 += tmp_1053;
   tmp_1039 += (std::complex<double>(0.,0.7071067811865475)*Conj(Mu)*
      KroneckerDelta(0,gO2)) * tmp_1052;
   std::complex<double> tmp_1056;
   std::complex<double> tmp_1057;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1058;
      std::complex<double> tmp_1059;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1059 += ZU(gI1,3 + j1)*TYu(j1,j2);
      }
      tmp_1058 += tmp_1059;
      tmp_1057 += (Conj(ZU(gI2,j2))) * tmp_1058;
   }
   tmp_1056 += tmp_1057;
   tmp_1039 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,
      gO2)) * tmp_1056;
   std::complex<double> tmp_1060;
   std::complex<double> tmp_1061;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1062;
      std::complex<double> tmp_1063;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1063 += Conj(Yu(j1,j2))*Conj(ZU(gI2,3 + j1));
      }
      tmp_1062 += tmp_1063;
      tmp_1061 += (ZU(gI1,j2)) * tmp_1062;
   }
   tmp_1060 += tmp_1061;
   tmp_1039 += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(0,
      gO2)*Mu) * tmp_1060;
   std::complex<double> tmp_1064;
   std::complex<double> tmp_1065;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1066;
      std::complex<double> tmp_1067;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1067 += Conj(ZU(gI2,3 + j1))*Conj(TYu(j1,j2));
      }
      tmp_1066 += tmp_1067;
      tmp_1065 += (ZU(gI1,j2)) * tmp_1066;
   }
   tmp_1064 += tmp_1065;
   tmp_1039 += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,
      gO2)) * tmp_1064;
   std::complex<double> tmp_1068;
   std::complex<double> tmp_1069;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1070;
      std::complex<double> tmp_1071;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1072;
         std::complex<double> tmp_1073;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1073 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_1072 += tmp_1073;
         tmp_1071 += (ZU(gI1,3 + j2)) * tmp_1072;
      }
      tmp_1070 += tmp_1071;
      tmp_1069 += (Conj(ZU(gI2,3 + j3))) * tmp_1070;
   }
   tmp_1068 += tmp_1069;
   tmp_1039 += (std::complex<double>(0,-1)*vu*KroneckerDelta(1,gO2)) * tmp_1068
      ;
   std::complex<double> tmp_1074;
   std::complex<double> tmp_1075;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1076;
      std::complex<double> tmp_1077;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1078;
         std::complex<double> tmp_1079;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1079 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_1078 += tmp_1079;
         tmp_1077 += (Conj(ZU(gI2,j2))) * tmp_1078;
      }
      tmp_1076 += tmp_1077;
      tmp_1075 += (ZU(gI1,j3)) * tmp_1076;
   }
   tmp_1074 += tmp_1075;
   tmp_1039 += (std::complex<double>(0,-1)*vu*KroneckerDelta(1,gO2)) * tmp_1074
      ;
   result += (std::complex<double>(0,-1)) * tmp_1039;

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

std::complex<double> CLASSNAME::CpUAhUAhconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = -0.05*(KroneckerDelta(0,gO1)*KroneckerDelta(0,gO2) - KroneckerDelta
      (1,gO1)*KroneckerDelta(1,gO2))*KroneckerDelta(gI1,gI2)*(3*Sqr(g1) + 5*Sqr(g2
      ));

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFdFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1080;
   std::complex<double> tmp_1081;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1082;
      std::complex<double> tmp_1083;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1083 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1082 += tmp_1083;
      tmp_1081 += (ZDL(gI1,j2)) * tmp_1082;
   }
   tmp_1080 += tmp_1081;
   result += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(0,gO2)
      ) * tmp_1080;

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFdFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1084;
   std::complex<double> tmp_1085;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1086;
      std::complex<double> tmp_1087;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1087 += Conj(ZDR(gI1,j1))*Yd(j1,j2);
      }
      tmp_1086 += tmp_1087;
      tmp_1085 += (Conj(ZDL(gI2,j2))) * tmp_1086;
   }
   tmp_1084 += tmp_1085;
   result += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1
      )) * tmp_1084;

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFeFePR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1088;
   std::complex<double> tmp_1089;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1090;
      std::complex<double> tmp_1091;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1091 += Conj(Ye(j1,j2))*ZER(gI2,j1);
      }
      tmp_1090 += tmp_1091;
      tmp_1089 += (ZEL(gI1,j2)) * tmp_1090;
   }
   tmp_1088 += tmp_1089;
   result += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(0,gO2)
      ) * tmp_1088;

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFeFePL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1092;
   std::complex<double> tmp_1093;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1094;
      std::complex<double> tmp_1095;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1095 += Conj(ZER(gI1,j1))*Ye(j1,j2);
      }
      tmp_1094 += tmp_1095;
      tmp_1093 += (Conj(ZEL(gI2,j2))) * tmp_1094;
   }
   tmp_1092 += tmp_1093;
   result += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(0,gO1
      )) * tmp_1092;

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFuFuPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1096;
   std::complex<double> tmp_1097;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1098;
      std::complex<double> tmp_1099;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1099 += Conj(Yu(j1,j2))*ZUR(gI2,j1);
      }
      tmp_1098 += tmp_1099;
      tmp_1097 += (ZUL(gI1,j2)) * tmp_1098;
   }
   tmp_1096 += tmp_1097;
   result += (std::complex<double>(0.,0.7071067811865475)*KroneckerDelta(1,gO2)
      ) * tmp_1096;

   return result;
}

std::complex<double> CLASSNAME::CpUAhbarFuFuPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1100;
   std::complex<double> tmp_1101;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1102;
      std::complex<double> tmp_1103;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1103 += Conj(ZUR(gI1,j1))*Yu(j1,j2);
      }
      tmp_1102 += tmp_1103;
      tmp_1101 += (Conj(ZUL(gI2,j2))) * tmp_1102;
   }
   tmp_1100 += tmp_1101;
   result += (std::complex<double>(0.,-0.7071067811865475)*KroneckerDelta(1,gO1
      )) * tmp_1100;

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

std::complex<double> CLASSNAME::CpUAhUAhconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1104;
   std::complex<double> tmp_1105;
   std::complex<double> tmp_1106;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1106 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1105 += tmp_1106;
   tmp_1104 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1105;
   std::complex<double> tmp_1107;
   std::complex<double> tmp_1108;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1108 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1107 += tmp_1108;
   tmp_1104 += (std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1107;
   std::complex<double> tmp_1109;
   std::complex<double> tmp_1110;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1110 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1109 += tmp_1110;
   tmp_1104 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1109;
   std::complex<double> tmp_1111;
   std::complex<double> tmp_1112;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1112 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1111 += tmp_1112;
   tmp_1104 += (std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1111;
   std::complex<double> tmp_1113;
   std::complex<double> tmp_1114;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1114 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1113 += tmp_1114;
   tmp_1104 += (std::complex<double>(0,0.1)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1113;
   std::complex<double> tmp_1115;
   std::complex<double> tmp_1116;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1116 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1115 += tmp_1116;
   tmp_1104 += (std::complex<double>(0,-0.1)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1115;
   std::complex<double> tmp_1117;
   std::complex<double> tmp_1118;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1119;
      std::complex<double> tmp_1120;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1121;
         std::complex<double> tmp_1122;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1122 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_1121 += tmp_1122;
         tmp_1120 += (ZD(gI1,3 + j2)) * tmp_1121;
      }
      tmp_1119 += tmp_1120;
      tmp_1118 += (Conj(ZD(gI2,3 + j3))) * tmp_1119;
   }
   tmp_1117 += tmp_1118;
   tmp_1104 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1117;
   std::complex<double> tmp_1123;
   std::complex<double> tmp_1124;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1125;
      std::complex<double> tmp_1126;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1127;
         std::complex<double> tmp_1128;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1128 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_1127 += tmp_1128;
         tmp_1126 += (Conj(ZD(gI2,j2))) * tmp_1127;
      }
      tmp_1125 += tmp_1126;
      tmp_1124 += (ZD(gI1,j3)) * tmp_1125;
   }
   tmp_1123 += tmp_1124;
   tmp_1104 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1123;
   result += (std::complex<double>(0,-1)) * tmp_1104;

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1129;
   std::complex<double> tmp_1130;
   std::complex<double> tmp_1131;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1131 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1130 += tmp_1131;
   tmp_1129 += (std::complex<double>(0,-0.15)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1130;
   std::complex<double> tmp_1132;
   std::complex<double> tmp_1133;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1133 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1132 += tmp_1133;
   tmp_1129 += (std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1132;
   std::complex<double> tmp_1134;
   std::complex<double> tmp_1135;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1135 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1134 += tmp_1135;
   tmp_1129 += (std::complex<double>(0,0.15)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1134;
   std::complex<double> tmp_1136;
   std::complex<double> tmp_1137;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1137 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1136 += tmp_1137;
   tmp_1129 += (std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1136;
   std::complex<double> tmp_1138;
   std::complex<double> tmp_1139;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1139 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1138 += tmp_1139;
   tmp_1129 += (std::complex<double>(0,0.3)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1138;
   std::complex<double> tmp_1140;
   std::complex<double> tmp_1141;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1141 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1140 += tmp_1141;
   tmp_1129 += (std::complex<double>(0,-0.3)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1140;
   std::complex<double> tmp_1142;
   std::complex<double> tmp_1143;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1144;
      std::complex<double> tmp_1145;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1146;
         std::complex<double> tmp_1147;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1147 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_1146 += tmp_1147;
         tmp_1145 += (ZE(gI1,3 + j2)) * tmp_1146;
      }
      tmp_1144 += tmp_1145;
      tmp_1143 += (Conj(ZE(gI2,3 + j3))) * tmp_1144;
   }
   tmp_1142 += tmp_1143;
   tmp_1129 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1142;
   std::complex<double> tmp_1148;
   std::complex<double> tmp_1149;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1150;
      std::complex<double> tmp_1151;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1152;
         std::complex<double> tmp_1153;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1153 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_1152 += tmp_1153;
         tmp_1151 += (Conj(ZE(gI2,j2))) * tmp_1152;
      }
      tmp_1150 += tmp_1151;
      tmp_1149 += (ZE(gI1,j3)) * tmp_1150;
   }
   tmp_1148 += tmp_1149;
   tmp_1129 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1148;
   result += (std::complex<double>(0,-1)) * tmp_1129;

   return result;
}

std::complex<double> CLASSNAME::CpUAhUAhconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1154;
   std::complex<double> tmp_1155;
   std::complex<double> tmp_1156;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1156 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1155 += tmp_1156;
   tmp_1154 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1155;
   std::complex<double> tmp_1157;
   std::complex<double> tmp_1158;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1158 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1157 += tmp_1158;
   tmp_1154 += (std::complex<double>(0,-0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1157;
   std::complex<double> tmp_1159;
   std::complex<double> tmp_1160;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1160 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1159 += tmp_1160;
   tmp_1154 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1159;
   std::complex<double> tmp_1161;
   std::complex<double> tmp_1162;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1162 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1161 += tmp_1162;
   tmp_1154 += (std::complex<double>(0,0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1161;
   std::complex<double> tmp_1163;
   std::complex<double> tmp_1164;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1164 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1163 += tmp_1164;
   tmp_1154 += (std::complex<double>(0,-0.2)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1163;
   std::complex<double> tmp_1165;
   std::complex<double> tmp_1166;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1166 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1165 += tmp_1166;
   tmp_1154 += (std::complex<double>(0,0.2)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1165;
   std::complex<double> tmp_1167;
   std::complex<double> tmp_1168;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1169;
      std::complex<double> tmp_1170;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1171;
         std::complex<double> tmp_1172;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1172 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_1171 += tmp_1172;
         tmp_1170 += (ZU(gI1,3 + j2)) * tmp_1171;
      }
      tmp_1169 += tmp_1170;
      tmp_1168 += (Conj(ZU(gI2,3 + j3))) * tmp_1169;
   }
   tmp_1167 += tmp_1168;
   tmp_1154 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta
      (1,gO2)) * tmp_1167;
   std::complex<double> tmp_1173;
   std::complex<double> tmp_1174;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1175;
      std::complex<double> tmp_1176;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1177;
         std::complex<double> tmp_1178;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1178 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_1177 += tmp_1178;
         tmp_1176 += (Conj(ZU(gI2,j2))) * tmp_1177;
      }
      tmp_1175 += tmp_1176;
      tmp_1174 += (ZU(gI1,j3)) * tmp_1175;
   }
   tmp_1173 += tmp_1174;
   tmp_1154 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta
      (1,gO2)) * tmp_1173;
   result += (std::complex<double>(0,-1)) * tmp_1154;

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSdSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1179;
   std::complex<double> tmp_1180;
   std::complex<double> tmp_1181;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1182;
      std::complex<double> tmp_1183;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1183 += Yd(j1,j2)*ZD(gI1,3 + j1);
      }
      tmp_1182 += tmp_1183;
      tmp_1181 += (Conj(ZD(gI2,j2))) * tmp_1182;
   }
   tmp_1180 += tmp_1181;
   tmp_1179 += (0.7071067811865475*Conj(Mu)*KroneckerDelta(1,gO2)) * tmp_1180;
   std::complex<double> tmp_1184;
   std::complex<double> tmp_1185;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1186;
      std::complex<double> tmp_1187;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1187 += ZD(gI1,3 + j1)*TYd(j1,j2);
      }
      tmp_1186 += tmp_1187;
      tmp_1185 += (Conj(ZD(gI2,j2))) * tmp_1186;
   }
   tmp_1184 += tmp_1185;
   tmp_1179 += (0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_1184;
   std::complex<double> tmp_1188;
   std::complex<double> tmp_1189;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1190;
      std::complex<double> tmp_1191;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1191 += Conj(Yd(j1,j2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_1190 += tmp_1191;
      tmp_1189 += (ZD(gI1,j2)) * tmp_1190;
   }
   tmp_1188 += tmp_1189;
   tmp_1179 += (-0.7071067811865475*KroneckerDelta(1,gO2)*Mu) * tmp_1188;
   std::complex<double> tmp_1192;
   std::complex<double> tmp_1193;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1194;
      std::complex<double> tmp_1195;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1195 += Conj(ZD(gI2,3 + j1))*Conj(TYd(j1,j2));
      }
      tmp_1194 += tmp_1195;
      tmp_1193 += (ZD(gI1,j2)) * tmp_1194;
   }
   tmp_1192 += tmp_1193;
   tmp_1179 += (-0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_1192;
   result += (std::complex<double>(0,-1)) * tmp_1179;

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSeSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1196;
   std::complex<double> tmp_1197;
   std::complex<double> tmp_1198;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1199;
      std::complex<double> tmp_1200;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1200 += Ye(j1,j2)*ZE(gI1,3 + j1);
      }
      tmp_1199 += tmp_1200;
      tmp_1198 += (Conj(ZE(gI2,j2))) * tmp_1199;
   }
   tmp_1197 += tmp_1198;
   tmp_1196 += (0.7071067811865475*Conj(Mu)*KroneckerDelta(1,gO2)) * tmp_1197;
   std::complex<double> tmp_1201;
   std::complex<double> tmp_1202;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1203;
      std::complex<double> tmp_1204;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1204 += ZE(gI1,3 + j1)*TYe(j1,j2);
      }
      tmp_1203 += tmp_1204;
      tmp_1202 += (Conj(ZE(gI2,j2))) * tmp_1203;
   }
   tmp_1201 += tmp_1202;
   tmp_1196 += (0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_1201;
   std::complex<double> tmp_1205;
   std::complex<double> tmp_1206;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1207;
      std::complex<double> tmp_1208;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1208 += Conj(Ye(j1,j2))*Conj(ZE(gI2,3 + j1));
      }
      tmp_1207 += tmp_1208;
      tmp_1206 += (ZE(gI1,j2)) * tmp_1207;
   }
   tmp_1205 += tmp_1206;
   tmp_1196 += (-0.7071067811865475*KroneckerDelta(1,gO2)*Mu) * tmp_1205;
   std::complex<double> tmp_1209;
   std::complex<double> tmp_1210;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1211;
      std::complex<double> tmp_1212;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1212 += Conj(ZE(gI2,3 + j1))*Conj(TYe(j1,j2));
      }
      tmp_1211 += tmp_1212;
      tmp_1210 += (ZE(gI1,j2)) * tmp_1211;
   }
   tmp_1209 += tmp_1210;
   tmp_1196 += (-0.7071067811865475*KroneckerDelta(0,gO2)) * tmp_1209;
   result += (std::complex<double>(0,-1)) * tmp_1196;

   return result;
}

std::complex<double> CLASSNAME::CpUAhconjSuSu(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1213;
   std::complex<double> tmp_1214;
   std::complex<double> tmp_1215;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1216;
      std::complex<double> tmp_1217;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1217 += Yu(j1,j2)*ZU(gI1,3 + j1);
      }
      tmp_1216 += tmp_1217;
      tmp_1215 += (Conj(ZU(gI2,j2))) * tmp_1216;
   }
   tmp_1214 += tmp_1215;
   tmp_1213 += (0.7071067811865475*Conj(Mu)*KroneckerDelta(0,gO2)) * tmp_1214;
   std::complex<double> tmp_1218;
   std::complex<double> tmp_1219;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1220;
      std::complex<double> tmp_1221;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1221 += ZU(gI1,3 + j1)*TYu(j1,j2);
      }
      tmp_1220 += tmp_1221;
      tmp_1219 += (Conj(ZU(gI2,j2))) * tmp_1220;
   }
   tmp_1218 += tmp_1219;
   tmp_1213 += (0.7071067811865475*KroneckerDelta(1,gO2)) * tmp_1218;
   std::complex<double> tmp_1222;
   std::complex<double> tmp_1223;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1224;
      std::complex<double> tmp_1225;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1225 += Conj(Yu(j1,j2))*Conj(ZU(gI2,3 + j1));
      }
      tmp_1224 += tmp_1225;
      tmp_1223 += (ZU(gI1,j2)) * tmp_1224;
   }
   tmp_1222 += tmp_1223;
   tmp_1213 += (-0.7071067811865475*KroneckerDelta(0,gO2)*Mu) * tmp_1222;
   std::complex<double> tmp_1226;
   std::complex<double> tmp_1227;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1228;
      std::complex<double> tmp_1229;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1229 += Conj(ZU(gI2,3 + j1))*Conj(TYu(j1,j2));
      }
      tmp_1228 += tmp_1229;
      tmp_1227 += (ZU(gI1,j2)) * tmp_1228;
   }
   tmp_1226 += tmp_1227;
   tmp_1213 += (-0.7071067811865475*KroneckerDelta(1,gO2)) * tmp_1226;
   result += (std::complex<double>(0,-1)) * tmp_1213;

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

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSvSv(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1230;
   tmp_1230 += std::complex<double>(0,-0.15)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*KroneckerDelta(gI1,gI2)*Sqr(g1);
   tmp_1230 += std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*KroneckerDelta(gI1,gI2)*Sqr(g2);
   tmp_1230 += std::complex<double>(0,0.15)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*KroneckerDelta(gI1,gI2)*Sqr(g1);
   tmp_1230 += std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*KroneckerDelta(gI1,gI2)*Sqr(g2);
   std::complex<double> tmp_1231;
   std::complex<double> tmp_1232;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1233;
      std::complex<double> tmp_1234;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1235;
         std::complex<double> tmp_1236;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1236 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_1235 += tmp_1236;
         tmp_1234 += (Conj(ZV(gI2,j2))) * tmp_1235;
      }
      tmp_1233 += tmp_1234;
      tmp_1232 += (ZV(gI1,j3)) * tmp_1233;
   }
   tmp_1231 += tmp_1232;
   tmp_1230 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1231;
   result += (std::complex<double>(0,-1)) * tmp_1230;

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmbarFuFdPR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1237;
   std::complex<double> tmp_1238;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1239;
      std::complex<double> tmp_1240;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1240 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1239 += tmp_1240;
      tmp_1238 += (ZUL(gI1,j2)) * tmp_1239;
   }
   tmp_1237 += tmp_1238;
   result += (KroneckerDelta(0,gO2)) * tmp_1237;

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmbarFuFdPL(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1241;
   std::complex<double> tmp_1242;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1243;
      std::complex<double> tmp_1244;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1244 += Conj(ZUR(gI1,j1))*Yu(j1,j2);
      }
      tmp_1243 += tmp_1244;
      tmp_1242 += (Conj(ZDL(gI2,j2))) * tmp_1243;
   }
   tmp_1241 += tmp_1242;
   result += (KroneckerDelta(1,gO1)) * tmp_1241;

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmbarFvFePR(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1245;
   std::complex<double> tmp_1246;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1246 += Conj(Ye(j1,gI1))*ZER(gI2,j1);
   }
   tmp_1245 += tmp_1246;
   result += (KroneckerDelta(0,gO2)) * tmp_1245;

   return result;
}

double CLASSNAME::CpconjUHpmbarFvFePL(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSvSe(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1247;
   std::complex<double> tmp_1248;
   std::complex<double> tmp_1249;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1249 += Conj(ZE(gI2,j1))*ZV(gI1,j1);
   }
   tmp_1248 += tmp_1249;
   tmp_1247 += (std::complex<double>(0.,-0.35355339059327373)*vd*KroneckerDelta
      (0,gO2)*Sqr(g2)) * tmp_1248;
   std::complex<double> tmp_1250;
   std::complex<double> tmp_1251;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1251 += Conj(ZE(gI2,j1))*ZV(gI1,j1);
   }
   tmp_1250 += tmp_1251;
   tmp_1247 += (std::complex<double>(0.,-0.35355339059327373)*vu*KroneckerDelta
      (1,gO2)*Sqr(g2)) * tmp_1250;
   std::complex<double> tmp_1252;
   std::complex<double> tmp_1253;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1254;
      std::complex<double> tmp_1255;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1255 += Conj(Ye(j1,j2))*Conj(ZE(gI2,3 + j1));
      }
      tmp_1254 += tmp_1255;
      tmp_1253 += (ZV(gI1,j2)) * tmp_1254;
   }
   tmp_1252 += tmp_1253;
   tmp_1247 += (std::complex<double>(0,1)*KroneckerDelta(1,gO2)*Mu) * tmp_1252;
   std::complex<double> tmp_1256;
   std::complex<double> tmp_1257;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1258;
      std::complex<double> tmp_1259;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1259 += Conj(ZE(gI2,3 + j1))*Conj(TYe(j1,j2));
      }
      tmp_1258 += tmp_1259;
      tmp_1257 += (ZV(gI1,j2)) * tmp_1258;
   }
   tmp_1256 += tmp_1257;
   tmp_1247 += (std::complex<double>(0,1)*KroneckerDelta(0,gO2)) * tmp_1256;
   std::complex<double> tmp_1260;
   std::complex<double> tmp_1261;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1262;
      std::complex<double> tmp_1263;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1264;
         std::complex<double> tmp_1265;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1265 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_1264 += tmp_1265;
         tmp_1263 += (Conj(ZE(gI2,j2))) * tmp_1264;
      }
      tmp_1262 += tmp_1263;
      tmp_1261 += (ZV(gI1,j3)) * tmp_1262;
   }
   tmp_1260 += tmp_1261;
   tmp_1247 += (std::complex<double>(0.,0.7071067811865475)*vd*KroneckerDelta(0
      ,gO2)) * tmp_1260;
   result += (std::complex<double>(0,-1)) * tmp_1247;

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

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSdSd(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1266;
   std::complex<double> tmp_1267;
   std::complex<double> tmp_1268;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1268 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1267 += tmp_1268;
   tmp_1266 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1267;
   std::complex<double> tmp_1269;
   std::complex<double> tmp_1270;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1270 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1269 += tmp_1270;
   tmp_1266 += (std::complex<double>(0,-0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1269;
   std::complex<double> tmp_1271;
   std::complex<double> tmp_1272;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1272 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1271 += tmp_1272;
   tmp_1266 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1271;
   std::complex<double> tmp_1273;
   std::complex<double> tmp_1274;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1274 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1273 += tmp_1274;
   tmp_1266 += (std::complex<double>(0,0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1273;
   std::complex<double> tmp_1275;
   std::complex<double> tmp_1276;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1276 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1275 += tmp_1276;
   tmp_1266 += (std::complex<double>(0,0.1)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1275;
   std::complex<double> tmp_1277;
   std::complex<double> tmp_1278;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1278 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1277 += tmp_1278;
   tmp_1266 += (std::complex<double>(0,-0.1)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1277;
   std::complex<double> tmp_1279;
   std::complex<double> tmp_1280;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1281;
      std::complex<double> tmp_1282;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1283;
         std::complex<double> tmp_1284;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1284 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_1283 += tmp_1284;
         tmp_1282 += (ZD(gI1,3 + j2)) * tmp_1283;
      }
      tmp_1281 += tmp_1282;
      tmp_1280 += (Conj(ZD(gI2,3 + j3))) * tmp_1281;
   }
   tmp_1279 += tmp_1280;
   tmp_1266 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1279;
   std::complex<double> tmp_1285;
   std::complex<double> tmp_1286;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1287;
      std::complex<double> tmp_1288;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1289;
         std::complex<double> tmp_1290;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1290 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_1289 += tmp_1290;
         tmp_1288 += (Conj(ZD(gI2,j2))) * tmp_1289;
      }
      tmp_1287 += tmp_1288;
      tmp_1286 += (ZD(gI1,j3)) * tmp_1287;
   }
   tmp_1285 += tmp_1286;
   tmp_1266 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta
      (1,gO2)) * tmp_1285;
   result += (std::complex<double>(0,-1)) * tmp_1266;

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSeSe(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1291;
   std::complex<double> tmp_1292;
   std::complex<double> tmp_1293;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1293 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1292 += tmp_1293;
   tmp_1291 += (std::complex<double>(0,-0.15)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1292;
   std::complex<double> tmp_1294;
   std::complex<double> tmp_1295;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1295 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1294 += tmp_1295;
   tmp_1291 += (std::complex<double>(0,-0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1294;
   std::complex<double> tmp_1296;
   std::complex<double> tmp_1297;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1297 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1296 += tmp_1297;
   tmp_1291 += (std::complex<double>(0,0.15)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1296;
   std::complex<double> tmp_1298;
   std::complex<double> tmp_1299;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1299 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1298 += tmp_1299;
   tmp_1291 += (std::complex<double>(0,0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1298;
   std::complex<double> tmp_1300;
   std::complex<double> tmp_1301;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1301 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1300 += tmp_1301;
   tmp_1291 += (std::complex<double>(0,0.3)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1300;
   std::complex<double> tmp_1302;
   std::complex<double> tmp_1303;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1303 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1302 += tmp_1303;
   tmp_1291 += (std::complex<double>(0,-0.3)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1302;
   std::complex<double> tmp_1304;
   std::complex<double> tmp_1305;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1306;
      std::complex<double> tmp_1307;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1308;
         std::complex<double> tmp_1309;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1309 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_1308 += tmp_1309;
         tmp_1307 += (ZE(gI1,3 + j2)) * tmp_1308;
      }
      tmp_1306 += tmp_1307;
      tmp_1305 += (Conj(ZE(gI2,3 + j3))) * tmp_1306;
   }
   tmp_1304 += tmp_1305;
   tmp_1291 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1304;
   result += (std::complex<double>(0,-1)) * tmp_1291;

   return result;
}

std::complex<double> CLASSNAME::CpUHpmconjUHpmconjSuSu(unsigned gO1, unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1310;
   std::complex<double> tmp_1311;
   std::complex<double> tmp_1312;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1312 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1311 += tmp_1312;
   tmp_1310 += (std::complex<double>(0,0.05)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1311;
   std::complex<double> tmp_1313;
   std::complex<double> tmp_1314;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1314 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1313 += tmp_1314;
   tmp_1310 += (std::complex<double>(0,0.25)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g2)) * tmp_1313;
   std::complex<double> tmp_1315;
   std::complex<double> tmp_1316;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1316 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1315 += tmp_1316;
   tmp_1310 += (std::complex<double>(0,-0.05)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1315;
   std::complex<double> tmp_1317;
   std::complex<double> tmp_1318;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1318 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1317 += tmp_1318;
   tmp_1310 += (std::complex<double>(0,-0.25)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g2)) * tmp_1317;
   std::complex<double> tmp_1319;
   std::complex<double> tmp_1320;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1320 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1319 += tmp_1320;
   tmp_1310 += (std::complex<double>(0,-0.2)*KroneckerDelta(0,gO1)*
      KroneckerDelta(0,gO2)*Sqr(g1)) * tmp_1319;
   std::complex<double> tmp_1321;
   std::complex<double> tmp_1322;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1322 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1321 += tmp_1322;
   tmp_1310 += (std::complex<double>(0,0.2)*KroneckerDelta(1,gO1)*
      KroneckerDelta(1,gO2)*Sqr(g1)) * tmp_1321;
   std::complex<double> tmp_1323;
   std::complex<double> tmp_1324;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1325;
      std::complex<double> tmp_1326;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1327;
         std::complex<double> tmp_1328;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1328 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_1327 += tmp_1328;
         tmp_1326 += (ZU(gI1,3 + j2)) * tmp_1327;
      }
      tmp_1325 += tmp_1326;
      tmp_1324 += (Conj(ZU(gI2,3 + j3))) * tmp_1325;
   }
   tmp_1323 += tmp_1324;
   tmp_1310 += (std::complex<double>(0,-1)*KroneckerDelta(1,gO1)*KroneckerDelta
      (1,gO2)) * tmp_1323;
   std::complex<double> tmp_1329;
   std::complex<double> tmp_1330;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1331;
      std::complex<double> tmp_1332;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1333;
         std::complex<double> tmp_1334;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1334 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_1333 += tmp_1334;
         tmp_1332 += (Conj(ZU(gI2,j2))) * tmp_1333;
      }
      tmp_1331 += tmp_1332;
      tmp_1330 += (ZU(gI1,j3)) * tmp_1331;
   }
   tmp_1329 += tmp_1330;
   tmp_1310 += (std::complex<double>(0,-1)*KroneckerDelta(0,gO1)*KroneckerDelta
      (0,gO2)) * tmp_1329;
   result += (std::complex<double>(0,-1)) * tmp_1310;

   return result;
}

std::complex<double> CLASSNAME::CpconjUHpmconjSuSd(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1335;
   std::complex<double> tmp_1336;
   std::complex<double> tmp_1337;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1337 += Conj(ZD(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1336 += tmp_1337;
   tmp_1335 += (std::complex<double>(0.,-0.35355339059327373)*vd*KroneckerDelta
      (0,gO2)*Sqr(g2)) * tmp_1336;
   std::complex<double> tmp_1338;
   std::complex<double> tmp_1339;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1339 += Conj(ZD(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1338 += tmp_1339;
   tmp_1335 += (std::complex<double>(0.,-0.35355339059327373)*vu*KroneckerDelta
      (1,gO2)*Sqr(g2)) * tmp_1338;
   std::complex<double> tmp_1340;
   std::complex<double> tmp_1341;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1342;
      std::complex<double> tmp_1343;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1343 += Yu(j1,j2)*ZU(gI1,3 + j1);
      }
      tmp_1342 += tmp_1343;
      tmp_1341 += (Conj(ZD(gI2,j2))) * tmp_1342;
   }
   tmp_1340 += tmp_1341;
   tmp_1335 += (std::complex<double>(0,1)*Conj(Mu)*KroneckerDelta(0,gO2)) *
      tmp_1340;
   std::complex<double> tmp_1344;
   std::complex<double> tmp_1345;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1346;
      std::complex<double> tmp_1347;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1347 += ZU(gI1,3 + j1)*TYu(j1,j2);
      }
      tmp_1346 += tmp_1347;
      tmp_1345 += (Conj(ZD(gI2,j2))) * tmp_1346;
   }
   tmp_1344 += tmp_1345;
   tmp_1335 += (std::complex<double>(0,1)*KroneckerDelta(1,gO2)) * tmp_1344;
   std::complex<double> tmp_1348;
   std::complex<double> tmp_1349;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1350;
      std::complex<double> tmp_1351;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1351 += Conj(Yd(j1,j2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_1350 += tmp_1351;
      tmp_1349 += (ZU(gI1,j2)) * tmp_1350;
   }
   tmp_1348 += tmp_1349;
   tmp_1335 += (std::complex<double>(0,1)*KroneckerDelta(1,gO2)*Mu) * tmp_1348;
   std::complex<double> tmp_1352;
   std::complex<double> tmp_1353;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1354;
      std::complex<double> tmp_1355;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1355 += Conj(ZD(gI2,3 + j1))*Conj(TYd(j1,j2));
      }
      tmp_1354 += tmp_1355;
      tmp_1353 += (ZU(gI1,j2)) * tmp_1354;
   }
   tmp_1352 += tmp_1353;
   tmp_1335 += (std::complex<double>(0,1)*KroneckerDelta(0,gO2)) * tmp_1352;
   std::complex<double> tmp_1356;
   std::complex<double> tmp_1357;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1358;
      std::complex<double> tmp_1359;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1360;
         std::complex<double> tmp_1361;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1361 += Conj(Yd(j3,j1))*Yu(j2,j1);
         }
         tmp_1360 += tmp_1361;
         tmp_1359 += (ZU(gI1,3 + j2)) * tmp_1360;
      }
      tmp_1358 += tmp_1359;
      tmp_1357 += (Conj(ZD(gI2,3 + j3))) * tmp_1358;
   }
   tmp_1356 += tmp_1357;
   tmp_1335 += (std::complex<double>(0.,0.7071067811865475)*vu*KroneckerDelta(0
      ,gO2)) * tmp_1356;
   std::complex<double> tmp_1362;
   std::complex<double> tmp_1363;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1364;
      std::complex<double> tmp_1365;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1366;
         std::complex<double> tmp_1367;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1367 += Conj(Yd(j3,j1))*Yu(j2,j1);
         }
         tmp_1366 += tmp_1367;
         tmp_1365 += (ZU(gI1,3 + j2)) * tmp_1366;
      }
      tmp_1364 += tmp_1365;
      tmp_1363 += (Conj(ZD(gI2,3 + j3))) * tmp_1364;
   }
   tmp_1362 += tmp_1363;
   tmp_1335 += (std::complex<double>(0.,0.7071067811865475)*vd*KroneckerDelta(1
      ,gO2)) * tmp_1362;
   std::complex<double> tmp_1368;
   std::complex<double> tmp_1369;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1370;
      std::complex<double> tmp_1371;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1372;
         std::complex<double> tmp_1373;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1373 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_1372 += tmp_1373;
         tmp_1371 += (Conj(ZD(gI2,j2))) * tmp_1372;
      }
      tmp_1370 += tmp_1371;
      tmp_1369 += (ZU(gI1,j3)) * tmp_1370;
   }
   tmp_1368 += tmp_1369;
   tmp_1335 += (std::complex<double>(0.,0.7071067811865475)*vd*KroneckerDelta(0
      ,gO2)) * tmp_1368;
   std::complex<double> tmp_1374;
   std::complex<double> tmp_1375;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_1376;
      std::complex<double> tmp_1377;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_1378;
         std::complex<double> tmp_1379;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_1379 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_1378 += tmp_1379;
         tmp_1377 += (Conj(ZD(gI2,j2))) * tmp_1378;
      }
      tmp_1376 += tmp_1377;
      tmp_1375 += (ZU(gI1,j3)) * tmp_1376;
   }
   tmp_1374 += tmp_1375;
   tmp_1335 += (std::complex<double>(0.,0.7071067811865475)*vu*KroneckerDelta(1
      ,gO2)) * tmp_1374;
   result += (std::complex<double>(0,-1)) * tmp_1335;

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

double CLASSNAME::CpVZconjVWmVWm() const
{
   double result = 0.0;

   result = -(g2*Cos(ThetaW()));

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

std::complex<double> CLASSNAME::CpVZVZconjSvSv(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.1*KroneckerDelta(gI1,gI2)*(g1*Sin(ThetaW())*(7.745966692414834*g2
      *Cos(ThetaW()) + 3*g1*Sin(ThetaW())) + 5*Sqr(g2)*Sqr(Cos(ThetaW())));

   return result;
}

double CLASSNAME::CpVZconjSvSv(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI1,gI2)*(g2*Cos(ThetaW()) + 0.7745966692414834*
      g1*Sin(ThetaW()));

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

std::complex<double> CLASSNAME::CpVZVZconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1380;
   std::complex<double> tmp_1381;
   std::complex<double> tmp_1382;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1382 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1381 += tmp_1382;
   tmp_1380 += (std::complex<double>(0,0.5)*Sqr(g2)*Sqr(Cos(ThetaW()))) *
      tmp_1381;
   std::complex<double> tmp_1383;
   std::complex<double> tmp_1384;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1384 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1383 += tmp_1384;
   tmp_1380 += (std::complex<double>(0.,0.2581988897471611)*g1*g2*Cos(ThetaW())
      *Sin(ThetaW())) * tmp_1383;
   std::complex<double> tmp_1385;
   std::complex<double> tmp_1386;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1386 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1385 += tmp_1386;
   tmp_1380 += (std::complex<double>(0,0.03333333333333333)*Sqr(g1)*Sqr(Sin(
      ThetaW()))) * tmp_1385;
   std::complex<double> tmp_1387;
   std::complex<double> tmp_1388;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1388 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1387 += tmp_1388;
   tmp_1380 += (std::complex<double>(0,0.13333333333333333)*Sqr(g1)*Sqr(Sin(
      ThetaW()))) * tmp_1387;
   result += (std::complex<double>(0,-1)) * tmp_1380;

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1389;
   std::complex<double> tmp_1390;
   std::complex<double> tmp_1391;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1391 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1390 += tmp_1391;
   tmp_1389 += (std::complex<double>(0,0.5)*Sqr(g2)*Sqr(Cos(ThetaW()))) *
      tmp_1390;
   std::complex<double> tmp_1392;
   std::complex<double> tmp_1393;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1393 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1392 += tmp_1393;
   tmp_1389 += (std::complex<double>(0.,-0.7745966692414834)*g1*g2*Cos(ThetaW()
      )*Sin(ThetaW())) * tmp_1392;
   std::complex<double> tmp_1394;
   std::complex<double> tmp_1395;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1395 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1394 += tmp_1395;
   tmp_1389 += (std::complex<double>(0,0.3)*Sqr(g1)*Sqr(Sin(ThetaW()))) *
      tmp_1394;
   std::complex<double> tmp_1396;
   std::complex<double> tmp_1397;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1397 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1396 += tmp_1397;
   tmp_1389 += (std::complex<double>(0,1.2)*Sqr(g1)*Sqr(Sin(ThetaW()))) *
      tmp_1396;
   result += (std::complex<double>(0,-1)) * tmp_1389;

   return result;
}

std::complex<double> CLASSNAME::CpVZVZconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1398;
   std::complex<double> tmp_1399;
   std::complex<double> tmp_1400;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1400 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1399 += tmp_1400;
   tmp_1398 += (std::complex<double>(0,0.5)*Sqr(g2)*Sqr(Cos(ThetaW()))) *
      tmp_1399;
   std::complex<double> tmp_1401;
   std::complex<double> tmp_1402;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1402 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1401 += tmp_1402;
   tmp_1398 += (std::complex<double>(0.,-0.2581988897471611)*g1*g2*Cos(ThetaW()
      )*Sin(ThetaW())) * tmp_1401;
   std::complex<double> tmp_1403;
   std::complex<double> tmp_1404;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1404 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1403 += tmp_1404;
   tmp_1398 += (std::complex<double>(0,0.03333333333333333)*Sqr(g1)*Sqr(Sin(
      ThetaW()))) * tmp_1403;
   std::complex<double> tmp_1405;
   std::complex<double> tmp_1406;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1406 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1405 += tmp_1406;
   tmp_1398 += (std::complex<double>(0,0.5333333333333333)*Sqr(g1)*Sqr(Sin(
      ThetaW()))) * tmp_1405;
   result += (std::complex<double>(0,-1)) * tmp_1398;

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1407;
   std::complex<double> tmp_1408;
   std::complex<double> tmp_1409;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1409 += Conj(ZD(gI2,3 + j1))*ZD(gI1,3 + j1);
   }
   tmp_1408 += tmp_1409;
   tmp_1407 += (1.5491933384829668*g1*Sin(ThetaW())) * tmp_1408;
   std::complex<double> tmp_1410;
   std::complex<double> tmp_1411;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1411 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1410 += tmp_1411;
   tmp_1407 += (-3*g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW())) *
      tmp_1410;
   result += (0.16666666666666666) * tmp_1407;

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1412;
   std::complex<double> tmp_1413;
   std::complex<double> tmp_1414;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1414 += Conj(ZE(gI2,3 + j1))*ZE(gI1,3 + j1);
   }
   tmp_1413 += tmp_1414;
   tmp_1412 += (1.5491933384829668*g1*Sin(ThetaW())) * tmp_1413;
   std::complex<double> tmp_1415;
   std::complex<double> tmp_1416;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1416 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1415 += tmp_1416;
   tmp_1412 += (-(g2*Cos(ThetaW())) + 0.7745966692414834*g1*Sin(ThetaW())) *
      tmp_1415;
   result += (0.5) * tmp_1412;

   return result;
}

std::complex<double> CLASSNAME::CpVZconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1417;
   std::complex<double> tmp_1418;
   std::complex<double> tmp_1419;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1419 += Conj(ZU(gI2,3 + j1))*ZU(gI1,3 + j1);
   }
   tmp_1418 += tmp_1419;
   tmp_1417 += (-3.0983866769659336*g1*Sin(ThetaW())) * tmp_1418;
   std::complex<double> tmp_1420;
   std::complex<double> tmp_1421;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1421 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1420 += tmp_1421;
   tmp_1417 += (3*g2*Cos(ThetaW()) - 0.7745966692414834*g1*Sin(ThetaW())) *
      tmp_1420;
   result += (0.16666666666666666) * tmp_1417;

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

std::complex<double> CLASSNAME::CpVWmconjVWmhhhh(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   result = 0.5*Sqr(g2)*(ZH(gI1,0)*ZH(gI2,0) + ZH(gI1,1)*ZH(gI2,1));

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

double CLASSNAME::CpVWmconjVWmconjSvSv(unsigned gI1, unsigned gI2) const
{
   double result = 0.0;

   result = 0.5*KroneckerDelta(gI1,gI2)*Sqr(g2);

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmbarFuFdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1422;
   std::complex<double> tmp_1423;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1423 += Conj(ZDL(gI2,j1))*ZUL(gI1,j1);
   }
   tmp_1422 += tmp_1423;
   result += (-0.7071067811865475*g2) * tmp_1422;

   return result;
}

double CLASSNAME::CpconjVWmbarFuFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmbarFvFePL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZEL(gI2,gI1));
   }

   return result;
}

double CLASSNAME::CpconjVWmbarFvFePR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSvSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1424;
   std::complex<double> tmp_1425;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1425 += Conj(ZE(gI2,j1))*ZV(gI1,j1);
   }
   tmp_1424 += tmp_1425;
   result += (0.7071067811865475*g2) * tmp_1424;

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

std::complex<double> CLASSNAME::CpVWmconjVWmconjSdSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1426;
   std::complex<double> tmp_1427;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1427 += Conj(ZD(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1426 += tmp_1427;
   result += (0.5*Sqr(g2)) * tmp_1426;

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSeSe(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1428;
   std::complex<double> tmp_1429;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1429 += Conj(ZE(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1428 += tmp_1429;
   result += (0.5*Sqr(g2)) * tmp_1428;

   return result;
}

std::complex<double> CLASSNAME::CpVWmconjVWmconjSuSu(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1430;
   std::complex<double> tmp_1431;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1431 += Conj(ZU(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1430 += tmp_1431;
   result += (0.5*Sqr(g2)) * tmp_1430;

   return result;
}

std::complex<double> CLASSNAME::CpconjVWmconjSuSd(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1432;
   std::complex<double> tmp_1433;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1433 += Conj(ZD(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1432 += tmp_1433;
   result += (0.7071067811865475*g2) * tmp_1432;

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

std::complex<double> CLASSNAME::CpUChiconjSvFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5477225575051661*g1*KroneckerDelta(0,gO2)*ZV(gI1,gI2);
   }
   if (gI2 < 3) {
      result += -0.7071067811865475*g2*KroneckerDelta(1,gO2)*ZV(gI1,gI2);
   }

   return result;
}

double CLASSNAME::CpUChiconjSvFvPR(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

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

std::complex<double> CLASSNAME::CpUChiconjSdFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1434;
   std::complex<double> tmp_1435;
   std::complex<double> tmp_1436;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1436 += Conj(ZDL(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1435 += tmp_1436;
   tmp_1434 += (std::complex<double>(0.,-0.18257418583505536)*g1*KroneckerDelta
      (0,gO2)) * tmp_1435;
   std::complex<double> tmp_1437;
   std::complex<double> tmp_1438;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1438 += Conj(ZDL(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1437 += tmp_1438;
   tmp_1434 += (std::complex<double>(0.,0.7071067811865475)*g2*KroneckerDelta(1
      ,gO2)) * tmp_1437;
   std::complex<double> tmp_1439;
   std::complex<double> tmp_1440;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1441;
      std::complex<double> tmp_1442;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1442 += Yd(j1,j2)*ZD(gI1,3 + j1);
      }
      tmp_1441 += tmp_1442;
      tmp_1440 += (Conj(ZDL(gI2,j2))) * tmp_1441;
   }
   tmp_1439 += tmp_1440;
   tmp_1434 += (std::complex<double>(0,-1)*KroneckerDelta(2,gO2)) * tmp_1439;
   result += (std::complex<double>(0,-1)) * tmp_1434;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSdFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1443;
   std::complex<double> tmp_1444;
   std::complex<double> tmp_1445;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1445 += ZD(gI1,3 + j1)*ZDR(gI2,j1);
   }
   tmp_1444 += tmp_1445;
   tmp_1443 += (std::complex<double>(0.,-0.3651483716701107)*g1*KroneckerDelta(
      0,gO1)) * tmp_1444;
   std::complex<double> tmp_1446;
   std::complex<double> tmp_1447;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1448;
      std::complex<double> tmp_1449;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1449 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1448 += tmp_1449;
      tmp_1447 += (ZD(gI1,j2)) * tmp_1448;
   }
   tmp_1446 += tmp_1447;
   tmp_1443 += (std::complex<double>(0,-1)*KroneckerDelta(2,gO1)) * tmp_1446;
   result += (std::complex<double>(0,-1)) * tmp_1443;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSeFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1450;
   std::complex<double> tmp_1451;
   std::complex<double> tmp_1452;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1452 += Conj(ZEL(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1451 += tmp_1452;
   tmp_1450 += (std::complex<double>(0.,0.5477225575051661)*g1*KroneckerDelta(0
      ,gO2)) * tmp_1451;
   std::complex<double> tmp_1453;
   std::complex<double> tmp_1454;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1454 += Conj(ZEL(gI2,j1))*ZE(gI1,j1);
   }
   tmp_1453 += tmp_1454;
   tmp_1450 += (std::complex<double>(0.,0.7071067811865475)*g2*KroneckerDelta(1
      ,gO2)) * tmp_1453;
   std::complex<double> tmp_1455;
   std::complex<double> tmp_1456;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1457;
      std::complex<double> tmp_1458;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1458 += Ye(j1,j2)*ZE(gI1,3 + j1);
      }
      tmp_1457 += tmp_1458;
      tmp_1456 += (Conj(ZEL(gI2,j2))) * tmp_1457;
   }
   tmp_1455 += tmp_1456;
   tmp_1450 += (std::complex<double>(0,-1)*KroneckerDelta(2,gO2)) * tmp_1455;
   result += (std::complex<double>(0,-1)) * tmp_1450;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSeFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1459;
   std::complex<double> tmp_1460;
   std::complex<double> tmp_1461;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1461 += ZE(gI1,3 + j1)*ZER(gI2,j1);
   }
   tmp_1460 += tmp_1461;
   tmp_1459 += (std::complex<double>(0.,-1.0954451150103321)*g1*KroneckerDelta(
      0,gO1)) * tmp_1460;
   std::complex<double> tmp_1462;
   std::complex<double> tmp_1463;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1464;
      std::complex<double> tmp_1465;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1465 += Conj(Ye(j1,j2))*ZER(gI2,j1);
      }
      tmp_1464 += tmp_1465;
      tmp_1463 += (ZE(gI1,j2)) * tmp_1464;
   }
   tmp_1462 += tmp_1463;
   tmp_1459 += (std::complex<double>(0,-1)*KroneckerDelta(2,gO1)) * tmp_1462;
   result += (std::complex<double>(0,-1)) * tmp_1459;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSuFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1466;
   std::complex<double> tmp_1467;
   std::complex<double> tmp_1468;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1468 += Conj(ZUL(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1467 += tmp_1468;
   tmp_1466 += (std::complex<double>(0.,-0.18257418583505536)*g1*KroneckerDelta
      (0,gO2)) * tmp_1467;
   std::complex<double> tmp_1469;
   std::complex<double> tmp_1470;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1470 += Conj(ZUL(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1469 += tmp_1470;
   tmp_1466 += (std::complex<double>(0.,-0.7071067811865475)*g2*KroneckerDelta(
      1,gO2)) * tmp_1469;
   std::complex<double> tmp_1471;
   std::complex<double> tmp_1472;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1473;
      std::complex<double> tmp_1474;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1474 += Yu(j1,j2)*ZU(gI1,3 + j1);
      }
      tmp_1473 += tmp_1474;
      tmp_1472 += (Conj(ZUL(gI2,j2))) * tmp_1473;
   }
   tmp_1471 += tmp_1472;
   tmp_1466 += (std::complex<double>(0,-1)*KroneckerDelta(3,gO2)) * tmp_1471;
   result += (std::complex<double>(0,-1)) * tmp_1466;

   return result;
}

std::complex<double> CLASSNAME::CpUChiconjSuFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1475;
   std::complex<double> tmp_1476;
   std::complex<double> tmp_1477;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1477 += ZU(gI1,3 + j1)*ZUR(gI2,j1);
   }
   tmp_1476 += tmp_1477;
   tmp_1475 += (std::complex<double>(0.,0.7302967433402214)*g1*KroneckerDelta(0
      ,gO1)) * tmp_1476;
   std::complex<double> tmp_1478;
   std::complex<double> tmp_1479;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1480;
      std::complex<double> tmp_1481;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1481 += Conj(Yu(j1,j2))*ZUR(gI2,j1);
      }
      tmp_1480 += tmp_1481;
      tmp_1479 += (ZU(gI1,j2)) * tmp_1480;
   }
   tmp_1478 += tmp_1479;
   tmp_1475 += (std::complex<double>(0,-1)*KroneckerDelta(3,gO1)) * tmp_1478;
   result += (std::complex<double>(0,-1)) * tmp_1475;

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

std::complex<double> CLASSNAME::CpbarUChaconjSvFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1482;
   std::complex<double> tmp_1483;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1483 += Conj(ZEL(gI2,j1))*ZV(gI1,j1);
   }
   tmp_1482 += tmp_1483;
   result += (-(g2*KroneckerDelta(0,gO2))) * tmp_1482;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjSvFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1484;
   std::complex<double> tmp_1485;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1486;
      std::complex<double> tmp_1487;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1487 += Conj(Ye(j1,j2))*ZER(gI2,j1);
      }
      tmp_1486 += tmp_1487;
      tmp_1485 += (ZV(gI1,j2)) * tmp_1486;
   }
   tmp_1484 += tmp_1485;
   result += (KroneckerDelta(1,gO1)) * tmp_1484;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFuSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1488;
   std::complex<double> tmp_1489;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1490;
      std::complex<double> tmp_1491;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1491 += Conj(ZUR(gI1,j1))*Yu(j1,j2);
      }
      tmp_1490 += tmp_1491;
      tmp_1489 += (Conj(ZD(gI2,j2))) * tmp_1490;
   }
   tmp_1488 += tmp_1489;
   result += (KroneckerDelta(1,gO2)) * tmp_1488;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFuSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1492;
   std::complex<double> tmp_1493;
   std::complex<double> tmp_1494;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1494 += Conj(ZD(gI2,j1))*ZUL(gI1,j1);
   }
   tmp_1493 += tmp_1494;
   tmp_1492 += (std::complex<double>(0,-1)*g2*KroneckerDelta(0,gO1)) * tmp_1493
      ;
   std::complex<double> tmp_1495;
   std::complex<double> tmp_1496;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1497;
      std::complex<double> tmp_1498;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1498 += Conj(Yd(j1,j2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_1497 += tmp_1498;
      tmp_1496 += (ZUL(gI1,j2)) * tmp_1497;
   }
   tmp_1495 += tmp_1496;
   tmp_1492 += (std::complex<double>(0,1)*KroneckerDelta(1,gO1)) * tmp_1495;
   result += (std::complex<double>(0,-1)) * tmp_1492;

   return result;
}

double CLASSNAME::CpbarUChabarFvSePL(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChabarFvSePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1499;
   std::complex<double> tmp_1500;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1500 += Conj(Ye(j1,gI1))*Conj(ZE(gI2,3 + j1));
   }
   tmp_1499 += tmp_1500;
   result += (KroneckerDelta(1,gO1)) * tmp_1499;
   if (gI1 < 3) {
      result += -(g2*Conj(ZE(gI2,gI1))*KroneckerDelta(0,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjSuFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1501;
   std::complex<double> tmp_1502;
   std::complex<double> tmp_1503;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1503 += Conj(ZDL(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1502 += tmp_1503;
   tmp_1501 += (std::complex<double>(0,-1)*g2*KroneckerDelta(0,gO2)) * tmp_1502
      ;
   std::complex<double> tmp_1504;
   std::complex<double> tmp_1505;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1506;
      std::complex<double> tmp_1507;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1507 += Yu(j1,j2)*ZU(gI1,3 + j1);
      }
      tmp_1506 += tmp_1507;
      tmp_1505 += (Conj(ZDL(gI2,j2))) * tmp_1506;
   }
   tmp_1504 += tmp_1505;
   tmp_1501 += (std::complex<double>(0,1)*KroneckerDelta(1,gO2)) * tmp_1504;
   result += (std::complex<double>(0,-1)) * tmp_1501;

   return result;
}

std::complex<double> CLASSNAME::CpbarUChaconjSuFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1508;
   std::complex<double> tmp_1509;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1510;
      std::complex<double> tmp_1511;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1511 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1510 += tmp_1511;
      tmp_1509 += (ZU(gI1,j2)) * tmp_1510;
   }
   tmp_1508 += tmp_1509;
   result += (KroneckerDelta(1,gO1)) * tmp_1508;

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

std::complex<double> CLASSNAME::CpbarUFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1512;
      std::complex<double> tmp_1513;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1513 += Conj(ZEL(gI2,j2))*Ye(gO2,j2);
      }
      tmp_1512 += tmp_1513;
      result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1512;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1514;
      std::complex<double> tmp_1515;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1515 += Conj(Ye(j1,gO1))*ZER(gI2,j1);
      }
      tmp_1514 += tmp_1515;
      result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1514;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeHpmFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += Conj(ZP(gI1,0))*Ye(gO2,gI2);
   }

   return result;
}

double CLASSNAME::CpbarUFeHpmFvPR(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1516;
      std::complex<double> tmp_1517;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1517 += Conj(ZEL(gI1,j2))*Ye(gO2,j2);
      }
      tmp_1516 += tmp_1517;
      result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) *
         tmp_1516;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeFeAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1518;
      std::complex<double> tmp_1519;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1519 += Conj(Ye(j1,gO1))*ZER(gI1,j1);
      }
      tmp_1518 += tmp_1519;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) *
         tmp_1518;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeSvChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1520;
      std::complex<double> tmp_1521;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1521 += Conj(ZV(gI1,j2))*Ye(gO2,j2);
      }
      tmp_1520 += tmp_1521;
      result += (Conj(UM(gI2,1))) * tmp_1520;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeSvChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -(g2*Conj(ZV(gI1,gO1))*UP(gI2,0));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeSeChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += -1.0954451150103321*g1*Conj(ZE(gI1,3 + gO2))*Conj(ZN(gI2,0))
         ;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_1522;
      std::complex<double> tmp_1523;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1523 += Conj(ZE(gI1,j2))*Ye(gO2,j2);
      }
      tmp_1522 += tmp_1523;
      result += (-Conj(ZN(gI2,2))) * tmp_1522;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeSeChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += 0.5477225575051661*g1*Conj(ZE(gI1,gO1))*ZN(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.7071067811865475*g2*Conj(ZE(gI1,gO1))*ZN(gI2,1);
   }
   if (gO1 < 3) {
      std::complex<double> tmp_1524;
      std::complex<double> tmp_1525;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1525 += Conj(Ye(j1,gO1))*Conj(ZE(gI1,3 + j1));
      }
      tmp_1524 += tmp_1525;
      result += (-ZN(gI2,2)) * tmp_1524;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.7745966692414834*g1*Cos(ThetaW())*ZER(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVPFePL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.3872983346207417*g1*Conj(ZEL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.5*g2*Conj(ZEL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

double CLASSNAME::CpbarUFeVWmFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

double CLASSNAME::CpbarUFeVWmFvPL(unsigned gO1, unsigned gI2) const
{
   double result = 0.0;

   if (gI2 < 3) {
      result += -0.7071067811865475*g2*KroneckerDelta(gI2,gO1);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVZFePR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.7745966692414834*g1*Sin(ThetaW())*ZER(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFeVZFePL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g2*Conj(ZEL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += -0.3872983346207417*g1*Conj(ZEL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1526;
      std::complex<double> tmp_1527;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1527 += Conj(ZDL(gI2,j2))*Yd(gO2,j2);
      }
      tmp_1526 += tmp_1527;
      result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1526;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1528;
      std::complex<double> tmp_1529;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1529 += Conj(Yd(j1,gO1))*ZDR(gI2,j1);
      }
      tmp_1528 += tmp_1529;
      result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1528;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdHpmFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1530;
      std::complex<double> tmp_1531;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1531 += Conj(ZUL(gI2,j2))*Yd(gO2,j2);
      }
      tmp_1530 += tmp_1531;
      result += (Conj(ZP(gI1,0))) * tmp_1530;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdHpmFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1532;
      std::complex<double> tmp_1533;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1533 += Conj(Yu(j1,gO1))*ZUR(gI2,j1);
      }
      tmp_1532 += tmp_1533;
      result += (Conj(ZP(gI1,1))) * tmp_1532;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdFdAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1534;
      std::complex<double> tmp_1535;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1535 += Conj(ZDL(gI1,j2))*Yd(gO2,j2);
      }
      tmp_1534 += tmp_1535;
      result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) *
         tmp_1534;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdFdAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1536;
      std::complex<double> tmp_1537;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1537 += Conj(Yd(j1,gO1))*ZDR(gI1,j1);
      }
      tmp_1536 += tmp_1537;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) *
         tmp_1536;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSuChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1538;
      std::complex<double> tmp_1539;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1539 += Conj(ZU(gI1,j2))*Yd(gO2,j2);
      }
      tmp_1538 += tmp_1539;
      result += (Conj(UM(gI2,1))) * tmp_1538;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSuChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -(g2*Conj(ZU(gI1,gO1))*UP(gI2,0));
   }
   if (gO1 < 3) {
      std::complex<double> tmp_1540;
      std::complex<double> tmp_1541;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1541 += Conj(Yu(j1,gO1))*Conj(ZU(gI1,3 + j1));
      }
      tmp_1540 += tmp_1541;
      result += (UP(gI2,1)) * tmp_1540;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSdChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += -0.3651483716701107*g1*Conj(ZD(gI1,3 + gO2))*Conj(ZN(gI2,0))
         ;
   }
   if (gO2 < 3) {
      std::complex<double> tmp_1542;
      std::complex<double> tmp_1543;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1543 += Conj(ZD(gI1,j2))*Yd(gO2,j2);
      }
      tmp_1542 += tmp_1543;
      result += (-Conj(ZN(gI2,2))) * tmp_1542;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSdChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.18257418583505536*g1*Conj(ZD(gI1,gO1))*ZN(gI2,0);
   }
   if (gO1 < 3) {
      result += 0.7071067811865475*g2*Conj(ZD(gI1,gO1))*ZN(gI2,1);
   }
   if (gO1 < 3) {
      std::complex<double> tmp_1544;
      std::complex<double> tmp_1545;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1545 += Conj(Yd(j1,gO1))*Conj(ZD(gI1,3 + j1));
      }
      tmp_1544 += tmp_1545;
      result += (-ZN(gI2,2)) * tmp_1544;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSdGluPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 1.4142135623730951*g3*PhaseGlu*Conj(ZD(gI1,3 + gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdSdGluPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZD(gI1,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVGFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*ZDR(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVGFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Conj(ZDL(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVPFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.2581988897471611*g1*Cos(ThetaW())*ZDR(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVPFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.12909944487358055*g1*Conj(ZDL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.5*g2*Conj(ZDL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

double CLASSNAME::CpbarUFdVWmFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVWmFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZUL(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVZFdPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.2581988897471611*g1*Sin(ThetaW())*ZDR(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFdVZFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5*g2*Conj(ZDL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.12909944487358055*g1*Conj(ZDL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuconjHpmFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1546;
      std::complex<double> tmp_1547;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1547 += Conj(ZDL(gI2,j2))*Yu(gO2,j2);
      }
      tmp_1546 += tmp_1547;
      result += (ZP(gI1,1)) * tmp_1546;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuconjHpmFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1548;
      std::complex<double> tmp_1549;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1549 += Conj(Yd(j1,gO1))*ZDR(gI2,j1);
      }
      tmp_1548 += tmp_1549;
      result += (ZP(gI1,0)) * tmp_1548;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1550;
      std::complex<double> tmp_1551;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1551 += Conj(ZUL(gI2,j2))*Yu(gO2,j2);
      }
      tmp_1550 += tmp_1551;
      result += (-0.7071067811865475*ZH(gI1,1)) * tmp_1550;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1552;
      std::complex<double> tmp_1553;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1553 += Conj(Yu(j1,gO1))*ZUR(gI2,j1);
      }
      tmp_1552 += tmp_1553;
      result += (-0.7071067811865475*ZH(gI1,1)) * tmp_1552;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFubarChaSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1554;
      std::complex<double> tmp_1555;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1555 += Conj(ZD(gI2,j2))*Yu(gO2,j2);
      }
      tmp_1554 += tmp_1555;
      result += (Conj(UP(gI1,1))) * tmp_1554;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFubarChaSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -(g2*Conj(ZD(gI2,gO1))*UM(gI1,0));
   }
   if (gO1 < 3) {
      std::complex<double> tmp_1556;
      std::complex<double> tmp_1557;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1557 += Conj(Yd(j1,gO1))*Conj(ZD(gI2,3 + j1));
      }
      tmp_1556 += tmp_1557;
      result += (UM(gI1,1)) * tmp_1556;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuFuAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      std::complex<double> tmp_1558;
      std::complex<double> tmp_1559;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1559 += Conj(ZUL(gI1,j2))*Yu(gO2,j2);
      }
      tmp_1558 += tmp_1559;
      result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,1)) *
         tmp_1558;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuFuAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      std::complex<double> tmp_1560;
      std::complex<double> tmp_1561;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1561 += Conj(Yu(j1,gO1))*ZUR(gI1,j1);
      }
      tmp_1560 += tmp_1561;
      result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,1)) *
         tmp_1560;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuSuChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 0.7302967433402214*g1*Conj(ZN(gI2,0))*Conj(ZU(gI1,3 + gO2));
   }
   if (gO2 < 3) {
      std::complex<double> tmp_1562;
      std::complex<double> tmp_1563;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         tmp_1563 += Conj(ZU(gI1,j2))*Yu(gO2,j2);
      }
      tmp_1562 += tmp_1563;
      result += (-Conj(ZN(gI2,3))) * tmp_1562;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuSuChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.18257418583505536*g1*Conj(ZU(gI1,gO1))*ZN(gI2,0);
   }
   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZU(gI1,gO1))*ZN(gI2,1);
   }
   if (gO1 < 3) {
      std::complex<double> tmp_1564;
      std::complex<double> tmp_1565;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1565 += Conj(Yu(j1,gO1))*Conj(ZU(gI1,3 + j1));
      }
      tmp_1564 += tmp_1565;
      result += (-ZN(gI2,3)) * tmp_1564;
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuSuGluPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   if (gO2 < 3) {
      result += 1.4142135623730951*g3*PhaseGlu*Conj(ZU(gI1,3 + gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuSuGluPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -1.4142135623730951*g3*Conj(PhaseGlu)*Conj(ZU(gI1,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVGFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*ZUR(gI2,gO2));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVGFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -(g3*Conj(ZUL(gI2,gO1)));
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVPFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.5163977794943222*g1*Cos(ThetaW())*ZUR(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVPFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.12909944487358055*g1*Conj(ZUL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += -0.5*g2*Conj(ZUL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVZFuPR(unsigned gO2, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += 0.5163977794943222*g1*Sin(ThetaW())*ZUR(gI2,gO2);
   }

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuVZFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.5*g2*Conj(ZUL(gI2,gO1))*Cos(ThetaW());
   }
   if (gI2 < 3) {
      result += 0.12909944487358055*g1*Conj(ZUL(gI2,gO1))*Sin(ThetaW());
   }

   return result;
}

double CLASSNAME::CpbarUFuconjVWmFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarUFuconjVWmFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gO1 < 3) {
      result += -0.7071067811865475*g2*Conj(ZDL(gI2,gO1));
   }

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSdFdPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1566;
   std::complex<double> tmp_1567;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1567 += Conj(ZDL(gI2,j1))*ZD(gI1,j1);
   }
   tmp_1566 += tmp_1567;
   result += (-1.4142135623730951*g3*PhaseGlu) * tmp_1566;

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSdFdPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1568;
   std::complex<double> tmp_1569;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1569 += ZD(gI1,3 + j1)*ZDR(gI2,j1);
   }
   tmp_1568 += tmp_1569;
   result += (1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_1568;

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSuFuPL(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1570;
   std::complex<double> tmp_1571;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1571 += Conj(ZUL(gI2,j1))*ZU(gI1,j1);
   }
   tmp_1570 += tmp_1571;
   result += (-1.4142135623730951*g3*PhaseGlu) * tmp_1570;

   return result;
}

std::complex<double> CLASSNAME::CpGluconjSuFuPR(unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1572;
   std::complex<double> tmp_1573;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1573 += ZU(gI1,3 + j1)*ZUR(gI2,j1);
   }
   tmp_1572 += tmp_1573;
   result += (1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_1572;

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

std::complex<double> CLASSNAME::CpbarFehhFePL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1574;
   std::complex<double> tmp_1575;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1576;
      std::complex<double> tmp_1577;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1577 += Conj(ZER(gO2,j1))*Ye(j1,j2);
      }
      tmp_1576 += tmp_1577;
      tmp_1575 += (Conj(ZEL(gI2,j2))) * tmp_1576;
   }
   tmp_1574 += tmp_1575;
   result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1574;

   return result;
}

std::complex<double> CLASSNAME::CpbarFehhFePR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1578;
   std::complex<double> tmp_1579;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1580;
      std::complex<double> tmp_1581;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1581 += Conj(Ye(j1,j2))*ZER(gI2,j1);
      }
      tmp_1580 += tmp_1581;
      tmp_1579 += (ZEL(gO1,j2)) * tmp_1580;
   }
   tmp_1578 += tmp_1579;
   result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1578;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeHpmFvPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1582;
   std::complex<double> tmp_1583;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1583 += Conj(ZER(gO2,j1))*Ye(j1,gI2);
   }
   tmp_1582 += tmp_1583;
   result += (Conj(ZP(gI1,0))) * tmp_1582;

   return result;
}

double CLASSNAME::CpbarFeHpmFvPR(unsigned , unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1584;
   std::complex<double> tmp_1585;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1586;
      std::complex<double> tmp_1587;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1587 += Conj(ZER(gO2,j1))*Ye(j1,j2);
      }
      tmp_1586 += tmp_1587;
      tmp_1585 += (Conj(ZEL(gI1,j2))) * tmp_1586;
   }
   tmp_1584 += tmp_1585;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) *
      tmp_1584;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeFeAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1588;
   std::complex<double> tmp_1589;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1590;
      std::complex<double> tmp_1591;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1591 += Conj(Ye(j1,j2))*ZER(gI1,j1);
      }
      tmp_1590 += tmp_1591;
      tmp_1589 += (ZEL(gO1,j2)) * tmp_1590;
   }
   tmp_1588 += tmp_1589;
   result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) * tmp_1588
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSvChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1592;
   std::complex<double> tmp_1593;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1594;
      std::complex<double> tmp_1595;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1595 += Conj(ZER(gO2,j1))*Ye(j1,j2);
      }
      tmp_1594 += tmp_1595;
      tmp_1593 += (Conj(ZV(gI1,j2))) * tmp_1594;
   }
   tmp_1592 += tmp_1593;
   result += (Conj(UM(gI2,1))) * tmp_1592;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSvChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1596;
   std::complex<double> tmp_1597;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1597 += Conj(ZV(gI1,j1))*ZEL(gO1,j1);
   }
   tmp_1596 += tmp_1597;
   result += (-(g2*UP(gI2,0))) * tmp_1596;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSeChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1598;
   std::complex<double> tmp_1599;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1599 += Conj(ZE(gI1,3 + j1))*Conj(ZER(gO2,j1));
   }
   tmp_1598 += tmp_1599;
   result += (-1.0954451150103321*g1*Conj(ZN(gI2,0))) * tmp_1598;
   std::complex<double> tmp_1600;
   std::complex<double> tmp_1601;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1602;
      std::complex<double> tmp_1603;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1603 += Conj(ZER(gO2,j1))*Ye(j1,j2);
      }
      tmp_1602 += tmp_1603;
      tmp_1601 += (Conj(ZE(gI1,j2))) * tmp_1602;
   }
   tmp_1600 += tmp_1601;
   result += (-Conj(ZN(gI2,2))) * tmp_1600;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeSeChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1604;
   std::complex<double> tmp_1605;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1605 += Conj(ZE(gI1,j1))*ZEL(gO1,j1);
   }
   tmp_1604 += tmp_1605;
   result += (0.7071067811865475*(0.7745966692414834*g1*ZN(gI2,0) + g2*ZN(gI2,1
      ))) * tmp_1604;
   std::complex<double> tmp_1606;
   std::complex<double> tmp_1607;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1608;
      std::complex<double> tmp_1609;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1609 += Conj(Ye(j1,j2))*Conj(ZE(gI1,3 + j1));
      }
      tmp_1608 += tmp_1609;
      tmp_1607 += (ZEL(gO1,j2)) * tmp_1608;
   }
   tmp_1606 += tmp_1607;
   result += (-ZN(gI2,2)) * tmp_1606;

   return result;
}

double CLASSNAME::CpbarFeVWmFvPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFeVWmFvPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   if (gI2 < 3) {
      result += -0.7071067811865475*g2*ZEL(gO1,gI2);
   }

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

std::complex<double> CLASSNAME::CpbarFdhhFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1610;
   std::complex<double> tmp_1611;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1612;
      std::complex<double> tmp_1613;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1613 += Conj(ZDR(gO2,j1))*Yd(j1,j2);
      }
      tmp_1612 += tmp_1613;
      tmp_1611 += (Conj(ZDL(gI2,j2))) * tmp_1612;
   }
   tmp_1610 += tmp_1611;
   result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1610;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdhhFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1614;
   std::complex<double> tmp_1615;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1616;
      std::complex<double> tmp_1617;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1617 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1616 += tmp_1617;
      tmp_1615 += (ZDL(gO1,j2)) * tmp_1616;
   }
   tmp_1614 += tmp_1615;
   result += (-0.7071067811865475*ZH(gI1,0)) * tmp_1614;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdHpmFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1618;
   std::complex<double> tmp_1619;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1620;
      std::complex<double> tmp_1621;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1621 += Conj(ZDR(gO2,j1))*Yd(j1,j2);
      }
      tmp_1620 += tmp_1621;
      tmp_1619 += (Conj(ZUL(gI2,j2))) * tmp_1620;
   }
   tmp_1618 += tmp_1619;
   result += (Conj(ZP(gI1,0))) * tmp_1618;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdHpmFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1622;
   std::complex<double> tmp_1623;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1624;
      std::complex<double> tmp_1625;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1625 += Conj(Yu(j1,j2))*ZUR(gI2,j1);
      }
      tmp_1624 += tmp_1625;
      tmp_1623 += (ZDL(gO1,j2)) * tmp_1624;
   }
   tmp_1622 += tmp_1623;
   result += (Conj(ZP(gI1,1))) * tmp_1622;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1626;
   std::complex<double> tmp_1627;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1628;
      std::complex<double> tmp_1629;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1629 += Conj(ZDR(gO2,j1))*Yd(j1,j2);
      }
      tmp_1628 += tmp_1629;
      tmp_1627 += (Conj(ZDL(gI1,j2))) * tmp_1628;
   }
   tmp_1626 += tmp_1627;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,0)) *
      tmp_1626;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdFdAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1630;
   std::complex<double> tmp_1631;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1632;
      std::complex<double> tmp_1633;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1633 += Conj(Yd(j1,j2))*ZDR(gI1,j1);
      }
      tmp_1632 += tmp_1633;
      tmp_1631 += (ZDL(gO1,j2)) * tmp_1632;
   }
   tmp_1630 += tmp_1631;
   result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,0)) * tmp_1630
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSuChaPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1634;
   std::complex<double> tmp_1635;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1636;
      std::complex<double> tmp_1637;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1637 += Conj(ZDR(gO2,j1))*Yd(j1,j2);
      }
      tmp_1636 += tmp_1637;
      tmp_1635 += (Conj(ZU(gI1,j2))) * tmp_1636;
   }
   tmp_1634 += tmp_1635;
   result += (Conj(UM(gI2,1))) * tmp_1634;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSuChaPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1638;
   std::complex<double> tmp_1639;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1639 += Conj(ZU(gI1,j1))*ZDL(gO1,j1);
   }
   tmp_1638 += tmp_1639;
   result += (-(g2*UP(gI2,0))) * tmp_1638;
   std::complex<double> tmp_1640;
   std::complex<double> tmp_1641;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1642;
      std::complex<double> tmp_1643;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1643 += Conj(Yu(j1,j2))*Conj(ZU(gI1,3 + j1));
      }
      tmp_1642 += tmp_1643;
      tmp_1641 += (ZDL(gO1,j2)) * tmp_1642;
   }
   tmp_1640 += tmp_1641;
   result += (UP(gI2,1)) * tmp_1640;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1644;
   std::complex<double> tmp_1645;
   std::complex<double> tmp_1646;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1646 += Conj(ZD(gI1,3 + j1))*Conj(ZDR(gO2,j1));
   }
   tmp_1645 += tmp_1646;
   tmp_1644 += (-1.0954451150103321*g1*Conj(ZN(gI2,0))) * tmp_1645;
   std::complex<double> tmp_1647;
   std::complex<double> tmp_1648;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1649;
      std::complex<double> tmp_1650;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1650 += Conj(ZDR(gO2,j1))*Yd(j1,j2);
      }
      tmp_1649 += tmp_1650;
      tmp_1648 += (Conj(ZD(gI1,j2))) * tmp_1649;
   }
   tmp_1647 += tmp_1648;
   tmp_1644 += (-3*Conj(ZN(gI2,2))) * tmp_1647;
   result += (0.3333333333333333) * tmp_1644;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1651;
   std::complex<double> tmp_1652;
   std::complex<double> tmp_1653;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1653 += Conj(ZD(gI1,j1))*ZDL(gO1,j1);
   }
   tmp_1652 += tmp_1653;
   tmp_1651 += (-1.4142135623730951*(0.7745966692414834*g1*ZN(gI2,0) - 3*g2*ZN(
      gI2,1))) * tmp_1652;
   std::complex<double> tmp_1654;
   std::complex<double> tmp_1655;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1656;
      std::complex<double> tmp_1657;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1657 += Conj(Yd(j1,j2))*Conj(ZD(gI1,3 + j1));
      }
      tmp_1656 += tmp_1657;
      tmp_1655 += (ZDL(gO1,j2)) * tmp_1656;
   }
   tmp_1654 += tmp_1655;
   tmp_1651 += (-6*ZN(gI2,2)) * tmp_1654;
   result += (0.16666666666666666) * tmp_1651;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdGluPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1658;
   std::complex<double> tmp_1659;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1659 += Conj(ZD(gI1,3 + j1))*Conj(ZDR(gO2,j1));
   }
   tmp_1658 += tmp_1659;
   result += (1.4142135623730951*g3*PhaseGlu) * tmp_1658;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdSdGluPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1660;
   std::complex<double> tmp_1661;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1661 += Conj(ZD(gI1,j1))*ZDL(gO1,j1);
   }
   tmp_1660 += tmp_1661;
   result += (-1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_1660;

   return result;
}

double CLASSNAME::CpbarFdVWmFuPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFdVWmFuPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1662;
   std::complex<double> tmp_1663;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1663 += Conj(ZUL(gI2,j1))*ZDL(gO1,j1);
   }
   tmp_1662 += tmp_1663;
   result += (-0.7071067811865475*g2) * tmp_1662;

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

std::complex<double> CLASSNAME::CpbarFuconjHpmFdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1664;
   std::complex<double> tmp_1665;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1666;
      std::complex<double> tmp_1667;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1667 += Conj(ZUR(gO2,j1))*Yu(j1,j2);
      }
      tmp_1666 += tmp_1667;
      tmp_1665 += (Conj(ZDL(gI2,j2))) * tmp_1666;
   }
   tmp_1664 += tmp_1665;
   result += (ZP(gI1,1)) * tmp_1664;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuconjHpmFdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1668;
   std::complex<double> tmp_1669;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1670;
      std::complex<double> tmp_1671;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1671 += Conj(Yd(j1,j2))*ZDR(gI2,j1);
      }
      tmp_1670 += tmp_1671;
      tmp_1669 += (ZUL(gO1,j2)) * tmp_1670;
   }
   tmp_1668 += tmp_1669;
   result += (ZP(gI1,0)) * tmp_1668;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1672;
   std::complex<double> tmp_1673;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1674;
      std::complex<double> tmp_1675;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1675 += Conj(ZUR(gO2,j1))*Yu(j1,j2);
      }
      tmp_1674 += tmp_1675;
      tmp_1673 += (Conj(ZUL(gI2,j2))) * tmp_1674;
   }
   tmp_1672 += tmp_1673;
   result += (-0.7071067811865475*ZH(gI1,1)) * tmp_1672;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuhhFuPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1676;
   std::complex<double> tmp_1677;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1678;
      std::complex<double> tmp_1679;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1679 += Conj(Yu(j1,j2))*ZUR(gI2,j1);
      }
      tmp_1678 += tmp_1679;
      tmp_1677 += (ZUL(gO1,j2)) * tmp_1678;
   }
   tmp_1676 += tmp_1677;
   result += (-0.7071067811865475*ZH(gI1,1)) * tmp_1676;

   return result;
}

std::complex<double> CLASSNAME::CpbarFubarChaSdPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1680;
   std::complex<double> tmp_1681;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1682;
      std::complex<double> tmp_1683;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1683 += Conj(ZUR(gO2,j1))*Yu(j1,j2);
      }
      tmp_1682 += tmp_1683;
      tmp_1681 += (Conj(ZD(gI2,j2))) * tmp_1682;
   }
   tmp_1680 += tmp_1681;
   result += (Conj(UP(gI1,1))) * tmp_1680;

   return result;
}

std::complex<double> CLASSNAME::CpbarFubarChaSdPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1684;
   std::complex<double> tmp_1685;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1685 += Conj(ZD(gI2,j1))*ZUL(gO1,j1);
   }
   tmp_1684 += tmp_1685;
   result += (-(g2*UM(gI1,0))) * tmp_1684;
   std::complex<double> tmp_1686;
   std::complex<double> tmp_1687;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1688;
      std::complex<double> tmp_1689;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1689 += Conj(Yd(j1,j2))*Conj(ZD(gI2,3 + j1));
      }
      tmp_1688 += tmp_1689;
      tmp_1687 += (ZUL(gO1,j2)) * tmp_1688;
   }
   tmp_1686 += tmp_1687;
   result += (UM(gI1,1)) * tmp_1686;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1690;
   std::complex<double> tmp_1691;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1692;
      std::complex<double> tmp_1693;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1693 += Conj(ZUR(gO2,j1))*Yu(j1,j2);
      }
      tmp_1692 += tmp_1693;
      tmp_1691 += (Conj(ZUL(gI1,j2))) * tmp_1692;
   }
   tmp_1690 += tmp_1691;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gI2,1)) *
      tmp_1690;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuFuAhPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1694;
   std::complex<double> tmp_1695;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1696;
      std::complex<double> tmp_1697;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1697 += Conj(Yu(j1,j2))*ZUR(gI1,j1);
      }
      tmp_1696 += tmp_1697;
      tmp_1695 += (ZUL(gO1,j2)) * tmp_1696;
   }
   tmp_1694 += tmp_1695;
   result += (std::complex<double>(0.,0.7071067811865475)*ZA(gI2,1)) * tmp_1694
      ;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuChiPL(unsigned gO2, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1698;
   std::complex<double> tmp_1699;
   std::complex<double> tmp_1700;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1700 += Conj(ZU(gI1,3 + j1))*Conj(ZUR(gO2,j1));
   }
   tmp_1699 += tmp_1700;
   tmp_1698 += (2.1908902300206643*g1*Conj(ZN(gI2,0))) * tmp_1699;
   std::complex<double> tmp_1701;
   std::complex<double> tmp_1702;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1703;
      std::complex<double> tmp_1704;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1704 += Conj(ZUR(gO2,j1))*Yu(j1,j2);
      }
      tmp_1703 += tmp_1704;
      tmp_1702 += (Conj(ZU(gI1,j2))) * tmp_1703;
   }
   tmp_1701 += tmp_1702;
   tmp_1698 += (-3*Conj(ZN(gI2,3))) * tmp_1701;
   result += (0.3333333333333333) * tmp_1698;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuChiPR(unsigned gO1, unsigned gI1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1705;
   std::complex<double> tmp_1706;
   std::complex<double> tmp_1707;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1707 += Conj(ZU(gI1,j1))*ZUL(gO1,j1);
   }
   tmp_1706 += tmp_1707;
   tmp_1705 += (-1.4142135623730951*(0.7745966692414834*g1*ZN(gI2,0) + 3*g2*ZN(
      gI2,1))) * tmp_1706;
   std::complex<double> tmp_1708;
   std::complex<double> tmp_1709;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_1710;
      std::complex<double> tmp_1711;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_1711 += Conj(Yu(j1,j2))*Conj(ZU(gI1,3 + j1));
      }
      tmp_1710 += tmp_1711;
      tmp_1709 += (ZUL(gO1,j2)) * tmp_1710;
   }
   tmp_1708 += tmp_1709;
   tmp_1705 += (-6*ZN(gI2,3)) * tmp_1708;
   result += (0.16666666666666666) * tmp_1705;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuGluPL(unsigned gO2, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1712;
   std::complex<double> tmp_1713;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1713 += Conj(ZU(gI1,3 + j1))*Conj(ZUR(gO2,j1));
   }
   tmp_1712 += tmp_1713;
   result += (1.4142135623730951*g3*PhaseGlu) * tmp_1712;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuSuGluPR(unsigned gO1, unsigned gI1, unsigned ) const
{
   std::complex<double> result;

   std::complex<double> tmp_1714;
   std::complex<double> tmp_1715;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1715 += Conj(ZU(gI1,j1))*ZUL(gO1,j1);
   }
   tmp_1714 += tmp_1715;
   result += (-1.4142135623730951*g3*Conj(PhaseGlu)) * tmp_1714;

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

double CLASSNAME::CpbarFuconjVWmFdPR(unsigned , unsigned ) const
{
   double result = 0.0;

   result = 0;

   return result;
}

std::complex<double> CLASSNAME::CpbarFuconjVWmFdPL(unsigned gO1, unsigned gI2) const
{
   std::complex<double> result;

   std::complex<double> tmp_1716;
   std::complex<double> tmp_1717;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_1717 += Conj(ZDL(gI2,j1))*ZUL(gO1,j1);
   }
   tmp_1716 += tmp_1717;
   result += (-0.7071067811865475*g2) * tmp_1716;

   return result;
}


std::complex<double> CLASSNAME::self_energy_Sd(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*A0(MVWm)*CpUSdconjUSdconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSdconjUSdVZVZ(gO1,gO2);
   std::complex<double> tmp_1718;
   std::complex<double> tmp_1719;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1719 += A0(MAh(gI1))*CpUSdconjUSdAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1718 += tmp_1719;
   result += (-0.5) * tmp_1718;
   std::complex<double> tmp_1720;
   std::complex<double> tmp_1721;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1721 += A0(MHpm(gI1))*CpUSdconjUSdconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1720 += tmp_1721;
   result += (-1) * tmp_1720;
   std::complex<double> tmp_1722;
   std::complex<double> tmp_1723;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1723 += A0(Mhh(gI1))*CpUSdconjUSdhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1722 += tmp_1723;
   result += (-0.5) * tmp_1722;
   std::complex<double> tmp_1724;
   std::complex<double> tmp_1725;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1725 += A0(MSv(gI1))*CpUSdconjUSdconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1724 += tmp_1725;
   result += (-1) * tmp_1724;
   std::complex<double> tmp_1726;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1727;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1727 += (Conj(CpconjUSdFuChaPL(gO2,gI1,gI2))*
            CpconjUSdFuChaPL(gO1,gI1,gI2) + Conj(CpconjUSdFuChaPR(gO2,gI1,gI2))*
            CpconjUSdFuChaPR(gO1,gI1,gI2))*G0(p,MFu(gI1),MCha(gI2));
      }
      tmp_1726 += tmp_1727;
   }
   result += tmp_1726;
   std::complex<double> tmp_1728;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1729;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1729 += (Conj(CpconjUSdFdChiPL(gO2,gI1,gI2))*
            CpconjUSdFdChiPL(gO1,gI1,gI2) + Conj(CpconjUSdFdChiPR(gO2,gI1,gI2))*
            CpconjUSdFdChiPR(gO1,gI1,gI2))*G0(p,MFd(gI1),MChi(gI2));
      }
      tmp_1728 += tmp_1729;
   }
   result += tmp_1728;
   std::complex<double> tmp_1730;
   std::complex<double> tmp_1731;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1732;
      std::complex<double> tmp_1733;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1733 += B0(p,MFd(gI1),MChi(gI2))*(Conj(CpconjUSdFdChiPR(gO2,
            gI1,gI2))*CpconjUSdFdChiPL(gO1,gI1,gI2) + Conj(CpconjUSdFdChiPL(gO2,
            gI1,gI2))*CpconjUSdFdChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1732 += tmp_1733;
      tmp_1731 += (MFd(gI1)) * tmp_1732;
   }
   tmp_1730 += tmp_1731;
   result += (-2) * tmp_1730;
   std::complex<double> tmp_1734;
   std::complex<double> tmp_1735;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1736;
      std::complex<double> tmp_1737;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1737 += B0(p,MFu(gI1),MCha(gI2))*(Conj(CpconjUSdFuChaPR(gO2,
            gI1,gI2))*CpconjUSdFuChaPL(gO1,gI1,gI2) + Conj(CpconjUSdFuChaPL(gO2,
            gI1,gI2))*CpconjUSdFuChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_1736 += tmp_1737;
      tmp_1735 += (MFu(gI1)) * tmp_1736;
   }
   tmp_1734 += tmp_1735;
   result += (-2) * tmp_1734;
   std::complex<double> tmp_1738;
   std::complex<double> tmp_1739;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1739 += A0(MSd(gI1))*CpUSdconjUSdconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1738 += tmp_1739;
   result += (-1) * tmp_1738;
   std::complex<double> tmp_1740;
   std::complex<double> tmp_1741;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1741 += A0(MSe(gI1))*CpUSdconjUSdconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1740 += tmp_1741;
   result += (-1) * tmp_1740;
   std::complex<double> tmp_1742;
   std::complex<double> tmp_1743;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1743 += A0(MSu(gI1))*CpUSdconjUSdconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1742 += tmp_1743;
   result += (-1) * tmp_1742;
   std::complex<double> tmp_1744;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1745;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1745 += B0(p,MSd(gI1),MAh(gI2))*Conj(CpconjUSdSdAh(gO2,gI1,
            gI2))*CpconjUSdSdAh(gO1,gI1,gI2);
      }
      tmp_1744 += tmp_1745;
   }
   result += tmp_1744;
   std::complex<double> tmp_1746;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1747;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1747 += B0(p,MSd(gI1),Mhh(gI2))*Conj(CpconjUSdSdhh(gO2,gI1,
            gI2))*CpconjUSdSdhh(gO1,gI1,gI2);
      }
      tmp_1746 += tmp_1747;
   }
   result += tmp_1746;
   std::complex<double> tmp_1748;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1749;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1749 += B0(p,MSu(gI1),MHpm(gI2))*Conj(CpconjUSdSuHpm(gO2,gI1
            ,gI2))*CpconjUSdSuHpm(gO1,gI1,gI2);
      }
      tmp_1748 += tmp_1749;
   }
   result += tmp_1748;
   std::complex<double> tmp_1750;
   std::complex<double> tmp_1751;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1751 += (Conj(CpconjUSdGluFdPL(gO2,1,gI2))*CpconjUSdGluFdPL(gO1,1,
         gI2) + Conj(CpconjUSdGluFdPR(gO2,1,gI2))*CpconjUSdGluFdPR(gO1,1,gI2))*G0(
         p,MGlu,MFd(gI2));
   }
   tmp_1750 += tmp_1751;
   result += (1.3333333333333333) * tmp_1750;
   std::complex<double> tmp_1752;
   std::complex<double> tmp_1753;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1753 += Conj(CpconjUSdVGSd(gO2,gI2))*CpconjUSdVGSd(gO1,gI2)*F0(p,
         MSd(gI2),0);
   }
   tmp_1752 += tmp_1753;
   result += (1.3333333333333333) * tmp_1752;
   std::complex<double> tmp_1754;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1754 += Conj(CpconjUSdVPSd(gO2,gI2))*CpconjUSdVPSd(gO1,gI2)*F0(p,
         MSd(gI2),0);
   }
   result += tmp_1754;
   std::complex<double> tmp_1755;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1755 += Conj(CpconjUSdVZSd(gO2,gI2))*CpconjUSdVZSd(gO1,gI2)*F0(p,
         MSd(gI2),MVZ);
   }
   result += tmp_1755;
   std::complex<double> tmp_1756;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1756 += Conj(CpconjUSdVWmSu(gO2,gI2))*CpconjUSdVWmSu(gO1,gI2)*F0(p
         ,MSu(gI2),MVWm);
   }
   result += tmp_1756;
   std::complex<double> tmp_1757;
   std::complex<double> tmp_1758;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1758 += B0(p,MGlu,MFd(gI2))*(Conj(CpconjUSdGluFdPR(gO2,1,gI2))*
         CpconjUSdGluFdPL(gO1,1,gI2) + Conj(CpconjUSdGluFdPL(gO2,1,gI2))*
         CpconjUSdGluFdPR(gO1,1,gI2))*MFd(gI2);
   }
   tmp_1757 += tmp_1758;
   result += (-2.6666666666666665*MGlu) * tmp_1757;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Sv(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*A0(MVWm)*CpUSvconjUSvconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSvconjUSvVZVZ(gO1,gO2);
   std::complex<double> tmp_1759;
   std::complex<double> tmp_1760;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1760 += A0(MAh(gI1))*CpUSvconjUSvAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1759 += tmp_1760;
   result += (-0.5) * tmp_1759;
   std::complex<double> tmp_1761;
   std::complex<double> tmp_1762;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1762 += A0(MHpm(gI1))*CpUSvconjUSvconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1761 += tmp_1762;
   result += (-1) * tmp_1761;
   std::complex<double> tmp_1763;
   std::complex<double> tmp_1764;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1764 += A0(Mhh(gI1))*CpUSvconjUSvhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1763 += tmp_1764;
   result += (-0.5) * tmp_1763;
   std::complex<double> tmp_1765;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1766;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1766 += (Conj(CpconjUSvbarChaFePL(gO2,gI1,gI2))*
            CpconjUSvbarChaFePL(gO1,gI1,gI2) + Conj(CpconjUSvbarChaFePR(gO2,gI1,
            gI2))*CpconjUSvbarChaFePR(gO1,gI1,gI2))*G0(p,MCha(gI1),MFe(gI2));
      }
      tmp_1765 += tmp_1766;
   }
   result += tmp_1765;
   std::complex<double> tmp_1767;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1768;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1768 += B0(p,MHpm(gI1),MSe(gI2))*Conj(CpconjUSvconjHpmSe(gO2
            ,gI1,gI2))*CpconjUSvconjHpmSe(gO1,gI1,gI2);
      }
      tmp_1767 += tmp_1768;
   }
   result += tmp_1767;
   std::complex<double> tmp_1769;
   std::complex<double> tmp_1770;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1771;
      std::complex<double> tmp_1772;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1772 += B0(p,MCha(gI1),MFe(gI2))*(Conj(CpconjUSvbarChaFePR(
            gO2,gI1,gI2))*CpconjUSvbarChaFePL(gO1,gI1,gI2) + Conj(
            CpconjUSvbarChaFePL(gO2,gI1,gI2))*CpconjUSvbarChaFePR(gO1,gI1,gI2))*
            MFe(gI2);
      }
      tmp_1771 += tmp_1772;
      tmp_1770 += (MCha(gI1)) * tmp_1771;
   }
   tmp_1769 += tmp_1770;
   result += (-2) * tmp_1769;
   std::complex<double> tmp_1773;
   std::complex<double> tmp_1774;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1774 += A0(MSv(gI1))*CpUSvconjUSvconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1773 += tmp_1774;
   result += (-1) * tmp_1773;
   std::complex<double> tmp_1775;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1776;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1776 += B0(p,MSv(gI1),Mhh(gI2))*Conj(CpconjUSvSvhh(gO2,gI1,
            gI2))*CpconjUSvSvhh(gO1,gI1,gI2);
      }
      tmp_1775 += tmp_1776;
   }
   result += tmp_1775;
   std::complex<double> tmp_1777;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1778;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1778 += (Conj(CpconjUSvFvChiPL(gO2,gI1,gI2))*
            CpconjUSvFvChiPL(gO1,gI1,gI2) + Conj(CpconjUSvFvChiPR(gO2,gI1,gI2))*
            CpconjUSvFvChiPR(gO1,gI1,gI2))*G0(p,MFv(gI1),MChi(gI2));
      }
      tmp_1777 += tmp_1778;
   }
   result += tmp_1777;
   std::complex<double> tmp_1779;
   std::complex<double> tmp_1780;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1781;
      std::complex<double> tmp_1782;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1782 += B0(p,MFv(gI1),MChi(gI2))*(Conj(CpconjUSvFvChiPR(gO2,
            gI1,gI2))*CpconjUSvFvChiPL(gO1,gI1,gI2) + Conj(CpconjUSvFvChiPL(gO2,
            gI1,gI2))*CpconjUSvFvChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1781 += tmp_1782;
      tmp_1780 += (MFv(gI1)) * tmp_1781;
   }
   tmp_1779 += tmp_1780;
   result += (-2) * tmp_1779;
   std::complex<double> tmp_1783;
   std::complex<double> tmp_1784;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1784 += A0(MSd(gI1))*CpUSvconjUSvconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1783 += tmp_1784;
   result += (-3) * tmp_1783;
   std::complex<double> tmp_1785;
   std::complex<double> tmp_1786;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1786 += A0(MSe(gI1))*CpUSvconjUSvconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1785 += tmp_1786;
   result += (-1) * tmp_1785;
   std::complex<double> tmp_1787;
   std::complex<double> tmp_1788;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1788 += A0(MSu(gI1))*CpUSvconjUSvconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1787 += tmp_1788;
   result += (-3) * tmp_1787;
   std::complex<double> tmp_1789;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1789 += Conj(CpconjUSvVZSv(gO2,gI2))*CpconjUSvVZSv(gO1,gI2)*F0(p,
         MSv(gI2),MVZ);
   }
   result += tmp_1789;
   std::complex<double> tmp_1790;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1790 += Conj(CpconjUSvconjVWmSe(gO2,gI2))*CpconjUSvconjVWmSe(gO1,
         gI2)*F0(p,MSe(gI2),MVWm);
   }
   result += tmp_1790;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Su(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*A0(MVWm)*CpUSuconjUSuconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSuconjUSuVZVZ(gO1,gO2);
   std::complex<double> tmp_1791;
   std::complex<double> tmp_1792;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1792 += A0(MAh(gI1))*CpUSuconjUSuAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1791 += tmp_1792;
   result += (-0.5) * tmp_1791;
   std::complex<double> tmp_1793;
   std::complex<double> tmp_1794;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1794 += A0(MHpm(gI1))*CpUSuconjUSuconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1793 += tmp_1794;
   result += (-1) * tmp_1793;
   std::complex<double> tmp_1795;
   std::complex<double> tmp_1796;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1796 += A0(Mhh(gI1))*CpUSuconjUSuhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1795 += tmp_1796;
   result += (-0.5) * tmp_1795;
   std::complex<double> tmp_1797;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1798;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1798 += (Conj(CpconjUSubarChaFdPL(gO2,gI1,gI2))*
            CpconjUSubarChaFdPL(gO1,gI1,gI2) + Conj(CpconjUSubarChaFdPR(gO2,gI1,
            gI2))*CpconjUSubarChaFdPR(gO1,gI1,gI2))*G0(p,MCha(gI1),MFd(gI2));
      }
      tmp_1797 += tmp_1798;
   }
   result += tmp_1797;
   std::complex<double> tmp_1799;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1800;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1800 += B0(p,MHpm(gI1),MSd(gI2))*Conj(CpconjUSuconjHpmSd(gO2
            ,gI1,gI2))*CpconjUSuconjHpmSd(gO1,gI1,gI2);
      }
      tmp_1799 += tmp_1800;
   }
   result += tmp_1799;
   std::complex<double> tmp_1801;
   std::complex<double> tmp_1802;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1803;
      std::complex<double> tmp_1804;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1804 += B0(p,MCha(gI1),MFd(gI2))*(Conj(CpconjUSubarChaFdPR(
            gO2,gI1,gI2))*CpconjUSubarChaFdPL(gO1,gI1,gI2) + Conj(
            CpconjUSubarChaFdPL(gO2,gI1,gI2))*CpconjUSubarChaFdPR(gO1,gI1,gI2))*
            MFd(gI2);
      }
      tmp_1803 += tmp_1804;
      tmp_1802 += (MCha(gI1)) * tmp_1803;
   }
   tmp_1801 += tmp_1802;
   result += (-2) * tmp_1801;
   std::complex<double> tmp_1805;
   std::complex<double> tmp_1806;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1806 += A0(MSv(gI1))*CpUSuconjUSuconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1805 += tmp_1806;
   result += (-1) * tmp_1805;
   std::complex<double> tmp_1807;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1808;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1808 += (Conj(CpconjUSuFuChiPL(gO2,gI1,gI2))*
            CpconjUSuFuChiPL(gO1,gI1,gI2) + Conj(CpconjUSuFuChiPR(gO2,gI1,gI2))*
            CpconjUSuFuChiPR(gO1,gI1,gI2))*G0(p,MFu(gI1),MChi(gI2));
      }
      tmp_1807 += tmp_1808;
   }
   result += tmp_1807;
   std::complex<double> tmp_1809;
   std::complex<double> tmp_1810;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1811;
      std::complex<double> tmp_1812;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1812 += B0(p,MFu(gI1),MChi(gI2))*(Conj(CpconjUSuFuChiPR(gO2,
            gI1,gI2))*CpconjUSuFuChiPL(gO1,gI1,gI2) + Conj(CpconjUSuFuChiPL(gO2,
            gI1,gI2))*CpconjUSuFuChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1811 += tmp_1812;
      tmp_1810 += (MFu(gI1)) * tmp_1811;
   }
   tmp_1809 += tmp_1810;
   result += (-2) * tmp_1809;
   std::complex<double> tmp_1813;
   std::complex<double> tmp_1814;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1814 += A0(MSd(gI1))*CpUSuconjUSuconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1813 += tmp_1814;
   result += (-1) * tmp_1813;
   std::complex<double> tmp_1815;
   std::complex<double> tmp_1816;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1816 += A0(MSe(gI1))*CpUSuconjUSuconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1815 += tmp_1816;
   result += (-1) * tmp_1815;
   std::complex<double> tmp_1817;
   std::complex<double> tmp_1818;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1818 += A0(MSu(gI1))*CpUSuconjUSuconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1817 += tmp_1818;
   result += (-1) * tmp_1817;
   std::complex<double> tmp_1819;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1820;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1820 += B0(p,MSu(gI1),MAh(gI2))*Conj(CpconjUSuSuAh(gO2,gI1,
            gI2))*CpconjUSuSuAh(gO1,gI1,gI2);
      }
      tmp_1819 += tmp_1820;
   }
   result += tmp_1819;
   std::complex<double> tmp_1821;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1822;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1822 += B0(p,MSu(gI1),Mhh(gI2))*Conj(CpconjUSuSuhh(gO2,gI1,
            gI2))*CpconjUSuSuhh(gO1,gI1,gI2);
      }
      tmp_1821 += tmp_1822;
   }
   result += tmp_1821;
   std::complex<double> tmp_1823;
   std::complex<double> tmp_1824;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1824 += (Conj(CpconjUSuGluFuPL(gO2,1,gI2))*CpconjUSuGluFuPL(gO1,1,
         gI2) + Conj(CpconjUSuGluFuPR(gO2,1,gI2))*CpconjUSuGluFuPR(gO1,1,gI2))*G0(
         p,MGlu,MFu(gI2));
   }
   tmp_1823 += tmp_1824;
   result += (1.3333333333333333) * tmp_1823;
   std::complex<double> tmp_1825;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1825 += Conj(CpconjUSuconjVWmSd(gO2,gI2))*CpconjUSuconjVWmSd(gO1,
         gI2)*F0(p,MSd(gI2),MVWm);
   }
   result += tmp_1825;
   std::complex<double> tmp_1826;
   std::complex<double> tmp_1827;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1827 += Conj(CpconjUSuVGSu(gO2,gI2))*CpconjUSuVGSu(gO1,gI2)*F0(p,
         MSu(gI2),0);
   }
   tmp_1826 += tmp_1827;
   result += (1.3333333333333333) * tmp_1826;
   std::complex<double> tmp_1828;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1828 += Conj(CpconjUSuVPSu(gO2,gI2))*CpconjUSuVPSu(gO1,gI2)*F0(p,
         MSu(gI2),0);
   }
   result += tmp_1828;
   std::complex<double> tmp_1829;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1829 += Conj(CpconjUSuVZSu(gO2,gI2))*CpconjUSuVZSu(gO1,gI2)*F0(p,
         MSu(gI2),MVZ);
   }
   result += tmp_1829;
   std::complex<double> tmp_1830;
   std::complex<double> tmp_1831;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1831 += B0(p,MGlu,MFu(gI2))*(Conj(CpconjUSuGluFuPR(gO2,1,gI2))*
         CpconjUSuGluFuPL(gO1,1,gI2) + Conj(CpconjUSuGluFuPL(gO2,1,gI2))*
         CpconjUSuGluFuPR(gO1,1,gI2))*MFu(gI2);
   }
   tmp_1830 += tmp_1831;
   result += (-2.6666666666666665*MGlu) * tmp_1830;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Se(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*A0(MVWm)*CpUSeconjUSeconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUSeconjUSeVZVZ(gO1,gO2);
   std::complex<double> tmp_1832;
   std::complex<double> tmp_1833;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1833 += A0(MAh(gI1))*CpUSeconjUSeAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1832 += tmp_1833;
   result += (-0.5) * tmp_1832;
   std::complex<double> tmp_1834;
   std::complex<double> tmp_1835;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1835 += A0(MHpm(gI1))*CpUSeconjUSeconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1834 += tmp_1835;
   result += (-1) * tmp_1834;
   std::complex<double> tmp_1836;
   std::complex<double> tmp_1837;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1837 += A0(Mhh(gI1))*CpUSeconjUSehhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1836 += tmp_1837;
   result += (-0.5) * tmp_1836;
   std::complex<double> tmp_1838;
   std::complex<double> tmp_1839;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1839 += A0(MSv(gI1))*CpUSeconjUSeconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1838 += tmp_1839;
   result += (-1) * tmp_1838;
   std::complex<double> tmp_1840;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1841;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1841 += B0(p,MSv(gI1),MHpm(gI2))*Conj(CpconjUSeSvHpm(gO2,gI1
            ,gI2))*CpconjUSeSvHpm(gO1,gI1,gI2);
      }
      tmp_1840 += tmp_1841;
   }
   result += tmp_1840;
   std::complex<double> tmp_1842;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1843;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1843 += (Conj(CpconjUSeFvChaPL(gO2,gI1,gI2))*
            CpconjUSeFvChaPL(gO1,gI1,gI2) + Conj(CpconjUSeFvChaPR(gO2,gI1,gI2))*
            CpconjUSeFvChaPR(gO1,gI1,gI2))*G0(p,MFv(gI1),MCha(gI2));
      }
      tmp_1842 += tmp_1843;
   }
   result += tmp_1842;
   std::complex<double> tmp_1844;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1845;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1845 += (Conj(CpconjUSeFeChiPL(gO2,gI1,gI2))*
            CpconjUSeFeChiPL(gO1,gI1,gI2) + Conj(CpconjUSeFeChiPR(gO2,gI1,gI2))*
            CpconjUSeFeChiPR(gO1,gI1,gI2))*G0(p,MFe(gI1),MChi(gI2));
      }
      tmp_1844 += tmp_1845;
   }
   result += tmp_1844;
   std::complex<double> tmp_1846;
   std::complex<double> tmp_1847;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1848;
      std::complex<double> tmp_1849;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1849 += B0(p,MFe(gI1),MChi(gI2))*(Conj(CpconjUSeFeChiPR(gO2,
            gI1,gI2))*CpconjUSeFeChiPL(gO1,gI1,gI2) + Conj(CpconjUSeFeChiPL(gO2,
            gI1,gI2))*CpconjUSeFeChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1848 += tmp_1849;
      tmp_1847 += (MFe(gI1)) * tmp_1848;
   }
   tmp_1846 += tmp_1847;
   result += (-2) * tmp_1846;
   std::complex<double> tmp_1850;
   std::complex<double> tmp_1851;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1852;
      std::complex<double> tmp_1853;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1853 += B0(p,MFv(gI1),MCha(gI2))*(Conj(CpconjUSeFvChaPR(gO2,
            gI1,gI2))*CpconjUSeFvChaPL(gO1,gI1,gI2) + Conj(CpconjUSeFvChaPL(gO2,
            gI1,gI2))*CpconjUSeFvChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_1852 += tmp_1853;
      tmp_1851 += (MFv(gI1)) * tmp_1852;
   }
   tmp_1850 += tmp_1851;
   result += (-2) * tmp_1850;
   std::complex<double> tmp_1854;
   std::complex<double> tmp_1855;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1855 += A0(MSd(gI1))*CpUSeconjUSeconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1854 += tmp_1855;
   result += (-3) * tmp_1854;
   std::complex<double> tmp_1856;
   std::complex<double> tmp_1857;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1857 += A0(MSe(gI1))*CpUSeconjUSeconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1856 += tmp_1857;
   result += (-1) * tmp_1856;
   std::complex<double> tmp_1858;
   std::complex<double> tmp_1859;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1859 += A0(MSu(gI1))*CpUSeconjUSeconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1858 += tmp_1859;
   result += (-3) * tmp_1858;
   std::complex<double> tmp_1860;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1861;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1861 += B0(p,MSe(gI1),MAh(gI2))*Conj(CpconjUSeSeAh(gO2,gI1,
            gI2))*CpconjUSeSeAh(gO1,gI1,gI2);
      }
      tmp_1860 += tmp_1861;
   }
   result += tmp_1860;
   std::complex<double> tmp_1862;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1863;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1863 += B0(p,MSe(gI1),Mhh(gI2))*Conj(CpconjUSeSehh(gO2,gI1,
            gI2))*CpconjUSeSehh(gO1,gI1,gI2);
      }
      tmp_1862 += tmp_1863;
   }
   result += tmp_1862;
   std::complex<double> tmp_1864;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_1864 += Conj(CpconjUSeVWmSv(gO2,gI2))*CpconjUSeVWmSv(gO1,gI2)*F0(p
         ,MSv(gI2),MVWm);
   }
   result += tmp_1864;
   std::complex<double> tmp_1865;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1865 += Conj(CpconjUSeVPSe(gO2,gI2))*CpconjUSeVPSe(gO1,gI2)*F0(p,
         MSe(gI2),0);
   }
   result += tmp_1865;
   std::complex<double> tmp_1866;
   for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
      tmp_1866 += Conj(CpconjUSeVZSe(gO2,gI2))*CpconjUSeVZSe(gO1,gI2)*F0(p,
         MSe(gI2),MVZ);
   }
   result += tmp_1866;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_hh(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B0(p,MVWm,MVWm)*CpUhhbargWmCgWmC(gO1)*CpUhhbargWmCgWmC(gO2));
   result += -(B0(p,MVWm,MVWm)*CpUhhbargWmgWm(gO1)*CpUhhbargWmgWm(gO2));
   result += -(B0(p,MVZ,MVZ)*CpUhhbargZgZ(gO1)*CpUhhbargZgZ(gO2));
   result += 4*B0(p,MVWm,MVWm)*Conj(CpUhhconjVWmVWm(gO2))*CpUhhconjVWmVWm(gO1);
   result += 4*A0(MVWm)*CpUhhUhhconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUhhUhhVZVZ(gO1,gO2);
   result += 2*B0(p,MVZ,MVZ)*Conj(CpUhhVZVZ(gO2))*CpUhhVZVZ(gO1);
   std::complex<double> tmp_1867;
   std::complex<double> tmp_1868;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1868 += A0(MAh(gI1))*CpUhhUhhAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1867 += tmp_1868;
   result += (-0.5) * tmp_1867;
   std::complex<double> tmp_1869;
   std::complex<double> tmp_1870;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1870 += A0(MHpm(gI1))*CpUhhUhhconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1869 += tmp_1870;
   result += (-1) * tmp_1869;
   std::complex<double> tmp_1871;
   std::complex<double> tmp_1872;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1872 += A0(Mhh(gI1))*CpUhhUhhhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1871 += tmp_1872;
   result += (-0.5) * tmp_1871;
   std::complex<double> tmp_1873;
   std::complex<double> tmp_1874;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1875;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1875 += B0(p,MAh(gI1),MAh(gI2))*Conj(CpUhhAhAh(gO2,gI1,gI2))
            *CpUhhAhAh(gO1,gI1,gI2);
      }
      tmp_1874 += tmp_1875;
   }
   tmp_1873 += tmp_1874;
   result += (0.5) * tmp_1873;
   std::complex<double> tmp_1876;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1877;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1877 += B0(p,MHpm(gI1),MHpm(gI2))*Conj(CpUhhconjHpmHpm(gO2,
            gI1,gI2))*CpUhhconjHpmHpm(gO1,gI1,gI2);
      }
      tmp_1876 += tmp_1877;
   }
   result += tmp_1876;
   std::complex<double> tmp_1878;
   std::complex<double> tmp_1879;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1880;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1880 += B0(p,Mhh(gI1),Mhh(gI2))*Conj(CpUhhhhhh(gO2,gI1,gI2))
            *CpUhhhhhh(gO1,gI1,gI2);
      }
      tmp_1879 += tmp_1880;
   }
   tmp_1878 += tmp_1879;
   result += (0.5) * tmp_1878;
   std::complex<double> tmp_1881;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1882;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1882 += (Conj(CpUhhbarChaChaPL(gO2,gI1,gI2))*
            CpUhhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUhhbarChaChaPR(gO2,gI1,gI2))*
            CpUhhbarChaChaPR(gO1,gI1,gI2))*G0(p,MCha(gI1),MCha(gI2));
      }
      tmp_1881 += tmp_1882;
   }
   result += tmp_1881;
   std::complex<double> tmp_1883;
   std::complex<double> tmp_1884;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1885;
      std::complex<double> tmp_1886;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1886 += B0(p,MCha(gI1),MCha(gI2))*(Conj(CpUhhbarChaChaPR(gO2
            ,gI1,gI2))*CpUhhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUhhbarChaChaPL(gO2,
            gI1,gI2))*CpUhhbarChaChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_1885 += tmp_1886;
      tmp_1884 += (MCha(gI1)) * tmp_1885;
   }
   tmp_1883 += tmp_1884;
   result += (-2) * tmp_1883;
   std::complex<double> tmp_1887;
   std::complex<double> tmp_1888;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1888 += A0(MSv(gI1))*CpUhhUhhconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1887 += tmp_1888;
   result += (-1) * tmp_1887;
   std::complex<double> tmp_1889;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1890;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1890 += B0(p,MSv(gI1),MSv(gI2))*Conj(CpUhhconjSvSv(gO2,gI1,
            gI2))*CpUhhconjSvSv(gO1,gI1,gI2);
      }
      tmp_1889 += tmp_1890;
   }
   result += tmp_1889;
   std::complex<double> tmp_1891;
   std::complex<double> tmp_1892;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1893;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1893 += (Conj(CpUhhbarFdFdPL(gO2,gI1,gI2))*CpUhhbarFdFdPL(
            gO1,gI1,gI2) + Conj(CpUhhbarFdFdPR(gO2,gI1,gI2))*CpUhhbarFdFdPR(gO1,
            gI1,gI2))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_1892 += tmp_1893;
   }
   tmp_1891 += tmp_1892;
   result += (3) * tmp_1891;
   std::complex<double> tmp_1894;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1895;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1895 += (Conj(CpUhhbarFeFePL(gO2,gI1,gI2))*CpUhhbarFeFePL(
            gO1,gI1,gI2) + Conj(CpUhhbarFeFePR(gO2,gI1,gI2))*CpUhhbarFeFePR(gO1,
            gI1,gI2))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_1894 += tmp_1895;
   }
   result += tmp_1894;
   std::complex<double> tmp_1896;
   std::complex<double> tmp_1897;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1898;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1898 += (Conj(CpUhhbarFuFuPL(gO2,gI1,gI2))*CpUhhbarFuFuPL(
            gO1,gI1,gI2) + Conj(CpUhhbarFuFuPR(gO2,gI1,gI2))*CpUhhbarFuFuPR(gO1,
            gI1,gI2))*G0(p,MFu(gI1),MFu(gI2));
      }
      tmp_1897 += tmp_1898;
   }
   tmp_1896 += tmp_1897;
   result += (3) * tmp_1896;
   std::complex<double> tmp_1899;
   std::complex<double> tmp_1900;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1901;
      std::complex<double> tmp_1902;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1902 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CpUhhbarFdFdPR(gO2,gI1
            ,gI2))*CpUhhbarFdFdPL(gO1,gI1,gI2) + Conj(CpUhhbarFdFdPL(gO2,gI1,gI2))
            *CpUhhbarFdFdPR(gO1,gI1,gI2))*MFd(gI2);
      }
      tmp_1901 += tmp_1902;
      tmp_1900 += (MFd(gI1)) * tmp_1901;
   }
   tmp_1899 += tmp_1900;
   result += (-6) * tmp_1899;
   std::complex<double> tmp_1903;
   std::complex<double> tmp_1904;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1905;
      std::complex<double> tmp_1906;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1906 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CpUhhbarFeFePR(gO2,gI1
            ,gI2))*CpUhhbarFeFePL(gO1,gI1,gI2) + Conj(CpUhhbarFeFePL(gO2,gI1,gI2))
            *CpUhhbarFeFePR(gO1,gI1,gI2))*MFe(gI2);
      }
      tmp_1905 += tmp_1906;
      tmp_1904 += (MFe(gI1)) * tmp_1905;
   }
   tmp_1903 += tmp_1904;
   result += (-2) * tmp_1903;
   std::complex<double> tmp_1907;
   std::complex<double> tmp_1908;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1909;
      std::complex<double> tmp_1910;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1910 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CpUhhbarFuFuPR(gO2,gI1
            ,gI2))*CpUhhbarFuFuPL(gO1,gI1,gI2) + Conj(CpUhhbarFuFuPL(gO2,gI1,gI2))
            *CpUhhbarFuFuPR(gO1,gI1,gI2))*MFu(gI2);
      }
      tmp_1909 += tmp_1910;
      tmp_1908 += (MFu(gI1)) * tmp_1909;
   }
   tmp_1907 += tmp_1908;
   result += (-6) * tmp_1907;
   std::complex<double> tmp_1911;
   std::complex<double> tmp_1912;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1913;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1913 += (Conj(CpUhhChiChiPL(gO2,gI1,gI2))*CpUhhChiChiPL(gO1,
            gI1,gI2) + Conj(CpUhhChiChiPR(gO2,gI1,gI2))*CpUhhChiChiPR(gO1,gI1,gI2)
            )*G0(p,MChi(gI1),MChi(gI2));
      }
      tmp_1912 += tmp_1913;
   }
   tmp_1911 += tmp_1912;
   result += (0.5) * tmp_1911;
   std::complex<double> tmp_1914;
   std::complex<double> tmp_1915;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1916;
      std::complex<double> tmp_1917;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1917 += B0(p,MChi(gI1),MChi(gI2))*(Conj(CpUhhChiChiPR(gO2,
            gI1,gI2))*CpUhhChiChiPL(gO1,gI1,gI2) + Conj(CpUhhChiChiPL(gO2,gI1,gI2)
            )*CpUhhChiChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1916 += tmp_1917;
      tmp_1915 += (MChi(gI1)) * tmp_1916;
   }
   tmp_1914 += tmp_1915;
   result += (-1) * tmp_1914;
   std::complex<double> tmp_1918;
   std::complex<double> tmp_1919;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1919 += A0(MSd(gI1))*CpUhhUhhconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1918 += tmp_1919;
   result += (-3) * tmp_1918;
   std::complex<double> tmp_1920;
   std::complex<double> tmp_1921;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1921 += A0(MSe(gI1))*CpUhhUhhconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1920 += tmp_1921;
   result += (-1) * tmp_1920;
   std::complex<double> tmp_1922;
   std::complex<double> tmp_1923;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1923 += A0(MSu(gI1))*CpUhhUhhconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1922 += tmp_1923;
   result += (-3) * tmp_1922;
   std::complex<double> tmp_1924;
   std::complex<double> tmp_1925;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1926;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1926 += B0(p,MSd(gI1),MSd(gI2))*Conj(CpUhhconjSdSd(gO2,gI1,
            gI2))*CpUhhconjSdSd(gO1,gI1,gI2);
      }
      tmp_1925 += tmp_1926;
   }
   tmp_1924 += tmp_1925;
   result += (3) * tmp_1924;
   std::complex<double> tmp_1927;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1928;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1928 += B0(p,MSe(gI1),MSe(gI2))*Conj(CpUhhconjSeSe(gO2,gI1,
            gI2))*CpUhhconjSeSe(gO1,gI1,gI2);
      }
      tmp_1927 += tmp_1928;
   }
   result += tmp_1927;
   std::complex<double> tmp_1929;
   std::complex<double> tmp_1930;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1931;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1931 += B0(p,MSu(gI1),MSu(gI2))*Conj(CpUhhconjSuSu(gO2,gI1,
            gI2))*CpUhhconjSuSu(gO1,gI1,gI2);
      }
      tmp_1930 += tmp_1931;
   }
   tmp_1929 += tmp_1930;
   result += (3) * tmp_1929;
   std::complex<double> tmp_1932;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1932 += Conj(CpUhhVZAh(gO2,gI2))*CpUhhVZAh(gO1,gI2)*F0(p,MAh(gI2),
         MVZ);
   }
   result += tmp_1932;
   std::complex<double> tmp_1933;
   std::complex<double> tmp_1934;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1934 += Conj(CpUhhconjVWmHpm(gO2,gI2))*CpUhhconjVWmHpm(gO1,gI2)*F0
         (p,MHpm(gI2),MVWm);
   }
   tmp_1933 += tmp_1934;
   result += (2) * tmp_1933;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Ah(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += -(B0(p,MVWm,MVWm)*CpUAhbargWmCgWmC(gO1)*CpUAhbargWmCgWmC(gO2));
   result += -(B0(p,MVWm,MVWm)*CpUAhbargWmgWm(gO1)*CpUAhbargWmgWm(gO2));
   result += 4*A0(MVWm)*CpUAhUAhconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUAhUAhVZVZ(gO1,gO2);
   std::complex<double> tmp_1935;
   std::complex<double> tmp_1936;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1936 += A0(MAh(gI1))*CpUAhUAhAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1935 += tmp_1936;
   result += (-0.5) * tmp_1935;
   std::complex<double> tmp_1937;
   std::complex<double> tmp_1938;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1938 += A0(MHpm(gI1))*CpUAhUAhconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1937 += tmp_1938;
   result += (-1) * tmp_1937;
   std::complex<double> tmp_1939;
   std::complex<double> tmp_1940;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1940 += A0(Mhh(gI1))*CpUAhUAhhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_1939 += tmp_1940;
   result += (-0.5) * tmp_1939;
   std::complex<double> tmp_1941;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1942;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1942 += B0(p,MHpm(gI1),MHpm(gI2))*Conj(CpUAhconjHpmHpm(gO2,
            gI1,gI2))*CpUAhconjHpmHpm(gO1,gI1,gI2);
      }
      tmp_1941 += tmp_1942;
   }
   result += tmp_1941;
   std::complex<double> tmp_1943;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1944;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1944 += B0(p,Mhh(gI1),MAh(gI2))*Conj(CpUAhhhAh(gO2,gI1,gI2))
            *CpUAhhhAh(gO1,gI1,gI2);
      }
      tmp_1943 += tmp_1944;
   }
   result += tmp_1943;
   std::complex<double> tmp_1945;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1946;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1946 += (Conj(CpUAhbarChaChaPL(gO2,gI1,gI2))*
            CpUAhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUAhbarChaChaPR(gO2,gI1,gI2))*
            CpUAhbarChaChaPR(gO1,gI1,gI2))*G0(p,MCha(gI1),MCha(gI2));
      }
      tmp_1945 += tmp_1946;
   }
   result += tmp_1945;
   std::complex<double> tmp_1947;
   std::complex<double> tmp_1948;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_1949;
      std::complex<double> tmp_1950;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_1950 += B0(p,MCha(gI1),MCha(gI2))*(Conj(CpUAhbarChaChaPR(gO2
            ,gI1,gI2))*CpUAhbarChaChaPL(gO1,gI1,gI2) + Conj(CpUAhbarChaChaPL(gO2,
            gI1,gI2))*CpUAhbarChaChaPR(gO1,gI1,gI2))*MCha(gI2);
      }
      tmp_1949 += tmp_1950;
      tmp_1948 += (MCha(gI1)) * tmp_1949;
   }
   tmp_1947 += tmp_1948;
   result += (-2) * tmp_1947;
   std::complex<double> tmp_1951;
   std::complex<double> tmp_1952;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_1952 += A0(MSv(gI1))*CpUAhUAhconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_1951 += tmp_1952;
   result += (-1) * tmp_1951;
   std::complex<double> tmp_1953;
   std::complex<double> tmp_1954;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1955;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1955 += (Conj(CpUAhbarFdFdPL(gO2,gI1,gI2))*CpUAhbarFdFdPL(
            gO1,gI1,gI2) + Conj(CpUAhbarFdFdPR(gO2,gI1,gI2))*CpUAhbarFdFdPR(gO1,
            gI1,gI2))*G0(p,MFd(gI1),MFd(gI2));
      }
      tmp_1954 += tmp_1955;
   }
   tmp_1953 += tmp_1954;
   result += (3) * tmp_1953;
   std::complex<double> tmp_1956;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1957;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1957 += (Conj(CpUAhbarFeFePL(gO2,gI1,gI2))*CpUAhbarFeFePL(
            gO1,gI1,gI2) + Conj(CpUAhbarFeFePR(gO2,gI1,gI2))*CpUAhbarFeFePR(gO1,
            gI1,gI2))*G0(p,MFe(gI1),MFe(gI2));
      }
      tmp_1956 += tmp_1957;
   }
   result += tmp_1956;
   std::complex<double> tmp_1958;
   std::complex<double> tmp_1959;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1960;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1960 += (Conj(CpUAhbarFuFuPL(gO2,gI1,gI2))*CpUAhbarFuFuPL(
            gO1,gI1,gI2) + Conj(CpUAhbarFuFuPR(gO2,gI1,gI2))*CpUAhbarFuFuPR(gO1,
            gI1,gI2))*G0(p,MFu(gI1),MFu(gI2));
      }
      tmp_1959 += tmp_1960;
   }
   tmp_1958 += tmp_1959;
   result += (3) * tmp_1958;
   std::complex<double> tmp_1961;
   std::complex<double> tmp_1962;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1963;
      std::complex<double> tmp_1964;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1964 += B0(p,MFd(gI1),MFd(gI2))*(Conj(CpUAhbarFdFdPR(gO2,gI1
            ,gI2))*CpUAhbarFdFdPL(gO1,gI1,gI2) + Conj(CpUAhbarFdFdPL(gO2,gI1,gI2))
            *CpUAhbarFdFdPR(gO1,gI1,gI2))*MFd(gI2);
      }
      tmp_1963 += tmp_1964;
      tmp_1962 += (MFd(gI1)) * tmp_1963;
   }
   tmp_1961 += tmp_1962;
   result += (-6) * tmp_1961;
   std::complex<double> tmp_1965;
   std::complex<double> tmp_1966;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1967;
      std::complex<double> tmp_1968;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1968 += B0(p,MFe(gI1),MFe(gI2))*(Conj(CpUAhbarFeFePR(gO2,gI1
            ,gI2))*CpUAhbarFeFePL(gO1,gI1,gI2) + Conj(CpUAhbarFeFePL(gO2,gI1,gI2))
            *CpUAhbarFeFePR(gO1,gI1,gI2))*MFe(gI2);
      }
      tmp_1967 += tmp_1968;
      tmp_1966 += (MFe(gI1)) * tmp_1967;
   }
   tmp_1965 += tmp_1966;
   result += (-2) * tmp_1965;
   std::complex<double> tmp_1969;
   std::complex<double> tmp_1970;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_1971;
      std::complex<double> tmp_1972;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_1972 += B0(p,MFu(gI1),MFu(gI2))*(Conj(CpUAhbarFuFuPR(gO2,gI1
            ,gI2))*CpUAhbarFuFuPL(gO1,gI1,gI2) + Conj(CpUAhbarFuFuPL(gO2,gI1,gI2))
            *CpUAhbarFuFuPR(gO1,gI1,gI2))*MFu(gI2);
      }
      tmp_1971 += tmp_1972;
      tmp_1970 += (MFu(gI1)) * tmp_1971;
   }
   tmp_1969 += tmp_1970;
   result += (-6) * tmp_1969;
   std::complex<double> tmp_1973;
   std::complex<double> tmp_1974;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1975;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1975 += (Conj(CpUAhChiChiPL(gO2,gI1,gI2))*CpUAhChiChiPL(gO1,
            gI1,gI2) + Conj(CpUAhChiChiPR(gO2,gI1,gI2))*CpUAhChiChiPR(gO1,gI1,gI2)
            )*G0(p,MChi(gI1),MChi(gI2));
      }
      tmp_1974 += tmp_1975;
   }
   tmp_1973 += tmp_1974;
   result += (0.5) * tmp_1973;
   std::complex<double> tmp_1976;
   std::complex<double> tmp_1977;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_1978;
      std::complex<double> tmp_1979;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_1979 += B0(p,MChi(gI1),MChi(gI2))*(Conj(CpUAhChiChiPR(gO2,
            gI1,gI2))*CpUAhChiChiPL(gO1,gI1,gI2) + Conj(CpUAhChiChiPL(gO2,gI1,gI2)
            )*CpUAhChiChiPR(gO1,gI1,gI2))*MChi(gI2);
      }
      tmp_1978 += tmp_1979;
      tmp_1977 += (MChi(gI1)) * tmp_1978;
   }
   tmp_1976 += tmp_1977;
   result += (-1) * tmp_1976;
   std::complex<double> tmp_1980;
   std::complex<double> tmp_1981;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1981 += A0(MSd(gI1))*CpUAhUAhconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_1980 += tmp_1981;
   result += (-3) * tmp_1980;
   std::complex<double> tmp_1982;
   std::complex<double> tmp_1983;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1983 += A0(MSe(gI1))*CpUAhUAhconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_1982 += tmp_1983;
   result += (-1) * tmp_1982;
   std::complex<double> tmp_1984;
   std::complex<double> tmp_1985;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_1985 += A0(MSu(gI1))*CpUAhUAhconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_1984 += tmp_1985;
   result += (-3) * tmp_1984;
   std::complex<double> tmp_1986;
   std::complex<double> tmp_1987;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1988;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1988 += B0(p,MSd(gI1),MSd(gI2))*Conj(CpUAhconjSdSd(gO2,gI1,
            gI2))*CpUAhconjSdSd(gO1,gI1,gI2);
      }
      tmp_1987 += tmp_1988;
   }
   tmp_1986 += tmp_1987;
   result += (3) * tmp_1986;
   std::complex<double> tmp_1989;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1990;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1990 += B0(p,MSe(gI1),MSe(gI2))*Conj(CpUAhconjSeSe(gO2,gI1,
            gI2))*CpUAhconjSeSe(gO1,gI1,gI2);
      }
      tmp_1989 += tmp_1990;
   }
   result += tmp_1989;
   std::complex<double> tmp_1991;
   std::complex<double> tmp_1992;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_1993;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_1993 += B0(p,MSu(gI1),MSu(gI2))*Conj(CpUAhconjSuSu(gO2,gI1,
            gI2))*CpUAhconjSuSu(gO1,gI1,gI2);
      }
      tmp_1992 += tmp_1993;
   }
   tmp_1991 += tmp_1992;
   result += (3) * tmp_1991;
   std::complex<double> tmp_1994;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1994 += Conj(CpUAhVZhh(gO2,gI2))*CpUAhVZhh(gO1,gI2)*F0(p,Mhh(gI2),
         MVZ);
   }
   result += tmp_1994;
   std::complex<double> tmp_1995;
   std::complex<double> tmp_1996;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_1996 += Conj(CpUAhconjVWmHpm(gO2,gI2))*CpUAhconjVWmHpm(gO1,gI2)*F0
         (p,MHpm(gI2),MVWm);
   }
   tmp_1995 += tmp_1996;
   result += (2) * tmp_1995;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Hpm(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   result += 4*B0(p,0,MVWm)*Conj(CpconjUHpmVWmVP(gO2))*CpconjUHpmVWmVP(gO1);
   result += 4*B0(p,MVWm,MVZ)*Conj(CpconjUHpmVZVWm(gO2))*CpconjUHpmVZVWm(gO1);
   result += 4*A0(MVWm)*CpUHpmconjUHpmconjVWmVWm(gO1,gO2);
   result += 2*A0(MVZ)*CpUHpmconjUHpmVZVZ(gO1,gO2);
   result += -(B0(p,MVZ,MVWm)*CpconjUHpmbargWmCgZ(gO1)*CpUHpmgWmCbargZ(gO2));
   result += -(B0(p,MVWm,MVZ)*CpconjUHpmbargZgWm(gO1)*CpUHpmgZbargWm(gO2));
   std::complex<double> tmp_1997;
   std::complex<double> tmp_1998;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_1998 += A0(MAh(gI1))*CpUHpmconjUHpmAhAh(gO1,gO2,gI1,gI1);
   }
   tmp_1997 += tmp_1998;
   result += (-0.5) * tmp_1997;
   std::complex<double> tmp_1999;
   std::complex<double> tmp_2000;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2000 += A0(MHpm(gI1))*CpUHpmconjUHpmconjHpmHpm(gO1,gO2,gI1,gI1);
   }
   tmp_1999 += tmp_2000;
   result += (-1) * tmp_1999;
   std::complex<double> tmp_2001;
   std::complex<double> tmp_2002;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2002 += A0(Mhh(gI1))*CpUHpmconjUHpmhhhh(gO1,gO2,gI1,gI1);
   }
   tmp_2001 += tmp_2002;
   result += (-0.5) * tmp_2001;
   std::complex<double> tmp_2003;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2004;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2004 += B0(p,MHpm(gI1),MAh(gI2))*Conj(CpconjUHpmHpmAh(gO2,
            gI1,gI2))*CpconjUHpmHpmAh(gO1,gI1,gI2);
      }
      tmp_2003 += tmp_2004;
   }
   result += tmp_2003;
   std::complex<double> tmp_2005;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2006;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2006 += B0(p,MHpm(gI1),Mhh(gI2))*Conj(CpconjUHpmHpmhh(gO2,
            gI1,gI2))*CpconjUHpmHpmhh(gO1,gI1,gI2);
      }
      tmp_2005 += tmp_2006;
   }
   result += tmp_2005;
   std::complex<double> tmp_2007;
   std::complex<double> tmp_2008;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2008 += A0(MSv(gI1))*CpUHpmconjUHpmconjSvSv(gO1,gO2,gI1,gI1);
   }
   tmp_2007 += tmp_2008;
   result += (-1) * tmp_2007;
   std::complex<double> tmp_2009;
   std::complex<double> tmp_2010;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2011;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2011 += (Conj(CpconjUHpmbarFuFdPL(gO2,gI1,gI2))*
            CpconjUHpmbarFuFdPL(gO1,gI1,gI2) + Conj(CpconjUHpmbarFuFdPR(gO2,gI1,
            gI2))*CpconjUHpmbarFuFdPR(gO1,gI1,gI2))*G0(p,MFu(gI1),MFd(gI2));
      }
      tmp_2010 += tmp_2011;
   }
   tmp_2009 += tmp_2010;
   result += (3) * tmp_2009;
   std::complex<double> tmp_2012;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2013;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2013 += (Conj(CpconjUHpmbarFvFePL(gO2,gI1,gI2))*
            CpconjUHpmbarFvFePL(gO1,gI1,gI2) + Conj(CpconjUHpmbarFvFePR(gO2,gI1,
            gI2))*CpconjUHpmbarFvFePR(gO1,gI1,gI2))*G0(p,MFv(gI1),MFe(gI2));
      }
      tmp_2012 += tmp_2013;
   }
   result += tmp_2012;
   std::complex<double> tmp_2014;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2015;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2015 += B0(p,MSv(gI1),MSe(gI2))*Conj(CpconjUHpmconjSvSe(gO2,
            gI1,gI2))*CpconjUHpmconjSvSe(gO1,gI1,gI2);
      }
      tmp_2014 += tmp_2015;
   }
   result += tmp_2014;
   std::complex<double> tmp_2016;
   std::complex<double> tmp_2017;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2018;
      std::complex<double> tmp_2019;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2019 += B0(p,MFu(gI1),MFd(gI2))*(Conj(CpconjUHpmbarFuFdPR(
            gO2,gI1,gI2))*CpconjUHpmbarFuFdPL(gO1,gI1,gI2) + Conj(
            CpconjUHpmbarFuFdPL(gO2,gI1,gI2))*CpconjUHpmbarFuFdPR(gO1,gI1,gI2))*
            MFd(gI2);
      }
      tmp_2018 += tmp_2019;
      tmp_2017 += (MFu(gI1)) * tmp_2018;
   }
   tmp_2016 += tmp_2017;
   result += (-6) * tmp_2016;
   std::complex<double> tmp_2020;
   std::complex<double> tmp_2021;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2022;
      std::complex<double> tmp_2023;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2023 += B0(p,MFv(gI1),MFe(gI2))*(Conj(CpconjUHpmbarFvFePR(
            gO2,gI1,gI2))*CpconjUHpmbarFvFePL(gO1,gI1,gI2) + Conj(
            CpconjUHpmbarFvFePL(gO2,gI1,gI2))*CpconjUHpmbarFvFePR(gO1,gI1,gI2))*
            MFe(gI2);
      }
      tmp_2022 += tmp_2023;
      tmp_2021 += (MFv(gI1)) * tmp_2022;
   }
   tmp_2020 += tmp_2021;
   result += (-2) * tmp_2020;
   std::complex<double> tmp_2024;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2025;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2025 += (Conj(CpconjUHpmChiChaPL(gO2,gI1,gI2))*
            CpconjUHpmChiChaPL(gO1,gI1,gI2) + Conj(CpconjUHpmChiChaPR(gO2,gI1,gI2)
            )*CpconjUHpmChiChaPR(gO1,gI1,gI2))*G0(p,MChi(gI1),MCha(gI2));
      }
      tmp_2024 += tmp_2025;
   }
   result += tmp_2024;
   std::complex<double> tmp_2026;
   std::complex<double> tmp_2027;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2028;
      std::complex<double> tmp_2029;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2029 += B0(p,MChi(gI1),MCha(gI2))*(Conj(CpconjUHpmChiChaPR(
            gO2,gI1,gI2))*CpconjUHpmChiChaPL(gO1,gI1,gI2) + Conj(
            CpconjUHpmChiChaPL(gO2,gI1,gI2))*CpconjUHpmChiChaPR(gO1,gI1,gI2))*MCha
            (gI2);
      }
      tmp_2028 += tmp_2029;
      tmp_2027 += (MChi(gI1)) * tmp_2028;
   }
   tmp_2026 += tmp_2027;
   result += (-2) * tmp_2026;
   std::complex<double> tmp_2030;
   std::complex<double> tmp_2031;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2031 += A0(MSd(gI1))*CpUHpmconjUHpmconjSdSd(gO1,gO2,gI1,gI1);
   }
   tmp_2030 += tmp_2031;
   result += (-3) * tmp_2030;
   std::complex<double> tmp_2032;
   std::complex<double> tmp_2033;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2033 += A0(MSe(gI1))*CpUHpmconjUHpmconjSeSe(gO1,gO2,gI1,gI1);
   }
   tmp_2032 += tmp_2033;
   result += (-1) * tmp_2032;
   std::complex<double> tmp_2034;
   std::complex<double> tmp_2035;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2035 += A0(MSu(gI1))*CpUHpmconjUHpmconjSuSu(gO1,gO2,gI1,gI1);
   }
   tmp_2034 += tmp_2035;
   result += (-3) * tmp_2034;
   std::complex<double> tmp_2036;
   std::complex<double> tmp_2037;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2038;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2038 += B0(p,MSu(gI1),MSd(gI2))*Conj(CpconjUHpmconjSuSd(gO2,
            gI1,gI2))*CpconjUHpmconjSuSd(gO1,gI1,gI2);
      }
      tmp_2037 += tmp_2038;
   }
   tmp_2036 += tmp_2037;
   result += (3) * tmp_2036;
   std::complex<double> tmp_2039;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2039 += Conj(CpconjUHpmVWmAh(gO2,gI2))*CpconjUHpmVWmAh(gO1,gI2)*F0
         (p,MAh(gI2),MVWm);
   }
   result += tmp_2039;
   std::complex<double> tmp_2040;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2040 += Conj(CpconjUHpmVWmhh(gO2,gI2))*CpconjUHpmVWmhh(gO1,gI2)*F0
         (p,Mhh(gI2),MVWm);
   }
   result += tmp_2040;
   std::complex<double> tmp_2041;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2041 += Conj(CpconjUHpmVPHpm(gO2,gI2))*CpconjUHpmVPHpm(gO1,gI2)*F0
         (p,MHpm(gI2),0);
   }
   result += tmp_2041;
   std::complex<double> tmp_2042;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2042 += Conj(CpconjUHpmVZHpm(gO2,gI2))*CpconjUHpmVZHpm(gO1,gI2)*F0
         (p,MHpm(gI2),MVZ);
   }
   result += tmp_2042;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpVZbargWmCgWmC())*B00(p,MVWm,MVWm);
   result += AbsSqr(CpVZbargWmgWm())*B00(p,MVWm,MVWm);
   result += -(A0(MVWm)*(4*CpVZVZconjVWmVWm1() + CpVZVZconjVWmVWm2() +
      CpVZVZconjVWmVWm3()));
   std::complex<double> tmp_2043;
   std::complex<double> tmp_2044;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2044 += A0(MAh(gI1))*CpVZVZAhAh(gI1,gI1);
   }
   tmp_2043 += tmp_2044;
   result += (0.5) * tmp_2043;
   std::complex<double> tmp_2045;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2045 += A0(MHpm(gI1))*CpVZVZconjHpmHpm(gI1,gI1);
   }
   result += tmp_2045;
   std::complex<double> tmp_2046;
   std::complex<double> tmp_2047;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2047 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_2046 += tmp_2047;
   result += (0.5) * tmp_2046;
   std::complex<double> tmp_2048;
   std::complex<double> tmp_2049;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2050;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2050 += AbsSqr(CpVZconjHpmHpm(gI1,gI2))*B00(p,MHpm(gI1),MHpm
            (gI2));
      }
      tmp_2049 += tmp_2050;
   }
   tmp_2048 += tmp_2049;
   result += (-4) * tmp_2048;
   std::complex<double> tmp_2051;
   std::complex<double> tmp_2052;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2053;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2053 += AbsSqr(CpVZhhAh(gI1,gI2))*B00(p,MAh(gI2),Mhh(gI1));
      }
      tmp_2052 += tmp_2053;
   }
   tmp_2051 += tmp_2052;
   result += (-4) * tmp_2051;
   std::complex<double> tmp_2054;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2055;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2055 += (AbsSqr(CpVZbarChaChaPL(gI1,gI2)) + AbsSqr(
            CpVZbarChaChaPR(gI1,gI2)))*H0(p,MCha(gI1),MCha(gI2));
         tmp_2055 += 4*B0(p,MCha(gI1),MCha(gI2))*MCha(gI1)*MCha(gI2)*Re(
            Conj(CpVZbarChaChaPL(gI1,gI2))*CpVZbarChaChaPR(gI1,gI2));
      }
      tmp_2054 += tmp_2055;
   }
   result += tmp_2054;
   std::complex<double> tmp_2056;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2056 += A0(MSv(gI1))*CpVZVZconjSvSv(gI1,gI1);
   }
   result += tmp_2056;
   std::complex<double> tmp_2057;
   std::complex<double> tmp_2058;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2059;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2059 += AbsSqr(CpVZconjSvSv(gI1,gI2))*B00(p,MSv(gI1),MSv(gI2
            ));
      }
      tmp_2058 += tmp_2059;
   }
   tmp_2057 += tmp_2058;
   result += (-4) * tmp_2057;
   std::complex<double> tmp_2060;
   std::complex<double> tmp_2061;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2062;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2062 += (AbsSqr(CpVZbarFdFdPL(gI1,gI2)) + AbsSqr(
            CpVZbarFdFdPR(gI1,gI2)))*H0(p,MFd(gI1),MFd(gI2));
         tmp_2062 += 4*B0(p,MFd(gI1),MFd(gI2))*MFd(gI1)*MFd(gI2)*Re(Conj(
            CpVZbarFdFdPL(gI1,gI2))*CpVZbarFdFdPR(gI1,gI2));
      }
      tmp_2061 += tmp_2062;
   }
   tmp_2060 += tmp_2061;
   result += (3) * tmp_2060;
   std::complex<double> tmp_2063;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2064;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2064 += (AbsSqr(CpVZbarFeFePL(gI1,gI2)) + AbsSqr(
            CpVZbarFeFePR(gI1,gI2)))*H0(p,MFe(gI1),MFe(gI2));
         tmp_2064 += 4*B0(p,MFe(gI1),MFe(gI2))*MFe(gI1)*MFe(gI2)*Re(Conj(
            CpVZbarFeFePL(gI1,gI2))*CpVZbarFeFePR(gI1,gI2));
      }
      tmp_2063 += tmp_2064;
   }
   result += tmp_2063;
   std::complex<double> tmp_2065;
   std::complex<double> tmp_2066;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2067;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2067 += (AbsSqr(CpVZbarFuFuPL(gI1,gI2)) + AbsSqr(
            CpVZbarFuFuPR(gI1,gI2)))*H0(p,MFu(gI1),MFu(gI2));
         tmp_2067 += 4*B0(p,MFu(gI1),MFu(gI2))*MFu(gI1)*MFu(gI2)*Re(Conj(
            CpVZbarFuFuPL(gI1,gI2))*CpVZbarFuFuPR(gI1,gI2));
      }
      tmp_2066 += tmp_2067;
   }
   tmp_2065 += tmp_2066;
   result += (3) * tmp_2065;
   std::complex<double> tmp_2068;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2069;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2069 += (AbsSqr(CpVZbarFvFvPL(gI1,gI2)) + AbsSqr(
            CpVZbarFvFvPR(gI1,gI2)))*H0(p,MFv(gI1),MFv(gI2));
         tmp_2069 += 4*B0(p,MFv(gI1),MFv(gI2))*MFv(gI1)*MFv(gI2)*Re(Conj(
            CpVZbarFvFvPL(gI1,gI2))*CpVZbarFvFvPR(gI1,gI2));
      }
      tmp_2068 += tmp_2069;
   }
   result += tmp_2068;
   std::complex<double> tmp_2070;
   std::complex<double> tmp_2071;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2072;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2072 += (AbsSqr(CpVZChiChiPL(gI1,gI2)) + AbsSqr(CpVZChiChiPR
            (gI1,gI2)))*H0(p,MChi(gI1),MChi(gI2));
         tmp_2072 += 4*B0(p,MChi(gI1),MChi(gI2))*MChi(gI1)*MChi(gI2)*Re(
            Conj(CpVZChiChiPL(gI1,gI2))*CpVZChiChiPR(gI1,gI2));
      }
      tmp_2071 += tmp_2072;
   }
   tmp_2070 += tmp_2071;
   result += (0.5) * tmp_2070;
   std::complex<double> tmp_2073;
   std::complex<double> tmp_2074;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2074 += A0(MSd(gI1))*CpVZVZconjSdSd(gI1,gI1);
   }
   tmp_2073 += tmp_2074;
   result += (3) * tmp_2073;
   std::complex<double> tmp_2075;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2075 += A0(MSe(gI1))*CpVZVZconjSeSe(gI1,gI1);
   }
   result += tmp_2075;
   std::complex<double> tmp_2076;
   std::complex<double> tmp_2077;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2077 += A0(MSu(gI1))*CpVZVZconjSuSu(gI1,gI1);
   }
   tmp_2076 += tmp_2077;
   result += (3) * tmp_2076;
   std::complex<double> tmp_2078;
   std::complex<double> tmp_2079;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2080;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2080 += AbsSqr(CpVZconjSdSd(gI1,gI2))*B00(p,MSd(gI1),MSd(gI2
            ));
      }
      tmp_2079 += tmp_2080;
   }
   tmp_2078 += tmp_2079;
   result += (-12) * tmp_2078;
   std::complex<double> tmp_2081;
   std::complex<double> tmp_2082;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2083;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2083 += AbsSqr(CpVZconjSeSe(gI1,gI2))*B00(p,MSe(gI1),MSe(gI2
            ));
      }
      tmp_2082 += tmp_2083;
   }
   tmp_2081 += tmp_2082;
   result += (-4) * tmp_2081;
   std::complex<double> tmp_2084;
   std::complex<double> tmp_2085;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2086;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2086 += AbsSqr(CpVZconjSuSu(gI1,gI2))*B00(p,MSu(gI1),MSu(gI2
            ));
      }
      tmp_2085 += tmp_2086;
   }
   tmp_2084 += tmp_2085;
   result += (-12) * tmp_2084;
   std::complex<double> tmp_2087;
   std::complex<double> tmp_2088;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2088 += AbsSqr(CpVZconjVWmHpm(gI2))*B0(p,MVWm,MHpm(gI2));
   }
   tmp_2087 += tmp_2088;
   result += (2) * tmp_2087;
   std::complex<double> tmp_2089;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2089 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_2089;
   result += -(AbsSqr(CpVZconjVWmVWm())*(2*A0(MVWm) + 10*B00(p,MVWm,MVWm) + B0(
      p,MVWm,MVWm)*(2*Sqr(MVWm) + 4*Sqr(p))));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWm(double p ) const
{
   std::complex<double> result;

   result += AbsSqr(CpconjVWmbargPgWm())*B00(p,MVWm,MVP);
   result += AbsSqr(CpconjVWmbargWmCgP())*B00(p,MVP,MVWm);
   result += AbsSqr(CpconjVWmbargWmCgZ())*B00(p,MVZ,MVWm);
   result += AbsSqr(CpconjVWmbargZgWm())*B00(p,MVWm,MVZ);
   result += -(A0(MVWm)*(4*CpVWmconjVWmconjVWmVWm1() + CpVWmconjVWmconjVWmVWm2(
      ) + CpVWmconjVWmconjVWmVWm3()));
   result += 0;
   result += -0.5*A0(MVZ)*(4*CpVWmconjVWmVZVZ1() + CpVWmconjVWmVZVZ2() +
      CpVWmconjVWmVZVZ3());
   std::complex<double> tmp_2090;
   std::complex<double> tmp_2091;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2091 += A0(MAh(gI1))*CpVWmconjVWmAhAh(gI1,gI1);
   }
   tmp_2090 += tmp_2091;
   result += (0.5) * tmp_2090;
   std::complex<double> tmp_2092;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2092 += A0(MHpm(gI1))*CpVWmconjVWmconjHpmHpm(gI1,gI1);
   }
   result += tmp_2092;
   std::complex<double> tmp_2093;
   std::complex<double> tmp_2094;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2094 += A0(Mhh(gI1))*CpVWmconjVWmhhhh(gI1,gI1);
   }
   tmp_2093 += tmp_2094;
   result += (0.5) * tmp_2093;
   std::complex<double> tmp_2095;
   std::complex<double> tmp_2096;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2097;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2097 += AbsSqr(CpconjVWmHpmAh(gI1,gI2))*B00(p,MAh(gI2),MHpm(
            gI1));
      }
      tmp_2096 += tmp_2097;
   }
   tmp_2095 += tmp_2096;
   result += (-4) * tmp_2095;
   std::complex<double> tmp_2098;
   std::complex<double> tmp_2099;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2100;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2100 += AbsSqr(CpconjVWmHpmhh(gI1,gI2))*B00(p,Mhh(gI2),MHpm(
            gI1));
      }
      tmp_2099 += tmp_2100;
   }
   tmp_2098 += tmp_2099;
   result += (-4) * tmp_2098;
   std::complex<double> tmp_2101;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2101 += A0(MSv(gI1))*CpVWmconjVWmconjSvSv(gI1,gI1);
   }
   result += tmp_2101;
   std::complex<double> tmp_2102;
   std::complex<double> tmp_2103;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2104;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2104 += (AbsSqr(CpconjVWmbarFuFdPL(gI1,gI2)) + AbsSqr(
            CpconjVWmbarFuFdPR(gI1,gI2)))*H0(p,MFu(gI1),MFd(gI2));
         tmp_2104 += 4*B0(p,MFu(gI1),MFd(gI2))*MFd(gI2)*MFu(gI1)*Re(Conj(
            CpconjVWmbarFuFdPL(gI1,gI2))*CpconjVWmbarFuFdPR(gI1,gI2));
      }
      tmp_2103 += tmp_2104;
   }
   tmp_2102 += tmp_2103;
   result += (3) * tmp_2102;
   std::complex<double> tmp_2105;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2106;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2106 += (AbsSqr(CpconjVWmbarFvFePL(gI1,gI2)) + AbsSqr(
            CpconjVWmbarFvFePR(gI1,gI2)))*H0(p,MFv(gI1),MFe(gI2));
         tmp_2106 += 4*B0(p,MFv(gI1),MFe(gI2))*MFe(gI2)*MFv(gI1)*Re(Conj(
            CpconjVWmbarFvFePL(gI1,gI2))*CpconjVWmbarFvFePR(gI1,gI2));
      }
      tmp_2105 += tmp_2106;
   }
   result += tmp_2105;
   std::complex<double> tmp_2107;
   std::complex<double> tmp_2108;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2109;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2109 += AbsSqr(CpconjVWmconjSvSe(gI1,gI2))*B00(p,MSe(gI2),
            MSv(gI1));
      }
      tmp_2108 += tmp_2109;
   }
   tmp_2107 += tmp_2108;
   result += (-4) * tmp_2107;
   std::complex<double> tmp_2110;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2111;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2111 += (AbsSqr(CpconjVWmChiChaPL(gI1,gI2)) + AbsSqr(
            CpconjVWmChiChaPR(gI1,gI2)))*H0(p,MChi(gI1),MCha(gI2));
         tmp_2111 += 4*B0(p,MChi(gI1),MCha(gI2))*MCha(gI2)*MChi(gI1)*Re(
            Conj(CpconjVWmChiChaPL(gI1,gI2))*CpconjVWmChiChaPR(gI1,gI2));
      }
      tmp_2110 += tmp_2111;
   }
   result += tmp_2110;
   std::complex<double> tmp_2112;
   std::complex<double> tmp_2113;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2113 += A0(MSd(gI1))*CpVWmconjVWmconjSdSd(gI1,gI1);
   }
   tmp_2112 += tmp_2113;
   result += (3) * tmp_2112;
   std::complex<double> tmp_2114;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2114 += A0(MSe(gI1))*CpVWmconjVWmconjSeSe(gI1,gI1);
   }
   result += tmp_2114;
   std::complex<double> tmp_2115;
   std::complex<double> tmp_2116;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2116 += A0(MSu(gI1))*CpVWmconjVWmconjSuSu(gI1,gI1);
   }
   tmp_2115 += tmp_2116;
   result += (3) * tmp_2115;
   std::complex<double> tmp_2117;
   std::complex<double> tmp_2118;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2119;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2119 += AbsSqr(CpconjVWmconjSuSd(gI1,gI2))*B00(p,MSd(gI2),
            MSu(gI1));
      }
      tmp_2118 += tmp_2119;
   }
   tmp_2117 += tmp_2118;
   result += (-12) * tmp_2117;
   std::complex<double> tmp_2120;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2120 += AbsSqr(CpconjVWmVPHpm(gI2))*B0(p,0,MHpm(gI2));
   }
   result += tmp_2120;
   std::complex<double> tmp_2121;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2121 += AbsSqr(CpconjVWmVWmhh(gI2))*B0(p,MVWm,Mhh(gI2));
   }
   result += tmp_2121;
   std::complex<double> tmp_2122;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2122 += AbsSqr(CpconjVWmVZHpm(gI2))*B0(p,MVZ,MHpm(gI2));
   }
   result += tmp_2122;
   result += -(AbsSqr(CpconjVWmVWmVP())*(A0(MVWm) + 10*B00(p,MVWm,0) + B0(p,
      MVWm,0)*(Sqr(MVWm) + 4*Sqr(p))));
   result += -(AbsSqr(CpconjVWmVZVWm())*(A0(MVWm) + A0(MVZ) + 10*B00(p,MVZ,MVWm
      ) + B0(p,MVZ,MVWm)*(Sqr(MVWm) + Sqr(MVZ) + 4*Sqr(p))));

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2123;
   std::complex<double> tmp_2124;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2125;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2125 += B0(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPL(
            gO2,gI1,gI2))*CpUChiconjHpmChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2124 += tmp_2125;
   }
   tmp_2123 += tmp_2124;
   result += (2) * tmp_2123;
   std::complex<double> tmp_2126;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2127;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2127 += B0(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPL(gO2,gI1,
            gI2))*CpUChihhChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2126 += tmp_2127;
   }
   result += tmp_2126;
   std::complex<double> tmp_2128;
   std::complex<double> tmp_2129;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2130;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2130 += B0(p,MFv(gI2),MSv(gI1))*Conj(CpUChiconjSvFvPL(gO2,
            gI1,gI2))*CpUChiconjSvFvPR(gO1,gI1,gI2)*MFv(gI2);
      }
      tmp_2129 += tmp_2130;
   }
   tmp_2128 += tmp_2129;
   result += (2) * tmp_2128;
   std::complex<double> tmp_2131;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2132;
      std::complex<double> tmp_2133;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2133 += B0(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPL(gO2,gI1,
            gI2))*CpUChiChiAhPR(gO1,gI1,gI2);
      }
      tmp_2132 += tmp_2133;
      tmp_2131 += (MChi(gI1)) * tmp_2132;
   }
   result += tmp_2131;
   std::complex<double> tmp_2134;
   std::complex<double> tmp_2135;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2136;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2136 += B0(p,MFd(gI2),MSd(gI1))*Conj(CpUChiconjSdFdPL(gO2,
            gI1,gI2))*CpUChiconjSdFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2135 += tmp_2136;
   }
   tmp_2134 += tmp_2135;
   result += (6) * tmp_2134;
   std::complex<double> tmp_2137;
   std::complex<double> tmp_2138;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2139;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2139 += B0(p,MFe(gI2),MSe(gI1))*Conj(CpUChiconjSeFePL(gO2,
            gI1,gI2))*CpUChiconjSeFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_2138 += tmp_2139;
   }
   tmp_2137 += tmp_2138;
   result += (2) * tmp_2137;
   std::complex<double> tmp_2140;
   std::complex<double> tmp_2141;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2142;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2142 += B0(p,MFu(gI2),MSu(gI1))*Conj(CpUChiconjSuFuPL(gO2,
            gI1,gI2))*CpUChiconjSuFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_2141 += tmp_2142;
   }
   tmp_2140 += tmp_2141;
   result += (6) * tmp_2140;
   std::complex<double> tmp_2143;
   std::complex<double> tmp_2144;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2144 += B0(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPR(gO2,gI2))*
         CpUChiconjVWmChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_2143 += tmp_2144;
   result += (-8) * tmp_2143;
   std::complex<double> tmp_2145;
   std::complex<double> tmp_2146;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2146 += B0(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPR(gO2,gI2))*
         CpUChiVZChiPL(gO1,gI2)*MChi(gI2);
   }
   tmp_2145 += tmp_2146;
   result += (-4) * tmp_2145;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2147;
   std::complex<double> tmp_2148;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2149;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2149 += B1(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPR(
            gO2,gI1,gI2))*CpUChiconjHpmChaPR(gO1,gI1,gI2);
      }
      tmp_2148 += tmp_2149;
   }
   tmp_2147 += tmp_2148;
   result += (-1) * tmp_2147;
   std::complex<double> tmp_2150;
   std::complex<double> tmp_2151;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2152;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2152 += B1(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPR(gO2,gI1,
            gI2))*CpUChihhChiPR(gO1,gI1,gI2);
      }
      tmp_2151 += tmp_2152;
   }
   tmp_2150 += tmp_2151;
   result += (-0.5) * tmp_2150;
   std::complex<double> tmp_2153;
   std::complex<double> tmp_2154;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2155;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2155 += B1(p,MFv(gI2),MSv(gI1))*Conj(CpUChiconjSvFvPR(gO2,
            gI1,gI2))*CpUChiconjSvFvPR(gO1,gI1,gI2);
      }
      tmp_2154 += tmp_2155;
   }
   tmp_2153 += tmp_2154;
   result += (-1) * tmp_2153;
   std::complex<double> tmp_2156;
   std::complex<double> tmp_2157;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2158;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2158 += B1(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPR(gO2,gI1,
            gI2))*CpUChiChiAhPR(gO1,gI1,gI2);
      }
      tmp_2157 += tmp_2158;
   }
   tmp_2156 += tmp_2157;
   result += (-0.5) * tmp_2156;
   std::complex<double> tmp_2159;
   std::complex<double> tmp_2160;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2161;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2161 += B1(p,MFd(gI2),MSd(gI1))*Conj(CpUChiconjSdFdPR(gO2,
            gI1,gI2))*CpUChiconjSdFdPR(gO1,gI1,gI2);
      }
      tmp_2160 += tmp_2161;
   }
   tmp_2159 += tmp_2160;
   result += (-3) * tmp_2159;
   std::complex<double> tmp_2162;
   std::complex<double> tmp_2163;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2164;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2164 += B1(p,MFe(gI2),MSe(gI1))*Conj(CpUChiconjSeFePR(gO2,
            gI1,gI2))*CpUChiconjSeFePR(gO1,gI1,gI2);
      }
      tmp_2163 += tmp_2164;
   }
   tmp_2162 += tmp_2163;
   result += (-1) * tmp_2162;
   std::complex<double> tmp_2165;
   std::complex<double> tmp_2166;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2167;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2167 += B1(p,MFu(gI2),MSu(gI1))*Conj(CpUChiconjSuFuPR(gO2,
            gI1,gI2))*CpUChiconjSuFuPR(gO1,gI1,gI2);
      }
      tmp_2166 += tmp_2167;
   }
   tmp_2165 += tmp_2166;
   result += (-3) * tmp_2165;
   std::complex<double> tmp_2168;
   std::complex<double> tmp_2169;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2169 += B1(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPL(gO2,gI2))*
         CpUChiconjVWmChaPL(gO1,gI2);
   }
   tmp_2168 += tmp_2169;
   result += (-2) * tmp_2168;
   std::complex<double> tmp_2170;
   std::complex<double> tmp_2171;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2171 += B1(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPL(gO2,gI2))*
         CpUChiVZChiPL(gO1,gI2);
   }
   tmp_2170 += tmp_2171;
   result += (-1) * tmp_2170;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Chi_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2172;
   std::complex<double> tmp_2173;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2174;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2174 += B1(p,MCha(gI2),MHpm(gI1))*Conj(CpUChiconjHpmChaPL(
            gO2,gI1,gI2))*CpUChiconjHpmChaPL(gO1,gI1,gI2);
      }
      tmp_2173 += tmp_2174;
   }
   tmp_2172 += tmp_2173;
   result += (-1) * tmp_2172;
   std::complex<double> tmp_2175;
   std::complex<double> tmp_2176;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2177;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2177 += B1(p,MChi(gI2),Mhh(gI1))*Conj(CpUChihhChiPL(gO2,gI1,
            gI2))*CpUChihhChiPL(gO1,gI1,gI2);
      }
      tmp_2176 += tmp_2177;
   }
   tmp_2175 += tmp_2176;
   result += (-0.5) * tmp_2175;
   std::complex<double> tmp_2178;
   std::complex<double> tmp_2179;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2180;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2180 += B1(p,MFv(gI2),MSv(gI1))*Conj(CpUChiconjSvFvPL(gO2,
            gI1,gI2))*CpUChiconjSvFvPL(gO1,gI1,gI2);
      }
      tmp_2179 += tmp_2180;
   }
   tmp_2178 += tmp_2179;
   result += (-1) * tmp_2178;
   std::complex<double> tmp_2181;
   std::complex<double> tmp_2182;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2183;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2183 += B1(p,MChi(gI1),MAh(gI2))*Conj(CpUChiChiAhPL(gO2,gI1,
            gI2))*CpUChiChiAhPL(gO1,gI1,gI2);
      }
      tmp_2182 += tmp_2183;
   }
   tmp_2181 += tmp_2182;
   result += (-0.5) * tmp_2181;
   std::complex<double> tmp_2184;
   std::complex<double> tmp_2185;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2186;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2186 += B1(p,MFd(gI2),MSd(gI1))*Conj(CpUChiconjSdFdPL(gO2,
            gI1,gI2))*CpUChiconjSdFdPL(gO1,gI1,gI2);
      }
      tmp_2185 += tmp_2186;
   }
   tmp_2184 += tmp_2185;
   result += (-3) * tmp_2184;
   std::complex<double> tmp_2187;
   std::complex<double> tmp_2188;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2189;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2189 += B1(p,MFe(gI2),MSe(gI1))*Conj(CpUChiconjSeFePL(gO2,
            gI1,gI2))*CpUChiconjSeFePL(gO1,gI1,gI2);
      }
      tmp_2188 += tmp_2189;
   }
   tmp_2187 += tmp_2188;
   result += (-1) * tmp_2187;
   std::complex<double> tmp_2190;
   std::complex<double> tmp_2191;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2192;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2192 += B1(p,MFu(gI2),MSu(gI1))*Conj(CpUChiconjSuFuPL(gO2,
            gI1,gI2))*CpUChiconjSuFuPL(gO1,gI1,gI2);
      }
      tmp_2191 += tmp_2192;
   }
   tmp_2190 += tmp_2191;
   result += (-3) * tmp_2190;
   std::complex<double> tmp_2193;
   std::complex<double> tmp_2194;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2194 += B1(p,MCha(gI2),MVWm)*Conj(CpUChiconjVWmChaPR(gO2,gI2))*
         CpUChiconjVWmChaPR(gO1,gI2);
   }
   tmp_2193 += tmp_2194;
   result += (-2) * tmp_2193;
   std::complex<double> tmp_2195;
   std::complex<double> tmp_2196;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2196 += B1(p,MChi(gI2),MVZ)*Conj(CpUChiVZChiPR(gO2,gI2))*
         CpUChiVZChiPR(gO1,gI2);
   }
   tmp_2195 += tmp_2196;
   result += (-1) * tmp_2195;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2197;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2198;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2198 += B0(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPL(gO2,
            gI1,gI2))*CpbarUChahhChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2197 += tmp_2198;
   }
   result += tmp_2197;
   std::complex<double> tmp_2199;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2200;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2200 += B0(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPL(gO2
            ,gI1,gI2))*CpbarUChaHpmChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2199 += tmp_2200;
   }
   result += tmp_2199;
   std::complex<double> tmp_2201;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2202;
      std::complex<double> tmp_2203;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2203 += B0(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPL(gO2,
            gI1,gI2))*CpbarUChaChaAhPR(gO1,gI1,gI2);
      }
      tmp_2202 += tmp_2203;
      tmp_2201 += (MCha(gI1)) * tmp_2202;
   }
   result += tmp_2201;
   std::complex<double> tmp_2204;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2205;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2205 += B0(p,MFe(gI2),MSv(gI1))*Conj(CpbarUChaconjSvFePL(gO2
            ,gI1,gI2))*CpbarUChaconjSvFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_2204 += tmp_2205;
   }
   result += tmp_2204;
   std::complex<double> tmp_2206;
   std::complex<double> tmp_2207;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2208;
      std::complex<double> tmp_2209;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2209 += B0(p,MFu(gI1),MSd(gI2))*Conj(CpbarUChabarFuSdPL(gO2,
            gI1,gI2))*CpbarUChabarFuSdPR(gO1,gI1,gI2);
      }
      tmp_2208 += tmp_2209;
      tmp_2207 += (MFu(gI1)) * tmp_2208;
   }
   tmp_2206 += tmp_2207;
   result += (3) * tmp_2206;
   std::complex<double> tmp_2210;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2211;
      std::complex<double> tmp_2212;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2212 += B0(p,MFv(gI1),MSe(gI2))*Conj(CpbarUChabarFvSePL(gO2,
            gI1,gI2))*CpbarUChabarFvSePR(gO1,gI1,gI2);
      }
      tmp_2211 += tmp_2212;
      tmp_2210 += (MFv(gI1)) * tmp_2211;
   }
   result += tmp_2210;
   std::complex<double> tmp_2213;
   std::complex<double> tmp_2214;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2215;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2215 += B0(p,MFd(gI2),MSu(gI1))*Conj(CpbarUChaconjSuFdPL(gO2
            ,gI1,gI2))*CpbarUChaconjSuFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2214 += tmp_2215;
   }
   tmp_2213 += tmp_2214;
   result += (3) * tmp_2213;
   std::complex<double> tmp_2216;
   std::complex<double> tmp_2217;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2217 += B0(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPR(gO2,gI2))*
         CpbarUChaVPChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_2216 += tmp_2217;
   result += (-4) * tmp_2216;
   std::complex<double> tmp_2218;
   std::complex<double> tmp_2219;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2219 += B0(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPR(gO2,gI2))*
         CpbarUChaVZChaPL(gO1,gI2)*MCha(gI2);
   }
   tmp_2218 += tmp_2219;
   result += (-4) * tmp_2218;
   std::complex<double> tmp_2220;
   std::complex<double> tmp_2221;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2221 += B0(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPR(gO2,gI2))*
         CpbarUChaVWmChiPL(gO1,gI2)*MChi(gI2);
   }
   tmp_2220 += tmp_2221;
   result += (-4) * tmp_2220;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2222;
   std::complex<double> tmp_2223;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2224;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2224 += B1(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPR(gO2,
            gI1,gI2))*CpbarUChaChaAhPR(gO1,gI1,gI2);
      }
      tmp_2223 += tmp_2224;
   }
   tmp_2222 += tmp_2223;
   result += (-0.5) * tmp_2222;
   std::complex<double> tmp_2225;
   std::complex<double> tmp_2226;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2227;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2227 += B1(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPR(gO2,
            gI1,gI2))*CpbarUChahhChaPR(gO1,gI1,gI2);
      }
      tmp_2226 += tmp_2227;
   }
   tmp_2225 += tmp_2226;
   result += (-0.5) * tmp_2225;
   std::complex<double> tmp_2228;
   std::complex<double> tmp_2229;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2230;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2230 += B1(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPR(gO2
            ,gI1,gI2))*CpbarUChaHpmChiPR(gO1,gI1,gI2);
      }
      tmp_2229 += tmp_2230;
   }
   tmp_2228 += tmp_2229;
   result += (-0.5) * tmp_2228;
   std::complex<double> tmp_2231;
   std::complex<double> tmp_2232;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2233;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2233 += B1(p,MFe(gI2),MSv(gI1))*Conj(CpbarUChaconjSvFePR(gO2
            ,gI1,gI2))*CpbarUChaconjSvFePR(gO1,gI1,gI2);
      }
      tmp_2232 += tmp_2233;
   }
   tmp_2231 += tmp_2232;
   result += (-0.5) * tmp_2231;
   std::complex<double> tmp_2234;
   std::complex<double> tmp_2235;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2236;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2236 += B1(p,MFu(gI1),MSd(gI2))*Conj(CpbarUChabarFuSdPR(gO2,
            gI1,gI2))*CpbarUChabarFuSdPR(gO1,gI1,gI2);
      }
      tmp_2235 += tmp_2236;
   }
   tmp_2234 += tmp_2235;
   result += (-1.5) * tmp_2234;
   std::complex<double> tmp_2237;
   std::complex<double> tmp_2238;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2239;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2239 += B1(p,MFv(gI1),MSe(gI2))*Conj(CpbarUChabarFvSePR(gO2,
            gI1,gI2))*CpbarUChabarFvSePR(gO1,gI1,gI2);
      }
      tmp_2238 += tmp_2239;
   }
   tmp_2237 += tmp_2238;
   result += (-0.5) * tmp_2237;
   std::complex<double> tmp_2240;
   std::complex<double> tmp_2241;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2242;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2242 += B1(p,MFd(gI2),MSu(gI1))*Conj(CpbarUChaconjSuFdPR(gO2
            ,gI1,gI2))*CpbarUChaconjSuFdPR(gO1,gI1,gI2);
      }
      tmp_2241 += tmp_2242;
   }
   tmp_2240 += tmp_2241;
   result += (-1.5) * tmp_2240;
   std::complex<double> tmp_2243;
   std::complex<double> tmp_2244;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2244 += B1(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPL(gO2,gI2))*
         CpbarUChaVPChaPL(gO1,gI2);
   }
   tmp_2243 += tmp_2244;
   result += (-1) * tmp_2243;
   std::complex<double> tmp_2245;
   std::complex<double> tmp_2246;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2246 += B1(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPL(gO2,gI2))*
         CpbarUChaVZChaPL(gO1,gI2);
   }
   tmp_2245 += tmp_2246;
   result += (-1) * tmp_2245;
   std::complex<double> tmp_2247;
   std::complex<double> tmp_2248;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2248 += B1(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPL(gO2,gI2))*
         CpbarUChaVWmChiPL(gO1,gI2);
   }
   tmp_2247 += tmp_2248;
   result += (-1) * tmp_2247;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Cha_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2249;
   std::complex<double> tmp_2250;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2251;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2251 += B1(p,MCha(gI1),MAh(gI2))*Conj(CpbarUChaChaAhPL(gO2,
            gI1,gI2))*CpbarUChaChaAhPL(gO1,gI1,gI2);
      }
      tmp_2250 += tmp_2251;
   }
   tmp_2249 += tmp_2250;
   result += (-0.5) * tmp_2249;
   std::complex<double> tmp_2252;
   std::complex<double> tmp_2253;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2254;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2254 += B1(p,MCha(gI2),Mhh(gI1))*Conj(CpbarUChahhChaPL(gO2,
            gI1,gI2))*CpbarUChahhChaPL(gO1,gI1,gI2);
      }
      tmp_2253 += tmp_2254;
   }
   tmp_2252 += tmp_2253;
   result += (-0.5) * tmp_2252;
   std::complex<double> tmp_2255;
   std::complex<double> tmp_2256;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2257;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2257 += B1(p,MChi(gI2),MHpm(gI1))*Conj(CpbarUChaHpmChiPL(gO2
            ,gI1,gI2))*CpbarUChaHpmChiPL(gO1,gI1,gI2);
      }
      tmp_2256 += tmp_2257;
   }
   tmp_2255 += tmp_2256;
   result += (-0.5) * tmp_2255;
   std::complex<double> tmp_2258;
   std::complex<double> tmp_2259;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2260;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2260 += B1(p,MFe(gI2),MSv(gI1))*Conj(CpbarUChaconjSvFePL(gO2
            ,gI1,gI2))*CpbarUChaconjSvFePL(gO1,gI1,gI2);
      }
      tmp_2259 += tmp_2260;
   }
   tmp_2258 += tmp_2259;
   result += (-0.5) * tmp_2258;
   std::complex<double> tmp_2261;
   std::complex<double> tmp_2262;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2263;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2263 += B1(p,MFu(gI1),MSd(gI2))*Conj(CpbarUChabarFuSdPL(gO2,
            gI1,gI2))*CpbarUChabarFuSdPL(gO1,gI1,gI2);
      }
      tmp_2262 += tmp_2263;
   }
   tmp_2261 += tmp_2262;
   result += (-1.5) * tmp_2261;
   std::complex<double> tmp_2264;
   std::complex<double> tmp_2265;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2266;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2266 += B1(p,MFv(gI1),MSe(gI2))*Conj(CpbarUChabarFvSePL(gO2,
            gI1,gI2))*CpbarUChabarFvSePL(gO1,gI1,gI2);
      }
      tmp_2265 += tmp_2266;
   }
   tmp_2264 += tmp_2265;
   result += (-0.5) * tmp_2264;
   std::complex<double> tmp_2267;
   std::complex<double> tmp_2268;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2269;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2269 += B1(p,MFd(gI2),MSu(gI1))*Conj(CpbarUChaconjSuFdPL(gO2
            ,gI1,gI2))*CpbarUChaconjSuFdPL(gO1,gI1,gI2);
      }
      tmp_2268 += tmp_2269;
   }
   tmp_2267 += tmp_2268;
   result += (-1.5) * tmp_2267;
   std::complex<double> tmp_2270;
   std::complex<double> tmp_2271;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2271 += B1(p,MCha(gI2),0)*Conj(CpbarUChaVPChaPR(gO2,gI2))*
         CpbarUChaVPChaPR(gO1,gI2);
   }
   tmp_2270 += tmp_2271;
   result += (-1) * tmp_2270;
   std::complex<double> tmp_2272;
   std::complex<double> tmp_2273;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2273 += B1(p,MCha(gI2),MVZ)*Conj(CpbarUChaVZChaPR(gO2,gI2))*
         CpbarUChaVZChaPR(gO1,gI2);
   }
   tmp_2272 += tmp_2273;
   result += (-1) * tmp_2272;
   std::complex<double> tmp_2274;
   std::complex<double> tmp_2275;
   for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
      tmp_2275 += B1(p,MChi(gI2),MVWm)*Conj(CpbarUChaVWmChiPR(gO2,gI2))*
         CpbarUChaVWmChiPR(gO1,gI2);
   }
   tmp_2274 += tmp_2275;
   result += (-1) * tmp_2274;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2276;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2277;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2277 += B0(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePL(gO2,gI1,
            gI2))*CpbarUFehhFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_2276 += tmp_2277;
   }
   result += tmp_2276;
   std::complex<double> tmp_2278;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2279;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2279 += B0(p,MFv(gI2),MHpm(gI1))*Conj(CpbarUFeHpmFvPL(gO2,
            gI1,gI2))*CpbarUFeHpmFvPR(gO1,gI1,gI2)*MFv(gI2);
      }
      tmp_2278 += tmp_2279;
   }
   result += tmp_2278;
   std::complex<double> tmp_2280;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2281;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2281 += B0(p,MCha(gI2),MSv(gI1))*Conj(CpbarUFeSvChaPL(gO2,
            gI1,gI2))*CpbarUFeSvChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2280 += tmp_2281;
   }
   result += tmp_2280;
   std::complex<double> tmp_2282;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2283;
      std::complex<double> tmp_2284;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2284 += B0(p,MFe(gI1),MAh(gI2))*Conj(CpbarUFeFeAhPL(gO2,gI1,
            gI2))*CpbarUFeFeAhPR(gO1,gI1,gI2);
      }
      tmp_2283 += tmp_2284;
      tmp_2282 += (MFe(gI1)) * tmp_2283;
   }
   result += tmp_2282;
   std::complex<double> tmp_2285;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2286;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2286 += B0(p,MChi(gI2),MSe(gI1))*Conj(CpbarUFeSeChiPL(gO2,
            gI1,gI2))*CpbarUFeSeChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2285 += tmp_2286;
   }
   result += tmp_2285;
   std::complex<double> tmp_2287;
   std::complex<double> tmp_2288;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2288 += B0(p,MFe(gI2),0)*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_2287 += tmp_2288;
   result += (-4) * tmp_2287;
   std::complex<double> tmp_2289;
   std::complex<double> tmp_2290;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2290 += B0(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_2289 += tmp_2290;
   result += (-4) * tmp_2289;
   std::complex<double> tmp_2291;
   std::complex<double> tmp_2292;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2292 += B0(p,MFv(gI2),MVWm)*Conj(CpbarUFeVWmFvPR(gO2,gI2))*
         CpbarUFeVWmFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_2291 += tmp_2292;
   result += (-4) * tmp_2291;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2293;
   std::complex<double> tmp_2294;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2295;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2295 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePR(gO2,gI1,
            gI2))*CpbarUFehhFePR(gO1,gI1,gI2);
      }
      tmp_2294 += tmp_2295;
   }
   tmp_2293 += tmp_2294;
   result += (-0.5) * tmp_2293;
   std::complex<double> tmp_2296;
   std::complex<double> tmp_2297;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2298;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2298 += B1(p,MFv(gI2),MHpm(gI1))*Conj(CpbarUFeHpmFvPR(gO2,
            gI1,gI2))*CpbarUFeHpmFvPR(gO1,gI1,gI2);
      }
      tmp_2297 += tmp_2298;
   }
   tmp_2296 += tmp_2297;
   result += (-0.5) * tmp_2296;
   std::complex<double> tmp_2299;
   std::complex<double> tmp_2300;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2301;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2301 += B1(p,MFe(gI1),MAh(gI2))*Conj(CpbarUFeFeAhPR(gO2,gI1,
            gI2))*CpbarUFeFeAhPR(gO1,gI1,gI2);
      }
      tmp_2300 += tmp_2301;
   }
   tmp_2299 += tmp_2300;
   result += (-0.5) * tmp_2299;
   std::complex<double> tmp_2302;
   std::complex<double> tmp_2303;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2304;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2304 += B1(p,MCha(gI2),MSv(gI1))*Conj(CpbarUFeSvChaPR(gO2,
            gI1,gI2))*CpbarUFeSvChaPR(gO1,gI1,gI2);
      }
      tmp_2303 += tmp_2304;
   }
   tmp_2302 += tmp_2303;
   result += (-0.5) * tmp_2302;
   std::complex<double> tmp_2305;
   std::complex<double> tmp_2306;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2307;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2307 += B1(p,MChi(gI2),MSe(gI1))*Conj(CpbarUFeSeChiPR(gO2,
            gI1,gI2))*CpbarUFeSeChiPR(gO1,gI1,gI2);
      }
      tmp_2306 += tmp_2307;
   }
   tmp_2305 += tmp_2306;
   result += (-0.5) * tmp_2305;
   std::complex<double> tmp_2308;
   std::complex<double> tmp_2309;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2309 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePL(gO2,gI2))*
         CpbarUFeVPFePL(gO1,gI2);
   }
   tmp_2308 += tmp_2309;
   result += (-1) * tmp_2308;
   std::complex<double> tmp_2310;
   std::complex<double> tmp_2311;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2311 += B1(p,MFv(gI2),MVWm)*Conj(CpbarUFeVWmFvPL(gO2,gI2))*
         CpbarUFeVWmFvPL(gO1,gI2);
   }
   tmp_2310 += tmp_2311;
   result += (-1) * tmp_2310;
   std::complex<double> tmp_2312;
   std::complex<double> tmp_2313;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2313 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePL(gO2,gI2))*
         CpbarUFeVZFePL(gO1,gI2);
   }
   tmp_2312 += tmp_2313;
   result += (-1) * tmp_2312;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2314;
   std::complex<double> tmp_2315;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2316;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2316 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarUFehhFePL(gO2,gI1,
            gI2))*CpbarUFehhFePL(gO1,gI1,gI2);
      }
      tmp_2315 += tmp_2316;
   }
   tmp_2314 += tmp_2315;
   result += (-0.5) * tmp_2314;
   std::complex<double> tmp_2317;
   std::complex<double> tmp_2318;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2319;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2319 += B1(p,MFv(gI2),MHpm(gI1))*Conj(CpbarUFeHpmFvPL(gO2,
            gI1,gI2))*CpbarUFeHpmFvPL(gO1,gI1,gI2);
      }
      tmp_2318 += tmp_2319;
   }
   tmp_2317 += tmp_2318;
   result += (-0.5) * tmp_2317;
   std::complex<double> tmp_2320;
   std::complex<double> tmp_2321;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2322;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2322 += B1(p,MFe(gI1),MAh(gI2))*Conj(CpbarUFeFeAhPL(gO2,gI1,
            gI2))*CpbarUFeFeAhPL(gO1,gI1,gI2);
      }
      tmp_2321 += tmp_2322;
   }
   tmp_2320 += tmp_2321;
   result += (-0.5) * tmp_2320;
   std::complex<double> tmp_2323;
   std::complex<double> tmp_2324;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2325;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2325 += B1(p,MCha(gI2),MSv(gI1))*Conj(CpbarUFeSvChaPL(gO2,
            gI1,gI2))*CpbarUFeSvChaPL(gO1,gI1,gI2);
      }
      tmp_2324 += tmp_2325;
   }
   tmp_2323 += tmp_2324;
   result += (-0.5) * tmp_2323;
   std::complex<double> tmp_2326;
   std::complex<double> tmp_2327;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2328;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2328 += B1(p,MChi(gI2),MSe(gI1))*Conj(CpbarUFeSeChiPL(gO2,
            gI1,gI2))*CpbarUFeSeChiPL(gO1,gI1,gI2);
      }
      tmp_2327 += tmp_2328;
   }
   tmp_2326 += tmp_2327;
   result += (-0.5) * tmp_2326;
   std::complex<double> tmp_2329;
   std::complex<double> tmp_2330;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2330 += B1(p,MFe(gI2),0)*Conj(CpbarUFeVPFePR(gO2,gI2))*
         CpbarUFeVPFePR(gO1,gI2);
   }
   tmp_2329 += tmp_2330;
   result += (-1) * tmp_2329;
   std::complex<double> tmp_2331;
   std::complex<double> tmp_2332;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2332 += B1(p,MFv(gI2),MVWm)*Conj(CpbarUFeVWmFvPR(gO2,gI2))*
         CpbarUFeVWmFvPR(gO1,gI2);
   }
   tmp_2331 += tmp_2332;
   result += (-1) * tmp_2331;
   std::complex<double> tmp_2333;
   std::complex<double> tmp_2334;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2334 += B1(p,MFe(gI2),MVZ)*Conj(CpbarUFeVZFePR(gO2,gI2))*
         CpbarUFeVZFePR(gO1,gI2);
   }
   tmp_2333 += tmp_2334;
   result += (-1) * tmp_2333;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2335;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2336;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2336 += B0(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPL(gO2,gI1,
            gI2))*CpbarUFdhhFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2335 += tmp_2336;
   }
   result += tmp_2335;
   std::complex<double> tmp_2337;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2338;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2338 += B0(p,MFu(gI2),MHpm(gI1))*Conj(CpbarUFdHpmFuPL(gO2,
            gI1,gI2))*CpbarUFdHpmFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_2337 += tmp_2338;
   }
   result += tmp_2337;
   std::complex<double> tmp_2339;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2340;
      std::complex<double> tmp_2341;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2341 += B0(p,MFd(gI1),MAh(gI2))*Conj(CpbarUFdFdAhPL(gO2,gI1,
            gI2))*CpbarUFdFdAhPR(gO1,gI1,gI2);
      }
      tmp_2340 += tmp_2341;
      tmp_2339 += (MFd(gI1)) * tmp_2340;
   }
   result += tmp_2339;
   std::complex<double> tmp_2342;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2343;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2343 += B0(p,MCha(gI2),MSu(gI1))*Conj(CpbarUFdSuChaPL(gO2,
            gI1,gI2))*CpbarUFdSuChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2342 += tmp_2343;
   }
   result += tmp_2342;
   std::complex<double> tmp_2344;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2345;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2345 += B0(p,MChi(gI2),MSd(gI1))*Conj(CpbarUFdSdChiPL(gO2,
            gI1,gI2))*CpbarUFdSdChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2344 += tmp_2345;
   }
   result += tmp_2344;
   std::complex<double> tmp_2346;
   std::complex<double> tmp_2347;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2347 += B0(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2346 += tmp_2347;
   result += (-5.333333333333333) * tmp_2346;
   std::complex<double> tmp_2348;
   std::complex<double> tmp_2349;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2349 += B0(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2348 += tmp_2349;
   result += (-4) * tmp_2348;
   std::complex<double> tmp_2350;
   std::complex<double> tmp_2351;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2351 += B0(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2350 += tmp_2351;
   result += (-4) * tmp_2350;
   std::complex<double> tmp_2352;
   std::complex<double> tmp_2353;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2353 += B0(p,MFu(gI2),MVWm)*Conj(CpbarUFdVWmFuPR(gO2,gI2))*
         CpbarUFdVWmFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2352 += tmp_2353;
   result += (-4) * tmp_2352;
   std::complex<double> tmp_2354;
   std::complex<double> tmp_2355;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2355 += B0(p,MGlu,MSd(gI1))*Conj(CpbarUFdSdGluPL(gO2,gI1,1))*
         CpbarUFdSdGluPR(gO1,gI1,1);
   }
   tmp_2354 += tmp_2355;
   result += (1.3333333333333333*MGlu) * tmp_2354;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2356;
   std::complex<double> tmp_2357;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2358;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2358 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPR(gO2,gI1,
            gI2))*CpbarUFdhhFdPR(gO1,gI1,gI2);
      }
      tmp_2357 += tmp_2358;
   }
   tmp_2356 += tmp_2357;
   result += (-0.5) * tmp_2356;
   std::complex<double> tmp_2359;
   std::complex<double> tmp_2360;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2361;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2361 += B1(p,MFu(gI2),MHpm(gI1))*Conj(CpbarUFdHpmFuPR(gO2,
            gI1,gI2))*CpbarUFdHpmFuPR(gO1,gI1,gI2);
      }
      tmp_2360 += tmp_2361;
   }
   tmp_2359 += tmp_2360;
   result += (-0.5) * tmp_2359;
   std::complex<double> tmp_2362;
   std::complex<double> tmp_2363;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2364;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2364 += B1(p,MFd(gI1),MAh(gI2))*Conj(CpbarUFdFdAhPR(gO2,gI1,
            gI2))*CpbarUFdFdAhPR(gO1,gI1,gI2);
      }
      tmp_2363 += tmp_2364;
   }
   tmp_2362 += tmp_2363;
   result += (-0.5) * tmp_2362;
   std::complex<double> tmp_2365;
   std::complex<double> tmp_2366;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2366 += B1(p,MGlu,MSd(gI1))*Conj(CpbarUFdSdGluPR(gO2,gI1,1))*
         CpbarUFdSdGluPR(gO1,gI1,1);
   }
   tmp_2365 += tmp_2366;
   result += (-0.6666666666666666) * tmp_2365;
   std::complex<double> tmp_2367;
   std::complex<double> tmp_2368;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2369;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2369 += B1(p,MCha(gI2),MSu(gI1))*Conj(CpbarUFdSuChaPR(gO2,
            gI1,gI2))*CpbarUFdSuChaPR(gO1,gI1,gI2);
      }
      tmp_2368 += tmp_2369;
   }
   tmp_2367 += tmp_2368;
   result += (-0.5) * tmp_2367;
   std::complex<double> tmp_2370;
   std::complex<double> tmp_2371;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2372;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2372 += B1(p,MChi(gI2),MSd(gI1))*Conj(CpbarUFdSdChiPR(gO2,
            gI1,gI2))*CpbarUFdSdChiPR(gO1,gI1,gI2);
      }
      tmp_2371 += tmp_2372;
   }
   tmp_2370 += tmp_2371;
   result += (-0.5) * tmp_2370;
   std::complex<double> tmp_2373;
   std::complex<double> tmp_2374;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2374 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPL(gO2,gI2))*
         CpbarUFdVGFdPL(gO1,gI2);
   }
   tmp_2373 += tmp_2374;
   result += (-1.3333333333333333) * tmp_2373;
   std::complex<double> tmp_2375;
   std::complex<double> tmp_2376;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2376 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPL(gO2,gI2))*
         CpbarUFdVPFdPL(gO1,gI2);
   }
   tmp_2375 += tmp_2376;
   result += (-1) * tmp_2375;
   std::complex<double> tmp_2377;
   std::complex<double> tmp_2378;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2378 += B1(p,MFu(gI2),MVWm)*Conj(CpbarUFdVWmFuPL(gO2,gI2))*
         CpbarUFdVWmFuPL(gO1,gI2);
   }
   tmp_2377 += tmp_2378;
   result += (-1) * tmp_2377;
   std::complex<double> tmp_2379;
   std::complex<double> tmp_2380;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2380 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPL(gO2,gI2))*
         CpbarUFdVZFdPL(gO1,gI2);
   }
   tmp_2379 += tmp_2380;
   result += (-1) * tmp_2379;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2381;
   std::complex<double> tmp_2382;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2383;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2383 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarUFdhhFdPL(gO2,gI1,
            gI2))*CpbarUFdhhFdPL(gO1,gI1,gI2);
      }
      tmp_2382 += tmp_2383;
   }
   tmp_2381 += tmp_2382;
   result += (-0.5) * tmp_2381;
   std::complex<double> tmp_2384;
   std::complex<double> tmp_2385;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2386;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2386 += B1(p,MFu(gI2),MHpm(gI1))*Conj(CpbarUFdHpmFuPL(gO2,
            gI1,gI2))*CpbarUFdHpmFuPL(gO1,gI1,gI2);
      }
      tmp_2385 += tmp_2386;
   }
   tmp_2384 += tmp_2385;
   result += (-0.5) * tmp_2384;
   std::complex<double> tmp_2387;
   std::complex<double> tmp_2388;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2389;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2389 += B1(p,MFd(gI1),MAh(gI2))*Conj(CpbarUFdFdAhPL(gO2,gI1,
            gI2))*CpbarUFdFdAhPL(gO1,gI1,gI2);
      }
      tmp_2388 += tmp_2389;
   }
   tmp_2387 += tmp_2388;
   result += (-0.5) * tmp_2387;
   std::complex<double> tmp_2390;
   std::complex<double> tmp_2391;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2391 += B1(p,MGlu,MSd(gI1))*Conj(CpbarUFdSdGluPL(gO2,gI1,1))*
         CpbarUFdSdGluPL(gO1,gI1,1);
   }
   tmp_2390 += tmp_2391;
   result += (-0.6666666666666666) * tmp_2390;
   std::complex<double> tmp_2392;
   std::complex<double> tmp_2393;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2394;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2394 += B1(p,MCha(gI2),MSu(gI1))*Conj(CpbarUFdSuChaPL(gO2,
            gI1,gI2))*CpbarUFdSuChaPL(gO1,gI1,gI2);
      }
      tmp_2393 += tmp_2394;
   }
   tmp_2392 += tmp_2393;
   result += (-0.5) * tmp_2392;
   std::complex<double> tmp_2395;
   std::complex<double> tmp_2396;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2397;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2397 += B1(p,MChi(gI2),MSd(gI1))*Conj(CpbarUFdSdChiPL(gO2,
            gI1,gI2))*CpbarUFdSdChiPL(gO1,gI1,gI2);
      }
      tmp_2396 += tmp_2397;
   }
   tmp_2395 += tmp_2396;
   result += (-0.5) * tmp_2395;
   std::complex<double> tmp_2398;
   std::complex<double> tmp_2399;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2399 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVGFdPR(gO2,gI2))*
         CpbarUFdVGFdPR(gO1,gI2);
   }
   tmp_2398 += tmp_2399;
   result += (-1.3333333333333333) * tmp_2398;
   std::complex<double> tmp_2400;
   std::complex<double> tmp_2401;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2401 += B1(p,MFd(gI2),0)*Conj(CpbarUFdVPFdPR(gO2,gI2))*
         CpbarUFdVPFdPR(gO1,gI2);
   }
   tmp_2400 += tmp_2401;
   result += (-1) * tmp_2400;
   std::complex<double> tmp_2402;
   std::complex<double> tmp_2403;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2403 += B1(p,MFu(gI2),MVWm)*Conj(CpbarUFdVWmFuPR(gO2,gI2))*
         CpbarUFdVWmFuPR(gO1,gI2);
   }
   tmp_2402 += tmp_2403;
   result += (-1) * tmp_2402;
   std::complex<double> tmp_2404;
   std::complex<double> tmp_2405;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2405 += B1(p,MFd(gI2),MVZ)*Conj(CpbarUFdVZFdPR(gO2,gI2))*
         CpbarUFdVZFdPR(gO1,gI2);
   }
   tmp_2404 += tmp_2405;
   result += (-1) * tmp_2404;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2406;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2407;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2407 += B0(p,MFd(gI2),MHpm(gI1))*Conj(CpbarUFuconjHpmFdPL(
            gO2,gI1,gI2))*CpbarUFuconjHpmFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2406 += tmp_2407;
   }
   result += tmp_2406;
   std::complex<double> tmp_2408;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2409;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2409 += B0(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_2408 += tmp_2409;
   }
   result += tmp_2408;
   std::complex<double> tmp_2410;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2411;
      std::complex<double> tmp_2412;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2412 += B0(p,MCha(gI1),MSd(gI2))*Conj(CpbarUFubarChaSdPL(gO2
            ,gI1,gI2))*CpbarUFubarChaSdPR(gO1,gI1,gI2);
      }
      tmp_2411 += tmp_2412;
      tmp_2410 += (MCha(gI1)) * tmp_2411;
   }
   result += tmp_2410;
   std::complex<double> tmp_2413;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2414;
      std::complex<double> tmp_2415;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2415 += B0(p,MFu(gI1),MAh(gI2))*Conj(CpbarUFuFuAhPL(gO2,gI1,
            gI2))*CpbarUFuFuAhPR(gO1,gI1,gI2);
      }
      tmp_2414 += tmp_2415;
      tmp_2413 += (MFu(gI1)) * tmp_2414;
   }
   result += tmp_2413;
   std::complex<double> tmp_2416;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2417;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2417 += B0(p,MChi(gI2),MSu(gI1))*Conj(CpbarUFuSuChiPL(gO2,
            gI1,gI2))*CpbarUFuSuChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2416 += tmp_2417;
   }
   result += tmp_2416;
   std::complex<double> tmp_2418;
   std::complex<double> tmp_2419;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2419 += B0(p,MFd(gI2),MVWm)*Conj(CpbarUFuconjVWmFdPR(gO2,gI2))*
         CpbarUFuconjVWmFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2418 += tmp_2419;
   result += (-4) * tmp_2418;
   std::complex<double> tmp_2420;
   std::complex<double> tmp_2421;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2421 += B0(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2420 += tmp_2421;
   result += (-5.333333333333333) * tmp_2420;
   std::complex<double> tmp_2422;
   std::complex<double> tmp_2423;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2423 += B0(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2422 += tmp_2423;
   result += (-4) * tmp_2422;
   std::complex<double> tmp_2424;
   std::complex<double> tmp_2425;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2425 += B0(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2424 += tmp_2425;
   result += (-4) * tmp_2424;
   std::complex<double> tmp_2426;
   std::complex<double> tmp_2427;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2427 += B0(p,MGlu,MSu(gI1))*Conj(CpbarUFuSuGluPL(gO2,gI1,1))*
         CpbarUFuSuGluPR(gO1,gI1,1);
   }
   tmp_2426 += tmp_2427;
   result += (1.3333333333333333*MGlu) * tmp_2426;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2428;
   std::complex<double> tmp_2429;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2430;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2430 += B1(p,MFd(gI2),MHpm(gI1))*Conj(CpbarUFuconjHpmFdPR(
            gO2,gI1,gI2))*CpbarUFuconjHpmFdPR(gO1,gI1,gI2);
      }
      tmp_2429 += tmp_2430;
   }
   tmp_2428 += tmp_2429;
   result += (-0.5) * tmp_2428;
   std::complex<double> tmp_2431;
   std::complex<double> tmp_2432;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2433;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2433 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPR(gO2,gI1,
            gI2))*CpbarUFuhhFuPR(gO1,gI1,gI2);
      }
      tmp_2432 += tmp_2433;
   }
   tmp_2431 += tmp_2432;
   result += (-0.5) * tmp_2431;
   std::complex<double> tmp_2434;
   std::complex<double> tmp_2435;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2436;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2436 += B1(p,MCha(gI1),MSd(gI2))*Conj(CpbarUFubarChaSdPR(gO2
            ,gI1,gI2))*CpbarUFubarChaSdPR(gO1,gI1,gI2);
      }
      tmp_2435 += tmp_2436;
   }
   tmp_2434 += tmp_2435;
   result += (-0.5) * tmp_2434;
   std::complex<double> tmp_2437;
   std::complex<double> tmp_2438;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2439;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2439 += B1(p,MFu(gI1),MAh(gI2))*Conj(CpbarUFuFuAhPR(gO2,gI1,
            gI2))*CpbarUFuFuAhPR(gO1,gI1,gI2);
      }
      tmp_2438 += tmp_2439;
   }
   tmp_2437 += tmp_2438;
   result += (-0.5) * tmp_2437;
   std::complex<double> tmp_2440;
   std::complex<double> tmp_2441;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2441 += B1(p,MGlu,MSu(gI1))*Conj(CpbarUFuSuGluPR(gO2,gI1,1))*
         CpbarUFuSuGluPR(gO1,gI1,1);
   }
   tmp_2440 += tmp_2441;
   result += (-0.6666666666666666) * tmp_2440;
   std::complex<double> tmp_2442;
   std::complex<double> tmp_2443;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2444;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2444 += B1(p,MChi(gI2),MSu(gI1))*Conj(CpbarUFuSuChiPR(gO2,
            gI1,gI2))*CpbarUFuSuChiPR(gO1,gI1,gI2);
      }
      tmp_2443 += tmp_2444;
   }
   tmp_2442 += tmp_2443;
   result += (-0.5) * tmp_2442;
   std::complex<double> tmp_2445;
   std::complex<double> tmp_2446;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2446 += B1(p,MFd(gI2),MVWm)*Conj(CpbarUFuconjVWmFdPL(gO2,gI2))*
         CpbarUFuconjVWmFdPL(gO1,gI2);
   }
   tmp_2445 += tmp_2446;
   result += (-1) * tmp_2445;
   std::complex<double> tmp_2447;
   std::complex<double> tmp_2448;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2448 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPL(gO2,gI2))*
         CpbarUFuVGFuPL(gO1,gI2);
   }
   tmp_2447 += tmp_2448;
   result += (-1.3333333333333333) * tmp_2447;
   std::complex<double> tmp_2449;
   std::complex<double> tmp_2450;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2450 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPL(gO2,gI2))*
         CpbarUFuVPFuPL(gO1,gI2);
   }
   tmp_2449 += tmp_2450;
   result += (-1) * tmp_2449;
   std::complex<double> tmp_2451;
   std::complex<double> tmp_2452;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2452 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPL(gO2,gI2))*
         CpbarUFuVZFuPL(gO1,gI2);
   }
   tmp_2451 += tmp_2452;
   result += (-1) * tmp_2451;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2453;
   std::complex<double> tmp_2454;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2455;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2455 += B1(p,MFd(gI2),MHpm(gI1))*Conj(CpbarUFuconjHpmFdPL(
            gO2,gI1,gI2))*CpbarUFuconjHpmFdPL(gO1,gI1,gI2);
      }
      tmp_2454 += tmp_2455;
   }
   tmp_2453 += tmp_2454;
   result += (-0.5) * tmp_2453;
   std::complex<double> tmp_2456;
   std::complex<double> tmp_2457;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2458;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2458 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarUFuhhFuPL(gO2,gI1,
            gI2))*CpbarUFuhhFuPL(gO1,gI1,gI2);
      }
      tmp_2457 += tmp_2458;
   }
   tmp_2456 += tmp_2457;
   result += (-0.5) * tmp_2456;
   std::complex<double> tmp_2459;
   std::complex<double> tmp_2460;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2461;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2461 += B1(p,MCha(gI1),MSd(gI2))*Conj(CpbarUFubarChaSdPL(gO2
            ,gI1,gI2))*CpbarUFubarChaSdPL(gO1,gI1,gI2);
      }
      tmp_2460 += tmp_2461;
   }
   tmp_2459 += tmp_2460;
   result += (-0.5) * tmp_2459;
   std::complex<double> tmp_2462;
   std::complex<double> tmp_2463;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2464;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2464 += B1(p,MFu(gI1),MAh(gI2))*Conj(CpbarUFuFuAhPL(gO2,gI1,
            gI2))*CpbarUFuFuAhPL(gO1,gI1,gI2);
      }
      tmp_2463 += tmp_2464;
   }
   tmp_2462 += tmp_2463;
   result += (-0.5) * tmp_2462;
   std::complex<double> tmp_2465;
   std::complex<double> tmp_2466;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2466 += B1(p,MGlu,MSu(gI1))*Conj(CpbarUFuSuGluPL(gO2,gI1,1))*
         CpbarUFuSuGluPL(gO1,gI1,1);
   }
   tmp_2465 += tmp_2466;
   result += (-0.6666666666666666) * tmp_2465;
   std::complex<double> tmp_2467;
   std::complex<double> tmp_2468;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2469;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2469 += B1(p,MChi(gI2),MSu(gI1))*Conj(CpbarUFuSuChiPL(gO2,
            gI1,gI2))*CpbarUFuSuChiPL(gO1,gI1,gI2);
      }
      tmp_2468 += tmp_2469;
   }
   tmp_2467 += tmp_2468;
   result += (-0.5) * tmp_2467;
   std::complex<double> tmp_2470;
   std::complex<double> tmp_2471;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2471 += B1(p,MFd(gI2),MVWm)*Conj(CpbarUFuconjVWmFdPR(gO2,gI2))*
         CpbarUFuconjVWmFdPR(gO1,gI2);
   }
   tmp_2470 += tmp_2471;
   result += (-1) * tmp_2470;
   std::complex<double> tmp_2472;
   std::complex<double> tmp_2473;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2473 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVGFuPR(gO2,gI2))*
         CpbarUFuVGFuPR(gO1,gI2);
   }
   tmp_2472 += tmp_2473;
   result += (-1.3333333333333333) * tmp_2472;
   std::complex<double> tmp_2474;
   std::complex<double> tmp_2475;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2475 += B1(p,MFu(gI2),0)*Conj(CpbarUFuVPFuPR(gO2,gI2))*
         CpbarUFuVPFuPR(gO1,gI2);
   }
   tmp_2474 += tmp_2475;
   result += (-1) * tmp_2474;
   std::complex<double> tmp_2476;
   std::complex<double> tmp_2477;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2477 += B1(p,MFu(gI2),MVZ)*Conj(CpbarUFuVZFuPR(gO2,gI2))*
         CpbarUFuVZFuPR(gO1,gI2);
   }
   tmp_2476 += tmp_2477;
   result += (-1) * tmp_2476;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_1(double p ) const
{
   std::complex<double> result;

   std::complex<double> tmp_2478;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2479;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2479 += B0(p,MFd(gI2),MSd(gI1))*Conj(CpGluconjSdFdPL(gI1,gI2
            ))*CpGluconjSdFdPR(gI1,gI2)*MFd(gI2);
      }
      tmp_2478 += tmp_2479;
   }
   result += tmp_2478;
   std::complex<double> tmp_2480;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2481;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2481 += B0(p,MFu(gI2),MSu(gI1))*Conj(CpGluconjSuFuPL(gI1,gI2
            ))*CpGluconjSuFuPR(gI1,gI2)*MFu(gI2);
      }
      tmp_2480 += tmp_2481;
   }
   result += tmp_2480;
   result += -12*MGlu*B0(p,MGlu,0)*Conj(CpGluVGGluPR())*CpGluVGGluPL();

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_PR(double p ) const
{
   std::complex<double> result;

   result += -3*AbsSqr(CpGluVGGluPL())*B1(p,MGlu,0);
   std::complex<double> tmp_2482;
   std::complex<double> tmp_2483;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2484;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2484 += AbsSqr(CpGluconjSdFdPR(gI1,gI2))*B1(p,MFd(gI2),MSd(
            gI1));
      }
      tmp_2483 += tmp_2484;
   }
   tmp_2482 += tmp_2483;
   result += (-0.5) * tmp_2482;
   std::complex<double> tmp_2485;
   std::complex<double> tmp_2486;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2487;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2487 += AbsSqr(CpGluconjSuFuPR(gI1,gI2))*B1(p,MFu(gI2),MSu(
            gI1));
      }
      tmp_2486 += tmp_2487;
   }
   tmp_2485 += tmp_2486;
   result += (-0.5) * tmp_2485;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Glu_PL(double p ) const
{
   std::complex<double> result;

   result += -3*AbsSqr(CpGluVGGluPR())*B1(p,MGlu,0);
   std::complex<double> tmp_2488;
   std::complex<double> tmp_2489;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2490;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2490 += AbsSqr(CpGluconjSdFdPL(gI1,gI2))*B1(p,MFd(gI2),MSd(
            gI1));
      }
      tmp_2489 += tmp_2490;
   }
   tmp_2488 += tmp_2489;
   result += (-0.5) * tmp_2488;
   std::complex<double> tmp_2491;
   std::complex<double> tmp_2492;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2493;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2493 += AbsSqr(CpGluconjSuFuPL(gI1,gI2))*B1(p,MFu(gI2),MSu(
            gI1));
      }
      tmp_2492 += tmp_2493;
   }
   tmp_2491 += tmp_2492;
   result += (-0.5) * tmp_2491;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VZ_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpVZconjHpmHpm(1,1))*B00(p,MHpm(1),MHpm(1));
   result += 2*AbsSqr(CpVZconjVWmHpm(1))*B0(p,MVWm,MHpm(1));
   result += 0.5*A0(MAh(1))*CpVZVZAhAh(1,1);
   result += A0(MHpm(1))*CpVZVZconjHpmHpm(1,1);
   std::complex<double> tmp_2494;
   std::complex<double> tmp_2495;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2495 += AbsSqr(CpVZhhAh(gI1,1))*B00(p,MAh(1),Mhh(gI1));
   }
   tmp_2494 += tmp_2495;
   result += (-4) * tmp_2494;
   std::complex<double> tmp_2496;
   std::complex<double> tmp_2497;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2497 += A0(Mhh(gI1))*CpVZVZhhhh(gI1,gI1);
   }
   tmp_2496 += tmp_2497;
   result += (0.5) * tmp_2496;
   std::complex<double> tmp_2498;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2499;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2499 += (AbsSqr(CpVZbarChaChaPL(gI1,gI2)) + AbsSqr(
            CpVZbarChaChaPR(gI1,gI2)))*H0(p,MCha(gI1),MCha(gI2));
         tmp_2499 += 4*B0(p,MCha(gI1),MCha(gI2))*MCha(gI1)*MCha(gI2)*Re(
            Conj(CpVZbarChaChaPL(gI1,gI2))*CpVZbarChaChaPR(gI1,gI2));
      }
      tmp_2498 += tmp_2499;
   }
   result += tmp_2498;
   std::complex<double> tmp_2500;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2500 += A0(MSv(gI1))*CpVZVZconjSvSv(gI1,gI1);
   }
   result += tmp_2500;
   std::complex<double> tmp_2501;
   std::complex<double> tmp_2502;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2503;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2503 += AbsSqr(CpVZconjSvSv(gI1,gI2))*B00(p,MSv(gI1),MSv(gI2
            ));
      }
      tmp_2502 += tmp_2503;
   }
   tmp_2501 += tmp_2502;
   result += (-4) * tmp_2501;
   std::complex<double> tmp_2504;
   std::complex<double> tmp_2505;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2506;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2506 += (AbsSqr(CpVZChiChiPL(gI1,gI2)) + AbsSqr(CpVZChiChiPR
            (gI1,gI2)))*H0(p,MChi(gI1),MChi(gI2));
         tmp_2506 += 4*B0(p,MChi(gI1),MChi(gI2))*MChi(gI1)*MChi(gI2)*Re(
            Conj(CpVZChiChiPL(gI1,gI2))*CpVZChiChiPR(gI1,gI2));
      }
      tmp_2505 += tmp_2506;
   }
   tmp_2504 += tmp_2505;
   result += (0.5) * tmp_2504;
   std::complex<double> tmp_2507;
   std::complex<double> tmp_2508;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2508 += A0(MSd(gI1))*CpVZVZconjSdSd(gI1,gI1);
   }
   tmp_2507 += tmp_2508;
   result += (3) * tmp_2507;
   std::complex<double> tmp_2509;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2509 += A0(MSe(gI1))*CpVZVZconjSeSe(gI1,gI1);
   }
   result += tmp_2509;
   std::complex<double> tmp_2510;
   std::complex<double> tmp_2511;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2511 += A0(MSu(gI1))*CpVZVZconjSuSu(gI1,gI1);
   }
   tmp_2510 += tmp_2511;
   result += (3) * tmp_2510;
   std::complex<double> tmp_2512;
   std::complex<double> tmp_2513;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2514;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2514 += AbsSqr(CpVZconjSdSd(gI1,gI2))*B00(p,MSd(gI1),MSd(gI2
            ));
      }
      tmp_2513 += tmp_2514;
   }
   tmp_2512 += tmp_2513;
   result += (-12) * tmp_2512;
   std::complex<double> tmp_2515;
   std::complex<double> tmp_2516;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2517;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2517 += AbsSqr(CpVZconjSeSe(gI1,gI2))*B00(p,MSe(gI1),MSe(gI2
            ));
      }
      tmp_2516 += tmp_2517;
   }
   tmp_2515 += tmp_2516;
   result += (-4) * tmp_2515;
   std::complex<double> tmp_2518;
   std::complex<double> tmp_2519;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2520;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2520 += AbsSqr(CpVZconjSuSu(gI1,gI2))*B00(p,MSu(gI1),MSu(gI2
            ));
      }
      tmp_2519 += tmp_2520;
   }
   tmp_2518 += tmp_2519;
   result += (-12) * tmp_2518;
   std::complex<double> tmp_2521;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2521 += AbsSqr(CpVZVZhh(gI2))*B0(p,MVZ,Mhh(gI2));
   }
   result += tmp_2521;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_VWm_heavy(double p ) const
{
   std::complex<double> result;

   result += -4*AbsSqr(CpconjVWmHpmAh(1,1))*B00(p,MAh(1),MHpm(1));
   result += AbsSqr(CpconjVWmVPHpm(1))*B0(p,0,MHpm(1));
   result += AbsSqr(CpconjVWmVZHpm(1))*B0(p,MVZ,MHpm(1));
   result += 0.5*A0(MAh(1))*CpVWmconjVWmAhAh(1,1);
   result += A0(MHpm(1))*CpVWmconjVWmconjHpmHpm(1,1);
   std::complex<double> tmp_2522;
   std::complex<double> tmp_2523;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2523 += A0(Mhh(gI1))*CpVWmconjVWmhhhh(gI1,gI1);
   }
   tmp_2522 += tmp_2523;
   result += (0.5) * tmp_2522;
   std::complex<double> tmp_2524;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2524 += A0(MSv(gI1))*CpVWmconjVWmconjSvSv(gI1,gI1);
   }
   result += tmp_2524;
   std::complex<double> tmp_2525;
   std::complex<double> tmp_2526;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2527;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2527 += AbsSqr(CpconjVWmconjSvSe(gI1,gI2))*B00(p,MSe(gI2),
            MSv(gI1));
      }
      tmp_2526 += tmp_2527;
   }
   tmp_2525 += tmp_2526;
   result += (-4) * tmp_2525;
   std::complex<double> tmp_2528;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      std::complex<double> tmp_2529;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2529 += (AbsSqr(CpconjVWmChiChaPL(gI1,gI2)) + AbsSqr(
            CpconjVWmChiChaPR(gI1,gI2)))*H0(p,MChi(gI1),MCha(gI2));
         tmp_2529 += 4*B0(p,MChi(gI1),MCha(gI2))*MCha(gI2)*MChi(gI1)*Re(
            Conj(CpconjVWmChiChaPL(gI1,gI2))*CpconjVWmChiChaPR(gI1,gI2));
      }
      tmp_2528 += tmp_2529;
   }
   result += tmp_2528;
   std::complex<double> tmp_2530;
   std::complex<double> tmp_2531;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2531 += A0(MSd(gI1))*CpVWmconjVWmconjSdSd(gI1,gI1);
   }
   tmp_2530 += tmp_2531;
   result += (3) * tmp_2530;
   std::complex<double> tmp_2532;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2532 += A0(MSe(gI1))*CpVWmconjVWmconjSeSe(gI1,gI1);
   }
   result += tmp_2532;
   std::complex<double> tmp_2533;
   std::complex<double> tmp_2534;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2534 += A0(MSu(gI1))*CpVWmconjVWmconjSuSu(gI1,gI1);
   }
   tmp_2533 += tmp_2534;
   result += (3) * tmp_2533;
   std::complex<double> tmp_2535;
   std::complex<double> tmp_2536;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2537;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2537 += AbsSqr(CpconjVWmconjSuSd(gI1,gI2))*B00(p,MSd(gI2),
            MSu(gI1));
      }
      tmp_2536 += tmp_2537;
   }
   tmp_2535 += tmp_2536;
   result += (-12) * tmp_2535;
   std::complex<double> tmp_2538;
   std::complex<double> tmp_2539;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2539 += AbsSqr(CpconjVWmHpmhh(1,gI2))*B00(p,Mhh(gI2),MHpm(1));
   }
   tmp_2538 += tmp_2539;
   result += (-4) * tmp_2538;
   std::complex<double> tmp_2540;
   for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
      tmp_2540 += AbsSqr(CpconjVWmVWmhh(gI2))*B0(p,MVWm,Mhh(gI2));
   }
   result += tmp_2540;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2541;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2542;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2542 += B0(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePL(gO2,gI1,
            gI2))*CpbarFehhFePR(gO1,gI1,gI2)*MFe(gI2);
      }
      tmp_2541 += tmp_2542;
   }
   result += tmp_2541;
   std::complex<double> tmp_2543;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2544;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2544 += B0(p,MFv(gI2),MHpm(gI1))*Conj(CpbarFeHpmFvPL(gO2,gI1
            ,gI2))*CpbarFeHpmFvPR(gO1,gI1,gI2)*MFv(gI2);
      }
      tmp_2543 += tmp_2544;
   }
   result += tmp_2543;
   std::complex<double> tmp_2545;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2546;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2546 += B0(p,MCha(gI2),MSv(gI1))*Conj(CpbarFeSvChaPL(gO2,gI1
            ,gI2))*CpbarFeSvChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2545 += tmp_2546;
   }
   result += tmp_2545;
   std::complex<double> tmp_2547;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2548;
      std::complex<double> tmp_2549;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2549 += B0(p,MFe(gI1),MAh(gI2))*Conj(CpbarFeFeAhPL(gO2,gI1,
            gI2))*CpbarFeFeAhPR(gO1,gI1,gI2);
      }
      tmp_2548 += tmp_2549;
      tmp_2547 += (MFe(gI1)) * tmp_2548;
   }
   result += tmp_2547;
   std::complex<double> tmp_2550;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2551;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2551 += B0(p,MChi(gI2),MSe(gI1))*Conj(CpbarFeSeChiPL(gO2,gI1
            ,gI2))*CpbarFeSeChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2550 += tmp_2551;
   }
   result += tmp_2550;
   std::complex<double> tmp_2552;
   std::complex<double> tmp_2553;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2553 += B0(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2)*MFe(gI2);
   }
   tmp_2552 += tmp_2553;
   result += (-4) * tmp_2552;
   std::complex<double> tmp_2554;
   std::complex<double> tmp_2555;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2555 += B0(p,MFv(gI2),MVWm)*Conj(CpbarFeVWmFvPR(gO2,gI2))*
         CpbarFeVWmFvPL(gO1,gI2)*MFv(gI2);
   }
   tmp_2554 += tmp_2555;
   result += (-4) * tmp_2554;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2556;
   std::complex<double> tmp_2557;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2558;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2558 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePR(gO2,gI1,
            gI2))*CpbarFehhFePR(gO1,gI1,gI2);
      }
      tmp_2557 += tmp_2558;
   }
   tmp_2556 += tmp_2557;
   result += (-0.5) * tmp_2556;
   std::complex<double> tmp_2559;
   std::complex<double> tmp_2560;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2561;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2561 += B1(p,MFv(gI2),MHpm(gI1))*Conj(CpbarFeHpmFvPR(gO2,gI1
            ,gI2))*CpbarFeHpmFvPR(gO1,gI1,gI2);
      }
      tmp_2560 += tmp_2561;
   }
   tmp_2559 += tmp_2560;
   result += (-0.5) * tmp_2559;
   std::complex<double> tmp_2562;
   std::complex<double> tmp_2563;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2564;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2564 += B1(p,MFe(gI1),MAh(gI2))*Conj(CpbarFeFeAhPR(gO2,gI1,
            gI2))*CpbarFeFeAhPR(gO1,gI1,gI2);
      }
      tmp_2563 += tmp_2564;
   }
   tmp_2562 += tmp_2563;
   result += (-0.5) * tmp_2562;
   std::complex<double> tmp_2565;
   std::complex<double> tmp_2566;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2567;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2567 += B1(p,MCha(gI2),MSv(gI1))*Conj(CpbarFeSvChaPR(gO2,gI1
            ,gI2))*CpbarFeSvChaPR(gO1,gI1,gI2);
      }
      tmp_2566 += tmp_2567;
   }
   tmp_2565 += tmp_2566;
   result += (-0.5) * tmp_2565;
   std::complex<double> tmp_2568;
   std::complex<double> tmp_2569;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2570;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2570 += B1(p,MChi(gI2),MSe(gI1))*Conj(CpbarFeSeChiPR(gO2,gI1
            ,gI2))*CpbarFeSeChiPR(gO1,gI1,gI2);
      }
      tmp_2569 += tmp_2570;
   }
   tmp_2568 += tmp_2569;
   result += (-0.5) * tmp_2568;
   std::complex<double> tmp_2571;
   std::complex<double> tmp_2572;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2572 += B1(p,MFv(gI2),MVWm)*Conj(CpbarFeVWmFvPL(gO2,gI2))*
         CpbarFeVWmFvPL(gO1,gI2);
   }
   tmp_2571 += tmp_2572;
   result += (-1) * tmp_2571;
   std::complex<double> tmp_2573;
   std::complex<double> tmp_2574;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2574 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePL(gO2,gI2))*
         CpbarFeVZFePL(gO1,gI2);
   }
   tmp_2573 += tmp_2574;
   result += (-1) * tmp_2573;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fe_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2575;
   std::complex<double> tmp_2576;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2577;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2577 += B1(p,MFe(gI2),Mhh(gI1))*Conj(CpbarFehhFePL(gO2,gI1,
            gI2))*CpbarFehhFePL(gO1,gI1,gI2);
      }
      tmp_2576 += tmp_2577;
   }
   tmp_2575 += tmp_2576;
   result += (-0.5) * tmp_2575;
   std::complex<double> tmp_2578;
   std::complex<double> tmp_2579;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2580;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2580 += B1(p,MFv(gI2),MHpm(gI1))*Conj(CpbarFeHpmFvPL(gO2,gI1
            ,gI2))*CpbarFeHpmFvPL(gO1,gI1,gI2);
      }
      tmp_2579 += tmp_2580;
   }
   tmp_2578 += tmp_2579;
   result += (-0.5) * tmp_2578;
   std::complex<double> tmp_2581;
   std::complex<double> tmp_2582;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2583;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2583 += B1(p,MFe(gI1),MAh(gI2))*Conj(CpbarFeFeAhPL(gO2,gI1,
            gI2))*CpbarFeFeAhPL(gO1,gI1,gI2);
      }
      tmp_2582 += tmp_2583;
   }
   tmp_2581 += tmp_2582;
   result += (-0.5) * tmp_2581;
   std::complex<double> tmp_2584;
   std::complex<double> tmp_2585;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2586;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2586 += B1(p,MCha(gI2),MSv(gI1))*Conj(CpbarFeSvChaPL(gO2,gI1
            ,gI2))*CpbarFeSvChaPL(gO1,gI1,gI2);
      }
      tmp_2585 += tmp_2586;
   }
   tmp_2584 += tmp_2585;
   result += (-0.5) * tmp_2584;
   std::complex<double> tmp_2587;
   std::complex<double> tmp_2588;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2589;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2589 += B1(p,MChi(gI2),MSe(gI1))*Conj(CpbarFeSeChiPL(gO2,gI1
            ,gI2))*CpbarFeSeChiPL(gO1,gI1,gI2);
      }
      tmp_2588 += tmp_2589;
   }
   tmp_2587 += tmp_2588;
   result += (-0.5) * tmp_2587;
   std::complex<double> tmp_2590;
   std::complex<double> tmp_2591;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2591 += B1(p,MFv(gI2),MVWm)*Conj(CpbarFeVWmFvPR(gO2,gI2))*
         CpbarFeVWmFvPR(gO1,gI2);
   }
   tmp_2590 += tmp_2591;
   result += (-1) * tmp_2590;
   std::complex<double> tmp_2592;
   std::complex<double> tmp_2593;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2593 += B1(p,MFe(gI2),MVZ)*Conj(CpbarFeVZFePR(gO2,gI2))*
         CpbarFeVZFePR(gO1,gI2);
   }
   tmp_2592 += tmp_2593;
   result += (-1) * tmp_2592;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2594;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2595;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2595 += B0(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPL(gO2,gI1,
            gI2))*CpbarFdhhFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2594 += tmp_2595;
   }
   result += tmp_2594;
   std::complex<double> tmp_2596;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2597;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2597 += B0(p,MFu(gI2),MHpm(gI1))*Conj(CpbarFdHpmFuPL(gO2,gI1
            ,gI2))*CpbarFdHpmFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_2596 += tmp_2597;
   }
   result += tmp_2596;
   std::complex<double> tmp_2598;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2599;
      std::complex<double> tmp_2600;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2600 += B0(p,MFd(gI1),MAh(gI2))*Conj(CpbarFdFdAhPL(gO2,gI1,
            gI2))*CpbarFdFdAhPR(gO1,gI1,gI2);
      }
      tmp_2599 += tmp_2600;
      tmp_2598 += (MFd(gI1)) * tmp_2599;
   }
   result += tmp_2598;
   std::complex<double> tmp_2601;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2602;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2602 += B0(p,MCha(gI2),MSu(gI1))*Conj(CpbarFdSuChaPL(gO2,gI1
            ,gI2))*CpbarFdSuChaPR(gO1,gI1,gI2)*MCha(gI2);
      }
      tmp_2601 += tmp_2602;
   }
   result += tmp_2601;
   std::complex<double> tmp_2603;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2604;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2604 += B0(p,MChi(gI2),MSd(gI1))*Conj(CpbarFdSdChiPL(gO2,gI1
            ,gI2))*CpbarFdSdChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2603 += tmp_2604;
   }
   result += tmp_2603;
   std::complex<double> tmp_2605;
   std::complex<double> tmp_2606;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2606 += B0(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2605 += tmp_2606;
   result += (-4) * tmp_2605;
   std::complex<double> tmp_2607;
   std::complex<double> tmp_2608;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2608 += B0(p,MFu(gI2),MVWm)*Conj(CpbarFdVWmFuPR(gO2,gI2))*
         CpbarFdVWmFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2607 += tmp_2608;
   result += (-4) * tmp_2607;
   std::complex<double> tmp_2609;
   std::complex<double> tmp_2610;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2610 += B0(p,MGlu,MSd(gI1))*Conj(CpbarFdSdGluPL(gO2,gI1,1))*
         CpbarFdSdGluPR(gO1,gI1,1);
   }
   tmp_2609 += tmp_2610;
   result += (1.3333333333333333*MGlu) * tmp_2609;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2611;
   std::complex<double> tmp_2612;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2613;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2613 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPR(gO2,gI1,
            gI2))*CpbarFdhhFdPR(gO1,gI1,gI2);
      }
      tmp_2612 += tmp_2613;
   }
   tmp_2611 += tmp_2612;
   result += (-0.5) * tmp_2611;
   std::complex<double> tmp_2614;
   std::complex<double> tmp_2615;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2616;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2616 += B1(p,MFu(gI2),MHpm(gI1))*Conj(CpbarFdHpmFuPR(gO2,gI1
            ,gI2))*CpbarFdHpmFuPR(gO1,gI1,gI2);
      }
      tmp_2615 += tmp_2616;
   }
   tmp_2614 += tmp_2615;
   result += (-0.5) * tmp_2614;
   std::complex<double> tmp_2617;
   std::complex<double> tmp_2618;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2619;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2619 += B1(p,MFd(gI1),MAh(gI2))*Conj(CpbarFdFdAhPR(gO2,gI1,
            gI2))*CpbarFdFdAhPR(gO1,gI1,gI2);
      }
      tmp_2618 += tmp_2619;
   }
   tmp_2617 += tmp_2618;
   result += (-0.5) * tmp_2617;
   std::complex<double> tmp_2620;
   std::complex<double> tmp_2621;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2621 += B1(p,MGlu,MSd(gI1))*Conj(CpbarFdSdGluPR(gO2,gI1,1))*
         CpbarFdSdGluPR(gO1,gI1,1);
   }
   tmp_2620 += tmp_2621;
   result += (-0.6666666666666666) * tmp_2620;
   std::complex<double> tmp_2622;
   std::complex<double> tmp_2623;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2624;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2624 += B1(p,MCha(gI2),MSu(gI1))*Conj(CpbarFdSuChaPR(gO2,gI1
            ,gI2))*CpbarFdSuChaPR(gO1,gI1,gI2);
      }
      tmp_2623 += tmp_2624;
   }
   tmp_2622 += tmp_2623;
   result += (-0.5) * tmp_2622;
   std::complex<double> tmp_2625;
   std::complex<double> tmp_2626;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2627;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2627 += B1(p,MChi(gI2),MSd(gI1))*Conj(CpbarFdSdChiPR(gO2,gI1
            ,gI2))*CpbarFdSdChiPR(gO1,gI1,gI2);
      }
      tmp_2626 += tmp_2627;
   }
   tmp_2625 += tmp_2626;
   result += (-0.5) * tmp_2625;
   std::complex<double> tmp_2628;
   std::complex<double> tmp_2629;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2629 += B1(p,MFu(gI2),MVWm)*Conj(CpbarFdVWmFuPL(gO2,gI2))*
         CpbarFdVWmFuPL(gO1,gI2);
   }
   tmp_2628 += tmp_2629;
   result += (-1) * tmp_2628;
   std::complex<double> tmp_2630;
   std::complex<double> tmp_2631;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2631 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPL(gO2,gI2))*
         CpbarFdVZFdPL(gO1,gI2);
   }
   tmp_2630 += tmp_2631;
   result += (-1) * tmp_2630;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fd_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2632;
   std::complex<double> tmp_2633;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2634;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2634 += B1(p,MFd(gI2),Mhh(gI1))*Conj(CpbarFdhhFdPL(gO2,gI1,
            gI2))*CpbarFdhhFdPL(gO1,gI1,gI2);
      }
      tmp_2633 += tmp_2634;
   }
   tmp_2632 += tmp_2633;
   result += (-0.5) * tmp_2632;
   std::complex<double> tmp_2635;
   std::complex<double> tmp_2636;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2637;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2637 += B1(p,MFu(gI2),MHpm(gI1))*Conj(CpbarFdHpmFuPL(gO2,gI1
            ,gI2))*CpbarFdHpmFuPL(gO1,gI1,gI2);
      }
      tmp_2636 += tmp_2637;
   }
   tmp_2635 += tmp_2636;
   result += (-0.5) * tmp_2635;
   std::complex<double> tmp_2638;
   std::complex<double> tmp_2639;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2640;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2640 += B1(p,MFd(gI1),MAh(gI2))*Conj(CpbarFdFdAhPL(gO2,gI1,
            gI2))*CpbarFdFdAhPL(gO1,gI1,gI2);
      }
      tmp_2639 += tmp_2640;
   }
   tmp_2638 += tmp_2639;
   result += (-0.5) * tmp_2638;
   std::complex<double> tmp_2641;
   std::complex<double> tmp_2642;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2642 += B1(p,MGlu,MSd(gI1))*Conj(CpbarFdSdGluPL(gO2,gI1,1))*
         CpbarFdSdGluPL(gO1,gI1,1);
   }
   tmp_2641 += tmp_2642;
   result += (-0.6666666666666666) * tmp_2641;
   std::complex<double> tmp_2643;
   std::complex<double> tmp_2644;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2645;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2645 += B1(p,MCha(gI2),MSu(gI1))*Conj(CpbarFdSuChaPL(gO2,gI1
            ,gI2))*CpbarFdSuChaPL(gO1,gI1,gI2);
      }
      tmp_2644 += tmp_2645;
   }
   tmp_2643 += tmp_2644;
   result += (-0.5) * tmp_2643;
   std::complex<double> tmp_2646;
   std::complex<double> tmp_2647;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2648;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2648 += B1(p,MChi(gI2),MSd(gI1))*Conj(CpbarFdSdChiPL(gO2,gI1
            ,gI2))*CpbarFdSdChiPL(gO1,gI1,gI2);
      }
      tmp_2647 += tmp_2648;
   }
   tmp_2646 += tmp_2647;
   result += (-0.5) * tmp_2646;
   std::complex<double> tmp_2649;
   std::complex<double> tmp_2650;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2650 += B1(p,MFu(gI2),MVWm)*Conj(CpbarFdVWmFuPR(gO2,gI2))*
         CpbarFdVWmFuPR(gO1,gI2);
   }
   tmp_2649 += tmp_2650;
   result += (-1) * tmp_2649;
   std::complex<double> tmp_2651;
   std::complex<double> tmp_2652;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2652 += B1(p,MFd(gI2),MVZ)*Conj(CpbarFdVZFdPR(gO2,gI2))*
         CpbarFdVZFdPR(gO1,gI2);
   }
   tmp_2651 += tmp_2652;
   result += (-1) * tmp_2651;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_1_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2653;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2654;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2654 += B0(p,MFd(gI2),MHpm(gI1))*Conj(CpbarFuconjHpmFdPL(gO2
            ,gI1,gI2))*CpbarFuconjHpmFdPR(gO1,gI1,gI2)*MFd(gI2);
      }
      tmp_2653 += tmp_2654;
   }
   result += tmp_2653;
   std::complex<double> tmp_2655;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2656;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2656 += B0(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPL(gO2,gI1,
            gI2))*CpbarFuhhFuPR(gO1,gI1,gI2)*MFu(gI2);
      }
      tmp_2655 += tmp_2656;
   }
   result += tmp_2655;
   std::complex<double> tmp_2657;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2658;
      std::complex<double> tmp_2659;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2659 += B0(p,MCha(gI1),MSd(gI2))*Conj(CpbarFubarChaSdPL(gO2,
            gI1,gI2))*CpbarFubarChaSdPR(gO1,gI1,gI2);
      }
      tmp_2658 += tmp_2659;
      tmp_2657 += (MCha(gI1)) * tmp_2658;
   }
   result += tmp_2657;
   std::complex<double> tmp_2660;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2661;
      std::complex<double> tmp_2662;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2662 += B0(p,MFu(gI1),MAh(gI2))*Conj(CpbarFuFuAhPL(gO2,gI1,
            gI2))*CpbarFuFuAhPR(gO1,gI1,gI2);
      }
      tmp_2661 += tmp_2662;
      tmp_2660 += (MFu(gI1)) * tmp_2661;
   }
   result += tmp_2660;
   std::complex<double> tmp_2663;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2664;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2664 += B0(p,MChi(gI2),MSu(gI1))*Conj(CpbarFuSuChiPL(gO2,gI1
            ,gI2))*CpbarFuSuChiPR(gO1,gI1,gI2)*MChi(gI2);
      }
      tmp_2663 += tmp_2664;
   }
   result += tmp_2663;
   std::complex<double> tmp_2665;
   std::complex<double> tmp_2666;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2666 += B0(p,MFd(gI2),MVWm)*Conj(CpbarFuconjVWmFdPR(gO2,gI2))*
         CpbarFuconjVWmFdPL(gO1,gI2)*MFd(gI2);
   }
   tmp_2665 += tmp_2666;
   result += (-4) * tmp_2665;
   std::complex<double> tmp_2667;
   std::complex<double> tmp_2668;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2668 += B0(p,MFu(gI2),0)*Conj(CpbarFuVPFuPR(gO2,gI2))*
         CpbarFuVPFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2667 += tmp_2668;
   result += (-4) * tmp_2667;
   std::complex<double> tmp_2669;
   std::complex<double> tmp_2670;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2670 += B0(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2)*MFu(gI2);
   }
   tmp_2669 += tmp_2670;
   result += (-4) * tmp_2669;
   std::complex<double> tmp_2671;
   std::complex<double> tmp_2672;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2672 += B0(p,MGlu,MSu(gI1))*Conj(CpbarFuSuGluPL(gO2,gI1,1))*
         CpbarFuSuGluPR(gO1,gI1,1);
   }
   tmp_2671 += tmp_2672;
   result += (1.3333333333333333*MGlu) * tmp_2671;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PR_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2673;
   std::complex<double> tmp_2674;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2675;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2675 += B1(p,MFd(gI2),MHpm(gI1))*Conj(CpbarFuconjHpmFdPR(gO2
            ,gI1,gI2))*CpbarFuconjHpmFdPR(gO1,gI1,gI2);
      }
      tmp_2674 += tmp_2675;
   }
   tmp_2673 += tmp_2674;
   result += (-0.5) * tmp_2673;
   std::complex<double> tmp_2676;
   std::complex<double> tmp_2677;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2678;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2678 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPR(gO2,gI1,
            gI2))*CpbarFuhhFuPR(gO1,gI1,gI2);
      }
      tmp_2677 += tmp_2678;
   }
   tmp_2676 += tmp_2677;
   result += (-0.5) * tmp_2676;
   std::complex<double> tmp_2679;
   std::complex<double> tmp_2680;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2681;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2681 += B1(p,MCha(gI1),MSd(gI2))*Conj(CpbarFubarChaSdPR(gO2,
            gI1,gI2))*CpbarFubarChaSdPR(gO1,gI1,gI2);
      }
      tmp_2680 += tmp_2681;
   }
   tmp_2679 += tmp_2680;
   result += (-0.5) * tmp_2679;
   std::complex<double> tmp_2682;
   std::complex<double> tmp_2683;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2684;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2684 += B1(p,MFu(gI1),MAh(gI2))*Conj(CpbarFuFuAhPR(gO2,gI1,
            gI2))*CpbarFuFuAhPR(gO1,gI1,gI2);
      }
      tmp_2683 += tmp_2684;
   }
   tmp_2682 += tmp_2683;
   result += (-0.5) * tmp_2682;
   std::complex<double> tmp_2685;
   std::complex<double> tmp_2686;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2686 += B1(p,MGlu,MSu(gI1))*Conj(CpbarFuSuGluPR(gO2,gI1,1))*
         CpbarFuSuGluPR(gO1,gI1,1);
   }
   tmp_2685 += tmp_2686;
   result += (-0.6666666666666666) * tmp_2685;
   std::complex<double> tmp_2687;
   std::complex<double> tmp_2688;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2689;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2689 += B1(p,MChi(gI2),MSu(gI1))*Conj(CpbarFuSuChiPR(gO2,gI1
            ,gI2))*CpbarFuSuChiPR(gO1,gI1,gI2);
      }
      tmp_2688 += tmp_2689;
   }
   tmp_2687 += tmp_2688;
   result += (-0.5) * tmp_2687;
   std::complex<double> tmp_2690;
   std::complex<double> tmp_2691;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2691 += B1(p,MFd(gI2),MVWm)*Conj(CpbarFuconjVWmFdPL(gO2,gI2))*
         CpbarFuconjVWmFdPL(gO1,gI2);
   }
   tmp_2690 += tmp_2691;
   result += (-1) * tmp_2690;
   std::complex<double> tmp_2692;
   std::complex<double> tmp_2693;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2693 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPL(gO2,gI2))*
         CpbarFuVPFuPL(gO1,gI2);
   }
   tmp_2692 += tmp_2693;
   result += (-1) * tmp_2692;
   std::complex<double> tmp_2694;
   std::complex<double> tmp_2695;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2695 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPL(gO2,gI2))*
         CpbarFuVZFuPL(gO1,gI2);
   }
   tmp_2694 += tmp_2695;
   result += (-1) * tmp_2694;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::self_energy_Fu_PL_heavy_rotated(double p , unsigned gO1, unsigned gO2) const
{
   std::complex<double> result;

   std::complex<double> tmp_2696;
   std::complex<double> tmp_2697;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2698;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2698 += B1(p,MFd(gI2),MHpm(gI1))*Conj(CpbarFuconjHpmFdPL(gO2
            ,gI1,gI2))*CpbarFuconjHpmFdPL(gO1,gI1,gI2);
      }
      tmp_2697 += tmp_2698;
   }
   tmp_2696 += tmp_2697;
   result += (-0.5) * tmp_2696;
   std::complex<double> tmp_2699;
   std::complex<double> tmp_2700;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2701;
      for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
         tmp_2701 += B1(p,MFu(gI2),Mhh(gI1))*Conj(CpbarFuhhFuPL(gO2,gI1,
            gI2))*CpbarFuhhFuPL(gO1,gI1,gI2);
      }
      tmp_2700 += tmp_2701;
   }
   tmp_2699 += tmp_2700;
   result += (-0.5) * tmp_2699;
   std::complex<double> tmp_2702;
   std::complex<double> tmp_2703;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      std::complex<double> tmp_2704;
      for (unsigned gI2 = 0; gI2 < 6; ++gI2) {
         tmp_2704 += B1(p,MCha(gI1),MSd(gI2))*Conj(CpbarFubarChaSdPL(gO2,
            gI1,gI2))*CpbarFubarChaSdPL(gO1,gI1,gI2);
      }
      tmp_2703 += tmp_2704;
   }
   tmp_2702 += tmp_2703;
   result += (-0.5) * tmp_2702;
   std::complex<double> tmp_2705;
   std::complex<double> tmp_2706;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      std::complex<double> tmp_2707;
      for (unsigned gI2 = 0; gI2 < 2; ++gI2) {
         tmp_2707 += B1(p,MFu(gI1),MAh(gI2))*Conj(CpbarFuFuAhPL(gO2,gI1,
            gI2))*CpbarFuFuAhPL(gO1,gI1,gI2);
      }
      tmp_2706 += tmp_2707;
   }
   tmp_2705 += tmp_2706;
   result += (-0.5) * tmp_2705;
   std::complex<double> tmp_2708;
   std::complex<double> tmp_2709;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2709 += B1(p,MGlu,MSu(gI1))*Conj(CpbarFuSuGluPL(gO2,gI1,1))*
         CpbarFuSuGluPL(gO1,gI1,1);
   }
   tmp_2708 += tmp_2709;
   result += (-0.6666666666666666) * tmp_2708;
   std::complex<double> tmp_2710;
   std::complex<double> tmp_2711;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      std::complex<double> tmp_2712;
      for (unsigned gI2 = 0; gI2 < 4; ++gI2) {
         tmp_2712 += B1(p,MChi(gI2),MSu(gI1))*Conj(CpbarFuSuChiPL(gO2,gI1
            ,gI2))*CpbarFuSuChiPL(gO1,gI1,gI2);
      }
      tmp_2711 += tmp_2712;
   }
   tmp_2710 += tmp_2711;
   result += (-0.5) * tmp_2710;
   std::complex<double> tmp_2713;
   std::complex<double> tmp_2714;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2714 += B1(p,MFd(gI2),MVWm)*Conj(CpbarFuconjVWmFdPR(gO2,gI2))*
         CpbarFuconjVWmFdPR(gO1,gI2);
   }
   tmp_2713 += tmp_2714;
   result += (-1) * tmp_2713;
   std::complex<double> tmp_2715;
   std::complex<double> tmp_2716;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2716 += B1(p,MFu(gI2),0)*Conj(CpbarFuVPFuPR(gO2,gI2))*
         CpbarFuVPFuPR(gO1,gI2);
   }
   tmp_2715 += tmp_2716;
   result += (-1) * tmp_2715;
   std::complex<double> tmp_2717;
   std::complex<double> tmp_2718;
   for (unsigned gI2 = 0; gI2 < 3; ++gI2) {
      tmp_2718 += B1(p,MFu(gI2),MVZ)*Conj(CpbarFuVZFuPR(gO2,gI2))*
         CpbarFuVZFuPR(gO1,gI2);
   }
   tmp_2717 += tmp_2718;
   result += (-1) * tmp_2717;

   return result * oneOver16PiSqr;

}

std::complex<double> CLASSNAME::tadpole_hh(unsigned gO1) const
{
   std::complex<double> result;

   result += A0(MVWm)*CpUhhbargWmCgWmC(gO1);
   result += A0(MVWm)*CpUhhbargWmgWm(gO1);
   result += A0(MVZ)*CpUhhbargZgZ(gO1);
   result += 4*A0(MVWm)*CpUhhconjVWmVWm(gO1);
   result += 2*A0(MVZ)*CpUhhVZVZ(gO1);
   std::complex<double> tmp_2719;
   std::complex<double> tmp_2720;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2720 += A0(MAh(gI1))*CpUhhAhAh(gO1,gI1,gI1);
   }
   tmp_2719 += tmp_2720;
   result += (-0.5) * tmp_2719;
   std::complex<double> tmp_2721;
   std::complex<double> tmp_2722;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2722 += A0(MHpm(gI1))*CpUhhconjHpmHpm(gO1,gI1,gI1);
   }
   tmp_2721 += tmp_2722;
   result += (-1) * tmp_2721;
   std::complex<double> tmp_2723;
   std::complex<double> tmp_2724;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2724 += A0(Mhh(gI1))*CpUhhhhhh(gO1,gI1,gI1);
   }
   tmp_2723 += tmp_2724;
   result += (-0.5) * tmp_2723;
   std::complex<double> tmp_2725;
   std::complex<double> tmp_2726;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      tmp_2726 += A0(MCha(gI1))*(CpUhhbarChaChaPL(gO1,gI1,gI1) +
         CpUhhbarChaChaPR(gO1,gI1,gI1))*MCha(gI1);
   }
   tmp_2725 += tmp_2726;
   result += (2) * tmp_2725;
   std::complex<double> tmp_2727;
   std::complex<double> tmp_2728;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2728 += A0(MSv(gI1))*CpUhhconjSvSv(gO1,gI1,gI1);
   }
   tmp_2727 += tmp_2728;
   result += (-1) * tmp_2727;
   std::complex<double> tmp_2729;
   std::complex<double> tmp_2730;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2730 += A0(MFd(gI1))*(CpUhhbarFdFdPL(gO1,gI1,gI1) + CpUhhbarFdFdPR
         (gO1,gI1,gI1))*MFd(gI1);
   }
   tmp_2729 += tmp_2730;
   result += (6) * tmp_2729;
   std::complex<double> tmp_2731;
   std::complex<double> tmp_2732;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2732 += A0(MFe(gI1))*(CpUhhbarFeFePL(gO1,gI1,gI1) + CpUhhbarFeFePR
         (gO1,gI1,gI1))*MFe(gI1);
   }
   tmp_2731 += tmp_2732;
   result += (2) * tmp_2731;
   std::complex<double> tmp_2733;
   std::complex<double> tmp_2734;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      tmp_2734 += A0(MFu(gI1))*(CpUhhbarFuFuPL(gO1,gI1,gI1) + CpUhhbarFuFuPR
         (gO1,gI1,gI1))*MFu(gI1);
   }
   tmp_2733 += tmp_2734;
   result += (6) * tmp_2733;
   std::complex<double> tmp_2735;
   for (unsigned gI1 = 0; gI1 < 4; ++gI1) {
      tmp_2735 += A0(MChi(gI1))*(CpUhhChiChiPL(gO1,gI1,gI1) + CpUhhChiChiPR(
         gO1,gI1,gI1))*MChi(gI1);
   }
   result += tmp_2735;
   std::complex<double> tmp_2736;
   std::complex<double> tmp_2737;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2737 += A0(MSd(gI1))*CpUhhconjSdSd(gO1,gI1,gI1);
   }
   tmp_2736 += tmp_2737;
   result += (-3) * tmp_2736;
   std::complex<double> tmp_2738;
   std::complex<double> tmp_2739;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2739 += A0(MSe(gI1))*CpUhhconjSeSe(gO1,gI1,gI1);
   }
   tmp_2738 += tmp_2739;
   result += (-1) * tmp_2738;
   std::complex<double> tmp_2740;
   std::complex<double> tmp_2741;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      tmp_2741 += A0(MSu(gI1))*CpUhhconjSuSu(gO1,gI1,gI1);
   }
   tmp_2740 += tmp_2741;
   result += (-3) * tmp_2740;

   return result * oneOver16PiSqr;

}


void CLASSNAME::calculate_MFu_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = mq2(2,2);
   sf_data.mr2 = mu2(2,2);
   sf_data.yf  = Yu(2,2);
   sf_data.vd  = vd;
   sf_data.vu  = vu;
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = TYu(2,2);
   sf_data.mu  = Mu;
   sf_data.T3  = sfermions::Isospin[sfermions::up];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::up];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::up];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MFd_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = mq2(2,2);
   sf_data.mr2 = md2(2,2);
   sf_data.yf  = Yd(2,2);
   sf_data.vd  = vd;
   sf_data.vu  = vu;
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = TYd(2,2);
   sf_data.mu  = Mu;
   sf_data.T3  = sfermions::Isospin[sfermions::down];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::down];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::down];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MFv_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = ml2(2,2);
   sf_data.mr2 = 0.;
   sf_data.yf  = 0.;
   sf_data.vd  = vd;
   sf_data.vu  = vu;
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = 0.;
   sf_data.mu  = Mu;
   sf_data.T3  = sfermions::Isospin[sfermions::neutrino];
   sf_data.Yl  = sfermions::Hypercharge_left[sfermions::neutrino];
   sf_data.Yr  = sfermions::Hypercharge_right[sfermions::neutrino];

   Eigen::Array<double,2,1> msf;

   theta = sfermions::diagonalize_sfermions_2x2(sf_data, msf);
   msf1  = msf(0);
   msf2  = msf(1);
}

void CLASSNAME::calculate_MFe_3rd_generation(double& msf1, double& msf2, double& theta) const {
   sfermions::Mass_data sf_data;
   sf_data.ml2 = ml2(2,2);
   sf_data.mr2 = me2(2,2);
   sf_data.yf  = Ye(2,2);
   sf_data.vd  = vd;
   sf_data.vu  = vu;
   sf_data.gY  = 0.7745966692414834*g1;
   sf_data.g2  = g2;
   sf_data.Tyf = TYe(2,2);
   sf_data.mu  = Mu;
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

   calculate_MFu_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MFd_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MFe_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MFv_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFu(2));
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   const double tanb2 = Sqr(tanb);
   const double sinb = tanb / Sqrt(1. + tanb2);
   const double cosb = 1. / Sqrt(1. + tanb2);
   double amu = -Mu;
   double mg = MGlu;
   double mAsq = Sqr(MAh(1));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFd(2));
   double rmtausq = Sqr(MFe(2));
   double fmasq = Abs(mAsq);

   double s11s = 0., s22s = 0., s12s = 0.;
   double s11b = 0., s12b = 0., s22b = 0.;
   double s11tau = 0., s12tau = 0., s22tau = 0.;
   double s11w = 0., s22w = 0., s12w = 0.;
   double p2s = 0., p2w = 0., p2b = 0., p2tau = 0.;
   int scheme = 0; // chooses DR-bar scheme from slavich et al

   LOCK_MUTEX();

   // two-loop Higgs corrections: alpha_s alpha_t, alpha_s alpha_b and
   // alpha_b^2, alpha_t*2, alpha_b alpha_t
   dszhiggs_(&rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
             &tanb, &vev2, &gs, &scheme, &s11s, &s22s, &s12s);
   dszhiggs_(&rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
             &cotbeta, &vev2, &gs, &scheme, &s22b, &s11b, &s12b);
   ddshiggs_(&rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
             &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &s11w,
             &s12w, &s22w);
   tausqhiggs_(&rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
               &costau, &scalesq, &amu, &tanb, &vev2, &scheme, &s11tau,
               &s22tau, &s12tau);

   // calculate dMA, which is the two loop correction to take the DRbar
   // psuedoscalar mass ( = -2m3sq/sin(2beta)) to the pole mass (as in
   // Eq. (8) of hep-ph/0305127)
   dszodd_(&rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
           &tanb, &vev2, &gs, &p2s);
   dszodd_(&rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
           &cotbeta, &vev2, &gs, &p2b);
   ddsodd_(&rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
           &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &p2w);
   tausqodd_(&rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
             &costau, &scalesq, &amu, &tanb, &vev2, &p2tau);

   UNLOCK_MUTEX();

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

   calculate_MFu_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MFd_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MFe_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MFv_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFu(2));
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   const double tanb2 = Sqr(tanb);
   const double sinb = tanb / Sqrt(1. + tanb2);
   const double cosb = 1. / Sqrt(1. + tanb2);
   const double sinb2 = Sqr(sinb);
   const double cosb2 = Sqr(cosb);
   double amu = -Mu;
   double mg = MGlu;
   double mAsq = Sqr(MAh(1));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFd(2));
   double rmtausq = Sqr(MFe(2));
   double fmasq = Abs(mAsq);

   double p2s = 0., p2w = 0., p2b = 0., p2tau = 0.;

   LOCK_MUTEX();

   dszodd_(&rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq, &amu,
           &tanb, &vev2, &gs, &p2s);
   dszodd_(&rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq, &amu,
           &cotbeta, &vev2, &gs, &p2b);
   ddsodd_(&rmtsq, &rmbsq, &fmasq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
           &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &p2w);
   tausqodd_(&rmtausq, &fmasq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
             &costau, &scalesq, &amu, &tanb, &vev2, &p2tau);

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

   calculate_MFu_3rd_generation(mst_1, mst_2, theta_t);
   calculate_MFd_3rd_generation(msb_1, msb_2, theta_b);
   calculate_MFe_3rd_generation(mstau_1, mstau_2, theta_tau);
   calculate_MFv_3rd_generation(msnu_1, msnu_2, theta_nu);

   double mst1sq = Sqr(mst_1), mst2sq = Sqr(mst_2);
   double msb1sq = Sqr(msb_1), msb2sq = Sqr(msb_2);
   double mstau1sq = Sqr(mstau_1), mstau2sq = Sqr(mstau_2);
   double msnusq = Sqr(msnu_2);
   double sxt = Sin(theta_t), cxt = Cos(theta_t);
   double sxb = Sin(theta_b), cxb = Cos(theta_b);
   double sintau = Sin(theta_tau), costau = Cos(theta_tau);

   double gs = g3;
   double rmtsq = Sqr(MFu(2));
   double scalesq = Sqr(get_scale());
   double vev2 = Sqr(vd) + Sqr(vu);
   double tanb = vu/vd;
   double amu = -Mu;
   double mg = MGlu;
   double mAsq = Sqr(MAh(1));
   double cotbeta = 1.0 / tanb;
   double rmbsq = Sqr(MFd(2));
   double rmtausq = Sqr(MFe(2));

   double s1s = 0., s2s = 0., s1t = 0., s2t = 0.;
   double s1b = 0., s2b = 0., s1tau = 0., s2tau = 0.;

   LOCK_MUTEX();

   ewsb2loop_(&rmtsq, &mg, &mst1sq, &mst2sq, &sxt, &cxt, &scalesq,
              &amu, &tanb, &vev2, &gs, &s1s, &s2s);
   ddstad_(&rmtsq, &rmbsq, &mAsq, &mst1sq, &mst2sq, &msb1sq, &msb2sq,
           &sxt, &cxt, &sxb, &cxb, &scalesq, &amu, &tanb, &vev2, &s1t,
           &s2t);
   ewsb2loop_(&rmbsq, &mg, &msb1sq, &msb2sq, &sxb, &cxb, &scalesq,
              &amu, &cotbeta, &vev2, &gs, &s2b, &s1b);
   tausqtad_(&rmtausq, &mAsq, &msnusq, &mstau1sq, &mstau2sq, &sintau,
             &costau, &scalesq, &amu, &tanb, &vev2, &s1tau, &s2tau);

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
   const double p = MGlu;
   const double self_energy_1  = Re(self_energy_Glu_1(p));
   const double self_energy_PL = Re(self_energy_Glu_PL(p));
   const double self_energy_PR = Re(self_energy_Glu_PR(p));
   PHYSICAL(MGlu) = MGlu - self_energy_1 - MGlu * (self_energy_PL +
      self_energy_PR);
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
   if (problems.is_tachyon(VZ))
      return;
   // diagonalization with medium precision
   const double p = MVZ;
   const double self_energy = Re(self_energy_VZ(p));
   const double mass_sqr = Sqr(MVZ) - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VZ);

   PHYSICAL(MVZ) = ZeroSqrt(mass_sqr);
}

void CLASSNAME::calculate_MSd_pole()
{
   if (problems.is_tachyon(Sd))
      return;
   // diagonalization with medium precision
   Eigen::Matrix<double,6,6> self_energy;
   const Eigen::Matrix<double,6,6> M_tree(get_mass_matrix_Sd());

   for (unsigned es = 0; es < 6; ++es) {
      const double p = Abs(MSd(es));
      for (unsigned i1 = 0; i1 < 6; ++i1) {
         for (unsigned i2 = i1; i2 < 6; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sd(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,6,6> M_1loop(M_tree - self_energy);
      Eigen::Array<double,6,1> eigen_values;
      Eigen::Matrix<double,6,6> mix_ZD;
      fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZD);

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sd);

      PHYSICAL(MSd(es)) = ZeroSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZD) = mix_ZD;
   }
}

void CLASSNAME::calculate_MSv_pole()
{
   if (problems.is_tachyon(Sv))
      return;
   // diagonalization with medium precision
   Eigen::Matrix<double,3,3> self_energy;
   const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Sv());

   for (unsigned es = 0; es < 3; ++es) {
      const double p = Abs(MSv(es));
      for (unsigned i1 = 0; i1 < 3; ++i1) {
         for (unsigned i2 = i1; i2 < 3; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Sv(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,3,3> M_1loop(M_tree - self_energy);
      Eigen::Array<double,3,1> eigen_values;
      Eigen::Matrix<double,3,3> mix_ZV;
      fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZV);

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Sv);

      PHYSICAL(MSv(es)) = ZeroSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZV) = mix_ZV;
   }
}

void CLASSNAME::calculate_MSu_pole()
{
   if (problems.is_tachyon(Su))
      return;
   // diagonalization with medium precision
   Eigen::Matrix<double,6,6> self_energy;
   const Eigen::Matrix<double,6,6> M_tree(get_mass_matrix_Su());

   for (unsigned es = 0; es < 6; ++es) {
      const double p = Abs(MSu(es));
      for (unsigned i1 = 0; i1 < 6; ++i1) {
         for (unsigned i2 = i1; i2 < 6; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Su(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,6,6> M_1loop(M_tree - self_energy);
      Eigen::Array<double,6,1> eigen_values;
      Eigen::Matrix<double,6,6> mix_ZU;
      fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZU);

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Su);

      PHYSICAL(MSu(es)) = ZeroSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZU) = mix_ZU;
   }
}

void CLASSNAME::calculate_MSe_pole()
{
   if (problems.is_tachyon(Se))
      return;
   // diagonalization with medium precision
   Eigen::Matrix<double,6,6> self_energy;
   const Eigen::Matrix<double,6,6> M_tree(get_mass_matrix_Se());

   for (unsigned es = 0; es < 6; ++es) {
      const double p = Abs(MSe(es));
      for (unsigned i1 = 0; i1 < 6; ++i1) {
         for (unsigned i2 = i1; i2 < 6; ++i2) {
            self_energy(i1,i2) = Re(self_energy_Se(p,i1,i2));
         }
      }

      Symmetrize(self_energy);
      const Eigen::Matrix<double,6,6> M_1loop(M_tree - self_energy);
      Eigen::Array<double,6,1> eigen_values;
      Eigen::Matrix<double,6,6> mix_ZE;
      fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZE);

      if (eigen_values(es) < 0.)
         problems.flag_tachyon(Se);

      PHYSICAL(MSe(es)) = ZeroSqrt(eigen_values(es));
      if (es == 0)
         PHYSICAL(ZE) = mix_ZE;
   }
}

void CLASSNAME::calculate_Mhh_pole()
{
   if (problems.is_tachyon(hh))
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

         if (pole_mass_loop_order > 1) {
            self_energy(0, 0) += two_loop[0];
            self_energy(0, 1) += two_loop[1];
            self_energy(1, 1) += two_loop[2];
         }

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZH;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZH);

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(hh);

         PHYSICAL(Mhh(es)) = ZeroSqrt(eigen_values(es));
         if (es == 0)
            PHYSICAL(ZH) = mix_ZH;
      }

      new_Mhh = PHYSICAL(Mhh);
      diff = MaxRelDiff(new_Mhh, old_Mhh);
      old_Mhh = new_Mhh;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);
}

void CLASSNAME::calculate_MAh_pole()
{
   if (problems.is_tachyon(Ah))
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
         const double p = Abs(old_MAh(es));
         for (unsigned i1 = 0; i1 < 2; ++i1) {
            for (unsigned i2 = i1; i2 < 2; ++i2) {
               self_energy(i1,i2) = Re(self_energy_Ah(p,i1,i2
                  ));
            }
         }

         if (pole_mass_loop_order > 1) {
            self_energy(0, 0) += two_loop[0];
            self_energy(0, 1) += two_loop[1];
            self_energy(1, 1) += two_loop[2];
         }

         Symmetrize(self_energy);
         const Eigen::Matrix<double,2,2> M_1loop(M_tree -
            self_energy);
         Eigen::Array<double,2,1> eigen_values;
         Eigen::Matrix<double,2,2> mix_ZA;
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZA);

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(Ah);

         PHYSICAL(MAh(es)) = ZeroSqrt(eigen_values(es));
         if (es == 0)
            PHYSICAL(ZA) = mix_ZA;
      }

      new_MAh = PHYSICAL(MAh);
      diff = MaxRelDiff(new_MAh, old_MAh);
      old_MAh = new_MAh;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);
}

void CLASSNAME::calculate_MHpm_pole()
{
   if (problems.is_tachyon(Hpm))
      return;
   // diagonalization with high precision
   unsigned iteration = 0;
   double diff = 0.0;
   decltype(MHpm) old_MHpm(MHpm), new_MHpm(MHpm);

   do {
      Eigen::Matrix<double,2,2> self_energy;
      const Eigen::Matrix<double,2,2> M_tree(get_mass_matrix_Hpm());

      for (unsigned es = 0; es < 2; ++es) {
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
         fs_diagonalize_hermitian(M_1loop, eigen_values, mix_ZP);

         if (eigen_values(es) < 0.)
            problems.flag_tachyon(Hpm);

         PHYSICAL(MHpm(es)) = ZeroSqrt(eigen_values(es));
         if (es == 0)
            PHYSICAL(ZP) = mix_ZP;
      }

      new_MHpm = PHYSICAL(MHpm);
      diff = MaxRelDiff(new_MHpm, old_MHpm);
      old_MHpm = new_MHpm;
      iteration++;
   } while (diff > precision
            && iteration < number_of_mass_iterations);
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
      fs_diagonalize_symmetric(M_1loop, eigen_values, mix_ZN);
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
      fs_svd(M_1loop, eigen_values, mix_UM, mix_UP);
      if (es == 0) {
         PHYSICAL(UM) = mix_UM;
         PHYSICAL(UP) = mix_UP;
      }
      PHYSICAL(MCha(es)) = Abs(eigen_values(es));
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
      decltype(ZEL) mix_ZEL;
      decltype(ZER) mix_ZER;
      fs_svd(M_1loop, eigen_values, mix_ZEL, mix_ZER);
      if (es == 0) {
         PHYSICAL(ZEL) = mix_ZEL;
         PHYSICAL(ZER) = mix_ZER;
      }
      PHYSICAL(MFe(es)) = Abs(eigen_values(es));
   }
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
      decltype(ZDL) mix_ZDL;
      decltype(ZDR) mix_ZDR;
      fs_svd(M_1loop, eigen_values, mix_ZDL, mix_ZDR);
      if (es == 0) {
         PHYSICAL(ZDL) = mix_ZDL;
         PHYSICAL(ZDR) = mix_ZDR;
      }
      PHYSICAL(MFd(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MFu_pole()
{
   // diagonalization with medium precision
   Eigen::Matrix<double,3,3> self_energy_1;
   Eigen::Matrix<double,3,3> self_energy_PL;
   Eigen::Matrix<double,3,3> self_energy_PR;
   const Eigen::Matrix<double,3,3> M_tree(get_mass_matrix_Fu());
   for (unsigned es = 0; es < 3; ++es) {
      const double p = Abs(MFu(es));
      for (unsigned i1 = 0; i1 < 3; ++i1) {
         for (unsigned i2 = 0; i2 < 3; ++i2) {
            self_energy_1(i1,i2)  = Re(self_energy_Fu_1(p,i1,i2)
               );
            self_energy_PL(i1,i2) = Re(self_energy_Fu_PL(p,i1,i2
               ));
            self_energy_PR(i1,i2) = Re(self_energy_Fu_PR(p,i1,i2
               ));
         }
      }
      const Eigen::Matrix<double,3,3> delta_M(- self_energy_PR *
         M_tree - M_tree * self_energy_PL - self_energy_1);
      const Eigen::Matrix<double,3,3> M_1loop(M_tree + delta_M);
      Eigen::Array<double,3,1> eigen_values;
      decltype(ZUL) mix_ZUL;
      decltype(ZUR) mix_ZUR;
      fs_svd(M_1loop, eigen_values, mix_ZUL, mix_ZUR);
      if (es == 0) {
         PHYSICAL(ZUL) = mix_ZUL;
         PHYSICAL(ZUR) = mix_ZUR;
      }
      PHYSICAL(MFu(es)) = Abs(eigen_values(es));
   }
}

void CLASSNAME::calculate_MVWm_pole()
{
   if (problems.is_tachyon(VWm))
      return;
   // diagonalization with medium precision
   const double p = MVWm;
   const double self_energy = Re(self_energy_VWm(p));
   const double mass_sqr = Sqr(MVWm) - self_energy;

   if (mass_sqr < 0.)
      problems.flag_tachyon(VWm);

   PHYSICAL(MVWm) = ZeroSqrt(mass_sqr);
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
   const double qcd_1l = 0.025330295910584444*(-1.6666666666666667 + 1.*
      Log(Sqr(MFu(2))/Sqr(currentScale)))*Sqr(g3);
   const double qcd_2l = -0.003408916029785599*Power(g3,4) +
      0.0011495761378943394*Power(g3,4)*Log(Sqr(MFu(2))/Sqr(currentScale)) -
      0.00024060895909416413*Power(g3,4)*Sqr(Log(Power(MFu(2),2)/Sqr(
      currentScale)));

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
   const double m_sm_drbar = m_sm_msbar * (1 - 0.00020496318737651018*
      Power(g3,4) + 0.0006860288475783287*Sqr(g1) + 0.0023747152416172916*Sqr(
      g2) - 0.008443431970194815*Sqr(g3));

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
   const double m_sm_drbar = m_sm_msbar * (1 - 0.0023747152416172916*(0.6
      *Sqr(g1) - Sqr(g2)));

   const double m_susy_drbar = m_sm_drbar + self_energy_1 + m_sm_drbar *
      (self_energy_PL + self_energy_PR);

   return m_susy_drbar;
}

double CLASSNAME::calculate_MFv_DRbar(double, int) const
{
   return 0.0;
}

double CLASSNAME::calculate_MVP_DRbar(double) const
{
   return 0.0;
}

double CLASSNAME::calculate_MVZ_DRbar(double m_pole) const
{
   const double p = m_pole;
   const double self_energy = Re(self_energy_VZ(p));
   const double mass_sqr = Sqr(m_pole) + self_energy;

   return ZeroSqrt(mass_sqr);
}

double CLASSNAME::calculate_MVWm_DRbar(double m_pole) const
{
   const double p = m_pole;
   const double self_energy = Re(self_energy_VWm(p));
   const double mass_sqr = Sqr(m_pole) + self_energy;

   return ZeroSqrt(mass_sqr);
}


double CLASSNAME::ThetaW() const
{
   return ArcTan((0.7745966692414834*g1)/g2);
}

double CLASSNAME::v() const
{
   return 2*Sqrt(Sqr(MVWm)/Sqr(g2));
}


std::ostream& operator<<(std::ostream& ostr, const MSSM<Two_scale>& model)
{
   model.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
