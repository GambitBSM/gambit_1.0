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

// File generated at Sat 27 Aug 2016 12:40:14

#include "HSSUSY_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Ye.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> HSSUSY_susy_parameters::calc_beta_Ye_one_loop(const Susy_traces& susy_traces) const
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
Eigen::Matrix<double,3,3> HSSUSY_susy_parameters::calc_beta_Ye_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = (0.0025*twoLoop*(Ye*(2742*Power(g1,4) - 2300*Power(g2,4) -
      2700*traceYdAdjYdYdAdjYd + 600*traceYdAdjYuYuAdjYd - 900*
      traceYeAdjYeYeAdjYe - 2700*traceYuAdjYuYuAdjYu + 850*traceYuAdjYu*Sqr(g1)
      + 2250*traceYuAdjYu*Sqr(g2) + 540*Sqr(g1)*Sqr(g2) + 750*traceYeAdjYe*(
      Sqr(g1) + Sqr(g2)) + 8000*traceYuAdjYu*Sqr(g3) + 250*traceYdAdjYd*(Sqr(g1
      ) + 9*Sqr(g2) + 32*Sqr(g3)) + 600*Sqr(Lambdax)) + 15*((-180*traceYdAdjYd
      - 60*traceYeAdjYe - 180*traceYuAdjYu - 160*Lambdax + 129*Sqr(g1) + 225*
      Sqr(g2))*(Ye*Ye.adjoint()*Ye) + 40*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye)))
      ).real();


   return beta_Ye;
}

/**
 * Calculates the three-loop beta function of Ye.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> HSSUSY_susy_parameters::calc_beta_Ye_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   Eigen::Matrix<double,3,3> beta_Ye;

   beta_Ye = ZEROMATRIX(3,3);


   return beta_Ye;
}

} // namespace flexiblesusy
