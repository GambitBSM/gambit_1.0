//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Class for holding model parameters. Defines the
///  basic container and get/set functions for
///  the model parameters. Originally adapted from
///  SUfit version (the connection is almost gone 
///  now though.)
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Johan Lundberg (SUfit version; model_types.hpp)
///  \date 2011 Jul - Aug
///
///  \author Ben Farmer
///  \date 2013 May, Jun 
///  \date 2014 Aug:  Went through and cut out some 
///                   stuff that seemed unused: removed
///                   the old ModelParametersBase class
///                   that didn't do much; removed the
///                   virtualisation since nothing derives
///                   from this class at the moment; 
///                   incorporated the proper error 
///                   handling system; put class 
///                   definitions into a seperate source file.
///
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///  \date 2014 Jan, Nov
///
///  *********************************************


#include <map>
#include <iostream>
#include <sstream>

#include "gambit/Utils/model_parameters.hpp"

namespace Gambit 
{

   /// ModelParameters class member function definitions
 
   /// Checks if this model container holds a parameter match the supplied name
   void ModelParameters::assert_contains(std::string inkey) const
   {
     if(_values.count(inkey)!=1) 
     { 
       model_error().raise(LOCAL_INFO, "No throwing functor in invalid_point_exception.");
     }
   }

   /// Default constructor
   ModelParameters::ModelParameters(): _values(){}

   /// Constructor using vector of strings
   ModelParameters::ModelParameters(const std::vector<std::string> &paramlist): _values()
   {
     _definePars(paramlist);
   }
   
   /// Constructor using array of char arrays
   ModelParameters::ModelParameters(const char** paramlist): _values()
   {
     _definePars(paramlist);
   }
 
   /// Get value of named parameter 
   double ModelParameters::getValue(std::string const & inkey) const
   {
     assert_contains(inkey);
     return _values.at(inkey);
   }
   
   /// Get values of all parameters
   std::map<std::string, double> ModelParameters::getValues() const
   {
     return _values;
   }
   
   /// Get pointer to map of all parameters 
   ///TODO(Ben) I was going to delete this, but it seems to be used in some macros somewhere. 
   ///          I haven't checked what for, but probably whatever the macros want this pointer
   ///          for can be replaced by a new member function, to maintain better encapsulation.
   const std::map<std::string, double>* ModelParameters::getValuesPtr() const 
   {
     return &_values;
   }

   /// Get number of parameters stored in this object
   int ModelParameters::getNumberOfPars() const
   {
     return _values.size();
   }

   /// Get parameter value using bracket operator
   const double & ModelParameters::operator[](std::string const & inkey) const
   {
     assert_contains(inkey);
     return _values.at(inkey);
   }

   /// Set single parameter value
   void ModelParameters::setValue(std::string const &inkey,double const&value)
   {
     assert_contains(inkey);
     _values[inkey]=value;
   }
  
   /// Set many parameter values using a map
   void ModelParameters::setValues(std::map<std::string,double> const &params_map)
   {
     typedef std::map<std::string,double>::const_iterator it_type;
     for(it_type iterator = params_map.begin();
         iterator != params_map.end(); 
         iterator++)
     {
       // iterator->first = key
       // iterator->second = value
       assert_contains(iterator->first);
       _values[iterator->first]=iterator->second;
       ///TODO Should probably do some extra checks, duplicate keys, all parameters
       // used, etc.
     }
   }
   
   /// Get parameter keys (names), probably for external iteration
   std::vector<std::string> ModelParameters::getKeys() const
   {
     std::vector<std::string> parnames;
     for (std::map<std::string,double>::const_iterator it=_values.begin();it!=_values.end();it++)
     {
       parnames.push_back((*it).first);
     }
     return parnames;
   }

   /// Dump parameter names and values to stdout (should be for debugging only)
   void ModelParameters::print() const
   {
     std::cout << "ModelParameters: Printing: "<<std::endl;
     for (std::map<std::string,double>::const_iterator it=_values.begin();it!=_values.end();it++)
     {
       std::cout << "parameter: " << it->first << "; value: "<<it->second<<std::endl ;
     }
   }

   /// Define a parameter with name, value (i.e. add to internal map). Value is initialised to zero
   void ModelParameters::_definePar(const std::string &newkey)
   {
     _values[newkey]=0.;
   }

   /// Define many new parameters at once via a vector of names
   void ModelParameters::_definePars(const std::vector<std::string> &v)
   {
     for(std::vector<std::string>::const_iterator it = v.begin(); it != v.end(); ++it)
     {
       _definePar(*it);
     }
   }

   /// Define many new parameters at once via an array of char arrays
   void ModelParameters::_definePars(const char** array)
   {
     int i = 0;
     while (array[i] != 0)
     {
       _definePar(array[i]);
       i++;
     }
   }

} //end Gambit namespace
