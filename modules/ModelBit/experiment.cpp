/* Experiment in recursively adding stuff to a vector which is passed down to
child classes to modify and pass on to their children in turn
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

struct vehicle {
   virtual std::vector<str>& lineage() const { 
      static std::vector<str> lin;
      lin.assign(1,"vehicle");
      return lin; 
   }
};
struct aircraft : vehicle {
   typedef vehicle base;
   virtual std::vector<str>& lineage() const {
      static std::vector<str> lin;
      lin = base::lineage();
      lin.push_back("aircraft");
      return lin;
   }
};

struct biplane : aircraft {
   typedef aircraft base;
   virtual std::vector<str>& lineage() const {
      static std::vector<str> lin;
      lin = base::lineage();
      lin.push_back("biplane");
      return lin;
   }
};

/*
struct nieuport17 : biplane {
   typedef biplane base;
   virtual std::vector<str> lineage() const { return base::lineage() + "--nieuport17"; }
};
*/
int main() {
   biplane b;
   aircraft const & a = b;
   std::cout << a.lineage() << std::endl;
}
