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

// File generated at Fri 28 Aug 2015 18:02:17

#include "SSDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Lambda3.
 *
 * @return one-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda3_one_loop(const Susy_traces& susy_traces) const
{


   double beta_Lambda3;

   beta_Lambda3 = Re(2*oneOver16PiSqr*(Sqr(Lambda2) + 36*Sqr(Lambda3)));


   return beta_Lambda3;
}

/**
 * Calculates the two-loop beta function of Lambda3.
 *
 * @return two-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda3_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda3;

   beta_Lambda3 = Re(twoLoop*(-16*Power(Lambda2,3) - 3264*Power(Lambda3,3
      ) - 80*Lambda3*Sqr(Lambda2) - 12*traceYdAdjYd*Sqr(Lambda2) - 4*
      traceYeAdjYe*Sqr(Lambda2) - 12*traceYuAdjYu*Sqr(Lambda2) + 2.4*Sqr(g1)*
      Sqr(Lambda2) + 12*Sqr(g2)*Sqr(Lambda2)));


   return beta_Lambda3;
}

} // namespace flexiblesusy
