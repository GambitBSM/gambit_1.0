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

// File generated at Sat 27 Aug 2016 12:42:53

#include "SingletDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of LamSH.
 *
 * @return one-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamSH_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_LamSH;

   beta_LamSH = Re(0.1*LamSH*oneOver16PiSqr*(60*LamH + 60*LamS + 40*LamSH
      + 60*traceYdAdjYd + 20*traceYeAdjYe + 60*traceYuAdjYu - 9*Sqr(g1) - 45*
      Sqr(g2)));


   return beta_LamSH;
}

/**
 * Calculates the two-loop beta function of LamSH.
 *
 * @return two-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamSH_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_LamSH;

   beta_LamSH = Re(twoLoop*(4.1775*Power(g1,4)*LamSH - 9.0625*Power(g2,4)
      *LamSH - 10.5*Power(LamSH,3) - 13.5*LamSH*traceYdAdjYdYdAdjYd - 21*LamSH*
      traceYdAdjYuYuAdjYd - 4.5*LamSH*traceYeAdjYeYeAdjYe - 36*LamH*LamSH*
      traceYuAdjYu - 13.5*LamSH*traceYuAdjYuYuAdjYu + 7.2*LamH*LamSH*Sqr(g1) +
      4.25*LamSH*traceYuAdjYu*Sqr(g1) + 36*LamH*LamSH*Sqr(g2) + 11.25*LamSH*
      traceYuAdjYu*Sqr(g2) + 1.125*LamSH*Sqr(g1)*Sqr(g2) + 0.25*LamSH*
      traceYeAdjYe*(-16*(3*LamH + LamSH) + 15*Sqr(g1) + 15*Sqr(g2)) + 40*LamSH*
      traceYuAdjYu*Sqr(g3) + 0.25*LamSH*traceYdAdjYd*(5*Sqr(g1) + 45*Sqr(g2) +
      16*(-9*LamH - 3*LamSH + 10*Sqr(g3))) - 15*LamSH*Sqr(LamH) - 30*LamSH*Sqr(
      LamS) - 36*LamH*Sqr(LamSH) - 36*LamS*Sqr(LamSH) - 12*traceYuAdjYu*Sqr(
      LamSH) + 0.6*Sqr(g1)*Sqr(LamSH) + 3*Sqr(g2)*Sqr(LamSH)));


   return beta_LamSH;
}

/**
 * Calculates the three-loop beta function of LamSH.
 *
 * @return three-loop beta function
 */
double SingletDM_susy_parameters::calc_beta_LamSH_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_LamSH;

   beta_LamSH = 0;


   return beta_LamSH;
}

} // namespace flexiblesusy
