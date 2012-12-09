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
#include <iostream> //to remove when exceptions are sorted out
//#include <exceptions.hpp> 
#include <boost/any.hpp>

namespace gambit { class dict; }

class gambit::dict {

  typedef std::string str;
  typedef boost::any any;
  typedef std::map<str,any> dictmap;

  private:

    dictmap guts;

  public:

    dict() {}
    ~dict() {}

    template<typename Type>
    void set (str key, Type entry) {

      try{
        guts[key] = static_cast<Type>(entry);
      }
      catch(...) {
        //TODO: replace with gambit exception
        std::cout<<"bad cast (set) -- quitting" << std::endl; exit(1);
      }

    }


    template<typename Type>
    Type get (str key) {

      try{
        dictmap::iterator it = guts.find(key);
        if (it == guts.end()) { throw 20; }
        else { return boost::any_cast<Type>(it->second); }
      }
      catch(...) {
        //TODO: replace with proper gambit exception (except that I can't get that to work)
        //using namespace ::gambit::exceptions;
        //GAMBIT_THROW_EXCEPTION(e_configuration << 
        // i_text("dict::get called with wrong type for key "+key));
        std::cout<<"get failed -- quitting" << std::endl; exit(1);
      }

    }

    //TODO: will need to add 
    //  a dump method that spits the contents out to a file
    //  a purge method that cleans out the whole dictionary
    //  a fill method that fills it from a file

};

#endif // defined (__dictionary_hpp__)
