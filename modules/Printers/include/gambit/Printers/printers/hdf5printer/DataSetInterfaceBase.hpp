//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration for class DataSetInterfaceBase
///
///  This class and its daughters are the main
///  tools used by the hdf5 printer for actually
///  performing the output writes to hdf5 files.
///  This base class deals with creating the
///  hdf5 file and basic buffer constructs, but
///  not the actual writing to file (this is
///  dependent on the dimensionality of the
///  buffer).
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
 
#ifndef __DataSetInterfaceBase_hpp__
#define __DataSetInterfaceBase_hpp__

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Utils/standalone_error_handlers.hpp"

namespace Gambit {
  
  namespace Printers {

      /// Wrapper object to manage a single dataset
      // Mostly just creates the dataset and holds metadata about it
      // Would be nice to extend to handle writing as well, but currently
      // I have to do it differently depending on the RANK.
      template<class T, std::size_t RECORDRANK, std::size_t CHUNKLENGTH>
      class DataSetInterfaceBase
      {
        private: 
         static const std::size_t DSETRANK = RECORDRANK+1; // Rank of the dataset array
         H5FGPtr mylocation; // where this datasets is located in the hdf5 file
         std::string myname; // name of the dataset in the hdf5 file         

         // Dimension sizes for each record. 
         // This only needs to be RECORDRANK long, however zero-size arrays are not
         // standard compliant so we will use arrays one larger than we need and
         // just ignore the last entry.
         std::size_t record_dims[DSETRANK];

         // Dataset and chunk dimensions
         hsize_t  dims[DSETRANK];
         hsize_t  maxdims[DSETRANK];
         hsize_t  chunkdims[DSETRANK];
         hsize_t  slicedims[DSETRANK];

        protected:
         // Derived classes need full access to these

         // Type specifier for datasets
         static const get_hdf5_data_type<T> hdf_dtype;

         // Wrapped dataset
         H5::DataSet my_dataset;

         // index of the beginning of the next empty slot in the output array
         // i.e. the offset in dimension 0 of the dataset needed to select the
         // next output hyperslab.
         unsigned long dsetnextemptyslab;       

         // currently targeted index in output dataset
         // "Virtual" because write will not directly go to this position, it
         // will go into the buffer, but this is where the append should end
         // up after the buffer is written to file.
         unsigned long virtualwriteposition;

        public:
         // Const public data accessors
         std::string get_myname() const      { return myname; }
         std::size_t get_dsetrank() const    { return DSETRANK; }
         std::size_t get_chunklength() const { return CHUNKLENGTH; }
         const hsize_t* get_maxdsetdims() const    { return maxdims; }
         const hsize_t* get_chunkdims() const      { return chunkdims; }
         const hsize_t* get_slicedims() const      { return slicedims; }
         ulong get_nextemptyslab() const     { return dsetnextemptyslab; }
         ulong dset_length() const           { return dims[0]; }
 
         // Full accessor needed for dataset dimensions 
         // so that they can be updated when chunks are added
         hsize_t* dsetdims() { return dims; }

         /// Constructors
         DataSetInterfaceBase(); 
         DataSetInterfaceBase(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK]);
         virtual ~DataSetInterfaceBase() {} 

         /// Create a (chunked) dataset 
         H5::DataSet createDataSet(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK]);

         /// Extend dataset to nearest multiple of CHUNKLENGTH above supplied length
         void extend_dset(const ulong i);
      };


      /// @{ DataSetInterfaceBase class member definitions

      // Define some static members
      template<class T, std::size_t RR, std::size_t CL>
      const get_hdf5_data_type<T> DataSetInterfaceBase<T,RR,CL>::hdf_dtype; // Default initialisation is fine

      /// Constructors
      template<class T, std::size_t RR, std::size_t CL>
      DataSetInterfaceBase<T,RR,CL>::DataSetInterfaceBase() 
        : mylocation(NULL)
        , myname()
        , record_dims()
        , my_dataset()
        , dsetnextemptyslab(0)
      {}

      template<class T, std::size_t RR, std::size_t CL>
      DataSetInterfaceBase<T,RR,CL>::DataSetInterfaceBase(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK]) 
        : mylocation(location)
        , myname(name)
        , record_dims() /* doh have to copy array element by element */
        , my_dataset(createDataSet(location,name,rdims))
        , dsetnextemptyslab(0)
      {
        for(std::size_t i=0; i<DSETRANK; i++) { record_dims[i] = rdims[i]; }
      }

      /// Create a (chunked) dataset 
      template<class T, std::size_t RECORDRANK, std::size_t CHUNKLENGTH>
      H5::DataSet DataSetInterfaceBase<T,RECORDRANK,CHUNKLENGTH>::createDataSet(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK])
      {
         // I'd like to declare rdims as rdims[RECORDRANK], but apparantly zero length arrays are not allowed,
         // so this would not compile in the RECORDRANK=0 case, which I need. Irritating.
         
         // Compute initial dataspace and chunk dimensions
         dims[0] = 0; //1*CHUNKLENGTH; // Start off with space for 1 chunk
         maxdims[0] = H5S_UNLIMITED; // No upper limit on number of records allowed in dataset
         chunkdims[0] = CHUNKLENGTH;
         slicedims[0] = 1; // Dimensions of a single record in the data space
         for(std::size_t i=0; i<RECORDRANK; i++)
         {
            // Set other dimensions to match record size    
            // Note: loop will not run for RANK=0 case
            dims[i+1]      = rdims[i];             
            maxdims[i+1]   = rdims[i];             
            chunkdims[i+1] = rdims[i];             
            slicedims[i+1] = rdims[i];
         }

         // Create the data space
         H5::DataSpace dspace(DSETRANK, dims, maxdims);

         // Object containing dataset creation parameters
         H5::DSetCreatPropList cparms;   
         cparms.setChunk(DSETRANK, chunkdims);

         // Set fill value for dataset
         //int fill_val = 0;
         //cparms.setFillValue( hdf_dtype.type, &fill_value);
      
         // Check if location pointer is NULL
         if(location==NULL)
         {
            std::ostringstream errmsg;
            errmsg << "Error! Tried to create hdf5 dataset (with name: \""<<myname<<"\" at NULL location (H5FGPtr was NULL). Please check that calling code supplied a valid location ptr. This is a bug, please report it."; 
            printer_error().raise(LOCAL_INFO, errmsg.str()); 
         }
 
         // Create the dataset
         H5::DataSet output;
         try {
            output = location->createDataSet( name.c_str(), hdf_dtype.type(), dspace, cparms);
         } catch(const H5::Exception& e) {
               std::ostringstream errmsg;
               errmsg << "Error creating dataset (with name: \""<<myname<<"\") in HDF5 file. Dataset with same name may already exist. Message was: "<<e.getDetailMsg();
               printer_error().raise(LOCAL_INFO, errmsg.str());
         }
         return output;
      }

      /// Extend dataset to nearest multiple of CHUNKLENGTH above supplied length
      template<class T, std::size_t RR, std::size_t CHUNKLENGTH>
      void DataSetInterfaceBase<T,RR,CHUNKLENGTH>::extend_dset(const ulong min_length)
      {
         if( min_length > this->dsetdims()[0] )
         {
            // Extend the dataset to the nearest multiple of CHUNKLENGTH above min_length,
            // unless min_length is itself a multiple of CHUNKLENGTH.
            std::size_t remainder = min_length % CHUNKLENGTH;
            std::size_t newlength;
            if(remainder==0) { newlength = min_length; } 
            else             { newlength = min_length - remainder + CHUNKLENGTH; }
            #ifdef HDF5_DEBUG
            std::cout << "Requested min_length ("<<min_length<<") larger than current dataset length ("<<this->dsetdims()[0]<<") (dset name="<<this->get_myname()<<")" << std::endl
                      << "Extending dataset to newlength="<<newlength<<std::endl;
            #endif
            this->dsetdims()[0] = newlength;
            this->my_dataset.extend( this->dsetdims() );  
         }
      }
      /// @}

  }
}
#endif

