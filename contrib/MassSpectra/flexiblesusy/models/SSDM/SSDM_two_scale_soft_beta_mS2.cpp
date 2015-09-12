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

// File generated at Fri 28 Aug 2015 18:02:20

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mS2.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mS2_one_loop(const Soft_traces& soft_traces) const
{


   double beta_mS2;

   beta_mS2 = Re(8*(3*Lambda3*mS2 + Lambda2*mu2)*oneOver16PiSqr);


   return beta_mS2;
}

/**
 * Calculates the two-loop beta function of mS2.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mS2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mS2;

   beta_mS2 = Re(-1.6*twoLoop*(30*Lambda2*mu2*traceYdAdjYd + 10*Lambda2*
      mu2*traceYeAdjYe + 30*Lambda2*mu2*traceYuAdjYu - 6*Lambda2*mu2*Sqr(g1) -
      30*Lambda2*mu2*Sqr(g2) + 5*mS2*Sqr(Lambda2) + 20*mu2*Sqr(Lambda2) + 300*
      mS2*Sqr(Lambda3)));


   return beta_mS2;
}

} // namespace flexiblesusy
