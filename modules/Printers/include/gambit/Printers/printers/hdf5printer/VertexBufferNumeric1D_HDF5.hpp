//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declaration of VertexBufferNumeric1D_HDF5 
///  class. 
///  This version of VertexBufferNumeric1D adds
///  routines for sending the Numeric1D buffers
///  to a DataSetInterface object, which in turn
///  handles the output to a HDF5 file.
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
 
#ifndef __VertexBufferNumeric1D_HDF5_hpp__
#define __VertexBufferNumeric1D_HDF5_hpp__

#include <cstddef>
#include <sstream>

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Printers/VertexBufferNumeric1D.hpp"
#include "gambit/Printers/printers/hdf5printer/DataSetInterfaceScalar.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

#define HDF5_BUF_DEBUG /* Triggers debugging output */
#define MONITOR_BUF "pointID" /* String ID of buffer to monitor. */
 
namespace Gambit {
  
  namespace Printers {
 
      /// VertexBuffer for simple numerical types - derived version that handles output to hdf5
      template<class T, std::size_t CHUNKLENGTH>
      class VertexBufferNumeric1D_HDF5 : public VertexBufferNumeric1D<T,CHUNKLENGTH> 
      {
         private:
           /// Interfaces to HDF5 datasets
           DataSetInterfaceScalar<bool,CHUNKLENGTH> _dsetvalid; // validity bools
           DataSetInterfaceScalar<T,CHUNKLENGTH>    _dsetdata;  // actual data 

           /// Getters for HDF5 dataset interfaces (extra error checking)
           DataSetInterfaceScalar<bool,CHUNKLENGTH>& dsetvalid(); // validity bools
           DataSetInterfaceScalar<T,CHUNKLENGTH>&    dsetdata();  // actual data             

           /// Dimension-0 index of the next empty hyperslab in the output datasets
           unsigned long nextemptyslab = 0;

           /// Variable obtained from somewhere external to the buffer,
           /// used to track the synchronisation position with other buffers
           /// Currently only used to ensure the RA buffers end up the same
           /// size as the sync buffers.
           unsigned long target_sync_pos = 0;

         public:
           /// Constructors
           VertexBufferNumeric1D_HDF5();
           VertexBufferNumeric1D_HDF5(H5FGPtr location, const std::string& name, const int vID, const unsigned int i, bool sync, bool silence
             #ifdef WITH_MPI
             , const BuffTags& tags
             , const GMPI::Comm& pComm
             #endif
             );
      
           /// Destructor
           /// Make sure buffer contents are written to file when buffer object is destroyed
           ~VertexBufferNumeric1D_HDF5();

           /// (virtual for debugging purposes)
           /// Current absolute "write head" position for synchronised buffers
           virtual unsigned long dset_head_pos() { return nextemptyslab + this->get_head_position(); }

           // Print to std::cout a report on the sync status of this buffer
           virtual void sync_report();

           /// Write sync buffer to HDF5 dataset
           virtual void write_to_disk();

           /// Write externally-supplied buffer to HDF5 dataset
           virtual void write_external_to_disk(const T (&values)[CHUNKLENGTH], const bool (&isvalid)[CHUNKLENGTH]);

           /// Reset the output (non-synchronised datasets only)
           virtual void reset();

           /// Send random access write queue to dataset interfaces for writing
           virtual void RA_write_to_disk(const std::map<PPIDpair, ulong>& PPID_to_dsetindex);

           /// Ensure dataset "write head" (i.e. next append) is prepared to
           /// write to the supplied absolute dataset index (e.g. by inserting
           /// blank entries if need)
           void synchronise_output_to_position(const ulong i);
         
      };
 


      /// @{ VertexBufferNumeric1D_HDF5 member function definitions
 
      /// Constructors
      template<class T, std::size_t CHUNKLENGTH>
      VertexBufferNumeric1D_HDF5<T,CHUNKLENGTH>::VertexBufferNumeric1D_HDF5()
        : VertexBufferNumeric1D<T,CHUNKLENGTH>()
        , _dsetvalid()
        , _dsetdata()
      {}

      template<class T, std::size_t CHUNKLENGTH>
      VertexBufferNumeric1D_HDF5<T,CHUNKLENGTH>::VertexBufferNumeric1D_HDF5(H5FGPtr location, const std::string& name, const int vID, const unsigned int i, bool sync, bool silence
        #ifdef WITH_MPI
        , const BuffTags& tags
        , const GMPI::Comm& pComm
        #endif
        )
        : VertexBufferNumeric1D<T,CHUNKLENGTH>(name,vID, i, sync, silence
          #ifdef WITH_MPI
          , tags, pComm
          #endif
          )
        , _dsetvalid()
        , _dsetdata()
      {
        if(location==NULL and this->myRank==0)
        {
           std::ostringstream errmsg;
           errmsg << "rank "<<this->myRank<<": Error! Tried to create buffer '"<<this->get_label()<<"', but supplied HDF5 location pointer was NULL (and we are the rank 0 process, who needs this pointer)";
           printer_error().raise(LOCAL_INFO, errmsg.str()); 
        }
     
        if(not silence and this->myRank==0)
        {
          _dsetvalid = DataSetInterfaceScalar<bool,CHUNKLENGTH>(location, name+"_isvalid");
          _dsetdata  = DataSetInterfaceScalar<T,CHUNKLENGTH>(location, name);
        }
      }
      
      /// Destructor
      template<class T, std::size_t L>
      VertexBufferNumeric1D_HDF5<T,L>::~VertexBufferNumeric1D_HDF5() 
      {
         //TODO: Do this in some more controlled way
         //if(this->is_synchronised()) { write_to_disk(); }
         //else 
         //{ 
         //   RA_write_to_disk(); 
         //}
      }

      // Print out report on buffer sync status       
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::sync_report()
      {
         std::cout<<"rank "<<this->myRank<<":-----------------------------------------"<<std::endl;
         std::cout<<"rank "<<this->myRank<<": Begin sync report for buffer "<<this->get_label()<<std::endl;
         std::cout<<"rank "<<this->myRank<<": Synchronised? = "<<this->is_synchronised()<<std::endl;
         std::cout<<"rank "<<this->myRank<<": nextemptyslab = "<<nextemptyslab<<std::endl;
         std::cout<<"rank "<<this->myRank<<": head_position = "<<this->get_head_position()<<std::endl;
         std::cout<<"rank "<<this->myRank<<": dset_head_pos = "<<this->dset_head_pos()<<std::endl;
         std::cout<<"rank "<<this->myRank<<": donepoint()   = "<<this->donepoint()<<std::endl;
         std::cout<<"rank "<<this->myRank<<": sync_buffer_full() = "<<this->sync_buffer_full<<std::endl;
         std::cout<<"rank "<<this->myRank<<": End sync report for buffer "<<this->get_label()<<std::endl;
         std::cout<<"rank "<<this->myRank<<":-----------------------------------------"<<std::endl;

      }
    
      /// @{ Safe dataset getters
      template<class T, std::size_t L>
      DataSetInterfaceScalar<bool,L>& VertexBufferNumeric1D_HDF5<T,L>::dsetvalid()
      {
        #ifdef WITH_MPI
        if(this->myRank!=0)
        {
            std::ostringstream errmsg;
            errmsg << "rank "<<this->myRank<<": Error! VertexBuffer (HDF5 type) in non-master process tried to access dsetvalid! This doesn't exist except on the master process (buffer is "<<this->get_label()<<")";
            printer_error().raise(LOCAL_INFO, errmsg.str()); 
        }
        #endif 
        return _dsetvalid;
      }

      template<class T, std::size_t L>
      DataSetInterfaceScalar<T,L>& VertexBufferNumeric1D_HDF5<T,L>::dsetdata()
      {
        #ifdef WITH_MPI
        if(this->myRank!=0)
        {
            std::ostringstream errmsg;
            errmsg << "rank "<<this->myRank<<"Error! VertexBuffer (HDF5 type) in non-master process tried to access dsetdata! This doesn't exist except on the master process (buffer is "<<this->get_label()<<")";
            printer_error().raise(LOCAL_INFO, errmsg.str()); 
        }
        #endif 
        return _dsetdata;
      }
      /// @}

      /// Override of buffer dump function to handle HDF5 output
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::write_to_disk()
      {
         if(this->is_synchronised()) {
           // Check if buffer is empty, and whether we really want to write an
           // empty buffer to disk.
           if( not this->sync_buffer_is_empty() or
               this->dset_head_pos() >= dsetvalid().dset_length()
             ) // Should only have to check one of the datasets... perhaps add error checking for this.
           {
             dsetvalid().writenewchunk(this->buffer_valid); 
             dsetdata().writenewchunk(this->buffer_entries);
           }
           // else we shouldn't need to do anything
         }
         else {
            std::ostringstream errmsg;
            errmsg << "rank "<<this->myRank<<": Error! Tried to write_to_disk() synchronised write buffer of buffer with name "<<this->get_label()<<", but buffer is not flagged as running in synchronised mode! Please report this bug.";
            printer_error().raise(LOCAL_INFO, errmsg.str()); 
         }
      }

      /// Manual command to send an arbitrary buffer to be written to disk
      template<class T, std::size_t CHUNKLENGTH>
      void VertexBufferNumeric1D_HDF5<T,CHUNKLENGTH>::write_external_to_disk(const T (&values)[CHUNKLENGTH], const bool (&isvalid)[CHUNKLENGTH])
      {
         if(not this->is_silenced()) {
           dsetvalid().writenewchunk(isvalid); 
           dsetdata().writenewchunk(values);
         }
         // Update sync information to reflect the presence of the new chunk
         nextemptyslab = dsetvalid().get_nextemptyslab();
      }

      /// Reset the output (non-synchronised datasets only)
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::reset() { }

      /// Send random access write queue to dataset interfaces for writing
      template<class T, std::size_t CHUNKLENGTH>
      void VertexBufferNumeric1D_HDF5<T,CHUNKLENGTH>::RA_write_to_disk(const std::map<PPIDpair, ulong>& PPID_to_dsetindex)
      {
         if(not this->is_silenced()) 
         {
            dsetvalid().extend_dset(target_sync_pos);
            dsetdata().extend_dset(target_sync_pos);
            if (this->RA_queue_length!=0) 
            {
               bool valid[CHUNKLENGTH];
      
               /// Make sure RA datasets are at least the same length as the sync datasets
               #ifdef DEBUG_MODE
               std::cout<<"rank "<<this->myRank<<": Doing RA_write_to_disk for buffer '"<<this->get_label()<<"' (note: target_sync_pos="<<target_sync_pos<<", dset_head_pos()="<<this->dset_head_pos()<<")"<<std::endl;
               #endif 

               /// Use the provided PPIDpair-->dset_location map to locate the target
               /// parameter points in the output dataset. 
               hsize_t abs_write_locations[CHUNKLENGTH];
               for(ulong i=0; i<this->RA_queue_length; i++)
               {
                 abs_write_locations[i] = PPID_to_dsetindex.at(this->RA_write_locations[i]);
               }               

               std::fill_n(valid, this->RA_queue_length, true); 
               dsetvalid().RA_write(valid,               abs_write_locations,this->RA_queue_length); 
               dsetdata().RA_write (this->RA_write_queue,abs_write_locations,this->RA_queue_length);
            }
         }
      }

      /// Ensure dataset "write head" (i.e. next append) is prepared to
      /// write to the supplied absolute dataset index (e.g. by inserting
      /// blank entries if need)
      ///
      /// NEW MEANING:
      /// Ensure that the supplied index has been written to, and that the
      /// next append will happen to the next index above it.
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::synchronise_output_to_position(const ulong i)
      {
         if(not this->is_silenced()) 
         {
            if(this->is_synchronised()) 
            {
               #ifdef HDF5_BUF_DEBUG
               #ifdef MONITOR_BUF
               if(this->get_label()==MONITOR_BUF) {
               #endif
               std::cout<<"rank "<<this->myRank<<": Synchronising buffer '"<<this->get_label()<<"' to position "<<i<<" (current dset_head_pos() = "<<this->dset_head_pos()<<")"<<std::endl;
               #ifdef MONITOR_BUF
               }
               #endif
               #endif 

               // Only the master process keeps track of the actual dataset
               // position. Other processes work at the buffer level only.
               if(this->myRank==0) 
               {
                 if(dsetvalid().get_nextemptyslab() != dsetdata().get_nextemptyslab())
                 {
                   // The two datasets controlled by this buffer should always remain synchronised!
                   std::ostringstream errmsg;
                   errmsg << "rank "<<this->myRank<<": Error! Validity and Data datasets have gone out of sync in buffer with label '"<<this->get_label()<<"'! This is a bug in the VertexBufferNumeric1D_HDF5 class. Please report it.";
                   printer_error().raise(LOCAL_INFO, errmsg.str()); 
                 }
                 nextemptyslab = dsetvalid().get_nextemptyslab();
               }

               // Compare target position to current sync position and see what we need to do
               // The minus one is because the head_pos should be one larger than the sync_pos
               // for buffers who already did an append to the sync_pos; these buffers therefore
               // do not need to move.
               const long movediff = i - (this->dset_head_pos()-1);
               if(movediff==1)             
               {
                   // Set the current point as having no valid data and move to the next
                   this->skip_append();    
               } 
               else if(movediff<0)
               {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<this->myRank<<": Error! Attempted to move HDF5 write position backwards in buffer with label '"<<this->get_label()<<"'! (movediff ("<<movediff<<") = i ("<<i<<") - (dset_head_pos() ("<<this->dset_head_pos()<<")-1)) This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it. (Note, writing to old points can be done but requires using special write functions).";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
               } 
               else if (movediff==0)
               {
                 if(this->donepoint())
                 {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<this->myRank<<": Error! Attempted to move HDF5 write position by 0 slots in buffer with label '"<<this->get_label()<<"' (movediff ("<<movediff<<") = i ("<<i<<") - (dset_head_pos ("<<this->dset_head_pos()<<")-1)); this part is fine, however the buffer indicates that this position has already received a write (donepoint()==true) so it should have moved forward! This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it.";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                 }
                 // otherwise no problem; carry on.
               }
               else if (movediff>1) // and movediff!=CHUNKLENGTH+1) 
               {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<this->myRank<<": Error! Attempted to move HDF5 write position by >1 slots ("<<movediff<<") in buffer with label '"<<this->get_label()<<"' (movediff ("<<movediff<<") = i ("<<i<<") - (dset_head_pos() ("<<this->dset_head_pos()<<")-1)). Buffer synchronisation should only happen one slot at a time. This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it.";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
               }

               #ifdef HDF5_BUF_DEBUG
               #ifdef MONITOR_BUF
               if(this->get_label()==MONITOR_BUF) {
               #endif
               long slots_left = L;
               slots_left -= this->get_head_position() - this->donepoint();
               std::cout<<"rank "<<this->myRank<<": Moved "<<movediff<<" slot(s). # unwritten slots left in buffer = "<<slots_left<<". buffer_is_full = "<<this->sync_buffer_is_full()<<std::endl;         
               std::cout<<"rank "<<this->myRank<<":   Buffer length:"<<L<<std::endl;
               std::cout<<"rank "<<this->myRank<<":   head_position:"<<this->get_head_position()<<std::endl;	 
               std::cout<<"rank "<<this->myRank<<":   donepoint()  :"<<this->donepoint()<<std::endl;		
	
               #ifdef MONITOR_BUF
               }
               #endif
               #endif 
            }
            // Update the variable which tracks the current sync position.
            // (do this regardless of whether this is a sync buffer or not)
            target_sync_pos = i;
         }
      }
 
      /// @} 
  }
}

#endif

