//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration of VertexBufferNumeric1D class
///  This version of VertexBufferBase adds a
///  series of routines for managing a 1D data
///  buffer (i.e. a 1D array of scalars), and
///  for transmitting and receiving these buffers
///  via MPI. 
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
 
#ifndef __VertexBufferNumeric1D_hpp__
#define __VertexBufferNumeric1D_hpp__

#include <cstddef>
#include <sstream>
#include <iostream>

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Printers/VertexBufferBase.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

//#define HDF5_DEBUG // Triggers debugging output
#define DISABLED_FOR_NOW

#define MPI_DEBUG
   
namespace Gambit {
  
  namespace Printers {

      /// Struct for a collection of MPI tags belonging to a single buffer
      struct BuffTags
      {
         const int SYNC_data;   // message contains  T       buffer_entries[LENGTH]   
         const int SYNC_valid;  //    "       "      bool    buffer_valid[LENGTH]   
         const int RA_queue;    //    "       "      T       RA_write_queue[LENGTH]  
         const int RA_loc;      //    "       "      hsize_t RA_write_locations[LENGTH] 
         const int RA_length;   //    "       "      hsize_t RA_queue_length[LENGTH] //TODO err this is wrong 

         static const std::size_t NTAGS=5;
        
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
  }
}
#endif
