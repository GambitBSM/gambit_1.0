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

#include "command_line_options.hpp"
#include "build_info.hpp"
#include "logger.hpp"

#include <cstdio>
#include <cstdlib>

namespace flexiblesusy {

Command_line_options::Command_line_options()
   : do_exit(false)
   , do_print_model_info(false)
   , exit_status(EXIT_SUCCESS)
   , program()
   , slha_input_file()
   , slha_output_file()
{
}

Command_line_options::Command_line_options(int argc, const char* argv[])
   : do_exit(false)
   , do_print_model_info(false)
   , exit_status(EXIT_SUCCESS)
   , program()
   , slha_input_file()
   , slha_output_file()
{
   parse(argc, argv);
}

Command_line_options::~Command_line_options()
{
}

void Command_line_options::parse(int argc, const char* argv[])
{
   assert(argc > 0);
   program = argv[0];
   do_exit = false;
   do_print_model_info = false;
   exit_status = EXIT_SUCCESS;

   for (int i = 1; i < argc; ++i) {
      const std::string option(argv[i]);
      if (starts_with(option,"--slha-input-file=")) {
         slha_input_file = option.substr(18);
         if (slha_input_file.empty())
            WARNING("no SLHA input file name given");
      } else if (starts_with(option,"--slha-output-file=")) {
         slha_output_file = option.substr(19);
         if (slha_output_file.empty())
            WARNING("no SLHA output file name given");
      } else if (option == "--help" || option == "-h") {
         print_usage(std::cout);
         do_exit = true;
      } else if (option == "--build-info") {
         print_build_info(std::cout);
         do_exit = true;
      } else if (option == "--model-info") {
         do_print_model_info = true;
         do_exit = true;
      } else if (option == "--version" || option == "-v") {
         print_version(std::cout);
         do_exit = true;
      } else {
         ERROR("Unrecognized command line option: " << option);
         do_exit = true;
         exit_status = EXIT_FAILURE;
      }
   }
}

void Command_line_options::print_build_info(std::ostream& ostr) const
{
   flexiblesusy::print_all_info(ostr);
}

void Command_line_options::print_version(std::ostream& ostr) const
{
   ostr << "FlexibleSUSY ";
   print_flexiblesusy_version(ostr);
   ostr << std::endl;
}

void Command_line_options::print_usage(std::ostream& ostr) const
{
   ostr << "Usage: " << program << " [options]\n"
           "Options:\n"
           "  --slha-input-file=<filename>   SLHA input file\n"
           "                                 If not given, the default point"
           " is used.\n"
           "  --slha-output-file=<filename>  SLHA output file\n"
           "                                 If not given, the output is\n"
           "                                 printed to stdout.\n"
           "  --build-info                   print build information\n"
           "  --model-info                   print model information\n"
           "  --help,-h                      print this help message\n"
           "  --version,-v                   print program version"
        << std::endl;
}

bool Command_line_options::starts_with(const std::string& str,
                                       const std::string& prefix)
{
   return !str.compare(0, prefix.size(), prefix);
}

} // namespace flexiblesusy
