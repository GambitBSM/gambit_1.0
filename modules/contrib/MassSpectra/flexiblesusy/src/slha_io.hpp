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

#ifndef SLHA_IO_H
#define SLHA_IO_H

#include <string>
#include <iosfwd>
#include <Eigen/Core>
#include <boost/format.hpp>
#include <boost/function.hpp>
#include "slhaea.h"
#include "config.h"
#include "logger.hpp"
#include "error.hpp"
#include "wrappers.hpp"
#include "numerics.hpp"

namespace softsusy {
   class QedQcd;
   class DoubleMatrix;
   class ComplexMatrix;
}

namespace flexiblesusy {

   namespace {
      /// SLHA line formatter for the MASS block entries
      const boost::format mass_formatter(" %9d   %16.8E   # %s\n");
      /// SLHA line formatter for the mixing matrix entries (NMIX, UMIX, VMIX, ...)
      const boost::format mixing_matrix_formatter(" %2d %2d   %16.8E   # %s\n");
      /// SLHA line formatter for vector entries
      const boost::format vector_formatter(" %5d   %16.8E   # %s\n");
      /// SLHA number formatter
      const boost::format number_formatter("         %16.8E   # %s\n");
      /// SLHA scale formatter
      const boost::format scale_formatter("%9.8E");
      /// SLHA line formatter for the one-element entries (HMIX, GAUGE, MSOFT, ...)
      const boost::format single_element_formatter(" %5d   %16.8E   # %s\n");
      /// SLHA line formatter for the SPINFO block entries
      const boost::format spinfo_formatter(" %5d   %s\n");
   }

#define FORMAT_MASS(pdg,mass,name)                                      \
   boost::format(mass_formatter) % pdg % mass % name
#define FORMAT_MIXING_MATRIX(i,k,entry,name)                            \
   boost::format(mixing_matrix_formatter) % i % k % entry % name
#define FORMAT_ELEMENT(pdg,value,name)                                  \
   boost::format(single_element_formatter) % pdg % value % name
#define FORMAT_SCALE(n)                                                 \
   boost::format(scale_formatter) % n
#define FORMAT_NUMBER(n,str)                                            \
   boost::format(number_formatter) % n % str
#define FORMAT_SPINFO(n,str)                                            \
   boost::format(spinfo_formatter) % n % str

/**
 * @class SLHA_io
 * @brief Handles reading and writing of SLHA files
 *
 * Reading: There are two ways to read block entries from SLHA files:
 * a) using the read_block() function with a %SLHA_io::Tuple_processor
 * or b) using the read_entry() function for each entry.  Note, that
 * a) is much faster than b) (more than 1000 times) because b) needs
 * to search for the block each time read_entry() is called.
 *
 * Example how to use a tuple processor (fast!):
 * \code{.cpp}
void process_tuple(double* array, int key, double value) {
   array[key] = value;
}

void read_file() {
   double array[1000];

   SLHA_io reader;
   reader.read_from_file("file.slha");

   SLHA_io::Tuple_processor processor
      = boost::bind(&process_tuple, array, _1, _2);

   reader.read_block("MyBlock", processor);
}
 * \endcode
 *
 * Example how to use a for loop (slow!):
 * \code{.cpp}
void read_file() {
   double array[1000];

   SLHA_io reader;
   reader.read_from_file("file.slha");

   for (int i = 0; i < 1000; i++) {
      array[i] = reader.read_entry("MyBlock", i);
   }
}
 * \endcode
 */
class SLHA_io {
public:
   typedef boost::function<void(int, double)> Tuple_processor;
   enum Position { front, back };
   struct Modsel {
      double parameter_output_scale; ///< key = 12
      Modsel() : parameter_output_scale(0.) {}
      void clear() { parameter_output_scale = 0.; }
   };
   struct Extpar {
      double input_scale; ///< key = 0
      Extpar() : input_scale(0.) {}
      void clear() { input_scale = 0.; }
   };

   class ReadError : public Error {
   public:
      ReadError(const std::string& message_) : message(message_) {}
      virtual ~ReadError() {}
      virtual std::string what() const { return message; }
   private:
      std::string message;
   };

   SLHA_io();
   ~SLHA_io() {}

   void clear();

   // reading functions
   bool block_exists(const std::string&) const;
   void fill(softsusy::QedQcd&) const;
   const Extpar& get_extpar() const { return extpar; }
   const Modsel& get_modsel() const { return modsel; }
   const SLHAea::Coll& get_data() const { return data; }
   void read_from_file(const std::string&);
   double read_block(const std::string&, const Tuple_processor&) const;
   template <class Derived>
   double read_block(const std::string&, Eigen::MatrixBase<Derived>&) const;
   double read_block(const std::string&, double&) const;
   double read_entry(const std::string&, int) const;
   void read_extpar();
   void read_modsel();
   double read_scale(const std::string&) const;

   // writing functions
   void set_data(const SLHAea::Coll& data_) { data = data_; }
   void set_block(const std::ostringstream&, Position position = back);
   void set_block(const std::string&, double, const std::string&, double scale = 0.);
   template<class Scalar, int M, int N>
   void set_block(const std::string&, const Eigen::Matrix<std::complex<Scalar>, M, N>&, const std::string&, double scale = 0.);
   template<class Scalar, int M>
   void set_block(const std::string&, const Eigen::Matrix<std::complex<Scalar>, M, 1>&, const std::string&, double scale = 0.);
   template <class Derived>
   void set_block(const std::string&, const Eigen::MatrixBase<Derived>&, const std::string&, double scale = 0.);
   void set_block(const std::string&, const softsusy::DoubleMatrix&, const std::string&, double scale = 0.);
   void set_block(const std::string&, const softsusy::ComplexMatrix&, const std::string&, double scale = 0.);
   void set_sminputs(const softsusy::QedQcd&);
   void write_to_file(const std::string&);
   void write_to_stream(std::ostream& = std::cout);

   template<int N>
   static void convert_symmetric_fermion_mixings_to_slha(Eigen::Array<double, N, 1>&,
                                                         Eigen::Matrix<double, N, N>&);

   template<int N>
   static void convert_symmetric_fermion_mixings_to_slha(Eigen::Array<double, N, 1>&,
                                                         Eigen::Matrix<std::complex<double>, N, N>&);

private:
   SLHAea::Coll data;          ///< SHLA data
   Extpar extpar;              ///< data from block EXTPAR
   Modsel modsel;              ///< data from block MODSEL
   template <class Scalar>
   static Scalar convert_to(const std::string&); ///< convert string
   static std::string to_lower(const std::string&); ///< string to lower case
   static void process_sminputs_tuple(softsusy::QedQcd&, int, double);
   static void process_extpar_tuple(Extpar&, int, double);
   static void process_modsel_tuple(Modsel&, int, double);
};

template <class Scalar>
Scalar SLHA_io::convert_to(const std::string& str)
{
   Scalar value;
   try {
      value = SLHAea::to<Scalar>(str);
   }  catch (const boost::bad_lexical_cast& error) {
      const std::string msg("cannot convert string \"" + str + "\" to "
                            + typeid(Scalar).name());
      throw ReadError(msg);
   }
   return value;
}

/**
 * Fills a matrix from a SLHA block
 *
 * @param block_name block name
 * @param matrix matrix to be filled
 *
 * @return scale (or 0 if no scale is defined)
 */
template <class Derived>
double SLHA_io::read_block(const std::string& block_name, Eigen::MatrixBase<Derived>& matrix) const
{
   SLHAea::Coll::const_iterator block =
      data.find(data.cbegin(), data.cend(), block_name);

   const int cols = matrix.cols(), rows = matrix.rows();
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

         if (cols == 1) {
            // vector
            if (line->size() >= 2) {
               const int i = convert_to<int>((*line)[0]) - 1;
               if (0 <= i && i < rows) {
                  const double value = convert_to<double>((*line)[1]);
                  matrix(i,0) = value;
               }
            }
         } else {
            // martix
            if (line->size() >= 3) {
               const int i = convert_to<int>((*line)[0]) - 1;
               const int k = convert_to<int>((*line)[1]) - 1;
               if (0 <= i && i < rows && 0 <= k && k < cols) {
                  const double value = convert_to<double>((*line)[2]);
                  matrix(i,k) = value;
               }
            }
         }
      }

      ++block;
      block = data.find(block, data.cend(), block_name);
   }

   return scale;
}

template<class Scalar, int NRows>
void SLHA_io::set_block(const std::string& name,
                        const Eigen::Matrix<std::complex<Scalar>, NRows, 1>& matrix,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n';

   for (int i = 1; i <= NRows; ++i) {
      ss << boost::format(vector_formatter) % i % matrix(i-1,0)
         % (symbol + "(" + ToString(i) + ")");
   }

   set_block(ss);
}

template<class Scalar, int NRows, int NCols>
void SLHA_io::set_block(const std::string& name,
                        const Eigen::Matrix<std::complex<Scalar>, NRows, NCols>& matrix,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n';

   for (int i = 1; i <= NRows; ++i) {
      for (int k = 1; k <= NCols; ++k) {
         ss << boost::format(mixing_matrix_formatter) % i % k
            % Re(matrix(i-1,k-1))
            % ("Re(" + symbol + "(" + ToString(i) + ","
               + ToString(k) + "))");
      }
   }

   set_block(ss);
}

template <class Derived>
void SLHA_io::set_block(const std::string& name,
                        const Eigen::MatrixBase<Derived>& matrix,
                        const std::string& symbol, double scale)
{
   std::ostringstream ss;
   ss << "Block " << name;
   if (scale != 0.)
      ss << " Q= " << FORMAT_SCALE(scale);
   ss << '\n';

   const int rows = matrix.rows();
   const int cols = matrix.cols();
   for (int i = 1; i <= rows; ++i) {
      if (cols == 1) {
         ss << boost::format(vector_formatter) % i % matrix(i-1,0)
            % (symbol + "(" + ToString(i) + ")");
      } else {
         for (int k = 1; k <= cols; ++k) {
            ss << boost::format(mixing_matrix_formatter) % i % k % matrix(i-1,k-1)
               % (symbol + "(" + ToString(i) + "," + ToString(k) + ")");
         }
      }
   }

   set_block(ss);
}

template<int N>
void SLHA_io::convert_symmetric_fermion_mixings_to_slha(Eigen::Array<double, N, 1>& m,
                                                        Eigen::Matrix<double, N, N>& z)
{
}

/**
 * Converts the given vector of masses and the corresponding (complex)
 * mixing matrix to SLHA convention: Matrix rows with non-zero
 * imaginary parts are multiplied by i and the corresponding mass
 * eigenvalue is multiplied by -1.  As a result the mixing matrix will
 * be real and the mass eigenvalues might be positive or negative.  It
 * is assumed that these mixings result from diagonalizing a symmetric
 * fermion mass matrix in the convention of Haber and Kane,
 * Phys. Rept. 117 (1985) 75-263.  This conversion makes sense only if
 * the original symmetric mass matrix is real-valued.
 *
 * @param m vector of masses
 * @param z mixing matrix
 */
template<int N>
void SLHA_io::convert_symmetric_fermion_mixings_to_slha(Eigen::Array<double, N, 1>& m,
                                                        Eigen::Matrix<std::complex<double>, N, N>& z)
{
   for (int i = 0; i < N; i++) {
      // check if i'th row contains non-zero imaginary parts
      if (!is_zero(z.row(i).imag().cwiseAbs().maxCoeff())) {
         z.row(i) *= std::complex<double>(0.0,1.0);
         m(i) *= -1;
#ifdef ENABLE_DEBUG
         if (!is_zero(z.row(i).imag().cwiseAbs().maxCoeff())) {
            WARNING("Row " << i << " of the following fermion mixing matrix"
                    " contains entries which have non-zero real and imaginary"
                    " parts:\nZ = " << z);
         }
#endif
      }
   }
}

} // namespace flexiblesusy

#endif
