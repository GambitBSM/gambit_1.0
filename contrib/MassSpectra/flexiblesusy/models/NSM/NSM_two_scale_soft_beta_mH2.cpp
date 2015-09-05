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

// File generated at Mon 1 Jun 2015 12:42:28

#include "NSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mH2.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_mH2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(0.5*mH2*oneOver16PiSqr*(12*traceYdAdjYd + 4*traceYeAdjYe
      - 3*(-4*traceYuAdjYu - 8*Lambda1 + Sqr(g1) + 3*Sqr(g2))));


   return beta_mH2;
}

/**
 * Calculates the two-loop beta function of mH2.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_mH2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(0.020833333333333332*mH2*twoLoop*(557*Power(g1,4) - 435*
      Power(g2,4) - 648*traceYdAdjYdYdAdjYd - 1008*traceYdAdjYuYuAdjYd - 216*
      traceYeAdjYeYeAdjYe - 648*traceYuAdjYuYuAdjYu - 3456*traceYuAdjYu*Lambda1
      + 340*traceYuAdjYu*Sqr(g1) + 1152*Lambda1*Sqr(g1) + 540*traceYuAdjYu*Sqr
      (g2) + 3456*Lambda1*Sqr(g2) + 90*Sqr(g1)*Sqr(g2) + 12*traceYeAdjYe*(-96*
      Lambda1 + 25*Sqr(g1) + 15*Sqr(g2)) + 1920*traceYuAdjYu*Sqr(g3) + 4*
      traceYdAdjYd*(-864*Lambda1 + 25*Sqr(g1) + 135*Sqr(g2) + 480*Sqr(g3)) -
      2880*Sqr(Lambda1)));


   return beta_mH2;
}

} // namespace flexiblesusy
