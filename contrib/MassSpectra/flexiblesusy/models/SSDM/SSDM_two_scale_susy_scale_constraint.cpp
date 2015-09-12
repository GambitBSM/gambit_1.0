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

// File generated at Fri 28 Aug 2015 18:02:23

#include "SSDM_two_scale_susy_scale_constraint.hpp"
#include "SSDM_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"

#include <cassert>
#include <cmath>

namespace flexiblesusy {

#define INPUTPARAMETER(p) model->get_input().p
#define MODELPARAMETER(p) model->get_##p()
#define PHASE(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define LowEnergyConstant(p) Electroweak_constants::p
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define MODEL model
#define MODELCLASSNAME SSDM<Two_scale>

SSDM_susy_scale_constraint<Two_scale>::SSDM_susy_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
{
}

SSDM_susy_scale_constraint<Two_scale>::SSDM_susy_scale_constraint(
   SSDM<Two_scale>* model_)
   : Constraint<Two_scale>()
   , model(model_)
{
   initialize();
}

SSDM_susy_scale_constraint<Two_scale>::~SSDM_susy_scale_constraint()
{
}

void SSDM_susy_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: SSDM_susy_scale_constraint::apply():"
          " model pointer must not be zero");

   model->calculate_DRbar_masses();
   update_scale();

   // apply user-defined susy scale constraints


   // the parameters, which are fixed by the EWSB eqs., will now be
   // defined at this scale (at the EWSB loop level defined in the
   // model)
   model->solve_ewsb();
}

double SSDM_susy_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double SSDM_susy_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

const SSDM_input_parameters& SSDM_susy_scale_constraint<Two_scale>::get_input_parameters() const
{
   assert(model && "Error: SSDM_susy_scale_constraint::"
          "get_input_parameters(): model pointer is zero.");

   return model->get_input();
}

SSDM<Two_scale>* SSDM_susy_scale_constraint<Two_scale>::get_model() const
{
   return model;
}

void SSDM_susy_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<SSDM<Two_scale>*>(model_);
}

void SSDM_susy_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
}

void SSDM_susy_scale_constraint<Two_scale>::initialize()
{
   assert(model && "SSDM_susy_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   const auto Qin = INPUTPARAMETER(Qin);

   initial_scale_guess = Qin;

   scale = initial_scale_guess;
}

void SSDM_susy_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "SSDM_susy_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   const auto Qin = INPUTPARAMETER(Qin);

   scale = Qin;


}

} // namespace flexiblesusy
