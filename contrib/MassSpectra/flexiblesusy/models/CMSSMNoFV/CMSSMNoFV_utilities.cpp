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

// File generated at Wed 28 Oct 2015 11:46:19

#include "CMSSMNoFV_utilities.hpp"
#include "CMSSMNoFV_input_parameters.hpp"
#include "logger.hpp"
#include "wrappers.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>

#define PHYSICAL(p) model.get_physical().p
#define MODELPARAMETER(p) model.get_##p()

namespace flexiblesusy {

CMSSMNoFV_spectrum_plotter::CMSSMNoFV_spectrum_plotter()
   : spectrum()
   , scale(0.0)
   , width(16)
{
}


void CMSSMNoFV_spectrum_plotter::extract_spectrum(const CMSSMNoFV_mass_eigenstates& model)
{
   spectrum.clear();
   scale = model.get_scale();

   spectrum.push_back(TParticle("Glu", "\\tilde{g}", to_valarray(PHYSICAL(MGlu))));
   spectrum.push_back(TParticle("SveL", "\\tilde{\\nu}_e", to_valarray(PHYSICAL(MSveL))));
   spectrum.push_back(TParticle("SvmL", "\\tilde{\\nu}_{\\mu}", to_valarray(PHYSICAL(MSvmL))));
   spectrum.push_back(TParticle("SvtL", "\\tilde{\\nu}_{\\tau}", to_valarray(PHYSICAL(MSvtL))));
   spectrum.push_back(TParticle("Sd", "\\tilde{d}", to_valarray(PHYSICAL(MSd))));
   spectrum.push_back(TParticle("Su", "\\tilde{u}", to_valarray(PHYSICAL(MSu))));
   spectrum.push_back(TParticle("Se", "\\tilde{e}", to_valarray(PHYSICAL(MSe))));
   spectrum.push_back(TParticle("Sm", "\\tilde{\\mu}", to_valarray(PHYSICAL(MSm))));
   spectrum.push_back(TParticle("Stau", "\\tilde{\\tau}", to_valarray(PHYSICAL(MStau))));
   spectrum.push_back(TParticle("Ss", "\\tilde{s}", to_valarray(PHYSICAL(MSs))));
   spectrum.push_back(TParticle("Sc", "\\tilde{c}", to_valarray(PHYSICAL(MSc))));
   spectrum.push_back(TParticle("Sb", "\\tilde{b}", to_valarray(PHYSICAL(MSb))));
   spectrum.push_back(TParticle("St", "\\tilde{t}", to_valarray(PHYSICAL(MSt))));
   spectrum.push_back(TParticle("hh", "h", to_valarray(PHYSICAL(Mhh))));
   spectrum.push_back(TParticle("Ah", "A^0", to_valarray(PHYSICAL(MAh))));
   spectrum.push_back(TParticle("Hpm", "H^-", to_valarray(PHYSICAL(MHpm))));
   spectrum.push_back(TParticle("Chi", "\\tilde{\\chi}^0", to_valarray(PHYSICAL(MChi))));
   spectrum.push_back(TParticle("Cha", "\\tilde{\\chi}^-", to_valarray(PHYSICAL(MCha))));

   if (model.do_calculate_sm_pole_masses()) {
      spectrum.push_back(TParticle("Fb", "b", to_valarray(PHYSICAL(MFb))));
      spectrum.push_back(TParticle("Fc", "c", to_valarray(PHYSICAL(MFc))));
      spectrum.push_back(TParticle("Fd", "d", to_valarray(PHYSICAL(MFd))));
      spectrum.push_back(TParticle("Fe", "e", to_valarray(PHYSICAL(MFe))));
      spectrum.push_back(TParticle("Fm", "m", to_valarray(PHYSICAL(MFm))));
      spectrum.push_back(TParticle("Fs", "s", to_valarray(PHYSICAL(MFs))));
      spectrum.push_back(TParticle("Ft", "t", to_valarray(PHYSICAL(MFt))));
      spectrum.push_back(TParticle("Ftau", "\\tau", to_valarray(PHYSICAL(MFtau))));
      spectrum.push_back(TParticle("Fu", "u", to_valarray(PHYSICAL(MFu))));
      spectrum.push_back(TParticle("Fve", "\\nu_e", to_valarray(PHYSICAL(MFve))));
      spectrum.push_back(TParticle("Fvm", "\\nu_{\\mu}", to_valarray(PHYSICAL(MFvm))));
      spectrum.push_back(TParticle("Fvt", "\\nu_{\\tau}", to_valarray(PHYSICAL(MFvt))));
      spectrum.push_back(TParticle("VG", "g", to_valarray(PHYSICAL(MVG))));
      spectrum.push_back(TParticle("VP", "\\gamma", to_valarray(PHYSICAL(MVP))));
      spectrum.push_back(TParticle("VWm", "W^-", to_valarray(PHYSICAL(MVWm))));
      spectrum.push_back(TParticle("VZ", "Z", to_valarray(PHYSICAL(MVZ))));

   }
}

void CMSSMNoFV_spectrum_plotter::write_to_file(const std::string& file_name) const
{
   if (spectrum.empty())
      return;

   std::ofstream filestr(file_name.c_str(), std::ios::out);
   VERBOSE_MSG("CMSSMNoFV_spectrum_plotter::write_to_file: opening file: "
               << file_name.c_str());
   if (filestr.fail()) {
      ERROR("CMSSMNoFV_spectrum_plotter::write_to_file: can't open file "
            << file_name);
      return;
   }

   filestr << "### pole masses (Q = " << scale << " GeV)\n";
   write_spectrum(spectrum, filestr);

   filestr.close();
   VERBOSE_MSG("CMSSMNoFV_spectrum_plotter::write_to_file: file written: "
               << file_name.c_str());
}

void CMSSMNoFV_spectrum_plotter::write_spectrum(const TSpectrum& spectrum, std::ofstream& filestr) const
{
   for (std::size_t s = 0; s < spectrum.size(); ++s) {
      if (!filestr.good()) {
         ERROR("CMSSMNoFV_spectrum_plotter::write_spectrum: "
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

std::valarray<double> CMSSMNoFV_spectrum_plotter::to_valarray(double v)
{
   return std::valarray<double>(&v, 1);
}

} // namespace flexiblesusy
