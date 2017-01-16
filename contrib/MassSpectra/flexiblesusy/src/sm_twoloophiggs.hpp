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

#ifndef SM_TWOLOOPHIGGS_H
#define SM_TWOLOOPHIGGS_H

namespace flexiblesusy {

/// SM Higgs self-energy 1-loop
double self_energy_higgs_1loop_sm(
   double p, double scale, double mt, double yt,
   double v, double gY, double g2, double lambda);

/// SM Higgs self-energy 1-loop, only O(alpha_t)
double self_energy_higgs_1loop_at_sm(
   double p, double scale, double mt, double yt);

/// SM Higgs self-energy 2-loop, only O(alpha_t alpha_s)
double self_energy_higgs_2loop_at_as_sm(
   double scale, double mt, double yt, double g3);

/// SM Higgs self-energy 2-loop, only O(alpha_t^2)
double self_energy_higgs_2loop_at_at_sm(
   double scale, double mt, double yt);

/// SM Higgs self-energy 1-loop from SUSYHD 1.0.2
double self_energy_higgs_1loop_sm_SUSYHD(
   double vev, double Mt, double mh, double MW, double MZ, double Q);

/// SM Higgs self-energy 2-loop from SUSYHD 1.0.2
double self_energy_higgs_2loop_sm_SUSYHD(
   double vev, double Mt, double Mh, double g3);

} // namespace flexiblesusy

#endif
