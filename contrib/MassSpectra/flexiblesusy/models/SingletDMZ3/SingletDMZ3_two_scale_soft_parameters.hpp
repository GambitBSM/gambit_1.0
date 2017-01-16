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

// File generated at Sat 27 Aug 2016 12:43:49

#ifndef SingletDMZ3_TWO_SCALE_soft_parameters_H
#define SingletDMZ3_TWO_SCALE_soft_parameters_H

#include "SingletDMZ3_two_scale_susy_parameters.hpp"

#include <iosfwd>

namespace flexiblesusy {

#ifdef TRACE_STRUCT_TYPE
   #undef TRACE_STRUCT_TYPE
#endif
#define TRACE_STRUCT_TYPE Soft_traces

class SingletDMZ3_soft_parameters : public SingletDMZ3_susy_parameters {
public:
   explicit SingletDMZ3_soft_parameters(const SingletDMZ3_input_parameters& input_ = SingletDMZ3_input_parameters());
   SingletDMZ3_soft_parameters(const SingletDMZ3_susy_parameters& , double mu3_, double muS_, double muH_, double v_
);
   virtual ~SingletDMZ3_soft_parameters() {}
   virtual Eigen::ArrayXd beta() const;
   virtual Eigen::ArrayXd get() const;
   virtual void print(std::ostream&) const;
   virtual void set(const Eigen::ArrayXd&);

   SingletDMZ3_soft_parameters calc_beta() const;
   virtual void clear();

   void set_mu3(double mu3_) { mu3 = mu3_; }
   void set_muS(double muS_) { muS = muS_; }
   void set_muH(double muH_) { muH = muH_; }
   void set_v(double v_) { v = v_; }

   double get_mu3() const { return mu3; }
   double get_muS() const { return muS; }
   double get_muH() const { return muH; }
   double get_v() const { return v; }


protected:
   double mu3;
   double muS;
   double muH;
   double v;


private:
   static const int numberOfParameters = 37;

   struct Soft_traces {
      double traceYdAdjYd;
      double traceYeAdjYe;
      double traceYuAdjYu;
      double traceYdAdjYdYdAdjYd;
      double traceYdAdjYuYuAdjYd;
      double traceYeAdjYeYeAdjYe;
      double traceYuAdjYuYuAdjYu;

   };
   void calc_soft_traces(Soft_traces&) const;

   double calc_beta_mu3_one_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_mu3_two_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_mu3_three_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muS_one_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muS_two_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muS_three_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muH_one_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muH_two_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_muH_three_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_v_one_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_v_two_loop(const TRACE_STRUCT_TYPE&) const;
   double calc_beta_v_three_loop(const TRACE_STRUCT_TYPE&) const;

};

std::ostream& operator<<(std::ostream&, const SingletDMZ3_soft_parameters&);

} // namespace flexiblesusy

#undef TRACE_STRUCT_TYPE

#endif
