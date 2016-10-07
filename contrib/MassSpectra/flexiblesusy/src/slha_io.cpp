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

#include "slha_io.hpp"
#include "wrappers.hpp"
#include "lowe.h"
#include "linalg.h"
#include "ew_input.hpp"
#include "physical_input.hpp"
#include "spectrum_generator_settings.hpp"

#include <fstream>
#include <algorithm>
#include <string>
#include <boost/bind.hpp>

namespace flexiblesusy {

SLHA_io::SLHA_io()
   : data()
   , modsel()
{
}

void SLHA_io::clear()
{
   data.clear();
   modsel.clear();
}

void SLHA_io::convert_symmetric_fermion_mixings_to_slha(double&,
                                                        Eigen::Matrix<double, 1, 1>&)
{
}

/**
 * @param m mass
 * @param z 1x1 mixing matrix
 */
void SLHA_io::convert_symmetric_fermion_mixings_to_slha(double& m,
                                                        Eigen::Matrix<std::complex<double>, 1, 1>& z)
{
   // check if 1st row contains non-zero imaginary parts
   if (!is_zero(Abs(Im(z(0,0))))) {
      z(0,0) *= std::complex<double>(0.0,1.0);
      m *= -1;
#ifdef ENABLE_DEBUG
      if (!is_zero(Abs(Im(z(0,0))))) {
         WARNING("Element (0,0) of the following fermion mixing matrix"
                 " contains entries which have non-zero real and imaginary"
                 " parts:\nZ = " << z);
      }
#endif
   }
}

void SLHA_io::convert_symmetric_fermion_mixings_to_hk(double&,
                                                      Eigen::Matrix<double, 1, 1>&)
{
}

/**
 * @param m mass
 * @param z 1x1 mixing matrix
 */
void SLHA_io::convert_symmetric_fermion_mixings_to_hk(double& m,
                                                      Eigen::Matrix<std::complex<double>, 1, 1>& z)
{
   if (m < 0.) {
      z(0,0) *= std::complex<double>(0.0,1.0);
      m *= -1;
   }
}

bool SLHA_io::block_exists(const std::string& block_name) const
{
   return data.find(block_name) != data.cend();
}

std::string SLHA_io::to_lower(const std::string& str)
{
   std::string lower(str.size(), ' ');
   std::transform(str.begin(), str.end(), lower.begin(), ::tolower);
   return lower;
}

/**
 * @brief reads from source
 *
 * If source is "-", then read_from_stream() is called.  Otherwise,
 * read_from_file() is called.
 *
 * @param source string that specifies the source
 */
void SLHA_io::read_from_source(const std::string& source)
{
   if (source == "-")
      read_from_stream(std::cin);
   else
      read_from_file(source);
}

/**
 * @brief opens SLHA input file and reads the content
 * @param file_name SLHA input file name
 */
void SLHA_io::read_from_file(const std::string& file_name)
{
   std::ifstream ifs(file_name);
   if (ifs.good()) {
      data.clear();
      data.read(ifs);
   } else {
      std::ostringstream msg;
      msg << "cannot read SLHA file: \"" << file_name << "\"";
      throw ReadError(msg.str());
   }
}

/**
 * @brief reads SLHA data from a stream
 * @param istr input stream
 */
void SLHA_io::read_from_stream(std::istream& istr)
{
   data.read(istr);
}

void SLHA_io::read_modsel()
{
   SLHA_io::Tuple_processor modsel_processor
      = boost::bind(&SLHA_io::process_modsel_tuple, boost::ref(modsel), _1, _2);

   read_block("MODSEL", modsel_processor);
}

void SLHA_io::fill(softsusy::QedQcd& qedqcd) const
{
   CKM_wolfenstein ckm_wolfenstein;
   PMNS_parameters pmns_parameters;

   SLHA_io::Tuple_processor sminputs_processor
      = boost::bind(&SLHA_io::process_sminputs_tuple, boost::ref(qedqcd), _1, _2);

   read_block("SMINPUTS", sminputs_processor);

   if (modsel.quark_flavour_violated) {
      SLHA_io::Tuple_processor vckmin_processor
         = boost::bind(&SLHA_io::process_vckmin_tuple, boost::ref(ckm_wolfenstein), _1, _2);

      read_block("VCKMIN", vckmin_processor);
   }

   if (modsel.lepton_flavour_violated) {
      SLHA_io::Tuple_processor upmnsin_processor
         = boost::bind(&SLHA_io::process_upmnsin_tuple, boost::ref(pmns_parameters), _1, _2);

      read_block("UPMNSIN", upmnsin_processor);
   }

   // fill CKM parameters in qedqcd
   CKM_parameters ckm_parameters;
   ckm_parameters.set_from_wolfenstein(
      ckm_wolfenstein.lambdaW,
      ckm_wolfenstein.aCkm,
      ckm_wolfenstein.rhobar,
      ckm_wolfenstein.etabar);
   qedqcd.setCKM(ckm_parameters);

   // fill PMNS parameters in qedqcd
   qedqcd.setPMNS(pmns_parameters);
}

/**
 * Fill struct of extra physical input parameters from SLHA object
 * (FlexibleSUSYInput block)
 *
 * @param input struct of physical input parameters
 */
void SLHA_io::fill(Physical_input& input) const
{
   SLHA_io::Tuple_processor processor
      = boost::bind(&SLHA_io::process_flexiblesusyinput_tuple, boost::ref(input), _1, _2);

   read_block("FlexibleSUSYInput", processor);
}

/**
 * Fill struct of spectrum generator settings from SLHA object
 * (FlexibleSUSY block)
 *
 * @param settings struct of spectrum generator settings
 */
void SLHA_io::fill(Spectrum_generator_settings& settings) const
{
   SLHA_io::Tuple_processor flexiblesusy_processor
      = boost::bind(&SLHA_io::process_flexiblesusy_tuple, boost::ref(settings), _1, _2);

   read_block("FlexibleSUSY", flexiblesusy_processor);
}

/**
 * Applies processor to each (key, value) pair of a SLHA block.
 * Non-data lines are ignored.
 *
 * @param block_name block name
 * @param processor tuple processor to be applied
 *
 * @return scale (or 0 if no scale is defined)
 */
double SLHA_io::read_block(const std::string& block_name, const Tuple_processor& processor) const
{
   SLHAea::Coll::const_iterator block =
      data.find(data.cbegin(), data.cend(), block_name);

   double scale = 0.;

   while (block != data.cend()) {
      for (SLHAea::Block::const_iterator line = block->cbegin(),
              end = block->cend(); line != end; ++line) {
         if (!line->is_data_line()) {
            // read scale from block definition
            if (line->size() > 3 &&
                to_lower((*line)[0]) == "block" && (*line)[2] == "Q=")
               scale = convert_to<double>((*line)[3]);
            continue;
         }

         if (line->size() >= 2) {
            const int key = convert_to<int>((*line)[0]);
            const double value = convert_to<double>((*line)[1]);
            processor(key, value);
         }
      }

      ++block;
      block = data.find(block, data.cend(), block_name);
   }

   return scale;
}

/**
 * Fills an entry from a SLHA block
 *
 * @param block_name block name
 * @param entry entry to be filled
 *
 * @return scale (or 0 if no scale is defined)
 */
double SLHA_io::read_block(const std::string& block_name, double& entry) const
{
   SLHAea::Coll::const_iterator block =
      data.find(data.cbegin(), data.cend(), block_name);

   double scale = 0.;

   while (block != data.cend()) {
      for (SLHAea::Block::const_iterator line = block->cbegin(),
              end = block->cend(); line != end; ++line) {
         if (!line->is_data_line()) {
            // read scale from block definition
            if (line->size() > 3 &&
                to_lower((*line)[0]) == "block" && (*line)[2] == "Q=")
               scale = convert_to<double>((*line)[3]);
            continue;
         }

         if (line->size() >= 1)
            entry = convert_to<double>((*line)[0]);
      }

      ++block;
      block = data.find(block, data.cend(), block_name);
   }

   return scale;
}

double SLHA_io::read_entry(const std::string& block_name, int key) const
{
   SLHAea::Coll::const_iterator block =
      data.find(data.cbegin(), data.cend(), block_name);

   double entry = 0.;
   const SLHAea::Block::key_type keys(1, ToString(key));
   SLHAea::Block::const_iterator line;

   while (block != data.cend()) {
      line = block->find(keys);

      if (line != block->end() && line->is_data_line() && line->size() > 1)
         entry = convert_to<double>(line->at(1));

      ++block;
      block = data.find(block, data.cend(), block_name);
   }

   return entry;
}

/**
 * Reads scale definition from SLHA block.
 *
 * @param block_name block name
 *
 * @return scale (or 0 if no scale is defined)
 */
double SLHA_io::read_scale(const std::string& block_name) const
{
   if (!block_exists(block_name))
      return 0.;

   double scale = 0.;

   for (SLHAea::Block::const_iterator line = data.at(block_name).cbegin(),
        end = data.at(block_name).cend(); line != end; ++line) {
      if (!line->is_data_line()) {
         if (line->size() > 3 &&
             to_lower((*line)[0]) == "block" && (*line)[2] == "Q=")
            scale = convert_to<double>((*line)[3]);
         break;
      }
   }

   return scale;
}

void SLHA_io::set_block(const std::ostringstream& lines, Position position)
{
   SLHAea::Block block;
   block.str(lines.str());
   data.erase(block.name());
   if (position == front)
      data.push_front(block);
   else
      data.push_back(block);
}

void SLHA_io::set_block(const std::string& lines, Position position)
{
   set_block(std::ostringstream(lines), position);
}

void SLHA_io::set_blocks(const std::vector<std::string>& blocks, Position position)
{
   for (std::vector<std::string>::const_iterator it = blocks.begin(),
           end = blocks.end(); it != end; it++)
      set_block(*it, position);
}

/**
 * This function treats a given scalar as 1x1 matrix.  Such a case is
 * not defined in the SLHA standard, but we still handle it to avoid
 * problems.
 */
void SLHA_io::set_block(const std::string& name, double value,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n'
      << boost::format(mixing_matrix_formatter) % 1 % 1 % value % symbol;

   set_block(ss);
}

void SLHA_io::set_block(const std::string& name, const softsusy::DoubleMatrix& matrix,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n';

   for (int i = 1; i <= matrix.displayRows(); ++i)
      for (int k = 1; k <= matrix.displayCols(); ++k) {
         ss << boost::format(mixing_matrix_formatter) % i % k % matrix(i,k)
            % (symbol + "(" + ToString(i) + "," + ToString(k) + ")");
      }

   set_block(ss);
}

void SLHA_io::set_block(const std::string& name, const softsusy::ComplexMatrix& matrix,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n';

   for (int i = 1; i <= matrix.displayRows(); ++i)
      for (int k = 1; k <= matrix.displayCols(); ++k) {
         ss << boost::format(mixing_matrix_formatter) % i % k
            % Re(matrix(i,k))
            % ("Re(" + symbol + "(" + ToString(i) + "," + ToString(k) + "))");
      }

   set_block(ss);
}

void SLHA_io::set_sminputs(const softsusy::QedQcd& qedqcd_)
{
   using namespace softsusy;
   softsusy::QedQcd qedqcd(qedqcd_);
   std::ostringstream ss;

   const double alphaEmInv = 1./qedqcd.displayAlpha(ALPHA);

   ss << "Block SMINPUTS\n";
   ss << FORMAT_ELEMENT( 1, alphaEmInv                   , "alpha^(-1) SM MSbar(MZ)");
   ss << FORMAT_ELEMENT( 2, qedqcd.displayFermiConstant(), "G_Fermi");
   ss << FORMAT_ELEMENT( 3, qedqcd.displayAlpha(ALPHAS)  , "alpha_s(MZ) SM MSbar");
   ss << FORMAT_ELEMENT( 4, qedqcd.displayPoleMZ()       , "MZ(pole)");
   ss << FORMAT_ELEMENT( 5, qedqcd.displayMbMb()         , "mb(mb) SM MSbar");
   ss << FORMAT_ELEMENT( 6, qedqcd.displayPoleMt()       , "mtop(pole)");
   ss << FORMAT_ELEMENT( 7, qedqcd.displayPoleMtau()     , "mtau(pole)");
   ss << FORMAT_ELEMENT( 8, qedqcd.displayNeutrinoPoleMass(3), "mnu3(pole)");
   ss << FORMAT_ELEMENT( 9, qedqcd.displayPoleMW()       , "MW(pole)");
   ss << FORMAT_ELEMENT(11, qedqcd.displayPoleMel()      , "melectron(pole)");
   ss << FORMAT_ELEMENT(12, qedqcd.displayNeutrinoPoleMass(1), "mnu1(pole)");
   ss << FORMAT_ELEMENT(13, qedqcd.displayPoleMmuon()    , "mmuon(pole)");
   ss << FORMAT_ELEMENT(14, qedqcd.displayNeutrinoPoleMass(2), "mnu2(pole)");

   // recalculate mc(mc)^MS-bar
   double mc = qedqcd.displayMass(mCharm);
   qedqcd.runto(mc);
   mc = qedqcd.displayMass(mCharm);

   // recalculate mu(2 GeV)^MS-bar, md(2 GeV)^MS-bar, ms^MS-bar(2 GeV)
   qedqcd.runto(2.0);
   ss << FORMAT_ELEMENT(21, qedqcd.displayMass(mDown)    , "md");
   ss << FORMAT_ELEMENT(22, qedqcd.displayMass(mUp)      , "mu");
   ss << FORMAT_ELEMENT(23, qedqcd.displayMass(mStrange) , "ms");
   ss << FORMAT_ELEMENT(24, mc                           , "mc");

   set_block(ss);
}

void SLHA_io::write_to_file(const std::string& file_name)
{
   std::ofstream ofs(file_name);
   write_to_stream(ofs);
}

void SLHA_io::write_to_stream(std::ostream& ostr)
{
   if (ostr.good())
      ostr << data;
   else
      ERROR("cannot write SLHA file");
}

/**
 * fill Modsel struct from given key - value pair
 *
 * @param modsel MODSEL data
 * @param key SLHA key in MODSEL
 * @param value value corresponding to key
 */
void SLHA_io::process_modsel_tuple(Modsel& modsel, int key, double value)
{
   switch (key) {
   case 1: // SUSY breaking model (defined in FlexibleSUSY model file)
   case 3: // SUSY model (defined in SARAH model file)
   case 4: // R-parity violation (defined in SARAH model file)
   case 5: // CP-parity violation (defined in SARAH model file)
   case 11:
   case 21:
      WARNING("Key " << key << " in Block MODSEL currently not supported");
      break;
   case 6: // Flavour violation (defined in SARAH model file)
   {
      const int ivalue = Round(value);

      if (ivalue < 0 || ivalue > 3)
         WARNING("Value " << ivalue << " in MODSEL block entry 6 out of range");

      modsel.quark_flavour_violated = ivalue & 0x1;
      modsel.lepton_flavour_violated = ivalue & 0x2;
   }
      break;
   case 12:
      modsel.parameter_output_scale = value;
      break;
   default:
      WARNING("Unrecognized entry in block MODSEL: " << key);
      break;
   }
}

/**
 * fill qedqcd from given key - value pair
 *
 * @param qedqcd low-energy data set
 * @param key SLHA key in SMINPUTS
 * @param value value corresponding to key
 */
void SLHA_io::process_sminputs_tuple(softsusy::QedQcd& qedqcd, int key, double value)
{
   using namespace softsusy;

   switch (key) {
   case 1:
      qedqcd.setAlpha(ALPHA, 1.0 / value);
      qedqcd.setAlphaEmInput(1.0 / value);
      break;
   case 2:
      qedqcd.setFermiConstant(value);
      break;
   case 3:
      qedqcd.setAlpha(ALPHAS, value);
      qedqcd.setAlphaSInput(value);
      break;
   case 4:
      qedqcd.setPoleMZ(value);
      qedqcd.setMu(value);
      softsusy::MZ = value;
      break;
   case 5:
      qedqcd.setMass(mBottom, value);
      qedqcd.setMbMb(value);
      break;
   case 6:
      qedqcd.setPoleMt(value);
      break;
   case 7:
      qedqcd.setMass(mTau, value);
      qedqcd.setPoleMtau(value);
      break;
   case 8:
      qedqcd.setNeutrinoPoleMass(3, value);
      break;
   case 9:
      qedqcd.setPoleMW(value);
      break;
   case 11:
      qedqcd.setMass(mElectron, value);
      qedqcd.setPoleMel(value);
      break;
   case 12:
      qedqcd.setNeutrinoPoleMass(1, value);
      break;
   case 13:
      qedqcd.setMass(mMuon, value);
      qedqcd.setPoleMmuon(value);
      break;
   case 14:
      qedqcd.setNeutrinoPoleMass(2, value);
      break;
   case 21:
      qedqcd.setMass(mDown, value);
      qedqcd.setMd2GeV(value);
      break;
   case 22:
      qedqcd.setMass(mUp, value);
      qedqcd.setMu2GeV(value);
      break;
   case 23:
      qedqcd.setMass(mStrange, value);
      qedqcd.setMs2GeV(value);
      break;
   case 24:
      qedqcd.setMass(mCharm, value);
      qedqcd.setMcMc(value);
      break;
   default:
      WARNING("Unrecognized entry in block SMINPUTS: " << key);
      break;
   }
}

void SLHA_io::process_flexiblesusy_tuple(Spectrum_generator_settings& settings,
                                         int key, double value)
{
   if (0 <= key && key < static_cast<int>(Spectrum_generator_settings::NUMBER_OF_OPTIONS)) {
      settings.set((Spectrum_generator_settings::Settings)key, value);
   } else {
      WARNING("Unrecognized entry in block FlexibleSUSY: " << key);
   }
}

void SLHA_io::process_flexiblesusyinput_tuple(
   Physical_input& input,
   int key, double value)
{
   if (0 <= key && key < static_cast<int>(Physical_input::NUMBER_OF_INPUT_PARAMETERS)) {
      input.set((Physical_input::Input)key, value);
   } else {
      WARNING("Unrecognized entry in block FlexibleSUSYInput: " << key);
   }
}

/**
 * fill CKM_wolfenstein from given key - value pair
 *
 * @param ckm_wolfenstein Wolfenstein parameters
 * @param key SLHA key in SMINPUTS
 * @param value value corresponding to key
 */
void SLHA_io::process_vckmin_tuple(CKM_wolfenstein& ckm_wolfenstein, int key, double value)
{
   switch (key) {
   case 1:
      ckm_wolfenstein.lambdaW = value;
      break;
   case 2:
      ckm_wolfenstein.aCkm = value;
      break;
   case 3:
      ckm_wolfenstein.rhobar = value;
      break;
   case 4:
      ckm_wolfenstein.etabar = value;
      break;
   default:
      WARNING("Unrecognized entry in block VCKMIN: " << key);
      break;
   }
}

/**
 * fill PMNS_parameters from given key - value pair
 *
 * @param pmns_parameters PMNS matrix parameters
 * @param key SLHA key in SMINPUTS
 * @param value value corresponding to key
 */
void SLHA_io::process_upmnsin_tuple(PMNS_parameters& pmns_parameters, int key, double value)
{
   switch (key) {
   case 1:
      pmns_parameters.theta_12 = value;
      break;
   case 2:
      pmns_parameters.theta_23 = value;
      break;
   case 3:
      pmns_parameters.theta_13 = value;
      break;
   case 4:
      pmns_parameters.delta = value;
      break;
   case 5:
      pmns_parameters.alpha_1 = value;
   case 6:
      pmns_parameters.alpha_2 = value;
      break;
   default:
      WARNING("Unrecognized entry in block UPMNSIN: " << key);
      break;
   }
}

} // namespace flexiblesusy
