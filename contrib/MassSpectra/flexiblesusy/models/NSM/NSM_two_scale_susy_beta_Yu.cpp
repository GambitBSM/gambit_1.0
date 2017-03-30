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

#include "NSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Yu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> NSM_susy_parameters::calc_beta_Yu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (oneOver16PiSqr*(Yu*(3*traceYdAdjYd + traceYeAdjYe + 3*
      traceYuAdjYu - 1.4166666666666667*Sqr(g1) - 2.25*Sqr(g2) - 8*Sqr(g3)) -
      1.5*(Yu*Yd.adjoint()*Yd - Yu*Yu.adjoint()*Yu))).real();


   return beta_Yu;
}

/**
 * Calculates the two-loop beta function of Yu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> NSM_susy_parameters::calc_beta_Yu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (twoLoop*(Yu*(5.49537037037037*Power(g1,4) - 5.75*Power(g2,4
      ) - 108*Power(g3,4) - 6.75*traceYdAdjYdYdAdjYd + 1.5*traceYdAdjYuYuAdjYd
      - 2.25*traceYeAdjYeYeAdjYe - 6.75*traceYuAdjYuYuAdjYu +
      3.5416666666666665*traceYuAdjYu*Sqr(g1) + 5.625*traceYuAdjYu*Sqr(g2) -
      0.75*Sqr(g1)*Sqr(g2) + 0.625*traceYeAdjYe*(5*Sqr(g1) + 3*Sqr(g2)) + 20*
      traceYuAdjYu*Sqr(g3) + 2.111111111111111*Sqr(g1)*Sqr(g3) + 9*Sqr(g2)*Sqr(
      g3) + 0.20833333333333334*traceYdAdjYd*(5*Sqr(g1) + 27*Sqr(g2) + 96*Sqr(
      g3)) + 6*Sqr(Lambda1) + Sqr(Lambda3)) + 0.020833333333333332*((180*
      traceYdAdjYd + 60*traceYeAdjYe + 180*traceYuAdjYu - 43*Sqr(g1) + 27*Sqr(
      g2) - 768*Sqr(g3))*(Yu*Yd.adjoint()*Yd) + (-324*traceYdAdjYd - 108*
      traceYeAdjYe - 324*traceYuAdjYu - 576*Lambda1 + 223*Sqr(g1) + 405*Sqr(g2)
      + 768*Sqr(g3))*(Yu*Yu.adjoint()*Yu) + 12*(11*(Yu*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd) - Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu - 4*(Yu*Yu.adjoint(
      )*Yu*Yd.adjoint()*Yd) + 6*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu))))).real()
      ;


   return beta_Yu;
}

/**
 * Calculates the three-loop beta function of Yu.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> NSM_susy_parameters::calc_beta_Yu_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = ZEROMATRIX(3,3);


   return beta_Yu;
}

} // namespace flexiblesusy
