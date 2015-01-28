//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 MAY
///
///  *********************************************

#include "scanners/twalk.hpp"

scanner_plugin(twalk, version(0, 0, 1, beta))
{
        int plugin_main ()
        {
                scan_ptr<double (const std::vector<double>&)> LogLike = get_functor("Likelihood");
                int dim = get_dimension();
                TWalk(LogLike, dim,
                                get_inifile_value<double>("kwalk_ratio", 0.9836),
                                get_inifile_value<int>("projection_dimension", 4),
                                get_inifile_value<double>("gaussian_distance", 2.4),
                                get_inifile_value<double>("walk_distance", 2.5),
                                get_inifile_value<double>("transverse_distance", 6.0),
                                get_inifile_value<long long>("ran_seed", 0),
                                get_inifile_value<std::string>("file_name", "output_file").c_str(),
                                get_inifile_value<double>("tolorance", 0.01),
                                get_inifile_value<int>("thread_number", dim+2),
                                get_inifile_value<int>("cut", 100),
                                0x00);
                
                return 0;
        }
}
