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

// File generated at Fri 2 May 2014 14:57:47

#include "MSSM_slha_io.hpp"
#include "MSSM_input_parameters.hpp"
#include "logger.hpp"
#include "wrappers.hpp"
#include "spectrum_generator_settings.hpp"
#include "lowe.h"
#include "config.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <boost/bind.hpp>

using namespace softsusy;

namespace flexiblesusy {

MSSM_slha_io::MSSM_slha_io()
   : slha_io()
{
}

void MSSM_slha_io::clear()
{
   slha_io.clear();
}

void MSSM_slha_io::set_extpar(const MSSM_input_parameters& input)
{

}

void MSSM_slha_io::set_minpar(const MSSM_input_parameters& input)
{
   std::ostringstream minpar;

   minpar << "Block MINPAR\n";
   minpar << FORMAT_ELEMENT(1, input.m0, "m0");
   minpar << FORMAT_ELEMENT(2, input.m12, "m12");
   minpar << FORMAT_ELEMENT(3, input.TanBeta, "TanBeta");
   minpar << FORMAT_ELEMENT(4, input.SignMu, "SignMu");
   minpar << FORMAT_ELEMENT(5, input.Azero, "Azero");
   slha_io.set_block(minpar);

}

void MSSM_slha_io::set_sminputs(const softsusy::QedQcd& qedqcd)
{
   slha_io.set_sminputs(qedqcd);
}

void MSSM_slha_io::set_spinfo(const Problems<MSSM_info::NUMBER_OF_PARTICLES>& problems)
{
   std::ostringstream spinfo;
   spinfo << "# FlexibleSUSY " FLEXIBLESUSY_VERSION " SLHA compliant output\n"
             "# P. Athron, J. Park, D. Stöckinger, A. Voigt\n"
             "Block SPINFO\n"
          << FORMAT_SPINFO(1, PKGNAME)
          << FORMAT_SPINFO(2, FLEXIBLESUSY_VERSION);

   if (problems.have_serious_problem()) {
      std::ostringstream serious_problems;
      problems.print(serious_problems);
      spinfo << FORMAT_SPINFO(4, serious_problems.str());
   }

   slha_io.set_block(spinfo, SLHA_io::front);
}

void MSSM_slha_io::write_to_file(const std::string& file_name)
{
   slha_io.write_to_file(file_name);
}

double MSSM_slha_io::get_input_scale() const
{
   return slha_io.get_extpar().input_scale;
}

double MSSM_slha_io::get_parameter_output_scale() const
{
   return slha_io.get_modsel().parameter_output_scale;
}

void MSSM_slha_io::read_from_file(const std::string& file_name)
{
   slha_io.read_from_file(file_name);
   slha_io.read_modsel();
   slha_io.read_extpar();
}

void MSSM_slha_io::fill(MSSM_input_parameters& input) const
{
   SLHA_io::Tuple_processor minpar_processor
      = boost::bind(&MSSM_slha_io::fill_minpar_tuple, boost::ref(input), _1, _2);
   SLHA_io::Tuple_processor extpar_processor
      = boost::bind(&MSSM_slha_io::fill_extpar_tuple, boost::ref(input), _1, _2);

   slha_io.read_block("MINPAR", minpar_processor);
   slha_io.read_block("EXTPAR", extpar_processor);


}

void MSSM_slha_io::fill(Spectrum_generator_settings& settings) const
{
   SLHA_io::Tuple_processor flexiblesusy_processor
      = boost::bind(&MSSM_slha_io::fill_flexiblesusy_tuple, boost::ref(settings), _1, _2);

   slha_io.read_block("FlexibleSUSY", flexiblesusy_processor);
}

void MSSM_slha_io::fill_minpar_tuple(MSSM_input_parameters& input,
                                                int key, double value)
{
   switch (key) {
   case 1: input.m0 = value; break;
   case 2: input.m12 = value; break;
   case 3: input.TanBeta = value; break;
   case 4: input.SignMu = value; break;
   case 5: input.Azero = value; break;
   default: WARNING("Unrecognized key: " << key); break;
   }

}

void MSSM_slha_io::fill_extpar_tuple(MSSM_input_parameters& input,
                                                int key, double value)
{
   // key 0 is the model parameter input scale, which is read in
   // slha_io.{hpp,cpp}
   if (key == 0)
      return;

   switch (key) {
   default: WARNING("Unrecognized key: " << key); break;
   }

}

void MSSM_slha_io::fill_flexiblesusy_tuple(Spectrum_generator_settings& settings,
                                                  int key, double value)
{
   if (0 <= key && key < static_cast<int>(Spectrum_generator_settings::NUMBER_OF_OPTIONS)) {
      settings.set((Spectrum_generator_settings::Settings)key, value);
   } else {
      WARNING("Unrecognized key in block FlexibleSUSY: " << key);
   }
}

} // namespace flexiblesusy
