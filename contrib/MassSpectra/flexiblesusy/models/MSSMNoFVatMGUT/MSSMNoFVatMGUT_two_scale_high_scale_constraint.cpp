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

// File generated at Mon 1 Jun 2015 12:48:02

#include "MSSMNoFVatMGUT_two_scale_high_scale_constraint.hpp"
#include "MSSMNoFVatMGUT_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"
#include "numerics2.hpp"

#include <cassert>
#include <cmath>
#include <cerrno>
#include <cstring>

namespace flexiblesusy {

#define INPUTPARAMETER(p) model->get_input().p
#define MODELPARAMETER(p) model->get_##p()
#define PHASE(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define LowEnergyConstant(p) Electroweak_constants::p
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define MODEL model
#define MODELCLASSNAME MSSMNoFVatMGUT<Two_scale>

MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::MSSMNoFVatMGUT_high_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
{
}

MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::MSSMNoFVatMGUT_high_scale_constraint(
   MSSMNoFVatMGUT<Two_scale>* model_)
   : Constraint<Two_scale>()
   , model(model_)
{
   initialize();
}

MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::~MSSMNoFVatMGUT_high_scale_constraint()
{
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: MSSMNoFVatMGUT_high_scale_constraint::apply():"
          " model pointer must not be zero");

   if (std::fabs(model->get_g1()) > 3.54491) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFVatMGUT_high_scale_constraint: Non-perturbative gauge "
            "coupling g1 = " << model->get_g1());
#endif
      model->set_g1(3.54491);
   }
   if (std::fabs(model->get_g2()) > 3.54491) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFVatMGUT_high_scale_constraint: Non-perturbative gauge "
            "coupling g2 = " << model->get_g2());
#endif
      model->set_g2(3.54491);
   }
   if (std::fabs(model->get_g3()) > 3.54491) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFVatMGUT_high_scale_constraint: Non-perturbative gauge "
            "coupling g3 = " << model->get_g3());
#endif
      model->set_g3(3.54491);
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

   MODEL->set_TYe(0,0,Re(AeIN*Ye(0,0)));
   MODEL->set_TYe(1,1,Re(AmuonIN*Ye(1,1)));
   MODEL->set_TYe(2,2,Re(AtauIN*Ye(2,2)));
   MODEL->set_TYd(0,0,Re(AdIN*Yd(0,0)));
   MODEL->set_TYd(1,1,Re(AsIN*Yd(1,1)));
   MODEL->set_TYd(2,2,Re(AbIN*Yd(2,2)));
   MODEL->set_TYu(0,0,Re(AuIN*Yu(0,0)));
   MODEL->set_TYu(1,1,Re(AcIN*Yu(1,1)));
   MODEL->set_TYu(2,2,Re(AtIN*Yu(2,2)));
   MODEL->set_mHd2(Re(mHd2IN));
   MODEL->set_mHu2(Re(mHu2IN));
   MODEL->set_mq2(0,0,Re(Sqr(mq11IN)));
   MODEL->set_mq2(1,1,Re(Sqr(mq22IN)));
   MODEL->set_mq2(2,2,Re(Sqr(mq33IN)));
   MODEL->set_ml2(0,0,Re(Sqr(ml11IN)));
   MODEL->set_ml2(1,1,Re(Sqr(ml22IN)));
   MODEL->set_ml2(2,2,Re(Sqr(ml33IN)));
   MODEL->set_md2(0,0,Re(Sqr(md11IN)));
   MODEL->set_md2(1,1,Re(Sqr(md22IN)));
   MODEL->set_md2(2,2,Re(Sqr(md33IN)));
   MODEL->set_mu2(0,0,Re(Sqr(mu11IN)));
   MODEL->set_mu2(1,1,Re(Sqr(mu22IN)));
   MODEL->set_mu2(2,2,Re(Sqr(mu33IN)));
   MODEL->set_me2(0,0,Re(Sqr(me11IN)));
   MODEL->set_me2(1,1,Re(Sqr(me22IN)));
   MODEL->set_me2(2,2,Re(Sqr(me33IN)));
   MODEL->set_MassB(Re(M1));
   MODEL->set_MassWB(Re(M2));
   MODEL->set_MassG(Re(M3));

   {
      const auto g1 = MODELPARAMETER(g1);
      const auto g2 = MODELPARAMETER(g2);
      const auto g3 = MODELPARAMETER(g3);
      const auto Yd = MODELPARAMETER(Yd);
      const auto Ye = MODELPARAMETER(Ye);
      const auto Yu = MODELPARAMETER(Yu);

      if (MaxAbsValue(g1) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("g1", MaxAbsValue(g1), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("g1");
      if (MaxAbsValue(g2) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("g2", MaxAbsValue(g2), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("g2");
      if (MaxAbsValue(g3) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("g3", MaxAbsValue(g3), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("g3");
      if (MaxAbsValue(Yd) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("Yd", MaxAbsValue(Yd), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("Yd");
      if (MaxAbsValue(Ye) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("Ye", MaxAbsValue(Ye), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("Ye");
      if (MaxAbsValue(Yu) > 3.5449077018110318)
         model->get_problems().flag_non_perturbative_parameter("Yu", MaxAbsValue(Yu), model->get_scale(), 3.5449077018110318);
      else
         model->get_problems().unflag_non_perturbative_parameter("Yu");

   }
}

double MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

const MSSMNoFVatMGUT_input_parameters& MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::get_input_parameters() const
{
   return model->get_input();
}

MSSMNoFVatMGUT<Two_scale>* MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::get_model() const
{
   return model;
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<MSSMNoFVatMGUT<Two_scale>*>(model_);
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::set_scale(double s)
{
   scale = s;
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::initialize()
{
   assert(model && "MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   initial_scale_guess = 2.e16;

   scale = initial_scale_guess;
}

void MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "MSSMNoFVatMGUT_high_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   const double currentScale = model->get_scale();
   const MSSMNoFVatMGUT_soft_parameters beta_functions(model->calc_beta());

   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto beta_g1 = BETAPARAMETER(g1);
   const auto beta_g2 = BETAPARAMETER(g2);

   scale = currentScale*Exp((-g1 + g2)/(BETA(g1) - BETA(g2)));


   if (errno == ERANGE) {
#ifdef ENABLE_VERBOSE
      ERROR("MSSMNoFVatMGUT_high_scale_constraint<Two_scale>: Overflow error"
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
