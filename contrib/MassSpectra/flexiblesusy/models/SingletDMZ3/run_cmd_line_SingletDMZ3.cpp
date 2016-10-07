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

// File generated at Sat 27 Aug 2016 12:45:01

#include "SingletDMZ3_input_parameters.hpp"
#include "SingletDMZ3_observables.hpp"
#include "SingletDMZ3_spectrum_generator.hpp"
#include "SingletDMZ3_slha_io.hpp"

#include "command_line_options.hpp"
#include "lowe.h"
#include "logger.hpp"
#include "physical_input.hpp"

#include <iostream>
#include <cstring>

namespace flexiblesusy {

void print_usage()
{
   std::cout <<
      "Usage: run_cmd_line_SingletDMZ3.x [options]\n"
      "Options:\n"
      "  --HiggsIN=<value>\n"
      "  --LamSHInput=<value>\n"
      "  --LamSInput=<value>\n"
      "  --muSInput=<value>\n"
      "  --mu3Input=<value>\n"
      "  --QEWSB=<value>\n"
      "  --Qin=<value>\n"

      "  --help,-h                         print this help message"
             << std::endl;
}

void set_command_line_parameters(int argc, char* argv[],
                                 SingletDMZ3_input_parameters& input)
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

      if(Command_line_options::get_parameter_value(option, "--mu3Input=", input.mu3Input))
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

   SingletDMZ3_input_parameters input;
   set_command_line_parameters(argc, argv, input);

   Physical_input physical_input;
   softsusy::QedQcd qedqcd;

   try {
      qedqcd.to(qedqcd.displayPoleMZ()); // run SM fermion masses to MZ
   } catch (const std::string& s) {
      ERROR(s);
      return EXIT_FAILURE;
   }

   SingletDMZ3_spectrum_generator<algorithm_type> spectrum_generator;
   spectrum_generator.set_precision_goal(1.0e-4);
   spectrum_generator.set_beta_zero_threshold(1e-11);
   spectrum_generator.set_max_iterations(0);         // 0 == automatic
   spectrum_generator.set_calculate_sm_masses(0);    // 0 == no
   spectrum_generator.set_parameter_output_scale(0); // 0 == susy scale
   spectrum_generator.set_pole_mass_loop_order(2);   // 2-loop
   spectrum_generator.set_ewsb_loop_order(2);        // 2-loop
   spectrum_generator.set_beta_loop_order(2);        // 2-loop
   spectrum_generator.set_threshold_corrections_loop_order(1); // 1-loop

   spectrum_generator.run(qedqcd, input);

   const int exit_code = spectrum_generator.get_exit_code();
   const SingletDMZ3_slha<algorithm_type> model(spectrum_generator.get_model());

   SingletDMZ3_scales scales;
   scales.HighScale = spectrum_generator.get_high_scale();
   scales.SUSYScale = spectrum_generator.get_susy_scale();
   scales.LowScale  = spectrum_generator.get_low_scale();

   const SingletDMZ3_observables observables(calculate_observables(model, qedqcd, physical_input));

   // SLHA output
   SLHAea::Coll slhaea(SingletDMZ3_slha_io::fill_slhaea(model, qedqcd, scales, observables));

   std::cout << slhaea;

   return exit_code;
}
