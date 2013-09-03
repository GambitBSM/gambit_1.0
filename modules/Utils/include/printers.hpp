//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functor "print" functions header file
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 July 
///
///  *********************************************


#ifndef __printers_hpp__
#define __printers_hpp__

#include <map>
#include <vector>
#include <ModelParameters.hpp>
#include <sstream>

namespace Gambit
{
  /// Functor print function templates and specialisations
  ///
  /// These are here because we can't specialise class member functions without
  /// explicitly specialising the class. The functor print member function thus
  /// redirects here (for module functors only, currently).

  namespace printers 
  {
    //
    // Printers to ostream
    //
    
    /// Default "no specialisation or overload found" print message 
    template <typename T>
    inline void ostream(std::ostream& os, const T& value)
    {
      os << "Warning! No definition for stream print function for functors ";
      os << "with contents of type "<< typeid(T).name();
    }
    
    /// doubles
    template <>
    inline void ostream(std::ostream& os, const double& value)
    {
      os << value;
    }
    
    /// ints
    template <>
    inline void ostream(std::ostream& os, const int& value)
    {
      os << value;
    } 
    
    /// ModelParameters
    template <>
    inline void ostream(std::ostream& os, const ModelParameters& value)
    {
      std::map<std::string, double> parameter_map = value.getValues();
      typedef std::map<std::string, double>::iterator map_it;
      os << "[";
      for (map_it it = parameter_map.begin(); it != parameter_map.end(); it++)
      {
        os << it->first <<":"<< it->second << ", ";
      }
      os << "\b\b]";
    }
    
    /// std::map
    /*
    template <typename T>
    inline void ostream(std::ostream& os, const ModelParameters& value)
    {
      std::map<std::string, double> parameter_map = value.getValues();
      typedef std::map<std::string, double>::iterator map_it;
      os << "[";
      for (map_it it = parameter_map.begin(); it != parameter_map.end(); it++)
      {
        os << it->first <<":"<< it->second << ", ";
      }
      os << "\b\b]";
    }
    */
    
    /// std::vector
    template <typename T>
    inline void ostream(std::ostream& os, const std::vector<T>& value)
    {
      os << "[";
      for (typename std::vector<T>::const_iterator it = value.begin(); 
                                           it != value.end(); it++)
      {
        os << *it << ", ";
      }
      os << "\b\b]";
    }
    
    //
    // Printers to hdf5
    //

    ///// Default "no specialisation or overload found" print message 
    //template <typename T>
    //inline void hdf5(hdf5api::groupInterface , const T& value)
    //{
    //  os << "Warning! No definition for stream print function for functors ";
    //  os << "with contents of type "<< typeid(T).name();
    //}
    //
    ///// doubles
    //template <>
    //inline void hdf5(std::ostream& os, const double& value)
    //{
    //  os << value;
    //}
        
  }
}

#endif //ifndef __printers_hpp__
