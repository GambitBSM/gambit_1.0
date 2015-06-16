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
            bool donethispoint;

            // Metadata
            std::string label;
            int vertexID;
            uint index; // discriminator in case of multiple output streams from one vertex
             
            /// flag to trigger synchronised buffer writing
            bool synchronised;
 
            /// flag to disable any writing (turns this into a null buffer)
            bool silenced;

         protected:
            /// flag to indicate if the sync buffer is full (and ready for sending/dumping)
            bool sync_buffer_full = false;
            bool sync_buffer_empty = true;

         public:
            VertexBufferBase()
              : donethispoint()
              , label("None (Bug!)")
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

            virtual ~VertexBufferBase() 
            {
               std::cout<<"Destructing buffer name='"<<label<<"'"<<std::endl;
            }

            // Metadata getters
            int  get_vertexID()       { return vertexID; }
            uint get_index()          { return index; }
            std::string get_label()   { return label; }
            bool sync_buffer_is_full(){ return sync_buffer_full; }
            bool sync_buffer_is_empty(){ return sync_buffer_empty; }
            bool is_synchronised()    { return synchronised; }
            bool is_silenced()        { return silenced; }

            // Trigger MPI send of sync buffer to master node, or write to disk
            virtual void flush() = 0;

            // Trigger MPI send of random-access buffer queue, or write to disk
            // Have to provide a map from PPIDpairs to dataset indices, so that buffers
            // know where in the output datasets they are supposed to write.
            virtual void RA_flush(const std::map<PPIDpair, ulong>& PPID_to_dsetindex) = 0;

            // // Perform write to disk of sync buffer 
            // virtual void write_to_disk() = 0;            

            // // Perform write to disk of random-access buffer
            // virtual void RA_write_to_disk() = 0;

            // Resets buffer and signals to printer to empty out the contents of the output
            // dataset in preparation of new writing.
            virtual void reset() = 0;

            // Needed to externally inform buffer of a skipped iteration (when no data to write)
            virtual void skip_append() = 0;           

            #ifdef WITH_MPI
            // Probe for a sync buffer MPI message from a process
            virtual bool probe_sync_mpi_message(int) = 0;

            // Probe for a RA buffer MPI message from a process
            virtual bool probe_RA_mpi_message(int) = 0;

            // Retrieve sync buffer data from an MPI message from a known process rank
            // Should only be triggered if a valid message is known to exist to be retrieved!
            virtual void get_sync_mpi_message(int) = 0;
  
            // Retrieve RA buffer data from an MPI message from a known process rank
            // Should only be triggered if a valid message is known to exist to be retrieved!
            virtual void get_RA_mpi_message(int, const std::map<PPIDpair, ulong>&) = 0;
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

  }
}

#endif

