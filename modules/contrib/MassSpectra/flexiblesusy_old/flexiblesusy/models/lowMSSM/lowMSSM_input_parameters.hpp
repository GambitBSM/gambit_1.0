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

// File generated at Fri 16 Jan 2015 12:58:34

#ifndef lowMSSM_INPUT_PARAMETERS_H
#define lowMSSM_INPUT_PARAMETERS_H

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

struct lowMSSM_input_parameters {
   double TanBeta;
   double MuInput;
   Eigen::Matrix<double,3,3> TYdInput;
   Eigen::Matrix<double,3,3> TYeInput;
   Eigen::Matrix<double,3,3> TYuInput;
   double BMuInput;
   Eigen::Matrix<double,3,3> mq2Input;
   Eigen::Matrix<double,3,3> ml2Input;
   Eigen::Matrix<double,3,3> md2Input;
   Eigen::Matrix<double,3,3> mu2Input;
   Eigen::Matrix<double,3,3> me2Input;
   double MassBInput;
   double MassWBInput;
   double MassGInput;

   lowMSSM_input_parameters()
      : TanBeta(0), MuInput(0), TYdInput(Eigen::Matrix<double,3,3>::Zero()),
   TYeInput(Eigen::Matrix<double,3,3>::Zero()), TYuInput(Eigen::Matrix<double,3
   ,3>::Zero()), BMuInput(0), mq2Input(Eigen::Matrix<double,3,3>::Zero()),
   ml2Input(Eigen::Matrix<double,3,3>::Zero()), md2Input(Eigen::Matrix<double,3
   ,3>::Zero()), mu2Input(Eigen::Matrix<double,3,3>::Zero()), me2Input(
   Eigen::Matrix<double,3,3>::Zero()), MassBInput(0), MassWBInput(0),
   MassGInput(0)

   {}
};

std::ostream& operator<<(std::ostream&, const lowMSSM_input_parameters&);

} // namespace flexiblesusy

#endif
