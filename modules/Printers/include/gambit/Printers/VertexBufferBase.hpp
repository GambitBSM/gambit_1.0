//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration of VertexBufferBase class
///  This is the base buffer class used by the
///  HDF5Printer vertex buffers, but it may be
///  useful for other printers, so I put it in
///  the more general location.
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
 
#ifndef __VertexBufferBase_hpp__
#define __VertexBufferBase_hpp__

#include <sstream>
#include <iostream>
#include "gambit/Core/error_handlers.hpp"
   
namespace Gambit {
  
  namespace Printers {

      /// VertexBuffer abstract interface base class
      class VertexBufferBase
      {
         private:
            // flag to indicate whether an append or skip_append has been done for a given point
            bool donethispoint = false;

            // Metadata
            std::string label;
            int vertexID;
            uint index; // discriminator in case of multiple output streams from one vertex

            // buffer index to which "append" is targeted. 
            unsigned int head_position = 0;

            /// flag to trigger synchronised buffer writing
            bool synchronised;
 
            /// flag to disable any writing (turns this into a null buffer)
            bool silenced;

            /// flag to indicate that GAMBIT is attempting to resume a run, so we need to
            /// hook into existing output streams rather than create new ones
            bool resume; 

            /// flag to indicate whether full buffers should be written to disk,
            /// or whether they should be send to the master node via MPI.
            /// Different printers can use different modes.
            bool MPImode;

         protected:
            /// flag to indicate if the sync buffer is full (and ready for sending/dumping)
            bool sync_buffer_full = false;
            bool sync_buffer_empty = true;

         public:
            VertexBufferBase()
              : label("None (Bug!)")
              , vertexID(0)
              , index(0)
              , synchronised(true)
              , silenced(false)
              , resume(false)
              , MPImode(false)
            {
              //#ifdef HDF5_DEBUG
              std::cout<<"Default constructing buffer name='"<<label<<"', synchronised="<<synchronised<<std::endl;
              //#endif
            }   

            VertexBufferBase(const std::string& l, const int vID, const uint i, const bool sync, const bool sil, const bool r, const bool mode) 
              : label(l)
              , vertexID(vID)
              , index(i)
              , synchronised(sync)
              , silenced(sil)
              , resume(r)
              , MPImode(mode)
            {
              //#ifdef HDF5_DEBUG
              std::cout<<"Constructing buffer name='"<<label<<"', synchronised="<<synchronised<<std::endl;
              //#endif
            }

            virtual ~VertexBufferBase() 
            {
               #ifdef HDF5_DEBUG
               std::cout<<"Destructing buffer name='"<<label<<"'"<<std::endl;
               #endif
            }

            // Metadata getters
            int  get_vertexID()       { return vertexID; }
            uint get_index()          { return index; }
            std::string get_label()   { return label; }

            /// @{ Buffer status getters
            bool sync_buffer_is_full(){ return sync_buffer_full; }
            bool sync_buffer_is_empty(){ return sync_buffer_empty; }
            bool is_synchronised()    { return synchronised; }
            bool is_silenced()        { return silenced; }
            bool resume_mode()        { return resume; }
            bool MPI_mode()           { return MPImode; }
            unsigned int get_head_position() { return head_position; }
            /// @}

            /// MPI mode error
            /// Put in functions which should not run if MPImode=false
            void MPImode_only(std::string local_info)
            {
               if(not MPImode)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error! Attempted to use forbidden function in buffer "<<this->get_label()<<". This function is flagged as usable only if MPImode=true, however currently it is the case that MPImode=false.";
                  printer_error().raise(local_info, errmsg.str());           
               }
            }
 
            // Get the current head position in the output dataset  
            virtual unsigned long dset_head_pos() = 0;

            // Print to std::cout a report on the sync status of this buffer
            virtual void sync_report() = 0;

            // Trigger MPI send of sync buffer to master node, or write to disk
            virtual void flush() = 0;

            // Trigger MPI send of random-access buffer queue, or write to disk
            // Have to provide a map from PPIDpairs to dataset indices, so that buffers
            // know where in the output datasets they are supposed to write.
            virtual void RA_flush(const std::map<PPIDpair, ulong>& PPID_to_dsetindex) = 0;

            // For debugging purposes only
            virtual std::size_t postponed_RA_queue_length() = 0;
            virtual uint get_RA_queue_length() = 0;

            // // Perform write to disk of sync buffer 
            // virtual void write_to_disk() = 0;            

            // // Perform write to disk of random-access buffer
            // virtual void RA_write_to_disk() = 0;

            // Resets buffer and signals to printer to empty out the contents of the output
            // dataset in preparation of new writing.
            virtual void reset(bool force=false) = 0;

            // Needed to externally inform buffer of a skipped iteration (when no data to write)
            virtual void skip_append() = 0;           

            /// Skip several/many positions
            /// NOTE! This is meant for initialising new buffers to the correct
            /// position. If buffer overflows it may get cleared without data
            /// being written, so don't use this in other contexts.
            virtual void N_skip_append(ulong N) = 0;

            // Needed for checking that dataset sizes on disk are consistent
            virtual ulong get_dataset_length() = 0;

            #ifdef WITH_MPI
            // Probe for a sync buffer MPI message from a process
            virtual bool probe_sync_mpi_message(uint,int*) = 0;

            // Probe for a RA buffer MPI message from a process
            virtual bool probe_RA_mpi_message(uint) = 0;

            // Retrieve sync buffer data from an MPI message from a known process rank
            // Should only be triggered if a valid message is known to exist to be retrieved!
            virtual void get_sync_mpi_message(uint,int) = 0;
  
            // Retrieve RA buffer data from an MPI message from a known process rank
            // Should only be triggered if a valid message is known to exist to be retrieved!
            virtual void get_RA_mpi_message(uint, const std::map<PPIDpair, ulong>&) = 0;
 
            // Update MPI tags with valid values
            virtual void update_myTags(uint) = 0;
            #endif

            // getter for donethispoint
            bool donepoint() {return donethispoint;}

            // setter for donethispoint
            void set_donepoint(bool flag) {donethispoint=flag;}

            // Move buffer write head to next position
            void move_head_to_next_slot() 
            { 
               head_position++; 
               //std::cout<<"Advanced head of buffer "<<get_label()<<" to pos. "<<head_position<<std::endl;
            }

            // Rewind buffer head to start of buffer
            void reset_head() { head_position = 0; }

            // Error thrower for when append is attempted with point already set to "done"
            void error_if_done()
            {
               if(donethispoint)
               { 
                  std::ostringstream errmsg;
                  errmsg << "Error! VertexBuffer set to 'done'! Append may have been attempted without moving the buffer write head forward (.";
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

  }
}

#endif

