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

#ifndef MSSM_UTILITIES_H
#define MSSM_UTILITIES_H

#include "MSSM_two_scale_model.hpp"
#include "MSSM_info.hpp"
#include "wrappers.hpp"

#include <Eigen/Core>
#include <string>
#include <vector>
#include <valarray>
#include <utility>

#define PHYSICAL(p) model.get_physical().p
#define MODELPARAMETER(p) model.get_##p()

namespace flexiblesusy {

class MSSM_parameter_getter {
public:
   Eigen::ArrayXd get_parameters(const MSSM<Two_scale>& model) {
      return model.display();
   }
   std::vector<std::string> get_parameter_names(const MSSM<Two_scale>&) const {
      using namespace MSSM_info;
      return std::vector<std::string>(parameter_names,
                                      parameter_names + NUMBER_OF_PARAMETERS);
   }
};

class MSSM_spectrum_plotter {
public:
   MSSM_spectrum_plotter();
   ~MSSM_spectrum_plotter() {}

   template <class T>
   void extract_spectrum(const MSSM<T>&);
   void write_to_file(const std::string&) const;

private:
   struct TParticle {
      std::string name;
      std::string latex_name;
      std::valarray<double> masses;
      TParticle(const std::string& name_, const std::string& latex_name_,
                const std::valarray<double>& masses_)
         : name(name_)
         , latex_name(latex_name_)
         , masses(masses_)
         {}
   };
   typedef std::vector<TParticle> TSpectrum;
   TSpectrum spectrum;
   double scale;
   unsigned width;

   void write_spectrum(const TSpectrum&, std::ofstream&) const;
};


template <class T>
void MSSM_spectrum_plotter::extract_spectrum(const MSSM<T>& model)
{
   spectrum.clear();
   scale = model.get_scale();

   spectrum.push_back(TParticle("Glu", "\\tilde{g}", ToValarray(PHYSICAL(MGlu))));
   spectrum.push_back(TParticle("Sd", "\\tilde{d}", ToValarray(PHYSICAL(MSd))));
   spectrum.push_back(TParticle("Sv", "\\tilde{\\nu}", ToValarray(PHYSICAL(MSv))));
   spectrum.push_back(TParticle("Su", "\\tilde{u}", ToValarray(PHYSICAL(MSu))));
   spectrum.push_back(TParticle("Se", "\\tilde{e}", ToValarray(PHYSICAL(MSe))));
   spectrum.push_back(TParticle("hh", "h", ToValarray(PHYSICAL(Mhh))));
   spectrum.push_back(TParticle("Ah", "A^0", ToValarray(PHYSICAL(MAh))));
   spectrum.push_back(TParticle("Hpm", "H^-", ToValarray(PHYSICAL(MHpm))));
   spectrum.push_back(TParticle("Chi", "\\tilde{\\chi}^0", ToValarray(PHYSICAL(MChi))));
   spectrum.push_back(TParticle("Cha", "\\tilde{\\chi}^-", ToValarray(PHYSICAL(MCha))));

   if (model.do_calculate_sm_pole_masses()) {
      spectrum.push_back(TParticle("Fd", "d", ToValarray(PHYSICAL(MFd))));
      spectrum.push_back(TParticle("Fe", "e", ToValarray(PHYSICAL(MFe))));
      spectrum.push_back(TParticle("Fu", "u", ToValarray(PHYSICAL(MFu))));
      spectrum.push_back(TParticle("Fv", "\\nu", ToValarray(PHYSICAL(MFv))));
      spectrum.push_back(TParticle("VG", "g", ToValarray(PHYSICAL(MVG))));
      spectrum.push_back(TParticle("VP", "\\gamma", ToValarray(PHYSICAL(MVP))));
      spectrum.push_back(TParticle("VWm", "W^-", ToValarray(PHYSICAL(MVWm))));
      spectrum.push_back(TParticle("VZ", "Z", ToValarray(PHYSICAL(MVZ))));

   }
}

} // namespace flexiblesusy

#endif
