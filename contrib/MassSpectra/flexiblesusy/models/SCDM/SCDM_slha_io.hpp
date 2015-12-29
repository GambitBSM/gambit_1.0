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

// File generated at Tue 29 Dec 2015 16:23:41

#ifndef SCDM_SLHA_IO_H
#define SCDM_SLHA_IO_H

#include "SCDM_two_scale_model_slha.hpp"
#include "SCDM_info.hpp"
#include "SCDM_physical.hpp"
#include "slha_io.hpp"
#include "ckm.hpp"
#include "ew_input.hpp"
#include "lowe.h"

#include <Eigen/Core>
#include <string>
#include <utility>

#define Pole(p) physical.p
#define PHYSICAL(p) model.get_physical().p
#define PHYSICAL_SLHA(p) model.get_physical_slha().p
#define LOCALPHYSICAL(p) physical.p
#define MODELPARAMETER(p) model.get_##p()
#define LowEnergyConstant(p) Electroweak_constants::p
#define SCALES(p) scales.p

namespace flexiblesusy {

struct SCDM_input_parameters;
class Spectrum_generator_settings;

struct SCDM_scales {
   SCDM_scales() : HighScale(0.), SUSYScale(0.), LowScale(0.) {}
   double HighScale, SUSYScale, LowScale;
};

class SCDM_slha_io {
public:
   SCDM_slha_io();
   ~SCDM_slha_io() {}

   void clear();

   void fill(softsusy::QedQcd& qedqcd) const { slha_io.fill(qedqcd); }
   void fill(SCDM_input_parameters&) const;
   void fill(SCDM_mass_eigenstates&) const;
   template <class T> void fill(SCDM_slha<T>&) const;
   void fill(Spectrum_generator_settings&) const;
   double get_parameter_output_scale() const;
   const SLHA_io& get_slha_io() const { return slha_io; }
   void read_from_file(const std::string&);
   void read_from_source(const std::string&);
   void read_from_stream(std::istream&);
   void set_extpar(const SCDM_input_parameters&);
   template <class T> void set_extra(const SCDM_slha<T>&, const SCDM_scales&);
   void set_minpar(const SCDM_input_parameters&);
   void set_sminputs(const softsusy::QedQcd&);
   template <class T> void set_spectrum(const SCDM_slha<T>&);
   template <class T> void set_spectrum(const SCDM<T>&);
   void set_spinfo(const Problems<SCDM_info::NUMBER_OF_PARTICLES>&);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& ostr = std::cout) { slha_io.write_to_stream(ostr); }

   static void fill_minpar_tuple(SCDM_input_parameters&, int, double);
   static void fill_extpar_tuple(SCDM_input_parameters&, int, double);

   template <class T>
   static void fill_slhaea(SLHAea::Coll&, const SCDM_slha<T>&, const softsusy::QedQcd&, const SCDM_scales&);

   template <class T>
   static SLHAea::Coll fill_slhaea(const SCDM_slha<T>&, const softsusy::QedQcd&);

   template <class T>
   static SLHAea::Coll fill_slhaea(const SCDM_slha<T>&, const softsusy::QedQcd&, const SCDM_scales&);

private:
   SLHA_io slha_io; ///< SLHA io class
   static unsigned const NUMBER_OF_DRBAR_BLOCKS = 8;
   static char const * const drbar_blocks[NUMBER_OF_DRBAR_BLOCKS];

   void set_mass(const SCDM_physical&, bool);
   void set_mixing_matrices(const SCDM_physical&, bool);
   template <class T> void set_model_parameters(const SCDM_slha<T>&);
   void set_ckm(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   void set_pmns(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   double read_scale() const;
   void fill_drbar_parameters(SCDM_mass_eigenstates&) const;
   void fill_physical(SCDM_physical&) const;
};

/**
 * Reads DR-bar parameters, pole masses and mixing matrices from a
 * SLHA output file.
 */
template <class T>
void SCDM_slha_io::fill(SCDM_slha<T>& model) const
{
   fill(static_cast<SCDM_mass_eigenstates&>(model));
   fill_physical(model.get_physical_slha());
}

template <class T>
void SCDM_slha_io::fill_slhaea(
   SLHAea::Coll& slhaea, const SCDM_slha<T>& model,
   const softsusy::QedQcd& qedqcd, const SCDM_scales& scales)
{
   SCDM_slha_io slha_io;
   const SCDM_input_parameters& input = model.get_input();
   const Problems<SCDM_info::NUMBER_OF_PARTICLES>& problems
      = model.get_problems();
   const bool error = problems.have_problem();

   slha_io.set_spinfo(problems);
   slha_io.set_sminputs(qedqcd);
   slha_io.set_minpar(input);
   slha_io.set_extpar(input);
   if (!error) {
      slha_io.set_spectrum(model);
      slha_io.set_extra(model, scales);
   }

   slhaea = slha_io.get_slha_io().get_data();
}

template <class T>
SLHAea::Coll SCDM_slha_io::fill_slhaea(
   const SCDM_slha<T>& model, const softsusy::QedQcd& qedqcd)
{
   SCDM_scales scales;

   return fill_slhaea(model, qedqcd, scales);
}

template <class T>
SLHAea::Coll SCDM_slha_io::fill_slhaea(
   const SCDM_slha<T>& model, const softsusy::QedQcd& qedqcd,
   const SCDM_scales& scales)
{
   SLHAea::Coll slhaea;
   SCDM_slha_io::fill_slhaea(slhaea, model, qedqcd, scales);

   return slhaea;
}

/**
 * Stores the model (DR-bar) parameters in the SLHA object.
 *
 * @param model model class
 */
template <class T>
void SCDM_slha_io::set_model_parameters(const SCDM_slha<T>& model)
{
   {
      std::ostringstream block;
      block << "Block gauge Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(g1) * 0.7745966692414834), "gY")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(g2)), "g2")
            << FORMAT_ELEMENT(3, (MODELPARAMETER(g3)), "g3")
      ;
      slha_io.set_block(block);
   }
   slha_io.set_block("Yu", ToMatrix(MODELPARAMETER(Yu_slha)), "Yu", model.get_scale());
   slha_io.set_block("Yd", ToMatrix(MODELPARAMETER(Yd_slha)), "Yd", model.get_scale());
   slha_io.set_block("Ye", ToMatrix(MODELPARAMETER(Ye_slha)), "Ye", model.get_scale());
   {
      std::ostringstream block;
      block << "Block HMIX Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(3, (MODELPARAMETER(v)), "v")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block SM Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(muH)), "muH")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(Lambda1)), "Lambda1")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block MSOFT Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(22, (MODELPARAMETER(muS)), "muS")
            << FORMAT_ELEMENT(22, (MODELPARAMETER(mu3)), "mu3")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block HDM Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(2, (MODELPARAMETER(LamSH)), "LamSH")
            << FORMAT_ELEMENT(3, (MODELPARAMETER(LamS)), "LamS")
      ;
      slha_io.set_block(block);
   }

}

/**
 * Writes extra SLHA blocks
 *
 * @param model model class
 */
template <class T>
void SCDM_slha_io::set_extra(
   const SCDM_slha<T>& model, const SCDM_scales& scales)
{
   const SCDM_physical physical(model.get_physical_slha());


}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in BPMZ convention
 */
template <class T>
void SCDM_slha_io::set_spectrum(const SCDM<T>& model)
{
   const SCDM_slha<T> model_slha(model);
   set_spectrum(model_slha);
}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in SLHA convention
 */
template <class T>
void SCDM_slha_io::set_spectrum(const SCDM_slha<T>& model)
{
   const SCDM_physical physical(model.get_physical_slha());
   const bool write_sm_masses = model.do_calculate_sm_pole_masses();

   set_model_parameters(model);
   set_mass(physical, write_sm_masses);
   set_mixing_matrices(physical, write_sm_masses);

   if (slha_io.get_modsel().quark_flavour_violated)
      set_ckm(model.get_ckm_matrix(), model.get_scale());

   if (slha_io.get_modsel().lepton_flavour_violated)
      set_pmns(model.get_pmns_matrix(), model.get_scale());
}

} // namespace flexiblesusy

#undef Pole
#undef PHYSICAL
#undef PHYSICAL_SLHA
#undef LOCALPHYSICAL
#undef MODELPARAMETER
#undef LowEnergyConstant
#undef SCALES

#endif
