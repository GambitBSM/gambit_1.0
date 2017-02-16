//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions for certain baseprinter functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2017 Feb
///
///  *********************************************

// Gambit
#include "gambit/Printers/baseprinter.hpp"

// Boost
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
//#include <boost/preprocessor/punctuation/comma_if.hpp>

// Code!
namespace Gambit
{
  namespace Printers
  {

     /// Specialisations of type ID getters
     #define GETTYPEID(r,data,i,elem) \
     template<> \
     constexpr std::size_t getTypeID<elem>(void) {return i;}
 
     BOOST_PP_SEQ_FOR_EACH_I(GETTYPEID, _, PRINTABLE_TYPES)
     #undef GETTYPEID

     /// For debugging; print to stdout all the typeIDs for all types.
     void printAllTypeIDs(void)
     {
        std::cout << "Types known to getTypeID<T>() function:" << std::endl;
        #define PRINTTYPEID(r,data,elem) \
          std::cout << "  Type: " << STRINGIFY(elem) << ", TypeID: " << getTypeID<elem>() << std::endl;
        BOOST_PP_SEQ_FOR_EACH(PRINTTYPEID, _, PRINTABLE_TYPES)
        #undef PRINTTYPEID
     }

     /// Retrieve and directly print data to new output
     bool BaseReader::retrieve_and_print(const std::string& label, BaseBasePrinter& printer, const uint rank, const ulong pointID)
     {
        /// First need to get the type data for 'label', then call appropriate retrieve and print functions.
        /// I think there is no choice but to do this with a big switch.
        /// Also need to check if the type matches what the printer expects, and decide what to do in case
        /// of mismatch.
        bool valid = false; // Switch to true if value is successfully retrieved for this point
        switch( get_type(label) ) 
        {
           #define TYPE_CASES(r,data,elem) \
           case getTypeID<elem>(): \
           { \
               elem buffer; \
               valid = retrieve(buffer, label, rank, pointID); \
               if(valid) \
               { \
                  printer.print(buffer, label, rank, pointID); \
               } \
               break; \
           }
           BOOST_PP_SEQ_FOR_EACH(TYPE_CASES, _, PRINTABLE_TYPES)
           #undef TYPE_CASES
           default:
           {
             std::ostringstream err;                               
             err << "Did not recognise retrieved type for data label '"<<label<<"'! This may indicate a bug in the Reader class you are using, please report it."; 
             printer_error().raise(LOCAL_INFO,err.str());         
             break;
           }
        }
        return valid;
     }

  }
}
