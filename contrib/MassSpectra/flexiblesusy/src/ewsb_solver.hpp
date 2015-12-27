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

#ifndef EWSB_SOLVER_H
#define EWSB_SOLVER_H

namespace flexiblesusy {

/**
 * @class EWSB_solver
 * @brief interface for numeric EWSB solvers
 */
class EWSB_solver {
public:
   enum Status : int { SUCCESS = 0, FAIL = 1 };

   virtual ~EWSB_solver() {}
   virtual int solve(const double*) = 0;
   virtual double get_solution(unsigned) = 0;
};

} // namespace flexiblesusy

#endif
