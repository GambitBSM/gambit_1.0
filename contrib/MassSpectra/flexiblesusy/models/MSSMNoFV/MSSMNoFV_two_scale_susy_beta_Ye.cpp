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

// File generated at Sat 27 Aug 2016 12:45:02

#include "MSSMNoFV_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Ye.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Ye_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (oneOver16PiSqr*(Ye*(3*traceYdAdjYd + traceYeAdjYe - 1.8*Sqr
      (g1) - 3*Sqr(g2)) + 3*(Ye*Ye.adjoint()*Ye))).real();


   return beta_Ye;
}

/**
 * Calculates the two-loop beta function of Ye.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Ye_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (twoLoop*(0.1*Ye*(3*(45*Power(g1,4) + 25*Power(g2,4) - 30*
      traceYdAdjYdYdAdjYd - 10*traceYdAdjYuYuAdjYd - 10*traceYeAdjYeYeAdjYe + 4
      *traceYeAdjYe*Sqr(g1) + 6*Sqr(g1)*Sqr(g2)) - 4*traceYdAdjYd*(Sqr(g1) - 40
      *Sqr(g3))) + (-9*traceYdAdjYd - 3*traceYeAdjYe + 6*Sqr(g2))*(Ye*
      Ye.adjoint()*Ye) - 4*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye))).real();


   return beta_Ye;
}

/**
 * Calculates the three-loop beta function of Ye.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Ye_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYdYdAdjYdYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYd;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (threeLoop*(99.972*Power(g1,6)*Ye + 172.5*Power(g2,6)*Ye -
      25.083333333333332*Power(g1,4)*traceAdjYdYd*Ye - 78.75*Power(g2,4)*
      traceAdjYdYd*Ye - 53.333333333333336*Power(g3,4)*traceAdjYdYd*Ye + 54*
      traceAdjYdYd*traceAdjYdYdAdjYdYd*Ye + 3*traceAdjYdYdAdjYdYdAdjYdYd*Ye -
      43.65*Power(g1,4)*traceAdjYeYe*Ye - 26.25*Power(g2,4)*traceAdjYeYe*Ye +
      18*traceAdjYdYdAdjYdYd*traceAdjYeYe*Ye + 18*traceAdjYdYd*
      traceAdjYeYeAdjYeYe*Ye + 6*traceAdjYeYe*traceAdjYeYeAdjYeYe*Ye +
      traceAdjYeYeAdjYeYeAdjYeYe*Ye - 23.4*Power(g1,4)*traceAdjYuYu*Ye - 45*
      Power(g2,4)*traceAdjYuYu*Ye + 18*traceAdjYuYu*traceAdjYuYuAdjYdYd*Ye + 9*
      traceAdjYuYuAdjYuYuAdjYdYd*Ye + 4.5*Power(g2,4)*Ye*Sqr(g1) + 3*
      traceAdjYdYdAdjYdYd*Ye*Sqr(g1) + 9*traceAdjYeYeAdjYeYe*Ye*Sqr(g1) - 2.4*
      traceAdjYuYuAdjYdYd*Ye*Sqr(g1) + 16.74*Power(g1,4)*Ye*Sqr(g2) + 9*
      traceAdjYdYdAdjYdYd*Ye*Sqr(g2) + 3*traceAdjYeYeAdjYeYe*Ye*Sqr(g2) + 18*
      traceAdjYuYuAdjYdYd*Ye*Sqr(g2) - 0.3*traceAdjYdYd*Ye*Sqr(g1)*Sqr(g2) -
      8.1*traceAdjYeYe*Ye*Sqr(g1)*Sqr(g2) + 79.2*Power(g1,4)*Ye*Sqr(g3) + 180*
      Power(g2,4)*Ye*Sqr(g3) + 72*traceAdjYdYdAdjYdYd*Ye*Sqr(g3) + 24*
      traceAdjYuYuAdjYdYd*Ye*Sqr(g3) - 18.933333333333334*traceAdjYdYd*Ye*Sqr(
      g1)*Sqr(g3) - 132*traceAdjYdYd*Ye*Sqr(g2)*Sqr(g3) - 0.004*(3*(-15*
      traceAdjYeYe*(9*Power(g1,4) - 175*Power(g2,4) + 90*Sqr(g1)*Sqr(g2)) + 2*(
      1791*Power(g1,6) - 13125*Power(g2,6) - 750*traceAdjYdYdAdjYdYdAdjYdYd -
      250*traceAdjYeYeAdjYeYeAdjYeYe + 675*Power(g2,4)*Sqr(g1) - 350*
      traceAdjYuYuAdjYdYd*Sqr(g1) + 150*traceAdjYeYeAdjYeYe*(3*Sqr(g1) - 5*Sqr(
      g2)) + 1215*Power(g1,4)*Sqr(g2) - 150*traceAdjYdYdAdjYdYd*(3*Sqr(g1) + 15
      *Sqr(g2) - 40*Sqr(g3)) + 3960*Power(g1,4)*Sqr(g3) + 9000*Power(g2,4)*Sqr(
      g3) + 2000*traceAdjYuYuAdjYdYd*Sqr(g3))) + 5*traceAdjYdYd*(77*Power(g1,4)
      + 10*Sqr(g1)*(45*Sqr(g2) - 112*Sqr(g3)) + 25*(189*Power(g2,4) + 32*Power
      (g3,4) - 288*Sqr(g2)*Sqr(g3))))*(Ye*1.2020569031595942) - 0.03*(1917*
      Power(g1,4) + 1825*Power(g2,4) - 1800*traceAdjYdYdAdjYdYd - 600*
      traceAdjYeYeAdjYeYe - 600*traceAdjYuYuAdjYdYd + 1170*Sqr(g1)*Sqr(g2) - 20
      *traceAdjYeYe*(3*Sqr(g1) + 25*Sqr(g2)) - 20*traceAdjYdYd*(-30*
      traceAdjYeYe + 49*Sqr(g1) + 75*Sqr(g2) - 160*Sqr(g3)) + 900*Sqr(
      traceAdjYdYd) + 100*Sqr(traceAdjYeYe))*(Ye*Ye.adjoint()*Ye) - 14.58*Power
      (g1,4)*(Ye*Ye.adjoint()*Ye*1.2020569031595942) - 40.5*Power(g2,4)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 3.6*traceAdjYdYd*Sqr(g1)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) + 10.8*traceAdjYeYe*Sqr(g1)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 54*traceAdjYdYd*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 18*traceAdjYeYe*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) + 48.6*Sqr(g1)*Sqr(g2)*(Ye*Ye.adjoint
      ()*Ye*1.2020569031595942) + 144*traceAdjYdYd*Sqr(g3)*(Ye*Ye.adjoint()*Ye*
      1.2020569031595942) + 12*traceAdjYdYd*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye
      ) + 4*traceAdjYeYe*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 10.8*Sqr(g1)*(
      Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 6*Sqr(g2)*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye) + 6*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye)
      + 18*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*
      1.2020569031595942))).real();


   return beta_Ye;
}

} // namespace flexiblesusy
