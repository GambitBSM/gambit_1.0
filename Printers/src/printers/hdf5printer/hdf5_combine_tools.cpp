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
///  *********************************************

#include "gambit/Printers/printers/hdf5printer/hdf5_combine_tools.hpp"
  
namespace Gambit 
{
    namespace Printers 
    {
        namespace HDF5 
        { 
            inline hsize_t getGroupNum(hid_t group_id)
            {
                H5G_info_t group_info;
                H5Gget_info(group_id, &group_info);
                return group_info.nlinks;
            }
            
            inline hid_t getType(hid_t dataset)
            {
                hid_t dtype = H5Dget_type(dataset);
                hid_t ret = H5Tget_native_type(dtype, H5T_DIR_DESCEND);
                H5Tclose(dtype);
                return ret;
            }
                
            inline herr_t op_func (hid_t loc_id, const char *name_in, const H5L_info_t *,
                    void *operator_data)
            {
                //herr_t          status;
                herr_t          return_val = 0;
                H5O_info_t      infobuf;
                std::vector<std::string> &od = *static_cast<std::vector<std::string> *> (operator_data);
                std::string name(name_in);

                //status = H5Oget_info_by_name (loc_id, name.c_str(), &infobuf, H5P_DEFAULT);
                H5Oget_info_by_name (loc_id, name.c_str(), &infobuf, H5P_DEFAULT);
                
                switch (infobuf.type) 
                {
                    case H5O_TYPE_GROUP:
                    {
                        //printf ("Group: %s {\n", name);
                        //od.push_back(name);
                        break;
                        
                    }
                    case H5O_TYPE_DATASET:
                    {
                        //printf ("Dataset: %s\n", name);
                        std::string str(name);
                        if (name.find("_isvalid") == std::string::npos)
                            od.push_back(std::string(name));
                        break;
                    }
                    case H5O_TYPE_NAMED_DATATYPE:
                        //printf ("Datatype: %s\n", name);
                        break;
                    default:
                        break;
                        //printf ( "Unknown: %s\n", name);
                }

                return return_val;
            }
            
            inline herr_t op_func_aux (hid_t loc_id, const char *name_in, const H5L_info_t *,
                    void *operator_data)
            {
                //herr_t          status;
                herr_t          return_val = 0;
                H5O_info_t      infobuf;
                std::vector<std::string> &od = *static_cast<std::vector<std::string> *> (operator_data);
                std::string name(name_in);

                //status = H5Oget_info_by_name (loc_id, name.c_str(), &infobuf, H5P_DEFAULT);
                H5Oget_info_by_name (loc_id, name.c_str(), &infobuf, H5P_DEFAULT);
                
                switch (infobuf.type) 
                {
                    case H5O_TYPE_GROUP:
                    {
                        //printf ("Group: %s {\n", name);
                        //od.push_back(name);
                        break;
                        
                    }
                    case H5O_TYPE_DATASET:
                    {
                        //printf ("Dataset: %s\n", name);
                        std::string str(name);
                        if (name.find("_isvalid") == std::string::npos && name != "RA_pointID" && name != "RA_MPIrank")
                            od.push_back(std::string(name));
                        break;
                    }
                    case H5O_TYPE_NAMED_DATATYPE:
                        //printf ("Datatype: %s\n", name);
                        break;
                    default:
                        break;
                        //printf ( "Unknown: %s\n", name);
                }

                return return_val;
            }
            
            inline void setup_hdf5_points(hid_t new_group, hid_t type, hid_t type2, unsigned long long size_tot, hid_t &dataset_out, hid_t &dataset2_out, hid_t &dataspace, hid_t &dataspace2, const std::string &name, bool resume)
            {
                if (resume)
                {
                    hid_t dataset_out = H5Dopen2(new_group, name.c_str(), H5P_DEFAULT);
                    hid_t dataset2_out = H5Dopen2(new_group, (name + "_isvalid").c_str(), H5P_DEFAULT);
                    dataspace = H5Dget_space(dataset_out);
                    dataspace2 = H5Dget_space(dataset2_out);
                    hssize_t dim_t = H5Sget_simple_extent_npoints(dataspace);
                    hsize_t ext_size[1];
                    ext_size[0] = dim_t + size_tot;
                    herr_t status = H5Dset_extent(dataset_out, ext_size);
                    std::cout << dataspace << std::endl;
                    if(status<0)
                    {
                        std::ostringstream errmsg;
                        errmsg << "Could not extend data set for parameter " << name << ": " << status << std::endl;
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                    status = H5Dset_extent(dataset2_out, ext_size);
                    if(status<0)
                    {
                        std::ostringstream errmsg;
                        errmsg << "Could not extend data set for parameter " << name << ": " << status  << "_isvalid" << std::endl;
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                    hsize_t offsets[1];
                    hsize_t chunk_size[1];
                    offsets[0] = dim_t;
                    chunk_size[0] = size_tot;
                    status = H5Sselect_hyperslab(dataspace, H5S_SELECT_SET, offsets, NULL, chunk_size, NULL); 
                    if(status<0)
                    {
                        std::ostringstream errmsg;
                        errmsg << "Could not define hyperslab for parameter " << name << ": " << status  << std::endl;
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                    status = H5Sselect_hyperslab(dataspace2, H5S_SELECT_SET, offsets, NULL, chunk_size, NULL); 
                    if(status<0)
                    {
                        std::ostringstream errmsg;
                        errmsg << "Could not define hyperslab for parameter " << name << ": " << status  << "_isvalid" << std::endl;
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                }
                else
                {
                    hsize_t dimsf[1];
                    dimsf[0] = size_tot;
                    dataspace = H5Screate_simple(1, dimsf, NULL); 
                    dataset_out = H5Dcreate2(new_group, name.c_str(), type, dataspace, H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
                    dataspace2 = H5Screate_simple(1, dimsf, NULL); 
                    dataset2_out = H5Dcreate2(new_group, (name + "_isvalid").c_str(), type2, dataspace2, H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
                }
            }
                
            inline std::vector<std::string> getGroups(std::string groups)
            {
                std::string::size_type pos = groups.find_first_of("/");
                while (pos != std::string::npos)
                {
                        groups[pos] = ' ';
                        pos = groups.find_first_of("/", pos + 1);
                }
                
                std::stringstream ss;
                ss << groups;
                std::vector<std::string> ret;
                std::string temp;
                while (ss >> temp) ret.push_back(temp);
                
                return ret;
            }
                
            hdf5_stuff::hdf5_stuff(const std::string &file_name, const std::string &group_name, int num) : group_name(group_name), cum_sizes(num, 0), sizes(num, 0), size_tot(0)
            {
                std::vector<bool> temp;
                std::unordered_set<std::string> param_set, aux_param_set;
                //herr_t status;
                for (int i = 0; i < num; i++)
                {
                    std::stringstream ss;
                    ss << i;
                    //H5::H5File file((file_name + "_" + ss.str()).c_str());
                    hid_t file_id = H5Fopen((file_name + "_temp_" + ss.str()).c_str(), H5F_ACC_RDWR, H5P_DEFAULT);
                    files.push_back(file_id);
                    
                    hid_t group_id = H5Gopen2(file_id, group_name.c_str(), H5P_DEFAULT);
                    groups.push_back(group_id);
                    
                    std::vector<std::string> names;
                    H5Literate (group_id, H5_INDEX_NAME, H5_ITER_NATIVE, NULL, op_func, (void *) &names);
                    
                    if (i == 0)
                    {
                        param_names = names;
                        param_set = std::unordered_set<std::string>(names.begin(), names.end());
                    }
                    else
                    {
                        for (auto it = names.begin(), end = names.end(); it != end; ++it)
                        {
                            if (param_set.find(*it) != param_set.end())
                            {
                                std::ostringstream errmsg;
                                errmsg << "Parameter '" << *it << "' exists, but not in file " << i << ".";
                                printer_error().raise(LOCAL_INFO, errmsg.str());
                            }
                        }
                    }
                    
                    hid_t aux_group_id = H5Gopen2(file_id, (group_name + "/RA").c_str(), H5P_DEFAULT);
                    aux_groups.push_back(aux_group_id);
                    
                    std::vector<std::string> aux_names;
                    H5Literate (aux_group_id, H5_INDEX_NAME, H5_ITER_NATIVE, NULL, op_func_aux, (void *) &aux_names);
                    
                    if (i == 0)
                    {
                        aux_param_names = aux_names;
                        aux_param_set = std::unordered_set<std::string>(aux_names.begin(), aux_names.end());
                    }
                    else
                    {
                        for (auto it = aux_names.begin(), end = aux_names.end(); it != end; ++it)
                        {
                            if (aux_param_set.find(*it) != aux_param_set.end())
                            {
                                std::ostringstream errmsg;
                                errmsg << "Random access parameter '" << *it << "' exists, but not in file " << i << ".";
                                printer_error().raise(LOCAL_INFO, errmsg.str());
                            }
                        }
                    }

                    hid_t dataset = H5Dopen2(group_id, "pointID", H5P_DEFAULT);
                    hid_t dataset2 = H5Dopen2(group_id, "pointID_isvalid", H5P_DEFAULT);
                    hid_t dataspace = H5Dget_space(dataset);
                    hid_t dataspace2 = H5Dget_space(dataset2);
                    hssize_t size = H5Sget_simple_extent_npoints(dataspace);
                    hssize_t size2 = H5Sget_simple_extent_npoints(dataspace2);
                    
                    std::vector<bool> valids;
                    Enter_HDF5<read_hdf5>(dataset2, valids);
                    
                    if (size != size2)
                    {
                        std::ostringstream errmsg;
                        errmsg << "pointID and pointID_isvalid are not the same size.";
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                    
                    if (i == num - 1)
                    {
                        size_tot_l = size_tot + size;
                    }
                    
                    for (auto it = valids.end()-1; size > 0; --it)
                    {
                        if (*it)
                            break;
                        else
                            --size;
                    }
                    
                    for (int j = i+1, end = cum_sizes.size(); j < end; j++)
                    {
                        cum_sizes[j] += size;
                    }
                    sizes[i] = size;
                    size_tot += size;
                    
                    H5Sclose(dataspace);
                    H5Dclose(dataset);
                    H5Dclose(dataset2);
                }
            }
             
            void hdf5_stuff::Enter_Aux_Paramters(const std::string &file, bool resume)
            {
                std::vector<std::vector<unsigned long long>> ranks, ptids;
                std::vector<unsigned long long> aux_sizes;
                
                hid_t new_file, new_group;
                if (resume)
                {
                    new_file = H5Fopen(file.c_str(), H5F_ACC_RDWR, H5P_DEFAULT);
                    new_group = H5Gopen2(new_file, group_name.c_str(), H5P_DEFAULT);
                }
                else
                {
                    new_file = H5Fcreate(file.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT, H5P_DEFAULT);
                    new_group = new_file;
                    auto new_groups = getGroups(group_name);
                    for (auto it = new_groups.begin(), end = new_groups.end(); it != end; ++it)
                    {
                        new_group = H5Gcreate2(new_group, it->c_str(), H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
                    }
                }
                
                if (aux_param_names.size() > 0) for (auto itg = aux_groups.begin(), endg = aux_groups.end(); itg != endg; ++itg)
                {
                    std::vector<unsigned long long> rank, ptsid;

                    hid_t dataset = H5Dopen2(*itg, "RA_MPIrank", H5P_DEFAULT);
                    hid_t dataset2 = H5Dopen2(*itg, "RA_pointID", H5P_DEFAULT);
                    hid_t dataset3 = H5Dopen2(*itg, "RA_pointID_isvalid", H5P_DEFAULT);
                    Enter_HDF5<read_hdf5>(dataset, rank);
                    Enter_HDF5<read_hdf5>(dataset2, ptsid);
                    ranks.push_back(rank);
                    ptids.push_back(ptsid);

                    hid_t dataspace = H5Dget_space(dataset2);
                    hid_t dataspace2 = H5Dget_space(dataset3);
                    hssize_t size = H5Sget_simple_extent_npoints(dataspace);
                    hssize_t size2 = H5Sget_simple_extent_npoints(dataspace2);
                    
                    
                    std::vector<bool> valids;
                    Enter_HDF5<read_hdf5>(dataset3, valids);
                    
                    if (size != size2)
                    {
                        std::ostringstream errmsg;
                        errmsg << "RA_pointID and RA_pointID_isvalid are not the same size.";
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }
                    
                    for (auto it = valids.end()-1; size > 0; --it)
                    {
                        if (*it)
                            break;
                        else
                            --size;
                    }
                    aux_sizes.push_back(size);
                    
                    H5Sclose(dataspace);
                    H5Dclose(dataset);
                    H5Dclose(dataset2);
                    H5Dclose(dataset3);
                }

                for (auto it = param_names.begin(), end = param_names.end(); it != end; ++it)
                {
                    std::vector<hid_t> datasets, datasets2;
                    for (int i = 0, end = groups.size(); i < end; i++)
                    {
                        hid_t dataset = H5Dopen2(groups[i], it->c_str(), H5P_DEFAULT);
                        hid_t dataset2 = H5Dopen2(groups[i], (*it + "_isvalid").c_str(), H5P_DEFAULT);
                        datasets.push_back(dataset);
                        datasets2.push_back(dataset2);
                    }
                    
                    hid_t dataset_out, dataset2_out, dataspace, dataspace2;
                    setup_hdf5_points(new_group, H5Dget_type(datasets[0]), H5Dget_type(datasets2[0]), size_tot, dataset_out, dataset2_out, dataspace, dataspace2, *it, resume);

                    Enter_HDF5<copy_hdf5>(dataset_out, datasets, size_tot_l, sizes, dataspace);
                    Enter_HDF5<copy_hdf5>(dataset2_out, datasets2, size_tot_l, sizes, dataspace2);
                    
                    for (int i = 0, end = datasets.size(); i < end; i++)
                    {
                        
                        H5Dclose(datasets[i]);
                        H5Dclose(datasets2[i]);
                    }
                    
                    H5Sclose(dataspace);
                    H5Sclose(dataspace2);
                    H5Dclose(dataset_out);
                    H5Dclose(dataset2_out);
                }
                
                for (auto it = aux_param_names.begin(), end = aux_param_names.end(); it != end; ++it)
                {
                    std::vector<hid_t> datasets, datasets2;
                    
                    for (int i = 0, end = aux_groups.size(); i < end; i++)
                    {
                        hid_t dataset = H5Dopen2(aux_groups[i], it->c_str(), H5P_DEFAULT);
                        hid_t dataset2 = H5Dopen2(aux_groups[i], (*it + "_isvalid").c_str(), H5P_DEFAULT);
                        datasets.push_back(dataset);
                        datasets2.push_back(dataset2);
                    }
                    
                    hid_t dataset_out, dataset2_out, dataspace, dataspace2;
                    setup_hdf5_points(new_group, H5Dget_type(datasets[0]), H5Dget_type(datasets2[0]), size_tot, dataset_out, dataset2_out, dataspace, dataspace2, *it, resume);
                    
                    Enter_HDF5<ra_copy_hdf5>(dataset_out, dataset2_out, datasets, datasets2, size_tot, cum_sizes, ptids, ranks, aux_sizes, dataspace, dataspace2);
                    
                    for (int i = 0, end = datasets.size(); i < end; i++)
                    {
                        H5Dclose(datasets[i]);
                        H5Dclose(datasets2[i]);
                    }
                }
                
                H5Gclose(new_group);
                H5Fclose(new_file);
            }
        }
    }
}


