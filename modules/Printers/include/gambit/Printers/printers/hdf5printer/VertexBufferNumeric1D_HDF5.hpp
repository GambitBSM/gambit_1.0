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

//#define DEBUG_MODE
   
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

           /// Current absolute "write head" position for synchronised buffers
           ulong dset_sync_pos = 0;

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
           errmsg << "Error! Tried to create buffer '"<<this->get_label()<<"', but supplied HDF5 location pointer was NULL (and we are the rank 0 process, who needs this pointer)";
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
               dset_sync_pos >= dsetvalid().dset_length()
             ) // Should only have to check one of the datasets... perhaps add error checking for this.
           {
             dsetvalid().writenewchunk(this->buffer_valid); 
             dsetdata().writenewchunk(this->buffer_entries);
           }
           // else we shouldn't need to do anything
         }
         else {
            std::ostringstream errmsg;
            errmsg << "Error! Tried to write_to_disk() synchronised write buffer of buffer with name "<<this->get_label()<<", but buffer is not flagged as running in synchronised mode! Please report this bug.";
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
         dset_sync_pos = dsetvalid().get_nextemptyslab();
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
            dsetvalid().extend_dset(dset_sync_pos);
            dsetdata().extend_dset(dset_sync_pos);
            if (this->RA_queue_length!=0) 
            {
               bool valid[CHUNKLENGTH];
      
               /// Make sure RA datasets are at least the same length as the sync datasets
               #ifdef DEBUG_MODE
               std::cout<<"Doing RA_write_to_disk for buffer '"<<this->get_label()<<"' (note: dset_sync_pos="<<dset_sync_pos<<")"<<std::endl;
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
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::synchronise_output_to_position(const ulong i)
      {
         if(not this->is_silenced()) 
         {
            if(this->is_synchronised()) 
            {
               #ifdef DEBUG_MODE
               std::cout<<"Synchronising buffer '"<<this->get_label()<<"' to position "<<i<<std::endl;
               #endif 

               ulong nextemptyslab = 0;
              
               // Only the master process keeps track of the actual dataset
               // position. Other processes work at the buffer level only.
               if(this->myRank==0) 
               {
                 if(dsetvalid().get_nextemptyslab() != dsetdata().get_nextemptyslab())
                 {
                   // The two datasets controlled by this buffer should always remain synchronised!
                   std::ostringstream errmsg;
                   errmsg << "Error! Validity and Data datasets have gone out of sync in buffer with label '"<<this->get_label()<<"'! This is a bug in the VertexBufferNumeric1D_HDF5 class. Please report it.";
                   printer_error().raise(LOCAL_INFO, errmsg.str()); 
                 }
                 nextemptyslab = dsetvalid().get_nextemptyslab();
               }
               // dataset position is the "next slab" index plus the buffer index
               const ulong dset_pos = nextemptyslab + this->get_nextempty();

               // Compare this to the move position and see what we need to do
               const long movediff = i - dset_pos;
               if(movediff==1)             
               {
                   // Set the current point as having no valid data and move to the next
                   this->skip_append();    
               } 
               else if(movediff<0)
               {
                   std::ostringstream errmsg;
                   errmsg << "Error! Attempted to move HDF5 write position backwards in buffer with label '"<<this->get_label()<<"'! (movediff ("<<movediff<<") = i ("<<i<<") - dset_pos ("<<dset_pos<<")) This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it. (Note, writing to old points can be done but requires using special write functions).";
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
               else if (movediff>1) // and movediff!=CHUNKLENGTH+1) 
               {
                   std::ostringstream errmsg;
                   errmsg << "Error! Attempted to move HDF5 write position by >1 slots ("<<movediff<<") in buffer with label '"<<this->get_label()<<"'. Buffer synchronisation should only happen one slot at a time. This is a bug in the VertexBufferNumeric1D_HDF5 class or in a class which uses it (probably HDF5Printer). Please report it.";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
               }
            }
            // Update the variable which tracks the current sync position.
            // (do this regardless of whether this is a sync buffer or not)
            dset_sync_pos = i;
         }
      }
 
      /// @} 
  }
}

#endif

