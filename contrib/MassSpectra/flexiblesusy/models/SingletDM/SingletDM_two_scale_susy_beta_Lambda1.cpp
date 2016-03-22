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

// File generated at Sat 20 Feb 2016 16:21:17

#include "SingletDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Lambda1.
 *
 * @return one-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_Lambda1_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambda1;

   beta_Lambda1 = Re(oneOver16PiSqr*(0.27*Power(g1,4) + 2.25*Power(g2,4)
      + 12*Lambda1*traceYdAdjYd - 12*traceYdAdjYdYdAdjYd + 4*Lambda1*
      traceYeAdjYe - 4*traceYeAdjYeYeAdjYe + 12*Lambda1*traceYuAdjYu - 12*
      traceYuAdjYuYuAdjYu - 1.8*Lambda1*Sqr(g1) - 9*Lambda1*Sqr(g2) + 0.9*Sqr(
      g1)*Sqr(g2) + 12*Sqr(Lambda1) + Sqr(LamSH)));


   return beta_Lambda1;
}

/**
 * Calculates the two-loop beta function of Lambda1.
 *
 * @return two-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_Lambda1_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;
   const double traceYdAdjYdYdAdjYdYdAdjYd =
      TRACE_STRUCT.traceYdAdjYdYdAdjYdYdAdjYd;
   const double traceYdAdjYdYdAdjYuYuAdjYd =
      TRACE_STRUCT.traceYdAdjYdYdAdjYuYuAdjYd;
   const double traceYdAdjYuYuAdjYdYdAdjYd =
      TRACE_STRUCT.traceYdAdjYuYuAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYuYuAdjYd =
      TRACE_STRUCT.traceYdAdjYuYuAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYeYeAdjYe =
      TRACE_STRUCT.traceYeAdjYeYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYuYuAdjYu =
      TRACE_STRUCT.traceYuAdjYuYuAdjYuYuAdjYu;


   double beta_Lambda1;

   beta_Lambda1 = Re(twoLoop*(-3.411*Power(g1,6) + 38.125*Power(g2,6) +
      9.435*Power(g1,4)*Lambda1 - 9.125*Power(g2,4)*Lambda1 - 78*Power(Lambda1,
      3) - 4*Power(LamSH,3) - 3*Lambda1*traceYdAdjYdYdAdjYd + 60*
      traceYdAdjYdYdAdjYdYdAdjYd + 12*traceYdAdjYdYdAdjYuYuAdjYd - 42*Lambda1*
      traceYdAdjYuYuAdjYd - 24*traceYdAdjYuYuAdjYdYdAdjYd - 12*
      traceYdAdjYuYuAdjYuYuAdjYd - Lambda1*traceYeAdjYeYeAdjYe + 20*
      traceYeAdjYeYeAdjYeYeAdjYe - 3.42*Power(g1,4)*traceYuAdjYu - 4.5*Power(g2
      ,4)*traceYuAdjYu - 3*Lambda1*traceYuAdjYuYuAdjYu + 60*
      traceYuAdjYuYuAdjYuYuAdjYu - 7.225*Power(g2,4)*Sqr(g1) + 1.6*
      traceYdAdjYdYdAdjYd*Sqr(g1) - 4.8*traceYeAdjYeYeAdjYe*Sqr(g1) + 8.5*
      Lambda1*traceYuAdjYu*Sqr(g1) - 3.2*traceYuAdjYuYuAdjYu*Sqr(g1) - 8.385*
      Power(g1,4)*Sqr(g2) + 22.5*Lambda1*traceYuAdjYu*Sqr(g2) + 5.85*Lambda1*
      Sqr(g1)*Sqr(g2) + 12.6*traceYuAdjYu*Sqr(g1)*Sqr(g2) - 64*
      traceYdAdjYdYdAdjYd*Sqr(g3) + 80*Lambda1*traceYuAdjYu*Sqr(g3) - 64*
      traceYuAdjYuYuAdjYu*Sqr(g3) + 0.1*traceYdAdjYd*(9*Power(g1,4) - 45*Power(
      g2,4) + 225*Lambda1*Sqr(g2) + Sqr(g1)*(25*Lambda1 + 54*Sqr(g2)) + 80*
      Lambda1*(-9*Lambda1 + 10*Sqr(g3))) - 72*traceYuAdjYu*Sqr(Lambda1) + 10.8*
      Sqr(g1)*Sqr(Lambda1) + 54*Sqr(g2)*Sqr(Lambda1) - 0.3*traceYeAdjYe*(15*
      Power(g1,4) - Sqr(g1)*(25*Lambda1 + 22*Sqr(g2)) + 5*(Power(g2,4) - 5*
      Lambda1*Sqr(g2) + 16*Sqr(Lambda1))) - 5*Lambda1*Sqr(LamSH)));


   return beta_Lambda1;
}

/**
 * Calculates the three-loop beta function of Lambda1.
 *
 * @return three-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_Lambda1_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_Lambda1;

   beta_Lambda1 = 0;


   return beta_Lambda1;
}

} // namespace flexiblesusy
