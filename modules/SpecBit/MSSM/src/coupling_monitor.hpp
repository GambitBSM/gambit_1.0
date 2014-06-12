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

#ifndef COUPLING_MONITOR_H
#define COUPLING_MONITOR_H

#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iomanip>

#include <Eigen/Dense>
#include "logger.hpp"
#include "error.hpp"

namespace flexiblesusy {

/**
 * @class Coupling_monitor
 * @brief stores model parameters at different scales
 *
 * Template arguments are the model type and the parameter getter
 * type.  The paramameter getter has to provide two functions:
 * get_parameters() which returns the values of the parameters, and
 * get_parameter_names() wich returns the names of the parameters.
 *
 * Example:
 * @code
 * class MSSM_parameter_getter {
 * public:
 *    Eigen::ArrayXd get_parameters(const MSSM& model) {
 *       return model.get();
 *    }
 *    std::vector<std::string> get_parameter_names(const MSSM& model) const {
 *       return model.get_parameter_names();
 *    }
 * };
 *
 * MSSM model;
 * MSSM_parameter_getter getter;
 * Coupling_monitor<MSSM, MSSM_parameter_getter> cm(model, getter);
 *
 * const double start_scale = 100.;
 * const double stop_scale = 1.0e12;
 * const unsigned number_of_points = 50;
 * const bool include_endpoint = true;
 *
 * cm.run(start_scale, stop_scale, number_of_points, include_endpoint);
 * cm.write_to_file("running_coupling.dat");
 * @endcode
 */
template <class Model, class DataGetter>
class Coupling_monitor {
public:
   typedef std::pair<double, Eigen::ArrayXd> TTouple;///< touple of scale and couplings

   Coupling_monitor(const Model&, const DataGetter&);
   ~Coupling_monitor() {}

   /// get couplings at all scales
   void run(double, double, unsigned int number_of_steps = 20, bool include_endpoint = false);
   /// get maximum scale
   TTouple get_max_scale() const;
   /// delete all saved couplings
   void clear();
   /// write couplings to file
   void write_to_file(const std::string&) const;

private:
   typedef std::vector<TTouple> TData; ///< container for the scales and couplings
   struct TDataComp {
      bool operator() (const TData::value_type& i,const TData::value_type& j) {
         return i.first < j.first;
      }
   };

   TData couplings;        ///< all couplings at all scales
   Model model;            ///< the model
   DataGetter data_getter; ///< hepler class which extracts the model parameters
   unsigned width;         ///< width of columns in output table

   /// write a comment line
   void write_comment_line(std::ofstream&) const;
};

template <class Model, class DataGetter>
Coupling_monitor<Model,DataGetter>::Coupling_monitor(const Model& model_, const DataGetter& data_getter_)
   : couplings(TData())
   , model(model_)
   , data_getter(data_getter_)
   , width(16)
{
}

/**
 * Get the couplings at the largest scale
 *
 * @return a pair with the scale and a Eigen::ArrayXd which contains the
 * couplings at this scale
 */
template <class Model, class DataGetter>
typename Coupling_monitor<Model,DataGetter>::TTouple Coupling_monitor<Model,DataGetter>::get_max_scale() const
{
   if (couplings.empty()) {
      ERROR("Data container is empty!");
      return TTouple(0.0, Eigen::ArrayXd(1));
   }

   // find gauge couplings at the greatest scale
   TData::const_iterator maxScale
      = max_element(couplings.begin(), couplings.end(), TDataComp());

   return *maxScale;
}

/**
 * Delete all internal couplings.
 */
template <class Model, class DataGetter>
void Coupling_monitor<Model,DataGetter>::clear()
{
   couplings.clear();
}

/**
 * write help line which describes the written data
 *
 * @param fout output stream
 */
template <class Model, class DataGetter>
void Coupling_monitor<Model,DataGetter>::write_comment_line(std::ofstream& fout) const
{
   if (!fout.good() || couplings.empty())
      return;

   const std::size_t number_of_couplings = couplings.front().second.size();
   const std::vector<std::string> parameter_names(data_getter.get_parameter_names(model));

   if (number_of_couplings != parameter_names.size()) {
      ERROR("number of couplings != length of list of parameter names");
   }

   fout << std::left << std::setw(width) << "scale";

   for (std::size_t i = 0; i < number_of_couplings; ++i)
      fout << std::left << std::setw(width) << parameter_names[i];

   fout << '\n';
}

/**
 * Write all couplings to a text file.
 *
 * @param file_name name of file to write the data to
 */
template <class Model, class DataGetter>
void Coupling_monitor<Model,DataGetter>::write_to_file(const std::string& file_name) const
{
   if (couplings.empty())
      return;

   std::ofstream filestr(file_name.c_str(), std::ios::out);
   VERBOSE_MSG("Coupling_monitor<>::write_to_file: opening file: "
               << file_name.c_str());
   if (filestr.fail()) {
      ERROR("can't open file " << file_name
            << " for writing running couplings");
      return;
   }

   write_comment_line(filestr);

   // write data
   for (TData::const_iterator it = couplings.begin();
        it != couplings.end(); ++it) {
      if (!filestr.good()) {
         ERROR("file " << file_name << " is corrupted");
         break;
      }

      filestr << std::left << std::setw(width) << it->first;

      // write all gauge couplings in order
      for (int i = 0; i < it->second.size(); ++i) {
         filestr << std::left << std::setw(width) << it->second(i);
      }

      filestr << '\n';
   }

   filestr.close();
   VERBOSE_MSG("Coupling_monitor<>::write_to_file: file written: "
               << file_name.c_str());
}

/**
 * Add running couplings between scale q1 and q2.
 *
 * @param q1 scale to start at
 * @param q2 end scale
 * @param number_of_steps number of steps
 * @param include_endpoint include the endpoint q2 in the running
 *        (false by default)
 */
template <class Model, class DataGetter>
void Coupling_monitor<Model,DataGetter>::run(double q1, double q2,
                                             unsigned int number_of_steps, bool include_endpoint)
{
   if (q1 <= 0.0 || q2 <= 0.0) {
      ERROR("negative scales are not allowed: q1=" << q1 << ", q2=" << q2);
      return;
   }

   if (number_of_steps < 1)
      number_of_steps = 1;

   // if the endpoint should be included, the scale loop must run from
   // (n == 0) to (n == number_of_steps); otherwise it runs from (n == 0) to (n
   // == number_of_steps - 1)
   const unsigned int endpoint_offset = include_endpoint ? 1 : 0;

   // run from q1 to q2
   for (unsigned int n = 0; n < number_of_steps + endpoint_offset; ++n) {
      const double scale = exp(log(q1) + n * (log(q2) - log(q1)) / number_of_steps);
      try {
         model.run_to(scale);
      } catch (const Error&) {
         ERROR("Coupling_monitor::run: run to scale "
               << scale << " failed");
         break;
      }
      couplings.push_back(TData::value_type(scale, data_getter.get_parameters(model)));
   }

   std::sort(couplings.begin(), couplings.end(), TDataComp());
}

}

#endif
