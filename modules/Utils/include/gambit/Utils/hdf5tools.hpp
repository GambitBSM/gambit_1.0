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
#include <boost/multi_array.hpp> // Used in buffers

// HDF5 C++ bindings
#include "H5Cpp.h" 
    
namespace Gambit {
  namespace Utils {

      /// Typedef for a managed H5File pointer
      typedef std::shared_ptr<H5::H5File> H5FilePtr;
      
      /// Create or open hdf5 file
      H5FilePtr createOrOpenFile(const std::string& fname)
      {
          H5::Exception::dontPrint();
          H5::H5File* file = 0;
      
          try {
              file = new H5::H5File(fname.c_str(), H5F_ACC_RDWR);
          } catch(const H5::FileIException&) {
              file = new H5::H5File(fname.c_str(), H5F_ACC_TRUNC);
          }
      
          return H5FilePtr(file);
      }

      /// Create hdf5 file (always overwrite existing files)
      H5FilePtr createFile(const std::string& fname)
      {
          H5::Exception::dontPrint();
          H5::H5File* file = 0;
      
          file = new H5::H5File(fname.c_str(), H5F_ACC_TRUNC);
      
          return H5FilePtr(file);
      }

      // from http://stackoverflow.com/questions/9250237/write-a-boostmulti-array-to-hdf5-dataset 
      //!_______________________________________________________________________________________
      //!     
      //!     map types to HDF5 types
      //!         
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
      //!     
      //!     write_hdf5 multi_array
      //!         
      //!     \author leo Goodstadt (04 March 2013)
      //!     
      //!_______________________________________________________________________________________
      template<typename T, std::size_t DIMENSIONS, typename hdf5_data_type>
      void do_write_hdf5(H5::H5File file, const std::string& data_set_name, const boost::multi_array<T, DIMENSIONS>& data, hdf5_data_type& datatype)
      {
          // Little endian for x86
          //FloatType datatype(get_hdf5_data_type<T>::type());
          datatype.setOrder(H5T_ORDER_LE);
      
          std::vector<H5::hsize_t> dimensions(data.shape(), data.shape() + DIMENSIONS);
          H5::DataSpace dataspace(DIMENSIONS, dimensions.data());
      
          H5::DataSet dataset = file.createDataSet(data_set_name, datatype, dataspace);
      
          dataset.write(data.data(), datatype);
      }
      
      template<typename T, std::size_t DIMENSIONS>
      void write_hdf5(H5::H5File file, const std::string& data_set_name, const boost::multi_array<T, DIMENSIONS>& data )
      {
          get_hdf5_data_type<T> hdf_data_type;
          do_write_hdf5(file, data_set_name, data, hdf_data_type.type);
      }
      
      //___________________________________________________

      /// Will worry about variable length records later...

      /// A single record of a vertex buffer
      //
      // Here T must be a primitive type
      //
      template<class T>
      struct BufferRecord
      {
        bool valid;
        T entry;
      }

      /// VertexBuffer base class
      // 
      class VertexBufferBase
      {
         public:
            VertexBufferBase() {};
            virtual ~VertexBufferBase() {};
            virtual void dump() = 0;            
      }

      /// VertexBuffer for simple numerical types
      template<class T>
      class VertexBufferNumeric1D : public VertexBufferBase
      {
        // Metadata
        const int vertexID;
 
        // Buffer variables
        // Using arrays as these are easier to write to hdf5
        std::unique_ptr<bool[]> buffer_valid; // Array telling us which buffer entries are properly filled
        std::unique_ptr<T[]>    buffer_entries;
        int nextempty; // index of the next free buffer slot
        const int buffersize;

        /// Constructor
        VertexBuffer(const int vID, const int size)
          : vertexID(vID)
          , buffer_valid(new bool[size](false)) 
          , buffer_entries(new T[size])
          , nextempty(0)
          , buffersize(size)
        {}

        /// Destructor
        ~VertexBuffer()
        {} 

        /// Append a record to the buffer
        void append(const T& data)
        {
           buffer_entries[nextempty] = data;
           buffer_valid[nextempty] = true;
           nextempty++;
           if(nextempty==buffersize)
           {
              dump();
              clear();
              nextempty=0;
           }   
        }

        /// Extract (copy) a record
        T get_entry(const int i)
        {
           if(buffer_valid[i])
           {
             return buffer_entries[i];
           }
           else
           {
             std::string errmsg = "Error! Attempted to retrieve data from an invalidated VertexBufferNumeric1D entry!"
             utils_error().raise(LOCAL_INFO, errmsg);
           }
        }

        /// Clear the buffer
        clear()
        {
           for(int i=0; i<buffersize; i++)
           {
              buffer_valid[i] = false;
              buffer_entries[i] = 0;
           }
           nextempty=0;  
        }
        
      }

      /// VertexBuffer for simple numerical types - derived version that handles output to hdf5
      template<class T>
      class VertexBufferNumeric1D_HDF5 : public VertexBufferNumeric1D
      {
         /// Constructor
         VertexBufferNumeric1D_HDF5(const int vID, const int size)
           : VertexBufferNumeric1D(vID, size)
         {}

         /// Override of dumpbuffer to handle HDF5 output
         void dump()
         {
               
         }
      }



    template<class T, int RecordRank>
      class VertexBuffer
      {
        // Metadata
        const int vertexID;
        const int record_dims[];
        const int maxbuffersize;
 
        // Buffer entries
        typedef multi_array<T, RecordRank> RecordType;
        typedef multi_array<T, RecordRank+1> BufferType;

        std::unique_ptr<bool[]> buffer_valid; // Array telling us which buffer entries are properly filled
        std::unique_ptr<T[]>    buffer_entries;

        int nextempty; // index of the next free buffer slot

        /// Constructor
        VertexBuffer(const int vID, const int[] dims, const int size)
          : vertexID(vID)
          , record_dims(dims)
          , maxbuffersize(size)
          , buffer_valid(new bool[size](false)) 
          , nextempty(0)
        {
          init_buffer<RecordRank+1>(dims,size);    
        }

        /// Destructor
        ~VertexBuffer()
        {} 

        /// Template function to initialise the multi_array
        // Specialisations to work with various dimensions (might be some way to generalise, but oh well)
        template<int RANK>
        void init_buffer(const int[] dims, const size)
        {}
        template<>
        void init_buffer<1>(const int[] dims, const size)
        { buffer_entries.resize(boost::extents[size]); }
        template<>
        void init_buffer<2>(const int[] dims, const size)
        { buffer_entries.resize(boost::extents[size][dims[0]]); }
        template<>
        void init_buffer<3>(const int[] dims, const size)
        { buffer_entries.resize(boost::extents[size][dims[0]][dims[1]]); } 
        template<>
        void init_buffer<4>(const int[] dims, const size)
        { buffer_entries.resize(boost::extents[size][dims[0]][dims[1]][dims[2]]); } 


        /// Append a record to the buffer
        void append(RecordType& data)
        {
          // Get view on the slice to which we want to write
          typedef boost::multi_array_types::index_range range;
          array_type::array_view<RecordRank>::type view =
             buffer_entries[ boost::indices[nextempty][range()][range(0,4,2)] ];


          records.push_back(data);

        }

        /// Extract (copy) a record



        /// Clear the buffer
        clear()
        {
           records.clear();     
        }

        /// 


      }





      /// Wrapper object to manage a single dataset
      // Interacts with Buffer objects, so only read/writes to
      // that Buffer type.

      template<typename T, std::size_t RANK, typename hdf5_data_type>
      class DataSetInterface
      {
        private: 
         H5::DataSet my_dataset;
         const get_hdf5_data_type<T> hdf_dtype;
         const int record_dims;
 
        public:
         /// Constructor
         // Rather than a whole file, we probably want to interact with a group ("sub-folder")
         DataSetInterface(H5::H5File& file, VertexBuffer<T>& buffer) 
           , record_dims(buffer.record_dims)
         {
            // create new dataset, or interface with existing one.
            createDataSet()
         }





       

         /// Append the buffer data to the dataset
         void appendToDataSet(BufferType& buffer) 
         {

           /*
           * Extend the dataset. This call assures that dataset is at least 3 x 3.
           */
           hsize_t size[2];
           size[0] = 3;
           size[1] = 3;
           dataset.extend( size );
           /*
           * Select a hyperslab.
           */
           DataSpace fspace1 = dataset.getSpace ();
           hsize_t offset[2];
           offset[0] = 0;
           offset[1] = 0;
           hsize_t dims1[2] = { 3, 3}; /* data1 dimensions */
           fspace1.selectHyperslab( H5S_SELECT_SET, dims1, offset );
           /*
           * Write the data to the hyperslab.
           */
           int data1[3][3] = { {1, 1, 1}, /* data to write */
           {1, 1, 1},
           {1, 1, 1} };
           dataset.write( data1, hdf_dtype.type, mspace1, fspace1 );
         
         }

     template<typename T, std::size_t DIMENSIONS, typename hdf5_data_type>
      void do_write_hdf5(H5::H5File file, const std::string& data_set_name, const boost::multi_array<T, DIMENSIONS>& data, hdf5_data_type& datatype)
      {
          // Little endian for x86
          //FloatType datatype(get_hdf5_data_type<T>::type());
          datatype.setOrder(H5T_ORDER_LE);
      
          std::vector<H5::hsize_t> dimensions(data.shape(), data.shape() + DIMENSIONS);
          H5::DataSpace dataspace(DIMENSIONS, dimensions.data());
      
          H5::DataSet dataset = file.createDataSet(data_set_name, datatype, dataspace);
      
          dataset.write(data.data(), datatype);
      }
      
      template<typename T, std::size_t DIMENSIONS>
      void write_hdf5(H5::H5File file, const std::string& data_set_name, const boost::multi_array<T, DIMENSIONS>& data )
      {
          get_hdf5_data_type<T> hdf_data_type;
          do_write_hdf5(file, data_set_name, data, hdf_data_type.type);
      }
  
         /// Create a (chunked) dataset 
         void createDataSet(std::string& name)
         {
            // Number of dataset array dimensions
            static const int DSETRANK = RANK+1; // 1d array of Nd records 

            const int chunk_size = 1000; // Number of records in a chunk

            // Create the data space with unlimited dimensions (needed for chunking)

            // Initial and maximum dataset dimensions
            H5::hsize_t  dims[DSETRANK];
            H5::hsize_t  maxdims[DSETRANK];
            H5::hsize_t  chunk_dims[DSETRANK];
            dims[0] = 10*chunk_size; // Start off with space for 10 chunks
            maxdims[0] = H5::H5S_UNLIMITED; // No upper limit on number of records allowed in dataset
            chunk_dims[0] = chunk_size;
            for(int i=1; i<DSETRANK; i++)
            {
              // Set other dimensions to match record size    
              dims[i]       = record_dims[i-1];             
              maxdims[i]    = record_dims[i-1];             
              chunk_dims[i] = record_dims[i-1];             
            }
            DataSpace dspace(DSETRANK, dims, maxdims);

            // Object containing dataset creation parameters
            H5::DSetCreatPropList cparms;   
            cparms.setChunk(RANK, chunk_dims);

            // Set fill value for dataset
            //int fill_val = 0;
            //cparms.setFillValue( hdf_dtype.type, &fill_value);
          
            // Create the dataset
            H5::DataSet dataset = file.createDataSet( name.c_str(), hdf_dtype.type, dspace, cparms);

            my_dataset = dataset;
         }

         


      }




      


      /// Chunked write into an existing dataset 

      
 

  }
}


