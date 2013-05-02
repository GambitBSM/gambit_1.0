// Miniature test code for ModelBit
// Ben Farmer, May 1 2013

#include "MSSM.hpp"

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

int main( int argc, const char* argv[] )
{
  // Can access names without creating objects
  std::cout<<models::MSSM::name()<<std::endl;
  std::cout<<models::CMSSM_base::name()<<std::endl;
  std::cout<<models::CMSSM::P1::name()<<std::endl;

  // But cannot access lineage. Need to make objects for that
  models::CMSSM_base M1;
  models::CMSSM::P1 M2;
  
  std::cout<<M1.name()<<", "<<M1.lineage()<<std::endl;
  std::cout<<M2.name()<<", "<<M2.lineage()<<std::endl;
  
  M2.setValue("M0",1234);
  M2.setValue("M12",4321);
  M2.setValue("A0",100);
  
  std::cout<<"M0 = "<<M2.getValue("M0")<<std::endl;
  std::cout<<"M12 = "<<M2.getValue("M12")<<std::endl;
  std::cout<<"A0 = "<<M2.getValue("A0")<<std::endl;

}





