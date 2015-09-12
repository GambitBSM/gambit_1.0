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

// File generated at Fri 28 Aug 2015 18:02:22

#ifndef SSDM_INFO_H
#define SSDM_INFO_H

#include <iosfwd>

namespace flexiblesusy {

namespace SSDM_info {
   enum Particles : unsigned {VG, Hp, ss, Fv, Ah, hh, VP, VZ, Fd, Fu, Fe, VWp,
      NUMBER_OF_PARTICLES};

   enum Parameters : unsigned {g1, g2, g3, Lambda3, Lambda2, Lambda1, Yu00,
      Yu01, Yu02, Yu10, Yu11, Yu12, Yu20, Yu21, Yu22, Yd00, Yd01, Yd02, Yd10, Yd11
      , Yd12, Yd20, Yd21, Yd22, Ye00, Ye01, Ye02, Ye10, Ye11, Ye12, Ye20, Ye21,
      Ye22, mS2, mu2, v, NUMBER_OF_PARAMETERS};

   extern const double normalization_g1;
   extern const double normalization_g2;
   extern const double normalization_g3;

   extern const unsigned particle_multiplicities[NUMBER_OF_PARTICLES];
   extern const char* particle_names[NUMBER_OF_PARTICLES];
   extern const char* particle_latex_names[NUMBER_OF_PARTICLES];
   extern const char* parameter_names[NUMBER_OF_PARAMETERS];
   extern const char* model_name;
   extern const bool is_low_energy_model;
   extern const bool is_supersymmetric_model;

   void print(std::ostream&);
}

} // namespace flexiblesusy

#endif
