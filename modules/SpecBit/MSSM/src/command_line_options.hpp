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

#ifndef COMMAND_LINE_OPTIONS_H
#define COMMAND_LINE_OPTIONS_H

#include <iosfwd>
#include <string>
#include "error.hpp"

namespace flexiblesusy {

/**
 * @class Command_line_options
 * @brief parses the command line options
 *
 * Usage:
 * @code
 * int main(int argc, const char* argv[])
 * {
 *    using namespace flexiblesusy;
 *    Command_line_options options(argc, argv);
 *    if (options.must_exit())
 *       return options.status();
 *    cout << "SLHA input file: " << options.get_slha_input_file() << endl;
 * }
 * @endcode
 */
class Command_line_options {
public:
   Command_line_options();
   Command_line_options(int, const char*[]);
   ~Command_line_options();

   bool must_exit() const { return do_exit; }
   bool must_print_model_info() const { return do_print_model_info; }
   int status() const { return exit_status; }
   void parse(int, const char*[]);
   void print_build_info(std::ostream&) const;
   void print_usage(std::ostream&) const;
   void print_version(std::ostream&) const;

   const std::string& get_slha_input_file() const { return slha_input_file; }
   const std::string& get_slha_output_file() const { return slha_output_file; }
   const std::string& get_program_name() const { return program; }
   const std::string& get_rgflow_file() const { return rgflow_file; }
   const std::string& get_spectrum_file() const { return spectrum_file; }

private:
   bool do_exit;
   bool do_print_model_info;
   int exit_status;
   std::string program;
   std::string rgflow_file;
   std::string slha_input_file;
   std::string slha_output_file;
   std::string spectrum_file;

   static bool starts_with(const std::string&, const std::string&);
};

} // namespace flexiblesusy

#endif
