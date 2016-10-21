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

// File generated at Sat 27 Aug 2016 12:42:58

#include "SingletDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"
#include "functors.hpp"

#include <iostream>

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces
#define TRACE_STRUCT_TYPE Soft_traces
#define CALCULATE_TRACES() calc_soft_traces(TRACE_STRUCT);

const int SingletDM_soft_parameters::numberOfParameters;

SingletDM_soft_parameters::SingletDM_soft_parameters(const SingletDM_input_parameters& input_)
   : SingletDM_susy_parameters(input_)
   , muS(0), muH(0), v(0)

{
   set_number_of_parameters(numberOfParameters);
}

SingletDM_soft_parameters::SingletDM_soft_parameters(
   const SingletDM_susy_parameters& susy_model
   , double muS_, double muH_, double v_

)
   : SingletDM_susy_parameters(susy_model)
   , muS(muS_), muH(muH_), v(v_)

{
   set_number_of_parameters(numberOfParameters);
}

Eigen::ArrayXd SingletDM_soft_parameters::beta() const
{
   return calc_beta().get().unaryExpr(Chop<double>(get_zero_threshold()));
}

SingletDM_soft_parameters SingletDM_soft_parameters::calc_beta() const
{
   double beta_muS = 0.;
   double beta_muH = 0.;
   double beta_v = 0.;

   if (get_loops() > 0) {
      TRACE_STRUCT_TYPE TRACE_STRUCT;
      CALCULATE_TRACES();

      beta_muS += calc_beta_muS_one_loop(TRACE_STRUCT);
      beta_muH += calc_beta_muH_one_loop(TRACE_STRUCT);
      beta_v += calc_beta_v_one_loop(TRACE_STRUCT);

      if (get_loops() > 1) {
         beta_muS += calc_beta_muS_two_loop(TRACE_STRUCT);
         beta_muH += calc_beta_muH_two_loop(TRACE_STRUCT);
         beta_v += calc_beta_v_two_loop(TRACE_STRUCT);

         if (get_loops() > 2) {

         }
      }
   }


   const SingletDM_susy_parameters susy_betas(SingletDM_susy_parameters::calc_beta());

   return SingletDM_soft_parameters(susy_betas, beta_muS, beta_muH, beta_v);
}

void SingletDM_soft_parameters::clear()
{
   SingletDM_susy_parameters::clear();

   muS = 0.;
   muH = 0.;
   v = 0.;

}

Eigen::ArrayXd SingletDM_soft_parameters::get() const
{
   Eigen::ArrayXd pars(SingletDM_susy_parameters::get());
   pars.conservativeResize(numberOfParameters);

   pars(33) = muS;
   pars(34) = muH;
   pars(35) = v;


   return pars;
}

void SingletDM_soft_parameters::print(std::ostream& ostr) const
{
   SingletDM_susy_parameters::print(ostr);
   ostr << "soft parameters at Q = " << get_scale() << ":\n";
   ostr << "muS = " << muS << '\n';
   ostr << "muH = " << muH << '\n';
   ostr << "v = " << v << '\n';

}

void SingletDM_soft_parameters::set(const Eigen::ArrayXd& pars)
{
   SingletDM_susy_parameters::set(pars);

   muS = pars(33);
   muH = pars(34);
   v = pars(35);

}

void SingletDM_soft_parameters::calc_soft_traces(Soft_traces& soft_traces) const
{
   if (get_loops() > 0) {
      TRACE_STRUCT.traceYdAdjYd = Re((Yd*Yd.adjoint()).trace());
      TRACE_STRUCT.traceYeAdjYe = Re((Ye*Ye.adjoint()).trace());
      TRACE_STRUCT.traceYuAdjYu = Re((Yu*Yu.adjoint()).trace());

   }

   if (get_loops() > 1) {
      TRACE_STRUCT.traceYdAdjYdYdAdjYd = Re((Yd*Yd.adjoint()*Yd*Yd.adjoint())
         .trace());
      TRACE_STRUCT.traceYdAdjYuYuAdjYd = Re((Yd*Yu.adjoint()*Yu*Yd.adjoint())
         .trace());
      TRACE_STRUCT.traceYeAdjYeYeAdjYe = Re((Ye*Ye.adjoint()*Ye*Ye.adjoint())
         .trace());
      TRACE_STRUCT.traceYuAdjYuYuAdjYu = Re((Yu*Yu.adjoint()*Yu*Yu.adjoint())
         .trace());

   }

   if (get_loops() > 2) {

   }
}

std::ostream& operator<<(std::ostream& ostr, const SingletDM_soft_parameters& soft_pars)
{
   soft_pars.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
