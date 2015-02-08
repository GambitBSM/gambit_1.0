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

// File generated at Fri 16 Jan 2015 12:44:57

#ifndef CMSSMNoFV_UTILITIES_H
#define CMSSMNoFV_UTILITIES_H

#include "CMSSMNoFV_two_scale_model.hpp"
#include "CMSSMNoFV_info.hpp"
#include "wrappers.hpp"

#include <Eigen/Core>
#include <string>
#include <vector>
#include <valarray>
#include <utility>

#define PHYSICAL(p) model.get_physical().p
#define MODELPARAMETER(p) model.get_##p()

namespace flexiblesusy {

class CMSSMNoFV_parameter_getter {
public:
   Eigen::ArrayXd get_parameters(const CMSSMNoFV<Two_scale>& model) {
      return model.get();
   }
   std::vector<std::string> get_parameter_names(const CMSSMNoFV<Two_scale>&) const {
      using namespace CMSSMNoFV_info;
      return std::vector<std::string>(parameter_names,
                                      parameter_names + NUMBER_OF_PARAMETERS);
   }
};

class CMSSMNoFV_spectrum_plotter {
public:
   CMSSMNoFV_spectrum_plotter();
   ~CMSSMNoFV_spectrum_plotter() {}

   template <class T>
   void extract_spectrum(const CMSSMNoFV<T>&);
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
void CMSSMNoFV_spectrum_plotter::extract_spectrum(const CMSSMNoFV<T>& model)
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

template <class Scalar, int M, int N>
std::valarray<double> CMSSMNoFV_spectrum_plotter::to_valarray(const Eigen::Array<Scalar, M, N>& v)
{
   return std::valarray<double>(v.data(), v.size());
}

} // namespace flexiblesusy

#endif
