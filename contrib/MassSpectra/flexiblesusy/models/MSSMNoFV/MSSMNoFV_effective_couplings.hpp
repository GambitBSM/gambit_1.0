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

// File generated at Sat 27 Aug 2016 12:50:22

#ifndef MSSMNoFV_EFFECTIVE_COUPLINGS_H
#define MSSMNoFV_EFFECTIVE_COUPLINGS_H

#include "MSSMNoFV_mass_eigenstates.hpp"
#include "lowe.h"
#include "physical_input.hpp"

#include <complex>
#include <Eigen/Core>

namespace flexiblesusy {

namespace standard_model {
class Standard_model;
}

class MSSMNoFV_effective_couplings {
public:
   MSSMNoFV_effective_couplings(const MSSMNoFV_mass_eigenstates&,
                                   const softsusy::QedQcd&,
                                   const Physical_input&);
   ~MSSMNoFV_effective_couplings();

   void do_run_couplings(bool flag) { rg_improve = flag; }
   bool do_run_couplings() const { return rg_improve; }
   void do_include_qcd_corrections(bool flag) { include_qcd_corrections = flag; }
   bool do_include_qcd_corrections() const { return include_qcd_corrections; }
   void set_physical_inputs(const Physical_input& inputs_) { physical_input = inputs_; }
   void set_low_energy_data(const softsusy::QedQcd& qedqcd_) { qedqcd = qedqcd_; }
   void set_model(const MSSMNoFV_mass_eigenstates& model_);

   double get_hhVPVP_partial_width(unsigned gO1) const;
   double get_hhVGVG_partial_width(unsigned gO1) const;
   double get_AhVPVP_partial_width(unsigned gO1) const;
   double get_AhVGVG_partial_width(unsigned gO1) const;
   std::complex<double> get_eff_CphhVPVP(unsigned gO1) const { return eff_CphhVPVP(gO1); }
   std::complex<double> get_eff_CphhVGVG(unsigned gO1) const { return eff_CphhVGVG(gO1); }
   std::complex<double> get_eff_CpAhVPVP(unsigned gO1) const { return eff_CpAhVPVP(gO1); }
   std::complex<double> get_eff_CpAhVGVG(unsigned gO1) const { return eff_CpAhVGVG(gO1); }

   void calculate_effective_couplings();

   std::complex<double> CpFdhhbarFdPL(unsigned gt2) const;
   std::complex<double> CpFshhbarFsPL(unsigned gt2) const;
   std::complex<double> CpFbhhbarFbPL(unsigned gt2) const;
   std::complex<double> CpFuhhbarFuPL(unsigned gt2) const;
   std::complex<double> CpFchhbarFcPL(unsigned gt2) const;
   std::complex<double> CpFthhbarFtPL(unsigned gt2) const;
   std::complex<double> CpFehhbarFePL(unsigned gt2) const;
   std::complex<double> CpFmhhbarFmPL(unsigned gt2) const;
   std::complex<double> CpFtauhhbarFtauPL(unsigned gt2) const;
   std::complex<double> CphhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhSmconjSm(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhStauconjStau(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhSsconjSs(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhScconjSc(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhSbconjSb(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhStconjSt(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpChahhbarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CphhVWmconjVWm(unsigned gt1) const;
   std::complex<double> CpAhFdbarFdPL(unsigned gt1) const;
   std::complex<double> CpAhFsbarFsPL(unsigned gt1) const;
   std::complex<double> CpAhFbbarFbPL(unsigned gt1) const;
   std::complex<double> CpAhFubarFuPL(unsigned gt1) const;
   std::complex<double> CpAhFcbarFcPL(unsigned gt1) const;
   std::complex<double> CpAhFtbarFtPL(unsigned gt1) const;
   std::complex<double> CpAhFebarFePL(unsigned gt1) const;
   std::complex<double> CpAhFmbarFmPL(unsigned gt1) const;
   std::complex<double> CpAhFtaubarFtauPL(unsigned gt1) const;
   std::complex<double> CpAhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhSmconjSm(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhStauconjStau(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhSsconjSs(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhScconjSc(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhSbconjSb(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhStconjSt(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const;
   std::complex<double> CpAhChabarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const;
   void calculate_eff_CphhVPVP(unsigned gO1);
   void calculate_eff_CphhVGVG(unsigned gO1);
   void calculate_eff_CpAhVPVP(unsigned gO1);
   void calculate_eff_CpAhVGVG(unsigned gO1);

private:
   MSSMNoFV_mass_eigenstates model;
   softsusy::QedQcd qedqcd;
   Physical_input physical_input;
   bool rg_improve;
   bool include_qcd_corrections;

   void copy_mixing_matrices_from_model();

   void run_SM_strong_coupling_to(double m);

   // higher order corrections to the amplitudes for
   // effective coupling to photons
   std::complex<double> scalar_scalar_qcd_factor(double, double) const;
   std::complex<double> scalar_fermion_qcd_factor(double, double) const;
   std::complex<double> pseudoscalar_fermion_qcd_factor(double, double) const;

   // higher order corrections to the leading order
   // effective couplings to gluons
   double number_of_active_flavours(double) const;
   double scalar_scaling_factor(double) const;
   double pseudoscalar_scaling_factor(double) const;

   Eigen::Matrix<double,2,2> ZD;
   Eigen::Matrix<double,2,2> ZU;
   Eigen::Matrix<double,2,2> ZE;
   Eigen::Matrix<double,2,2> ZM;
   Eigen::Matrix<double,2,2> ZTau;
   Eigen::Matrix<double,2,2> ZS;
   Eigen::Matrix<double,2,2> ZC;
   Eigen::Matrix<double,2,2> ZB;
   Eigen::Matrix<double,2,2> ZT;
   Eigen::Matrix<double,2,2> ZH;
   Eigen::Matrix<double,2,2> ZA;
   Eigen::Matrix<double,2,2> ZP;
   Eigen::Matrix<std::complex<double>,4,4> ZN;
   Eigen::Matrix<std::complex<double>,2,2> UM;
   Eigen::Matrix<std::complex<double>,2,2> UP;
   Eigen::Matrix<double,2,2> ZZ;

   Eigen::Array<std::complex<double>,2,1> eff_CphhVPVP;
   Eigen::Array<std::complex<double>,2,1> eff_CphhVGVG;
   Eigen::Array<std::complex<double>,2,1> eff_CpAhVPVP;
   Eigen::Array<std::complex<double>,2,1> eff_CpAhVGVG;

};

} // namespace flexiblesusy

#endif
