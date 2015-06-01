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

#ifndef NUMERICS_HPP
#define NUMERICS_HPP

#include <cmath>
#include <limits>

namespace flexiblesusy {

template <typename T>
bool is_zero(T a, T prec = std::numeric_limits<T>::epsilon())
{
   return std::fabs(a) < prec;
}

template <typename T>
bool is_equal(T a, T b, T prec = std::numeric_limits<T>::epsilon())
{
   return is_zero(a - b, prec);
}

template <typename T>
bool is_equal_rel(T a, T b, T prec = std::numeric_limits<T>::epsilon())
{
   if (is_equal(a, b, std::numeric_limits<T>::epsilon()))
      return true;

   if (std::fabs(a) < std::numeric_limits<T>::epsilon())
      return is_equal(a, b, prec);

   return std::fabs((a - b)/a) < prec;
}

bool is_finite(const double*, std::size_t length);

template <std::size_t N>
bool is_finite(const double v[N])
{
   bool is_finite = true;

   for (std::size_t i = 0; i < N; i++)
      is_finite = is_finite && std::isfinite(v[i]);

   return is_finite;
}

} // namespace flexiblesusy

#endif
