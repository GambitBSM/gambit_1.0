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

// File generated at Mon 1 Jun 2015 12:42:22

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

   beta_Yu = (0.0023148148148148147*twoLoop*(2*Yu*(1187*Power(g1,4) -
      1242*Power(g2,4) - 23328*Power(g3,4) - 1458*traceYdAdjYdYdAdjYd + 324*
      traceYdAdjYuYuAdjYd - 486*traceYeAdjYeYeAdjYe - 1458*traceYuAdjYuYuAdjYu
      + 765*traceYuAdjYu*Sqr(g1) + 1215*traceYuAdjYu*Sqr(g2) - 162*Sqr(g1)*Sqr(
      g2) + 135*traceYeAdjYe*(5*Sqr(g1) + 3*Sqr(g2)) + 4320*traceYuAdjYu*Sqr(g3
      ) + 456*Sqr(g1)*Sqr(g3) + 1944*Sqr(g2)*Sqr(g3) + 45*traceYdAdjYd*(5*Sqr(
      g1) + 27*Sqr(g2) + 96*Sqr(g3)) + 1296*Sqr(Lambda1)) - 9*((-180*
      traceYdAdjYd - 60*traceYeAdjYe - 180*traceYuAdjYu + 43*Sqr(g1) - 27*Sqr(
      g2) + 768*Sqr(g3))*(Yu*Yd.adjoint()*Yd) + (324*traceYdAdjYd + 108*
      traceYeAdjYe + 324*traceYuAdjYu + 576*Lambda1 - 223*Sqr(g1) - 405*Sqr(g2)
      - 768*Sqr(g3))*(Yu*Yu.adjoint()*Yu) + 12*(-11*(Yu*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd) + Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu + 4*(Yu*Yu.adjoint(
      )*Yu*Yd.adjoint()*Yd) - 6*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu))))).real()
      ;


   return beta_Yu;
}

} // namespace flexiblesusy
