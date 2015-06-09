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
#include <memory>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <boost/multi_array.hpp> // Used in buffers

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Utils/standalone_error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

//#define HDF5_DEBUG // Triggers debugging output
#define DISABLED_FOR_NOW

#define MPI_DEBUG
   
namespace Gambit {
  
  /// Declarations needed for specialisation of GMPI::get_mpi_data_type<T>() to VBIDpair type
  namespace Printers { struct VBIDpair; }
  namespace GMPI { template<> MPI_Datatype get_mpi_data_type<Printers::VBIDpair>(); }

  namespace Printers {

      /// Typedefs for managed H5 pointers
      typedef std::shared_ptr<H5::CommonFG> H5FGPtr; // common ancestor of H5File and Group
      typedef std::shared_ptr<H5::H5File> H5FilePtr;
      typedef std::shared_ptr<H5::Group>  H5GroupPtr;
      
      namespace HDF5 { 
         /// Create or open hdf5 file
         // If overwrite=true then any existing file will be deleted and replaced. USE CAREFULLY!!!
         H5FilePtr openFile(const std::string& fname, bool overwrite=false);

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

      // modified from http://stackoverflow.com/questions/9250237/write-a-boostmulti-array-to-hdf5-dataset 
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
      struct get_hdf5_data_type;
      // EDIT: Left undefined because I want a compile error if specialisation doesn't exist.
      //{   static H5::PredType type() 
      //    {   
      //        //static_assert(false, "Unknown HDF5 data type");
      //        return H5::PredType::NATIVE_DOUBLE; 
      //    }
      //};

      template<> struct get_hdf5_data_type<char>              { H5::IntType type()   const { return H5::PredType::NATIVE_CHAR   ; } };
      //template<> struct get_hdf5_data_type<unsigned char>   { H5::IntType type()   const { return H5::PredType::NATIVE_UCHAR  ; } };
      //template<> struct get_hdf5_data_type<short>           { H5::IntType type()   const { return H5::PredType::NATIVE_SHORT  ; } };
      //template<> struct get_hdf5_data_type<unsigned short>  { H5::IntType type()   const { return H5::PredType::NATIVE_USHORT ; } };
      //template<> struct get_hdf5_data_type<int>             { H5::IntType type()   const { return H5::PredType::NATIVE_INT    ; } };
      //template<> struct get_hdf5_data_type<unsigned int>    { H5::IntType type()   const { return H5::PredType::NATIVE_UINT   ; } };
      //template<> struct get_hdf5_data_type<long>            { H5::IntType type()   const { return H5::PredType::NATIVE_LONG   ; } };
      //template<> struct get_hdf5_data_type<unsigned long>   { H5::IntType type()   const { return H5::PredType::NATIVE_ULONG  ; } };
      template<> struct get_hdf5_data_type<long long>         { H5::IntType type()   const { return H5::PredType::NATIVE_LLONG  ; } };
      template<> struct get_hdf5_data_type<unsigned long long>{ H5::IntType type()   const { return H5::PredType::NATIVE_ULLONG ; } };
      template<> struct get_hdf5_data_type<int8_t>            { H5::IntType type()   const { return H5::PredType::NATIVE_INT8   ; } };
      template<> struct get_hdf5_data_type<uint8_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_UINT8  ; } };
      template<> struct get_hdf5_data_type<int16_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT16  ; } };
      template<> struct get_hdf5_data_type<uint16_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT16 ; } };
      template<> struct get_hdf5_data_type<int32_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT32  ; } };
      template<> struct get_hdf5_data_type<uint32_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT32 ; } };
      template<> struct get_hdf5_data_type<int64_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT64  ; } };
      template<> struct get_hdf5_data_type<uint64_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT64 ; } };
      template<> struct get_hdf5_data_type<float>             { H5::FloatType type() const { return H5::PredType::NATIVE_FLOAT  ; } };
      template<> struct get_hdf5_data_type<double>            { H5::FloatType type() const { return H5::PredType::NATIVE_DOUBLE ; } };
      template<> struct get_hdf5_data_type<long double>       { H5::FloatType type() const { return H5::PredType::NATIVE_LDOUBLE; } };

      // Bools are a bit trickier because C has no builtin boolean type (until recently; anyway 
      // the HDF5 libraries are written in C before this existed). I also want something that
      // will be recognised as a bool by h5py. For now just use an unsigned int...
      template<> struct get_hdf5_data_type<bool>              { H5::IntType type()   const { return H5::PredType::NATIVE_UINT8  ; } };


      //!_______________________________________________________________________________________

      /// Reserved tags for MPI messages
      /// First reserved tag is for messages registering/requesting a new tags
      enum Tags { TAG_REQ=0 };
      const int FIRST_EMPTY_TAG = TAG_REQ+1;

      /// Struct for a collection of MPI tags belonging to a single hdf5 buffer
      struct BuffTags
      {
         const int SYNC_data;   // message contains  T       buffer_entries[LENGTH]   
         const int SYNC_valid;  //    "       "      bool    buffer_valid[LENGTH]   
         const int RA_queue;    //    "       "      T       RA_write_queue[LENGTH]  
         const int RA_loc;      //    "       "      hsize_t RA_write_locations[LENGTH] 
         const int RA_length;   //    "       "      hsize_t RA_queue_length[LENGTH] //TODO err this is wrong 

         BuffTags()
            : SYNC_data (-1)
            , SYNC_valid(-1)
            , RA_queue  (-1)
            , RA_loc    (-1)
            , RA_length (-1)
         {}

         BuffTags(const int first_tag)
            : SYNC_data (first_tag)
            , SYNC_valid(first_tag+1)
            , RA_queue  (first_tag+2)
            , RA_loc    (first_tag+3)
            , RA_length (first_tag+4)
         {}
      };

      /// VertexBuffer abstract interface base class
      class VertexBufferBase
      {
         private:
            // flag to indicate whether an append or skip_append has been done for a given point
            bool donethispoint;

            // Metadata
            std::string label;
            int vertexID;
            uint index; // discriminator in case of multiple output streams from one vertex
             
            // flag to trigger synchronised buffer writing
            bool synchronised;
 
            // flag to disable any writing (turns this into a null buffer)
            bool silenced;

         public:
            VertexBufferBase()
              : donethispoint()
              , label()
              , vertexID()
              , index()
              , synchronised()
              , silenced()
            {
              #ifdef HDF5_DEBUG
              std::cout<<"Default constructing buffer name='"<<label<<"', synchronised="<<synchronised<<std::endl;
              #endif
            }   

            VertexBufferBase(const std::string& l, const int vID, const uint i, const bool sync, const bool sil) 
              : donethispoint(false)
              , label(l)
              , vertexID(vID)
              , index(i)
              , synchronised(sync)
              , silenced(sil)
            {
              #ifdef HDF5_DEBUG
              std::cout<<"Constructing buffer name='"<<label<<"', synchronised="<<synchronised<<std::endl;
              #endif
            }

            virtual ~VertexBufferBase() {}

            // Metadata getters
            int get_vertexID() { return vertexID; }
            uint get_index()   { return index; }
            std::string get_label() { return label; }
            bool is_synchronised() { return synchronised; }
            bool is_silenced() { return silenced; }

            // Needed to externally trigger buffer write to disk (e.g. at end of scan)
            virtual void flush() = 0; ///TODO: write proper cleanout function = 0;            

            // Flush the random-access write queue (i.e. do the queued-up writes)
            virtual void RA_flush() = 0;

            // Resets buffer and signals to printer to empty out the contents of the output
            // dataset in preparation of new writing.
            virtual void reset() = 0;

            // Needed to externally inform buffer of a skipped iteration (when no data to write)
            virtual void skip_append() = 0;           

            #ifdef DISABLED_FOR_NOW
            #ifdef WITH_MPI
            // Retrieve buffer data from an MPI message
            // Should only be triggered if a valid message is known to exist to be retrieved!
            virtual void get_mpi_message(int) = 0;
            #endif
            #endif   

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
          /// @{ Buffer variables for sequential writing
          // Using arrays as these are easier to write to hdf5
          bool  buffer_valid[LENGTH]; // Array telling us which buffer entries are properly filled
          T     buffer_entries[LENGTH];

          /// Buffers to store data waiting to be sent via MPI
          #ifdef WITH_MPI
          BuffTags myTags; // Collection of MPI tags needed for passing messages
          GMPI::Comm& printerComm; // MPI communicator object from printer

          bool  send_buffer_valid[LENGTH];
          T     send_buffer_entries[LENGTH];
          bool  send_buffer_ready = true; // flag to signal if send buffer can be filled with new data.

          // Request handles for tracking status of a sent message
          MPI_Request req_valid  =MPI_REQUEST_NULL;
          MPI_Request req_entries=MPI_REQUEST_NULL;

          // Status handles
          MPI_Status stat_valid  =MPI_STATUS_IGNORE;
          MPI_Status stat_entries=MPI_STATUS_IGNORE;
          #endif
          /// @}
 
          /// @{ Buffer variables for random access writing
          /// Queue for random access writes to dataset (independent of main buffer)
          T     RA_write_queue[LENGTH];
          /// Target dataset positions for RA writes.
          hsize_t RA_write_locations[LENGTH];
          /// Current length of the RA write queue
          uint  RA_queue_length = 0;
          /// @}

        private:
          unsigned int nextempty; // index of the next free buffer slot

          static const std::size_t bufferlength = LENGTH;

        public:
          unsigned int get_nextempty() { return nextempty; } 

          /// Constructors
          VertexBufferNumeric1D()
            : VertexBufferBase()
            , buffer_valid()
            , buffer_entries()
            , nextempty(0)
          {}

          VertexBufferNumeric1D(
                const std::string& label 
              , const int vID
              , const unsigned int i
              , bool sync
              , bool sil
              #ifdef WITH_MPI
              , const BuffTags& tags
              , GMPI::Comm& pComm
              #endif
           ): VertexBufferBase(label,vID,i,sync,sil)
            , buffer_valid() 
            , buffer_entries()
            #ifdef WITH_MPI
            , myTags(tags)
            , printerComm(pComm)
            #endif
            , nextempty(0)
          {}

          /// Destructor
          ~VertexBufferNumeric1D()
          {} 

          /// Append a record to the buffer
          void append(const T& data);

          /// Queue up a desynchronised ("random access") dataset write to previous scan iteration
          void RA_write(const T& value, const ulong dset_index);

          /// No data to append this iteration; skip this slot
          virtual void skip_append();

          #ifdef DISABLED_FOR_NOW
          // Write data from an arbitrary buffer to disk
          virtual void flush_external(const T (&values)[LENGTH], const bool (&isvalid)[LENGTH]) = 0;

          #ifdef WITH_MPI
          // Retrieve buffer data from an MPI message
          // Should only be triggered if a valid message is known to exist to be retrieved!
          virtual void get_mpi_message(int);
          #endif
          #endif

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
         if(not this->is_silenced()) {
            // Debug dump
            #ifdef HDF5_DEBUG
            std::cout<<"-------------------------------------"<<std::endl;
            std::cout<<"Dump from buffer '"<<this->get_label()<<"'"<<std::endl;
            std::cout<<"nextempty   = "<<nextempty<<std::endl;
            std::cout<<"donepoint() = "<<this->donepoint()<<std::endl;
            #endif
            
            error_if_done(); // make sure buffer hasn't written to the current point already
            buffer_entries[nextempty] = data;
            buffer_valid[nextempty] = true;
            nextempty++;
            if(nextempty==bufferlength)
            {
               #ifdef WITH_MPI
               // Prepate to send buffer data to master node
               const int myRank = this->printerComm.Get_rank();
               const int masterRank = 0;
               if(myRank!=masterRank)
               { // Worker node instructions
                  if(not send_buffer_ready)
                  { 
                     // Make sure previous messages are out of the send buffer before sending new ones.
                     MPI_Wait(&req_valid, &stat_valid);
                     MPI_Wait(&req_entries, &stat_entries);
                     send_buffer_ready = true;
                  }
                  /// Copy buffer data into the send buffer 
                  for(uint i=0; i<bufferlength; i++)
                  {
                     send_buffer_valid[i]   = buffer_valid[i];
                     send_buffer_entries[i] = buffer_entries[i];
                  }
                  /// Perform non-blocking sends
                  #ifdef HDF5_DEBUG
                  std::cout<<"Isend-ing buffers from rank "<<myRank<<" to master"<<std::endl;
                  #endif
                  this->printerComm.Isend(send_buffer_valid,   bufferlength, masterRank, this->myTags.SYNC_valid, &req_valid);
                  this->printerComm.Isend(send_buffer_entries, bufferlength, masterRank, this->myTags.SYNC_data,  &req_entries);
                  send_buffer_ready = false;
               }
               else
               { // Master node instructions
                  flush();
               }
               #else
               flush();
               #endif
               clear();
               nextempty=0;
            }
         }   
      }

      /// No data to append this iteration; skip this slot
      template<class T, std::size_t L>
      void VertexBufferNumeric1D<T,L>::skip_append()
      {
         if(not this->is_silenced()) {
            error_if_done(); // make sure buffer hasn't written to the current point already
            buffer_valid[nextempty] = false;
            nextempty++;
            if(nextempty==bufferlength)
            {
               flush();
               clear();
               nextempty=0;
            } 
         }
      }

      /// Queue up a desynchronised ("random access") dataset write to previous scan iteration
      template<class T, std::size_t L>
      void VertexBufferNumeric1D<T,L>::RA_write(const T& value, const ulong dset_index)
      {
         if(not this->is_silenced()) {
            uint i = RA_queue_length;
            RA_write_queue[i]     = value;
            RA_write_locations[i] = dset_index;
            RA_queue_length += 1;
            if(RA_queue_length==L)
            {
              RA_flush();
              RA_queue_length=0;
            }
         }
      }

      #ifdef DISABLED_FOR_NOW
      #ifdef WITH_MPI
      // Retrieve buffer data from an MPI message
      // Should only be triggered if a valid message is known to exist to be retrieved from the input source!
      template<class T, std::size_t LENGTH>
      void VertexBufferNumeric1D<T,LENGTH>::get_mpi_message(int source)
      {
        // An MPI_Iprobe should have been done prior to calling this function, 
        // in order to trigger delivery of the message to the correct buffer. 
        // So now we trust that this buffer is indeed supposed to receive the 
        // message. We can also use a blocking receive since we know that a
        // message is already waiting to be sent.

        // Buffers to store received message
        bool  recv_buffer_valid[LENGTH];
        T     recv_buffer_entries[LENGTH];

        #ifdef MPI_DEBUG
        // Double check that a message is actually waiting to be sent
        // There is a code bug if this is not the case
        MPI_Status status;
        bool message_waiting = printerComm.Iprobe(source, MPI_ANY_TAG, &status);
        if(not message_waiting) {
          std::ostringstream errmsg;
          errmsg << "Error! get_mpi_message called with source="<<source<<", but there is no message waiting to be delivered from that process! This is a bug, please report it.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
        }
        int tag = status.MPI_TAG;
        if(tag!=myTags.SYNC_valid or tag!=myTags.SYNC_data)
        {
          std::ostringstream errmsg;
          errmsg << "Error! get_mpi_message called with source="<<source<<"; there is a message waiting, but the tag (="<<tag<<") is unrecognised. Tag should be one of the following: "<<std::endl
                 <<"  myTags.SYNC_valid = "<<myTags.SYNC_valid<<std::endl
                 <<"  myTags.SYNC_data  =" <<myTags.SYNC_data;
          printer_error().raise(LOCAL_INFO, errmsg.str());
        }
        #endif

        printerComm.Recv(&recv_buffer_valid,   LENGTH, source, myTags.SYNC_valid);
        printerComm.Recv(&recv_buffer_entries, LENGTH, source, myTags.SYNC_data);

        // Write the buffers to disk
        flush_external(recv_buffer_entries,recv_buffer_valid);

        // TODO: - Need to identify whether message is synchronous or RA data
        //       - Need to update absolute dataset indices to reflect the newly added
        //         chunk.
        //       - Regarding the above, may need to send an additional message containing
        //         the pointID and rank for each entry, and then insert these into the
        //         master process map. Also means buffers will need to be passed this
        //         information, rather than just having the hdf5printer give them an
        //         absolute index...
      }
      #endif
      #endif

      /// Extract (copy) a record
      template<class T, std::size_t L>
      T VertexBufferNumeric1D<T,L>::get_entry(const std::size_t i) const
      {
         if(this->is_silenced()) {
           std::string errmsg = "Error! Attempted to retrieve data from a silenced buffer!";
           printer_error().raise(LOCAL_INFO, errmsg);
         }
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
         if(not this->is_silenced()) {
            for(std::size_t i=0; i<bufferlength; i++)
            {
               buffer_valid[i] = false;
               buffer_entries[i] = 0;
            }
            nextempty=0;  
         }
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
           /// Interfaces to HDF5 datasets
           DataSetInterfaceScalar<bool,CHUNKLENGTH> dsetvalid; // validity bools
           DataSetInterfaceScalar<T,CHUNKLENGTH>    dsetdata;  // actual data 

           /// Private function to trigger buffer write to disk.
           /// This is just to convince myself that the base virtual
           /// function is not called accidentally
           /// in certain places.
           void private_flush()
           {
             if(not this->is_silenced()) {
                dsetvalid.writenewchunk(this->buffer_valid); 
                dsetdata.writenewchunk(this->buffer_entries);
             }
           }

         public:
           /// Constructors
           VertexBufferNumeric1D_HDF5()
             : VertexBufferNumeric1D<T,CHUNKLENGTH>()
             , dsetvalid()
             , dsetdata()
           {}

           VertexBufferNumeric1D_HDF5(H5FGPtr location, const std::string& name, const int vID, const unsigned int i, bool sync, bool silence
             #ifdef WITH_MPI
             , const BuffTags& tags
             , GMPI::Comm& pComm
             #endif
             )
             : VertexBufferNumeric1D<T,CHUNKLENGTH>(name,vID, i, sync, silence
               #ifdef WITH_MPI
               , tags, pComm
               #endif
               )
             , dsetvalid()
             , dsetdata()
           {
             if(not silence)
             {
               dsetvalid = DataSetInterfaceScalar<bool,CHUNKLENGTH>(location, name+"_isvalid");
               dsetdata  = DataSetInterfaceScalar<T,CHUNKLENGTH>(location, name);
             }
           }
       
           /// Destructor
           /// Make sure buffer contents are written to file when buffer object is destroyed
           ~VertexBufferNumeric1D_HDF5() 
           {
              if(this->is_synchronised()) { private_flush(); }
              else { RA_flush(); }
           }

           /// Override of buffer dump function to handle HDF5 output
           virtual void flush() 
           { 
              if(this->is_synchronised()) { private_flush(); }
              else {
                 std::ostringstream errmsg;
                 errmsg << "Error! Tried to flush() synchronised write buffer of buffer with name "<<this->get_label()<<", but buffer is not flagged as running in synchronised mode! Please report this bug.";
                 printer_error().raise(LOCAL_INFO, errmsg.str()); 
              }
           }

           #ifdef DISABLED_FOR_NOW
           /// Manual command to send an arbitrary buffer to be written to disk
           virtual void flush_external(const T (&values)[CHUNKLENGTH], const bool (&isvalid)[CHUNKLENGTH])
           {
              if(not this->is_silenced()) {
                dsetvalid.writenewchunk(isvalid); 
                dsetdata.writenewchunk(values);
              }
           }
           #endif

           /// Reset the output (non-synchronised datasets only)
           virtual void reset() { }

           /// Send random access write queue to dataset interfaces for writing
           virtual void RA_flush()
           {
              if((not this->is_silenced()) and (not this->RA_queue_length==0)) {
                 bool valid[CHUNKLENGTH];
                 std::fill_n(valid, this->RA_queue_length, true); 
                 dsetvalid.RA_write(valid,this->RA_write_locations,this->RA_queue_length); 
                 dsetdata.RA_write(this->RA_write_queue,this->RA_write_locations,this->RA_queue_length);
              }
           }

           /// Ensure dataset "write head" (i.e. next append) is prepared to
           /// write to the supplied absolute dataset index (e.g. by inserting
           /// blank entries if need)
           void synchronise_output_to_position(const ulong i)
           {
              if(not this->is_silenced()) {
                 if(not this->is_synchronised())  
                 {
                    std::ostringstream errmsg;
                    errmsg << "Error! Attempted to perform synchronisation on buffer not flagged for synchronisation (label '"<<this->get_label()<<"')! Please report this bug.";
                    printer_error().raise(LOCAL_INFO, errmsg.str()); 
                 }

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
  
         // Full accessor needed for dataset dimensions 
         // so that they can be updated when chunks are added
         hsize_t* dsetdims() { return dims; }

         /// Constructors
         DataSetInterfaceBase() 
           : mylocation(NULL)
           , myname()
           , record_dims()
           , my_dataset()
           , dsetnextemptyslab(0)
         {}

         DataSetInterfaceBase(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK]) 
           : mylocation(location)
           , myname(name)
           , record_dims() /* doh have to copy array element by element */
           , my_dataset(createDataSet(location,name,rdims))
           , dsetnextemptyslab(0)
         {
           for(std::size_t i=0; i<DSETRANK; i++) { record_dims[i] = rdims[i]; }
         }

         /// Create a (chunked) dataset 
         H5::DataSet createDataSet(H5FGPtr location, const std::string& name, const std::size_t rdims[DSETRANK])
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

      };

      // Define some static members
      template<class T, std::size_t RR, std::size_t CL>
      const get_hdf5_data_type<T> DataSetInterfaceBase<T,RR,CL>::hdf_dtype; // Default initialisation is fine


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
          DataSetInterfaceScalar() 
            : DataSetInterfaceBase<T,0,CHUNKLENGTH>()
          {}

          DataSetInterfaceScalar(H5FGPtr location, const std::string& name) 
            : DataSetInterfaceBase<T,0,CHUNKLENGTH>(location, name, empty_rdims)
          {}

          void writenewchunk(const T (&chunkdata)[CHUNKLENGTH])
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
          void RA_write(const T (&values)[CHUNKLENGTH], const hsize_t (&coords)[CHUNKLENGTH], std::size_t npoints) 
          {
             bool error_occurred = false; // simple error flag

             // Extend the dataset if needed
             // To do this need to know largest target coordinate
             ulong max_coord = *std::max_element(coords,coords+npoints);
             if( max_coord >= this->dsetdims()[0] )
             {
               // Extend the dataset to the nearest multiple of CHUNKLENGTH above max_coord,
               // unless max_coord is itself a multiple of CHUNKLENGTH.
               std::size_t remainder = max_coord % CHUNKLENGTH;
               std::size_t newlength;
               if(remainder==0) { newlength = max_coord; } 
               else             { newlength = max_coord - remainder + CHUNKLENGTH; }
               #ifdef HDF5_DEBUG
               std::cout << "Max coord ("<<max_coord<<") larger than current dataset length ("<<this->dsetdims()[0]<<") (dset name="<<this->get_myname()<<")" << std::endl
                         << "Extending dataset to newlength="<<newlength<<std::endl
                         << "npoints = "<< npoints << std::endl;
               #endif
               this->dsetdims()[0] = newlength;
               this->my_dataset.extend( this->dsetdims() );  
             }

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

         ////     hsize_t offsets[DSETRANK];

         ////     // Put data into a length 1 array, for writing as a length 1 "slab"
         ////     //T data_slice[1];
         ////     //data_slice[0] = value;

         ////     // Check if dataset needs extending; we may be trying to write to a point that wasn't
         ////     // yet written to by a buffer. Can write up to 1 chunk-length beyond the current
         ////     // position              

         ////     // Extend the dataset. Dataset on disk becomes 1 chunk larger.
         ////     if( dset_index >= this->dsetdims()[0] )
         ////     {
         ////       //if( dset_index >= this->dsetdims()[0] + CHUNKLENGTH )
         ////       //{
         ////       //  // Too far; error.
         ////       //  std::ostringstream errmsg;
         ////       //  errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Requested write position ("<<dset_index<<") is more than one chunk-length ("<<CHUNKLENGTH<<") beyond the present end of the dataset ("<<this->dsetdims()[0]<<")";
         ////       //  printer_error().raise(LOCAL_INFO, errmsg.str());
         ////       //}
         ////       //
         ////       //// Ok to extend.
         ////       //this->dsetdims()[0] += CHUNKLENGTH; // extend dataset by 1 chunk

         ////       // Extend the dataset to the nearest multiple of CHUNKLENGTH above dset_index
         ////       std::size_t remainder = dset_index % CHUNKLENGTH; 
         ////       this->dsetdims()[0] = dset_index - remainder + CHUNKLENGTH;

         ////       // newsize[1] = dims[1]; // don't need: only 1D for now.
         ////       this->my_dataset.extend( this->dsetdims() );  
         ////     }

         ////     // Select hyperslab starting at dset_index
         ////     H5::DataSpace filespace = this->my_dataset.getSpace();
         ////     offsets[0] = dset_index;
         ////     //offsets[1] = 0; // don't need: only 1D for now.
         ////     filespace.selectHyperslab( H5S_SELECT_SET, this->get_slicedims(), offsets );
         ////     
         ////     // Define memory space
         ////     H5::DataSpace memspace( DSETRANK, this->get_slicedims() );
         ////    
         ////     #ifdef HDF5_DEBUG 
         ////     std::cout << "Debug variables:" << std::endl
         ////               << "  dsetdims()[0]      = " << this->dsetdims()[0] << std::endl
         ////               << "  offsets[0]         = " << offsets[0] << std::endl
         ////               << "  get_slicedims()[0] = " << this->get_slicedims()[0] << std::endl;
         ////     #endif
 
         ////     // Write the data to the hyperslab.
         ////     try {
         ////        this->my_dataset.write( &value, this->hdf_dtype.type(), memspace, filespace );
         ////     } catch(const H5::Exception& e) {
         ////        std::ostringstream errmsg;
         ////        errmsg << "Error writing RA value to dataset (with name: \""<<this->get_myname()<<"\") in HDF5 file. Message was: "<<e.getDetailMsg() << std::endl;
         ////        printer_error().raise(LOCAL_INFO, errmsg.str());
         ////     }
         }
 
      };

      // Define some static members
      template<class T, std::size_t CL>
      const std::size_t DataSetInterfaceScalar<T,CL>::empty_rdims[1] = {};

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

#undef HDF5_DEBUG

#endif

