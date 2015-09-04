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

// File generated at Mon 1 Jun 2015 12:42:30

#ifndef NSM_INPUT_PARAMETERS_H
#define NSM_INPUT_PARAMETERS_H

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

struct NSM_input_parameters {
   double Lambda1Input;
   double Lambda2Input;
   double Lambda3Input;
   double Lambda4Input;
   double Lambda5Input;
   double vSInput;
   double Qin;

   NSM_input_parameters()
      : Lambda1Input(0), Lambda2Input(0), Lambda3Input(0), Lambda4Input(0),
   Lambda5Input(0), vSInput(0), Qin(0)

   {}
};

std::ostream& operator<<(std::ostream&, const NSM_input_parameters&);

} // namespace flexiblesusy

#endif
