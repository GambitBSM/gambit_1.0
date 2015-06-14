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

#define DISABLED_FOR_NOW

#define MPI_DEBUG
   
namespace Gambit {
  
  namespace Printers {
 
      /// VertexBuffer for simple numerical types - derived version that handles output to hdf5
      template<class T, std::size_t CHUNKLENGTH>
      class VertexBufferNumeric1D_HDF5 : public VertexBufferNumeric1D<T,CHUNKLENGTH> 
      {
         private:
           /// Interfaces to HDF5 datasets
           DataSetInterfaceScalar<bool,CHUNKLENGTH> dsetvalid; // validity bools
           DataSetInterfaceScalar<T,CHUNKLENGTH>    dsetdata;  // actual data 

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
           virtual void RA_write_to_disk();

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
        , dsetvalid()
        , dsetdata()
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
      template<class T, std::size_t L>
      VertexBufferNumeric1D_HDF5<T,L>::~VertexBufferNumeric1D_HDF5() 
      {
         if(this->is_synchronised()) { write_to_disk(); }
         else { RA_write_to_disk(); }
      }

      /// Override of buffer dump function to handle HDF5 output
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::write_to_disk()
      {
         if(this->is_synchronised()) {
           dsetvalid.writenewchunk(this->buffer_valid); 
           dsetdata.writenewchunk(this->buffer_entries);
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
           dsetvalid.writenewchunk(isvalid); 
           dsetdata.writenewchunk(values);
         }
      }

      /// Reset the output (non-synchronised datasets only)
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::reset() { }

      /// Send random access write queue to dataset interfaces for writing
      template<class T, std::size_t CHUNKLENGTH>
      void VertexBufferNumeric1D_HDF5<T,CHUNKLENGTH>::RA_write_to_disk()
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
      template<class T, std::size_t L>
      void VertexBufferNumeric1D_HDF5<T,L>::synchronise_output_to_position(const ulong i)
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
 
      /// @} 
  }
}

#endif

