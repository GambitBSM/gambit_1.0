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

#ifndef SPECTRUM_GENERATOR_SETTINGS_H
#define SPECTRUM_GENERATOR_SETTINGS_H

namespace flexiblesusy {

/**
 * @class Spectrum_generator_settings
 * @brief stores the spectrum generator settings
 *
 * This class stores all spectrum generator settings which can be
 * changed via the SLHA input file.
 */
class Spectrum_generator_settings {
public:
   /// Spectrum generator settings
   enum Settings : unsigned {
      precision,             ///< overall precision goal
      max_iterations,        ///< maximum number of iterations (0 = automatic)
      algorithm,             ///< RG solver algorithm (0 = two-scale)
      calculate_sm_masses,   ///< calculate Standard Model pole masses
      pole_mass_loop_order,  ///< loop-order for calculation of pole masses
      ewsb_loop_order,       ///< loop-order for solving the EWSB eqs.
      beta_loop_order,       ///< loop-order of beta-functions
      threshold_corrections, ///< disable/enable threshold corrections
      NUMBER_OF_OPTIONS      ///< number of possible options
   };

   Spectrum_generator_settings();
   ~Spectrum_generator_settings() {}

   double get(Settings) const;
   void set(Settings, double);
   void reset();

private:
   double values[NUMBER_OF_OPTIONS];
};

} // namespace flexiblesusy

#endif
