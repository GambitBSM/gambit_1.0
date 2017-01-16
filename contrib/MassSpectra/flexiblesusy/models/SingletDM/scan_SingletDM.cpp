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

// File generated at Sat 27 Aug 2016 12:44:15

#include "SingletDM_input_parameters.hpp"
#include "SingletDM_spectrum_generator.hpp"
#include "SingletDM_two_scale_model_slha.hpp"

#include "command_line_options.hpp"
#include "scan.hpp"
#include "lowe.h"
#include "logger.hpp"

#include <iostream>
#include <cstring>

#define INPUTPARAMETER(p) input.p

namespace flexiblesusy {

void print_usage()
{
   std::cout <<
      "Usage: scan_SingletDM.x [options]\n"
      "Options:\n"
      "  --HiggsIN=<value>\n"
      "  --LamSHInput=<value>\n"
      "  --LamSInput=<value>\n"
      "  --muSInput=<value>\n"
      "  --QEWSB=<value>\n"
      "  --Qin=<value>\n"

      "  --help,-h                         print this help message"
             << std::endl;
}

void set_command_line_parameters(int argc, char* argv[],
                                 SingletDM_input_parameters& input)
{
   for (int i = 1; i < argc; ++i) {
      const char* option = argv[i];

      if(Command_line_options::get_parameter_value(option, "--HiggsIN=", input.HiggsIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--LamSHInput=", input.LamSHInput))
         continue;

      if(Command_line_options::get_parameter_value(option, "--LamSInput=", input.LamSInput))
         continue;

      if(Command_line_options::get_parameter_value(option, "--muSInput=", input.muSInput))
         continue;

      if(Command_line_options::get_parameter_value(option, "--QEWSB=", input.QEWSB))
         continue;

      if(Command_line_options::get_parameter_value(option, "--Qin=", input.Qin))
         continue;

      
      if (strcmp(option,"--help") == 0 || strcmp(option,"-h") == 0) {
         print_usage();
         exit(EXIT_SUCCESS);
      }

      ERROR("Unrecognized command line option: " << option);
      exit(EXIT_FAILURE);
   }
}

} // namespace flexiblesusy


int main(int argc, char* argv[])
{
   using namespace flexiblesusy;
   typedef Two_scale algorithm_type;

   SingletDM_input_parameters input;
   set_command_line_parameters(argc, argv, input);

   softsusy::QedQcd qedqcd;

   try {
      qedqcd.to(qedqcd.displayPoleMZ()); // run SM fermion masses to MZ
   } catch (const std::string& s) {
      ERROR(s);
      return EXIT_FAILURE;
   }

   SingletDM_spectrum_generator<algorithm_type> spectrum_generator;
   spectrum_generator.set_precision_goal(1.0e-4);
   spectrum_generator.set_max_iterations(0);         // 0 == automatic
   spectrum_generator.set_calculate_sm_masses(0);    // 0 == no
   spectrum_generator.set_parameter_output_scale(0); // 0 == susy scale

   const std::vector<double> range(float_range(0., 100., 10));

   cout << "# "
        << std::setw(12) << std::left << "HiggsIN" << ' '
        << std::setw(12) << std::left << "Mhh/GeV" << ' '
        << std::setw(12) << std::left << "error"
        << '\n';

   for (std::vector<double>::const_iterator it = range.begin(),
           end = range.end(); it != end; ++it) {
      INPUTPARAMETER(HiggsIN) = *it;


      spectrum_generator.run(qedqcd, input);

      const SingletDM_slha<algorithm_type> model(spectrum_generator.get_model());
      const SingletDM_physical& pole_masses = model.get_physical_slha();
      const Problems<SingletDM_info::NUMBER_OF_PARTICLES>& problems
         = spectrum_generator.get_problems();
      const double higgs = pole_masses.Mhh;
      const bool error = problems.have_problem();

      cout << "  "
           << std::setw(12) << std::left << *it << ' '
           << std::setw(12) << std::left << higgs << ' '
           << std::setw(12) << std::left << error;
      if (error) {
         cout << "\t# " << problems;
      }
      cout << '\n';
   }

   return 0;
}
