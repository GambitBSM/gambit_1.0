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

// File generated at Mon 1 Jun 2015 13:05:02

#ifndef MSSMNoFV_INPUT_PARAMETERS_H
#define MSSMNoFV_INPUT_PARAMETERS_H

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

struct MSSMNoFV_input_parameters {
   double TanBeta;
   int SignMu;
   double Qin;
   double M1;
   double M2;
   double M3;
   double AtIN;
   double AbIN;
   double AtauIN;
   double AcIN;
   double AsIN;
   double AmuonIN;
   double AuIN;
   double AdIN;
   double AeIN;
   double mHd2IN;
   double mHu2IN;
   double ml11IN;
   double ml22IN;
   double ml33IN;
   double me11IN;
   double me22IN;
   double me33IN;
   double mq11IN;
   double mq22IN;
   double mq33IN;
   double mu11IN;
   double mu22IN;
   double mu33IN;
   double md11IN;
   double md22IN;
   double md33IN;

   MSSMNoFV_input_parameters()
      : TanBeta(0), SignMu(1), Qin(0), M1(0), M2(0), M3(0), AtIN(0), AbIN(0),
   AtauIN(0), AcIN(0), AsIN(0), AmuonIN(0), AuIN(0), AdIN(0), AeIN(0), mHd2IN(0
   ), mHu2IN(0), ml11IN(0), ml22IN(0), ml33IN(0), me11IN(0), me22IN(0), me33IN(
   0), mq11IN(0), mq22IN(0), mq33IN(0), mu11IN(0), mu22IN(0), mu33IN(0), md11IN
   (0), md22IN(0), md33IN(0)

   {}
};

std::ostream& operator<<(std::ostream&, const MSSMNoFV_input_parameters&);

} // namespace flexiblesusy

#endif
