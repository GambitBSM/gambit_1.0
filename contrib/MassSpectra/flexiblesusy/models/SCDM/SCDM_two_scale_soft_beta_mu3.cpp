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

// File generated at Tue 29 Dec 2015 16:23:40

#include "SCDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mu3.
 *
 * @return one-loop beta function
 */
double SCDM_soft_parameters::calc_beta_mu3_one_loop(const Soft_traces& soft_traces) const
{


   double beta_mu3;

   beta_mu3 = Re(12*LamS*mu3*oneOver16PiSqr);


   return beta_mu3;
}

/**
 * Calculates the two-loop beta function of mu3.
 *
 * @return two-loop beta function
 */
double SCDM_soft_parameters::calc_beta_mu3_two_loop(const Soft_traces& soft_traces) const
{


   double beta_mu3;

   beta_mu3 = Re(-3*mu3*twoLoop*(44*Sqr(LamS) + 3*Sqr(LamSH)));


   return beta_mu3;
}

/**
 * Calculates the three-loop beta function of mu3.
 *
 * @return three-loop beta function
 */
double SCDM_soft_parameters::calc_beta_mu3_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_mu3;

   beta_mu3 = 0;


   return beta_mu3;
}

} // namespace flexiblesusy
