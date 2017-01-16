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

// File generated at Sat 27 Aug 2016 12:43:44

#include "SingletDMZ3_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of LamSH.
 *
 * @return one-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamSH_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_LamSH;

   beta_LamSH = Re(0.1*LamSH*oneOver16PiSqr*(60*LamH + 20*LamS + 20*LamSH
      + 60*traceYdAdjYd + 20*traceYeAdjYe + 60*traceYuAdjYu - 9*Sqr(g1) - 45*
      Sqr(g2)));


   return beta_LamSH;
}

/**
 * Calculates the two-loop beta function of LamSH.
 *
 * @return two-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamSH_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_LamSH;

   beta_LamSH = Re(0.0025*LamSH*twoLoop*(1671*Power(g1,4) - 3625*Power(g2
      ,4) - 7200*LamH*LamSH - 2400*LamS*LamSH - 5400*traceYdAdjYdYdAdjYd - 8400
      *traceYdAdjYuYuAdjYd - 1800*traceYeAdjYeYeAdjYe - 14400*LamH*traceYuAdjYu
      - 2400*LamSH*traceYuAdjYu - 5400*traceYuAdjYuYuAdjYu + 2880*LamH*Sqr(g1)
      + 120*LamSH*Sqr(g1) + 1700*traceYuAdjYu*Sqr(g1) + 14400*LamH*Sqr(g2) +
      600*LamSH*Sqr(g2) + 4500*traceYuAdjYu*Sqr(g2) + 450*Sqr(g1)*Sqr(g2) + 100
      *traceYeAdjYe*(-8*(6*LamH + LamSH) + 15*Sqr(g1) + 15*Sqr(g2)) + 16000*
      traceYuAdjYu*Sqr(g3) + 100*traceYdAdjYd*(5*Sqr(g1) + 45*Sqr(g2) + 8*(-18*
      LamH - 3*LamSH + 20*Sqr(g3))) - 6000*Sqr(LamH) - 1000*Sqr(LamS) - 1100*
      Sqr(LamSH)));


   return beta_LamSH;
}

/**
 * Calculates the three-loop beta function of LamSH.
 *
 * @return three-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamSH_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_LamSH;

   beta_LamSH = 0;


   return beta_LamSH;
}

} // namespace flexiblesusy
