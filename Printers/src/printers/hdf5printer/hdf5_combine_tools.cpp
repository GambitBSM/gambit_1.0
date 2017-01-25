//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Greg's code for combining HDF5 output of
///  multiple MPI processes. Replaces the old
///  Python script
///
///  Ben: I have updated this to use my HDF5
///  wrappers (due to their error checking
///  functionality).
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date ???
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2017 Jan
///
///  *********************************************

#include "gambit/Printers/printers/hdf5printer/hdf5_combine_tools.hpp"
#include "gambit/Printers/printers/hdf5printer/hdf5tools.hpp"
#include "gambit/Utils/util_functions.hpp"
  
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
            
            inline void setup_hdf5_points(hid_t new_group, hid_t type, hid_t type2, unsigned long long size_tot, hid_t &dataset_out, hid_t &dataset2_out, hid_t &dataspace, hid_t &dataspace2, const std::string &name)
            {
                hsize_t dimsf[1];
                dimsf[0] = size_tot;
                dataspace = H5Screate_simple(1, dimsf, NULL); 
                dataset_out = H5Dcreate2(new_group, name.c_str(), type, dataspace, H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
                dataspace2 = H5Screate_simple(1, dimsf, NULL);
                dataset2_out = H5Dcreate2(new_group, (name + "_isvalid").c_str(), type2, dataspace2, H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
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
                
            hdf5_stuff::hdf5_stuff(const std::string &file_name, const std::string &group_name, int num) : group_name(group_name), cum_sizes(num, 0), sizes(num, 0), size_tot(0), root_file_name(file_name)
            {
                std::vector<bool> temp;
                std::unordered_set<std::string> param_set, aux_param_set;
                //herr_t status;
                for (int i = 0; i < num; i++)
                {
                    std::stringstream ss;
                    ss << i;
                    //H5::H5File file((file_name + "_" + ss.str()).c_str());
                    std::string fname = file_name + "_temp_" + ss.str();
                    hid_t file_id = H5Fopen(fname.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
                    if(file_id<0)
                    {
                        /* Still no good; error */
                        std::ostringstream errmsg;
                        errmsg << "Error combining temporary HDF5 output! Failed to open expected temporary file '"<<fname<<"'.";
                        printer_error().raise(LOCAL_INFO, errmsg.str());
                    }

                    files.push_back(file_id);
                    
                    //hid_t group_id = H5Gopen2(file_id, group_name.c_str(), H5P_DEFAULT);
                    hid_t group_id = HDF5::openGroup(file_id, group_name, true); // final argument prevents group from being created
                    groups.push_back(group_id);
                    
                    // Extract dataset names from the group
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
                            if (param_set.find(*it) == param_set.end())
                            {
                                // New parameter name found; add it to the list to be processed.
                                param_names.push_back(*it);
                                param_set.insert(*it);
                            }
                        }
                    }
                    
                    // Get RA dataset names
                    hid_t aux_group_id = HDF5::openGroup(file_id, group_name+"/RA", true);
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
                                // New aux parameter name found; add it to the list to be processed.
                                aux_param_names.push_back(*it);
                                aux_param_set.insert(*it);
                            }
                        }
                    }

                    hid_t dataset  = HDF5::openDataset(group_id, "pointID");
                    hid_t dataset2 = HDF5::openDataset(group_id, "pointID_isvalid");
                    hid_t dataspace = H5Dget_space(dataset);
                    hid_t dataspace2 = H5Dget_space(dataset2);
                    hssize_t size = H5Sget_simple_extent_npoints(dataspace);
                    hssize_t size2 = H5Sget_simple_extent_npoints(dataspace2);
                    
                    std::vector<bool> valids;
                    Enter_HDF5<read_hdf5>(dataset2, valids);
                    
                    if (i == 0)
                    {
                        std::vector<unsigned long long> pt_id;
                        Enter_HDF5<read_hdf5>(dataset2, pt_id);
                        pt_min = pt_id[0];
                    }
                    
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
                    HDF5::closeDataset(dataset);
                    HDF5::closeDataset(dataset2);
                }
            }
 
            hdf5_stuff::~hdf5_stuff()
            {
                for(std::vector<hid_t>::iterator it=files.begin(); it!=files.end(); ++it)
                {
                   HDF5::closeFile(*it);
                }
            } 
            
            void hdf5_stuff::Enter_Aux_Paramters(const std::string &file, bool resume)
            {
                std::vector<std::vector<unsigned long long>> ranks, ptids;
                std::vector<unsigned long long> aux_sizes;
                
                hid_t old_file, old_group;
                if (resume) // Ben: and Utils::file_exists(file))? On first resume there is no combined file yet.
                {
                    std::system(("mv " + file + " " + file + ".temp.bak").c_str());
                    old_file = H5Fopen((file + ".temp.bak").c_str(), H5F_ACC_RDWR, H5P_DEFAULT);
                    old_group = H5Gopen2(old_file, group_name.c_str(), H5P_DEFAULT);
                    
                    hid_t old_dataset = HDF5::openDataset(old_group, "pointID");
                    hid_t space = H5Dget_space(old_dataset);
                    hsize_t extra = H5Sget_simple_extent_npoints(space);
                    H5Sclose(space);
                    HDF5::closeDataset(old_dataset); 
 
                    size_tot += extra;
                }
                
                hid_t new_file = H5Fcreate(file.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT, H5P_DEFAULT);
                hid_t new_group = HDF5::openGroup(new_file, group_name); // Recursively creates required group structure
                
                if (aux_param_names.size() > 0) for (auto itg = aux_groups.begin(), endg = aux_groups.end(); itg != endg; ++itg)
                {
                    std::vector<unsigned long long> rank, ptsid;

                    HDF5::errorsOff();
                    hid_t dataset  = HDF5::openDataset(*itg, "RA_MPIrank", true);
                    HDF5::errorsOn();
                    if(dataset < 0) // If key dataset doesn't exist, set aux size to zero for this rank
                    {
                       //aux_sizes.push_back(0); // Or don't need it at all?
                    }
                    else
                    {
                       hid_t dataset2 = HDF5::openDataset(*itg, "RA_pointID");
                       hid_t dataset3 = HDF5::openDataset(*itg, "RA_pointID_isvalid");

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
                       HDF5::closeDataset(dataset);
                       HDF5::closeDataset(dataset2);
                       HDF5::closeDataset(dataset3);
                    }
                }

                for (auto it = param_names.begin(), end = param_names.end(); it != end; ++it)
                {
                    std::vector<hid_t> datasets, datasets2;
                    for (int i = 0, end = groups.size(); i < end; i++)
                    {
                        hid_t dataset  = HDF5::openDataset(groups[i], *it);
                        hid_t dataset2 = HDF5::openDataset(groups[i], *it + "_isvalid");

                        datasets.push_back(dataset);
                        datasets2.push_back(dataset2);
                    }
                    
                    hid_t old_dataset = -1, old_dataset2 = -1;
                    if (resume)
                    {
                        old_dataset  = HDF5::openDataset(old_group, *it);
                        old_dataset2 = HDF5::openDataset(old_group, *it + "_isvalid");
                    }
                    
                    hid_t dataset_out, dataset2_out, dataspace, dataspace2;
                    setup_hdf5_points(new_group, H5Dget_type(datasets[0]), H5Dget_type(datasets2[0]), size_tot, dataset_out, dataset2_out, dataspace, dataspace2, *it);

                    Enter_HDF5<copy_hdf5>(dataset_out, datasets, size_tot_l, sizes, old_dataset);
                    Enter_HDF5<copy_hdf5>(dataset2_out, datasets2, size_tot_l, sizes, old_dataset2);
                    
                    for (int i = 0, end = datasets.size(); i < end; i++)
                    {
                        HDF5::closeDataset(datasets[i]);
                        HDF5::closeDataset(datasets2[i]);
                    }
                    
                    H5Sclose(dataspace);
                    H5Sclose(dataspace2);
                    HDF5::closeDataset(dataset_out);
                    HDF5::closeDataset(dataset2_out);
                }
                
                for (auto it = aux_param_names.begin(), end = aux_param_names.end(); it != end; ++it)
                {
                    std::vector<hid_t> datasets, datasets2;
                    
                    for (int i = 0, end = aux_groups.size(); i < end; i++)
                    {
                        // Dataset may not exist, and thus fail to open. We will check its status
                        // later on and ignore it where needed.
                        HDF5::errorsOff();
                        hid_t dataset  = HDF5::openDataset(aux_groups[i], *it, true);
                        hid_t dataset2 = HDF5::openDataset(aux_groups[i], *it + "_isvalid", true);
                        HDF5::errorsOn();

                        datasets.push_back(dataset);
                        datasets2.push_back(dataset2);
                    }
                    
                    hid_t old_dataset = -1, old_dataset2 = -1;
                    if (resume)
                    {
                        // Dataset may not exist, and thus fail to open. We will check its status
                        // later on and ignore it where needed.
                        HDF5::errorsOff();
                        old_dataset  = HDF5::openDataset(old_group, *it, true);
                        old_dataset2 = HDF5::openDataset(old_group, *it + "_isvalid", true);
                        HDF5::errorsOn();
                    }

                    hid_t dataset_out, dataset2_out, dataspace, dataspace2;
                    setup_hdf5_points(new_group, H5Dget_type(datasets[0]), H5Dget_type(datasets2[0]), size_tot, dataset_out, dataset2_out, dataspace, dataspace2, *it);
                    
                    Enter_HDF5<ra_copy_hdf5>(dataset_out, dataset2_out, datasets, datasets2, size_tot, cum_sizes, ptids, ranks, aux_sizes, old_dataset, old_dataset2, pt_min);
                    
                    for (int i = 0, end = datasets.size(); i < end; i++)
                    {
                        // Some datasets may never have been opened, so check this before trying to close them.
                        if(datasets[i]>=0)  HDF5::closeDataset(datasets[i]);
                        if(datasets2[i]>=0) HDF5::closeDataset(datasets2[i]);
                    }
                }
                
                H5Fflush(new_file, H5F_SCOPE_GLOBAL);
                HDF5::closeGroup(new_group);
                HDF5::closeFile(new_file);
                
                if (resume)
                {
                    std::system(("rm -f " + file + ".temp.bak").c_str());
                }
                
                for (int i = 0, end = group_name.size(); i < end; i++)
                {
                    std::stringstream ss;
                    ss << i;
                    std::system(("rm -f " + root_file_name + "_temp_" + ss.str()).c_str());
                }
            }
        }
    }
}


