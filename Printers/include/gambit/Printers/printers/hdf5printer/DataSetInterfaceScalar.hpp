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

// HDF5 C bindings
#include <hdf5.h> 
 
// Gambit
#include "gambit/Printers/printers/hdf5printer/DataSetInterfaceBase.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Logs/logger.hpp"

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

          std::vector<T> read_buffer; // Buffer to store a chunk of the linked dataset (during read operations)
          std::size_t    read_buffer_start; // Index of start of read buffer

        public: 
          /// Constructors
          DataSetInterfaceScalar(); 
          DataSetInterfaceScalar(hid_t location_id, const std::string& name, const bool resume, const char access); 
 
          /// Select a hyperslab chunk in the hosted dataset
          std::pair<hid_t,hid_t> select_chunk(std::size_t offset, std::size_t length) const;

          /// Write data to a new chunk in the hosted dataset
          void writenewchunk(const T (&chunkdata)[CHUNKLENGTH]);

          /// Perform desynchronised ("random access") dataset writes to previous scan iterations
          /// from a queue.
          void RA_write(const T (&values)[CHUNKLENGTH], const hsize_t (&coords)[CHUNKLENGTH], std::size_t npoints); 

          /// Set all elements of the dataset to zero
          void zero();

         /// @{ READ methods (perhaps can generalise to non-scalar case, but this doesn't exist yet for writing anyway so not bothering yet)

         // Extracts the ith chunk of length CHUNKLENGTH from the dataset
         std::vector<T> get_chunk(std::size_t i, std::size_t length) const;

         // Extract entry at given index from dataset
         T get_entry(std::size_t index);

         /// @}

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
      DataSetInterfaceScalar<T,CL>::DataSetInterfaceScalar(hid_t location_id, const std::string& name, const bool resume, const char access) 
        : DataSetInterfaceBase<T,0,CL>(location_id, name, empty_rdims, resume, access)
      {}

      template<class T, std::size_t CHUNKLENGTH>
      void DataSetInterfaceScalar<T,CHUNKLENGTH>::writenewchunk(const T (&chunkdata)[CHUNKLENGTH])
      {
         #ifdef HDF5_DEBUG
         std::cout << "Preparing to write new chunk to dataset "<<this->get_myname()<<std::endl;
         #endif
         // Extend the dataset if needed. Usually dataset on disk just becomes 1 chunk larger.
         this->extend_dset(this->dsetnextemptyslab+CHUNKLENGTH);

         // Select a hyperslab.
         std::size_t offset = this->dsetnextemptyslab;
         std::pair<hid_t,hid_t> selection_ids = select_chunk(offset,CHUNKLENGTH);
         hid_t memspace_id = selection_ids.first;
         hid_t dspace_id   = selection_ids.second;
 
         // Write the data to the hyperslab.
         herr_t status = H5Dwrite(this->get_dset_id(), this->hdftype_id, memspace_id, dspace_id, H5P_DEFAULT, chunkdata);
         //this->my_dataset.write( chunkdata, this->hdf_dtype.type(), memspace, filespace );
         if(status<0)
         {
            std::ostringstream errmsg;
            errmsg << "Error writing new chunk to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. H5Dwrite failed." << std::endl;
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }
         #ifdef HDF5_DEBUG
         std::cout<<"Chunk written to dataset \""<<this->get_myname()<<"\"! Incrementing chunk offset:"
                  <<this->dsetnextemptyslab<<" --> "<<this->dsetnextemptyslab+CHUNKLENGTH<<std::endl;
         #endif
         this->dsetnextemptyslab += CHUNKLENGTH;
         H5Sclose(dspace_id);
         H5Sclose(memspace_id);
      }

      /// Set all elements of the dataset to zero
      template<class T, std::size_t CHUNKLENGTH>
      void DataSetInterfaceScalar<T,CHUNKLENGTH>::zero()
      {
         /// Easiest way to do this is to simply point the "nextemptyslab" index
         /// back to the beginning of the dataset, and then rewrite all the chunks
         /// with zero values.
         //std::cout<<"Zeroing dataset "<<this->get_myname()<<std::endl;

         T  zero_buffer[CHUNKLENGTH] = {}; // Should set everything to zero I believe... at least for primitive T.
 
         unsigned long orig_nextslab = this->dsetnextemptyslab; 
     
         /// Figure out how many chunks to overwrite
         //std::size_t Nslabs = this->dsetnextemptyslab / CHUNKLENGTH; //no good for RA datasets
         std::size_t Nslabs = this->dset_length() / CHUNKLENGTH; //should be ok since length is constrained to multiples of CHUNKLENGTH
        
         /// Point hyperslab selector back to beginning of dataset
         /// (might already point there if this is a random-access dataset,
         ///  which actually it should be since we shouldn't be resetting the
         ///  sync datasets. Well anyway it should be ok, just means we
         ///  cannot use it to compute how many chunks there are)
         this->dsetnextemptyslab = 0; 

         for(std::size_t i=0; i<Nslabs; i++)
         {
            writenewchunk(zero_buffer);
         }

         // hyperslab selector should automatically end up pointing back to the
         // correct place for sync buffers, but since this should be a RA dataset 
         // we shall put it back to whatever value it had (which should probably
         // be zero).
         this->dsetnextemptyslab = orig_nextslab;
      }


      /// Perform desynchronised ("random access") dataset writes to previous scan iterations
      /// from a queue.
      template<class T, std::size_t CHUNKLENGTH>
      void DataSetInterfaceScalar<T,CHUNKLENGTH>::RA_write(const T (&values)[CHUNKLENGTH], const hsize_t (&coords)[CHUNKLENGTH], std::size_t npoints) 
      {
         if(npoints>CHUNKLENGTH)
         {
             std::ostringstream errmsg;
             errmsg << "Error! Received npoints ("<<npoints<<") greater than CHUNKLENGTH ("<<CHUNKLENGTH<<") while tring to perform RA_write for dataset (name="<<this->get_myname()<<"). The input to this function is therefore invalid."; 
             printer_error().raise(LOCAL_INFO, errmsg.str());
         }
         if(npoints==0)
         {
             std::ostringstream errmsg;
             errmsg << "Error! Received npoints=0! This will cause an error when trying to select element for writing, and there is no point calling this function with no points to write anyway. Please review the input to this function (error occurred while tring to perform RA_write for dataset (name="<<this->get_myname()<<"))"; 
             printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         bool error_occurred = false; // simple error flag

         // Extend the dataset if needed
         // To do this need to know largest target coordinate
         unsigned long max_coord = *std::max_element(coords,coords+npoints);
         
         this->extend_dset(max_coord);

         // Dataset size in memory
         static const std::size_t MDIM_RANK = 1; 
         hsize_t mdim[] = {npoints};
         
         // Dataspace for the output values
         hid_t dspace = H5Screate_simple(MDIM_RANK, mdim, NULL);
         if(dspace<0) error_occurred = true; 

         // Get the C interface identifier for a copy of the dataspace
         // of the dataset (confusing...)
         hid_t dspace_id = H5Dget_space(this->get_dset_id());
         if(dspace_id<0) error_occurred = true; 

         // Select the target write points in the file dataspace
         hid_t errflag = H5Sselect_elements(dspace_id, H5S_SELECT_SET, npoints, coords);
         if(errflag<0) error_occurred = true; 

         // Get the C interface identifier for the type of the output dataset
         hid_t expected_dtype = this->hdftype_id;

         //hid_t dtype = H5::PredType::NATIVE_DOUBLE.getId(); //the above does something like this
         hid_t dtype = H5Dget_type(this->get_dset_id()); // type with which the dset was created
         if(not H5Tequal(dtype, expected_dtype))
         {
             std::ostringstream errmsg;
             errmsg << "Error! Tried to write to dataset (name="<<this->get_myname()<<") with type id "<<dtype<<" but expected it to have type id "<<expected_dtype<<". This is a bug in the DataSetInterfaceScalar class, please report it."; 
             printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Write data to selected points
         // (H5P_DEFAULT specifies some transfer properties for the I/O 
         //  operation. These are the default values, probably are ok.)
         hid_t errflag2 = H5Dwrite(this->get_dset_id(), dtype, dspace, dspace_id, H5P_DEFAULT, values);

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
         
         H5Tclose(dtype);
         H5Sclose(dspace_id);
         H5Sclose(dspace);

      //     hsize_t offsets[DSETRANK];

      //     // Put data into a length 1 array, for writing as a length 1 "slab"
      //     //T data_slice[1];
      //     //data_slice[0] = value;

      //     // Check if dataset needs extending; we may be trying to write to a point that wasn't
      //     // yet written to by a buffer. Can write up to 1 chunk-length beyond the current
      //     // position

      //     // Extend the dataset. Dataset on disk becomes 1 chunk larger.
      //     if( dset_index >= this->dsetdims()[0] )
      //     {
      //       //if( dset_index >= this->dsetdims()[0] + CHUNKLENGTH )
      //       //{
      //       //  // Too far; error.
      //       //  std::ostringstream errmsg;
      //       //  errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Requested write position ("<<dset_index<<") is more than one chunk-length ("<<CHUNKLENGTH<<") beyond the present end of the dataset ("<<this->dsetdims()[0]<<")";
      //       //  printer_error().raise(LOCAL_INFO, errmsg.str());
      //       //}
      //       //
      //       //// Ok to extend.
      //       //this->dsetdims()[0] += CHUNKLENGTH; // extend dataset by 1 chunk

      //       // Extend the dataset to the nearest multiple of CHUNKLENGTH above dset_index
      //       std::size_t remainder = dset_index % CHUNKLENGTH;
      //       this->dsetdims()[0] = dset_index - remainder + CHUNKLENGTH;

      //       // newsize[1] = dims[1]; // don't need: only 1D for now.
      //       this->my_dataset.extend( this->dsetdims() );
      //     }

      //     // Select hyperslab starting at dset_index
      //     H5::DataSpace filespace = this->my_dataset.getSpace();
      //     offsets[0] = dset_index;
      //     //offsets[1] = 0; // don't need: only 1D for now.
      //     filespace.selectHyperslab( H5S_SELECT_SET, this->get_slicedims(), offsets );
      //
      //     // Define memory space
      //     H5::DataSpace memspace( DSETRANK, this->get_slicedims() );
      //
      //     #ifdef HDF5_DEBUG
      //     std::cout << "Debug variables:" << std::endl
      //               << "  dsetdims()[0]      = " << this->dsetdims()[0] << std::endl
      //               << "  offsets[0]         = " << offsets[0] << std::endl
      //               << "  get_slicedims()[0] = " << this->get_slicedims()[0] << std::endl;
      //     #endif
 
      //     // Write the data to the hyperslab.
      //     try {
      //        this->my_dataset.write( &value, this->hdf_dtype.type(), memspace, filespace );
      //     } catch(const H5::Exception& e) {
      //        std::ostringstream errmsg;
      //        errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Message was: "<<e.getDetailMsg() << std::endl;
      //        printer_error().raise(LOCAL_INFO, errmsg.str());
      //     }

     }

     /// To facilitate code factorisation, the hyperslab selection is now contained here
     /// Only selects whole chunks at the moment.
     template<class T, std::size_t CHUNKLENGTH>
     std::pair<hid_t,hid_t> DataSetInterfaceScalar<T,CHUNKLENGTH>::select_chunk(std::size_t offset, std::size_t length) const
     {
         #ifdef HDF5_DEBUG
         std::cout << "Selecting chunk in dataset "<<this->get_myname()<<" with offset "<<offset<<std::endl;
         #endif

         // Make sure that this chunk lies within the dataset extents
         if(offset + length > this->dset_length())
         {
            std::ostringstream errmsg;
            errmsg << "Error selecting chunk from dataset (with name: \""<<this->get_myname()<<") in HDF5 file. Tried to select a hyperslab which extends beyond the dataset extents:" << std::endl;
            errmsg << "  offset = " << offset << std::endl;
            errmsg << "  offset+length = " << length << std::endl;
            errmsg << "  dset_length() = "<< this->dset_length() << std::endl;
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Select a hyperslab.
         //H5::DataSpace filespace = this->my_dataset.getSpace();
         hid_t dspace_id = H5Dget_space(this->get_dset_id());
         if(dspace_id<0) 
         {
            std::ostringstream errmsg;
            errmsg << "Error selecting chunk from dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. H5Dget_space failed." << std::endl;
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         hsize_t offsets[DSETRANK];
         offsets[0] = offset;
         //offsets[1] = 0; // don't need: only 1D for now.

         hsize_t selection_dims[DSETRANK]; // Set same as output chunks, but may have a different length
         for(std::size_t i=0; i<DSETRANK; i++) { selection_dims[i] = this->get_chunkdims()[i]; }
         selection_dims[0] = length; // Adjust chunk length to input specification

         herr_t err_hs = H5Sselect_hyperslab(dspace_id, H5S_SELECT_SET, offsets, NULL, selection_dims, NULL);        

         if(err_hs<0) 
         {
            std::ostringstream errmsg;
            errmsg << "Error selecting chunk from dataset (with name: \""<<this->get_myname()<<"\", offset="<<offset<<", length="<<selection_dims[0]<<") in HDF5 file. H5Sselect_hyperslab failed." << std::endl;
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Define memory space
         //H5::DataSpace memspace( DSETRANK, this->get_chunkdims() );
         hid_t memspace_id = H5Screate_simple(DSETRANK, selection_dims, NULL);         

         #ifdef HDF5_DEBUG 
         std::cout << "Debug variables:" << std::endl
                   << "  dsetdims()[0]      = " << this->dsetdims()[0] << std::endl
                   << "  offsets[0]         = " << offsets[0] << std::endl
                   << "  CHUNKLENGTH        = " << CHUNKLENGTH << std::endl
                   << "  selection_dims[0] = " << selection_dims[0] << std::endl;
         #endif

         return std::make_pair(memspace_id, dspace_id); // Be sure to close these identifiers after using them!
     }

     ///   {@ READ methods

     /// Extract a data slice from the linked dataset
     template<class T, std::size_t CHUNKLENGTH>
     std::vector<T> DataSetInterfaceScalar<T,CHUNKLENGTH>::get_chunk(std::size_t offset, std::size_t length) const
     {
         // Buffer to receive data (and return from function)
         std::vector<T> chunkdata(length);
 
         // Select hyperslab
         std::pair<hid_t,hid_t> selection_ids = select_chunk(offset,length);
         hid_t memspace_id = selection_ids.first;
         hid_t dspace_id   = selection_ids.second;

         // Buffer to receive data
         void* buffer = &chunkdata[0]; // pointer to contiguous memory within the buffer vector

         // Get the data from the hyperslab.
         herr_t err_read = H5Dread(this->get_dset_id(), this->hdftype_id, memspace_id, dspace_id, H5P_DEFAULT, buffer);

         if(err_read<0)
         {
            std::ostringstream errmsg;
            errmsg << "Error retrieving chunk (offset="<<offset<<", length="<<length<<") from dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. H5Dread failed." << std::endl;
            errmsg << "  offset+length = "<< length << std::endl;
            errmsg << "  dset_length() = "<< this->dset_length() << std::endl;
           printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         H5Sclose(dspace_id);
         H5Sclose(memspace_id);

         return chunkdata;
     }

     /// Extract a single entry from a linked dataset
     template<class T, std::size_t CHUNKLENGTH>
     T DataSetInterfaceScalar<T,CHUNKLENGTH>::get_entry(std::size_t index)
     {
        // Figure out relevant chunk start index and position of desired entry in the chunk.
        std::size_t chunk_start = (index / CHUNKLENGTH) * CHUNKLENGTH;
        std::size_t chunk_relative_index = index % CHUNKLENGTH;

        #ifdef HDF5_DEBUG
        std::cout << "index      :" << index << std::endl;
        std::cout << "chunk_start:" << chunk_start << std::endl;
        std::cout << "chunk_rel  :" << chunk_relative_index << std::endl;
        #endif

        // Figure out whether entry is already in the read buffer
        if(read_buffer.size()==0 or read_buffer_start!=chunk_start)
        {
           // Nope, don't have it, read in the appropriate chunk
           #ifdef HDF5_DEBUG
           std::cout << "extracting new chunk starting from "<<chunk_start<< std::endl;
           #endif
           // Make sure we don't try to read past the end of the dataset
           std::size_t length = CHUNKLENGTH; 
           if(chunk_start+length > this->dset_length())
           {
              length = this->dset_length() - chunk_start;
           }
           read_buffer = get_chunk(chunk_start, length);
           read_buffer_start = chunk_start;
        }

        return read_buffer.at(chunk_relative_index);
     }

     ///   @}

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

