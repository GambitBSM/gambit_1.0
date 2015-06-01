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

// File generated at Mon 1 Jun 2015 13:22:20

#ifndef MSSMatMGUT_SLHA_IO_H
#define MSSMatMGUT_SLHA_IO_H

#include "MSSMatMGUT_two_scale_model_slha.hpp"
#include "MSSMatMGUT_info.hpp"
#include "MSSMatMGUT_physical.hpp"
#include "slha_io.hpp"
#include "ckm.hpp"
#include "ew_input.hpp"

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

struct MSSMatMGUT_input_parameters;
class Spectrum_generator_settings;

struct MSSMatMGUT_scales {
   MSSMatMGUT_scales() : HighScale(0.), SUSYScale(0.), LowScale(0.) {}
   double HighScale, SUSYScale, LowScale;
};

class MSSMatMGUT_slha_io {
public:
   MSSMatMGUT_slha_io();
   ~MSSMatMGUT_slha_io() {}

   void clear();

   void fill(QedQcd& qedqcd) const { slha_io.fill(qedqcd); }
   void fill(MSSMatMGUT_input_parameters&) const;
   void fill(MSSMatMGUT_mass_eigenstates&) const;
   template <class T> void fill(MSSMatMGUT_slha<T>&) const;
   void fill(Spectrum_generator_settings&) const;
   double get_parameter_output_scale() const;
   const SLHA_io& get_slha_io() const { return slha_io; }
   void read_from_file(const std::string&);
   void set_extpar(const MSSMatMGUT_input_parameters&);
   template <class T> void set_extra(const MSSMatMGUT_slha<T>&, const MSSMatMGUT_scales&);
   void set_minpar(const MSSMatMGUT_input_parameters&);
   void set_sminputs(const softsusy::QedQcd&);
   template <class T> void set_spectrum(const MSSMatMGUT_slha<T>&);
   template <class T> void set_spectrum(const MSSMatMGUT<T>&);
   void set_spinfo(const Problems<MSSMatMGUT_info::NUMBER_OF_PARTICLES>&);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& ostr = std::cout) { slha_io.write_to_stream(ostr); }

   static void fill_minpar_tuple(MSSMatMGUT_input_parameters&, int, double);
   static void fill_extpar_tuple(MSSMatMGUT_input_parameters&, int, double);
   static void fill_flexiblesusy_tuple(Spectrum_generator_settings&, int, double);

   template <class T>
   static void fill_slhaea(SLHAea::Coll&, const MSSMatMGUT_slha<T>&, const QedQcd&, const MSSMatMGUT_scales&);

   template <class T>
   static SLHAea::Coll fill_slhaea(const MSSMatMGUT_slha<T>&, const QedQcd&);

   template <class T>
   static SLHAea::Coll fill_slhaea(const MSSMatMGUT_slha<T>&, const QedQcd&, const MSSMatMGUT_scales&);

private:
   SLHA_io slha_io; ///< SLHA io class
   static unsigned const NUMBER_OF_DRBAR_BLOCKS = 14;
   static char const * const drbar_blocks[NUMBER_OF_DRBAR_BLOCKS];

   void set_mass(const MSSMatMGUT_physical&, bool);
   void set_mixing_matrices(const MSSMatMGUT_physical&, bool);
   template <class T> void set_model_parameters(const MSSMatMGUT_slha<T>&);
   void set_ckm(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   void set_pmns(const Eigen::Matrix<std::complex<double>,3,3>&, double);
   double read_scale() const;
   void fill_drbar_parameters(MSSMatMGUT_mass_eigenstates&) const;
   void fill_physical(MSSMatMGUT_physical&) const;
};

/**
 * Reads DR-bar parameters, pole masses and mixing matrices from a
 * SLHA output file.
 */
template <class T>
void MSSMatMGUT_slha_io::fill(MSSMatMGUT_slha<T>& model) const
{
   fill(static_cast<MSSMatMGUT_mass_eigenstates&>(model));
   fill_physical(model.get_physical_slha());
}

template <class T>
void MSSMatMGUT_slha_io::fill_slhaea(
   SLHAea::Coll& slhaea, const MSSMatMGUT_slha<T>& model,
   const QedQcd& qedqcd, const MSSMatMGUT_scales& scales)
{
   MSSMatMGUT_slha_io slha_io;
   const MSSMatMGUT_input_parameters& input = model.get_input();
   const Problems<MSSMatMGUT_info::NUMBER_OF_PARTICLES>& problems
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
SLHAea::Coll MSSMatMGUT_slha_io::fill_slhaea(
   const MSSMatMGUT_slha<T>& model, const QedQcd& qedqcd)
{
   MSSMatMGUT_scales scales;

   return fill_slhaea(model, qedqcd, scales);
}

template <class T>
SLHAea::Coll MSSMatMGUT_slha_io::fill_slhaea(
   const MSSMatMGUT_slha<T>& model, const QedQcd& qedqcd,
   const MSSMatMGUT_scales& scales)
{
   SLHAea::Coll slhaea;
   MSSMatMGUT_slha_io::fill_slhaea(slhaea, model, qedqcd, scales);

   return slhaea;
}

/**
 * Stores the model (DR-bar) parameters in the SLHA object.
 *
 * @param model model class
 */
template <class T>
void MSSMatMGUT_slha_io::set_model_parameters(const MSSMatMGUT_slha<T>& model)
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
   slha_io.set_block("Te", MODELPARAMETER(TYe_slha), "TYe", model.get_scale());
   slha_io.set_block("Td", MODELPARAMETER(TYd_slha), "TYd", model.get_scale());
   slha_io.set_block("Tu", MODELPARAMETER(TYu_slha), "TYu", model.get_scale());
   {
      std::ostringstream block;
      block << "Block HMIX Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(Mu)), "Mu")
            << FORMAT_ELEMENT(101, (MODELPARAMETER(BMu)), "BMu")
            << FORMAT_ELEMENT(102, (MODELPARAMETER(vd)), "vd")
            << FORMAT_ELEMENT(103, (MODELPARAMETER(vu)), "vu")
      ;
      slha_io.set_block(block);
   }
   slha_io.set_block("MSQ2", MODELPARAMETER(mq2_slha), "mq2", model.get_scale());
   slha_io.set_block("MSE2", MODELPARAMETER(me2_slha), "me2", model.get_scale());
   slha_io.set_block("MSL2", MODELPARAMETER(ml2_slha), "ml2", model.get_scale());
   slha_io.set_block("MSU2", MODELPARAMETER(mu2_slha), "mu2", model.get_scale());
   slha_io.set_block("MSD2", MODELPARAMETER(md2_slha), "md2", model.get_scale());
   {
      std::ostringstream block;
      block << "Block MSOFT Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(21, (MODELPARAMETER(mHd2)), "mHd2")
            << FORMAT_ELEMENT(22, (MODELPARAMETER(mHu2)), "mHu2")
            << FORMAT_ELEMENT(1, (MODELPARAMETER(MassB)), "MassB")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(MassWB)), "MassWB")
            << FORMAT_ELEMENT(3, (MODELPARAMETER(MassG)), "MassG")
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
void MSSMatMGUT_slha_io::set_extra(
   const MSSMatMGUT_slha<T>& model, const MSSMatMGUT_scales& scales)
{
   const MSSMatMGUT_physical physical(model.get_physical_slha());

   {
      std::ostringstream block;
      block << "Block FlexibleSUSYOutput Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(0, (SCALES(HighScale)), "HighScale")
            << FORMAT_ELEMENT(1, (SCALES(SUSYScale)), "SUSYScale")
            << FORMAT_ELEMENT(2, (SCALES(LowScale)), "LowScale")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block ALPHA Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_NUMBER((ArcSin(Pole(ZH(1,1)))), "ArcSin(Pole(ZH(1,1)))")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block HMIX Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(Mu)), "Mu")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(vu)/MODELPARAMETER(vd)), "vu/vd")
            << FORMAT_ELEMENT(3, (Sqrt(Sqr(MODELPARAMETER(vd)) + Sqr(MODELPARAMETER(vu)))), "Sqrt(Sqr(vd) + Sqr(vu))")
            << FORMAT_ELEMENT(4, (Sqr(MODELPARAMETER(MAh)(1))), "Sqr(MAh(1))")
            << FORMAT_ELEMENT(101, (MODELPARAMETER(BMu)), "BMu")
            << FORMAT_ELEMENT(102, (MODELPARAMETER(vd)), "vd")
            << FORMAT_ELEMENT(103, (MODELPARAMETER(vu)), "vu")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block Au Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_MIXING_MATRIX(1, 1, (MODELPARAMETER(TYu)(0,0)/MODELPARAMETER(Yu)(0,0)), "TYu(0,0)/Yu(0,0)")
            << FORMAT_MIXING_MATRIX(2, 2, (MODELPARAMETER(TYu)(1,1)/MODELPARAMETER(Yu)(1,1)), "TYu(1,1)/Yu(1,1)")
            << FORMAT_MIXING_MATRIX(3, 3, (MODELPARAMETER(TYu)(2,2)/MODELPARAMETER(Yu)(2,2)), "TYu(2,2)/Yu(2,2)")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block Ad Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_MIXING_MATRIX(1, 1, (MODELPARAMETER(TYd)(0,0)/MODELPARAMETER(Yd)(0,0)), "TYd(0,0)/Yd(0,0)")
            << FORMAT_MIXING_MATRIX(2, 2, (MODELPARAMETER(TYd)(1,1)/MODELPARAMETER(Yd)(1,1)), "TYd(1,1)/Yd(1,1)")
            << FORMAT_MIXING_MATRIX(3, 3, (MODELPARAMETER(TYd)(2,2)/MODELPARAMETER(Yd)(2,2)), "TYd(2,2)/Yd(2,2)")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block Ae Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_MIXING_MATRIX(1, 1, (MODELPARAMETER(TYe)(0,0)/MODELPARAMETER(Ye)(0,0)), "TYe(0,0)/Ye(0,0)")
            << FORMAT_MIXING_MATRIX(2, 2, (MODELPARAMETER(TYe)(1,1)/MODELPARAMETER(Ye)(1,1)), "TYe(1,1)/Ye(1,1)")
            << FORMAT_MIXING_MATRIX(3, 3, (MODELPARAMETER(TYe)(2,2)/MODELPARAMETER(Ye)(2,2)), "TYe(2,2)/Ye(2,2)")
      ;
      slha_io.set_block(block);
   }
   {
      std::ostringstream block;
      block << "Block MSOFT Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(MassB)), "MassB")
            << FORMAT_ELEMENT(2, (MODELPARAMETER(MassWB)), "MassWB")
            << FORMAT_ELEMENT(3, (MODELPARAMETER(MassG)), "MassG")
            << FORMAT_ELEMENT(21, (MODELPARAMETER(mHd2)), "mHd2")
            << FORMAT_ELEMENT(22, (MODELPARAMETER(mHu2)), "mHu2")
            << FORMAT_ELEMENT(31, (Sqrt(MODELPARAMETER(ml2)(0,0))), "Sqrt(ml2(0,0))")
            << FORMAT_ELEMENT(32, (Sqrt(MODELPARAMETER(ml2)(1,1))), "Sqrt(ml2(1,1))")
            << FORMAT_ELEMENT(33, (Sqrt(MODELPARAMETER(ml2)(2,2))), "Sqrt(ml2(2,2))")
            << FORMAT_ELEMENT(34, (Sqrt(MODELPARAMETER(me2)(0,0))), "Sqrt(me2(0,0))")
            << FORMAT_ELEMENT(35, (Sqrt(MODELPARAMETER(me2)(1,1))), "Sqrt(me2(1,1))")
            << FORMAT_ELEMENT(36, (Sqrt(MODELPARAMETER(me2)(2,2))), "Sqrt(me2(2,2))")
            << FORMAT_ELEMENT(41, (Sqrt(MODELPARAMETER(mq2)(0,0))), "Sqrt(mq2(0,0))")
            << FORMAT_ELEMENT(42, (Sqrt(MODELPARAMETER(mq2)(1,1))), "Sqrt(mq2(1,1))")
            << FORMAT_ELEMENT(43, (Sqrt(MODELPARAMETER(mq2)(2,2))), "Sqrt(mq2(2,2))")
            << FORMAT_ELEMENT(44, (Sqrt(MODELPARAMETER(mu2)(0,0))), "Sqrt(mu2(0,0))")
            << FORMAT_ELEMENT(45, (Sqrt(MODELPARAMETER(mu2)(1,1))), "Sqrt(mu2(1,1))")
            << FORMAT_ELEMENT(46, (Sqrt(MODELPARAMETER(mu2)(2,2))), "Sqrt(mu2(2,2))")
            << FORMAT_ELEMENT(47, (Sqrt(MODELPARAMETER(md2)(0,0))), "Sqrt(md2(0,0))")
            << FORMAT_ELEMENT(48, (Sqrt(MODELPARAMETER(md2)(1,1))), "Sqrt(md2(1,1))")
            << FORMAT_ELEMENT(49, (Sqrt(MODELPARAMETER(md2)(2,2))), "Sqrt(md2(2,2))")
      ;
      slha_io.set_block(block);
   }

}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in BPMZ convention
 */
template <class T>
void MSSMatMGUT_slha_io::set_spectrum(const MSSMatMGUT<T>& model)
{
   const MSSMatMGUT_slha<T> model_slha(model);
   set_spectrum(model_slha);
}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in SLHA convention
 */
template <class T>
void MSSMatMGUT_slha_io::set_spectrum(const MSSMatMGUT_slha<T>& model)
{
   const MSSMatMGUT_physical physical(model.get_physical_slha());
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
