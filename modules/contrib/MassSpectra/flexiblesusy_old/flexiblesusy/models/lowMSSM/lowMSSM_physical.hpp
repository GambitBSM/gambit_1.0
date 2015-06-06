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

// File generated at Fri 16 Jan 2015 13:00:25

#ifndef lowMSSM_PHYSICAL_H
#define lowMSSM_PHYSICAL_H

#include "linalg2.hpp"
#include <Eigen/Core>

#include <iosfwd>
#include <string>

namespace flexiblesusy {

struct lowMSSM_physical {
   lowMSSM_physical();
   void clear();
   void print(std::ostream&) const;

   double MVG;
   double MGlu;
   Eigen::Array<double,3,1> MFv;
   double MVP;
   double MVZ;
   Eigen::Array<double,6,1> MSd;
   Eigen::Array<double,3,1> MSv;
   Eigen::Array<double,6,1> MSu;
   Eigen::Array<double,6,1> MSe;
   Eigen::Array<double,2,1> Mhh;
   Eigen::Array<double,2,1> MAh;
   Eigen::Array<double,2,1> MHpm;
   Eigen::Array<double,4,1> MChi;
   Eigen::Array<double,2,1> MCha;
   Eigen::Array<double,3,1> MFe;
   Eigen::Array<double,3,1> MFd;
   Eigen::Array<double,3,1> MFu;
   double MVWm;

   Eigen::Matrix<double,6,6> ZD;
   Eigen::Matrix<double,3,3> ZV;
   Eigen::Matrix<double,6,6> ZU;
   Eigen::Matrix<double,6,6> ZE;
   Eigen::Matrix<double,2,2> ZH;
   Eigen::Matrix<double,2,2> ZA;
   Eigen::Matrix<double,2,2> ZP;
   Eigen::Matrix<std::complex<double>,4,4> ZN;
   Eigen::Matrix<std::complex<double>,2,2> UM;
   Eigen::Matrix<std::complex<double>,2,2> UP;
   Eigen::Matrix<std::complex<double>,3,3> ZEL;
   Eigen::Matrix<std::complex<double>,3,3> ZER;
   Eigen::Matrix<std::complex<double>,3,3> ZDL;
   Eigen::Matrix<std::complex<double>,3,3> ZDR;
   Eigen::Matrix<std::complex<double>,3,3> ZUL;
   Eigen::Matrix<std::complex<double>,3,3> ZUR;

};

std::ostream& operator<<(std::ostream&, const lowMSSM_physical&);

} // namespace flexiblesusy

#endif
