//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  HDF5 interface printer class declaration
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


#ifndef __hdf5printer_hpp__
#define __hdf5printer_hpp__

// Standard libraries
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iomanip>

// Gambit
#include "gambit/Printers/baseprinter.hpp"
#include "gambit/Utils/yaml_options.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {

    /// Helper function to check if a VertexBuffer key already exists in a map
    template<class T, class U>
    void error_if_key_exists(const std::map<T,U>& m, const T& key, std::string& tag)
    {
       std::map<T,U>::const_iterator it = m.find(key);
       if ( it == m.end() ) {
          return;
       }
       else {
          std::ostringsteam errmsg;
          errmsg << "Error! Supplied key for a VertexBuffer already exists in map (tag="<<tag<<")! This is a bug in the HDF5Printer class, please report it.";
          printer_error().raise(LOCAL_INFO, errmsg);
       }
    }


    /// Keeps track of vertex buffers local to a print function 
    template<class BuffType>
    class H5P_LocalBufferManager
    {
      private:
        // Buffers local to a print function. Access whichever ones match the IDcode.
        std::map<VBIDpair, BuffType> local_buffers;

        // HDF5 file location at which to write datasets
        H5FGPtr location;

        // Reference to "parent" HDF5Printer object
        HDF5Printer& printer;

        /// Flag to check if a print function has been run before
        // (map is from IDcodes to flags)
        std::map<VBIDpair,bool> first_print;

      public:
        /// Constructor
        H5P_LocalBufferManager(HDF5Printer& p, ) 
          : printer(p), location(l) 
        {}  

        /// Retrieve a buffer for an IDcode/auxilliary-index pair
        BuffType get_buffer(const int vertexID, const uint aux_i, std::string& label) 
        {
           VBIDpair key = std::make_pair(vertexID,aux_i);
           std::map<VBIDpair, BuffType>::iterator it = local_buffers.find(key);
           if( it == local_buffers.end() ) 
           {
              // No buffer (should) exists for this output stream yet, so make one
              error_if_key_exists(local_buffers, key, "local_buffers");
              local_buffers[key] = BuffType(location,label/*deconstruct?*/,IDcode);

              // Get the new buffer back out of the map
              it = local_buffers.find(key);

              // Add a pointer to the new buffer to the full list as well
              printers.add_buffer( &(it->second) );
           }
           return it->second; 
        }
     
    }


    /// The main printer class for output to HDF5 format    
    class HDF5Printer : public BasePrinter
    {
      // Buffer managers need access to the all_buffers map
      friend class H5P_LocalBufferManager;
   
      public:
        // pointID / process number pair
        // Used to identify a single parameter space point
        typedef std::pair<ulong,uint> PPIDpair;
    
        // vertexID / sub-print index pair
        // Identifies individual buffers (I call them VertexBuffer, but actually there can be more than one per vertex) 
        typedef std::pair<int,uint> VBIDpair;
 
        // Type of the global buffer map
        typedef std::map<VBIDpair, VertexBufferBase*> BaseBufferMap;

        /// Constructor (for construction via inifile options)
        HDF5Printer(const Options&);

        /// Auxilliary mode constructor (for construction in scanner plugins)
        HDF5Printer(const Options&, std::string&, bool global=0);

        /// Tasks common to the various constructors
        //void common_constructor();

        /// Destructor
        // Overload the base class virtual destructor
        ~HDF5Printer();
 
        /// Virtual function overloads:
        ///@{

        // Initialisation function
        // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
        void initialise(const std::vector<int>&);
        void flush();
        void reset();
        int getRank();

        ///@}
     
        /// @{ HDF5Printer-specific functions

        /// Add a pointer to a new buffer to the global list
        void insert_buffer(VBIDpair& key, VertexBufferBase& newbuffer)
        {
           error_if_key_exists(all_buffers, key, "all_buffers");
           all_buffers[key] = &newbuffer;
        }

        /// Add PPIDpair to global index list
        void add_PPID_to_list(const PPIDpair&);

        /// Function to ensure buffers are all synchronised to the same absolute position
        void synchronise_buffers();
 
        /// Check whether printing to a new parameter space point is about to occur
        // and perform adjustments needed to prepare the printer.
        void check_for_new_point(const ulong);
 
        /// Function used by print functions to retrieve their local buffer manager object
        template<class BuffType>
        H5P_LocalBufferManager<BuffType>& get_mybuffermanager();

        /// @}

        // PRINT FUNCTIONS
        //----------------------------
        // Need to define one of these for every type we want to print!
        // Could use macros again to generate identical print functions 
        // for all types that have a << operator already defined.

        /// List the types for which print functions are defined
        #define HDF5_PRINTABLE_TYPES \
          (bool)                     \
          (int)(uint)(long)(ulong)   \
          (float)(double)            \
          (std::vector<bool>)        \
          (std::vector<int>)         \
          (std::vector<double>)      \
          (ModelParameters)  

        #define DECLARE_PRINT(r,data,i,ELEM) \
          void print(ELEM const& value, const std::string& label, const int IDcode, const int rank, const ulong pointID); \
                                                                              \
          /* As well as the print function, we need to declare its helper 
             object, and the getter specialisation which retrieves it.
             Note: this object may not get used if 'value' is converted to
             a different type. */                                             \
          H5P_LocalBufferManager<ELEM> CAT(hdf5_printfunc_localbufferman_,i); \
                                                                              \
          template<>                                                          \
          H5P_LocalBufferManager<ELEM>& get_mybuffermanager<ELEM>(pointID, mpirank) \
          {                                                                   \
            /* While we are at it, check if the buffers need to be 
               synchronised to a new point */                                 \
            check_for_new_point(pointID, mpirank);                            \
                                                                              \
            return CAT(hdf5_printfunc_localbufferman_,i)                      \
          }

        #define DECLARE_PRINT_FUNCTIONS(TYPES) BOOST_PP_SEQ_FOR_EACH_I(DECLARE_PRINT, _, TYPES)
        DECLARE_PRINT_FUNCTIONS(HDF5_PRINTABLE_TYPES)       

        /// Helper print functions
        // Used to reduce repetition in definitions of virtual function overloads 
        // (useful since there is no automatic type conversion possible)
        template<class T>
        void template_print(T const& value, const std::string& label, const int IDcode, const uint mpirank, const ulong pointID)
        {
           // Define what output format will be used for this type (by choosing an appropriate buffer type)  
           typedef VertexBufferNumeric1D_HDF5<T,BUFFERLENGTH> BuffType;
          
           // Retrieve the buffer manager for buffers with this type
           typedef H5P_LocalBufferManager<BuffType> BuffMan;
           BuffMan& buffer_manager = get_mybuffermanager<BuffType>(pointID,mpirank);

           // Extract a buffer from the manager corresponding to this 
           BuffMan::BuffType& selected_buffer = get_buffer(IDcode, 0, label); 

           // Write the data to the selected buffer ("just works" for simple numeric types)
           selected_buffer.append(value);
        }


      private:
        // Pointers to HDF5 file and group objects containing the datasets
        H5FilePtr fileptr;
        H5GroupPtr groupptr;

        // Pointer to a location in a HDF5 to which the datasets will be written
        // i.e. a file or a group.
        H5FGPtr location;

        static const std::size_t BUFFERLENGTH = 10; // Change to 10000 or something. Currently cannot change this dynamically though, sorry.

        /// Map containing pointers to all VertexBuffers
        // Note: Each buffer contains a bool to indicate whether it has done an "append" for the point "lastPointID"
        BaseBufferMap all_buffers;

        /// Map recording which model point this process is working on
        // Need this so that we can compute when (at least initial) writing to a model point has ceased
        // Key: rank; Value: last pointID sent by that rank.
        ulong lastPointID;

        /// Current absolute dataset index
        // i.e. this location in the output dataset is currently the target of print functions
        ulong current_dset_position; 

        /// Map from pointID,thread pairs to absolute dataset indices
        //  Needed for dataset writes which return to old points.
        std::map<PPIDpair, ulong> global_index_lookup; 

        // Matching vector for the above, for reverse lookup
        std::vector<PPIDpair> reverse_global_index_lookup;

       /// Output file
        std::string output_file;

        /// Info file (describes contents of output file, i.e. contents of columns)
        std::string info_file;

        /// Main output file stream
        std::ofstream my_fstream;
        /// "Info file" output stream
        std::ofstream info_fstream;

        /// MPI rank (currently not hooked up to MPI, just hardcoded to 0)
        int myRank;

        /// Number of digits of precision to use in output columns
        int precision;
 
        /// Full buffer of output to be printed
        // Key is <int rank, int pointID>; value is a Record (for a single model point)
        //std::map<std::pair<int,int>,Record> buffer;  
        Buffer buffer; 

        /// Flag to trigger "global" print mode. 
        // In this mode, the output file will be *overwritten* when reset() is 
        // called. Use this for printing information global to the scan (i.e. 
        // via auxilliary printers in ScannerBit)
        bool global;

        /// Label for printer, mostly for more helpful error messages
        std::string printer_name;
    };

    // Register printer so it can be constructed via inifile instructions
    // First argument is string label for inifile access, second is class from which to construct printer
    LOAD_PRINTER(hdf5, HDF5Printer)
     
  } // end namespace Printers
} // end namespace Gambit

#endif //ifndef __hdf5printer_hpp__
