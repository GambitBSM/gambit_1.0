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

// File generated at Tue 24 Nov 2015 14:29:53

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
      Ye22, ms2, mu2, v, NUMBER_OF_PARAMETERS};

   enum Mixings : unsigned {ReVd00, ImVd00, ReVd01, ImVd01, ReVd02, ImVd02,
      ReVd10, ImVd10, ReVd11, ImVd11, ReVd12, ImVd12, ReVd20, ImVd20, ReVd21,
      ImVd21, ReVd22, ImVd22, ReUd00, ImUd00, ReUd01, ImUd01, ReUd02, ImUd02,
      ReUd10, ImUd10, ReUd11, ImUd11, ReUd12, ImUd12, ReUd20, ImUd20, ReUd21,
      ImUd21, ReUd22, ImUd22, ReVu00, ImVu00, ReVu01, ImVu01, ReVu02, ImVu02,
      ReVu10, ImVu10, ReVu11, ImVu11, ReVu12, ImVu12, ReVu20, ImVu20, ReVu21,
      ImVu21, ReVu22, ImVu22, ReUu00, ImUu00, ReUu01, ImUu01, ReUu02, ImUu02,
      ReUu10, ImUu10, ReUu11, ImUu11, ReUu12, ImUu12, ReUu20, ImUu20, ReUu21,
      ImUu21, ReUu22, ImUu22, ReVe00, ImVe00, ReVe01, ImVe01, ReVe02, ImVe02,
      ReVe10, ImVe10, ReVe11, ImVe11, ReVe12, ImVe12, ReVe20, ImVe20, ReVe21,
      ImVe21, ReVe22, ImVe22, ReUe00, ImUe00, ReUe01, ImUe01, ReUe02, ImUe02,
      ReUe10, ImUe10, ReUe11, ImUe11, ReUe12, ImUe12, ReUe20, ImUe20, ReUe21,
      ImUe21, ReUe22, ImUe22, NUMBER_OF_MIXINGS};

   enum Input_parameters : unsigned {HiggsIN, Lambda2Input, Lambda3Input,
      mS2Input, QEWSB, Qin, NUMBER_OF_INPUT_PARAMETERS};

   extern const double normalization_g1;
   extern const double normalization_g2;
   extern const double normalization_g3;

   extern const unsigned particle_multiplicities[NUMBER_OF_PARTICLES];
   extern const char* particle_names[NUMBER_OF_PARTICLES];
   extern const char* particle_latex_names[NUMBER_OF_PARTICLES];
   extern const char* parameter_names[NUMBER_OF_PARAMETERS];
   extern const char* particle_mixing_names[NUMBER_OF_MIXINGS];
   extern const char* input_parameter_names[NUMBER_OF_INPUT_PARAMETERS];
   extern const char* model_name;
   extern const bool is_low_energy_model;
   extern const bool is_supersymmetric_model;

   void print(std::ostream&);
}

} // namespace flexiblesusy

#endif
