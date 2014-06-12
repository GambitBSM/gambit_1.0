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

#include "scan.hpp"
#include <cmath>

namespace flexiblesusy {

std::vector<double> float_range(double start, double stop,
                                unsigned long number_of_steps)
{
   const double step_size = (stop - start) / number_of_steps;
   std::vector<double> result(number_of_steps);

   for (unsigned long i = 0; i < number_of_steps; ++i) {
      const double point = start + i * step_size;
      result[i] = point;
   }

   return result;
}

std::vector<double> float_range_log(double start, double stop,
                                    unsigned long number_of_steps)
{
   if (number_of_steps == 0)
      return std::vector<double>();

   const double step_size = (log(stop) - log(start)) / number_of_steps;
   std::vector<double> result(number_of_steps);
   result[0] = start;

   for (unsigned long i = 1; i < number_of_steps; ++i) {
      const double point = exp(step_size + log(result[i-1]));
      result[i] = point;
   }

   return result;
}

} // namespace flexiblesusy
