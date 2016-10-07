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

// File generated at Sat 27 Aug 2016 12:48:08

#include "CMSSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Mu.
 *
 * @return one-loop beta function
 */
double CMSSM_susy_parameters::calc_beta_Mu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Mu;

   beta_Mu = Re(oneOver16PiSqr*(3*traceYdAdjYd*Mu + traceYeAdjYe*Mu - 0.6
      *Mu*(-5*traceYuAdjYu + Sqr(g1) + 5*Sqr(g2))));


   return beta_Mu;
}

/**
 * Calculates the two-loop beta function of Mu.
 *
 * @return two-loop beta function
 */
double CMSSM_susy_parameters::calc_beta_Mu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Mu;

   beta_Mu = Re(0.02*twoLoop*Mu*(207*Power(g1,4) + 375*Power(g2,4) - 450*
      traceYdAdjYdYdAdjYd - 300*traceYdAdjYuYuAdjYd - 150*traceYeAdjYeYeAdjYe -
      450*traceYuAdjYuYuAdjYu + 60*traceYeAdjYe*Sqr(g1) + 40*traceYuAdjYu*Sqr(
      g1) + 90*Sqr(g1)*Sqr(g2) - 20*traceYdAdjYd*(Sqr(g1) - 40*Sqr(g3)) + 800*
      traceYuAdjYu*Sqr(g3)));


   return beta_Mu;
}

/**
 * Calculates the three-loop beta function of Mu.
 *
 * @return three-loop beta function
 */
double CMSSM_susy_parameters::calc_beta_Mu_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYdYdAdjYdYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYd;
   const double traceAdjYdYdAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYuYuAdjYdYd;
   const double traceAdjYeYeAdjYeYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYuAdjYuYu =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYuYu;


   double beta_Mu;

   beta_Mu = Re(threeLoop*Mu*(19.556928691529336*Power(g1,6) +
      551.1479244952723*Power(g2,6) + 24.637024256872696*
      traceAdjYdYdAdjYdYdAdjYdYd + 9*traceAdjYdYdAdjYuYuAdjYdYd +
      8.212341418957566*traceAdjYeYeAdjYeYeAdjYeYe - 40.84600730744081*Power(g1
      ,4)*traceAdjYuYu - 192.34437734858165*Power(g2,4)*traceAdjYuYu -
      72.56624378388685*Power(g3,4)*traceAdjYuYu + 18*traceAdjYuYu*
      traceAdjYuYuAdjYdYd + 54*traceAdjYuYu*traceAdjYuYuAdjYuYu + 9*
      traceAdjYuYuAdjYuYuAdjYdYd + 24.637024256872696*
      traceAdjYuYuAdjYuYuAdjYuYu - 14.973321831185427*Power(g2,4)*Sqr(g1) +
      15.982214554123619*traceAdjYdYdAdjYdYd*Sqr(g1) - 3.982214554123619*
      traceAdjYeYeAdjYeYe*Sqr(g1) + 10.339746270332105*traceAdjYuYuAdjYdYd*Sqr(
      g1) + 7.072595148625461*traceAdjYuYuAdjYuYu*Sqr(g1) - 11.143993098711256*
      Power(g1,4)*Sqr(g2) + 73.91107277061809*traceAdjYdYdAdjYdYd*Sqr(g2) +
      24.637024256872696*traceAdjYeYeAdjYeYe*Sqr(g2) + 36*traceAdjYuYuAdjYdYd*
      Sqr(g2) + 73.91107277061809*traceAdjYuYuAdjYuYu*Sqr(g2) +
      9.445916979810885*traceAdjYuYu*Sqr(g1)*Sqr(g2) + traceAdjYeYe*(
      -30.902667816881458*Power(g1,4) - 64.11479244952722*Power(g2,4) + 18*
      traceAdjYdYdAdjYdYd + 6*traceAdjYeYeAdjYeYe + 6*traceAdjYuYuAdjYdYd +
      11.373321831185427*Sqr(g1)*Sqr(g2)) - 11.681162692095945*Power(g1,4)*Sqr(
      g3) - 79.64429108247236*Power(g2,4)*Sqr(g3) - 101.09619405498157*
      traceAdjYdYdAdjYdYd*Sqr(g3) - 67.39746270332105*traceAdjYuYuAdjYdYd*Sqr(
      g3) - 101.09619405498157*traceAdjYuYuAdjYuYu*Sqr(g3) + 8.67223383810579*
      traceAdjYuYu*Sqr(g1)*Sqr(g3) + 41.09619405498157*traceAdjYuYu*Sqr(g2)*Sqr
      (g3) + traceAdjYdYd*(-18.534500964199108*Power(g1,4) - 192.34437734858165
      *Power(g2,4) - 72.56624378388685*Power(g3,4) + 54*traceAdjYdYdAdjYdYd +
      18*traceAdjYeYeAdjYeYe + 18*traceAdjYuYuAdjYdYd - 11.118512128436349*Sqr(
      g1)*Sqr(g2) + 7.992741297441576*Sqr(g1)*Sqr(g3) + 41.09619405498157*Sqr(
      g2)*Sqr(g3))));


   return beta_Mu;
}

} // namespace flexiblesusy
