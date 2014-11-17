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

// File generated at Thu 13 Nov 2014 16:03:38

#ifndef CMSSM_TWO_SCALE_CONVERGENCE_TESTER_H
#define CMSSM_TWO_SCALE_CONVERGENCE_TESTER_H

#include "CMSSM_convergence_tester.hpp"
#include "CMSSM_two_scale_model.hpp"
#include "two_scale_convergence_tester_drbar.hpp"

namespace flexiblesusy {

class Two_scale;

template<>
class CMSSM_convergence_tester<Two_scale> : public Convergence_tester_DRbar<CMSSM<Two_scale> > {
public:
   CMSSM_convergence_tester(CMSSM<Two_scale>*, double);
   virtual ~CMSSM_convergence_tester();

protected:
   virtual double max_rel_diff() const;
};

} // namespace flexiblesusy

#endif
