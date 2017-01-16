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

#ifndef TWO_SCALE_CONVERGENCE_TESTER_H
#define TWO_SCALE_CONVERGENCE_TESTER_H

#include "convergence_tester.hpp"

namespace flexiblesusy {

class Two_scale;

template<>
class Convergence_tester<Two_scale> {
public:
   virtual ~Convergence_tester();
   virtual bool accuracy_goal_reached() = 0;
   virtual unsigned int max_iterations() const = 0;

protected:
   static bool is_equal(double, double);
   static bool is_zero(double);
};

}

#endif
