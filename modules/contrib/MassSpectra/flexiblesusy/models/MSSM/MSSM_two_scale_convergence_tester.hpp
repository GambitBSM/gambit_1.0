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

// File generated at Wed 3 Dec 2014 11:07:54

#ifndef MSSM_TWO_SCALE_CONVERGENCE_TESTER_H
#define MSSM_TWO_SCALE_CONVERGENCE_TESTER_H

#include "MSSM_convergence_tester.hpp"
#include "MSSM_two_scale_model.hpp"
#include "two_scale_convergence_tester_drbar.hpp"

namespace flexiblesusy {

class Two_scale;

template<>
class MSSM_convergence_tester<Two_scale> : public Convergence_tester_DRbar<MSSM<Two_scale> > {
public:
   MSSM_convergence_tester(MSSM<Two_scale>*, double);
   virtual ~MSSM_convergence_tester();

protected:
   virtual double max_rel_diff() const;
};

} // namespace flexiblesusy

#endif
