//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Poor-man (C++) version of a Python dictionary 
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Dec 8 2012 
//
//  *********************************************

#ifndef __dictionary_hpp__
#define __dictionary_hpp__

#include <map>
#include <string>
#include <iostream>
#include <exceptions.hpp> 
#include <boost/any.hpp>

namespace gambit { class dict; }

class gambit::dict {

  // Local shorthand for different types
  typedef std::string str;
  typedef boost::any any;
  typedef std::map<str,any> dictmap;
  typedef gambit::exceptions::e_configuration gerr;
  typedef gambit::exceptions::i_text gerr_txt;
  
  private:

    // The guts of this class is just a private string-to-any map
    dictmap guts;

    // Declare exception objects and functions
    gerr error;         	
    inline gerr_txt missing (str key) {
      return gerr_txt("key \""+key+"\" is not in the dictionary " 
      "that you are trying to get it from."); }
    inline gerr_txt bad_type_set (str key) {
      return gerr_txt("actual value being added to dictionary is" 
      "not convertible to requested type given for key \""+key+"\"."); }
    inline gerr_txt bad_type_get (str key) {
      return gerr_txt("type requested for key \""+key+"\" " 
      "in dictionary does not match type of actual value."); }

  public:

    // Nothing in the constructor or destructor for now
    dict() {}
    ~dict() {}


    //  A purge method that cleans out the whole dictionary
    void purge () { guts.clear(); } // no, Greg


    // Method for adding a key-value pair to the dictionary
    template<typename Type>
    void set (str key, Type entry) {

      // Attempt to add the new entry with the requested type
      try{
        try{ guts[key] = static_cast<Type>(entry); }
        // Catch the error if the cast to requested type is not possible
        catch(std::bad_cast& bc) { GAMBIT_THROW_EXCEPTION(error << bad_type_set(key)); }
      }
 
      // Deal with the error
      catch(gerr e) {
        std::cout<<std::endl;
        std::cout<<"Error: "<<gambit::exceptions::get_exception_text(e)<<std::endl;
        std::cout<<"Origin: "<<gambit::exceptions::get_exception_origin(e)<<std::endl;
        std::cout<<"Quitting..."<<std::endl<<std::endl;
        exit(0);
      }

    }


    // Method for retrieveing a key-value pair from the dictionary
    template<typename Type>
    Type get (str key) {

      // Attempt to retrieve the value using the key
      try{

        try{

          // Check that the key is in the dictionary
          dictmap::iterator it = guts.find(key);

          // If the key is missing, raise an exception  
          if (it == guts.end()) { GAMBIT_THROW_EXCEPTION(error << missing(key)); }
          // Otherwise, cast the value back to its original type and return it
          else { return boost::any_cast<Type>(it->second); }

        }

        // Raise an exception if the user asked for a different type to the one the value was saved as
        catch(std::bad_cast& bc) { GAMBIT_THROW_EXCEPTION(error << bad_type_get(key)); }

      }

      // Catch exception [this should later be replaced by a generic app-wide
      // catch and call to e.what() when the exceptions class is fixed up]
      catch(gerr e) {
        std::cout<<std::endl;
        std::cout<<"Error: "<<gambit::exceptions::get_exception_text(e)<<std::endl;
        std::cout<<"Origin: "<<gambit::exceptions::get_exception_origin(e)<<std::endl;
        std::cout<<"Quitting..."<<std::endl<<std::endl;
        exit(0);
      }

    }

    //TODO: will need to add 
    //  a dump method that spits the contents out to a file (so the scanner can use this to dump a point)
    //  a fill method that fills it from a file (to allow post-processing)

};

#endif // defined (__dictionary_hpp__)
