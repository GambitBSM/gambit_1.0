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

// File generated at Fri 28 Aug 2015 18:02:21

#ifndef SSDM_INPUT_PARAMETERS_H
#define SSDM_INPUT_PARAMETERS_H

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

struct SSDM_input_parameters {
   double HiggsIN;
   double Lambda2Input;
   double Lambda3Input;
   double mS2Input;
   double Qin;

   SSDM_input_parameters()
      : HiggsIN(0), Lambda2Input(0), Lambda3Input(0), mS2Input(0), Qin(0)

   {}
};

std::ostream& operator<<(std::ostream&, const SSDM_input_parameters&);

} // namespace flexiblesusy

#endif
