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

// File generated at Mon 1 Jun 2015 12:42:29

#include "NSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of vS.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_vS_one_loop(const Soft_traces& soft_traces) const
{


   double beta_vS;

   beta_vS = Re(-(oneOver16PiSqr*vH*(Y2S(rH(List(1))(List(gi23)),List(
      gen1)) + Y2S(rH(List(2))(List(gi23)),List(gen1)))));


   return beta_vS;
}

/**
 * Calculates the two-loop beta function of vS.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_vS_two_loop(const Soft_traces& soft_traces) const
{


   double beta_vS;

   beta_vS = Re(0.5*twoLoop*vH*(3*H2ab(rH(List(1))(List(gi23)),List(gen1)
      ) + 3*H2ab(rH(List(2))(List(gi23)),List(gen1)) + 2*Hbar2(rH(List(1))(List
      (gi23)),List(gen1)) + 2*Hbar2(rH(List(2))(List(gi23)),List(gen1)) - Lam2S
      (rH(List(1))(List(gi23)),List(gen1)) - Lam2S(rH(List(2))(List(gi23)),List
      (gen1)) - 10*Y2FS(rH(List(1))(List(gi23)),List(gen1),1) - 10*Y2FS(rH(List
      (1))(List(gi23)),List(gen1),2) - 10*Y2FS(rH(List(1))(List(gi23)),List(
      gen1),3) - 10*Y2FS(rH(List(2))(List(gi23)),List(gen1),1) - 10*Y2FS(rH(
      List(2))(List(gi23)),List(gen1),2) - 10*Y2FS(rH(List(2))(List(gi23)),List
      (gen1),3)));


   return beta_vS;
}

} // namespace flexiblesusy
