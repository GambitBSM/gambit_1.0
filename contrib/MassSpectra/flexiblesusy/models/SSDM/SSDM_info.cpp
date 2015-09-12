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

#include "SSDM_info.hpp"

#include <iostream>

namespace flexiblesusy {

namespace SSDM_info {
   const double normalization_g1 = 0.7745966692414834;
   const double normalization_g2 = 1;
   const double normalization_g3 = 1;

   const unsigned particle_multiplicities[NUMBER_OF_PARTICLES] = {1, 1, 1, 3, 1
      , 1, 1, 1, 3, 3, 3, 1};

   const char* particle_names[NUMBER_OF_PARTICLES] = {"VG", "Hp", "ss", "Fv",
      "Ah", "hh", "VP", "VZ", "Fd", "Fu", "Fe", "VWp"};

   const char* particle_latex_names[NUMBER_OF_PARTICLES] = {   "g", "H^+", "S",
      "\\nu", "A^0", "h", "\\gamma", "Z", "d", "u", "e", "W^+"};

   const char* parameter_names[NUMBER_OF_PARAMETERS] = {"g1", "g2", "g3",
      "Lambda3", "Lambda2", "Lambda1", "Yu(0,0)", "Yu(0,1)", "Yu(0,2)", "Yu(1,0)",
      "Yu(1,1)", "Yu(1,2)", "Yu(2,0)", "Yu(2,1)", "Yu(2,2)", "Yd(0,0)", "Yd(0,1)"
      , "Yd(0,2)", "Yd(1,0)", "Yd(1,1)", "Yd(1,2)", "Yd(2,0)", "Yd(2,1)",
      "Yd(2,2)", "Ye(0,0)", "Ye(0,1)", "Ye(0,2)", "Ye(1,0)", "Ye(1,1)", "Ye(1,2)",
      "Ye(2,0)", "Ye(2,1)", "Ye(2,2)", "mS2", "mu2", "v"};

   const char* model_name = "SSDM";
   const bool is_low_energy_model = false;
   const bool is_supersymmetric_model = false;

void print(std::ostream& ostr)
{
   ostr
      << "Model information\n"
      << "=================\n"
      << "Model name:                " << model_name << '\n'
      << "Is a low-energy model:     "
      << (is_low_energy_model ? "yes" : "no") << '\n'
      << "Is a supersymmetric model: "
      << (is_supersymmetric_model ? "yes" : "no") << '\n'
      << "Number of multiplets:      " << NUMBER_OF_PARTICLES << '\n'
      << "Number of parameters:      " << NUMBER_OF_PARAMETERS << '\n'
      ;

   ostr << "\n"
      "Multiplets:                ";
   for (unsigned i = 0; i < NUMBER_OF_PARTICLES; i++) {
      ostr << particle_names[i]
           << '[' << particle_multiplicities[i] << ']';
      if (i + 1 < NUMBER_OF_PARTICLES)
         ostr << ", ";
   }

   ostr << "\n\n"
      "Parameters:                ";
   for (unsigned i = 0; i < NUMBER_OF_PARAMETERS; i++) {
      ostr << parameter_names[i];
      if (i + 1 < NUMBER_OF_PARAMETERS)
         ostr << ", ";
   }
   ostr << '\n';
}

} // namespace SSDM_info

} // namespace flexiblesusy

