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

// File generated at Tue 11 Aug 2015 11:25:10

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of vH.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_vH_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_vH;

   beta_vH = Re(oneOver16PiSqr*(-3*traceYdAdjYd*vH - traceYeAdjYe*vH +
      0.6*vH*(-5*traceYuAdjYu + Sqr(g1) + 5*Sqr(g2))));


   return beta_vH;
}

/**
 * Calculates the two-loop beta function of vH.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_vH_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_vH;

   beta_vH = Re(-0.00125*twoLoop*vH*(1257*Power(g1,4) - 8575*Power(g2,4)
      - 5400*traceYdAdjYdYdAdjYd + 1200*traceYdAdjYuYuAdjYd - 1800*
      traceYeAdjYeYeAdjYe - 5400*traceYuAdjYuYuAdjYu + 2060*traceYuAdjYu*Sqr(g1
      ) + 6300*traceYuAdjYu*Sqr(g2) - 90*Sqr(g1)*Sqr(g2) + 60*traceYeAdjYe*(27*
      Sqr(g1) + 35*Sqr(g2)) + 16000*traceYuAdjYu*Sqr(g3) + 20*traceYdAdjYd*(43*
      Sqr(g1) + 315*Sqr(g2) + 800*Sqr(g3)) + 4800*Sqr(Lambda1)));


   return beta_vH;
}

} // namespace flexiblesusy
