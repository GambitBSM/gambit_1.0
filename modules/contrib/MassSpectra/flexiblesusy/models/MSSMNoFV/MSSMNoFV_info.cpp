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

// File generated at Mon 1 Jun 2015 13:05:09

#include "MSSMNoFV_info.hpp"

#include <iostream>

namespace flexiblesusy {

namespace MSSMNoFV_info {
   const double normalization_g1 = 0.7745966692414834;
   const double normalization_g2 = 1;
   const double normalization_g3 = 1;

   const unsigned particle_multiplicities[NUMBER_OF_PARTICLES] = {1, 1, 1, 1, 1
      , 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
      2, 4, 2, 1};

   const char* particle_names[NUMBER_OF_PARTICLES] = {"VG", "Glu", "VP", "VZ",
      "Fd", "Fs", "Fb", "Fu", "Fc", "Ft", "Fve", "Fvm", "Fvt", "Fe", "Fm", "Ftau",
      "SveL", "SvmL", "SvtL", "Sd", "Su", "Se", "Sm", "Stau", "Ss", "Sc", "Sb",
      "St", "hh", "Ah", "Hpm", "Chi", "Cha", "VWm"};

   const char* particle_latex_names[NUMBER_OF_PARTICLES] = {   "g",
      "\\tilde{g}", "\\gamma", "Z", "d", "s", "b", "u", "c", "t", "\\nu_e",
      "\\nu_{\\mu}", "\\nu_{\\tau}", "e", "m", "\\tau", "\\tilde{\\nu}_e",
      "\\tilde{\\nu}_{\\mu}", "\\tilde{\\nu}_{\\tau}", "\\tilde{d}", "\\tilde{u}",
      "\\tilde{e}", "\\tilde{\\mu}", "\\tilde{\\tau}", "\\tilde{s}", "\\tilde{c}"
      , "\\tilde{b}", "\\tilde{t}", "h", "A^0", "H^-", "\\tilde{\\chi}^0",
      "\\tilde{\\chi}^-", "W^-"};

   const char* parameter_names[NUMBER_OF_PARAMETERS] = {"Yd(0,0)", "Yd(0,1)",
      "Yd(0,2)", "Yd(1,0)", "Yd(1,1)", "Yd(1,2)", "Yd(2,0)", "Yd(2,1)", "Yd(2,2)",
      "Ye(0,0)", "Ye(0,1)", "Ye(0,2)", "Ye(1,0)", "Ye(1,1)", "Ye(1,2)", "Ye(2,0)"
      , "Ye(2,1)", "Ye(2,2)", "Yu(0,0)", "Yu(0,1)", "Yu(0,2)", "Yu(1,0)",
      "Yu(1,1)", "Yu(1,2)", "Yu(2,0)", "Yu(2,1)", "Yu(2,2)", "Mu", "g1", "g2",
      "g3", "vd", "vu", "TYd(0,0)", "TYd(0,1)", "TYd(0,2)", "TYd(1,0)", "TYd(1,1)"
      , "TYd(1,2)", "TYd(2,0)", "TYd(2,1)", "TYd(2,2)", "TYe(0,0)", "TYe(0,1)",
      "TYe(0,2)", "TYe(1,0)", "TYe(1,1)", "TYe(1,2)", "TYe(2,0)", "TYe(2,1)",
      "TYe(2,2)", "TYu(0,0)", "TYu(0,1)", "TYu(0,2)", "TYu(1,0)", "TYu(1,1)",
      "TYu(1,2)", "TYu(2,0)", "TYu(2,1)", "TYu(2,2)", "BMu", "mq2(0,0)",
      "mq2(0,1)", "mq2(0,2)", "mq2(1,0)", "mq2(1,1)", "mq2(1,2)", "mq2(2,0)",
      "mq2(2,1)", "mq2(2,2)", "ml2(0,0)", "ml2(0,1)", "ml2(0,2)", "ml2(1,0)",
      "ml2(1,1)", "ml2(1,2)", "ml2(2,0)", "ml2(2,1)", "ml2(2,2)", "mHd2", "mHu2",
      "md2(0,0)", "md2(0,1)", "md2(0,2)", "md2(1,0)", "md2(1,1)", "md2(1,2)",
      "md2(2,0)", "md2(2,1)", "md2(2,2)", "mu2(0,0)", "mu2(0,1)", "mu2(0,2)",
      "mu2(1,0)", "mu2(1,1)", "mu2(1,2)", "mu2(2,0)", "mu2(2,1)", "mu2(2,2)",
      "me2(0,0)", "me2(0,1)", "me2(0,2)", "me2(1,0)", "me2(1,1)", "me2(1,2)",
      "me2(2,0)", "me2(2,1)", "me2(2,2)", "MassB", "MassWB", "MassG"};

   const char* model_name = "MSSMNoFV";
   const bool is_low_energy_model = false;
   const bool is_supersymmetric_model = true;

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

} // namespace MSSMNoFV_info

} // namespace flexiblesusy

