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

#include "two_scale_running_precision.hpp"
#include "logger.hpp"

#include <algorithm>
#include <cmath>
#include <limits>

namespace flexiblesusy {

Two_scale_constant_precision::Two_scale_constant_precision(double precision_)
   : Two_scale_running_precision()
   , precision(precision_)
{
}

Two_scale_constant_precision::~Two_scale_constant_precision()
{
}

double Two_scale_constant_precision::get_precision(unsigned)
{
   return precision;
}

Two_scale_increasing_precision::Two_scale_increasing_precision(double decreasing_factor_, double minimum_precision_)
   : Two_scale_running_precision()
   , decreasing_factor(decreasing_factor_)
   , minimum_precision(minimum_precision_)
{
   if (decreasing_factor < std::numeric_limits<double>::min())
      FATAL("<Two_scale_increasing_precision>: decreasing factor "
            << decreasing_factor << " is too small");
}

Two_scale_increasing_precision::~Two_scale_increasing_precision()
{
}

double Two_scale_increasing_precision::get_precision(unsigned iteration)
{
   return std::max(exp(- static_cast<double>(iteration + 1) * log(decreasing_factor)),
                   minimum_precision);
}

}
