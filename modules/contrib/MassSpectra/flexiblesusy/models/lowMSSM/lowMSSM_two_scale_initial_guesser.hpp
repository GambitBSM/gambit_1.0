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

// File generated at Mon 1 Jun 2015 13:17:30

#ifndef lowMSSM_TWO_SCALE_INITIAL_GUESSER_H
#define lowMSSM_TWO_SCALE_INITIAL_GUESSER_H

#include "lowMSSM_initial_guesser.hpp"
#include "lowMSSM_two_scale_low_scale_constraint.hpp"
#include "lowMSSM_two_scale_susy_scale_constraint.hpp"
#include "two_scale_initial_guesser.hpp"
#include "error.hpp"
#include "lowe.h"

#include <sstream>

namespace flexiblesusy {

template <class T>
class lowMSSM;

class Two_scale;

/**
 * @class lowMSSM_initial_guesser<Two_scale>
 * @brief initial guesser for the lowMSSM
 */

template<>
class lowMSSM_initial_guesser<Two_scale> : public Initial_guesser<Two_scale> {
public:
   lowMSSM_initial_guesser(lowMSSM<Two_scale>*,
                               const QedQcd&,
                               const lowMSSM_low_scale_constraint<Two_scale>&,
                               const lowMSSM_susy_scale_constraint<Two_scale>&);
   virtual ~lowMSSM_initial_guesser();
   virtual void guess(); ///< initial guess

   void set_running_precision(double p) { running_precision = p; }

private:
   lowMSSM<Two_scale>* model; ///< pointer to model class
   QedQcd oneset;   ///< Standard Model low-energy data
   double mu_guess; ///< guessed DR-bar mass of up-quark
   double mc_guess; ///< guessed DR-bar mass of charm-quark
   double mt_guess; ///< guessed DR-bar mass of top-quark
   double md_guess; ///< guessed DR-bar mass of down-quark
   double ms_guess; ///< guessed DR-bar mass of strange-quark
   double mb_guess; ///< guessed DR-bar mass of bottom-quark
   double me_guess; ///< guessed DR-bar mass of electron
   double mm_guess; ///< guessed DR-bar mass of muon
   double mtau_guess; ///< guessed DR-bar mass of tau
   double running_precision; ///< Runge-Kutta RG running precision
   lowMSSM_low_scale_constraint<Two_scale> low_constraint;
   lowMSSM_susy_scale_constraint<Two_scale> susy_constraint;

   void guess_susy_parameters();
   void guess_soft_parameters();
   void calculate_DRbar_yukawa_couplings();
   void calculate_Yu_DRbar();
   void calculate_Yd_DRbar();
   void calculate_Ye_DRbar();
};

} // namespace flexiblesusy

#endif
