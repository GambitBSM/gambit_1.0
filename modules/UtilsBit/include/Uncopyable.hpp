#ifndef gambit_Uncopyable_h_
#define gambit_Uncopyable_h_ 1

namespace gambit {
  /*! \brief Class used to copy-protect classes
  //
  // Good for handlers, etc.
  // (from item 6, Effective C++. Scott Meyers, isbn 978-0-321-33487-9 )
  //
  // \author Scott Meyers, added by Johan Lundberg
  // \date July 2011
  */
  class Uncopyable {
  protected:
    Uncopyable(){}  // allow construction
    ~Uncopyable(){} // and destruction of derived objects
  private:
    Uncopyable(const Uncopyable&);            // prevent copy
    Uncopyable& operator=(const Uncopyable&); // prevent copy constructor
  };
}

#endif
