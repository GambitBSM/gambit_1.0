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

// File generated at Fri 16 Jan 2015 12:51:35

#include "MSSMNoFV_slha_io.hpp"
#include "MSSMNoFV_input_parameters.hpp"
#include "logger.hpp"
#include "wrappers.hpp"
#include "numerics.hpp"
#include "spectrum_generator_settings.hpp"
#include "lowe.h"
#include "config.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <boost/bind.hpp>

using namespace softsusy;

namespace flexiblesusy {

char const * const MSSMNoFV_slha_io::drbar_blocks[NUMBER_OF_DRBAR_BLOCKS] =
   { "gauge", "Yu", "Yd", "Ye", "Te", "Td", "Tu", "HMIX", "MSQ2", "MSE2",
   "MSL2", "MSU2", "MSD2", "MSOFT" }
;

MSSMNoFV_slha_io::MSSMNoFV_slha_io()
   : slha_io()
{
}

void MSSMNoFV_slha_io::clear()
{
   slha_io.clear();
}

/**
 * Stores the EXTPAR input parameters in the SLHA object.
 *
 * @param input struct of input parameters
 */
void MSSMNoFV_slha_io::set_extpar(const MSSMNoFV_input_parameters& input)
{
   std::ostringstream extpar;

   extpar << "Block EXTPAR\n";
   extpar << FORMAT_ELEMENT(0, input.Qin, "Qin");
   extpar << FORMAT_ELEMENT(1, input.M1, "M1");
   extpar << FORMAT_ELEMENT(2, input.M2, "M2");
   extpar << FORMAT_ELEMENT(3, input.M3, "M3");
   extpar << FORMAT_ELEMENT(11, input.AtIN, "AtIN");
   extpar << FORMAT_ELEMENT(12, input.AbIN, "AbIN");
   extpar << FORMAT_ELEMENT(13, input.AtauIN, "AtauIN");
   extpar << FORMAT_ELEMENT(14, input.AcIN, "AcIN");
   extpar << FORMAT_ELEMENT(15, input.AsIN, "AsIN");
   extpar << FORMAT_ELEMENT(16, input.AmuonIN, "AmuonIN");
   extpar << FORMAT_ELEMENT(17, input.AuIN, "AuIN");
   extpar << FORMAT_ELEMENT(18, input.AdIN, "AdIN");
   extpar << FORMAT_ELEMENT(19, input.AeIN, "AeIN");
   extpar << FORMAT_ELEMENT(21, input.mHd2IN, "mHd2IN");
   extpar << FORMAT_ELEMENT(22, input.mHu2IN, "mHu2IN");
   extpar << FORMAT_ELEMENT(31, input.ml11IN, "ml11IN");
   extpar << FORMAT_ELEMENT(32, input.ml22IN, "ml22IN");
   extpar << FORMAT_ELEMENT(33, input.ml33IN, "ml33IN");
   extpar << FORMAT_ELEMENT(34, input.me11IN, "me11IN");
   extpar << FORMAT_ELEMENT(35, input.me22IN, "me22IN");
   extpar << FORMAT_ELEMENT(36, input.me33IN, "me33IN");
   extpar << FORMAT_ELEMENT(41, input.mq11IN, "mq11IN");
   extpar << FORMAT_ELEMENT(42, input.mq22IN, "mq22IN");
   extpar << FORMAT_ELEMENT(43, input.mq33IN, "mq33IN");
   extpar << FORMAT_ELEMENT(44, input.mu11IN, "mu11IN");
   extpar << FORMAT_ELEMENT(45, input.mu22IN, "mu22IN");
   extpar << FORMAT_ELEMENT(46, input.mu33IN, "mu33IN");
   extpar << FORMAT_ELEMENT(47, input.md11IN, "md11IN");
   extpar << FORMAT_ELEMENT(48, input.md22IN, "md22IN");
   extpar << FORMAT_ELEMENT(49, input.md33IN, "md33IN");
   slha_io.set_block(extpar);

}

/**
 * Stores the MINPAR input parameters in the SLHA object.
 *
 * @param input struct of input parameters
 */
void MSSMNoFV_slha_io::set_minpar(const MSSMNoFV_input_parameters& input)
{
   std::ostringstream minpar;

   minpar << "Block MINPAR\n";
   minpar << FORMAT_ELEMENT(3, input.TanBeta, "TanBeta");
   minpar << FORMAT_ELEMENT(4, input.SignMu, "SignMu");
   slha_io.set_block(minpar);

}

/**
 * Stores the SMINPUTS input parameters in the SLHA object.
 *
 * @param qedqcd class of Standard Model parameters
 */
void MSSMNoFV_slha_io::set_sminputs(const softsusy::QedQcd& qedqcd)
{
   slha_io.set_sminputs(qedqcd);
}

/**
 * Stores the spectrum generator information in the SPINFO block in
 * the SLHA object.
 *
 * @param problems struct with parameter point problems
 */
void MSSMNoFV_slha_io::set_spinfo(const Problems<MSSMNoFV_info::NUMBER_OF_PARTICLES>& problems)
{
   std::ostringstream spinfo;
   spinfo << "Block SPINFO\n"
          << FORMAT_SPINFO(1, PKGNAME)
          << FORMAT_SPINFO(2, FLEXIBLESUSY_VERSION);

   if (problems.have_warning()) {
      std::ostringstream warnings;
      problems.print_warnings(warnings);
      spinfo << FORMAT_SPINFO(3, warnings.str());
   }

   if (problems.have_problem()) {
      std::ostringstream problems_str;
      problems.print_problems(problems_str);
      spinfo << FORMAT_SPINFO(4, problems_str.str());
   }

   slha_io.set_block(spinfo, SLHA_io::front);
}

/**
 * Stores the particle masses in the SLHA object.
 *
 * @param physical struct of physical parameters
 *
 * @param write_sm_masses flag to indicate if Standard Model
 *    particle masses should be written as well
 */
void MSSMNoFV_slha_io::set_mass(const MSSMNoFV_physical& physical,
                                   bool write_sm_masses)
{
   std::ostringstream mass;

   mass << "Block MASS\n"
      << FORMAT_MASS(1000021, LOCALPHYSICAL(MGlu), "Glu")
      << FORMAT_MASS(24, SM(MW), "VWm")
      << FORMAT_MASS(1000012, LOCALPHYSICAL(MSveL), "SveL")
      << FORMAT_MASS(1000014, LOCALPHYSICAL(MSvmL), "SvmL")
      << FORMAT_MASS(1000016, LOCALPHYSICAL(MSvtL), "SvtL")
      << FORMAT_MASS(1000024, LOCALPHYSICAL(MCha(0)), "Cha(1)")
      << FORMAT_MASS(1000037, LOCALPHYSICAL(MCha(1)), "Cha(2)")
      << FORMAT_MASS(25, LOCALPHYSICAL(Mhh(0)), "hh(1)")
      << FORMAT_MASS(35, LOCALPHYSICAL(Mhh(1)), "hh(2)")
      << FORMAT_MASS(37, LOCALPHYSICAL(MHpm(1)), "Hpm(2)")
      << FORMAT_MASS(36, LOCALPHYSICAL(MAh(1)), "Ah(2)")
      << FORMAT_MASS(1000001, LOCALPHYSICAL(MSd(0)), "Sd(1)")
      << FORMAT_MASS(20000015, LOCALPHYSICAL(MSd(1)), "Sd(2)")
      << FORMAT_MASS(1000003, LOCALPHYSICAL(MSs(0)), "Ss(1)")
      << FORMAT_MASS(2000003, LOCALPHYSICAL(MSs(1)), "Ss(2)")
      << FORMAT_MASS(1000005, LOCALPHYSICAL(MSb(0)), "Sb(1)")
      << FORMAT_MASS(2000005, LOCALPHYSICAL(MSb(1)), "Sb(2)")
      << FORMAT_MASS(1000011, LOCALPHYSICAL(MSe(0)), "Se(1)")
      << FORMAT_MASS(2000011, LOCALPHYSICAL(MSe(1)), "Se(2)")
      << FORMAT_MASS(1000013, LOCALPHYSICAL(MSm(0)), "Sm(1)")
      << FORMAT_MASS(2000013, LOCALPHYSICAL(MSm(1)), "Sm(2)")
      << FORMAT_MASS(1000015, LOCALPHYSICAL(MStau(0)), "Stau(1)")
      << FORMAT_MASS(2000015, LOCALPHYSICAL(MStau(1)), "Stau(2)")
      << FORMAT_MASS(1000002, LOCALPHYSICAL(MSu(0)), "Su(1)")
      << FORMAT_MASS(2000002, LOCALPHYSICAL(MSu(1)), "Su(2)")
      << FORMAT_MASS(1000004, LOCALPHYSICAL(MSc(0)), "Sc(1)")
      << FORMAT_MASS(2000004, LOCALPHYSICAL(MSc(1)), "Sc(2)")
      << FORMAT_MASS(1000006, LOCALPHYSICAL(MSt(0)), "St(1)")
      << FORMAT_MASS(2000006, LOCALPHYSICAL(MSt(1)), "St(2)")
      << FORMAT_MASS(1000022, LOCALPHYSICAL(MChi(0)), "Chi(1)")
      << FORMAT_MASS(1000023, LOCALPHYSICAL(MChi(1)), "Chi(2)")
      << FORMAT_MASS(1000025, LOCALPHYSICAL(MChi(2)), "Chi(3)")
      << FORMAT_MASS(1000035, LOCALPHYSICAL(MChi(3)), "Chi(4)")
   ;

   if (write_sm_masses) {
      mass
         << FORMAT_MASS(21, LOCALPHYSICAL(MVG), "VG")
         << FORMAT_MASS(22, LOCALPHYSICAL(MVP), "VP")
         << FORMAT_MASS(23, LOCALPHYSICAL(MVZ), "VZ")
         << FORMAT_MASS(1, LOCALPHYSICAL(MFd), "Fd")
         << FORMAT_MASS(3, LOCALPHYSICAL(MFs), "Fs")
         << FORMAT_MASS(5, LOCALPHYSICAL(MFb), "Fb")
         << FORMAT_MASS(2, LOCALPHYSICAL(MFu), "Fu")
         << FORMAT_MASS(4, LOCALPHYSICAL(MFc), "Fc")
         << FORMAT_MASS(6, LOCALPHYSICAL(MFt), "Ft")
         << FORMAT_MASS(12, LOCALPHYSICAL(MFve), "Fve")
         << FORMAT_MASS(14, LOCALPHYSICAL(MFvm), "Fvm")
         << FORMAT_MASS(16, LOCALPHYSICAL(MFvt), "Fvt")
         << FORMAT_MASS(11, LOCALPHYSICAL(MFe), "Fe")
         << FORMAT_MASS(13, LOCALPHYSICAL(MFm), "Fm")
         << FORMAT_MASS(15, LOCALPHYSICAL(MFtau), "Ftau")
      ;
   }

   slha_io.set_block(mass);

}

/**
 * Stores the mixing matrices in the SLHA object.
 *
 * @param physical struct of physical parameters
 *
 * @param write_sm_mixing_matrics flag to indicate if Standard Model
 *    particle mixing matrices should be written as well
 */
void MSSMNoFV_slha_io::set_mixing_matrices(const MSSMNoFV_physical& physical,
                                              bool write_sm_mixing_matrics)
{
   slha_io.set_block("UMIX", LOCALPHYSICAL(UM), "UM");
   slha_io.set_block("VMIX", LOCALPHYSICAL(UP), "UP");
   slha_io.set_block("PSEUDOSCALARMIX", LOCALPHYSICAL(ZA), "ZA");
   slha_io.set_block("sbotmix", LOCALPHYSICAL(ZB), "ZB");
   slha_io.set_block("scharmmix", LOCALPHYSICAL(ZC), "ZC");
   slha_io.set_block("sdownmix", LOCALPHYSICAL(ZD), "ZD");
   slha_io.set_block("selemix", LOCALPHYSICAL(ZE), "ZE");
   slha_io.set_block("SCALARMIX", LOCALPHYSICAL(ZH), "ZH");
   slha_io.set_block("smumix", LOCALPHYSICAL(ZM), "ZM");
   slha_io.set_block("NMIX", LOCALPHYSICAL(ZN), "ZN");
   slha_io.set_block("CHARGEMIX", LOCALPHYSICAL(ZP), "ZP");
   slha_io.set_block("sstrmix", LOCALPHYSICAL(ZS), "ZS");
   slha_io.set_block("stopmix", LOCALPHYSICAL(ZT), "ZT");
   slha_io.set_block("staumix", LOCALPHYSICAL(ZTau), "ZTau");
   slha_io.set_block("supmix", LOCALPHYSICAL(ZU), "ZU");

   if (write_sm_mixing_matrics) {
   }

}

/**
 * Write SLHA object to file.
 *
 * @param file_name file name
 */
void MSSMNoFV_slha_io::write_to_file(const std::string& file_name)
{
   slha_io.write_to_file(file_name);
}

/**
 * Read (DR-bar) model parameter output scale from MODSEL entry 12
 */
double MSSMNoFV_slha_io::get_parameter_output_scale() const
{
   return slha_io.get_modsel().parameter_output_scale;
}

/**
 * Read SLHA object from file
 *
 * @param file_name file name
 */
void MSSMNoFV_slha_io::read_from_file(const std::string& file_name)
{
   slha_io.read_from_file(file_name);
   slha_io.read_modsel();
}

/**
 * Fill struct of model input parameters from SLHA object (MINPAR and
 * EXTPAR blocks)
 *
 * @param input struct of model input parameters
 */
void MSSMNoFV_slha_io::fill(MSSMNoFV_input_parameters& input) const
{
   SLHA_io::Tuple_processor minpar_processor
      = boost::bind(&MSSMNoFV_slha_io::fill_minpar_tuple, boost::ref(input), _1, _2);
   SLHA_io::Tuple_processor extpar_processor
      = boost::bind(&MSSMNoFV_slha_io::fill_extpar_tuple, boost::ref(input), _1, _2);

   slha_io.read_block("MINPAR", minpar_processor);
   slha_io.read_block("EXTPAR", extpar_processor);


}

/**
 * Fill struct of spectrum generator settings from SLHA object
 * (FlexibleSUSY block)
 *
 * @param settings struct of spectrum generator settings
 */
void MSSMNoFV_slha_io::fill(Spectrum_generator_settings& settings) const
{
   SLHA_io::Tuple_processor flexiblesusy_processor
      = boost::bind(&MSSMNoFV_slha_io::fill_flexiblesusy_tuple, boost::ref(settings), _1, _2);

   slha_io.read_block("FlexibleSUSY", flexiblesusy_processor);
}

void MSSMNoFV_slha_io::fill_minpar_tuple(MSSMNoFV_input_parameters& input,
                                                int key, double value)
{
   switch (key) {
   case 3: input.TanBeta = value; break;
   case 4: input.SignMu = value; break;
   default: WARNING("Unrecognized key: " << key); break;
   }

}

void MSSMNoFV_slha_io::fill_extpar_tuple(MSSMNoFV_input_parameters& input,
                                                int key, double value)
{
   switch (key) {
   case 0: input.Qin = value; break;
   case 1: input.M1 = value; break;
   case 2: input.M2 = value; break;
   case 3: input.M3 = value; break;
   case 11: input.AtIN = value; break;
   case 12: input.AbIN = value; break;
   case 13: input.AtauIN = value; break;
   case 14: input.AcIN = value; break;
   case 15: input.AsIN = value; break;
   case 16: input.AmuonIN = value; break;
   case 17: input.AuIN = value; break;
   case 18: input.AdIN = value; break;
   case 19: input.AeIN = value; break;
   case 21: input.mHd2IN = value; break;
   case 22: input.mHu2IN = value; break;
   case 31: input.ml11IN = value; break;
   case 32: input.ml22IN = value; break;
   case 33: input.ml33IN = value; break;
   case 34: input.me11IN = value; break;
   case 35: input.me22IN = value; break;
   case 36: input.me33IN = value; break;
   case 41: input.mq11IN = value; break;
   case 42: input.mq22IN = value; break;
   case 43: input.mq33IN = value; break;
   case 44: input.mu11IN = value; break;
   case 45: input.mu22IN = value; break;
   case 46: input.mu33IN = value; break;
   case 47: input.md11IN = value; break;
   case 48: input.md22IN = value; break;
   case 49: input.md33IN = value; break;
   default: WARNING("Unrecognized key: " << key); break;
   }

}

void MSSMNoFV_slha_io::fill_flexiblesusy_tuple(Spectrum_generator_settings& settings,
                                                  int key, double value)
{
   if (0 <= key && key < static_cast<int>(Spectrum_generator_settings::NUMBER_OF_OPTIONS)) {
      settings.set((Spectrum_generator_settings::Settings)key, value);
   } else {
      WARNING("Unrecognized key in block FlexibleSUSY: " << key);
   }
}

/**
 * Reads the renormalization scales from all DR-bar parameter blocks.
 * If blocks with different scales are found the last scale is
 * returned and a warning is printed.
 *
 * @return common renormalization scale
 */
double MSSMNoFV_slha_io::read_scale() const
{
   double scale = 0.;

   for (unsigned i = 0; i < NUMBER_OF_DRBAR_BLOCKS; i++) {
      const double block_scale = slha_io.read_scale(drbar_blocks[i]);
      if (!is_zero(block_scale)) {
         if (!is_zero(scale) && !is_equal(scale, block_scale))
            WARNING("DR-bar parameters defined at different scales");
         scale = block_scale;
      }
   }

   return scale;
}

/**
 * Convert masses and mixing matrices to SLHA convention: Fermion
 * mixing matrices are always real and fermion masses are allowed to
 * be negative.
 *
 * @param physical struct of physical parameters to convert
 */
void MSSMNoFV_slha_io::convert_to_slha_convention(MSSMNoFV_physical& physical)
{
   SLHA_io::convert_symmetric_fermion_mixings_to_slha(LOCALPHYSICAL(MChi), LOCALPHYSICAL(ZN));

}

} // namespace flexiblesusy
