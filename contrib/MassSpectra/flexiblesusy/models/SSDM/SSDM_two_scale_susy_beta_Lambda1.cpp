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

// File generated at Fri 28 Aug 2015 18:02:18

#include "SSDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Lambda1.
 *
 * @return one-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda1_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambda1;

   beta_Lambda1 = Re(oneOver16PiSqr*(0.135*Power(g1,4) + 1.125*Power(g2,4
      ) + 12*Lambda1*traceYdAdjYd - 6*traceYdAdjYdYdAdjYd + 4*Lambda1*
      traceYeAdjYe - 2*traceYeAdjYeYeAdjYe + 12*Lambda1*traceYuAdjYu - 6*
      traceYuAdjYuYuAdjYu - 1.8*Lambda1*Sqr(g1) - 9*Lambda1*Sqr(g2) + 0.45*Sqr(
      g1)*Sqr(g2) + 24*Sqr(Lambda1) + 2*Sqr(Lambda2)));


   return beta_Lambda1;
}

/**
 * Calculates the two-loop beta function of Lambda1.
 *
 * @return two-loop beta function
 */
double SSDM_susy_parameters::calc_beta_Lambda1_two_loop(const Susy_traces& susy_traces) const
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

   beta_Lambda1 = Re(twoLoop*(-1.7055*Power(g1,6) + 19.0625*Power(g2,6) +
      9.435*Power(g1,4)*Lambda1 - 9.125*Power(g2,4)*Lambda1 - 312*Power(
      Lambda1,3) - 16*Power(Lambda2,3) - 3*Lambda1*traceYdAdjYdYdAdjYd + 30*
      traceYdAdjYdYdAdjYdYdAdjYd + 6*traceYdAdjYdYdAdjYuYuAdjYd - 42*Lambda1*
      traceYdAdjYuYuAdjYd - 12*traceYdAdjYuYuAdjYdYdAdjYd - 6*
      traceYdAdjYuYuAdjYuYuAdjYd - Lambda1*traceYeAdjYeYeAdjYe + 10*
      traceYeAdjYeYeAdjYeYeAdjYe - 1.71*Power(g1,4)*traceYuAdjYu - 2.25*Power(
      g2,4)*traceYuAdjYu - 3*Lambda1*traceYuAdjYuYuAdjYu + 30*
      traceYuAdjYuYuAdjYuYuAdjYu - 3.6125*Power(g2,4)*Sqr(g1) + 0.8*
      traceYdAdjYdYdAdjYd*Sqr(g1) - 2.4*traceYeAdjYeYeAdjYe*Sqr(g1) + 8.5*
      Lambda1*traceYuAdjYu*Sqr(g1) - 1.6*traceYuAdjYuYuAdjYu*Sqr(g1) - 4.1925*
      Power(g1,4)*Sqr(g2) + 22.5*Lambda1*traceYuAdjYu*Sqr(g2) + 5.85*Lambda1*
      Sqr(g1)*Sqr(g2) + 6.3*traceYuAdjYu*Sqr(g1)*Sqr(g2) + 0.05*traceYdAdjYd*(9
      *Power(g1,4) + Sqr(g1)*(50*Lambda1 + 54*Sqr(g2)) - 5*(9*Power(g2,4) - 90*
      Lambda1*Sqr(g2) + 64*Lambda1*(9*Lambda1 - 5*Sqr(g3)))) - 32*
      traceYdAdjYdYdAdjYd*Sqr(g3) + 80*Lambda1*traceYuAdjYu*Sqr(g3) - 32*
      traceYuAdjYuYuAdjYu*Sqr(g3) - 144*traceYuAdjYu*Sqr(Lambda1) + 21.6*Sqr(g1
      )*Sqr(Lambda1) + 108*Sqr(g2)*Sqr(Lambda1) - 0.15*traceYeAdjYe*(15*Power(
      g1,4) - 2*Sqr(g1)*(25*Lambda1 + 11*Sqr(g2)) + 5*(Power(g2,4) - 10*Lambda1
      *Sqr(g2) + 64*Sqr(Lambda1))) - 20*Lambda1*Sqr(Lambda2)));


   return beta_Lambda1;
}

} // namespace flexiblesusy
