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

// File generated at Wed 28 Oct 2015 11:36:20

#include "SSM_physical.hpp"
#include "slha_io.hpp"

#include <iostream>

#define LOCALPHYSICAL(p) p

namespace flexiblesusy {

SSM_physical::SSM_physical()
   :
    MHp(0), MFv(Eigen::Array<double,3,1>::Zero()), MAh(0), MVZ(0), Mhh(
       Eigen::Array<double,2,1>::Zero()), MFd(Eigen::Array<double,3,1>::Zero()),
       MFu(Eigen::Array<double,3,1>::Zero()), MFe(Eigen::Array<double,3,1>::Zero()
       ), MVG(0), MVP(0), MVWp(0)

   , ZH(Eigen::Matrix<double,2,2>::Zero()), Vd(Eigen::Matrix<std::complex<
      double>,3,3>::Zero()), Ud(Eigen::Matrix<std::complex<double>,3,3>::Zero()),
      Vu(Eigen::Matrix<std::complex<double>,3,3>::Zero()), Uu(Eigen::Matrix<
      std::complex<double>,3,3>::Zero()), Ve(Eigen::Matrix<std::complex<double>,3,
      3>::Zero()), Ue(Eigen::Matrix<std::complex<double>,3,3>::Zero())

{
}

void SSM_physical::clear()
{
   MHp = 0.;
   MFv = Eigen::Matrix<double,3,1>::Zero();
   MAh = 0.;
   MVZ = 0.;
   Mhh = Eigen::Matrix<double,2,1>::Zero();
   ZH = Eigen::Matrix<double,2,2>::Zero();
   MFd = Eigen::Matrix<double,3,1>::Zero();
   Vd = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Ud = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFu = Eigen::Matrix<double,3,1>::Zero();
   Vu = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Uu = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MFe = Eigen::Matrix<double,3,1>::Zero();
   Ve = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   Ue = Eigen::Matrix<std::complex<double>,3,3>::Zero();
   MVG = 0.;
   MVP = 0.;
   MVWp = 0.;

}

/**
 * Convert masses and mixing matrices to Haber-Kane convention:
 * Fermion masses are always positive and mixing matrices are allowed
 * to be complex.
 */
void SSM_physical::convert_to_hk()
{

}

/**
 * Convert masses and mixing matrices to SLHA convention: Fermion
 * mixing matrices are always real and fermion masses are allowed to
 * be negative.
 */
void SSM_physical::convert_to_slha()
{

}

void SSM_physical::print(std::ostream& ostr) const
{
   ostr << "----------------------------------------\n"
           "pole masses:\n"
           "----------------------------------------\n";
   ostr << "MHp = " << MHp << '\n';
   ostr << "MFv = " << MFv.transpose() << '\n';
   ostr << "MAh = " << MAh << '\n';
   ostr << "MVZ = " << MVZ << '\n';
   ostr << "Mhh = " << Mhh.transpose() << '\n';
   ostr << "MFd = " << MFd.transpose() << '\n';
   ostr << "MFu = " << MFu.transpose() << '\n';
   ostr << "MFe = " << MFe.transpose() << '\n';
   ostr << "MVG = " << MVG << '\n';
   ostr << "MVP = " << MVP << '\n';
   ostr << "MVWp = " << MVWp << '\n';

   ostr << "----------------------------------------\n"
           "pole mass mixing matrices:\n"
           "----------------------------------------\n";
   ostr << "ZH = " << ZH << '\n';
   ostr << "Vd = " << Vd << '\n';
   ostr << "Ud = " << Ud << '\n';
   ostr << "Vu = " << Vu << '\n';
   ostr << "Uu = " << Uu << '\n';
   ostr << "Ve = " << Ve << '\n';
   ostr << "Ue = " << Ue << '\n';

}

std::ostream& operator<<(std::ostream& ostr, const SSM_physical& phys_pars)
{
   phys_pars.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
