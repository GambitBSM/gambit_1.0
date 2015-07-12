//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration for class DataSetInterfaceScalar
///
///  This daughter of DataSetInterfaceBase adds
///  routines for performing output of dimension
///  1 numerical buffers to file. That is, each
///  record is a single element of numeric type,
///  i.e. a scalar.
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
 
#ifndef __DataSetInterfaceScalar_hpp__
#define __DataSetInterfaceScalar_hpp__

#include <sstream>
#include <iostream>

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Printers/printers/hdf5printer/DataSetInterfaceBase.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

namespace Gambit {
  
  namespace Printers {

      /// Derived dataset interface, with methods for writing scalar records (i.e. single ints, doubles, etc.)
      /// i.e. RANK=0 case
      template<class T, std::size_t CHUNKLENGTH>
      class DataSetInterfaceScalar : public DataSetInterfaceBase<T,0,CHUNKLENGTH>
      {
        private:
          static const std::size_t empty_rdims[1]; // just to satisfy base class constructor, not used.
          static const std::size_t DSETRANK=1; 

        public: 
          /// Constructors
          DataSetInterfaceScalar(); 
          DataSetInterfaceScalar(H5FGPtr location, const std::string& name); 

          void writenewchunk(const T (&chunkdata)[CHUNKLENGTH]);

          /// Perform desynchronised ("random access") dataset writes to previous scan iterations
          /// from a queue.
          void RA_write(const T (&values)[CHUNKLENGTH], const hsize_t (&coords)[CHUNKLENGTH], std::size_t npoints); 
 
      };

      /// @{ DataSetInterfaceScalar member definitions

      // Define some static members
      template<class T, std::size_t CL>
      const std::size_t DataSetInterfaceScalar<T,CL>::empty_rdims[1] = {};

      /// Constructors
      template<class T, std::size_t CL>
      DataSetInterfaceScalar<T,CL>::DataSetInterfaceScalar() 
        : DataSetInterfaceBase<T,0,CL>()
      {}

      template<class T, std::size_t CL>
      DataSetInterfaceScalar<T,CL>::DataSetInterfaceScalar(H5FGPtr location, const std::string& name) 
        : DataSetInterfaceBase<T,0,CL>(location, name, empty_rdims)
      {}

      template<class T, std::size_t CHUNKLENGTH>
      void DataSetInterfaceScalar<T,CHUNKLENGTH>::writenewchunk(const T (&chunkdata)[CHUNKLENGTH])
      {
         hsize_t offsets[DSETRANK];

         #ifdef HDF5_DEBUG
         std::cout << "Preparing to write new chunk to dataset "<<this->get_myname()<<std::endl
                   << "Extending dataset from current size "<<this->dsetdims()[0]; 
         #endif
         // Extend the dataset. Dataset on disk becomes 1 chunk larger.
         this->dsetdims()[0] += CHUNKLENGTH; // extend dataset by 1 chunk
         #ifdef HDF5_DEBUG
         std::cout << " to new size "<<this->dsetdims()[0]<< std::endl; 
         #endif
         // newsize[1] = dims[1]; // don't need: only 1D for now.
         this->my_dataset.extend( this->dsetdims() );  

         // Select a hyperslab.
         H5::DataSpace filespace = this->my_dataset.getSpace();
         offsets[0] = this->dsetnextemptyslab;
         //offsets[1] = 0; // don't need: only 1D for now.
         filespace.selectHyperslab( H5S_SELECT_SET, this->get_chunkdims(), offsets );
         
         // Define memory space
         H5::DataSpace memspace( DSETRANK, this->get_chunkdims() );
        
         #ifdef HDF5_DEBUG 
         std::cout << "Debug variables:" << std::endl
                   << "  dsetdims()[0]      = " << this->dsetdims()[0] << std::endl
                   << "  offsets[0]         = " << offsets[0] << std::endl
                   << "  CHUNKLENGTH        = " << CHUNKLENGTH << std::endl
                   << "  get_chunkdims()[0] = " << this->get_chunkdims()[0] << std::endl;
         #endif
 
         // Write the data to the hyperslab.
         try {
            this->my_dataset.write( chunkdata, this->hdf_dtype.type(), memspace, filespace );
         } catch(const H5::Exception& e) {
            std::ostringstream errmsg;
            errmsg << "Error writing new chunk to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Message was: "<<e.getDetailMsg() << std::endl;
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Update the "next empty hyperslab" counter
         #ifdef HDF5_DEBUG
         std::cout<<"Chunk written to dataset \""<<this->get_myname()<<"\"! Incrementing chunk offset:"
                  <<this->dsetnextemptyslab<<" --> "<<this->dsetnextemptyslab+CHUNKLENGTH<<std::endl;
         #endif
         this->dsetnextemptyslab += CHUNKLENGTH;
      }

      /// Perform desynchronised ("random access") dataset writes to previous scan iterations
      /// from a queue.
      template<class T, std::size_t CHUNKLENGTH>
      void DataSetInterfaceScalar<T,CHUNKLENGTH>::RA_write(const T (&values)[CHUNKLENGTH], const hsize_t (&coords)[CHUNKLENGTH], std::size_t npoints) 
      {
         bool error_occurred = false; // simple error flag

         // Extend the dataset if needed
         // To do this need to know largest target coordinate
         ulong max_coord = *std::max_element(coords,coords+npoints);
         this->extend_dset(max_coord);

         // Dataset size in memory
         static const std::size_t MDIM_RANK = 1; 
         hsize_t mdim[] = {npoints};
         
         // Dataspace for the output values
         hid_t dspace = H5Screate_simple(MDIM_RANK, mdim, NULL);
         if(dspace<0) error_occurred = true; 

         // Get the C interface identifier for the output dataset
         hid_t dset_id = this->my_dataset.getId();
 
         // Get the C interface identifier for a copy of the dataspace
         // of the dataset (confusing...)
         hid_t dspace_id = H5Dget_space(dset_id);
         if(dspace_id<0) error_occurred = true; 

         // Select the target write points in the file dataspace
         hid_t errflag = H5Sselect_elements(dspace_id, H5S_SELECT_SET, npoints, coords);
         if(errflag<0) error_occurred = true; 

         // Get the C interface identifier for the type of the output dataset
         hid_t expected_dtype = this->hdf_dtype.type().getId();
         //hid_t dtype = H5::PredType::NATIVE_DOUBLE.getId(); //the above does something like this
         hid_t dtype = H5Dget_type(dset_id); // type with which the dset was created
         if(not H5Tequal(dtype, expected_dtype))
         {
             std::ostringstream errmsg;
             errmsg << "Error! Tried to write to dataset (name="<<this->get_myname()<<") with type id "<<dtype<<" but expected it to have type id "<<expected_dtype<<". This is a bug in the DataSetInterfaceScalar class, please report it."; 
             printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Write data to selected points
         // (H5P_DEFAULT specifies some transfer properties for the I/O 
         //  operation. These are the default values, probably are ok.)
         hid_t errflag2 = H5Dwrite(dset_id, dtype, dspace, dspace_id, H5P_DEFAULT, values);
         if(errflag2<0) error_occurred = true; 
 
         if(error_occurred)
         {
             std::ostringstream errmsg;
             errmsg << "Error! Failed to write desynchronised buffer data to file! (dataset name="<<this->get_myname()<<")"<<std::endl
                    << "Error flags were:" << std::endl
                    << "  dspace   : " << dspace << std::endl
                    << "  dspace_id: " << dspace_id << std::endl
                    << "  errflag  : " << errflag << std::endl
                    << "  errflag2 : " << errflag2 << std::endl
                    << "Variables:" << std::endl
                    << "  dtype = " << dtype;
             printer_error().raise(LOCAL_INFO, errmsg.str());
         }

      ///     hsize_t offsets[DSETRANK];

      ///     // Put data into a length 1 array, for writing as a length 1 "slab"
      ///     //T data_slice[1];
      ///     //data_slice[0] = value;

      ///     // Check if dataset needs extending; we may be trying to write to a point that wasn't
      ///     // yet written to by a buffer. Can write up to 1 chunk-length beyond the current
      ///     // position              

      ///     // Extend the dataset. Dataset on disk becomes 1 chunk larger.
      ///     if( dset_index >= this->dsetdims()[0] )
      ///     {
      ///       //if( dset_index >= this->dsetdims()[0] + CHUNKLENGTH )
      ///       //{
      ///       //  // Too far; error.
      ///       //  std::ostringstream errmsg;
      ///       //  errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Requested write position ("<<dset_index<<") is more than one chunk-length ("<<CHUNKLENGTH<<") beyond the present end of the dataset ("<<this->dsetdims()[0]<<")";
      ///       //  printer_error().raise(LOCAL_INFO, errmsg.str());
      ///       //}
      ///       //
      ///       //// Ok to extend.
      ///       //this->dsetdims()[0] += CHUNKLENGTH; // extend dataset by 1 chunk

      ///       // Extend the dataset to the nearest multiple of CHUNKLENGTH above dset_index
      ///       std::size_t remainder = dset_index % CHUNKLENGTH; 
      ///       this->dsetdims()[0] = dset_index - remainder + CHUNKLENGTH;

      ///       // newsize[1] = dims[1]; // don't need: only 1D for now.
      ///       this->my_dataset.extend( this->dsetdims() );  
      ///     }

      ///     // Select hyperslab starting at dset_index
      ///     H5::DataSpace filespace = this->my_dataset.getSpace();
      ///     offsets[0] = dset_index;
      ///     //offsets[1] = 0; // don't need: only 1D for now.
      ///     filespace.selectHyperslab( H5S_SELECT_SET, this->get_slicedims(), offsets );
      ///     
      ///     // Define memory space
      ///     H5::DataSpace memspace( DSETRANK, this->get_slicedims() );
      ///    
      ///     #ifdef HDF5_DEBUG 
      ///     std::cout << "Debug variables:" << std::endl
      ///               << "  dsetdims()[0]      = " << this->dsetdims()[0] << std::endl
      ///               << "  offsets[0]         = " << offsets[0] << std::endl
      ///               << "  get_slicedims()[0] = " << this->get_slicedims()[0] << std::endl;
      ///     #endif
 
      ///     // Write the data to the hyperslab.
      ///     try {
      ///        this->my_dataset.write( &value, this->hdf_dtype.type(), memspace, filespace );
      ///     } catch(const H5::Exception& e) {
      ///        std::ostringstream errmsg;
      ///        errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Message was: "<<e.getDetailMsg() << std::endl;
      ///        printer_error().raise(LOCAL_INFO, errmsg.str());
      ///     }

     }
     /// @}
  }
}


/// Some extra code that may be useful when moving to multidimensional records in the buffer

    //// template<class T, int RecordRank>
    ////   class VertexBuffer
    ////   {
    ////     // Metadata
    ////     const int vertexID;
    ////     const int record_dims[];
    ////     const int maxbuffersize;
 
    ////     // Buffer entries
    ////     typedef multi_array<T, RecordRank> RecordType;
    ////     typedef multi_array<T, RecordRank+1> BufferType;

    ////     std::unique_ptr<bool[]> buffer_valid; // Array telling us which buffer entries are properly filled
    ////     std::unique_ptr<T[]>    buffer_entries;

    ////     int nextempty; // index of the next free buffer slot

    ////     /// Constructor
    ////     VertexBuffer(const int vID, const int[] dims, const int size)
    ////       : vertexID(vID)
    ////       , record_dims(dims)
    ////       , maxbuffersize(size)
    ////       , buffer_valid(new bool[size](false)) 
    ////       , nextempty(0)
    ////     {
    ////       init_buffer<RecordRank+1>(dims,size);    
    ////     }

    ////     /// Destructor
    ////     ~VertexBuffer()
    ////     {} 

    ////     /// Template function to initialise the multi_array
    ////     // Specialisations to work with various dimensions (might be some way to generalise, but oh well)
    ////     template<int RANK>
    ////     void init_buffer(const int[] dims, const size)
    ////     {}
    ////     template<>
    ////     void init_buffer<1>(const int[] dims, const size)
    ////     { buffer_entries.resize(boost::extents[size]); }
    ////     template<>
    ////     void init_buffer<2>(const int[] dims, const size)
    ////     { buffer_entries.resize(boost::extents[size][dims[0]]); }
    ////     template<>
    ////     void init_buffer<3>(const int[] dims, const size)
    ////     { buffer_entries.resize(boost::extents[size][dims[0]][dims[1]]); } 
    ////     template<>
    ////     void init_buffer<4>(const int[] dims, const size)
    ////     { buffer_entries.resize(boost::extents[size][dims[0]][dims[1]][dims[2]]); } 


    ////     /// Append a record to the buffer
    ////     void append(RecordType& data)
    ////     {
    ////       // Get view on the slice to which we want to write
    ////       typedef boost::multi_array_types::index_range range;
    ////       array_type::array_view<RecordRank>::type view =
    ////          buffer_entries[ boost::indices[nextempty][range()][range(0,4,2)] ];


    ////       records.push_back(data);

    ////     }

    ////     /// Extract (copy) a record



    ////     /// Clear the buffer
    ////     clear()
    ////     {
    ////        records.clear();     
    ////     }

    ////     /// 


    ////   }

#endif

