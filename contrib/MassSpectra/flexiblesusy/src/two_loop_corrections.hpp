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
 * @file two_loop_corrections.hpp
 * @brief contains struct for selection of Higgs 2-loop corrections
 */

#ifndef TWO_LOOP_CORRECTIONS_H
#define TWO_LOOP_CORRECTIONS_H

namespace flexiblesusy {

struct Two_loop_corrections {
   Two_loop_corrections()
      : higgs_at_as(true)
      , higgs_ab_as(true)
      , higgs_at_at(true)
      , higgs_atau_atau(true)
      , top_qcd(true)
      {}
   bool higgs_at_as, higgs_ab_as, higgs_at_at, higgs_atau_atau;
   bool top_qcd;
};

} // namespace flexiblesusy

#endif
