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
 
#ifndef __hdf5tools_hpp__
#define __hdf5tools_hpp__

#include <cstdint>
//#include <boost/multi_array.hpp> // Used in buffers

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Utils/standalone_error_handlers.hpp"
   
namespace Gambit {
  namespace Printers {

      /// Typedefs for managed H5 pointers
      typedef std::shared_ptr<H5::CommonFG> H5FGPtr; // common ancestor of H5File and Group
      typedef std::shared_ptr<H5::H5File> H5FilePtr;
      typedef std::shared_ptr<H5::Group>  H5GroupPtr;
      
      namespace HDF5 { 
         /// Create or open hdf5 file
         H5FilePtr openFile(const std::string& fname);

         /// Create hdf5 file (always overwrite existing files)
         H5FilePtr createFile(const std::string& fname);

         /// Create a group inside the specified location
         // Argument "location" can be a pointer to either a file or another group
         H5GroupPtr createGroup(H5FGPtr location, const std::string& name);

         // Modified minimally from https://github.com/gregreen/h5utils/blob/master/src/h5utils.cpp#L92
         // Credit: Gregory Green 2012
         /*
          * Opens a group, creating it if it does not exist. Nonexistent parent groups are also
          * created. This works similarly to the Unix/Linux command
          * mkdir -p /parent/subgroup/group
          * in that if /parent and /parent/subgroup do not exist, they will be created.
          *
          * If no accessmode has H5Utils::DONOTCREATE flag set, then returns NULL if group
          * does not yet exist.
          *
          */ 
         H5GroupPtr openGroup(H5FilePtr file, const std::string& name, bool nocreate=false);
 
      }

      // from http://stackoverflow.com/questions/9250237/write-a-boostmulti-array-to-hdf5-dataset 
      //!_______________________________________________________________________________________
      //!     
      //!     map types to HDF5 types
      //!     
      //!     \author lg (04 March 2013)
      //!
      //!     "I have commented out lines which lead to duplicate definitions because some of 
      //!     the <stdint.h> types (e.g. uint8_t) are aliases of standard types (e.g. unsigned 
      //!     char)"
      //!_______________________________________________________________________________________ 
      template<typename T> 
      struct get_hdf5_data_type
      {   static H5::PredType type()  
          {   
              //static_assert(false, "Unknown HDF5 data type"); 
              return H5::PredType::NATIVE_DOUBLE; 
          }
      };
      template<> struct get_hdf5_data_type<char>              { H5::IntType type   { H5::PredType::NATIVE_CHAR    }; };
      //template<> struct get_hdf5_data_type<unsigned char>   { H5::IntType type   { H5::PredType::NATIVE_UCHAR   }; };
      //template<> struct get_hdf5_data_type<short>           { H5::IntType type   { H5::PredType::NATIVE_SHORT   }; };
      //template<> struct get_hdf5_data_type<unsigned short>  { H5::IntType type   { H5::PredType::NATIVE_USHORT  }; };
      //template<> struct get_hdf5_data_type<int>             { H5::IntType type   { H5::PredType::NATIVE_INT     }; };
      //template<> struct get_hdf5_data_type<unsigned int>    { H5::IntType type   { H5::PredType::NATIVE_UINT    }; };
      //template<> struct get_hdf5_data_type<long>            { H5::IntType type   { H5::PredType::NATIVE_LONG    }; };
      //template<> struct get_hdf5_data_type<unsigned long>   { H5::IntType type   { H5::PredType::NATIVE_ULONG   }; };
      template<> struct get_hdf5_data_type<long long>         { H5::IntType type   { H5::PredType::NATIVE_LLONG   }; };
      template<> struct get_hdf5_data_type<unsigned long long>{ H5::IntType type   { H5::PredType::NATIVE_ULLONG  }; };
      template<> struct get_hdf5_data_type<int8_t>            { H5::IntType type   { H5::PredType::NATIVE_INT8    }; };
      template<> struct get_hdf5_data_type<uint8_t>           { H5::IntType type   { H5::PredType::NATIVE_UINT8   }; };
      template<> struct get_hdf5_data_type<int16_t>           { H5::IntType type   { H5::PredType::NATIVE_INT16   }; };
      template<> struct get_hdf5_data_type<uint16_t>          { H5::IntType type   { H5::PredType::NATIVE_UINT16  }; };
      template<> struct get_hdf5_data_type<int32_t>           { H5::IntType type   { H5::PredType::NATIVE_INT32   }; };
      template<> struct get_hdf5_data_type<uint32_t>          { H5::IntType type   { H5::PredType::NATIVE_UINT32  }; };
      template<> struct get_hdf5_data_type<int64_t>           { H5::IntType type   { H5::PredType::NATIVE_INT64   }; };
      template<> struct get_hdf5_data_type<uint64_t>          { H5::IntType type   { H5::PredType::NATIVE_UINT64  }; };
      template<> struct get_hdf5_data_type<float>             { H5::FloatType type { H5::PredType::NATIVE_FLOAT   }; };
      template<> struct get_hdf5_data_type<double>            { H5::FloatType type { H5::PredType::NATIVE_DOUBLE  }; };
      template<> struct get_hdf5_data_type<long double>       { H5::FloatType type { H5::PredType::NATIVE_LDOUBLE }; };
      //!_______________________________________________________________________________________


      /// VertexBuffer abstract interface base class
      class VertexBufferBase
      {
         private:
            // flag to indicate whether an append or skip_append has been done for a given point
            bool donethispoint;

            // Metadata
            int vertexID;
            uint index; // discriminator in case of multiple output streams from one vertex
            std::string label;
             
         public:
            VertexBufferBase(const std::string& l, const int vID, const uint i=0) 
              : label(l)
              , vertexID(vID)
              , index(i)
            {}

            virtual ~VertexBufferBase() { dump(); }

            // Metadata getters
            int get_vertexID() { return vertexID; }
            uint get_index()   { return index; }
            std::string get_label() { return label; }

            // Needed to externally trigger buffer write to disk (e.g. at end of scan)
            virtual void dump() = 0;            

            // Needed to externally inform buffer of a skipped iteration (when no data to write)
            virtual void skip_append() = 0;           
 
            // getter for donethispoint
            bool donepoint() {return donethispoint;}

            // setter for donethispoint
            void set_donepoint(bool flag) {donethispoint=flag;}

            // Error thrower for when append is attempted with point already set to "done"
            void error_if_done()
            {
               if(donethispoint)
               { 
                  std::ostringstream errmsg;
                  errmsg << "Error! VertexBuffer set to 'done'! Append may have been attempted without \"unlocking\" the buffer.";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
               }
            }

            // Ensure dataset "write head" (i.e. next append) is prepared to
            // write to the supplied absolute dataset index (e.g. by inserting
            // blank entries if need)
            // HDF5 version (at least) cannot move backwards, and expects to
            // be moved ahead only one index at a time. But there is some freedom
            // for different behaviour by other writers.
            virtual void synchronise_output_to_position(const unsigned long i) = 0;
      };

      /// VertexBuffer for simple numerical types
      template<class T, std::size_t LENGTH>
      class VertexBufferNumeric1D : public VertexBufferBase
      {
        protected:
          // Buffer variables
          // Using arrays as these are easier to write to hdf5
          bool buffer_valid[LENGTH]; // Array telling us which buffer entries are properly filled
          T    buffer_entries[LENGTH];
   
        private:
          unsigned int nextempty; // index of the next free buffer slot

          static const std::size_t bufferlength = LENGTH;

        public:
          unsigned int get_nextempty() { return nextempty; } 

          /// Constructor
          VertexBufferNumeric1D(const std::string& label, const int vID, const unsigned int i=0)
            : VertexBufferBase(label,vID,i)
            , buffer_valid() 
            , buffer_entries()
            , nextempty(0)
          {}

          /// Destructor
          ~VertexBufferNumeric1D()
          {} 

          /// Append a record to the buffer
          void append(const T& data);

          /// No data to append this iteration; skip this slot
          void skip_append();

          /// Extract (copy) a record
          T get_entry(const std::size_t i) const;
 
          /// Clear the buffer
          void clear();

      };

      /// @{ VertexBufferNumeric1D function definitions

      /// Append a record to the buffer
      template<class T, std::size_t L>
      void VertexBufferNumeric1D<T,L>::append(const T& data)
      {
         error_if_done(); // make sure buffer hasn't written to the current point already
         buffer_entries[nextempty] = data;
         buffer_valid[nextempty] = true;
         nextempty++;
         if(nextempty==bufferlength)
         {
            dump();
            clear();
            nextempty=0;
         }   
      }

      /// No data to append this iteration; skip this slot
      template<class T, std::size_t L>
      void VertexBufferNumeric1D<T,L>::skip_append()
      {
         error_if_done(); // make sure buffer hasn't written to the current point already
         buffer_valid[nextempty] = false;
         nextempty++;
         if(nextempty==bufferlength)
         {
            dump();
            clear();
            nextempty=0;
         } 
      }

      /// Extract (copy) a record
      template<class T, std::size_t L>
      T VertexBufferNumeric1D<T,L>::get_entry(const std::size_t i) const
      {
         if(buffer_valid[i])
         {
           return buffer_entries[i];
         }
         else
         {
           std::string errmsg = "Error! Attempted to retrieve data from an invalidated VertexBufferNumeric1D entry!";
           printer_error().raise(LOCAL_INFO, errmsg);
         }
      }

      /// Clear the buffer
      template<class T, std::size_t L>
      void VertexBufferNumeric1D<T,L>::clear()
      {
         for(std::size_t i=0; i<bufferlength; i++)
         {
            buffer_valid[i] = false;
            buffer_entries[i] = 0;
         }
         nextempty=0;  
      }

      /// @}

      // forward declaration
      template<typename T, std::size_t CHUNKLENGTH>
      class DataSetInterfaceScalar;
 
      /// VertexBuffer for simple numerical types - derived version that handles output to hdf5
      template<class T, std::size_t CHUNKLENGTH>
      class VertexBufferNumeric1D_HDF5 : public VertexBufferNumeric1D<T,CHUNKLENGTH> 
      {
         private:
           // Interfaces to HDF5 datasets
           DataSetInterfaceScalar<bool,CHUNKLENGTH> dsetvalid; // validity bools
           DataSetInterfaceScalar<T,CHUNKLENGTH>    dsetdata;  // actual data 

         public:
           /// Constructor
           VertexBufferNumeric1D_HDF5(H5FGPtr location, const std::string& name, const int vID, const unsigned int i=0)
             : VertexBufferNumeric1D<T,CHUNKLENGTH>(name,vID, i)
             , dsetvalid(location, name+"_isvalid")
             , dsetdata(location, name)
           {}
        
           /// Override of buffer dump function to handle HDF5 output
           void dump()
           {
             dsetvalid.writenewchunk(this->buffer_valid); 
             dsetdata.writenewchunk(this->buffer_entries);
           }

           /// Ensure dataset "write head" (i.e. next append) is prepared to
           /// write to the supplied absolute dataset index (e.g. by inserting
           /// blank entries if need)
           void synchronise_output_to_position(const ulong i)
           {
              // dataset position is the "next slab" index plus the buffer index
              const ulong dsetvalid_pos = dsetvalid.get_nextemptyslab() + this->get_nextempty();
              const ulong dsetdata_pos  = dsetdata.get_nextemptyslab() + this->get_nextempty();
              if(dsetvalid_pos!=dsetdata_pos)
              {
                  // The two datasets controlled by this buffer should always remain synchronised!
                  std::ostringstream errmsg;
                  errmsg << "Error! Validity and Data datasets have gone out of sync in buffer with label '"<<this->get_label()<<"'! This is a bug in the VertexBufferNumeric1D_HDF5 class. Please report it.";
                  printer_error().raise(LOCAL_INFO, errmsg.str()); 
              }

              // Compare this to the move position and see what we need to do
              const long movediff = i - dsetvalid_pos;
              if(movediff==1)             
              {
                  // Set the current point as having no valid data and move to the next
                  this->skip_append();    
              } 
              else if(movediff<0)
              {
                  std::ostringstream errmsg;
                  errmsg << "Error! Attempted to move HDF5 write position backwards in buffer with label '"<<this->get_label()<<"'! This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it. (Note, writing to old points can be done but requires using special write functions).";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
              } 
              else if (movediff==0)
              {
                if(this->donepoint())
                {
                  std::ostringstream errmsg;
                  errmsg << "Error! Attempted to move HDF5 write position by 0 slots in buffer with label '"<<this->get_label()<<"'; this part is fine, however the buffer indicates that this position has already received a write (donepoint()==true) so it should have moved forward! This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it.";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
                }
                // otherwise no problem; carry on.
              }
              else if (movediff>1) 
              {
                  std::ostringstream errmsg;
                  errmsg << "Error! Attempted to move HDF5 write position by >1 slots ("<<movediff<<") in buffer with label '"<<this->get_label()<<"'. Buffer synchronisation should only happen one slot at a time. This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it.";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
              }
           }
         
      };
  
 
      /// Wrapper object to manage a single dataset
      // Mostly just creates the dataset and holds metadata about it
      // Would be nice to extend to handle writing as well, but currently
      // I have to do it differently depending on the RANK.
      template<class T, std::size_t RECORDRANK, std::size_t CHUNKLENGTH>
      class DataSetInterfaceBase
      {
        private: 
         static const std::size_t DSETRANK = RECORDRANK+1; // Rank of the dataset array
         static const get_hdf5_data_type<T> hdf_dtype;

         H5FGPtr mylocation; // where this datasets is located in the hdf5 file
         std::string myname; // name of the dataset in the hdf5 file         

         std::size_t record_dims[];

         // Dataset and chunk dimensions
         hsize_t  dims[DSETRANK];
         hsize_t  maxdims[DSETRANK];
         hsize_t  chunkdims[DSETRANK];

        protected:
         // Derived classes need full access to these

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
         std::size_t get_dsetrank() const    { return DSETRANK; };
         std::size_t get_chunklength() const { return CHUNKLENGTH; };
         hsize_t* get_dsetdims() const       { return dims; };
         hsize_t* get_maxdsetdims() const    { return maxdims; };
         hsize_t* get_chunkdims() const      { return chunkdims; };
         H5::PredType get_hdftype() const    { return hdf_dtype.type(); };
         ulong get_nextemptyslab() const     { return dsetnextemptyslab; };

         /// Constructor
         DataSetInterfaceBase(H5FGPtr location, const std::string& name, const std::size_t rdims[]) 
           : mylocation(location)
           , myname(name)
           , record_dims(rdims)
           , my_dataset(createDataSet(location,name,rdims))
           , dsetnextemptyslab(0)
         {}

         /// Create a (chunked) dataset 
         H5::DataSet createDataSet(H5FGPtr location, const std::string& name, const std::size_t rdims[])
         {
            // I'd like to declare rdims as rdims[RECORDRANK], but apparantly zero length arrays are not allowed,
            // so this would not compile in the RECORDRANK=0 case, which I need. Irritating.
            
            // Compute initial dataspace and chunk dimensions
            dims[0] = 1*CHUNKLENGTH; // Start off with space for 1 chunk
            maxdims[0] = H5S_UNLIMITED; // No upper limit on number of records allowed in dataset
            chunkdims[0] = CHUNKLENGTH;
            for(std::size_t i=0; i<RECORDRANK; i++)
            {
               // Set other dimensions to match record size    
               // Note: loop will not run for RANK=0 case
               dims[i+1]      = rdims[i];             
               maxdims[i+1]   = rdims[i];             
               chunkdims[i+1] = rdims[i];             
            }

            // Create the data space
            H5::DataSpace dspace(DSETRANK, dims, maxdims);

            // Object containing dataset creation parameters
            H5::DSetCreatPropList cparms;   
            cparms.setChunk(DSETRANK, chunkdims);

            // Set fill value for dataset
            //int fill_val = 0;
            //cparms.setFillValue( hdf_dtype.type, &fill_value);
       
            // Create the dataset
            return location->createDataSet( name.c_str(), hdf_dtype.type(), dspace, cparms);
         }

      };

      /// Derived dataset interface, with methods for writing scalar records (i.e. single ints, doubles, etc.)
      /// i.e. RANK=0 case
      template<class T, std::size_t CHUNKLENGTH>
      class DataSetInterfaceScalar : public DataSetInterfaceBase<T,0,CHUNKLENGTH>
      {
        private:
          static const std::size_t empty_rdims[1]; // just to trick base class constructor, not used.
          static const std::size_t DSETRANK=1; 

        public: 
          /// Constructor
          DataSetInterfaceScalar(H5FGPtr location, const std::string& name) 
            : DataSetInterfaceBase<T,0,CHUNKLENGTH>(location, name, empty_rdims)
          {}

          void writenewchunk(const T (&chunkdata)[CHUNKLENGTH])
          {
             // Extend the dataset. Dataset on disk becomes 1 chunk larger.
             hsize_t newsize[DSETRANK];
             hsize_t offsets[DSETRANK];
             newsize[0] = this->get_dsetdims()[0] + CHUNKLENGTH; // extend dataset by 1 chunk
             // newsize[1] = dims[1]; // don't need: only 1D for now.
             this->my_dataset.extend( newsize );
            
             // Select a hyperslab.
             H5::DataSpace filespace = this->my_dataset.getSpace();
             offsets[0] = this->dsetnextemptyslab;
             //offsets[1] = 0; // don't need: only 1D for now.
             filespace.selectHyperslab( H5S_SELECT_SET, this->get_chunkdims(), offsets );
             
             // Define memory space
             H5::DataSpace memspace( DSETRANK, this->get_chunkdims() );
             
             // Write the data to the hyperslab.
             this->my_dataset.write( chunkdata, this->get_hdftype(), memspace, filespace );

             // Update the "next empty hyperslab" counter
             this->dsetnextempty += CHUNKLENGTH;
          }

      };


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
