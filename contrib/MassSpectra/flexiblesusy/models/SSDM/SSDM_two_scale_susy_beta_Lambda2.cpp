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
 * Calculates the one-loop beta function of Lambda2.
 *
 * @return one-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda2_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda2;

   beta_Lambda2 = Re(0.1*Lambda2*oneOver16PiSqr*(120*Lambda1 + 80*Lambda2
      + 240*Lambda3 + 60*traceYdAdjYd + 20*traceYeAdjYe + 60*traceYuAdjYu - 9*
      Sqr(g1) - 45*Sqr(g2)));


   return beta_Lambda2;
}

/**
 * Calculates the two-loop beta function of Lambda2.
 *
 * @return two-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda2_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambda2;

   beta_Lambda2 = Re(twoLoop*(4.1775*Power(g1,4)*Lambda2 - 9.0625*Power(
      g2,4)*Lambda2 - 42*Power(Lambda2,3) - 13.5*Lambda2*traceYdAdjYdYdAdjYd -
      21*Lambda2*traceYdAdjYuYuAdjYd - 4.5*Lambda2*traceYeAdjYeYeAdjYe - 72*
      Lambda1*Lambda2*traceYuAdjYu - 13.5*Lambda2*traceYuAdjYuYuAdjYu + 14.4*
      Lambda1*Lambda2*Sqr(g1) + 4.25*Lambda2*traceYuAdjYu*Sqr(g1) + 72*Lambda1*
      Lambda2*Sqr(g2) + 11.25*Lambda2*traceYuAdjYu*Sqr(g2) + 1.125*Lambda2*Sqr(
      g1)*Sqr(g2) + 0.25*Lambda2*traceYeAdjYe*(-32*(3*Lambda1 + Lambda2) + 15*
      Sqr(g1) + 15*Sqr(g2)) + 40*Lambda2*traceYuAdjYu*Sqr(g3) + 0.25*Lambda2*
      traceYdAdjYd*(5*Sqr(g1) + 45*Sqr(g2) + 32*(-9*Lambda1 - 3*Lambda2 + 5*Sqr
      (g3))) - 60*Lambda2*Sqr(Lambda1) - 144*Lambda1*Sqr(Lambda2) - 288*Lambda3
      *Sqr(Lambda2) - 24*traceYuAdjYu*Sqr(Lambda2) + 1.2*Sqr(g1)*Sqr(Lambda2) +
      6*Sqr(g2)*Sqr(Lambda2) - 480*Lambda2*Sqr(Lambda3)));


   return beta_Lambda2;
}

} // namespace flexiblesusy
