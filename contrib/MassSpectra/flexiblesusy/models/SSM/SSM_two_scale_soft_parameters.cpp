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

// File generated at Sat 27 Aug 2016 12:40:20

#include "SSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"
#include "functors.hpp"

#include <iostream>

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces
#define TRACE_STRUCT_TYPE Soft_traces
#define CALCULATE_TRACES() calc_soft_traces(TRACE_STRUCT);

const int SSM_soft_parameters::numberOfParameters;

SSM_soft_parameters::SSM_soft_parameters(const SSM_input_parameters& input_)
   : SSM_susy_parameters(input_)
   , Kappa(0), K1(0), MS(0), mu2(0), v(0), vS(0)

{
   set_number_of_parameters(numberOfParameters);
}

SSM_soft_parameters::SSM_soft_parameters(
   const SSM_susy_parameters& susy_model
   , double Kappa_, double K1_, double MS_, double mu2_, double v_, double vS_

)
   : SSM_susy_parameters(susy_model)
   , Kappa(Kappa_), K1(K1_), MS(MS_), mu2(mu2_), v(v_), vS(vS_)

{
   set_number_of_parameters(numberOfParameters);
}

Eigen::ArrayXd SSM_soft_parameters::beta() const
{
   return calc_beta().get().unaryExpr(Chop<double>(get_zero_threshold()));
}

SSM_soft_parameters SSM_soft_parameters::calc_beta() const
{
   double beta_Kappa = 0.;
   double beta_K1 = 0.;
   double beta_MS = 0.;
   double beta_mu2 = 0.;
   double beta_v = 0.;
   double beta_vS = 0.;

   if (get_loops() > 0) {
      TRACE_STRUCT_TYPE TRACE_STRUCT;
      CALCULATE_TRACES();

      beta_Kappa += calc_beta_Kappa_one_loop(TRACE_STRUCT);
      beta_K1 += calc_beta_K1_one_loop(TRACE_STRUCT);
      beta_MS += calc_beta_MS_one_loop(TRACE_STRUCT);
      beta_mu2 += calc_beta_mu2_one_loop(TRACE_STRUCT);
      beta_v += calc_beta_v_one_loop(TRACE_STRUCT);
      beta_vS += calc_beta_vS_one_loop(TRACE_STRUCT);

      if (get_loops() > 1) {
         beta_Kappa += calc_beta_Kappa_two_loop(TRACE_STRUCT);
         beta_K1 += calc_beta_K1_two_loop(TRACE_STRUCT);
         beta_MS += calc_beta_MS_two_loop(TRACE_STRUCT);
         beta_mu2 += calc_beta_mu2_two_loop(TRACE_STRUCT);
         beta_v += calc_beta_v_two_loop(TRACE_STRUCT);
         beta_vS += calc_beta_vS_two_loop(TRACE_STRUCT);

         if (get_loops() > 2) {

         }
      }
   }


   const SSM_susy_parameters susy_betas(SSM_susy_parameters::calc_beta());

   return SSM_soft_parameters(susy_betas, beta_Kappa, beta_K1, beta_MS, beta_mu2, beta_v, beta_vS);
}

void SSM_soft_parameters::clear()
{
   SSM_susy_parameters::clear();

   Kappa = 0.;
   K1 = 0.;
   MS = 0.;
   mu2 = 0.;
   v = 0.;
   vS = 0.;

}

Eigen::ArrayXd SSM_soft_parameters::get() const
{
   Eigen::ArrayXd pars(SSM_susy_parameters::get());
   pars.conservativeResize(numberOfParameters);

   pars(33) = Kappa;
   pars(34) = K1;
   pars(35) = MS;
   pars(36) = mu2;
   pars(37) = v;
   pars(38) = vS;


   return pars;
}

void SSM_soft_parameters::print(std::ostream& ostr) const
{
   SSM_susy_parameters::print(ostr);
   ostr << "soft parameters at Q = " << get_scale() << ":\n";
   ostr << "Kappa = " << Kappa << '\n';
   ostr << "K1 = " << K1 << '\n';
   ostr << "MS = " << MS << '\n';
   ostr << "mu2 = " << mu2 << '\n';
   ostr << "v = " << v << '\n';
   ostr << "vS = " << vS << '\n';

}

void SSM_soft_parameters::set(const Eigen::ArrayXd& pars)
{
   SSM_susy_parameters::set(pars);

   Kappa = pars(33);
   K1 = pars(34);
   MS = pars(35);
   mu2 = pars(36);
   v = pars(37);
   vS = pars(38);

}

void SSM_soft_parameters::calc_soft_traces(Soft_traces& soft_traces) const
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

std::ostream& operator<<(std::ostream& ostr, const SSM_soft_parameters& soft_pars)
{
   soft_pars.print(ostr);
   return ostr;
}

} // namespace flexiblesusy
