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

// File generated at Sat 27 Aug 2016 12:40:25

#ifndef SSM_SLHA_IO_H
#define SSM_SLHA_IO_H

#include "SSM_two_scale_model_slha.hpp"
#include "SSM_info.hpp"
#include "SSM_observables.hpp"
#include "SSM_physical.hpp"
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
#define MODEL model
#define MODELPARAMETER(p) model.get_##p()
#define OBSERVABLES observables
#define LowEnergyConstant(p) Electroweak_constants::p
#define SCALES(p) scales.p

namespace flexiblesusy {

struct SSM_input_parameters;
class Spectrum_generator_settings;

struct SSM_scales {
   SSM_scales() : HighScale(0.), SUSYScale(0.), LowScale(0.) {}
   double HighScale, SUSYScale, LowScale;
};

class SSM_slha_io {
public:
   SSM_slha_io();
   ~SSM_slha_io() {}

   void clear();

   void fill(softsusy::QedQcd& qedqcd) const { slha_io.fill(qedqcd); }
   void fill(SSM_input_parameters&) const;
   void fill(SSM_mass_eigenstates&) const;
   template <class T> void fill(SSM_slha<T>&) const;
   void fill(Physical_input&) const;
   void fill(Spectrum_generator_settings&) const;
   double get_parameter_output_scale() const;
   const SLHA_io& get_slha_io() const { return slha_io; }
   void read_from_file(const std::string&);
   void read_from_source(const std::string&);
   void read_from_stream(std::istream&);
   void set_block(const std::string& str, SLHA_io::Position position = SLHA_io::back) { slha_io.set_block(str, position); }
   void set_blocks(const std::vector<std::string>& vec, SLHA_io::Position position = SLHA_io::back) { slha_io.set_blocks(vec, position); }
   void set_extpar(const SSM_input_parameters&);
   template <class T> void set_extra(const SSM_slha<T>&, const SSM_scales&, const SSM_observables&);
   void set_minpar(const SSM_input_parameters&);
   void set_sminputs(const softsusy::QedQcd&);
   template <class T> void set_spectrum(const SSM_slha<T>&);
   template <class T> void set_spectrum(const SSM<T>&);
   void set_spinfo(const Problems<SSM_info::NUMBER_OF_PARTICLES>&);
   void set_print_imaginary_parts_of_majorana_mixings(bool);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& ostr = std::cout) { slha_io.write_to_stream(ostr); }

   static void fill_minpar_tuple(SSM_input_parameters&, int, double);
   static void fill_extpar_tuple(SSM_input_parameters&, int, double);

   template <class T>
   static void fill_slhaea(SLHAea::Coll&, const SSM_slha<T>&, const softsusy::QedQcd&, const SSM_scales&, const SSM_observables&);

   template <class T>
   static SLHAea::Coll fill_slhaea(const SSM_slha<T>&, const softsusy::QedQcd&, const SSM_scales&, const SSM_observables&);

private:
   SLHA_io slha_io; ///< SLHA io class
   bool print_imaginary_parts_of_majorana_mixings;
   static unsigned const NUMBER_OF_DRBAR_BLOCKS = 6;
   static char const * const drbar_blocks[NUMBER_OF_DRBAR_BLOCKS];

   void set_mass(const SSM_physical&, bool);
   void set_mixing_matrices(const SSM_physical&, bool);
   template <class T> void set_model_parameters(const SSM_slha<T>&);
   void set_ckm(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   void set_pmns(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   double read_scale() const;
   void fill_drbar_parameters(SSM_mass_eigenstates&) const;
   void fill_physical(SSM_physical&) const;
};

/**
 * Reads DR-bar parameters, pole masses and mixing matrices from a
 * SLHA output file.
 */
template <class T>
void SSM_slha_io::fill(SSM_slha<T>& model) const
{
   fill(static_cast<SSM_mass_eigenstates&>(model));
   fill_physical(model.get_physical_slha());
}

template <class T>
void SSM_slha_io::fill_slhaea(
   SLHAea::Coll& slhaea, const SSM_slha<T>& model,
   const softsusy::QedQcd& qedqcd, const SSM_scales& scales,
   const SSM_observables& observables)
{
   SSM_slha_io slha_io;
   const SSM_input_parameters& input = model.get_input();
   const Problems<SSM_info::NUMBER_OF_PARTICLES>& problems
      = model.get_problems();
   const bool error = problems.have_problem();

   slha_io.set_spinfo(problems);
   slha_io.set_sminputs(qedqcd);
   slha_io.set_minpar(input);
   slha_io.set_extpar(input);
   if (!error) {
      slha_io.set_spectrum(model);
      slha_io.set_extra(model, scales, observables);
   }

   slhaea = slha_io.get_slha_io().get_data();
}

template <class T>
SLHAea::Coll SSM_slha_io::fill_slhaea(
   const SSM_slha<T>& model, const softsusy::QedQcd& qedqcd,
   const SSM_scales& scales, const SSM_observables& observables)
{
   SLHAea::Coll slhaea;
   SSM_slha_io::fill_slhaea(slhaea, model, qedqcd, scales, observables);

   return slhaea;
}

/**
 * Stores the model (DR-bar) parameters in the SLHA object.
 *
 * @param model model class
 */
template <class T>
void SSM_slha_io::set_model_parameters(const SSM_slha<T>& model)
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
      block << "Block SM Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(mu2)), "mu2")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(Lambdax)), "Lambdax")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block HMIX Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(3, (MODELPARAMETER(v)), "v")
            << FORMAT_ELEMENT(51, (MODELPARAMETER(vS)), "vS")
            << FORMAT_ELEMENT(31, (MODELPARAMETER(K1)), "K1")
            << FORMAT_ELEMENT(32, (MODELPARAMETER(K2)), "K2")
            << FORMAT_ELEMENT(35, (MODELPARAMETER(Kappa)), "Kappa")
            << FORMAT_ELEMENT(33, (MODELPARAMETER(LambdaS)), "LambdaS")
            << FORMAT_ELEMENT(34, (MODELPARAMETER(MS)), "MS")
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
void SSM_slha_io::set_extra(
   const SSM_slha<T>& model, const SSM_scales& scales,
   const SSM_observables& observables)
{
   const SSM_physical physical(model.get_physical_slha());


}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in BPMZ convention
 */
template <class T>
void SSM_slha_io::set_spectrum(const SSM<T>& model)
{
   const SSM_slha<T> model_slha(model);
   set_spectrum(model_slha);
}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in SLHA convention
 */
template <class T>
void SSM_slha_io::set_spectrum(const SSM_slha<T>& model)
{
   const SSM_physical physical(model.get_physical_slha());
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
#undef MODEL
#undef MODELPARAMETER
#undef OBSERVABLES
#undef LowEnergyConstant
#undef SCALES

#endif
