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

// File generated at Sat 27 Aug 2016 12:42:54

#include "SingletDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of LamH.
 *
 * @return one-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamH_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_LamH;

   beta_LamH = Re(oneOver16PiSqr*(0.27*Power(g1,4) + 2.25*Power(g2,4) +
      12*LamH*traceYdAdjYd - 12*traceYdAdjYdYdAdjYd + 4*LamH*traceYeAdjYe - 4*
      traceYeAdjYeYeAdjYe + 12*LamH*traceYuAdjYu - 12*traceYuAdjYuYuAdjYu - 1.8
      *LamH*Sqr(g1) - 9*LamH*Sqr(g2) + 0.9*Sqr(g1)*Sqr(g2) + 12*Sqr(LamH) + Sqr
      (LamSH)));


   return beta_LamH;
}

/**
 * Calculates the two-loop beta function of LamH.
 *
 * @return two-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamH_two_loop(const Susy_traces& susy_traces) const
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


   double beta_LamH;

   beta_LamH = Re(twoLoop*(-3.411*Power(g1,6) + 38.125*Power(g2,6) +
      9.435*Power(g1,4)*LamH - 9.125*Power(g2,4)*LamH - 78*Power(LamH,3) - 4*
      Power(LamSH,3) - 3*LamH*traceYdAdjYdYdAdjYd + 60*
      traceYdAdjYdYdAdjYdYdAdjYd - 24*traceYdAdjYdYdAdjYuYuAdjYd - 42*LamH*
      traceYdAdjYuYuAdjYd + 12*traceYdAdjYuYuAdjYdYdAdjYd - 12*
      traceYdAdjYuYuAdjYuYuAdjYd - LamH*traceYeAdjYeYeAdjYe + 20*
      traceYeAdjYeYeAdjYeYeAdjYe - 3.42*Power(g1,4)*traceYuAdjYu - 4.5*Power(g2
      ,4)*traceYuAdjYu - 3*LamH*traceYuAdjYuYuAdjYu + 60*
      traceYuAdjYuYuAdjYuYuAdjYu - 7.225*Power(g2,4)*Sqr(g1) + 1.6*
      traceYdAdjYdYdAdjYd*Sqr(g1) - 4.8*traceYeAdjYeYeAdjYe*Sqr(g1) + 8.5*LamH*
      traceYuAdjYu*Sqr(g1) - 3.2*traceYuAdjYuYuAdjYu*Sqr(g1) - 8.385*Power(g1,4
      )*Sqr(g2) + 22.5*LamH*traceYuAdjYu*Sqr(g2) + 5.85*LamH*Sqr(g1)*Sqr(g2) +
      12.6*traceYuAdjYu*Sqr(g1)*Sqr(g2) - 64*traceYdAdjYdYdAdjYd*Sqr(g3) + 80*
      LamH*traceYuAdjYu*Sqr(g3) - 64*traceYuAdjYuYuAdjYu*Sqr(g3) + 0.1*
      traceYdAdjYd*(9*Power(g1,4) - 45*Power(g2,4) + 225*LamH*Sqr(g2) + Sqr(g1)
      *(25*LamH + 54*Sqr(g2)) + 80*LamH*(-9*LamH + 10*Sqr(g3))) - 72*
      traceYuAdjYu*Sqr(LamH) + 10.8*Sqr(g1)*Sqr(LamH) + 54*Sqr(g2)*Sqr(LamH) -
      0.3*traceYeAdjYe*(15*Power(g1,4) - Sqr(g1)*(25*LamH + 22*Sqr(g2)) + 5*(
      Power(g2,4) - 5*LamH*Sqr(g2) + 16*Sqr(LamH))) - 5*LamH*Sqr(LamSH)));


   return beta_LamH;
}

/**
 * Calculates the three-loop beta function of LamH.
 *
 * @return three-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamH_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_LamH;

   beta_LamH = 0;


   return beta_LamH;
}

} // namespace flexiblesusy
