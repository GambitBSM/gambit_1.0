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
 * @file MSSMNoFV_two_scale_model_slha.hpp
 * @brief contains wrapper class for model class in SLHA convention
 */

// File generated at Fri 16 Jan 2015 12:55:37

#ifndef MSSMNoFV_TWO_SCALE_SLHA_H
#define MSSMNoFV_TWO_SCALE_SLHA_H

#include "MSSMNoFV_two_scale_model.hpp"
#include "MSSMNoFV_physical.hpp"
#include "MSSMNoFV_model_slha.hpp"

namespace flexiblesusy {

class Two_scale;

/**
 * @class MSSMNoFV_slha<Two_scale>
 * @brief model class wrapper in SLHA convention
 */

template<>
class MSSMNoFV_slha<Two_scale> : public MSSMNoFV<Two_scale> {
public:
   explicit MSSMNoFV_slha(const MSSMNoFV_input_parameters& input_ = MSSMNoFV_input_parameters());
   explicit MSSMNoFV_slha(const MSSMNoFV<Two_scale>&);
   virtual ~MSSMNoFV_slha();

   virtual void clear();
   void convert_to_slha(); ///< converts pole masses to SLHA convention
   const MSSMNoFV_physical& get_physical_slha() const; ///< returns pole masses to SLHA convention
   MSSMNoFV_physical& get_physical_slha(); ///< returns pole masses to SLHA convention

   // interface functions
   virtual void calculate_spectrum();
   virtual void print(std::ostream&) const;

   double get_MVG_pole_slha() const { return physical_slha.MVG; }
   double get_MGlu_pole_slha() const { return physical_slha.MGlu; }
   double get_MVP_pole_slha() const { return physical_slha.MVP; }
   double get_MVZ_pole_slha() const { return physical_slha.MVZ; }
   double get_MFd_pole_slha() const { return physical_slha.MFd; }
   double get_MFs_pole_slha() const { return physical_slha.MFs; }
   double get_MFb_pole_slha() const { return physical_slha.MFb; }
   double get_MFu_pole_slha() const { return physical_slha.MFu; }
   double get_MFc_pole_slha() const { return physical_slha.MFc; }
   double get_MFt_pole_slha() const { return physical_slha.MFt; }
   double get_MFve_pole_slha() const { return physical_slha.MFve; }
   double get_MFvm_pole_slha() const { return physical_slha.MFvm; }
   double get_MFvt_pole_slha() const { return physical_slha.MFvt; }
   double get_MFe_pole_slha() const { return physical_slha.MFe; }
   double get_MFm_pole_slha() const { return physical_slha.MFm; }
   double get_MFtau_pole_slha() const { return physical_slha.MFtau; }
   double get_MSveL_pole_slha() const { return physical_slha.MSveL; }
   double get_MSvmL_pole_slha() const { return physical_slha.MSvmL; }
   double get_MSvtL_pole_slha() const { return physical_slha.MSvtL; }
   const Eigen::Array<double,2,1>& get_MSd_pole_slha() const { return physical_slha.MSd; }
   double get_MSd_pole_slha(int i) const { return physical_slha.MSd(i); }
   const Eigen::Array<double,2,1>& get_MSu_pole_slha() const { return physical_slha.MSu; }
   double get_MSu_pole_slha(int i) const { return physical_slha.MSu(i); }
   const Eigen::Array<double,2,1>& get_MSe_pole_slha() const { return physical_slha.MSe; }
   double get_MSe_pole_slha(int i) const { return physical_slha.MSe(i); }
   const Eigen::Array<double,2,1>& get_MSm_pole_slha() const { return physical_slha.MSm; }
   double get_MSm_pole_slha(int i) const { return physical_slha.MSm(i); }
   const Eigen::Array<double,2,1>& get_MStau_pole_slha() const { return physical_slha.MStau; }
   double get_MStau_pole_slha(int i) const { return physical_slha.MStau(i); }
   const Eigen::Array<double,2,1>& get_MSs_pole_slha() const { return physical_slha.MSs; }
   double get_MSs_pole_slha(int i) const { return physical_slha.MSs(i); }
   const Eigen::Array<double,2,1>& get_MSc_pole_slha() const { return physical_slha.MSc; }
   double get_MSc_pole_slha(int i) const { return physical_slha.MSc(i); }
   const Eigen::Array<double,2,1>& get_MSb_pole_slha() const { return physical_slha.MSb; }
   double get_MSb_pole_slha(int i) const { return physical_slha.MSb(i); }
   const Eigen::Array<double,2,1>& get_MSt_pole_slha() const { return physical_slha.MSt; }
   double get_MSt_pole_slha(int i) const { return physical_slha.MSt(i); }
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
   double get_MVWm_pole_slha() const { return physical_slha.MVWm; }

   const Eigen::Matrix<double,2,2>& get_ZD_pole_slha() const { return physical_slha.ZD; }
   double get_ZD_pole_slha(int i, int k) const { return physical_slha.ZD(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZU_pole_slha() const { return physical_slha.ZU; }
   double get_ZU_pole_slha(int i, int k) const { return physical_slha.ZU(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZE_pole_slha() const { return physical_slha.ZE; }
   double get_ZE_pole_slha(int i, int k) const { return physical_slha.ZE(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZM_pole_slha() const { return physical_slha.ZM; }
   double get_ZM_pole_slha(int i, int k) const { return physical_slha.ZM(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZTau_pole_slha() const { return physical_slha.ZTau; }
   double get_ZTau_pole_slha(int i, int k) const { return physical_slha.ZTau(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZS_pole_slha() const { return physical_slha.ZS; }
   double get_ZS_pole_slha(int i, int k) const { return physical_slha.ZS(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZC_pole_slha() const { return physical_slha.ZC; }
   double get_ZC_pole_slha(int i, int k) const { return physical_slha.ZC(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZB_pole_slha() const { return physical_slha.ZB; }
   double get_ZB_pole_slha(int i, int k) const { return physical_slha.ZB(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZT_pole_slha() const { return physical_slha.ZT; }
   double get_ZT_pole_slha(int i, int k) const { return physical_slha.ZT(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZH_pole_slha() const { return physical_slha.ZH; }
   double get_ZH_pole_slha(int i, int k) const { return physical_slha.ZH(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZA_pole_slha() const { return physical_slha.ZA; }
   double get_ZA_pole_slha(int i, int k) const { return physical_slha.ZA(i,k); }
   const Eigen::Matrix<double,2,2>& get_ZP_pole_slha() const { return physical_slha.ZP; }
   double get_ZP_pole_slha(int i, int k) const { return physical_slha.ZP(i,k); }
   const Eigen::Matrix<std::complex<double>,4,4>& get_ZN_pole_slha() const { return physical_slha.ZN; }
   const std::complex<double>& get_ZN_pole_slha(int i, int k) const { return physical_slha.ZN(i,k); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UM_pole_slha() const { return physical_slha.UM; }
   const std::complex<double>& get_UM_pole_slha(int i, int k) const { return physical_slha.UM(i,k); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UP_pole_slha() const { return physical_slha.UP; }
   const std::complex<double>& get_UP_pole_slha(int i, int k) const { return physical_slha.UP(i,k); }


private:
   MSSMNoFV_physical physical_slha; ///< contains the pole masses and mixings in slha convention
};

} // namespace flexiblesusy

#endif
