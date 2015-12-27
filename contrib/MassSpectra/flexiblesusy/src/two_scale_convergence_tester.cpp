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

#include "two_scale_convergence_tester.hpp"

#include "numerics2.hpp"

namespace flexiblesusy {

Convergence_tester<Two_scale>::~Convergence_tester()
{
}

bool Convergence_tester<Two_scale>::is_equal(double a, double b)
{
   return flexiblesusy::is_equal(a, b);
}

bool Convergence_tester<Two_scale>::is_zero(double a)
{
   return flexiblesusy::is_zero(a);
}

} // namespace flexiblesusy
