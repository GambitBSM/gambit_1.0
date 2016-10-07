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

// File generated at Sat 27 Aug 2016 12:40:16

#include "NSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Lambda3.
 *
 * @return one-loop beta function
 */
double NSM_susy_parameters::calc_beta_Lambda3_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda3;

   beta_Lambda3 = Re(0.5*oneOver16PiSqr*Lambda3*(12*traceYdAdjYd + 4*
      traceYeAdjYe + 12*traceYuAdjYu + 24*Lambda1 + 48*Lambda2 + 16*Lambda3 - 3
      *Sqr(g1) - 9*Sqr(g2)));


   return beta_Lambda3;
}

/**
 * Calculates the two-loop beta function of Lambda3.
 *
 * @return two-loop beta function
 */
double NSM_susy_parameters::calc_beta_Lambda3_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambda3;

   beta_Lambda3 = Re(-0.020833333333333332*twoLoop*Lambda3*(-557*Power(g1
      ,4) + 435*Power(g2,4) + 648*traceYdAdjYdYdAdjYd + 1008*
      traceYdAdjYuYuAdjYd + 216*traceYeAdjYeYeAdjYe + 648*traceYuAdjYuYuAdjYu +
      3456*traceYuAdjYu*Lambda1 + 1152*traceYuAdjYu*Lambda3 + 6912*Lambda1*
      Lambda3 + 13824*Lambda2*Lambda3 - 340*traceYuAdjYu*Sqr(g1) - 1152*Lambda1
      *Sqr(g1) - 96*Lambda3*Sqr(g1) - 540*traceYuAdjYu*Sqr(g2) - 3456*Lambda1*
      Sqr(g2) - 288*Lambda3*Sqr(g2) - 90*Sqr(g1)*Sqr(g2) - 12*traceYeAdjYe*(-32
      *(3*Lambda1 + Lambda3) + 25*Sqr(g1) + 15*Sqr(g2)) - 1920*traceYuAdjYu*Sqr
      (g3) - 4*traceYdAdjYd*(25*Sqr(g1) + 3*(45*Sqr(g2) + 32*(-9*Lambda1 - 3*
      Lambda3 + 5*Sqr(g3)))) + 2880*Sqr(Lambda1) + 23040*Sqr(Lambda2) + 2016*
      Sqr(Lambda3)));


   return beta_Lambda3;
}

/**
 * Calculates the three-loop beta function of Lambda3.
 *
 * @return three-loop beta function
 */
double NSM_susy_parameters::calc_beta_Lambda3_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_Lambda3;

   beta_Lambda3 = 0;


   return beta_Lambda3;
}

} // namespace flexiblesusy
