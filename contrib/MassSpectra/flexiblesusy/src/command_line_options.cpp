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
   , rgflow_file()
   , slha_input_file()
   , slha_output_file()
   , spectrum_file()
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

/**
 * Parse string of program options and store the given option values
 * in the member variables of this class.
 *
 * @param argc number of program arguments
 * @param argv program arguments
 */
void Command_line_options::parse(int argc, const char* argv[])
{
   assert(argc > 0);
   reset();
   program = argv[0];

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
      } else if (starts_with(option,"--spectrum-output-file=")) {
         spectrum_file = option.substr(23);
      } else if (starts_with(option,"--rgflow-output-file=")) {
         rgflow_file = option.substr(21);
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
           "  --slha-input-file=<filename>      SLHA input file\n"
           "                                    If not given, the default point"
           " is used.\n"
           "  --slha-output-file=<filename>     SLHA output file\n"
           "                                    If not given, the output is\n"
           "                                    printed to stdout.\n"
           "  --spectrum-output-file=<filename> file to write spectrum to\n"
           "  --rgflow-output-file=<filename>   file to write rgflow to\n"
           "  --build-info                      print build information\n"
           "  --model-info                      print model information\n"
           "  --help,-h                         print this help message\n"
           "  --version,-v                      print program version"
        << std::endl;
}

/**
 * Resets all command line options to their initial values.
 */
void Command_line_options::reset()
{
   do_exit = false;
   do_print_model_info = false;
   exit_status = EXIT_SUCCESS;
   program.clear();
   rgflow_file.clear();
   slha_input_file.clear();
   slha_output_file.clear();
   spectrum_file.clear();
}

/**
 * Returns true if the string str starts with prefix, false otherwise.
 *
 * @param str string to search in
 * @param prefix string to search for
 *
 * @return true if the string str starts with prefix, false otherwise
 */
bool Command_line_options::starts_with(const std::string& str,
                                       const std::string& prefix)
{
   return !str.compare(0, prefix.size(), prefix);
}

/**
 * Extracts the parameter value from a command line option string of
 * the form --m0=125 .
 *
 * @param str full option string, including the parameter value (--m0=125)
 * @param prefix option string, without the parameter value (--m0=)
 * @param[out] parameter output parameter value (of type double)
 *
 * @return true, if str starts with prefix, false otherwise
 */
bool Command_line_options::get_parameter_value(const std::string& str,
                                               const std::string& prefix,
                                               double& parameter)
{
   if (starts_with(str, prefix)) {
      parameter = atof(str.substr(prefix.length()).c_str());
      return true;
   }
   return false;
}

/**
 * Extracts the parameter value from a command line option string of
 * the form --m0=125 .
 *
 * @param str full option string, including the parameter value (--m0=125)
 * @param prefix option string, without the parameter value (--m0=)
 * @param[out] parameter output parameter value (of type int)
 *
 * @return true, if str starts with prefix, false otherwise
 */
bool Command_line_options::get_parameter_value(const std::string& str,
                                               const std::string& prefix,
                                               int& parameter)
{
   if (starts_with(str, prefix)) {
      parameter = atoi(str.substr(prefix.length()).c_str());
      return true;
   }
   return false;
}

} // namespace flexiblesusy
