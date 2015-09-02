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

// File generated at Mon 1 Jun 2015 12:42:32

#ifndef NSM_UTILITIES_H
#define NSM_UTILITIES_H

#include "NSM_two_scale_model.hpp"
#include "NSM_info.hpp"
#include "wrappers.hpp"

#include <Eigen/Core>
#include <string>
#include <vector>
#include <valarray>
#include <utility>

#define PHYSICAL(p) model.get_physical().p
#define MODELPARAMETER(p) model.get_##p()

namespace flexiblesusy {

class NSM_parameter_getter {
public:
   Eigen::ArrayXd get_parameters(const NSM<Two_scale>& model) {
      return model.get();
   }
   std::vector<std::string> get_parameter_names(const NSM<Two_scale>&) const {
      using namespace NSM_info;
      return std::vector<std::string>(parameter_names,
                                      parameter_names + NUMBER_OF_PARAMETERS);
   }
};

class NSM_spectrum_plotter {
public:
   NSM_spectrum_plotter();
   ~NSM_spectrum_plotter() {}

   template <class T>
   void extract_spectrum(const NSM<T>&);
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
   static std::valarray<double> to_valarray(double);
   template <class Scalar, int M, int N>
   static std::valarray<double> to_valarray(const Eigen::Array<Scalar, M, N>&);
};


template <class T>
void NSM_spectrum_plotter::extract_spectrum(const NSM<T>& model)
{
   spectrum.clear();
   scale = model.get_scale();

   spectrum.push_back(TParticle("hh", "h", to_valarray(PHYSICAL(Mhh))));

   if (model.do_calculate_sm_pole_masses()) {
      spectrum.push_back(TParticle("Ah", "A^0", to_valarray(PHYSICAL(MAh))));
      spectrum.push_back(TParticle("Fd", "d", to_valarray(PHYSICAL(MFd))));
      spectrum.push_back(TParticle("Fe", "e", to_valarray(PHYSICAL(MFe))));
      spectrum.push_back(TParticle("Fu", "u", to_valarray(PHYSICAL(MFu))));
      spectrum.push_back(TParticle("Fv", "\\nu", to_valarray(PHYSICAL(MFv))));
      spectrum.push_back(TParticle("Hp", "H^+", to_valarray(PHYSICAL(MHp))));
      spectrum.push_back(TParticle("VG", "g", to_valarray(PHYSICAL(MVG))));
      spectrum.push_back(TParticle("VP", "\\gamma", to_valarray(PHYSICAL(MVP))));
      spectrum.push_back(TParticle("VWp", "W^+", to_valarray(PHYSICAL(MVWp))));
      spectrum.push_back(TParticle("VZ", "Z", to_valarray(PHYSICAL(MVZ))));

   }
}

template <class Scalar, int M, int N>
std::valarray<double> NSM_spectrum_plotter::to_valarray(const Eigen::Array<Scalar, M, N>& v)
{
   return std::valarray<double>(v.data(), v.size());
}

} // namespace flexiblesusy

#undef PHYSICAL
#undef MODELPARAMETER

#endif
