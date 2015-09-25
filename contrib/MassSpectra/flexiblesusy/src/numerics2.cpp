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

#include "numerics2.hpp"
#include <cmath>
#include <cstddef>

namespace flexiblesusy {

bool is_finite(const double* v, std::size_t length)
{
   bool is_finite = true;

   for (std::size_t i = 0; i < length; i++)
      is_finite = is_finite && std::isfinite(v[i]);

   return is_finite;
}

} // namespace flexiblesusy
