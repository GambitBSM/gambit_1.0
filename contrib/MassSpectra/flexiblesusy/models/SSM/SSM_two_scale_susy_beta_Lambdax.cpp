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

// File generated at Sat 27 Aug 2016 12:40:17

#include "SSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Lambdax.
 *
 * @return one-loop beta function
 */
double SSM_susy_parameters::calc_beta_Lambdax_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambdax;

   beta_Lambdax = Re(oneOver16PiSqr*(0.27*Power(g1,4) + 2.25*Power(g2,4)
      - 12*traceYdAdjYdYdAdjYd - 4*traceYeAdjYeYeAdjYe - 12*traceYuAdjYuYuAdjYu
      + 12*traceYdAdjYd*Lambdax + 4*traceYeAdjYe*Lambdax + 12*traceYuAdjYu*
      Lambdax - 1.8*Lambdax*Sqr(g1) - 9*Lambdax*Sqr(g2) + 0.9*Sqr(g1)*Sqr(g2) +
      Sqr(K2) + 12*Sqr(Lambdax)));


   return beta_Lambdax;
}

/**
 * Calculates the two-loop beta function of Lambdax.
 *
 * @return two-loop beta function
 */
double SSM_susy_parameters::calc_beta_Lambdax_two_loop(const Susy_traces& susy_traces) const
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


   double beta_Lambdax;

   beta_Lambdax = Re(twoLoop*(-3.411*Power(g1,6) + 38.125*Power(g2,6) - 4
      *Power(K2,3) + 60*traceYdAdjYdYdAdjYdYdAdjYd - 24*
      traceYdAdjYdYdAdjYuYuAdjYd + 12*traceYdAdjYuYuAdjYdYdAdjYd - 12*
      traceYdAdjYuYuAdjYuYuAdjYd + 20*traceYeAdjYeYeAdjYeYeAdjYe - 3.42*Power(
      g1,4)*traceYuAdjYu - 4.5*Power(g2,4)*traceYuAdjYu + 60*
      traceYuAdjYuYuAdjYuYuAdjYu + 9.435*Power(g1,4)*Lambdax - 9.125*Power(g2,4
      )*Lambdax - 3*traceYdAdjYdYdAdjYd*Lambdax - 42*traceYdAdjYuYuAdjYd*
      Lambdax - traceYeAdjYeYeAdjYe*Lambdax - 3*traceYuAdjYuYuAdjYu*Lambdax -
      78*Power(Lambdax,3) - 7.225*Power(g2,4)*Sqr(g1) + 1.6*traceYdAdjYdYdAdjYd
      *Sqr(g1) - 4.8*traceYeAdjYeYeAdjYe*Sqr(g1) - 3.2*traceYuAdjYuYuAdjYu*Sqr(
      g1) + 8.5*traceYuAdjYu*Lambdax*Sqr(g1) - 8.385*Power(g1,4)*Sqr(g2) + 22.5
      *traceYuAdjYu*Lambdax*Sqr(g2) + 12.6*traceYuAdjYu*Sqr(g1)*Sqr(g2) + 5.85*
      Lambdax*Sqr(g1)*Sqr(g2) - 64*traceYdAdjYdYdAdjYd*Sqr(g3) - 64*
      traceYuAdjYuYuAdjYu*Sqr(g3) + 80*traceYuAdjYu*Lambdax*Sqr(g3) + 0.1*
      traceYdAdjYd*(9*Power(g1,4) - 45*Power(g2,4) + 225*Lambdax*Sqr(g2) + Sqr(
      g1)*(25*Lambdax + 54*Sqr(g2)) + 80*Lambdax*(-9*Lambdax + 10*Sqr(g3))) - 5
      *Lambdax*Sqr(K2) - 72*traceYuAdjYu*Sqr(Lambdax) + 10.8*Sqr(g1)*Sqr(
      Lambdax) + 54*Sqr(g2)*Sqr(Lambdax) - 0.3*traceYeAdjYe*(15*Power(g1,4) -
      Sqr(g1)*(25*Lambdax + 22*Sqr(g2)) + 5*(Power(g2,4) - 5*Lambdax*Sqr(g2) +
      16*Sqr(Lambdax)))));


   return beta_Lambdax;
}

/**
 * Calculates the three-loop beta function of Lambdax.
 *
 * @return three-loop beta function
 */
double SSM_susy_parameters::calc_beta_Lambdax_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_Lambdax;

   beta_Lambdax = 0;


   return beta_Lambdax;
}

} // namespace flexiblesusy
