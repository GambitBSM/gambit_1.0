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
 * @file MSSMatMGUT_two_scale_model_slha.hpp
 * @brief contains wrapper class for model class in SLHA convention
 */

// File generated at Fri 16 Jan 2015 13:05:07

#ifndef MSSMatMGUT_TWO_SCALE_SLHA_H
#define MSSMatMGUT_TWO_SCALE_SLHA_H

#include "MSSMatMGUT_two_scale_model.hpp"
#include "MSSMatMGUT_physical.hpp"
#include "MSSMatMGUT_model_slha.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

class Two_scale;

/**
 * @class MSSMatMGUT_slha<Two_scale>
 * @brief model class wrapper in SLHA convention
 */

template<>
class MSSMatMGUT_slha<Two_scale> : public MSSMatMGUT<Two_scale> {
public:
   explicit MSSMatMGUT_slha(const MSSMatMGUT_input_parameters& input_ = MSSMatMGUT_input_parameters());
   explicit MSSMatMGUT_slha(const MSSMatMGUT<Two_scale>&);
   virtual ~MSSMatMGUT_slha();

   virtual void clear();
   void convert_to_slha(); ///< converts pole masses to SLHA convention
   const MSSMatMGUT_physical& get_physical_slha() const; ///< returns pole masses to SLHA convention
   MSSMatMGUT_physical& get_physical_slha(); ///< returns pole masses to SLHA convention

   // interface functions
   virtual void calculate_spectrum();
   virtual void print(std::ostream&) const;

   double get_MVG_pole_slha() const { return physical_slha.MVG; }
   double get_MGlu_pole_slha() const { return physical_slha.MGlu; }
   const Eigen::Array<double,3,1>& get_MFv_pole_slha() const { return physical_slha.MFv; }
   double get_MFv_pole_slha(int i) const { return physical_slha.MFv(i); }
   double get_MVP_pole_slha() const { return physical_slha.MVP; }
   double get_MVZ_pole_slha() const { return physical_slha.MVZ; }
   const Eigen::Array<double,6,1>& get_MSd_pole_slha() const { return physical_slha.MSd; }
   double get_MSd_pole_slha(int i) const { return physical_slha.MSd(i); }
   const Eigen::Array<double,3,1>& get_MSv_pole_slha() const { return physical_slha.MSv; }
   double get_MSv_pole_slha(int i) const { return physical_slha.MSv(i); }
   const Eigen::Array<double,6,1>& get_MSu_pole_slha() const { return physical_slha.MSu; }
   double get_MSu_pole_slha(int i) const { return physical_slha.MSu(i); }
   const Eigen::Array<double,6,1>& get_MSe_pole_slha() const { return physical_slha.MSe; }
   double get_MSe_pole_slha(int i) const { return physical_slha.MSe(i); }
   const Eigen::Array<double,2,1>& get_Mhh_pole_slha() const { return physical_slha.Mhh; }
   double get_Mhh_pole_slha(int i) const { return physical_slha.Mhh(i); }
   const Eigen::Array<double,2,1>& get_MAh_pole_slha() const { return physical_slha.MAh; }
   double get_MAh_pole_slha(int i) const { return physical_slha.MAh(i); }
   const Eigen::Array<double,2,1>& get_MHpm_pole_slha() const { return physical_slha.MHpm; }
   double get_MHpm_pole_slha(int i) const { return physical_slha.MHpm(i); }
   const Eigen::Array<double,4,1>& get_MChi_pole_slha() const { return physical_slha.MChi; }
   double get_MChi_pole_slha(int i) const { return physical_slha.MChi(i); }
   const Eigen::Array<double,2,1>& get_MCha_pole_slha() const { return physical_slha.MCha; }
   double get_MCha_pole_slha(int i) const { return physical_slha.MCha(i); }
   const Eigen::Array<double,3,1>& get_MFe_pole_slha() const { return physical_slha.MFe; }
   double get_MFe_pole_slha(int i) const { return physical_slha.MFe(i); }
   const Eigen::Array<double,3,1>& get_MFd_pole_slha() const { return physical_slha.MFd; }
   double get_MFd_pole_slha(int i) const { return physical_slha.MFd(i); }
   const Eigen::Array<double,3,1>& get_MFu_pole_slha() const { return physical_slha.MFu; }
   double get_MFu_pole_slha(int i) const { return physical_slha.MFu(i); }
   double get_MVWm_pole_slha() const { return physical_slha.MVWm; }

   const Eigen::Matrix<double,6,6>& get_ZD_pole_slha() const { return physical_slha.ZD; }
   double get_ZD_pole_slha(int i, int k) const { return physical_slha.ZD(i,k); }
   const Eigen::Matrix<double,3,3>& get_ZV_pole_slha() const { return physical_slha.ZV; }
   double get_ZV_pole_slha(int i, int k) const { return physical_slha.ZV(i,k); }
   const Eigen::Matrix<double,6,6>& get_ZU_pole_slha() const { return physical_slha.ZU; }
   double get_ZU_pole_slha(int i, int k) const { return physical_slha.ZU(i,k); }
   const Eigen::Matrix<double,6,6>& get_ZE_pole_slha() const { return physical_slha.ZE; }
   double get_ZE_pole_slha(int i, int k) const { return physical_slha.ZE(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZH_pole_slha() const { return physical_slha.ZH; }
   double get_ZH_pole_slha(int i, int k) const { return physical_slha.ZH(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZA_pole_slha() const { return physical_slha.ZA; }
   double get_ZA_pole_slha(int i, int k) const { return physical_slha.ZA(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZP_pole_slha() const { return physical_slha.ZP; }
   double get_ZP_pole_slha(int i, int k) const { return physical_slha.ZP(i,k); }
   const Eigen::Matrix<std::complex<double>,4,4>& get_ZN_pole_slha() const { return physical_slha.ZN; }
  double get_ZN_pole_slha(int i, int k) const { return Re(physical_slha.ZN(i,k)); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UM_pole_slha() const { return physical_slha.UM; }
  double get_UM_pole_slha(int i, int k) const { return Re(physical_slha.UM(i,k)); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UP_pole_slha() const { return physical_slha.UP; }
  double get_UP_pole_slha(int i, int k) const { return Re(physical_slha.UP(i,k)); } 
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZEL_pole_slha() const { return physical_slha.ZEL; }
   const std::complex<double>& get_ZEL_pole_slha(int i, int k) const { return physical_slha.ZEL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZER_pole_slha() const { return physical_slha.ZER; }
   const std::complex<double>& get_ZER_pole_slha(int i, int k) const { return physical_slha.ZER(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDL_pole_slha() const { return physical_slha.ZDL; }
   const std::complex<double>& get_ZDL_pole_slha(int i, int k) const { return physical_slha.ZDL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDR_pole_slha() const { return physical_slha.ZDR; }
   const std::complex<double>& get_ZDR_pole_slha(int i, int k) const { return physical_slha.ZDR(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUL_pole_slha() const { return physical_slha.ZUL; }
   const std::complex<double>& get_ZUL_pole_slha(int i, int k) const { return physical_slha.ZUL(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUR_pole_slha() const { return physical_slha.ZUR; }
   const std::complex<double>& get_ZUR_pole_slha(int i, int k) const { return physical_slha.ZUR(i,k); }


private:
   MSSMatMGUT_physical physical_slha; ///< contains the pole masses and mixings in slha convention
};

} // namespace flexiblesusy

#endif
