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

// File generated at Mon 1 Jun 2015 13:12:21

#ifndef NUHMSSM_INPUT_PARAMETERS_H
#define NUHMSSM_INPUT_PARAMETERS_H

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

struct NUHMSSM_input_parameters {
   double m0;
   double m12;
   double TanBeta;
   int SignMu;
   double Azero;
   double mHd2In;
   double mHu2In;

   NUHMSSM_input_parameters()
      : m0(0), m12(0), TanBeta(0), SignMu(1), Azero(0), mHd2In(0), mHu2In(0)

   {}
};

std::ostream& operator<<(std::ostream&, const NUHMSSM_input_parameters&);

} // namespace flexiblesusy

#endif
