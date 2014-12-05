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

#include "spectrum_generator_settings.hpp"

#include <cassert>

namespace flexiblesusy {

/**
 * Default constructor
 *
 * Calls reset() to initialize all spectrum generator settings to
 * their default values.
 */
Spectrum_generator_settings::Spectrum_generator_settings()
{
   reset();
}

double Spectrum_generator_settings::get(Settings o) const
{
   assert(o < NUMBER_OF_OPTIONS && "Setting key out of range");
   return values[o];
}

void Spectrum_generator_settings::set(Settings o, double value)
{
   assert(o < NUMBER_OF_OPTIONS && "Setting key out of range");
   values[o] = value;
}

/**
 * Resets all spectrum generator settings to their defaults.
 *
 * | enum                             | possible values              | default value   |
 * |----------------------------------|------------------------------|-----------------|
 * | precision                        | any positive double          | 1.0e-4          |
 * | max_iterations                   | any positive double          | 0 (= automatic) |
 * | algorithm                        | 0 (two-scale) or 1 (lattice) | 0 (= two-scale) |
 * | calculate_sm_masses              | 0 (no) or 1 (yes)            | 0 (= no)        |
 * | pole_mass_loop_order             | 0, 1, 2                      | 2 (= 2-loop)    |
 * | ewsb_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
 * | beta_loop_order                  | 0, 1, 2                      | 2 (= 2-loop)    |
 * | threshold_corrections_loop_order | 0, 1                         | 1 (= 1-loop)    |
 * | higgs_2loop_correction_at_as     | 0, 1                         | 1 (= enabled)   |
 * | higgs_2loop_correction_ab_as     | 0, 1                         | 1 (= enabled)   |
 * | higgs_2loop_correction_at_at     | 0, 1                         | 1 (= enabled)   |
 * | higgs_2loop_correction_atau_atau | 0, 1                         | 1 (= enabled)   |
 */
void Spectrum_generator_settings::reset()
{
   values[precision]             = 1.0e-4;
   values[max_iterations]        = 0.; // 0 = automatic
   values[algorithm]             = 0.; // 0 = two-scale
   values[calculate_sm_masses]   = 0.; // 0 = false
   values[pole_mass_loop_order]  = 2.;
   values[ewsb_loop_order]       = 2.;
   values[beta_loop_order]       = 2.;
   values[threshold_corrections_loop_order] = 1.;
   values[higgs_2loop_correction_at_as]     = 1.;
   values[higgs_2loop_correction_ab_as]     = 1.;
   values[higgs_2loop_correction_at_at]     = 1.;
   values[higgs_2loop_correction_atau_atau] = 1.;
}

Higgs_2loop_corrections Spectrum_generator_settings::get_higgs_2loop_corrections() const
{
   Higgs_2loop_corrections higgs_2loop_corrections;
   higgs_2loop_corrections.at_as     = get(higgs_2loop_correction_at_as);
   higgs_2loop_corrections.ab_as     = get(higgs_2loop_correction_ab_as);
   higgs_2loop_corrections.at_at     = get(higgs_2loop_correction_at_at);
   higgs_2loop_corrections.atau_atau = get(higgs_2loop_correction_atau_atau);

   return higgs_2loop_corrections;
}

} // namespace flexiblesusy
