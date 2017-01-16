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

#ifndef GM2CALC_INTERFACE_H
#define GM2CALC_INTERFACE_H

#include <Eigen/Core>

/**
 * @file gm2calc_interface.hpp
 * @brief contains declarations of GM2Calc interface functions
 */

namespace flexiblesusy {

/**
 * @class GM2Calc_data
 * @brief data to be passed to GM2Calc
 */
struct GM2Calc_data {
   GM2Calc_data();                ///< initializes members to GM2Calc default values
   void initialize();             ///< initializes members to GM2Calc default values

   double alpha_em_MZ;            ///< alpha_em(MZ)
   double alpha_em_0;             ///< alpha_em(0)
   double alpha_s_MZ;             ///< alpha_s(MZ) SM MS-bar
   double MZ;                     ///< Z pole mass
   double MW;                     ///< W pole mass
   double mb_mb;                  ///< mb(mb) SM MS-bar
   double MT;                     ///< top quark pole mass
   double MTau;                   ///< tau lepton pole mass
   double MM;                     ///< muon pole mass
   double MA0;                    ///< CP-odd Higgs pole mass
   double MSvm;                   ///< muon sneutrino pole mass
   Eigen::Array<double,2,1> MSm;  ///< smuon pole masses
   Eigen::Array<double,2,1> MCha; ///< chargino pole masses
   Eigen::Array<double,4,1> MChi; ///< neutralino pole masses
   double scale;                  ///< renormalization scale
   double TB;                     ///< tan(beta) DR-bar
   double Mu;                     ///< mu parameter (initial guess)
   double M1;                     ///< bino mass parameter (initial guess)
   double M2;                     ///< wino mass parameter (initial guess)
   double M3;                     ///< gluino mass parameter
   Eigen::Matrix<double,3,3> mq2; ///< left-handed squark mass parameters squared
   Eigen::Matrix<double,3,3> mu2; ///< right-handed up-type squark mass parameters squared
   Eigen::Matrix<double,3,3> md2; ///< right-handed down-type squark mass parameters squared
   Eigen::Matrix<double,3,3> ml2; ///< left-handed slepton mass parameters squared
   Eigen::Matrix<double,3,3> me2; ///< right-handed down-type slepton mass parameters squared
   Eigen::Matrix<double,3,3> Au;  ///< up-type squark trilinear coupling
   Eigen::Matrix<double,3,3> Ad;  ///< down-type squark trilinear coupling
   Eigen::Matrix<double,3,3> Ae;  ///< down-type slepton trilinear coupling
};

/// calculates amu using GM2Calc
double gm2calc_calculate_amu(const GM2Calc_data&);

/// calculates uncertainty of amu using GM2Calc
double gm2calc_calculate_amu_uncertainty(const GM2Calc_data&);

} // namespace flexiblesusy

#endif
