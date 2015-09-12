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

/**
 * @file SSDM_two_scale_model_slha.hpp
 * @brief contains wrapper class for model class in SLHA convention
 */

// File generated at Fri 28 Aug 2015 18:02:24

#ifndef SSDM_TWO_SCALE_SLHA_H
#define SSDM_TWO_SCALE_SLHA_H

#include "SSDM_two_scale_model.hpp"
#include "SSDM_physical.hpp"
#include "SSDM_model_slha.hpp"

namespace flexiblesusy {

class Two_scale;

/**
 * @class SSDM_slha<Two_scale>
 * @brief model class wrapper in SLHA convention
 */

template<>
class SSDM_slha<Two_scale> : public SSDM<Two_scale> {
public:
   explicit SSDM_slha(const SSDM_input_parameters& input_ = SSDM_input_parameters());
   explicit SSDM_slha(const SSDM<Two_scale>&);
   virtual ~SSDM_slha();

   virtual void clear();
   void convert_to_slha(); ///< converts pole masses and couplings to SLHA convention
   const Eigen::Matrix<std::complex<double>,3,3>& get_ckm_matrix() const { return ckm; }
   const Eigen::Matrix<std::complex<double>,3,3>& get_pmns_matrix() const { return pmns; }
   const SSDM_physical& get_physical_slha() const; ///< returns pole masses to SLHA convention
   SSDM_physical& get_physical_slha(); ///< returns pole masses to SLHA convention

   // interface functions
   virtual void calculate_spectrum();
   virtual void print(std::ostream&) const;

   double get_MVG_pole_slha() const { return physical_slha.MVG; }
   double get_MHp_pole_slha() const { return physical_slha.MHp; }
   double get_Mss_pole_slha() const { return physical_slha.Mss; }
   const Eigen::Array<double,3,1>& get_MFv_pole_slha() const { return physical_slha.MFv; }
   double get_MFv_pole_slha(int i) const { return physical_slha.MFv(i); }
   double get_MAh_pole_slha() const { return physical_slha.MAh; }
   double get_Mhh_pole_slha() const { return physical_slha.Mhh; }
   double get_MVP_pole_slha() const { return physical_slha.MVP; }
   double get_MVZ_pole_slha() const { return physical_slha.MVZ; }
   const Eigen::Array<double,3,1>& get_MFd_pole_slha() const { return physical_slha.MFd; }
   double get_MFd_pole_slha(int i) const { return physical_slha.MFd(i); }
   const Eigen::Array<double,3,1>& get_MFu_pole_slha() const { return physical_slha.MFu; }
   double get_MFu_pole_slha(int i) const { return physical_slha.MFu(i); }
   const Eigen::Array<double,3,1>& get_MFe_pole_slha() const { return physical_slha.MFe; }
   double get_MFe_pole_slha(int i) const { return physical_slha.MFe(i); }
   double get_MVWp_pole_slha() const { return physical_slha.MVWp; }

   const Eigen::Matrix<std::complex<double>,3,3>& get_Vd_pole_slha() const { return physical_slha.Vd; }
   const std::complex<double>& get_Vd_pole_slha(int i, int k) const { return physical_slha.Vd(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ud_pole_slha() const { return physical_slha.Ud; }
   const std::complex<double>& get_Ud_pole_slha(int i, int k) const { return physical_slha.Ud(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Vu_pole_slha() const { return physical_slha.Vu; }
   const std::complex<double>& get_Vu_pole_slha(int i, int k) const { return physical_slha.Vu(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Uu_pole_slha() const { return physical_slha.Uu; }
   const std::complex<double>& get_Uu_pole_slha(int i, int k) const { return physical_slha.Uu(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ve_pole_slha() const { return physical_slha.Ve; }
   const std::complex<double>& get_Ve_pole_slha(int i, int k) const { return physical_slha.Ve(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ue_pole_slha() const { return physical_slha.Ue; }
   const std::complex<double>& get_Ue_pole_slha(int i, int k) const { return physical_slha.Ue(i,k); }

   const Eigen::Array<double,3,1>& get_Yu_slha() const { return Yu_slha; }
   double get_Yu_slha(int i) const { return Yu_slha(i); }
   const Eigen::Array<double,3,1>& get_Yd_slha() const { return Yd_slha; }
   double get_Yd_slha(int i) const { return Yd_slha(i); }
   const Eigen::Array<double,3,1>& get_Ye_slha() const { return Ye_slha; }
   double get_Ye_slha(int i) const { return Ye_slha(i); }



   const Eigen::Matrix<std::complex<double>,3,3>& get_Vd_slha() const { return Vd_slha; }
   const std::complex<double>& get_Vd_slha(int i, int k) const { return Vd_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Vu_slha() const { return Vu_slha; }
   const std::complex<double>& get_Vu_slha(int i, int k) const { return Vu_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ud_slha() const { return Ud_slha; }
   const std::complex<double>& get_Ud_slha(int i, int k) const { return Ud_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Uu_slha() const { return Uu_slha; }
   const std::complex<double>& get_Uu_slha(int i, int k) const { return Uu_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ve_slha() const { return Ve_slha; }
   const std::complex<double>& get_Ve_slha(int i, int k) const { return Ve_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_Ue_slha() const { return Ue_slha; }
   const std::complex<double>& get_Ue_slha(int i, int k) const { return Ue_slha(i,k); }


private:
   SSDM_physical physical_slha; ///< contains the pole masses and mixings in slha convention
   Eigen::Matrix<std::complex<double>,3,3> ckm;
   Eigen::Matrix<std::complex<double>,3,3> pmns;
   Eigen::Array<double,3,1> Yu_slha;
   Eigen::Array<double,3,1> Yd_slha;
   Eigen::Array<double,3,1> Ye_slha;

   Eigen::Matrix<std::complex<double>,3,3> Vd_slha;
   Eigen::Matrix<std::complex<double>,3,3> Vu_slha;
   Eigen::Matrix<std::complex<double>,3,3> Ud_slha;
   Eigen::Matrix<std::complex<double>,3,3> Uu_slha;
   Eigen::Matrix<std::complex<double>,3,3> Ve_slha;
   Eigen::Matrix<std::complex<double>,3,3> Ue_slha;




   void calculate_ckm_matrix();
   void calculate_pmns_matrix();
   void convert_yukawa_couplings_to_slha();
   void convert_trilinear_couplings_to_slha();
   void convert_soft_squared_masses_to_slha();
};

} // namespace flexiblesusy

#endif
