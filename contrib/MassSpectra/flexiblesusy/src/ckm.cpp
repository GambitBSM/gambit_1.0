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

#include "ckm.hpp"
#include "ew_input.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

CKM_parameters::CKM_parameters()
   : theta_12(0.)
   , theta_13(0.)
   , theta_23(0.)
   , delta(0.)
{
}

void CKM_parameters::reset_to_diagonal()
{
   theta_12 = 0.;
   theta_13 = 0.;
   theta_23 = 0.;
   delta    = 0.;
}

void CKM_parameters::reset_to_observation()
{
   theta_12 = Electroweak_constants::CKM_THETA12;
   theta_13 = Electroweak_constants::CKM_THETA13;
   theta_23 = Electroweak_constants::CKM_THETA23;
   delta    = Electroweak_constants::CKM_DELTA;
}

/**
 * Calculates V_CKM angles from Wolfenstein parameters (see
 * hep-ph/0406184)
 */
void CKM_parameters::set_from_wolfenstein(double lambdaW, double aCkm,
                                          double rhobar, double etabar)
{
   assert(Abs(lambdaW) <= 1. && "Error: Wolfenstein lambda out of range!");
   assert(Abs(aCkm)    <= 1. && "Error: Wolfenstein A parameter out of range!");
   assert(Abs(rhobar)  <= 1. && "Error: Wolfenstein rho-bar parameter out of range!");
   assert(Abs(etabar)  <= 1. && "Error: Wolfenstein eta-bar parameter out of range!");

   theta_12 = ArcSin(lambdaW);
   theta_23 = ArcSin(aCkm * Sqr(lambdaW));

   const double lambdaW3 = Power(lambdaW, 3);
   const double lambdaW4 = Power(lambdaW, 4);

   const std::complex<double> rpe(rhobar, etabar);
   const std::complex<double> V13conj = aCkm * lambdaW3 * rpe
      * Sqrt(1.0 - Sqr(aCkm) * lambdaW4) /
      Sqrt(1.0 - Sqr(lambdaW)) / (1.0 - Sqr(aCkm) * lambdaW4 * rpe);

   if (std::isfinite(Re(V13conj)) && std::isfinite(Im(V13conj))) {
      theta_13 = ArcSin(Abs(V13conj));
      delta = Arg(V13conj);
   }
}

/**
 * Calculates Wolfenstein parameters from V_CKM angles (see
 * hep-ph/0406184)
 */
void CKM_parameters::get_wolfenstein(double& lambdaW, double& aCkm,
                                     double& rhobar, double& etabar)
{
   const double sin_12 = Sin(theta_12);
   const double sin_13 = Sin(theta_13);
   const double sin_23 = Sin(theta_23);

   // Eq. (11.4) from PDG
   lambdaW  = sin_12;
   aCkm     = sin_23 / Sqr(lambdaW);

   if (!std::isfinite(aCkm))
      aCkm = 0.;

   const double c = Sqrt((1.0 - Sqr(sin_23)) / (1.0 - Sqr(lambdaW)));
   const std::complex<double> eid(std::polar(1.0, delta));
   const std::complex<double> r(sin_13 * eid /
      (c * aCkm * Power(lambdaW,3) + sin_13 * eid * Sqr(sin_23)));

   rhobar = std::isfinite(Re(r)) ? Re(r) : 0.;
   etabar = std::isfinite(Im(r)) ? Im(r) : 0.;
}

Eigen::Matrix<double,3,3> CKM_parameters::get_real_ckm() const
{
   const std::complex<double> eID(std::polar(1.0, delta));
   const double s12 = Sin(theta_12);
   const double s13 = Sin(theta_13);
   const double s23 = Sin(theta_23);
   const double c12 = Cos(theta_12);
   const double c13 = Cos(theta_13);
   const double c23 = Cos(theta_23);

   // set phase factor e^(i delta) to +1 or -1 depending on the sign
   // of its real part
   const int pf = Sign(Re(eID));

   Eigen::Matrix<double,3,3> ckm_matrix;
   ckm_matrix(0, 0) = c12 * c13;
   ckm_matrix(0, 1) = s12 * c13;
   ckm_matrix(0, 2) = pf * s13;
   ckm_matrix(1, 0) = -s12 * c23 - pf * c12 * s23 * s13;
   ckm_matrix(1, 1) = c12 * c23 - pf * s12 * s23 * s13;
   ckm_matrix(1, 2) = s23 * c13;
   ckm_matrix(2, 0) = s12 * s23 - pf * c12 * c23 * s13;
   ckm_matrix(2, 1) = -c12 * s23 - pf * s12 * c23 * s13;
   ckm_matrix(2, 2) = c23 * c13;

   return ckm_matrix;
}

Eigen::Matrix<std::complex<double>,3,3> CKM_parameters::get_complex_ckm() const
{
   const std::complex<double> eID(std::polar(1.0, delta));
   const double s12 = Sin(theta_12);
   const double s13 = Sin(theta_13);
   const double s23 = Sin(theta_23);
   const double c12 = Cos(theta_12);
   const double c13 = Cos(theta_13);
   const double c23 = Cos(theta_23);

   Eigen::Matrix<std::complex<double>,3,3> ckm_matrix;
   ckm_matrix(0, 0) = c12 * c13;
   ckm_matrix(0, 1) = s12 * c13;
   ckm_matrix(0, 2) = s13 / eID;
   ckm_matrix(1, 0) = -s12 * c23 - c12 * s23 * s13 * eID;
   ckm_matrix(1, 1) = c12 * c23 - s12 * s23 * s13 * eID;
   ckm_matrix(1, 2) = s23 * c13;
   ckm_matrix(2, 0) = s12 * s23 - c12 * c23 * s13 * eID;
   ckm_matrix(2, 1) = -c12 * s23 - s12 * c23 * s13 * eID;
   ckm_matrix(2, 2) = c23 * c13;

   return ckm_matrix;
}

void CKM_parameters::to_pdg_convention(Eigen::Matrix<double,3,3>& Vu,
                                       Eigen::Matrix<double,3,3>& Vd,
                                       Eigen::Matrix<double,3,3>& Uu,
                                       Eigen::Matrix<double,3,3>& Ud)
{
   Eigen::Matrix<double,3,3> ckm(Vu*Vd.adjoint());
   to_pdg_convention(ckm, Vu, Vd, Uu, Ud);
}

void CKM_parameters::to_pdg_convention(Eigen::Matrix<double,3,3>& ckm,
                                       Eigen::Matrix<double,3,3>& Vu,
                                       Eigen::Matrix<double,3,3>& Vd,
                                       Eigen::Matrix<double,3,3>& Uu,
                                       Eigen::Matrix<double,3,3>& Ud)
{
   Eigen::Matrix<double,3,3> signs_U(Eigen::Matrix<double,3,3>::Identity()),
      signs_D(Eigen::Matrix<double,3,3>::Identity());

   // make diagonal elements positive
   for (int i = 0; i < 3; i++) {
      if (ckm(i, i) < 0.) {
         signs_U(i, i) = -1.;
         for (int j = 0; j < 3; j++)
            ckm(i, j) *= -1;
      }
   }

   // make 12 element positive while keeping diagonal elements positive
   if (ckm(0, 1) < 0.) {
      signs_D(1, 1) = -1.;
      signs_U(1, 1) *= -1;
      for (int j = 0; j < 3; j++) {
         ckm(1, j) *= -1;
         ckm(j, 1) *= -1;
      }
   }

   // make 23 element positive while keeping diagonal elements positive
   if (ckm(1, 2) < 0.) {
      signs_D(2, 2) = -1.;
      signs_U(2, 2) *= -1;
      for (int j = 0; j < 3; j++) {
         ckm(2, j) *= -1;
         ckm(j, 2) *= -1;
      }
   }

   Vu = signs_U * Vu;
   Uu = signs_U * Uu;
   Vd = signs_D * Vd;
   Ud = signs_D * Ud;
}

void CKM_parameters::to_pdg_convention(Eigen::Matrix<std::complex<double>,3,3>& Vu,
                                       Eigen::Matrix<std::complex<double>,3,3>& Vd,
                                       Eigen::Matrix<std::complex<double>,3,3>& Uu,
                                       Eigen::Matrix<std::complex<double>,3,3>& Ud)
{
   Eigen::Matrix<std::complex<double>,3,3> ckm(Vu*Vd.adjoint());
   to_pdg_convention(ckm, Vu, Vd, Uu, Ud);
}

void CKM_parameters::to_pdg_convention(Eigen::Matrix<std::complex<double>,3,3>& ckm,
                                       Eigen::Matrix<std::complex<double>,3,3>& Vu,
                                       Eigen::Matrix<std::complex<double>,3,3>& Vd,
                                       Eigen::Matrix<std::complex<double>,3,3>& Uu,
                                       Eigen::Matrix<std::complex<double>,3,3>& Ud)
{
   // currently we convert only real part of mixing matrices

   Eigen::Matrix<double,3,3> ckm_real(ckm.real());
   Eigen::Matrix<double,3,3> Vu_real(Vu.real());
   Eigen::Matrix<double,3,3> Vd_real(Vd.real());
   Eigen::Matrix<double,3,3> Uu_real(Uu.real());
   Eigen::Matrix<double,3,3> Ud_real(Ud.real());

   to_pdg_convention(ckm_real, Vu_real, Vd_real, Uu_real, Ud_real);

   ckm.real() = ckm_real;
   Vu.real() = Vu_real;
   Vd.real() = Vd_real;
   Uu.real() = Uu_real;
   Ud.real() = Ud_real;
}

} // namespace flexiblesusy
