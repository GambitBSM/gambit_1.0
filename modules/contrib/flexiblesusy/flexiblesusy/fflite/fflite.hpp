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

#ifndef fflite_hpp
#define fflite_hpp

#include <complex>

extern "C" void ltini_();

extern "C" void ltexi_();

extern "C" void ljffca0_
(std::complex<double>& ca0, const double& d0, const double& xmm,
 const std::complex<double>& cm, int& ier);

extern "C" void ljffcb0_
(std::complex<double>& cb0, const double& d0, const double& xmu,
 const std::complex<double>& cp, const std::complex<double>& cma,
 const std::complex<double>& cmb, int& ier);

extern "C" void ljffcb1_
(std::complex<double>& cb1, const std::complex<double>& cb0,
 const std::complex<double> *ca0i, const std::complex<double>& xp,
 const std::complex<double>& xm1, const std::complex<double>& xm2,
 const std::complex<double> *piDpj, int& ier);

extern "C" void ljffcb2p_
(std::complex<double> *cb2i, const std::complex<double>& cb1,
 const std::complex<double>& cb0, const std::complex<double> *ca0i,
 const std::complex<double>& cp, const std::complex<double>& xm1,
 const std::complex<double>& xm2, const std::complex<double> *piDpj, int& ier);

extern "C" void ljffcot2_
(std::complex<double> *cpiDpj, const std::complex<double>& cp,
 const std::complex<double>& cma, const std::complex<double>& cmb,
 const std::complex<double>& cmap, const std::complex<double>& cmbp,
 const std::complex<double>& cmamb, int& ier);

extern "C" void ljffxa0_
(std::complex<double>& ca0, const double& d0, const double& xmm,
 const double& xm, int& ier);

extern "C" void ljffxb0_
(std::complex<double>& cb0, const double& d0, const double& xmu,
 const double& xp, const double& xma, const double& xmb, int& ier);

extern "C" void ljffxb1_
(std::complex<double>& cb1, const std::complex<double>& cb0,
 const std::complex<double> *ca0i, const double& xp, const double& xm1,
 const double& xm2, const double *piDpj, const int& ier);

extern "C" void ljffxb2p_
(std::complex<double> *cb2i, const std::complex<double>& cb1,
 const std::complex<double>& cb0, const std::complex<double> *ca0i,
 double& xp, double& xm1, double& xm2, const double *piDpj, const int& ier);

extern "C" void ljffdot2_
(double *piDpj, const double& xp, const double& xma, const double& xmb,
 const double& dmap, const double& dmbp, const double& dmamb, const int& ier);


extern "C" void sub_fpv_
(std::complex<double>& res,
 const int& n, const std::complex<double>& x, const std::complex<double>& y);

extern "C" void sub_yfpv_
(std::complex<double>& res,
 const int& n, const std::complex<double>& x, const std::complex<double>& y);

extern "C" void sub_fth_
(std::complex<double>& res,
 const int& n, const std::complex<double>& x, const std::complex<double>& y);

#endif
