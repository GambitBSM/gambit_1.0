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

// File generated at Wed 28 Oct 2015 11:34:30

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of MS2.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_MS2_one_loop(const Soft_traces& soft_traces) const
{


   double beta_MS2;

   beta_MS2 = Re((12*LamS*MS2 + 8*LamSH*mu2)*oneOver16PiSqr);


   return beta_MS2;
}

/**
 * Calculates the two-loop beta function of MS2.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_MS2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_MS2;

   beta_MS2 = Re(-1.6*twoLoop*(30*LamSH*mu2*traceYdAdjYd + 10*LamSH*mu2*
      traceYeAdjYe + 30*LamSH*mu2*traceYuAdjYu - 6*LamSH*mu2*Sqr(g1) - 30*LamSH
      *mu2*Sqr(g2) + 75*MS2*Sqr(LamS) + 5*MS2*Sqr(LamSH) + 20*mu2*Sqr(LamSH)));


   return beta_MS2;
}

/**
 * Calculates the three-loop beta function of MS2.
 *
 * @return three-loop beta function
 */
double SSDM_soft_parameters::calc_beta_MS2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_MS2;

   beta_MS2 = 0;


   return beta_MS2;
}

} // namespace flexiblesusy
