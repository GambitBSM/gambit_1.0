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

// File generated at Sat 27 Aug 2016 12:48:59

#include "MSSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of g2.
 *
 * @return one-loop beta function
 */
double MSSM_susy_parameters::calc_beta_g2_one_loop(const Susy_traces& susy_traces) const
{


   double beta_g2;

   beta_g2 = Re(Power(g2,3)*oneOver16PiSqr);


   return beta_g2;
}

/**
 * Calculates the two-loop beta function of g2.
 *
 * @return two-loop beta function
 */
double MSSM_susy_parameters::calc_beta_g2_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_g2;

   beta_g2 = Re(0.2*Power(g2,3)*twoLoop*(-30*traceYdAdjYd - 10*
      traceYeAdjYe - 30*traceYuAdjYu + 9*Sqr(g1) + 125*Sqr(g2) + 120*Sqr(g3)));


   return beta_g2;
}

/**
 * Calculates the three-loop beta function of g2.
 *
 * @return three-loop beta function
 */
double MSSM_susy_parameters::calc_beta_g2_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;


   double beta_g2;

   beta_g2 = Re(0.04*Power(g2,3)*threeLoop*(-457*Power(g1,4) + 875*Power(
      g2,4) + 1100*Power(g3,4) + 600*traceAdjYdYdAdjYdYd + 200*
      traceAdjYeYeAdjYeYe + 300*traceAdjYuYuAdjYdYd + 600*traceAdjYuYuAdjYuYu -
      145*traceAdjYuYu*Sqr(g1) - 825*traceAdjYuYu*Sqr(g2) + 45*Sqr(g1)*Sqr(g2)
      - 5*traceAdjYeYe*(21*Sqr(g1) + 55*Sqr(g2)) - 800*traceAdjYuYu*Sqr(g3) -
      40*Sqr(g1)*Sqr(g3) + 600*Sqr(g2)*Sqr(g3) - 5*traceAdjYdYd*(-60*
      traceAdjYeYe + 11*Sqr(g1) + 165*Sqr(g2) + 160*Sqr(g3)) + 450*Sqr(
      traceAdjYdYd) + 50*Sqr(traceAdjYeYe) + 450*Sqr(traceAdjYuYu)));


   return beta_g2;
}

} // namespace flexiblesusy
