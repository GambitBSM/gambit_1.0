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

// File generated at Mon 1 Jun 2015 12:55:46

#include "CMSSMNoFV_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of g3.
 *
 * @return one-loop beta function
 */
double CMSSMNoFV_susy_parameters::calc_beta_g3_one_loop(const Susy_traces& susy_traces) const
{


   double beta_g3;

   beta_g3 = Re(-3*Power(g3,3)*oneOver16PiSqr);


   return beta_g3;
}

/**
 * Calculates the two-loop beta function of g3.
 *
 * @return two-loop beta function
 */
double CMSSMNoFV_susy_parameters::calc_beta_g3_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_g3;

   beta_g3 = Re(0.2*Power(g3,3)*twoLoop*(-20*traceYdAdjYd - 20*
      traceYuAdjYu + 11*Sqr(g1) + 45*Sqr(g2) + 70*Sqr(g3)));


   return beta_g3;
}

} // namespace flexiblesusy
