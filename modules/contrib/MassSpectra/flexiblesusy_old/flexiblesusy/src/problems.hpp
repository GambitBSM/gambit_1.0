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

#ifndef PROBLEMS_H
#define PROBLEMS_H

#include <iostream>
#include <map>
#include <cassert>

namespace flexiblesusy {

/**
 * @class Problems
 * @brief stores problem flags for the spectrum generator
 */
template <unsigned Number_of_particles>
class Problems {
public:
   Problems(const char**);
   ~Problems() {}

   void flag_bad_mass(unsigned, bool flag = true);
   void flag_tachyon(unsigned, bool flag = true);
   void flag_thrown(const std::string& msg = "") {
      thrown = true;
      exception_msg = msg;
   }
   void flag_no_ewsb()         { failed_ewsb = true; }
   void flag_no_convergence()  { failed_convergence = true; }
   void flag_no_perturbative() { non_perturbative = true; }
   void flag_non_perturbative_parameter_warning(const std::string&, double, double, double);

   void unflag_bad_mass(unsigned);
   void unflag_tachyon(unsigned);
   void unflag_all_tachyons();
   void unflag_thrown()          { thrown = false; exception_msg = ""; }
   void unflag_no_ewsb()         { failed_ewsb = false; }
   void unflag_no_convergence()  { failed_convergence = false; }
   void unflag_no_perturbative() { non_perturbative = false; }
   void unflag_non_perturbative_parameter_warning(const std::string&);

   bool is_bad_mass(unsigned) const;
   bool is_tachyon(unsigned) const;
   bool have_bad_mass() const;
   bool have_tachyon() const;
   bool have_thrown() const     { return thrown; }
   bool have_non_perturbative_parameter_warning() const;
   bool no_ewsb() const         { return failed_ewsb; }
   bool no_convergence() const  { return failed_convergence; }
   bool no_perturbative() const { return non_perturbative; }

   void clear();                      ///< clear all problems
   bool have_problem() const;         ///< problems which yield invalid spectrum
   bool have_warning() const;         ///< warnings
   void print_problems(std::ostream& = std::cout) const;
   void print_warnings(std::ostream& = std::cout) const;

private:
   struct NonPerturbativeValue {
      NonPerturbativeValue()
         : value(0.), scale(0.), threshold(0.) {}
      NonPerturbativeValue(double value_, double scale_, double threshold_)
         : value(value_), scale(scale_), threshold(threshold_) {}
      double value, scale, threshold;
   };

   bool bad_masses[Number_of_particles]; ///< imprecise mass eigenvalues
   bool tachyons[Number_of_particles]; ///< tachyonic particles
   const char** particle_names;        ///< particle names
   bool thrown;                        ///< excepton thrown
   bool failed_ewsb;                   ///< no EWSB
   bool failed_convergence;            ///< no convergence
   bool non_perturbative;              ///< non-perturbative running
   std::string exception_msg;          ///< exception message
   std::map<std::string, NonPerturbativeValue> non_pert_pars; ///< non-perturbative parmeters
};

template <unsigned Number_of_particles>
Problems<Number_of_particles>::Problems(const char** particle_names_)
   : bad_masses() // intializes all elements to zero (= false)
   , tachyons()   // intializes all elements to zero (= false)
   , particle_names(particle_names_)
   , thrown(false)
   , failed_ewsb(false)
   , failed_convergence(false)
   , non_perturbative(false)
   , exception_msg("")
   , non_pert_pars()
{
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::flag_bad_mass(unsigned particle, bool flag)
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   bad_masses[particle] = flag;
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::flag_tachyon(unsigned particle, bool flag)
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   tachyons[particle] = flag;
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::unflag_bad_mass(unsigned particle)
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   bad_masses[particle] = false;
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::unflag_tachyon(unsigned particle)
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   tachyons[particle] = false;
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::unflag_all_tachyons()
{
   for (unsigned i = 0; i < Number_of_particles; ++i)
      tachyons[i] = false;
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::is_bad_mass(unsigned particle) const
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   return bad_masses[particle];
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::is_tachyon(unsigned particle) const
{
   assert(particle < Number_of_particles
          && "Error: particle index out of bounds");
   return tachyons[particle];
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::have_bad_mass() const
{
   for (unsigned i = 0; i < Number_of_particles; ++i) {
      if (bad_masses[i])
         return true;
   }
   return false;
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::have_tachyon() const
{
   for (unsigned i = 0; i < Number_of_particles; ++i) {
      if (tachyons[i])
         return true;
   }
   return false;
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::have_non_perturbative_parameter_warning() const
{
   return !non_pert_pars.empty();
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::clear()
{
   for (unsigned i = 0; i < Number_of_particles; ++i)
      bad_masses[i] = false;
   for (unsigned i = 0; i < Number_of_particles; ++i)
      tachyons[i] = false;
   failed_ewsb = false;
   failed_convergence = false;
   non_perturbative = false;
   thrown = false;
   exception_msg = "";
   non_pert_pars.clear();
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::have_problem() const
{
   return have_tachyon() || failed_ewsb || failed_convergence
      || non_perturbative || thrown;
}

template <unsigned Number_of_particles>
bool Problems<Number_of_particles>::have_warning() const
{
   return have_bad_mass() || have_non_perturbative_parameter_warning();
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::flag_non_perturbative_parameter_warning(
   const std::string& name, double value, double scale, double threshold)
{
   non_pert_pars[name] = NonPerturbativeValue(value, scale, threshold);
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::unflag_non_perturbative_parameter_warning(
   const std::string& name)
{
   non_pert_pars.erase(name);
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::print_problems(std::ostream& ostr) const
{
   if (!have_problem())
      return;

   ostr << "Problems: ";
   for (unsigned i = 0; i < Number_of_particles; ++i) {
      if (tachyons[i])
         ostr << "tachyon " << particle_names[i] << ", ";
   }
   if (failed_ewsb)
      ostr << "no ewsb, ";
   if (failed_convergence)
      ostr << "no convergence, ";
   if (non_perturbative)
      ostr << "non-perturbative, ";
   if (thrown)
      ostr << "exception thrown(" << exception_msg << ")";
}

template <unsigned Number_of_particles>
void Problems<Number_of_particles>::print_warnings(std::ostream& ostr) const
{
   if (!have_warning())
      return;

   ostr << "Warnings: ";
   for (unsigned i = 0; i < Number_of_particles; ++i) {
      if (bad_masses[i])
         ostr << "imprecise M" << particle_names[i] << ", ";
   }

   for (typename std::map<std::string, NonPerturbativeValue>::const_iterator
           it = non_pert_pars.begin(), end = non_pert_pars.end();
        it != end; ++it) {
      ostr << "non-perturbative " << it->first
           << " [|" << it->first << "|(" << it->second.scale << ") = "
           << it->second.value << " > " << it->second.threshold << "], ";
   }
}

template <unsigned Number_of_particles>
std::ostream& operator<<(std::ostream& ostr, const Problems<Number_of_particles>& problems)
{
   problems.print_problems(ostr);
   problems.print_warnings(ostr);
   return ostr;
}

} // namespace flexiblesusy

#endif
