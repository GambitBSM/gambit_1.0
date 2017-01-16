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

// File generated at Sat 27 Aug 2016 12:43:55

#include "SingletDMZ3_two_scale_high_scale_constraint.hpp"
#include "SingletDMZ3_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"
#include "threshold_loop_functions.hpp"
#include "numerics2.hpp"

#include <cassert>
#include <cmath>
#include <cerrno>
#include <cstring>

namespace flexiblesusy {

#define DERIVEDPARAMETER(p) model->p()
#define INPUTPARAMETER(p) model->get_input().p
#define MODELPARAMETER(p) model->get_##p()
#define PHASE(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define LowEnergyConstant(p) Electroweak_constants::p
#define MZPole Electroweak_constants::MZ
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define SCALE model->get_scale()
#define THRESHOLD static_cast<int>(model->get_thresholds())
#define MODEL model
#define MODELCLASSNAME SingletDMZ3<Two_scale>

SingletDMZ3_high_scale_constraint<Two_scale>::SingletDMZ3_high_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
{
}

SingletDMZ3_high_scale_constraint<Two_scale>::SingletDMZ3_high_scale_constraint(
   SingletDMZ3<Two_scale>* model_)
   : Constraint<Two_scale>()
   , model(model_)
{
   initialize();
}

SingletDMZ3_high_scale_constraint<Two_scale>::~SingletDMZ3_high_scale_constraint()
{
}

void SingletDMZ3_high_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: SingletDMZ3_high_scale_constraint::apply():"
          " model pointer must not be zero");



   update_scale();



   check_non_perturbative();


}

bool SingletDMZ3_high_scale_constraint<Two_scale>::check_non_perturbative()
{
   bool problem = false;

   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto LamS = MODELPARAMETER(LamS);
   const auto LamSH = MODELPARAMETER(LamSH);
   const auto LamH = MODELPARAMETER(LamH);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Ye = MODELPARAMETER(Ye);

   if (MaxAbsValue(g1) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g1", MaxAbsValue(g1), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g1");
   }
   if (MaxAbsValue(g2) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g2", MaxAbsValue(g2), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g2");
   }
   if (MaxAbsValue(g3) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g3", MaxAbsValue(g3), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g3");
   }
   if (MaxAbsValue(LamS) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("LamS", MaxAbsValue(LamS), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("LamS");
   }
   if (MaxAbsValue(LamSH) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("LamSH", MaxAbsValue(LamSH), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("LamSH");
   }
   if (MaxAbsValue(LamH) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("LamH", MaxAbsValue(LamH), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("LamH");
   }
   if (MaxAbsValue(Yu) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Yu", MaxAbsValue(Yu), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Yu");
   }
   if (MaxAbsValue(Yd) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Yd", MaxAbsValue(Yd), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Yd");
   }
   if (MaxAbsValue(Ye) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Ye", MaxAbsValue(Ye), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Ye");
   }


   return problem;
}

double SingletDMZ3_high_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double SingletDMZ3_high_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

const SingletDMZ3_input_parameters& SingletDMZ3_high_scale_constraint<Two_scale>::get_input_parameters() const
{
   return model->get_input();
}

SingletDMZ3<Two_scale>* SingletDMZ3_high_scale_constraint<Two_scale>::get_model() const
{
   return model;
}

void SingletDMZ3_high_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<SingletDMZ3<Two_scale>*>(model_);
}

void SingletDMZ3_high_scale_constraint<Two_scale>::set_scale(double s)
{
   scale = s;
}

void SingletDMZ3_high_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
}

void SingletDMZ3_high_scale_constraint<Two_scale>::initialize()
{
   assert(model && "SingletDMZ3_high_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   const auto Qin = INPUTPARAMETER(Qin);

   initial_scale_guess = Qin;

   scale = initial_scale_guess;
}

void SingletDMZ3_high_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "SingletDMZ3_high_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   const double currentScale = model->get_scale();
   const SingletDMZ3_soft_parameters beta_functions(model->calc_beta());

   const auto Qin = INPUTPARAMETER(Qin);

   scale = Qin;


   if (errno == ERANGE) {
#ifdef ENABLE_VERBOSE
      ERROR("SingletDMZ3_high_scale_constraint<Two_scale>: Overflow error"
            " during calculation of high scale: " << strerror(errno) << '\n'
            << "   current scale = " << currentScale << '\n'
            << "   new scale = " << scale << '\n'
            << "   resetting scale to " << get_initial_scale_guess());
#endif
      scale = get_initial_scale_guess();
      errno = 0;
   }


}

} // namespace flexiblesusy
