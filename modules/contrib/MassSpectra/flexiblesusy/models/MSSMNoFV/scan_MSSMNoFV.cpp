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

// File generated at Fri 16 Jan 2015 12:55:38

#include "MSSMNoFV_input_parameters.hpp"
#include "MSSMNoFV_spectrum_generator.hpp"
#include "MSSMNoFV_two_scale_model_slha.hpp"

#include "command_line_options.hpp"
#include "scan.hpp"
#include "lowe.h"
#include "logger.hpp"

#include <iostream>
#include <cstring>

namespace flexiblesusy {

void print_usage()
{
   std::cout <<
      "Usage: scan_MSSMNoFV.x [options]\n"
      "Options:\n"
      "  --TanBeta=<value>\n"
      "  --SignMu=<value>\n"
      "  --Qin=<value>\n"
      "  --M1=<value>\n"
      "  --M2=<value>\n"
      "  --M3=<value>\n"
      "  --AtIN=<value>\n"
      "  --AbIN=<value>\n"
      "  --AtauIN=<value>\n"
      "  --AcIN=<value>\n"
      "  --AsIN=<value>\n"
      "  --AmuonIN=<value>\n"
      "  --AuIN=<value>\n"
      "  --AdIN=<value>\n"
      "  --AeIN=<value>\n"
      "  --mHd2IN=<value>\n"
      "  --mHu2IN=<value>\n"
      "  --ml11IN=<value>\n"
      "  --ml22IN=<value>\n"
      "  --ml33IN=<value>\n"
      "  --me11IN=<value>\n"
      "  --me22IN=<value>\n"
      "  --me33IN=<value>\n"
      "  --mq11IN=<value>\n"
      "  --mq22IN=<value>\n"
      "  --mq33IN=<value>\n"
      "  --mu11IN=<value>\n"
      "  --mu22IN=<value>\n"
      "  --mu33IN=<value>\n"
      "  --md11IN=<value>\n"
      "  --md22IN=<value>\n"
      "  --md33IN=<value>\n"

      "  --help,-h                         print this help message"
             << std::endl;
}

void set_command_line_parameters(int argc, char* argv[],
                                 MSSMNoFV_input_parameters& input)
{
   for (int i = 1; i < argc; ++i) {
      const char* option = argv[i];

      if(Command_line_options::get_parameter_value(option, "--TanBeta=", input.TanBeta))
         continue;

      if(Command_line_options::get_parameter_value(option, "--SignMu=", input.SignMu))
         continue;

      if(Command_line_options::get_parameter_value(option, "--Qin=", input.Qin))
         continue;

      if(Command_line_options::get_parameter_value(option, "--M1=", input.M1))
         continue;

      if(Command_line_options::get_parameter_value(option, "--M2=", input.M2))
         continue;

      if(Command_line_options::get_parameter_value(option, "--M3=", input.M3))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AtIN=", input.AtIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AbIN=", input.AbIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AtauIN=", input.AtauIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AcIN=", input.AcIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AsIN=", input.AsIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AmuonIN=", input.AmuonIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AuIN=", input.AuIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AdIN=", input.AdIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--AeIN=", input.AeIN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mHd2IN=", input.mHd2IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mHu2IN=", input.mHu2IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--ml11IN=", input.ml11IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--ml22IN=", input.ml22IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--ml33IN=", input.ml33IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--me11IN=", input.me11IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--me22IN=", input.me22IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--me33IN=", input.me33IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mq11IN=", input.mq11IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mq22IN=", input.mq22IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mq33IN=", input.mq33IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mu11IN=", input.mu11IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mu22IN=", input.mu22IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--mu33IN=", input.mu33IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--md11IN=", input.md11IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--md22IN=", input.md22IN))
         continue;

      if(Command_line_options::get_parameter_value(option, "--md33IN=", input.md33IN))
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
   using namespace softsusy;
   typedef Two_scale algorithm_type;

   MSSMNoFV_input_parameters input;
   set_command_line_parameters(argc, argv, input);

   QedQcd oneset;
   oneset.toMz();

   MSSMNoFV_spectrum_generator<algorithm_type> spectrum_generator;
   spectrum_generator.set_precision_goal(1.0e-4);
   spectrum_generator.set_max_iterations(0);         // 0 == automatic
   spectrum_generator.set_calculate_sm_masses(0);    // 0 == no
   spectrum_generator.set_parameter_output_scale(0); // 0 == susy scale

   const std::vector<double> range(float_range(0., 100., 10));

   cout << "# "
        << std::setw(12) << std::left << "TanBeta" << ' '
        << std::setw(12) << std::left << "Mhh(0)/GeV" << ' '
        << std::setw(12) << std::left << "error"
        << '\n';

   for (std::vector<double>::const_iterator it = range.begin(),
           end = range.end(); it != end; ++it) {
      input.TanBeta = *it;

      spectrum_generator.run(oneset, input);

      const MSSMNoFV_slha<algorithm_type> model(spectrum_generator.get_model());
      const MSSMNoFV_physical& pole_masses = model.get_physical_slha();
      const Problems<MSSMNoFV_info::NUMBER_OF_PARTICLES>& problems
         = spectrum_generator.get_problems();
      const double higgs = pole_masses.Mhh(0);
      const bool error = problems.have_problem();

      cout << "  "
           << std::setw(12) << std::left << input.TanBeta << ' '
           << std::setw(12) << std::left << higgs << ' '
           << std::setw(12) << std::left << error;
      if (error) {
         cout << "\t# " << problems;
      }
      cout << '\n';
   }

   return 0;
}
