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

#include <fstream>
#include <algorithm>
#include <string>
#include <boost/bind.hpp>

namespace flexiblesusy {

SLHA_io::SLHA_io()
   : data()
   , extpar()
   , modsel()
{
}

void SLHA_io::clear()
{
   data.clear();
   extpar.clear();
   modsel.clear();
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

void SLHA_io::read_extpar()
{
   SLHA_io::Tuple_processor extpar_processor
      = boost::bind(&SLHA_io::process_extpar_tuple, boost::ref(extpar), _1, _2);

   read_block("EXTPAR", extpar_processor);
}

void SLHA_io::read_modsel()
{
   SLHA_io::Tuple_processor modsel_processor
      = boost::bind(&SLHA_io::process_modsel_tuple, boost::ref(modsel), _1, _2);

   read_block("MODSEL", modsel_processor);
}

void SLHA_io::fill(QedQcd& oneset) const
{
   SLHA_io::Tuple_processor sminputs_processor
      = boost::bind(&SLHA_io::process_sminputs_tuple, boost::ref(oneset), _1, _2);

   read_block("SMINPUTS", sminputs_processor);
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
   softsusy::QedQcd qedqcd(qedqcd_);
   std::ostringstream ss;

   const double alphaEmInv = 1./qedqcd.displayAlpha(ALPHA);

   ss << "Block SMINPUTS\n";
   ss << FORMAT_ELEMENT( 1, alphaEmInv                   , "alpha^(-1) SM MSbar(MZ)");
   ss << FORMAT_ELEMENT( 2, 1.166370000e-05              , "G_Fermi");
   ss << FORMAT_ELEMENT( 3, qedqcd.displayAlpha(ALPHAS)  , "alpha_s(MZ) SM MSbar");
   ss << FORMAT_ELEMENT( 4, Electroweak_constants::MZ    , "MZ(pole)");
   ss << FORMAT_ELEMENT( 5, qedqcd.displayMbMb()         , "mb(mb) SM MSbar");
   ss << FORMAT_ELEMENT( 6, qedqcd.displayPoleMt()       , "mtop(pole)");
   ss << FORMAT_ELEMENT( 7, qedqcd.displayPoleMtau()     , "mtau(pole)");
   ss << FORMAT_ELEMENT( 8, 0                            , "mnu3(pole)");
   ss << FORMAT_ELEMENT(11, qedqcd.displayMass(mElectron), "melectron(pole)");
   ss << FORMAT_ELEMENT(12, 0                            , "mnu1(pole)");
   ss << FORMAT_ELEMENT(13, qedqcd.displayMass(mMuon)    , "mmuon(pole)");
   ss << FORMAT_ELEMENT(14, 0                            , "mnu2(pole)");

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
 * fill Extpar struct from given key - value pair
 *
 * @param extpar EXTPAR data
 * @param key SLHA key in EXTPAR
 * @param value value corresponding to key
 */
void SLHA_io::process_extpar_tuple(Extpar& extpar, int key, double value)
{
   if (key == 0) {
      if (value > -std::numeric_limits<double>::epsilon()) {
         extpar.input_scale = value;
      } else {
         WARNING("Negative values for EXTPAR entry 0 currently not supported");
      }
   }
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
   case 6: // Flavour violation (defined in SARAH model file)
   case 11:
   case 21:
      WARNING("Key " << key << " in Block MODSEL currently not supported");
      break;
   case 12:
      modsel.parameter_output_scale = value;
      break;
   default:
      WARNING("Unrecognized key " << key << " in Block MODSEL");
      break;
   }
}

/**
 * fill oneset from given key - value pair
 *
 * @param oneset low-energy data set
 * @param key SLHA key in SMINPUTS
 * @param value value corresponding to key
 */
void SLHA_io::process_sminputs_tuple(QedQcd& oneset, int key, double value)
{
   switch (key) {
   case 1:
      oneset.setAlpha(ALPHA, 1.0 / value);
      break;
   case 2:
      // Gmu cannot be set yet
      break;
   case 3:
      oneset.setAlpha(ALPHAS, value);
      break;
   case 4:
      // MZ cannot be set yet
      // oneset.setMu(value);
      break;
   case 5:
      oneset.setMass(mBottom, value);
      oneset.setMbMb(value);
      break;
   case 6:
      oneset.setPoleMt(value);
      break;
   case 7:
      oneset.setMass(mTau, value);
      oneset.setPoleMtau(value);
      break;
   case 8:
      break;
   case 11:
      oneset.setMass(mElectron, value);
      break;
   case 12:
      break;
   case 13:
      oneset.setMass(mMuon, value);
      break;
   case 14:
      break;
   case 21:
      oneset.setMass(mDown, value);
      break;
   case 22:
      oneset.setMass(mUp, value);
      break;
   case 23:
      oneset.setMass(mStrange, value);
      break;
   case 24:
      oneset.setMass(mCharm, value);
      break;
   default:
      WARNING("Unrecognized key in SMINPUTS: " << key);
      break;
   }
}

} // namespace flexiblesusy
