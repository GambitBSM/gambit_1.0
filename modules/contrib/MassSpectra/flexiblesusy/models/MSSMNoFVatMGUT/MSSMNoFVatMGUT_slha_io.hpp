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

// File generated at Wed 3 Dec 2014 11:46:01

#ifndef MSSMNoFVatMGUT_SLHA_IO_H
#define MSSMNoFVatMGUT_SLHA_IO_H

#include "MSSMNoFVatMGUT_two_scale_model_slha.hpp"
#include "MSSMNoFVatMGUT_info.hpp"
#include "MSSMNoFVatMGUT_physical.hpp"
#include "slha_io.hpp"
#include "ew_input.hpp"

#include <Eigen/Core>
#include <string>
#include <utility>

#define Pole(p) physical.p
#define PHYSICAL(p) model.get_physical().p
#define LOCALPHYSICAL(p) physical.p
#define MODELPARAMETER(p) model.get_##p()
#define DEFINE_PARAMETER(p)                                            \
   typename std::remove_const<typename std::remove_reference<decltype(MODELPARAMETER(p))>::type>::type p;
#define DEFINE_POLE_MASS(p)                                            \
   typename std::remove_const<typename std::remove_reference<decltype(PHYSICAL(p))>::type>::type p;
#define SM(p) Electroweak_constants::p

namespace flexiblesusy {

struct MSSMNoFVatMGUT_input_parameters;
class Spectrum_generator_settings;

class MSSMNoFVatMGUT_slha_io {
public:
   MSSMNoFVatMGUT_slha_io();
   ~MSSMNoFVatMGUT_slha_io() {}

   void clear();

   void fill(QedQcd& qedqcd) const { slha_io.fill(qedqcd); }
   void fill(MSSMNoFVatMGUT_input_parameters&) const;
   template <class T> void fill(MSSMNoFVatMGUT_slha<T>&) const;
   void fill(Spectrum_generator_settings&) const;
   double get_input_scale() const;
   double get_parameter_output_scale() const;
   const SLHA_io& get_slha_io() const { return slha_io; }
   void read_from_file(const std::string&);
   void set_extpar(const MSSMNoFVatMGUT_input_parameters&);
   template <class T> void set_extra(const MSSMNoFVatMGUT_slha<T>&);
   void set_minpar(const MSSMNoFVatMGUT_input_parameters&);
   void set_sminputs(const softsusy::QedQcd&);
   template <class T> void set_spectrum(const MSSMNoFVatMGUT_slha<T>&);
   template <class T> void set_spectrum(const MSSMNoFVatMGUT<T>&);
   void set_spinfo(const Problems<MSSMNoFVatMGUT_info::NUMBER_OF_PARTICLES>&);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& ostr = std::cout) { slha_io.write_to_stream(ostr); }

   static void fill_minpar_tuple(MSSMNoFVatMGUT_input_parameters&, int, double);
   static void fill_extpar_tuple(MSSMNoFVatMGUT_input_parameters&, int, double);
   static void fill_flexiblesusy_tuple(Spectrum_generator_settings&, int, double);

   static void convert_to_slha_convention(MSSMNoFVatMGUT_physical&);

   template <class T>
   static void fill_slhaea(SLHAea::Coll&, const MSSMNoFVatMGUT_slha<T>&, const QedQcd& qedqcd);

   template <class T>
   static SLHAea::Coll fill_slhaea(const MSSMNoFVatMGUT_slha<T>&, const QedQcd& qedqcd);

private:
   SLHA_io slha_io; ///< SLHA io class
   static unsigned const NUMBER_OF_DRBAR_BLOCKS = 14;
   static char const * const drbar_blocks[NUMBER_OF_DRBAR_BLOCKS];

   void set_mass(const MSSMNoFVatMGUT_physical&, bool);
   void set_mixing_matrices(const MSSMNoFVatMGUT_physical&, bool);
   template <class T> void set_model_parameters(const MSSMNoFVatMGUT_slha<T>&);
   double read_scale() const;
   template <class T> void fill_drbar_parameters(MSSMNoFVatMGUT_slha<T>&) const;
   template <class T> void fill_physical(MSSMNoFVatMGUT_slha<T>&) const;
};

/**
 * Reads DR-bar parameters, pole masses and mixing matrices from a
 * SLHA output file.
 */
template <class T>
void MSSMNoFVatMGUT_slha_io::fill(MSSMNoFVatMGUT_slha<T>& model) const
{
   fill_drbar_parameters(model);
   fill_physical(model);
}

/**
 * Reads DR-bar parameters from a SLHA output file.
 */
template <class T>
void MSSMNoFVatMGUT_slha_io::fill_drbar_parameters(MSSMNoFVatMGUT_slha<T>& model) const
{
   model.set_g1(slha_io.read_entry("gauge", 1) * 1.2909944487358056);
   model.set_g2(slha_io.read_entry("gauge", 2));
   model.set_g3(slha_io.read_entry("gauge", 3));
   {
      DEFINE_PARAMETER(Yu);
      slha_io.read_block("Yu", Yu);
      model.set_Yu(Yu);
   }
   {
      DEFINE_PARAMETER(Yd);
      slha_io.read_block("Yd", Yd);
      model.set_Yd(Yd);
   }
   {
      DEFINE_PARAMETER(Ye);
      slha_io.read_block("Ye", Ye);
      model.set_Ye(Ye);
   }
   {
      DEFINE_PARAMETER(TYe);
      slha_io.read_block("Te", TYe);
      model.set_TYe(TYe);
   }
   {
      DEFINE_PARAMETER(TYd);
      slha_io.read_block("Td", TYd);
      model.set_TYd(TYd);
   }
   {
      DEFINE_PARAMETER(TYu);
      slha_io.read_block("Tu", TYu);
      model.set_TYu(TYu);
   }
   model.set_Mu(slha_io.read_entry("HMIX", 1));
   model.set_BMu(slha_io.read_entry("HMIX", 101));
   {
      DEFINE_PARAMETER(mq2);
      slha_io.read_block("MSQ2", mq2);
      model.set_mq2(mq2);
   }
   {
      DEFINE_PARAMETER(me2);
      slha_io.read_block("MSE2", me2);
      model.set_me2(me2);
   }
   {
      DEFINE_PARAMETER(ml2);
      slha_io.read_block("MSL2", ml2);
      model.set_ml2(ml2);
   }
   {
      DEFINE_PARAMETER(mu2);
      slha_io.read_block("MSU2", mu2);
      model.set_mu2(mu2);
   }
   {
      DEFINE_PARAMETER(md2);
      slha_io.read_block("MSD2", md2);
      model.set_md2(md2);
   }
   model.set_mHd2(slha_io.read_entry("MSOFT", 21));
   model.set_mHu2(slha_io.read_entry("MSOFT", 22));
   model.set_MassB(slha_io.read_entry("MSOFT", 1));
   model.set_MassWB(slha_io.read_entry("MSOFT", 2));
   model.set_MassG(slha_io.read_entry("MSOFT", 3));
   model.set_vd(slha_io.read_entry("HMIX", 102));
   model.set_vu(slha_io.read_entry("HMIX", 103));


   model.set_scale(read_scale());
}

/**
 * Reads pole masses and mixing matrices from a SLHA output file.
 */
template <class T>
void MSSMNoFVatMGUT_slha_io::fill_physical(MSSMNoFVatMGUT_slha<T>& model) const
{
   {
      DEFINE_PARAMETER(ZH);
      slha_io.read_block("SCALARMIX", ZH);
      PHYSICAL(ZH) = ZH;
   }
   {
      DEFINE_PARAMETER(ZA);
      slha_io.read_block("PSEUDOSCALARMIX", ZA);
      PHYSICAL(ZA) = ZA;
   }
   {
      DEFINE_PARAMETER(ZP);
      slha_io.read_block("CHARGEMIX", ZP);
      PHYSICAL(ZP) = ZP;
   }
   {
      DEFINE_PARAMETER(ZN);
      slha_io.read_block("NMIX", ZN);
      PHYSICAL(ZN) = ZN;
   }
   {
      DEFINE_PARAMETER(UP);
      slha_io.read_block("VMIX", UP);
      PHYSICAL(UP) = UP;
   }
   {
      DEFINE_PARAMETER(UM);
      slha_io.read_block("UMIX", UM);
      PHYSICAL(UM) = UM;
   }
   {
      DEFINE_PARAMETER(ZD);
      slha_io.read_block("sdownmix", ZD);
      PHYSICAL(ZD) = ZD;
   }
   {
      DEFINE_PARAMETER(ZS);
      slha_io.read_block("sstrmix", ZS);
      PHYSICAL(ZS) = ZS;
   }
   {
      DEFINE_PARAMETER(ZB);
      slha_io.read_block("sbotmix", ZB);
      PHYSICAL(ZB) = ZB;
   }
   {
      DEFINE_PARAMETER(ZU);
      slha_io.read_block("supmix", ZU);
      PHYSICAL(ZU) = ZU;
   }
   {
      DEFINE_PARAMETER(ZC);
      slha_io.read_block("scharmmix", ZC);
      PHYSICAL(ZC) = ZC;
   }
   {
      DEFINE_PARAMETER(ZT);
      slha_io.read_block("stopmix", ZT);
      PHYSICAL(ZT) = ZT;
   }
   {
      DEFINE_PARAMETER(ZE);
      slha_io.read_block("selemix", ZE);
      PHYSICAL(ZE) = ZE;
   }
   {
      DEFINE_PARAMETER(ZM);
      slha_io.read_block("smumix", ZM);
      PHYSICAL(ZM) = ZM;
   }
   {
      DEFINE_PARAMETER(ZTau);
      slha_io.read_block("staumix", ZTau);
      PHYSICAL(ZTau) = ZTau;
   }

   PHYSICAL(MVG) = slha_io.read_entry("MASS", 21);
   PHYSICAL(MGlu) = slha_io.read_entry("MASS", 1000021);
   PHYSICAL(MVP) = slha_io.read_entry("MASS", 22);
   PHYSICAL(MVZ) = slha_io.read_entry("MASS", 23);
   PHYSICAL(MFd) = slha_io.read_entry("MASS", 1);
   PHYSICAL(MFs) = slha_io.read_entry("MASS", 3);
   PHYSICAL(MFb) = slha_io.read_entry("MASS", 5);
   PHYSICAL(MFu) = slha_io.read_entry("MASS", 2);
   PHYSICAL(MFc) = slha_io.read_entry("MASS", 4);
   PHYSICAL(MFt) = slha_io.read_entry("MASS", 6);
   PHYSICAL(MFve) = slha_io.read_entry("MASS", 12);
   PHYSICAL(MFvm) = slha_io.read_entry("MASS", 14);
   PHYSICAL(MFvt) = slha_io.read_entry("MASS", 16);
   PHYSICAL(MFe) = slha_io.read_entry("MASS", 11);
   PHYSICAL(MFm) = slha_io.read_entry("MASS", 13);
   PHYSICAL(MFtau) = slha_io.read_entry("MASS", 15);
   PHYSICAL(MSveL) = slha_io.read_entry("MASS", 1000012);
   PHYSICAL(MSvmL) = slha_io.read_entry("MASS", 1000014);
   PHYSICAL(MSvtL) = slha_io.read_entry("MASS", 1000016);
   PHYSICAL(MSd)(0) = slha_io.read_entry("MASS", 1000001);
   PHYSICAL(MSd)(1) = slha_io.read_entry("MASS", 20000015);
   PHYSICAL(MSu)(0) = slha_io.read_entry("MASS", 1000002);
   PHYSICAL(MSu)(1) = slha_io.read_entry("MASS", 2000002);
   PHYSICAL(MSe)(0) = slha_io.read_entry("MASS", 1000011);
   PHYSICAL(MSe)(1) = slha_io.read_entry("MASS", 2000011);
   PHYSICAL(MSm)(0) = slha_io.read_entry("MASS", 1000013);
   PHYSICAL(MSm)(1) = slha_io.read_entry("MASS", 2000013);
   PHYSICAL(MStau)(0) = slha_io.read_entry("MASS", 1000015);
   PHYSICAL(MStau)(1) = slha_io.read_entry("MASS", 2000015);
   PHYSICAL(MSs)(0) = slha_io.read_entry("MASS", 1000003);
   PHYSICAL(MSs)(1) = slha_io.read_entry("MASS", 2000003);
   PHYSICAL(MSc)(0) = slha_io.read_entry("MASS", 1000004);
   PHYSICAL(MSc)(1) = slha_io.read_entry("MASS", 2000004);
   PHYSICAL(MSb)(0) = slha_io.read_entry("MASS", 1000005);
   PHYSICAL(MSb)(1) = slha_io.read_entry("MASS", 2000005);
   PHYSICAL(MSt)(0) = slha_io.read_entry("MASS", 1000006);
   PHYSICAL(MSt)(1) = slha_io.read_entry("MASS", 2000006);
   PHYSICAL(Mhh)(0) = slha_io.read_entry("MASS", 25);
   PHYSICAL(Mhh)(1) = slha_io.read_entry("MASS", 35);
   PHYSICAL(MAh)(1) = slha_io.read_entry("MASS", 36);
   PHYSICAL(MHpm)(1) = slha_io.read_entry("MASS", 37);
   PHYSICAL(MChi)(0) = slha_io.read_entry("MASS", 1000022);
   PHYSICAL(MChi)(1) = slha_io.read_entry("MASS", 1000023);
   PHYSICAL(MChi)(2) = slha_io.read_entry("MASS", 1000025);
   PHYSICAL(MChi)(3) = slha_io.read_entry("MASS", 1000035);
   PHYSICAL(MCha)(0) = slha_io.read_entry("MASS", 1000024);
   PHYSICAL(MCha)(1) = slha_io.read_entry("MASS", 1000037);
   PHYSICAL(MVWm) = slha_io.read_entry("MASS", 24);

}

template <class T>
void MSSMNoFVatMGUT_slha_io::fill_slhaea(SLHAea::Coll& slhaea, const MSSMNoFVatMGUT_slha<T>& model, const QedQcd& qedqcd)
{
   MSSMNoFVatMGUT_slha_io slha_io;
   const MSSMNoFVatMGUT_input_parameters& input = model.get_input();
   const Problems<MSSMNoFVatMGUT_info::NUMBER_OF_PARTICLES>& problems
      = model.get_problems();
   const bool error = problems.have_problem();

   slha_io.set_spinfo(problems);
   slha_io.set_sminputs(qedqcd);
   slha_io.set_minpar(input);
   slha_io.set_extpar(input);
   if (!error) {
      slha_io.set_spectrum(model);
      slha_io.set_extra(model);
   }

   slhaea = slha_io.get_slha_io().get_data();
}

template <class T>
SLHAea::Coll MSSMNoFVatMGUT_slha_io::fill_slhaea(const MSSMNoFVatMGUT_slha<T>& model, const QedQcd& qedqcd)
{
   SLHAea::Coll slhaea;
   MSSMNoFVatMGUT_slha_io::fill_slhaea(slhaea, model, qedqcd);

   return slhaea;
}

/**
 * Stores the model (DR-bar) parameters in the SLHA object.
 *
 * @param model model class
 */
template <class T>
void MSSMNoFVatMGUT_slha_io::set_model_parameters(const MSSMNoFVatMGUT_slha<T>& model)
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
   slha_io.set_block("Yu", MODELPARAMETER(Yu), "Yu", model.get_scale());
   slha_io.set_block("Yd", MODELPARAMETER(Yd), "Yd", model.get_scale());
   slha_io.set_block("Ye", MODELPARAMETER(Ye), "Ye", model.get_scale());
   slha_io.set_block("Te", MODELPARAMETER(TYe), "TYe", model.get_scale());
   slha_io.set_block("Td", MODELPARAMETER(TYd), "TYd", model.get_scale());
   slha_io.set_block("Tu", MODELPARAMETER(TYu), "TYu", model.get_scale());
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
   slha_io.set_block("MSQ2", MODELPARAMETER(mq2), "mq2", model.get_scale());
   slha_io.set_block("MSE2", MODELPARAMETER(me2), "me2", model.get_scale());
   slha_io.set_block("MSL2", MODELPARAMETER(ml2), "ml2", model.get_scale());
   slha_io.set_block("MSU2", MODELPARAMETER(mu2), "mu2", model.get_scale());
   slha_io.set_block("MSD2", MODELPARAMETER(md2), "md2", model.get_scale());
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
void MSSMNoFVatMGUT_slha_io::set_extra(const MSSMNoFVatMGUT_slha<T>& model)
{
   const MSSMNoFVatMGUT_physical physical(model.get_physical_slha());

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
   {
      std::ostringstream block;
      block << "Block MASS Q= " << FORMAT_SCALE(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1000021, (Pole(MGlu)), "Pole(MGlu)")
            << FORMAT_ELEMENT(1000012, (Pole(MSveL)), "Pole(MSveL)")
            << FORMAT_ELEMENT(1000014, (Pole(MSvmL)), "Pole(MSvmL)")
            << FORMAT_ELEMENT(1000016, (Pole(MSvtL)), "Pole(MSvtL)")
            << FORMAT_ELEMENT(1000024, (Pole(MCha(0))), "Pole(MCha(0))")
            << FORMAT_ELEMENT(1000037, (Pole(MCha(1))), "Pole(MCha(1))")
            << FORMAT_ELEMENT(25, (Pole(Mhh(0))), "Pole(Mhh(0))")
            << FORMAT_ELEMENT(35, (Pole(Mhh(1))), "Pole(Mhh(1))")
            << FORMAT_ELEMENT(37, (Pole(MHpm(1))), "Pole(MHpm(1))")
            << FORMAT_ELEMENT(36, (Pole(MAh(1))), "Pole(MAh(1))")
            << FORMAT_ELEMENT(1000001, (AbsSqr(Pole(ZD(0,0)))*Pole(MSd(0)) + AbsSqr(Pole(ZD(1,0)))*Pole(MSd(1))), "AbsSqr(Pole(ZD(0,0)))*Pole(MSd(0)) + AbsSqr(Pole(ZD(1,0)))*Pole(MSd(1))")
            << FORMAT_ELEMENT(2000001, (AbsSqr(Pole(ZD(0,1)))*Pole(MSd(0)) + AbsSqr(Pole(ZD(1,1)))*Pole(MSd(1))), "AbsSqr(Pole(ZD(0,1)))*Pole(MSd(0)) + AbsSqr(Pole(ZD(1,1)))*Pole(MSd(1))")
            << FORMAT_ELEMENT(1000003, (AbsSqr(Pole(ZS(0,0)))*Pole(MSs(0)) + AbsSqr(Pole(ZS(1,0)))*Pole(MSs(1))), "AbsSqr(Pole(ZS(0,0)))*Pole(MSs(0)) + AbsSqr(Pole(ZS(1,0)))*Pole(MSs(1))")
            << FORMAT_ELEMENT(2000003, (AbsSqr(Pole(ZS(0,1)))*Pole(MSs(0)) + AbsSqr(Pole(ZS(1,1)))*Pole(MSs(1))), "AbsSqr(Pole(ZS(0,1)))*Pole(MSs(0)) + AbsSqr(Pole(ZS(1,1)))*Pole(MSs(1))")
            << FORMAT_ELEMENT(1000005, (Pole(MSb(0))), "Pole(MSb(0))")
            << FORMAT_ELEMENT(2000005, (Pole(MSb(1))), "Pole(MSb(1))")
            << FORMAT_ELEMENT(1000011, (AbsSqr(Pole(ZE(0,0)))*Pole(MSe(0)) + AbsSqr(Pole(ZE(1,0)))*Pole(MSe(1))), "AbsSqr(Pole(ZE(0,0)))*Pole(MSe(0)) + AbsSqr(Pole(ZE(1,0)))*Pole(MSe(1))")
            << FORMAT_ELEMENT(2000011, (AbsSqr(Pole(ZE(0,1)))*Pole(MSe(0)) + AbsSqr(Pole(ZE(1,1)))*Pole(MSe(1))), "AbsSqr(Pole(ZE(0,1)))*Pole(MSe(0)) + AbsSqr(Pole(ZE(1,1)))*Pole(MSe(1))")
            << FORMAT_ELEMENT(1000013, (AbsSqr(Pole(ZM(0,0)))*Pole(MSm(0)) + AbsSqr(Pole(ZM(1,0)))*Pole(MSm(1))), "AbsSqr(Pole(ZM(0,0)))*Pole(MSm(0)) + AbsSqr(Pole(ZM(1,0)))*Pole(MSm(1))")
            << FORMAT_ELEMENT(2000013, (AbsSqr(Pole(ZM(0,1)))*Pole(MSm(0)) + AbsSqr(Pole(ZM(1,1)))*Pole(MSm(1))), "AbsSqr(Pole(ZM(0,1)))*Pole(MSm(0)) + AbsSqr(Pole(ZM(1,1)))*Pole(MSm(1))")
            << FORMAT_ELEMENT(1000015, (Pole(MStau(0))), "Pole(MStau(0))")
            << FORMAT_ELEMENT(2000015, (Pole(MStau(1))), "Pole(MStau(1))")
            << FORMAT_ELEMENT(1000002, (AbsSqr(Pole(ZU(0,0)))*Pole(MSu(0)) + AbsSqr(Pole(ZU(1,0)))*Pole(MSu(1))), "AbsSqr(Pole(ZU(0,0)))*Pole(MSu(0)) + AbsSqr(Pole(ZU(1,0)))*Pole(MSu(1))")
            << FORMAT_ELEMENT(2000002, (AbsSqr(Pole(ZU(0,1)))*Pole(MSu(0)) + AbsSqr(Pole(ZU(1,1)))*Pole(MSu(1))), "AbsSqr(Pole(ZU(0,1)))*Pole(MSu(0)) + AbsSqr(Pole(ZU(1,1)))*Pole(MSu(1))")
            << FORMAT_ELEMENT(1000004, (AbsSqr(Pole(ZC(0,0)))*Pole(MSc(0)) + AbsSqr(Pole(ZC(1,0)))*Pole(MSc(1))), "AbsSqr(Pole(ZC(0,0)))*Pole(MSc(0)) + AbsSqr(Pole(ZC(1,0)))*Pole(MSc(1))")
            << FORMAT_ELEMENT(2000004, (AbsSqr(Pole(ZC(0,1)))*Pole(MSc(0)) + AbsSqr(Pole(ZC(1,1)))*Pole(MSc(1))), "AbsSqr(Pole(ZC(0,1)))*Pole(MSc(0)) + AbsSqr(Pole(ZC(1,1)))*Pole(MSc(1))")
            << FORMAT_ELEMENT(1000006, (Pole(MSt(0))), "Pole(MSt(0))")
            << FORMAT_ELEMENT(2000006, (Pole(MSt(1))), "Pole(MSt(1))")
            << FORMAT_ELEMENT(1000022, (Pole(MChi(0))), "Pole(MChi(0))")
            << FORMAT_ELEMENT(1000023, (Pole(MChi(1))), "Pole(MChi(1))")
            << FORMAT_ELEMENT(1000025, (Pole(MChi(2))), "Pole(MChi(2))")
            << FORMAT_ELEMENT(1000035, (Pole(MChi(3))), "Pole(MChi(3))")
            << FORMAT_ELEMENT(24, (SM(MW)), "SM(MW)")
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
void MSSMNoFVatMGUT_slha_io::set_spectrum(const MSSMNoFVatMGUT<T>& model)
{
   const MSSMNoFVatMGUT_slha<T> model_slha(model);
   set_spectrum(model_slha);
}

/**
 * Stores the model (DR-bar) parameters, masses and mixing matrices in
 * the SLHA object.
 *
 * @param model model class in SLHA convention
 */
template <class T>
void MSSMNoFVatMGUT_slha_io::set_spectrum(const MSSMNoFVatMGUT_slha<T>& model)
{
   const MSSMNoFVatMGUT_physical physical(model.get_physical_slha());
   const bool write_sm_masses = model.do_calculate_sm_pole_masses();

   set_model_parameters(model);
   set_mass(physical, write_sm_masses);
   set_mixing_matrices(physical, write_sm_masses);
}

} // namespace flexiblesusy

#endif
