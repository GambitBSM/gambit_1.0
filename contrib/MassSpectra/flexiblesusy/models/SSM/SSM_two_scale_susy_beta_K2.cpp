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

#include "SSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of K2.
 *
 * @return one-loop beta function
 */
double SSM_susy_parameters::calc_beta_K2_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_K2;

   beta_K2 = Re(0.1*K2*oneOver16PiSqr*(40*K2 + 120*LambdaS + 60*
      traceYdAdjYd + 20*traceYeAdjYe + 60*traceYuAdjYu + 60*Lambdax - 9*Sqr(g1)
      - 45*Sqr(g2)));


   return beta_K2;
}

/**
 * Calculates the two-loop beta function of K2.
 *
 * @return two-loop beta function
 */
double SSM_susy_parameters::calc_beta_K2_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_K2;

   beta_K2 = Re(twoLoop*(4.1775*Power(g1,4)*K2 - 9.0625*Power(g2,4)*K2 -
      10.5*Power(K2,3) - 13.5*K2*traceYdAdjYdYdAdjYd - 21*K2*
      traceYdAdjYuYuAdjYd - 4.5*K2*traceYeAdjYeYeAdjYe - 13.5*K2*
      traceYuAdjYuYuAdjYu - 36*K2*traceYuAdjYu*Lambdax + 4.25*K2*traceYuAdjYu*
      Sqr(g1) + 7.2*K2*Lambdax*Sqr(g1) + 11.25*K2*traceYuAdjYu*Sqr(g2) + 36*K2*
      Lambdax*Sqr(g2) + 1.125*K2*Sqr(g1)*Sqr(g2) + 0.25*K2*traceYeAdjYe*(-16*(
      K2 + 3*Lambdax) + 15*Sqr(g1) + 15*Sqr(g2)) + 40*K2*traceYuAdjYu*Sqr(g3) +
      0.25*K2*traceYdAdjYd*(5*Sqr(g1) + 45*Sqr(g2) + 16*(-3*K2 - 9*Lambdax +
      10*Sqr(g3))) - 72*LambdaS*Sqr(K2) - 12*traceYuAdjYu*Sqr(K2) - 36*Lambdax*
      Sqr(K2) + 0.6*Sqr(g1)*Sqr(K2) + 3*Sqr(g2)*Sqr(K2) - 120*K2*Sqr(LambdaS) -
      15*K2*Sqr(Lambdax)));


   return beta_K2;
}

/**
 * Calculates the three-loop beta function of K2.
 *
 * @return three-loop beta function
 */
double SSM_susy_parameters::calc_beta_K2_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_K2;

   beta_K2 = 0;


   return beta_K2;
}

} // namespace flexiblesusy
