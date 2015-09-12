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
 * Calculates the one-loop beta function of Yu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> SSDM_susy_parameters::calc_beta_Yu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (oneOver16PiSqr*(Yu*(3*traceYdAdjYd + traceYeAdjYe + 3*
      traceYuAdjYu - 0.85*Sqr(g1) - 2.25*Sqr(g2) - 8*Sqr(g3)) - 1.5*(Yu*
      Yd.adjoint()*Yd - Yu*Yu.adjoint()*Yu))).real();


   return beta_Yu;
}

/**
 * Calculates the two-loop beta function of Yu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> SSDM_susy_parameters::calc_beta_Yu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (twoLoop*(Yu*(1.9783333333333333*Power(g1,4) - 5.75*Power(g2
      ,4) - 108*Power(g3,4) - 6.75*traceYdAdjYdYdAdjYd + 1.5*
      traceYdAdjYuYuAdjYd - 2.25*traceYeAdjYeYeAdjYe - 6.75*traceYuAdjYuYuAdjYu
      + 2.125*traceYuAdjYu*Sqr(g1) + 5.625*traceYuAdjYu*Sqr(g2) - 0.45*Sqr(g1)
      *Sqr(g2) + 1.875*traceYeAdjYe*(Sqr(g1) + Sqr(g2)) + 20*traceYuAdjYu*Sqr(
      g3) + 1.2666666666666666*Sqr(g1)*Sqr(g3) + 9*Sqr(g2)*Sqr(g3) + 0.625*
      traceYdAdjYd*(Sqr(g1) + 9*Sqr(g2) + 32*Sqr(g3)) + 6*Sqr(Lambda1) + Sqr(
      Lambda2)) + 0.0125*((300*traceYdAdjYd + 100*traceYeAdjYe + 300*
      traceYuAdjYu - 43*Sqr(g1) + 45*Sqr(g2) - 1280*Sqr(g3))*(Yu*Yd.adjoint()*
      Yd) + (-960*Lambda1 - 540*traceYdAdjYd - 180*traceYeAdjYe - 540*
      traceYuAdjYu + 223*Sqr(g1) + 675*Sqr(g2) + 1280*Sqr(g3))*(Yu*Yu.adjoint()
      *Yu) + 20*(11*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*Yu - 4*(Yu*Yu.adjoint()*Yu*Yd.adjoint()*Yd) + 6*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu))))).real();


   return beta_Yu;
}

} // namespace flexiblesusy
