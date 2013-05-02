/* Repetition of experiment.cpp, this time using a macro to create child classes
*/


#include <string>
#include <iostream>
#include <vector>

typedef std::string str;

// Overloading << operator to make printing vectors easier.
template < class Type >
inline std::ostream& operator << (std::ostream& os, const std::vector<Type>& v) 
{
    // Compiler complained that I did not have this typename thing, but I don't
    // really understand what it does. 
    os << "[";
    for (typename std::vector<Type>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        os << " " << *ii;
    }
    os << " ]";
    return os;
}

// Macro to build new child classes of the type in experiment.cpp
#define STR_VALUE(ARG)  #ARG
#define NEW_CHILD(NAME,PARENT)                                                 \
  struct NAME : PARENT {                                                       \
    typedef PARENT base;                                                       \
    virtual std::vector<str>& lineage() const {                                \
      static std::vector<str> lin;                                             \
      lin = base::lineage();                                                   \
      lin.push_back(STR_VALUE(NAME));                                          \
      return lin;                                                              \
    }                                                                          \
  };                                                                           \

// Base class to kick off the recursion
struct vehicle {
   virtual std::vector<str>& lineage() const { 
      static std::vector<str> lin;
      lin.assign(1,"vehicle");
      return lin; 
   }
};

NEW_CHILD(aircraft,vehicle)
NEW_CHILD(biplane,aircraft)
NEW_CHILD(nieuport17,biplane)
NEW_CHILD(car,vehicle)

int main() {
   aircraft a;
   biplane b;
   car c;
   std::cout << a.lineage() << std::endl;
   std::cout << b.lineage() << std::endl;
   std::cout << c.lineage() << std::endl;
}
