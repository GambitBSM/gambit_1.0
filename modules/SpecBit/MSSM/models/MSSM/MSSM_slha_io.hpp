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

#ifndef MSSM_SLHA_IO_H
#define MSSM_SLHA_IO_H

#include "MSSM_two_scale_model.hpp"
#include "MSSM_info.hpp"
#include "slha_io.hpp"

#include <Eigen/Core>
#include <string>
#include <utility>

#define PHYSICAL(p) model.get_physical().p
#define MODELPARAMETER(p) model.get_##p()
#define DEFINE_PARAMETER(p)                                            \
   typename std::remove_const<typename std::remove_reference<decltype(MODELPARAMETER(p))>::type>::type p;

namespace flexiblesusy {

struct MSSM_input_parameters;
class Spectrum_generator_settings;

class MSSM_slha_io {
public:
   MSSM_slha_io();
   ~MSSM_slha_io() {}

   void clear();

   void fill(QedQcd& qedqcd) const { slha_io.fill(qedqcd); }
   void fill(MSSM_input_parameters&) const;
   template <class T> void fill(MSSM<T>&) const;
   void fill(Spectrum_generator_settings&) const;
   double get_input_scale() const;
   double get_parameter_output_scale() const;
   void read_from_file(const std::string&);
   void set_extpar(const MSSM_input_parameters&);
   void set_minpar(const MSSM_input_parameters&);
   void set_sminputs(const softsusy::QedQcd&);
   template <class T> void set_spectrum(const MSSM<T>&);
   void set_spinfo(const Problems<MSSM_info::NUMBER_OF_PARTICLES>&);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& ostr = std::cout) { slha_io.write_to_stream(ostr); }

   static void fill_minpar_tuple(MSSM_input_parameters&, int, double);
   static void fill_extpar_tuple(MSSM_input_parameters&, int, double);
   static void fill_flexiblesusy_tuple(Spectrum_generator_settings&, int, double);

private:
   SLHA_io slha_io; ///< SLHA io class

   template <class T> void set_mass(const MSSM<T>&);
   template <class T> void set_mixing_matrices(const MSSM<T>&);
   template <class T> void set_model_parameters(const MSSM<T>&);
};

/**
 * Reads all model parameters from a SLHA output file.
 */
template <class T>
void MSSM_slha_io::fill(MSSM<T>& model) const
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

}

template <class T>
void MSSM_slha_io::set_mass(const MSSM<T>& model)
{
   const auto MVG = PHYSICAL(MVG);
   const auto MGlu = PHYSICAL(MGlu);
   const auto MFv = PHYSICAL(MFv);
   const auto MVP = PHYSICAL(MVP);
   const auto MVZ = PHYSICAL(MVZ);
   const auto MSd = PHYSICAL(MSd);
   const auto MSv = PHYSICAL(MSv);
   const auto MSu = PHYSICAL(MSu);
   const auto MSe = PHYSICAL(MSe);
   const auto Mhh = PHYSICAL(Mhh);
   const auto MAh = PHYSICAL(MAh);
   const auto MHpm = PHYSICAL(MHpm);
   const auto MChi = PHYSICAL(MChi);
   const auto MCha = PHYSICAL(MCha);
   const auto MFe = PHYSICAL(MFe);
   const auto MFd = PHYSICAL(MFd);
   const auto MFu = PHYSICAL(MFu);
   const auto MVWm = PHYSICAL(MVWm);

   std::ostringstream mass;

   mass << "Block MASS\n"
      << FORMAT_MASS(1000021, MGlu, "Glu")
      << FORMAT_MASS(1000024, MCha(0), "Cha_1")
      << FORMAT_MASS(1000037, MCha(1), "Cha_2")
      << FORMAT_MASS(25, Mhh(0), "hh_1")
      << FORMAT_MASS(35, Mhh(1), "hh_2")
      << FORMAT_MASS(37, MHpm(1), "Hpm_2")
      << FORMAT_MASS(36, MAh(1), "Ah_2")
      << FORMAT_MASS(1000012, MSv(0), "Sv_1")
      << FORMAT_MASS(1000014, MSv(1), "Sv_2")
      << FORMAT_MASS(1000016, MSv(2), "Sv_3")
      << FORMAT_MASS(1000022, MChi(0), "Chi_1")
      << FORMAT_MASS(1000023, MChi(1), "Chi_2")
      << FORMAT_MASS(1000025, MChi(2), "Chi_3")
      << FORMAT_MASS(1000035, MChi(3), "Chi_4")
      << FORMAT_MASS(1000001, MSd(0), "Sd_1")
      << FORMAT_MASS(1000003, MSd(1), "Sd_2")
      << FORMAT_MASS(1000005, MSd(2), "Sd_3")
      << FORMAT_MASS(2000001, MSd(3), "Sd_4")
      << FORMAT_MASS(2000003, MSd(4), "Sd_5")
      << FORMAT_MASS(2000005, MSd(5), "Sd_6")
      << FORMAT_MASS(1000011, MSe(0), "Se_1")
      << FORMAT_MASS(1000013, MSe(1), "Se_2")
      << FORMAT_MASS(1000015, MSe(2), "Se_3")
      << FORMAT_MASS(2000011, MSe(3), "Se_4")
      << FORMAT_MASS(2000013, MSe(4), "Se_5")
      << FORMAT_MASS(2000015, MSe(5), "Se_6")
      << FORMAT_MASS(1000002, MSu(0), "Su_1")
      << FORMAT_MASS(1000004, MSu(1), "Su_2")
      << FORMAT_MASS(1000006, MSu(2), "Su_3")
      << FORMAT_MASS(2000002, MSu(3), "Su_4")
      << FORMAT_MASS(2000004, MSu(4), "Su_5")
      << FORMAT_MASS(2000006, MSu(5), "Su_6")
   ;

   if (model.do_calculate_sm_pole_masses()) {
      mass
         << FORMAT_MASS(21, MVG, "VG")
         << FORMAT_MASS(12, MFv(0), "Fv_1")
         << FORMAT_MASS(14, MFv(1), "Fv_2")
         << FORMAT_MASS(16, MFv(2), "Fv_3")
         << FORMAT_MASS(22, MVP, "VP")
         << FORMAT_MASS(23, MVZ, "VZ")
         << FORMAT_MASS(11, MFe(0), "Fe_1")
         << FORMAT_MASS(13, MFe(1), "Fe_2")
         << FORMAT_MASS(15, MFe(2), "Fe_3")
         << FORMAT_MASS(1, MFd(0), "Fd_1")
         << FORMAT_MASS(3, MFd(1), "Fd_2")
         << FORMAT_MASS(5, MFd(2), "Fd_3")
         << FORMAT_MASS(2, MFu(0), "Fu_1")
         << FORMAT_MASS(4, MFu(1), "Fu_2")
         << FORMAT_MASS(6, MFu(2), "Fu_3")
         << FORMAT_MASS(24, MVWm, "VWm")
      ;
   }

   slha_io.set_block(mass);

}

template <class T>
void MSSM_slha_io::set_mixing_matrices(const MSSM<T>& model)
{
   slha_io.set_block("UMIX", PHYSICAL(UM), "UM");
   slha_io.set_block("VMIX", PHYSICAL(UP), "UP");
   slha_io.set_block("PSEUDOSCALARMIX", PHYSICAL(ZA), "ZA");
   slha_io.set_block("DSQMIX", PHYSICAL(ZD), "ZD");
   slha_io.set_block("SELMIX", PHYSICAL(ZE), "ZE");
   slha_io.set_block("SCALARMIX", PHYSICAL(ZH), "ZH");
   slha_io.set_block("NMIX", PHYSICAL(ZN), "ZN");
   slha_io.set_block("CHARGEMIX", PHYSICAL(ZP), "ZP");
   slha_io.set_block("USQMIX", PHYSICAL(ZU), "ZU");
   slha_io.set_block("SNUMIX", PHYSICAL(ZV), "ZV");

   if (model.do_calculate_sm_pole_masses()) {
      slha_io.set_block("UELMIX", PHYSICAL(ZEL), "ZEL");
      slha_io.set_block("UERMIX", PHYSICAL(ZER), "ZER");
      slha_io.set_block("UDLMIX", PHYSICAL(ZDL), "ZDL");
      slha_io.set_block("UDRMIX", PHYSICAL(ZDR), "ZDR");
      slha_io.set_block("UULMIX", PHYSICAL(ZUL), "ZUL");
      slha_io.set_block("UURMIX", PHYSICAL(ZUR), "ZUR");
   }

}

template <class T>
void MSSM_slha_io::set_model_parameters(const MSSM<T>& model)
{
   {
      std::ostringstream block;
      block << "Block gauge Q= " << FORMAT_NUMBER(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, (MODELPARAMETER(g1) * 0.7745966692414834), "gY")
            << FORMAT_ELEMENT(2, MODELPARAMETER(g2), "g2")
            << FORMAT_ELEMENT(3, MODELPARAMETER(g3), "g3");
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
      block << "Block HMIX Q= " << FORMAT_NUMBER(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(1, MODELPARAMETER(Mu), "Mu")
            << FORMAT_ELEMENT(101, MODELPARAMETER(BMu), "BMu")
            << FORMAT_ELEMENT(102, MODELPARAMETER(vd), "vd")
            << FORMAT_ELEMENT(103, MODELPARAMETER(vu), "vu");
      slha_io.set_block(block);
   }
   slha_io.set_block("MSQ2", MODELPARAMETER(mq2), "mq2", model.get_scale());
   slha_io.set_block("MSE2", MODELPARAMETER(me2), "me2", model.get_scale());
   slha_io.set_block("MSL2", MODELPARAMETER(ml2), "ml2", model.get_scale());
   slha_io.set_block("MSU2", MODELPARAMETER(mu2), "mu2", model.get_scale());
   slha_io.set_block("MSD2", MODELPARAMETER(md2), "md2", model.get_scale());
   {
      std::ostringstream block;
      block << "Block MSOFT Q= " << FORMAT_NUMBER(model.get_scale()) << '\n'
            << FORMAT_ELEMENT(21, MODELPARAMETER(mHd2), "mHd2")
            << FORMAT_ELEMENT(22, MODELPARAMETER(mHu2), "mHu2")
            << FORMAT_ELEMENT(1, MODELPARAMETER(MassB), "MassB")
            << FORMAT_ELEMENT(2, MODELPARAMETER(MassWB), "MassWB")
            << FORMAT_ELEMENT(3, MODELPARAMETER(MassG), "MassG");
      slha_io.set_block(block);
   }

}

template <class T>
void MSSM_slha_io::set_spectrum(const MSSM<T>& model)
{
   set_model_parameters(model);
   set_mass(model);
   set_mixing_matrices(model);
}

} // namespace flexiblesusy

#endif
