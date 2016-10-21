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
 * @file lowMSSM_two_scale_model_slha.hpp
 * @brief contains wrapper class for model class in SLHA convention
 */

// File generated at Sat 27 Aug 2016 12:48:06

#ifndef lowMSSM_TWO_SCALE_SLHA_H
#define lowMSSM_TWO_SCALE_SLHA_H

#include "lowMSSM_two_scale_model.hpp"
#include "lowMSSM_physical.hpp"
#include "lowMSSM_model_slha.hpp"
#include "wrappers.hpp"

#define PHYSICAL_SLHA(p) physical_slha.p
#define PHYSICAL_SLHA_REAL(p) Re(physical_slha.p)

namespace flexiblesusy {

class Two_scale;

/**
 * @class lowMSSM_slha<Two_scale>
 * @brief model class wrapper in SLHA convention
 */

template<>
class lowMSSM_slha<Two_scale> : public lowMSSM<Two_scale> {
public:
   explicit lowMSSM_slha(const lowMSSM_input_parameters& input_ = lowMSSM_input_parameters());
   explicit lowMSSM_slha(const lowMSSM<Two_scale>&, bool do_convert_masses_to_slha = true);
   virtual ~lowMSSM_slha();

   virtual void clear();
   void convert_to_slha(); ///< converts pole masses and couplings to SLHA convention
   const Eigen::Matrix<std::complex<double>,3,3>& get_ckm_matrix() const { return ckm; }
   const Eigen::Matrix<std::complex<double>,3,3>& get_pmns_matrix() const { return pmns; }
   const lowMSSM_physical& get_physical_slha() const; ///< returns pole masses to SLHA convention
   lowMSSM_physical& get_physical_slha(); ///< returns pole masses to SLHA convention
   void set_convert_masses_to_slha(bool); ///< allow/disallow for negative majoran fermion masses

   // interface functions
   virtual void calculate_spectrum();
   virtual void print(std::ostream&) const;

   double get_MVG_pole_slha() const { return PHYSICAL_SLHA(MVG); }
   double get_MGlu_pole_slha() const { return PHYSICAL_SLHA(MGlu); }
   const Eigen::Array<double,3,1>& get_MFv_pole_slha() const { return PHYSICAL_SLHA(MFv); }
   double get_MFv_pole_slha(int i) const { return PHYSICAL_SLHA(MFv(i)); }
   const Eigen::Array<double,6,1>& get_MSd_pole_slha() const { return PHYSICAL_SLHA(MSd); }
   double get_MSd_pole_slha(int i) const { return PHYSICAL_SLHA(MSd(i)); }
   const Eigen::Array<double,3,1>& get_MSv_pole_slha() const { return PHYSICAL_SLHA(MSv); }
   double get_MSv_pole_slha(int i) const { return PHYSICAL_SLHA(MSv(i)); }
   const Eigen::Array<double,6,1>& get_MSu_pole_slha() const { return PHYSICAL_SLHA(MSu); }
   double get_MSu_pole_slha(int i) const { return PHYSICAL_SLHA(MSu(i)); }
   const Eigen::Array<double,6,1>& get_MSe_pole_slha() const { return PHYSICAL_SLHA(MSe); }
   double get_MSe_pole_slha(int i) const { return PHYSICAL_SLHA(MSe(i)); }
   const Eigen::Array<double,2,1>& get_Mhh_pole_slha() const { return PHYSICAL_SLHA(Mhh); }
   double get_Mhh_pole_slha(int i) const { return PHYSICAL_SLHA(Mhh(i)); }
   const Eigen::Array<double,2,1>& get_MAh_pole_slha() const { return PHYSICAL_SLHA(MAh); }
   double get_MAh_pole_slha(int i) const { return PHYSICAL_SLHA(MAh(i)); }
   const Eigen::Array<double,2,1>& get_MHpm_pole_slha() const { return PHYSICAL_SLHA(MHpm); }
   double get_MHpm_pole_slha(int i) const { return PHYSICAL_SLHA(MHpm(i)); }
   const Eigen::Array<double,4,1>& get_MChi_pole_slha() const { return PHYSICAL_SLHA(MChi); }
   double get_MChi_pole_slha(int i) const { return PHYSICAL_SLHA(MChi(i)); }
   const Eigen::Array<double,2,1>& get_MCha_pole_slha() const { return PHYSICAL_SLHA(MCha); }
   double get_MCha_pole_slha(int i) const { return PHYSICAL_SLHA(MCha(i)); }
   const Eigen::Array<double,3,1>& get_MFe_pole_slha() const { return PHYSICAL_SLHA(MFe); }
   double get_MFe_pole_slha(int i) const { return PHYSICAL_SLHA(MFe(i)); }
   const Eigen::Array<double,3,1>& get_MFd_pole_slha() const { return PHYSICAL_SLHA(MFd); }
   double get_MFd_pole_slha(int i) const { return PHYSICAL_SLHA(MFd(i)); }
   const Eigen::Array<double,3,1>& get_MFu_pole_slha() const { return PHYSICAL_SLHA(MFu); }
   double get_MFu_pole_slha(int i) const { return PHYSICAL_SLHA(MFu(i)); }
   double get_MVWm_pole_slha() const { return PHYSICAL_SLHA(MVWm); }
   double get_MVP_pole_slha() const { return PHYSICAL_SLHA(MVP); }
   double get_MVZ_pole_slha() const { return PHYSICAL_SLHA(MVZ); }

   const Eigen::Matrix<double,6,6>& get_ZD_pole_slha() const { return PHYSICAL_SLHA(ZD); }
   double get_ZD_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZD(i,k)); }
   const Eigen::Matrix<double,3,3>& get_ZV_pole_slha() const { return PHYSICAL_SLHA(ZV); }
   double get_ZV_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZV(i,k)); }
   const Eigen::Matrix<double,6,6>& get_ZU_pole_slha() const { return PHYSICAL_SLHA(ZU); }
   double get_ZU_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZU(i,k)); }
   const Eigen::Matrix<double,6,6>& get_ZE_pole_slha() const { return PHYSICAL_SLHA(ZE); }
   double get_ZE_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZE(i,k)); }
   const Eigen::Matrix<double,2,2>& get_ZH_pole_slha() const { return PHYSICAL_SLHA(ZH); }
   double get_ZH_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZH(i,k)); }
   const Eigen::Matrix<double,2,2>& get_ZA_pole_slha() const { return PHYSICAL_SLHA(ZA); }
   double get_ZA_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZA(i,k)); }
   const Eigen::Matrix<double,2,2>& get_ZP_pole_slha() const { return PHYSICAL_SLHA(ZP); }
   double get_ZP_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZP(i,k)); }
   const Eigen::Matrix<std::complex<double>,4,4>& get_ZN_pole_slha() const { return PHYSICAL_SLHA(ZN); }
   double get_ZN_pole_slha(int i, int k) const { return PHYSICAL_SLHA_REAL(ZN(i,k)); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UM_pole_slha() const { return PHYSICAL_SLHA(UM); }
   double get_UM_pole_slha(int i, int k) const { return PHYSICAL_SLHA_REAL(UM(i,k)); }
   const Eigen::Matrix<std::complex<double>,2,2>& get_UP_pole_slha() const { return PHYSICAL_SLHA(UP); }
   double get_UP_pole_slha(int i, int k) const { return PHYSICAL_SLHA_REAL(UP(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZEL_pole_slha() const { return PHYSICAL_SLHA(ZEL); }
   const std::complex<double>& get_ZEL_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZEL(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZER_pole_slha() const { return PHYSICAL_SLHA(ZER); }
   const std::complex<double>& get_ZER_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZER(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDL_pole_slha() const { return PHYSICAL_SLHA(ZDL); }
   const std::complex<double>& get_ZDL_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZDL(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDR_pole_slha() const { return PHYSICAL_SLHA(ZDR); }
   const std::complex<double>& get_ZDR_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZDR(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUL_pole_slha() const { return PHYSICAL_SLHA(ZUL); }
   const std::complex<double>& get_ZUL_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZUL(i,k)); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUR_pole_slha() const { return PHYSICAL_SLHA(ZUR); }
   const std::complex<double>& get_ZUR_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZUR(i,k)); }
   const Eigen::Matrix<double,2,2>& get_ZZ_pole_slha() const { return PHYSICAL_SLHA(ZZ); }
   double get_ZZ_pole_slha(int i, int k) const { return PHYSICAL_SLHA(ZZ(i,k)); }

   const Eigen::Array<double,3,1>& get_Yu_slha() const { return Yu_slha; }
   double get_Yu_slha(int i) const { return Yu_slha(i); }
   const Eigen::Array<double,3,1>& get_Yd_slha() const { return Yd_slha; }
   double get_Yd_slha(int i) const { return Yd_slha(i); }
   const Eigen::Array<double,3,1>& get_Ye_slha() const { return Ye_slha; }
   double get_Ye_slha(int i) const { return Ye_slha(i); }

   const Eigen::Matrix<double,3,3>& get_TYu_slha() const { return TYu_slha; }
   double get_TYu_slha(int i, int k) const { return TYu_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_TYd_slha() const { return TYd_slha; }
   double get_TYd_slha(int i, int k) const { return TYd_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_TYe_slha() const { return TYe_slha; }
   double get_TYe_slha(int i, int k) const { return TYe_slha(i,k); }

   const Eigen::Matrix<double,3,3>& get_mq2_slha() const { return mq2_slha; }
   double get_mq2_slha(int i, int k) const { return mq2_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_mu2_slha() const { return mu2_slha; }
   double get_mu2_slha(int i, int k) const { return mu2_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_md2_slha() const { return md2_slha; }
   double get_md2_slha(int i, int k) const { return md2_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_ml2_slha() const { return ml2_slha; }
   double get_ml2_slha(int i, int k) const { return ml2_slha(i,k); }
   const Eigen::Matrix<double,3,3>& get_me2_slha() const { return me2_slha; }
   double get_me2_slha(int i, int k) const { return me2_slha(i,k); }

   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDL_slha() const { return ZDL_slha; }
   const std::complex<double>& get_ZDL_slha(int i, int k) const { return ZDL_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUL_slha() const { return ZUL_slha; }
   const std::complex<double>& get_ZUL_slha(int i, int k) const { return ZUL_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZDR_slha() const { return ZDR_slha; }
   const std::complex<double>& get_ZDR_slha(int i, int k) const { return ZDR_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZUR_slha() const { return ZUR_slha; }
   const std::complex<double>& get_ZUR_slha(int i, int k) const { return ZUR_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZEL_slha() const { return ZEL_slha; }
   const std::complex<double>& get_ZEL_slha(int i, int k) const { return ZEL_slha(i,k); }
   const Eigen::Matrix<std::complex<double>,3,3>& get_ZER_slha() const { return ZER_slha; }
   const std::complex<double>& get_ZER_slha(int i, int k) const { return ZER_slha(i,k); }


private:
   lowMSSM_physical physical_slha; ///< contains the pole masses and mixings in slha convention
   Eigen::Matrix<std::complex<double>,3,3> ckm;
   Eigen::Matrix<std::complex<double>,3,3> pmns;
   bool convert_masses_to_slha;        ///< allow/disallow for negative majoran fermion masses
   Eigen::Array<double,3,1> Yu_slha;
   Eigen::Array<double,3,1> Yd_slha;
   Eigen::Array<double,3,1> Ye_slha;

   Eigen::Matrix<std::complex<double>,3,3> ZDL_slha;
   Eigen::Matrix<std::complex<double>,3,3> ZUL_slha;
   Eigen::Matrix<std::complex<double>,3,3> ZDR_slha;
   Eigen::Matrix<std::complex<double>,3,3> ZUR_slha;
   Eigen::Matrix<std::complex<double>,3,3> ZEL_slha;
   Eigen::Matrix<std::complex<double>,3,3> ZER_slha;

   Eigen::Matrix<double,3,3> TYu_slha;
   Eigen::Matrix<double,3,3> TYd_slha;
   Eigen::Matrix<double,3,3> TYe_slha;

   Eigen::Matrix<double,3,3> mq2_slha;
   Eigen::Matrix<double,3,3> mu2_slha;
   Eigen::Matrix<double,3,3> md2_slha;
   Eigen::Matrix<double,3,3> ml2_slha;
   Eigen::Matrix<double,3,3> me2_slha;


   void calculate_ckm_matrix();
   void calculate_pmns_matrix();
   void convert_yukawa_couplings_to_slha();
   void convert_trilinear_couplings_to_slha();
   void convert_soft_squared_masses_to_slha();
};

std::ostream& operator<<(std::ostream& ostr, const lowMSSM_slha<Two_scale>& model);

} // namespace flexiblesusy

#undef PHYSICAL_SLHA
#undef PHYSICAL_SLHA_REAL

#endif
