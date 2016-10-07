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

#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <vector>

namespace depgen {
   template<class InputIt, class OutputIt, class UnaryPredicate>
   OutputIt copy_if(InputIt first, InputIt last, OutputIt d_first,
                    UnaryPredicate pred)
   {
      while (first != last) {
         if (pred(*first))
            *d_first++ = *first;
         first++;
      }
      return d_first;
   }
} // namespace depgen

/// returns directory from file name
std::string directory(const std::string& file_name)
{
   const std::size_t pos = file_name.find_last_of("/\\");
   if (pos == std::string::npos)
      return ".";
   return file_name.substr(0,pos);
}

/// returns file name w/o directory
std::string filename(const std::string& file_name)
{
   const std::size_t pos = file_name.find_last_of("/\\");
   return file_name.substr(pos+1);
}

/// returns file names w/o directory
std::vector<std::string> filenames(const std::vector<std::string>& file_names)
{
   std::vector<std::string> result(file_names.size());
   std::transform(file_names.begin(), file_names.end(), result.begin(), filename);
   return result;
}

/// checks if given file exists
bool file_exists(const std::string& name)
{
   if (FILE *file = std::fopen(name.c_str(), "r")) {
      std::fclose(file);
      return true;
   }
   return false;
}

struct Is_not_duplicate {
   bool operator()(const std::string& element) {
      return s.insert(element).second;
   }
private:
   std::set<std::string> s;
};

struct Is_not_duplicate_ignore_path {
   bool operator()(const std::string& element) {
      return s.insert(filename(element)).second;
   }
private:
   std::set<std::string> s;
};

/// deletes duplicate elements from a vector (preseves order)
template <typename Predicate>
std::vector<std::string> delete_duplicates(const std::vector<std::string>& vec,
                                           Predicate& pred)
{
   std::vector<std::string> unique_vector;

   depgen::copy_if(vec.begin(), vec.end(), std::back_inserter(unique_vector),
                   pred);

   return unique_vector;
}

/// replace file name extension by `ext'
std::string replace_extension(const std::string& str, const std::string& ext)
{
   const std::string no_ext(str.substr(0, str.find_last_of(".")));
   return no_ext + '.' + ext;
}

/// tests whether `str' starts with `prefix'
bool starts_with(const std::string& str, const std::string& prefix)
{
   return !str.compare(0, prefix.size(), prefix);
}

/// removes whitespace from left side of string
std::string trim_left(const std::string& s)
{
   std::string str(s);

   str.erase(str.begin(),
             std::find_if(str.begin(), str.end(),
                          std::not1(std::ptr_fun<int, int>(std::isspace))));

   return str;
}

/// print usage message
void print_usage(const std::string& program_name)
{
   std::cout << "Usage: " << program_name << " [options] filename\n"
      "\n"
      "Options:\n"
      "  -I<path>      Search for header files in <path>\n"
      "  -MF <file>    Write dependencies to <file>\n"
      "  -MG           Add missing headers to dependency list\n"
      "  -MM           Ignore system headers enclosed by < and >\n"
      "  -MMD <file>   Equivalent to -MM -MF <file>\n"
      "  -MP           Add phony target for each dependency other than main file\n"
      "  -MT <target>  Set name of the target\n"
      "  -o <file>     Equivalent to -MF <file>\n"
      "  --help,-h     Print this help message and exit\n"
      "\n"
      "Unsupported options:\n"
      "  -M            Add system headers to dependency list\n"
      "  -MD <file>    Equivalent to -M -MF <file>\n"
      "  -MQ <target>  Same as -MT <traget> but quote characters special to make\n";
}

/// print dependency list
void print_dependencies(const std::string& target_name,
                        const std::vector<std::string>& dependencies,
                        std::ostream& ostr = std::cout)
{
   ostr << target_name << ':';

   for (std::vector<std::string>::const_iterator it = dependencies.begin(),
           end = dependencies.end(); it != end; ++it) {
      ostr << ' ' << *it;
   }

   ostr << '\n';
}

/// print empty phony targets for each dependency
void print_empty_phony_targets(const std::vector<std::string>& dependencies,
                               std::ostream& ostr = std::cout)
{
   for (std::vector<std::string>::const_iterator it = dependencies.begin(),
           end = dependencies.end(); it != end; ++it) {
      ostr << '\n' << *it << ":\n";
   }
}

/// extract include statements from file (ignoring system headers)
std::vector<std::string> get_includes(const std::string& file_name)
{
   std::ifstream istr(file_name.c_str());
   std::vector<std::string> includes;
   std::string line;

   while (std::getline(istr, line)) {
      const std::string tline(trim_left(line));
      if (!tline.empty() && tline[0] == '#') {
         const std::string ttline(trim_left(tline.substr(1)));
         if (starts_with(ttline, "include")) {
            // throw away `include'
            const std::string header(trim_left(ttline.substr(7)));
            // extract file name
            std::size_t pos1 = header.find_first_of('"');
            if (pos1 == std::string::npos)
               continue;
            pos1++;
            std::size_t pos2 = header.find_first_of('"', pos1);
            if (pos2 == std::string::npos)
               continue;
            pos2--;
            const std::string file = header.substr(pos1, pos2);
            if (!file.empty())
               includes.push_back(file);
         }
      }
   }

   return includes;
}

/// prepend `str' to all strings
std::vector<std::string> prepend(const std::string& str,
                                 const std::vector<std::string>& strings)
{
   std::vector<std::string> result(strings);

   for (std::vector<std::string>::iterator it = result.begin(),
           end = result.end(); it != end; ++it) {
      *it = str + *it;
   }

   return result;
}

/// returns files in directory `dir' which fulfill the predicate
template <class Predicate>
std::vector<std::string> filter(const std::string& dir,
                                const std::vector<std::string>& files,
                                const Predicate& pred)
{
   const std::string dirname(dir.empty() || dir == "." ? "" : dir + '/');
   const std::vector<std::string> files_in_dir(prepend(dirname, files));

   std::vector<std::string> existing_files;

   depgen::copy_if(files_in_dir.begin(), files_in_dir.end(),
                   std::back_inserter(existing_files), pred);

   return existing_files;
}

/// search recursively for include statments in `file_name'
/// taking into account only directories given in `paths'
std::vector<std::string> search_includes(const std::string& file_name,
                                         const std::vector<std::string>& paths,
                                         bool ignore_non_existing = true,
                                         unsigned max_depth = 10)
{
   if (max_depth == 0)
      return std::vector<std::string>();

   // find included files from #include statements
   const std::vector<std::string> includes(get_includes(file_name));

   // select only files that exist in paths
   std::vector<std::string> existing;
   for (std::vector<std::string>::const_iterator it = paths.begin(),
           end = paths.end(); it != end; ++it) {
      const std::vector<std::string> existing_in_path(filter(*it, includes, file_exists));
      existing.insert(existing.end(), existing_in_path.begin(), existing_in_path.end());
   }

   // search recursively for included files in existing headers
   const std::vector<std::string> tmp_existing(existing);
   for (std::vector<std::string>::const_iterator it = tmp_existing.begin(),
           end = tmp_existing.end(); it != end; ++it) {
      const std::vector<std::string> sub_existing(
         search_includes(*it, paths, ignore_non_existing, max_depth - 1));
      existing.insert(existing.end(), sub_existing.begin(), sub_existing.end());
   }

   // search for non-existing headers
   if (!ignore_non_existing) {
      std::vector<std::string> includes_without_path(filenames(includes));
      std::sort(includes_without_path.begin(), includes_without_path.end());

      std::vector<std::string> existing_without_path(filenames(existing));
      std::sort(existing_without_path.begin(), existing_without_path.end());

      std::vector<std::string> non_existing;
      std::set_difference(includes_without_path.begin(), includes_without_path.end(),
                          existing_without_path.begin(), existing_without_path.end(),
                          std::back_inserter(non_existing));

      existing.insert(existing.end(), non_existing.begin(), non_existing.end());
   }

   return existing;
}

int main(int argc, const char* argv[])
{
   if (argc < 2) {
      std::cerr << "Error: no file given\n";
      print_usage(argv[0]);
      return EXIT_FAILURE;
   }

   // include paths
   std::vector<std::string> paths;
   std::string file_name, target_name, output_file;
   bool ignore_non_existing = true; // -MG
   bool add_empty_phony_targets = false; // -MP

   for (int i = 1; i < argc; i++) {
      const std::string arg(argv[i]);
      if (starts_with(arg, "-I") && arg.length() > 2) {
         paths.push_back(arg.substr(2));
         continue;
      }
      if (arg == "-MG") {
         ignore_non_existing = false;
         continue;
      }
      if (arg == "-MM") {
         // ignore headers from system directories (default)
         continue;
      }
      if (arg == "-M") {
         std::cerr << "Warning: ignoring unsupported option " << arg << '\n';
         continue;
      }
      if (arg == "-MD" || arg == "-MQ") {
         std::cerr << "Warning: ignoring unsupported option " << arg << '\n';
         i++;
         continue;
      }
      if (arg == "-MP") {
         add_empty_phony_targets = true;
         continue;
      }
      if (arg == "-MT" && i + 1 < argc) {
         target_name = argv[++i];
         continue;
      }
      if ((arg == "-MF" || arg == "-MMD" || arg == "-o") && i + 1 < argc) {
         output_file = argv[++i];
         continue;
      }
      if (arg == "--help" || arg == "-h") {
         print_usage(argv[0]);
         return EXIT_SUCCESS;
      }
      // interpret last argument as file name
      if (i + 1 == argc) {
         file_name = arg;
         if (!file_exists(file_name)) {
            std::cerr << "Error: file does not exist: " << file_name << '\n';
            return EXIT_FAILURE;
         }
         continue;
      }

      std::cerr << "Error: unknown option: " << arg << '\n';
      print_usage(argv[0]);
      return EXIT_FAILURE;
   }

   paths.insert(paths.begin(), directory(file_name));
   paths.push_back(".");
   Is_not_duplicate is_not_dup;
   paths = delete_duplicates(paths, is_not_dup);

   // search for header inclusions (remove duplicate headers)
   Is_not_duplicate_ignore_path is_not_dup_ign_path;
   std::vector<std::string> dependencies
      = delete_duplicates(
           search_includes(file_name, paths, ignore_non_existing),
           is_not_dup_ign_path);

   // add file name to dependency list
   std::vector<std::string> dependencies_and_main(dependencies);
   dependencies_and_main.insert(dependencies_and_main.begin(), file_name);

   if (target_name.empty())
      target_name = replace_extension(filename(file_name), "o");

   if (output_file.empty()) {
      print_dependencies(target_name, dependencies_and_main);
      if (add_empty_phony_targets)
         print_empty_phony_targets(dependencies);
   } else {
      std::ofstream ostr(output_file.c_str());
      if (ostr.good()) {
         print_dependencies(target_name, dependencies_and_main, ostr);
         if (add_empty_phony_targets)
            print_empty_phony_targets(dependencies, ostr);
      } else {
         std::cerr << "Error: cannot write to file " << output_file << '\n';
         return EXIT_FAILURE;
      }
   }

   return EXIT_SUCCESS;
}
