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

// File generated at Mon 1 Jun 2015 12:42:26

#include "NSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of Lambda5.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda5_one_loop(const Soft_traces& soft_traces) const
{


   double beta_Lambda5;

   beta_Lambda5 = Re(4*oneOver16PiSqr*Lambda3*Lambda4);


   return beta_Lambda5;
}

/**
 * Calculates the two-loop beta function of Lambda5.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda5_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda5;

   beta_Lambda5 = Re(8*twoLoop*Lambda3*Lambda4*(-3*traceYdAdjYd -
      traceYeAdjYe - 3*traceYuAdjYu + Sqr(g1) + 3*Sqr(g2)));


   return beta_Lambda5;
}

} // namespace flexiblesusy
