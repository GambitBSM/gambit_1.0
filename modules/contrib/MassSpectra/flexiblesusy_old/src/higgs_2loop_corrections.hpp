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

// File generated at @DateAndTime@

/**
 * @file higgs_2loop_corrections.hpp
 * @brief contains struct for selection of Higgs 2-loop corrections
 */

#ifndef HIGGS_2LOOP_CORRECTIONS_H
#define HIGGS_2LOOP_CORRECTIONS_H

namespace flexiblesusy {

struct Higgs_2loop_corrections {
   Higgs_2loop_corrections()
      : at_as(true), ab_as(true), at_at(true), atau_atau(true)
      {}
   bool at_as, ab_as, at_at, atau_atau;
};

} // namespace flexiblesusy

#endif
