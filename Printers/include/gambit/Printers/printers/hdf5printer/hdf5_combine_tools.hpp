//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A collection of tools for interacting with
///  HDF5 databases.
///
///  Currently I am using the C++ bindings for 
///  HDF5, however they are a bit crap and it may
///  be better to just write our own.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 May
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************
 
#ifndef __hdf5_combine_tools_hpp__
#define __hdf5_combine_tools_hpp__

#include <vector>
#include <sstream>
#include <unordered_set>
#include <hdf5.h>

#include "gambit/Printers/printers/hdf5printer/hdf5tools.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/mpiwrapper.hpp"

namespace Gambit
{
    namespace Printers
    {
        namespace HDF5 
        {
            template <typename T>
            inline T type_ret(){return T();}

            template <class U, typename... T>
            void Enter_HDF5(hid_t dataset, T&... params);

            struct read_hdf5
            {
                template <typename U, typename T>
                static void run(U, hid_t &dataset, std::vector <T> &vec)
                {
                    hid_t dataspace = H5Dget_space(dataset);
                    hssize_t dim_t = H5Sget_simple_extent_npoints(dataspace);
                    std::vector<U> data(dim_t);
                    H5Dread( dataset, get_hdf5_data_type<U>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&data[0]);
                    vec = std::vector<T>(data.begin(), data.end());
                    H5Sclose(dataspace);
                }
            };

            struct copy_hdf5
            {
                template <typename U>
                static void run(U, hid_t &dataset_out, std::vector<hid_t> &datasets, unsigned long long &size_tot, std::vector<unsigned long long> &sizes)
                {
                    std::vector<U> data(size_tot);
                    unsigned long long j = 0;
                    
                    for (int i = 0, end = datasets.size(); i < end; i++)
                    {
                        H5Dread(datasets[i], get_hdf5_data_type<U>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&data[j]);
                        
                        hid_t space = H5Dget_space(datasets[i]);
                        hsize_t dim_t = H5Sget_simple_extent_npoints(space);
                        H5Sclose(space);
                        
                        if (dim_t >= sizes[i])
                        {
                            j += sizes[i];
                        }
                        else
                        {
                            std::ostringstream errmsg;
                            errmsg << "Error copying parameter.  Input file " << i << " smaller than required";
                            printer_error().raise(LOCAL_INFO, errmsg.str());
                        }
                    }
                    
                    H5Dwrite( dataset_out, get_hdf5_data_type<U>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&data[0]);
                }
            };

            struct ra_copy_hdf5
            {
                template <typename U>
                static void run (U, hid_t &dataset_out, hid_t &dataset2_out, std::vector<hid_t> &datasets, std::vector<hid_t> &datasets2, unsigned long long &size, std::vector<unsigned long long> &sizes, std::vector<std::vector <unsigned long long> > &pointid, std::vector<std::vector <unsigned long long> > &rank, std::vector<unsigned long long> &aux_sizes)
                {
                    std::vector<U> output(size, 0);
                    std::vector<int> valids(size, 0);
                    auto st = aux_sizes.begin();
                    auto pt = pointid.begin(), ra = rank.begin();
                    for (auto it = datasets.begin(), itv = datasets2.begin(), end = datasets.end(); it != end; ++it, ++itv, ++pt, ++ra, ++st)
                    {
                        hid_t space = H5Dget_space(*it);
                        hssize_t dim_t = H5Sget_simple_extent_npoints(space);
                        std::vector<U> data(dim_t);
                        std::vector<bool> valid;
                        Enter_HDF5<read_hdf5> (*itv, valid);
                        H5Dread(*it, get_hdf5_data_type<U>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&data[0]);
                        for (int i = 0, end = *st; i < end; i++)
                        {
                            if (valid[i])
                            {
                                unsigned long long temp = sizes[(*ra)[i]] + (*pt)[i] - 1;
                                if (temp < size)
                                {
                                    output[temp] = data[i];
                                    valids[temp] = 1;
                                }
                                else
                                {
                                    std::ostringstream errmsg;
                                    errmsg << "Error copying random access parameter.  "
                                    << "pt number " << (*pt)[i] << " of rank " << (*ra)[i]  
                                    << " does not exist.";
                                    printer_error().raise(LOCAL_INFO, errmsg.str());
                                }
                            }
                        }
                    }
                    
                    H5Dwrite( dataset_out, get_hdf5_data_type<U>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&output[0]);
                    H5Dwrite( dataset2_out, get_hdf5_data_type<int>::type(), H5S_ALL, H5S_ALL, H5P_DEFAULT, (void *)&valids[0]);
                }
            };

            template <class U, typename... T>
            inline void Enter_HDF5(hid_t dataset, T&... params)
            {
                hid_t dtype = H5Dget_type(dataset);
                //H5T_class_t cl = H5Tget_class(dtype);
                hid_t type = H5Tget_native_type(dtype, H5T_DIR_DESCEND);

                if (H5Tequal(type, get_hdf5_data_type<float>::type()))
                {
                    U::run(float(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<double>::type()))
                {
                    U::run(double(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<long double>::type()))
                {
                    U::run(type_ret<long double>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<char>::type()))
                {
                    U::run(char(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<short>::type()))
                {
                    U::run(short(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<int>::type()))
                {
                    U::run(int(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<long>::type()))
                {
                    U::run(long(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<long long>::type()))
                {
                    U::run(type_ret<long long>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<unsigned char>::type()))
                {
                    U::run(type_ret<unsigned char>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<unsigned short>::type()))
                {
                    U::run(type_ret<unsigned short>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<unsigned int>::type()))
                {
                    U::run(type_ret<unsigned int>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<unsigned long>::type()))
                {
                    U::run(type_ret<unsigned long>(), dataset, params...);
                }
                else if (H5Tequal(type, get_hdf5_data_type<unsigned long long>::type()))
                {
                    U::run(type_ret<unsigned long long>(), dataset, params...);
                }
                else
                {
                    std::ostringstream errmsg;
                    errmsg << "Could not deduce input hdf5 parameter type.";
                    printer_error().raise(LOCAL_INFO, errmsg.str());
                }
                
                H5Tclose(dtype);
            }

            class hdf5_stuff
            {
            private:
                std::string group_name;
                std::vector<std::string> param_names, aux_param_names;
                std::vector<hid_t> files;
                std::vector<hid_t> groups;
                std::vector<hid_t> aux_groups;
                std::vector<unsigned long long> cum_sizes;
                std::vector<unsigned long long> sizes;
                unsigned long long size_tot;
                unsigned long long size_tot_l;
                
            public:
                hdf5_stuff(const std::string &file_name, const std::string &group_name, int num);
                
                void Enter_Aux_Paramters(const std::string &file);
            };

            inline void combine_hdf5_files(const std::string file_output, const std::string &file, const std::string &group, int num)
            {
                hdf5_stuff stuff(file, group, num);
                
                stuff.Enter_Aux_Paramters(file_output);
            }
        }
    }
}

#endif

