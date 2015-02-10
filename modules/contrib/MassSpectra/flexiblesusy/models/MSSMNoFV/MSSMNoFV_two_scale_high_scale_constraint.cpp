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

// File generated at Fri 16 Jan 2015 12:51:38

#include "MSSMNoFV_two_scale_high_scale_constraint.hpp"
#include "MSSMNoFV_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"
#include "numerics.hpp"

#include <cassert>
#include <cmath>
#include <cerrno>
#include <cstring>

namespace flexiblesusy {

#define INPUTPARAMETER(p) inputPars.p
#define MODELPARAMETER(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define SM(p) Electroweak_constants::p
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define MODEL model
#define MODELCLASSNAME MSSMNoFV<Two_scale>

MSSMNoFV_high_scale_constraint<Two_scale>::MSSMNoFV_high_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
   , inputPars()
{
}

MSSMNoFV_high_scale_constraint<Two_scale>::MSSMNoFV_high_scale_constraint(
   MSSMNoFV<Two_scale>* model_,
   const MSSMNoFV_input_parameters& inputPars_)
   : Constraint<Two_scale>()
   , model(model_)
   , inputPars(inputPars_)
{
   initialize();
}

MSSMNoFV_high_scale_constraint<Two_scale>::~MSSMNoFV_high_scale_constraint()
{
}

void MSSMNoFV_high_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: MSSMNoFV_high_scale_constraint::apply():"
          " model pointer must not be zero");

   if (std::fabs(model->get_g1()) > 3.0) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFV_high_scale_constraint: Non-perturbative gauge "
            "coupling g1 = " << model->get_g1());
#endif
      model->set_g1(1.0);
   }
   if (std::fabs(model->get_g2()) > 3.0) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFV_high_scale_constraint: Non-perturbative gauge "
            "coupling g2 = " << model->get_g2());
#endif
      model->set_g2(1.0);
   }
   if (std::fabs(model->get_g3()) > 3.0) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFV_high_scale_constraint: Non-perturbative gauge "
            "coupling g3 = " << model->get_g3());
#endif
      model->set_g3(1.0);
   }

   update_scale();

   const auto AeIN = INPUTPARAMETER(AeIN);
   const auto AmuonIN = INPUTPARAMETER(AmuonIN);
   const auto AtauIN = INPUTPARAMETER(AtauIN);
   const auto AdIN = INPUTPARAMETER(AdIN);
   const auto AsIN = INPUTPARAMETER(AsIN);
   const auto AbIN = INPUTPARAMETER(AbIN);
   const auto AuIN = INPUTPARAMETER(AuIN);
   const auto AcIN = INPUTPARAMETER(AcIN);
   const auto AtIN = INPUTPARAMETER(AtIN);
   const auto mHd2IN = INPUTPARAMETER(mHd2IN);
   const auto mHu2IN = INPUTPARAMETER(mHu2IN);
   const auto mq11IN = INPUTPARAMETER(mq11IN);
   const auto mq22IN = INPUTPARAMETER(mq22IN);
   const auto mq33IN = INPUTPARAMETER(mq33IN);
   const auto ml11IN = INPUTPARAMETER(ml11IN);
   const auto ml22IN = INPUTPARAMETER(ml22IN);
   const auto ml33IN = INPUTPARAMETER(ml33IN);
   const auto md11IN = INPUTPARAMETER(md11IN);
   const auto md22IN = INPUTPARAMETER(md22IN);
   const auto md33IN = INPUTPARAMETER(md33IN);
   const auto mu11IN = INPUTPARAMETER(mu11IN);
   const auto mu22IN = INPUTPARAMETER(mu22IN);
   const auto mu33IN = INPUTPARAMETER(mu33IN);
   const auto me11IN = INPUTPARAMETER(me11IN);
   const auto me22IN = INPUTPARAMETER(me22IN);
   const auto me33IN = INPUTPARAMETER(me33IN);
   const auto M1 = INPUTPARAMETER(M1);
   const auto M2 = INPUTPARAMETER(M2);
   const auto M3 = INPUTPARAMETER(M3);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Yu = MODELPARAMETER(Yu);

   MODEL->set_TYe(0, 0, AeIN*Ye(0,0));
   MODEL->set_TYe(1, 1, AmuonIN*Ye(1,1));
   MODEL->set_TYe(2, 2, AtauIN*Ye(2,2));
   MODEL->set_TYd(0, 0, AdIN*Yd(0,0));
   MODEL->set_TYd(1, 1, AsIN*Yd(1,1));
   MODEL->set_TYd(2, 2, AbIN*Yd(2,2));
   MODEL->set_TYu(0, 0, AuIN*Yu(0,0));
   MODEL->set_TYu(1, 1, AcIN*Yu(1,1));
   MODEL->set_TYu(2, 2, AtIN*Yu(2,2));
   MODEL->set_mHd2(mHd2IN);
   MODEL->set_mHu2(mHu2IN);
   MODEL->set_mq2(0, 0, Sqr(mq11IN));
   MODEL->set_mq2(1, 1, Sqr(mq22IN));
   MODEL->set_mq2(2, 2, Sqr(mq33IN));
   MODEL->set_ml2(0, 0, Sqr(ml11IN));
   MODEL->set_ml2(1, 1, Sqr(ml22IN));
   MODEL->set_ml2(2, 2, Sqr(ml33IN));
   MODEL->set_md2(0, 0, Sqr(md11IN));
   MODEL->set_md2(1, 1, Sqr(md22IN));
   MODEL->set_md2(2, 2, Sqr(md33IN));
   MODEL->set_mu2(0, 0, Sqr(mu11IN));
   MODEL->set_mu2(1, 1, Sqr(mu22IN));
   MODEL->set_mu2(2, 2, Sqr(mu33IN));
   MODEL->set_me2(0, 0, Sqr(me11IN));
   MODEL->set_me2(1, 1, Sqr(me22IN));
   MODEL->set_me2(2, 2, Sqr(me33IN));
   MODEL->set_MassB(M1);
   MODEL->set_MassWB(M2);
   MODEL->set_MassG(M3);

   {
      const auto g1 = MODELPARAMETER(g1);
      const auto g2 = MODELPARAMETER(g2);
      const auto g3 = MODELPARAMETER(g3);
      const auto Yd = MODELPARAMETER(Yd);
      const auto Ye = MODELPARAMETER(Ye);
      const auto Yu = MODELPARAMETER(Yu);

      if (MaxAbsValue(g1) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("g1", MaxAbsValue(g1), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("g1");
      if (MaxAbsValue(g2) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("g2", MaxAbsValue(g2), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("g2");
      if (MaxAbsValue(g3) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("g3", MaxAbsValue(g3), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("g3");
      if (MaxAbsValue(Yd) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("Yd", MaxAbsValue(Yd), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("Yd");
      if (MaxAbsValue(Ye) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("Ye", MaxAbsValue(Ye), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("Ye");
      if (MaxAbsValue(Yu) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter_warning("Yu", MaxAbsValue(Yu), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter_warning("Yu");

   }
}

double MSSMNoFV_high_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double MSSMNoFV_high_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

void MSSMNoFV_high_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<MSSMNoFV<Two_scale>*>(model_);
}

void MSSMNoFV_high_scale_constraint<Two_scale>::set_input_parameters(const MSSMNoFV_input_parameters& inputPars_)
{
   inputPars = inputPars_;
}

void MSSMNoFV_high_scale_constraint<Two_scale>::set_scale(double s)
{
   scale = s;
}

void MSSMNoFV_high_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
}

void MSSMNoFV_high_scale_constraint<Two_scale>::initialize()
{
   assert(model && "MSSMNoFV_high_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   initial_scale_guess = 2.e16;

   scale = initial_scale_guess;
}

void MSSMNoFV_high_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "MSSMNoFV_high_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   const double currentScale = model->get_scale();
   const MSSMNoFV_soft_parameters beta_functions(model->calc_beta());

   const auto Qin = INPUTPARAMETER(Qin);

   scale = Qin;


   if (errno == ERANGE) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFV_high_scale_constraint<Two_scale>: Overflow error"
            " during calculation of high scale: " << strerror(errno) << '\n'
            << "   current scale = " << currentScale << '\n'
            << "   new scale = " << scale << '\n'
            << "   resetting scale to " << get_initial_scale_guess());
#endif
      scale = get_initial_scale_guess();
      errno = 0;
   }


}

} // namespace flexiblesusy
