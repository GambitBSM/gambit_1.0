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

// File generated at Mon 1 Jun 2015 12:42:27

#include "NSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mS2.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_mS2_one_loop(const Soft_traces& soft_traces) const
{


   double beta_mS2;

   beta_mS2 = Re(oneOver16PiSqr*(4*mH2*Lambda3 - 2*Sqr(Lambda4)));


   return beta_mS2;
}

/**
 * Calculates the two-loop beta function of mS2.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_mS2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mS2;

   beta_mS2 = Re(4*twoLoop*(-3*traceYdAdjYd - traceYeAdjYe - 3*
      traceYuAdjYu + Sqr(g1) + 3*Sqr(g2))*(2*mH2*Lambda3 - Sqr(Lambda4)));


   return beta_mS2;
}

} // namespace flexiblesusy
