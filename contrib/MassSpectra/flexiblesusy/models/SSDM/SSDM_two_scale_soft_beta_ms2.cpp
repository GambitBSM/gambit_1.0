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

// File generated at Wed 25 Nov 2015 11:56:15

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of ms2.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_ms2_one_loop(const Soft_traces& soft_traces) const
{


   double beta_ms2;

   beta_ms2 = Re(4*(6*Lambda3*ms2 + Lambda2*mu2)*oneOver16PiSqr);


   return beta_ms2;
}

/**
 * Calculates the two-loop beta function of ms2.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_ms2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_ms2;

   beta_ms2 = Re(-1.6*twoLoop*(15*Lambda2*mu2*traceYdAdjYd + 5*Lambda2*
      mu2*traceYeAdjYe + 15*Lambda2*mu2*traceYuAdjYu - 3*Lambda2*mu2*Sqr(g1) -
      15*Lambda2*mu2*Sqr(g2) + 5*ms2*Sqr(Lambda2) + 10*mu2*Sqr(Lambda2) + 300*
      ms2*Sqr(Lambda3)));


   return beta_ms2;
}

/**
 * Calculates the three-loop beta function of ms2.
 *
 * @return three-loop beta function
 */
double SSDM_soft_parameters::calc_beta_ms2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_ms2;

   beta_ms2 = 0;


   return beta_ms2;
}

} // namespace flexiblesusy
