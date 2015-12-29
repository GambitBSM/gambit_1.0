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

// File generated at Tue 29 Dec 2015 16:23:40

#include "SCDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"
#include "functors.hpp"

#include <iostream>

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

SCDM_soft_parameters::SCDM_soft_parameters(const SCDM_input_parameters& input_)
   : SCDM_susy_parameters(input_)
   , mu3(0), muS(0), muH(0), v(0)

{
   set_number_of_parameters(numberOfParameters);
}

SCDM_soft_parameters::SCDM_soft_parameters(
   const SCDM_susy_parameters& susy_model
   , double mu3_, double muS_, double muH_, double v_

)
   : SCDM_susy_parameters(susy_model)
   , mu3(mu3_), muS(muS_), muH(muH_), v(v_)

{
   set_number_of_parameters(numberOfParameters);
}

Eigen::ArrayXd SCDM_soft_parameters::beta() const
{
   return calc_beta().get().unaryExpr(Chop<double>(get_zero_threshold()));
}

SCDM_soft_parameters SCDM_soft_parameters::calc_beta() const
{
   Soft_traces soft_traces;
   calc_soft_traces(soft_traces);

   double beta_mu3(calc_beta_mu3_one_loop(TRACE_STRUCT));
   double beta_muS(calc_beta_muS_one_loop(TRACE_STRUCT));
   double beta_muH(calc_beta_muH_one_loop(TRACE_STRUCT));
   double beta_v(calc_beta_v_one_loop(TRACE_STRUCT));

   if (get_loops() > 1) {
      beta_mu3 += calc_beta_mu3_two_loop(TRACE_STRUCT);
      beta_muS += calc_beta_muS_two_loop(TRACE_STRUCT);
      beta_muH += calc_beta_muH_two_loop(TRACE_STRUCT);
      beta_v += calc_beta_v_two_loop(TRACE_STRUCT);

      if (get_loops() > 2) {

      }
   }


   const SCDM_susy_parameters susy_betas(SCDM_susy_parameters::calc_beta());

   return SCDM_soft_parameters(susy_betas, beta_mu3, beta_muS, beta_muH, beta_v);
}

void SCDM_soft_parameters::clear()
{
   SCDM_susy_parameters::clear();

   mu3 = 0.;
   muS = 0.;
   muH = 0.;
   v = 0.;

}

Eigen::ArrayXd SCDM_soft_parameters::get() const
{
   Eigen::ArrayXd pars(SCDM_susy_parameters::get());
   pars.conservativeResize(numberOfParameters);

   pars(33) = mu3;
   pars(34) = muS;
   pars(35) = muH;
   pars(36) = v;


   return pars;
}

void SCDM_soft_parameters::print(std::ostream& ostr) const
{
   SCDM_susy_parameters::print(ostr);
   ostr << "soft parameters:\n";
   ostr << "mu3 = " << mu3 << '\n';
   ostr << "muS = " << muS << '\n';
   ostr << "muH = " << muH << '\n';
   ostr << "v = " << v << '\n';

}

void SCDM_soft_parameters::set(const Eigen::ArrayXd& pars)
{
   SCDM_susy_parameters::set(pars);

   mu3 = pars(33);
   muS = pars(34);
   muH = pars(35);
   v = pars(36);

}

void SCDM_soft_parameters::calc_soft_traces(Soft_traces& soft_traces) const
{
   TRACE_STRUCT.traceYdAdjYd = Re((Yd*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYeAdjYe = Re((Ye*Ye.adjoint()).trace());
   TRACE_STRUCT.traceYuAdjYu = Re((Yu*Yu.adjoint()).trace());
   TRACE_STRUCT.traceYdAdjYdYdAdjYd = Re((Yd*Yd.adjoint()*Yd*Yd.adjoint())
      .trace());
   TRACE_STRUCT.traceYdAdjYuYuAdjYd = Re((Yd*Yu.adjoint()*Yu*Yd.adjoint())
      .trace());
   TRACE_STRUCT.traceYeAdjYeYeAdjYe = Re((Ye*Ye.adjoint()*Ye*Ye.adjoint())
      .trace());
   TRACE_STRUCT.traceYuAdjYuYuAdjYu = Re((Yu*Yu.adjoint()*Yu*Yu.adjoint())
      .trace());

}

std::ostream& operator<<(std::ostream& ostr, const SCDM_soft_parameters& soft_pars)
{
   soft_pars.print(std::cout);
   return ostr;
}

} // namespace flexiblesusy
