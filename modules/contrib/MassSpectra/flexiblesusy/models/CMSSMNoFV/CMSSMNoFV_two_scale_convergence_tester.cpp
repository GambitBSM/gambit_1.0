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

// File generated at Wed 3 Dec 2014 13:12:12

#include "CMSSMNoFV_two_scale_convergence_tester.hpp"
#include <cmath>
#include <algorithm>
#include "wrappers.hpp"

namespace flexiblesusy {

#define OLD1(p) ol.get_##p()
#define NEW1(p) ne.get_##p()

#define OLD(p,i) ol.get_##p()(i)
#define NEW(p,i) ne.get_##p()(i)

CMSSMNoFV_convergence_tester<Two_scale>::CMSSMNoFV_convergence_tester(CMSSMNoFV<Two_scale>* model, double accuracy_goal)
   : Convergence_tester_DRbar<CMSSMNoFV<Two_scale> >(model, accuracy_goal)
{
}

CMSSMNoFV_convergence_tester<Two_scale>::~CMSSMNoFV_convergence_tester()
{
}

double CMSSMNoFV_convergence_tester<Two_scale>::max_rel_diff() const
{
   const CMSSMNoFV<Two_scale>& ol = get_last_iteration_model();
   const CMSSMNoFV<Two_scale>& ne = get_model();

   double diff[34] = { 0 };

   diff[0] = MaxRelDiff(OLD1(MGlu),NEW1(MGlu));
   diff[1] = MaxRelDiff(OLD1(MSveL),NEW1(MSveL));
   diff[2] = MaxRelDiff(OLD1(MSvmL),NEW1(MSvmL));
   diff[3] = MaxRelDiff(OLD1(MSvtL),NEW1(MSvtL));
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 4] = MaxRelDiff(OLD(MSd,i),NEW(MSd,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 6] = MaxRelDiff(OLD(MSu,i),NEW(MSu,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 8] = MaxRelDiff(OLD(MSe,i),NEW(MSe,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 10] = MaxRelDiff(OLD(MSm,i),NEW(MSm,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 12] = MaxRelDiff(OLD(MStau,i),NEW(MStau,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 14] = MaxRelDiff(OLD(MSs,i),NEW(MSs,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 16] = MaxRelDiff(OLD(MSc,i),NEW(MSc,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 18] = MaxRelDiff(OLD(MSb,i),NEW(MSb,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 20] = MaxRelDiff(OLD(MSt,i),NEW(MSt,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 22] = MaxRelDiff(OLD(Mhh,i),NEW(Mhh,i));
   }
   for (unsigned i = 1; i < 2; ++i) {
      diff[i + 24] = MaxRelDiff(OLD(MAh,i),NEW(MAh,i));
   }
   for (unsigned i = 1; i < 2; ++i) {
      diff[i + 26] = MaxRelDiff(OLD(MHpm,i),NEW(MHpm,i));
   }
   for (unsigned i = 0; i < 4; ++i) {
      diff[i + 28] = MaxRelDiff(OLD(MChi,i),NEW(MChi,i));
   }
   for (unsigned i = 0; i < 2; ++i) {
      diff[i + 32] = MaxRelDiff(OLD(MCha,i),NEW(MCha,i));
   }

   return *std::max_element(diff, diff + 34);

}

} // namespace flexiblesusy
