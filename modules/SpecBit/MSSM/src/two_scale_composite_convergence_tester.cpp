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

#include "two_scale_composite_convergence_tester.hpp"
#include <cassert>

namespace flexiblesusy {

Composite_convergence_tester::Composite_convergence_tester()
   : Convergence_tester<Two_scale>()
   , testers()
{
}

Composite_convergence_tester::~Composite_convergence_tester()
{
}

/**
 * Calls the Convergence_tester<Two_scale>::accuracy_goal_reached()
 * functions of all convergence testers.  If at least one of them
 * returns false, then false is returned.  Othewise (all convergence
 * testers yield true) true is returned.
 *
 * @note An alternative implementation would be: When the first
 * convergence tester returns false, then false is returned.
 * Otherwise (all convergence testers yield true) true is returned.
 * This implementation is currently not realized, because it is not
 * ensured that all
 * Convergence_tester<Two_scale>::accuracy_goal_reached() functions
 * are called.
 *
 * @return true if and only if all accuracy_goal_reached() function
 * calls of all convergence testers return true.  Otherewise false is
 * returned.
 */
bool Composite_convergence_tester::accuracy_goal_reached()
{
   bool precision_reached = true;

   for (std::vector<Convergence_tester<Two_scale>*>::iterator
           it = testers.begin(), end = testers.end();
        it != end; ++it) {
      const bool tester_result = (*it)->accuracy_goal_reached();
      precision_reached = precision_reached && tester_result;
   }

   return precision_reached;
}

void Composite_convergence_tester::add_convergence_tester(Convergence_tester<Two_scale>* t)
{
   assert(t && "<Composite_convergence_tester::add_convergence_tester> "
          "convergence tester must not be zero");
   testers.push_back(t);
}

}
