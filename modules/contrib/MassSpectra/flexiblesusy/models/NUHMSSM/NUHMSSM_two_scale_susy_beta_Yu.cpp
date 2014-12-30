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

// File generated at Thu 4 Dec 2014 21:43:15

#include "NUHMSSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Yu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> NUHMSSM_susy_parameters::calc_beta_Yu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = oneOver16PiSqr*(-0.06666666666666667*Yu*(-45*traceYuAdjYu +
      13*Sqr(g1) + 45*Sqr(g2) + 80*Sqr(g3)) + Yu*Yd.adjoint()*Yd + 3*(Yu*
      Yu.adjoint()*Yu));


   return beta_Yu;
}

/**
 * Calculates the two-loop beta function of Yu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> NUHMSSM_susy_parameters::calc_beta_Yu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = twoLoop*(Yu*(6.095555555555555*Power(g1,4) + 7.5*Power(g2,4)
      - 1.7777777777777777*Power(g3,4) - 3*traceYdAdjYuYuAdjYd - 9*
      traceYuAdjYuYuAdjYu + Sqr(g1)*Sqr(g2) + 3.022222222222222*Sqr(g1)*Sqr(g3)
      + 8*Sqr(g2)*Sqr(g3) + 0.8*traceYuAdjYu*(Sqr(g1) + 20*Sqr(g3))) + (-3*
      traceYdAdjYd - traceYeAdjYe + 0.4*Sqr(g1))*(Yu*Yd.adjoint()*Yd) - 9*
      traceYuAdjYu*(Yu*Yu.adjoint()*Yu) + 0.4*Sqr(g1)*(Yu*Yu.adjoint()*Yu) + 6*
      Sqr(g2)*(Yu*Yu.adjoint()*Yu) - 2*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 2
      *(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 4*(Yu*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu));


   return beta_Yu;
}

} // namespace flexiblesusy
