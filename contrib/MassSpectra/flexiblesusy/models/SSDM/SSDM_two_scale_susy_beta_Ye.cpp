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

// File generated at Fri 28 Aug 2015 18:02:19

#include "SSDM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Ye.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> SSDM_susy_parameters::calc_beta_Ye_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (oneOver16PiSqr*(Ye*(3*traceYdAdjYd + traceYeAdjYe + 3*
      traceYuAdjYu - 2.25*Sqr(g1) - 2.25*Sqr(g2)) + 1.5*(Ye*Ye.adjoint()*Ye)))
      .real();


   return beta_Ye;
}

/**
 * Calculates the two-loop beta function of Ye.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> SSDM_susy_parameters::calc_beta_Ye_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (twoLoop*(0.005*Ye*(1371*Power(g1,4) - 1150*Power(g2,4) -
      1350*traceYdAdjYdYdAdjYd + 300*traceYdAdjYuYuAdjYd - 450*
      traceYeAdjYeYeAdjYe - 1350*traceYuAdjYuYuAdjYu + 425*traceYuAdjYu*Sqr(g1)
      + 1125*traceYuAdjYu*Sqr(g2) + 270*Sqr(g1)*Sqr(g2) + 375*traceYeAdjYe*(
      Sqr(g1) + Sqr(g2)) + 4000*traceYuAdjYu*Sqr(g3) + 125*traceYdAdjYd*(Sqr(g1
      ) + 9*Sqr(g2) + 32*Sqr(g3)) + 1200*Sqr(Lambda1) + 200*Sqr(Lambda2)) +
      0.0375*((-320*Lambda1 - 180*traceYdAdjYd - 60*traceYeAdjYe - 180*
      traceYuAdjYu + 129*Sqr(g1) + 225*Sqr(g2))*(Ye*Ye.adjoint()*Ye) + 40*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*Ye)))).real();


   return beta_Ye;
}

} // namespace flexiblesusy
