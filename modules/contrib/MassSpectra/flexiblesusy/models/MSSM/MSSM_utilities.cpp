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

// File generated at Fri 16 Jan 2015 13:12:41

#include "MSSM_utilities.hpp"
#include "MSSM_input_parameters.hpp"
#include "logger.hpp"
#include "wrappers.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace softsusy;

namespace flexiblesusy {

MSSM_spectrum_plotter::MSSM_spectrum_plotter()
   : spectrum()
   , scale(0.0)
   , width(16)
{
}

void MSSM_spectrum_plotter::write_to_file(const std::string& file_name) const
{
   if (spectrum.empty())
      return;

   std::ofstream filestr(file_name.c_str(), std::ios::out);
   VERBOSE_MSG("MSSM_spectrum_plotter::write_to_file: opening file: "
               << file_name.c_str());
   if (filestr.fail()) {
      ERROR("MSSM_spectrum_plotter::write_to_file: can't open file "
            << file_name);
      return;
   }

   filestr << "### one-loop pole masses (Q = " << scale << " GeV)\n";
   write_spectrum(spectrum, filestr);

   filestr.close();
   VERBOSE_MSG("MSSM_spectrum_plotter::write_to_file: file written: "
               << file_name.c_str());
}

void MSSM_spectrum_plotter::write_spectrum(const TSpectrum& spectrum, std::ofstream& filestr) const
{
   for (std::size_t s = 0; s < spectrum.size(); ++s) {
      if (!filestr.good()) {
         ERROR("MSSM_spectrum_plotter::write_spectrum: "
               "file stream is corrupted");
         break;
      }

      const std::string& name = spectrum[s].name;
      const std::string& latex_name = spectrum[s].latex_name;
      const std::valarray<double>& masses = spectrum[s].masses;
      const std::size_t multiplicity = masses.size();

      filestr << std::left << "# " << name << '\n';

      for (std::size_t i = 0; i < multiplicity; ++i) {
         std::string lname("$" + latex_name + "$");
         std::stringstream lname_with_index;
         lname_with_index << "$" << latex_name;
         if (multiplicity > 1)
            lname_with_index << "_{" << (i+1) << "}";
         lname_with_index  << "$";

         filestr << std::left << std::setw(width) << s
                 << std::left << std::setw(width) << masses[i]
                 << std::left << std::setw(width) << name
                 << std::left << std::setw(2*width) << lname
                 << std::left << std::setw(2*width) << lname_with_index.str()
                 << '\n';
      }
   }
}

std::valarray<double> MSSM_spectrum_plotter::to_valarray(double v)
{
   return std::valarray<double>(&v, 1);
}

} // namespace flexiblesusy
