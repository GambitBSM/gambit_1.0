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

// File generated at Fri 28 Aug 2015 18:02:20

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"
#include "functors.hpp"

#include <iostream>

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

SSDM_soft_parameters::SSDM_soft_parameters(const SSDM_input_parameters& input_)
   : SSDM_susy_parameters(input_)
   , mS2(0), mu2(0), v(0)

{
   set_number_of_parameters(numberOfParameters);
}

SSDM_soft_parameters::SSDM_soft_parameters(
   const SSDM_susy_parameters& susy_model
   , double mS2_, double mu2_, double v_

)
   : SSDM_susy_parameters(susy_model)
   , mS2(mS2_), mu2(mu2_), v(v_)

{
   set_number_of_parameters(numberOfParameters);
}

Eigen::ArrayXd SSDM_soft_parameters::beta() const
{
   return calc_beta().get().unaryExpr(Chop<double>(get_zero_threshold()));
}

SSDM_soft_parameters SSDM_soft_parameters::calc_beta() const
{
   Soft_traces soft_traces;
   calc_soft_traces(soft_traces);

   double beta_mS2(calc_beta_mS2_one_loop(TRACE_STRUCT));
   double beta_mu2(calc_beta_mu2_one_loop(TRACE_STRUCT));
   double beta_v(calc_beta_v_one_loop(TRACE_STRUCT));

   if (get_loops() > 1) {
      beta_mS2 += calc_beta_mS2_two_loop(TRACE_STRUCT);
      beta_mu2 += calc_beta_mu2_two_loop(TRACE_STRUCT);
      beta_v += calc_beta_v_two_loop(TRACE_STRUCT);

   }


   const SSDM_susy_parameters susy_betas(SSDM_susy_parameters::calc_beta());

   return SSDM_soft_parameters(susy_betas, beta_mS2, beta_mu2, beta_v);
}

void SSDM_soft_parameters::clear()
{
   SSDM_susy_parameters::clear();

   mS2 = 0.;
   mu2 = 0.;
   v = 0.;

}

const Eigen::ArrayXd SSDM_soft_parameters::get() const
{
   Eigen::ArrayXd pars(SSDM_susy_parameters::get());
   pars.conservativeResize(numberOfParameters);

   pars(33) = mS2;
   pars(34) = mu2;
   pars(35) = v;


   return pars;
}

void SSDM_soft_parameters::print(std::ostream& ostr) const
{
   SSDM_susy_parameters::print(ostr);
   ostr << "soft parameters:\n";
   ostr << "mS2 = " << mS2 << '\n';
   ostr << "mu2 = " << mu2 << '\n';
   ostr << "v = " << v << '\n';

}

void SSDM_soft_parameters::set(const Eigen::ArrayXd& pars)
{
   SSDM_susy_parameters::set(pars);

   mS2 = pars(33);
   mu2 = pars(34);
   v = pars(35);

}

void SSDM_soft_parameters::calc_soft_traces(Soft_traces& soft_traces) const
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

std::ostream& operator<<(std::ostream& ostr, const SSDM_soft_parameters& soft_pars)
{
   soft_pars.print(std::cout);
   return ostr;
}

} // namespace flexiblesusy
