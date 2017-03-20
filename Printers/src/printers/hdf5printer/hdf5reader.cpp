//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  HDF5 printer retriever class definitions
///  This is a class accompanying the HDF5Printer
///  which takes care of *reading* from output
///  created by the HDF5Printer.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2017 Jan
///
///  *********************************************

#include "gambit/Printers/printers/hdf5reader.hpp"
#include "gambit/Printers/printers/hdf5printer.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Logs/logger.hpp"

namespace Gambit {
  namespace Printers {

     // It's a little clumsy, but need to declare these type checking functions as extern templates here
     #define externGETTYPEID(r,data,i,elem) extern template std::size_t getTypeID<elem>();
     BOOST_PP_SEQ_FOR_EACH_I(externGETTYPEID, _, PRINTABLE_TYPES)
     #undef externGETTYPEID

     hid_t openfile_read(std::string file)
     {
        hid_t file_id = H5Fopen(file.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);
        if(file_id<0)
        {
            std::ostringstream errmsg;
            errmsg << "Error opening HDF5 file '"<<file<<"' for reading! See HDF5 error (stderr) for further details.";
            printer_error().raise(LOCAL_INFO, errmsg.str());
        }
        return file_id;
     }

     // Post-process output of lsGroup to remove "_isvalid" datasets
     std::vector<std::string> lsGroup_process(hid_t location_id)
     {
        std::vector<std::string> ls_out;
        std::vector<std::string> ls_all = HDF5::lsGroup(location_id);
        for(std::vector<std::string>::iterator it = ls_all.begin();
            it != ls_all.end(); ++it)
        {
           if(not Utils::endsWith(*it,"_isvalid")) ls_out.push_back(*it);
        }
        return ls_out;  
     }

     HDF5Reader::HDF5Reader(const Options& options)
      : file( options.getValue<std::string>("file"))
      , group( options.getValue<std::string>("group") )
      , file_id(openfile_read(file))
      , location_id(HDF5::openGroup(file_id, group, true))
      , all_datasets(lsGroup_process(location_id))
      , pointIDs        (location_id, "pointID", true, 'r') 
      , pointIDs_isvalid(location_id, "pointID_isvalid", true, 'r')
      , mpiranks        (location_id, "MPIrank", true, 'r')
      , mpiranks_isvalid(location_id, "MPIrank_isvalid", true, 'r') 
      , current_dataset_index(0)
      , current_point(nullpoint)
     {
       if(all_datasets.size()<2)
       {
         std::ostringstream errmsg;
         errmsg << "Error opening HDF5 datasets for reading (file="<<file<<", group="<<group<<"). Less than two datasets detected in specified group (number found = "<<all_datasets.size()<<"). Please check that the input file and group are correct." <<std::endl;
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       const std::size_t dset_length  = pointIDs.dset_length();
       const std::size_t dset_length2 = pointIDs_isvalid.dset_length();
       const std::size_t dset_length3 = mpiranks.dset_length();
       const std::size_t dset_length4 = mpiranks_isvalid.dset_length();
       if( (dset_length  != dset_length2)
        or (dset_length3 != dset_length4)
        or (dset_length  != dset_length3) )
       {
         std::ostringstream errmsg;
         errmsg << "Error opening HDF5 datasets for reading (file="<<file<<", group="<<group<<"). Unequal dataset lengths detected in pointID and MPIrank datasets:" <<std::endl;
         errmsg << "  pointIDs.dset_length()         = " << dset_length << std::endl;
         errmsg << "  pointIDs_isvalid.dset_length() = " << dset_length2 << std::endl;
         errmsg << "  mpiranks.dset_length()         = " << dset_length3 << std::endl;
         errmsg << "  mpiranks_isvalid.dset_length() = " << dset_length4 << std::endl;
         errmsg << "This most likely indicates corruption of the datasets (possibly due to unsafe shutdown).";
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }
     }

     HDF5Reader::~HDF5Reader()
     {
        HDF5::closeFile(file_id);
        HDF5::closeGroup(location_id);
     }

     /// @{ Base class virtual interface functions

     /// Reset 'read head' position to first entry
     void HDF5Reader::reset()
     { 
        // Gotta search for it.
        std::ostringstream errmsg;
        errmsg << "'reset()' function has not yet been implemented for the HDF5Reader!";
        printer_error().raise(LOCAL_INFO, errmsg.str());
     }

     /// Get length of input dataset
     ulong HDF5Reader::get_dataset_length()
     {
        return pointIDs.dset_length();
     }

     /// Get next rank/ptID pair in data file
     PPIDpair HDF5Reader::get_next_point()
     {
        if(current_point!=nullpoint)
        {
           ++current_dataset_index; 
        }
        bool stop_loop = false;
        while(not stop_loop)
        {
           if(eoi())
           {
             current_point = nullpoint;
             stop_loop = true;
           }
           else
           {
             bool pvalid = pointIDs_isvalid.get_entry(current_dataset_index);
             bool mvalid = mpiranks_isvalid.get_entry(current_dataset_index);
             if(pvalid and mvalid)
             {
               unsigned long pid = pointIDs.get_entry(current_dataset_index);
               int mpirank       = mpiranks.get_entry(current_dataset_index);
               current_point = PPIDpair(pid,mpirank);
               stop_loop = true;
             }
             else
             {
               // Point didn't contain valid data, try next one.
               ++current_dataset_index;
             }
           }
        }
        return current_point;
     }

     /// Get current rank/ptID pair in data file
     PPIDpair HDF5Reader::get_current_point()
     {
        return current_point;
     }

     /// Check if 'current point' is past the end of the datasets (and thus invalid!)
     bool HDF5Reader::eoi()
     {
        return current_dataset_index >= get_dataset_length();
     }

     /// Get type information for a data entry, i.e. defines the C++ type which this should be
     /// retrieved as, not what it is necessarily literally stored as in the output.
     std::size_t HDF5Reader::get_type(const std::string& label)
     {
        hid_t datatype_id = HDF5::getH5DatasetType(location_id, label);
        // Need to match HDF5 datatype to a printer type ID code.
        // In principle we may like to retrieve a certain type of data in a fancy way,
        // as with ModelParameters or vectors, however we can't really do that in an
        // automated way because this higher-level information is lost during output.
        // So the type matching has to be of a basic sort, i.e. individual ModelParameters
        // elements will be identified as 'double' and so on. But if they are stored that
        // way in the output, then we should be able to copy them that way too (which is
        // the main usage of this get_type function), so this should be ok to do.
        // Currently we only store data in basic types, so those are all that this
        // function needs to retrieve.

        // DEBUG
        // std::cout << "Retrieved H5 type for '"<<label<<"': "<<datatype_id<<std::endl;
        // printAllTypeIDs();
        // printAllH5Types();
        // END DEBUG

        // Matching of HDF5 datatypes to Printer type IDs
        // Need to use H5Tequal to check if the HDF5 type IDs are equal
        std::size_t typeID;
        #define GET_TYPE_CASES(r,data,elem) \
        if( H5Tequal(datatype_id, get_hdf5_data_type<elem>::type()) )\
        { \
            typeID = getTypeID<elem>(); \
        } \
        else
        BOOST_PP_SEQ_FOR_EACH(GET_TYPE_CASES, _, H5_OUTPUT_TYPES)
        #undef GET_TYPE_CASES
        {
          std::ostringstream err;                               
          err << "Did not recognise retrieved HDF5 type for data label '"<<label<<"'! This may indicate a bug in the Reader class you are using, please report it."; 
          printer_error().raise(LOCAL_INFO,err.str());         
        }
        if(typeID==0)
        {
          std::ostringstream err;                               
          err << "Did not recognise retrieved Printer type for data label '"<<label<<"'! This may indicate a bug in the Printer system, please report it."; 
          printer_error().raise(LOCAL_INFO,err.str());         
        }
        /// Release HDF5 type ID number
        HDF5::closeType(datatype_id);
        return typeID;
     }

     /// Get labels of all datasets in the linked group
     std::set<std::string> HDF5Reader::get_all_labels()
     {
        std::set<std::string> out(all_datasets.begin(), all_datasets.end()); 
        return out;
     }

     /// @}

     /// @{ Retrieve functions

     /// Templatable retrieve functions
     #define RETRIEVE(TYPE) _retrieve(TYPE& out, const std::string& l, const uint r, const ulong p) \
        { return  _retrieve_template(out,l,0,r,p); }
     bool HDF5Reader::RETRIEVE(int      ) 
     bool HDF5Reader::RETRIEVE(uint     ) 
     bool HDF5Reader::RETRIEVE(long     ) 
     bool HDF5Reader::RETRIEVE(ulong    ) 
     bool HDF5Reader::RETRIEVE(longlong ) 
     bool HDF5Reader::RETRIEVE(ulonglong)
     bool HDF5Reader::RETRIEVE(float    ) 
     bool HDF5Reader::RETRIEVE(double   ) 
     #undef RETRIEVE

     // Bools can't quite use the template function directly, since there
     // are some issues with bools and MPI/HDF5 types. Easier to just convert
     // the bool to an int first (this is how they are printed in the first place anyway).
     bool HDF5Reader::_retrieve(bool& out, const std::string& l, const uint rank, const ulong pID)
     {
       uint tmp_out;
       bool tmp_ret;
       tmp_ret = _retrieve_template(tmp_out,l,0,rank,pID);
       out = tmp_out;
       return tmp_ret;
     }

     bool HDF5Reader::_retrieve(std::vector<double>& /*out*/,const std::string& /*label*/, const uint /*rank*/, const ulong /*pointID*/)
     { printer_error().raise(LOCAL_INFO,"NOT YET IMPLEMENTED"); return false; }
     bool HDF5Reader::_retrieve(map_str_dbl& /*out*/,        const std::string& /*label*/, const uint /*rank*/, const ulong /*pointID*/)
     { printer_error().raise(LOCAL_INFO,"NOT YET IMPLEMENTED"); return false; }

     bool HDF5Reader::_retrieve(ModelParameters& out, const std::string& modelname, const uint rank, const ulong pointID)
     {
        bool is_valid = true;
        /// Work out all the output labels which correspond to the input modelname
        bool found_at_least_one(false);
 
        //std::cout << "Searching for ModelParameters of model '"<<modelname<<"'"<<std::endl;
        // Iterate through names in HDF5 group
        for(std::vector<std::string>::const_iterator 
            it = all_datasets.begin();
            it!= all_datasets.end(); ++it)
        {
          //std::cout << "Candidate: " <<*it<<std::endl;
          std::string param_name; // *output* of parsing function, parameter name
          std::string label_root; // *output* of parsing function, label minus parameter name
          if(parse_label_for_ModelParameters(*it, modelname, param_name, label_root))
          {
            // Add the found parameter name to the ModelParameters object
            out._definePar(param_name);
            if(found_at_least_one)
            {
              if(out.getOutputName()!=label_root)
              {
                 std::ostringstream err;
                 err << "Error! HDF5Reader could not retrieve ModelParameters matching the model name '"<<modelname<<"' in the HDF5 file:group "<<file<<":"<<group<<"' (while calling 'retrieve'). Candidate parameters WERE found, however their dataset labels indicate the presence of an inconsistency or ambiguity in the output. For example, we just tried to retrive a model parameter from the dataset:\n\
  "<<*it<<"\n\
and successfully found the parameter "<<param_name<<", however the root of the label, that is,\n\
  "<<label_root<<"\n\
does not match the root expected based upon previous parameter retrievals for this model, which was\n\
  "<<out.getOutputName()<<"\n\
This may indicate that multiple sets of model parameters are present in the output file for the same model! This is not allowed, please report this bug against whatever master YAML file (or external code?) produced the output file you are trying to read.";
                printer_error().raise(LOCAL_INFO,err.str());     
              }
            }
            else
            {
              out.setOutputName(label_root);
            }
            // Get the corresponding value out of the data file
            double value; // *output* of retrieve function
            bool tmp_is_valid;
            tmp_is_valid = _retrieve(value, *it, rank, pointID);
            found_at_least_one = true;
            if(tmp_is_valid)
            {
               out.setValue(param_name, value);
            }
            else
            {
               // If one parameter value is 'invalid' then we cannot reconstruct 
               // the ModelParameters object, so we mark the whole thing invalid.
               out.setValue(param_name, 0);
               is_valid = false;           
            }
          }
        }

        if(not found_at_least_one)
        {
          // Didn't find any matches!
           std::ostringstream err;
           err << "Error! HDF5Reader failed to find any ModelParameters matching the model name '"<<modelname<<"' in the HDF5 file:group "<<file<<":"<<group<<"' (while calling 'retrieve'). Please check that model name and input file/group are correct."; 
           printer_error().raise(LOCAL_INFO,err.str());     
        }
        /// done!
        return is_valid;
     }

     /// @}

     /// @{ Private functions

     /// Search for the PPID supplied in the input data and return the index of the first match
     ulong HDF5Reader::get_index_from_PPID(const PPIDpair ppid)
     {
        ulong out_index;
        if(ppid == current_point)
        {
           // Matches current point; send it out
           out_index = current_dataset_index;
        } 
        else if(ppid == mem_point)
        {
           // Matches stored point; send it out
           out_index = mem_index;
        }
        else 
        {
           // Gotta search for it.
           std::ostringstream errmsg;
           errmsg << "Arbitrary point access has not yet been implemented for the HDF5Reader! Currently only iterated access through a dataset works.";
           printer_error().raise(LOCAL_INFO, errmsg.str());
        }
        mem_point = ppid;
        mem_index = out_index;
        return out_index;
     }

     /// Buffer retrieve function
     template<class T>
     BuffPair<T>& H5P_LocalReadBufferManager<T>::get_buffer(const int vertexID, const unsigned int aux_i, const std::string& label, hid_t location_id)
     {
       VBIDpair key;
       key.vertexID = vertexID;
       key.index    = aux_i;

       typename std::map<VBIDpair, BuffPair<T>>::iterator it = local_buffers.find(key);

       if( it == local_buffers.end() )
       {
         error_if_key_exists(local_buffers, key, "local_buffers");
         // No local buffer exists for this output stream yet, so make one

         // Create the new buffer objects
         if(location_id<0)
         {
            std::ostringstream errmsg;
            errmsg << "Failed to created HDF5 read buffer '"<<label<<"'! The suppied location_id does not point to a valid location in a HDF5 file!";
            printer_error().raise(LOCAL_INFO, errmsg.str());
         } 

         local_buffers[key] = BuffPair<T>(location_id,label);

         // Get the new buffer back out of the map
         it = local_buffers.find(key);
       }

       if( it == local_buffers.end() )
       {
         std::ostringstream errmsg;
         errmsg << "Error! Failed to retrieve newly created buffer (label="<<label<<") from local_buffers map! Key was: ("<<vertexID<<","<<aux_i<<")"<<std::endl;
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       return it->second;
     }

  }
}
