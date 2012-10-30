#ifndef GlobalResourceScopeLock_h_
#define GlobalResourceScopeLock_h_ 1

#include <iostream>
#include <stdexcept>
#include <map>
#include "Uncopyable.hh"
#include <string>

namespace sufit {
  class NamedResourceSingleton;
  /*! \brief Lock a global by name
  //
  // Lock a global Resource by name. The lock is held by the object.
  // Give a string to the constructor to get the global lock for that name.
  // The lock is release by the destructor.
  //
  // Atempting to lock the same global resource (same name) more than
  // once a the same time will throw runtime_exception.
  //
  // This can be used in any scope, or for example as a member variable for
  // classes who should not ever have more than one simultaniours instance,
  // and where returning a reference to the existing object (normal singleton)
  // is not safe.
  //
  // For example, interface to fortran/c methods with global/static states.
  // Could also be used to lock access for example to filenames, but
  // care must be taken since many filenames can lead to the same file.
  //
  // \author Johan Lundberg
  // \date July-Aug 2011
  //
  // \code
  // Example use
  class myHandler {
  public:
  myHandler(std::string tmpx) : _lock("fortranCodeX",tmpx){}
  private:
  sufit::GlobalResourceScopeLock _lock;
  };

  myHandler handleA("A");
  myHandler handleB("B");  // will fail. fortranCodeX already used.

  {  // This is fine however:
  myHandler handleA("A");
  }
  myHandler handleB("B");   // fortranCodeX already release at destr of A.
  // \endcode
  //
  */
  class GlobalResourceScopeLock : private Uncopyable{
  private:
    // subclass for singleton setup:

    // private members
    std::string _name;
    std::string _dbg;
  public:
    GlobalResourceScopeLock(std::string name,std::string debugid=std::string());
    ~GlobalResourceScopeLock();
    // get the name of this lock
    std::string getName() const {return _name;};
    // get the string which was optionally passed to the constructor for debug help.
    std::string getDbg() const {return _dbg;};
  };
}

#endif
