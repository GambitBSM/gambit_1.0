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

// File generated at Mon 1 Jun 2015 12:42:23

#include "NSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Yd.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> NSM_susy_parameters::calc_beta_Yd_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yd;

   beta_Yd = (oneOver16PiSqr*(Yd*(3*traceYdAdjYd + traceYeAdjYe + 3*
      traceYuAdjYu - 0.4166666666666667*Sqr(g1) - 2.25*Sqr(g2) - 8*Sqr(g3)) +
      1.5*(Yd*Yd.adjoint()*Yd - Yd*Yu.adjoint()*Yu))).real();


   return beta_Yd;
}

/**
 * Calculates the two-loop beta function of Yd.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> NSM_susy_parameters::calc_beta_Yd_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yd;

   beta_Yd = (twoLoop*(Yd*(-0.5879629629629629*Power(g1,4) - 5.75*Power(
      g2,4) - 108*Power(g3,4) - 6.75*traceYdAdjYdYdAdjYd + 1.5*
      traceYdAdjYuYuAdjYd - 2.25*traceYeAdjYeYeAdjYe - 6.75*traceYuAdjYuYuAdjYu
      + 3.5416666666666665*traceYuAdjYu*Sqr(g1) + 5.625*traceYuAdjYu*Sqr(g2) -
      2.25*Sqr(g1)*Sqr(g2) + 0.625*traceYeAdjYe*(5*Sqr(g1) + 3*Sqr(g2)) + 20*
      traceYuAdjYu*Sqr(g3) + 3.4444444444444446*Sqr(g1)*Sqr(g3) + 9*Sqr(g2)*Sqr
      (g3) + 0.20833333333333334*traceYdAdjYd*(5*Sqr(g1) + 27*Sqr(g2) + 96*Sqr(
      g3)) + 6*Sqr(Lambda1)) + 0.020833333333333332*((-324*traceYdAdjYd - 108*
      traceYeAdjYe - 324*traceYuAdjYu - 576*Lambda1 + 187*Sqr(g1) + 405*Sqr(g2)
      + 768*Sqr(g3))*(Yd*Yd.adjoint()*Yd) + (180*traceYdAdjYd + 60*
      traceYeAdjYe + 180*traceYuAdjYu - 79*Sqr(g1) + 27*Sqr(g2) - 768*Sqr(g3))*
      (Yd*Yu.adjoint()*Yu) + 12*(6*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 4*(Yd
      *Yd.adjoint()*Yd*Yu.adjoint()*Yu) - Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd +
      11*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu))))).real();


   return beta_Yd;
}

} // namespace flexiblesusy
