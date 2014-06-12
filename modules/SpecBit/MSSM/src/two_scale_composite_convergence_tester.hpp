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

#ifndef TWO_SCALE_COMPOSITE_CONVERGENCE_TESTER_H
#define TWO_SCALE_COMPOSITE_CONVERGENCE_TESTER_H

#include "composite_convergence_tester.hpp"
#include "two_scale_convergence_tester.hpp"
#include <vector>

namespace flexiblesusy {

class Two_scale;

/**
 * @class Composite_convergence_tester
 * @brief A composite convergence tester
 *
 * This class collects convergence testers that will be checked when
 * Composite_convergence_tester::accuracy_goal_reached() is called.
 */

template<>
class Composite_convergence_tester<Two_scale> : public Convergence_tester<Two_scale> {
public:
   Composite_convergence_tester();
   virtual ~Composite_convergence_tester();

   virtual bool accuracy_goal_reached();
   virtual unsigned int max_iterations() const;
   void add_convergence_tester(Convergence_tester<Two_scale>*);

private:
   std::vector<Convergence_tester<Two_scale>*> testers;
};

}

#endif
