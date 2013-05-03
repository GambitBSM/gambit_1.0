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
  // Need to make objects in order to access names and lineage
  gambit::models::CMSSM_base M1;
  gambit::models::CMSSM::P1 M2;
  
  // We can also refer to models by pointers of the base class type, which means
  // the rest of the code need not know exactly which class a given model is in
  // order to fiddle with the model objects.
  gambit::models::model_base* p1=&M1;
  gambit::models::model_base* p2=&M2;
  
  // Can then refer to functions static binding if we know the class:
  std::cout<<M1.name()<<", "<<M1.lineage()<<std::endl;
  std::cout<<M2.name()<<", "<<M2.lineage()<<std::endl;
  
  // or by dynamic binding if we don't (apologies if these are the wrong C++ 
  // words...)
  std::cout<<p1->name()<<", "<<p1->lineage()<<std::endl;
  std::cout<<p2->name()<<", "<<p2->lineage()<<std::endl;
  
  M2.setValue("M0",1234);
  p2->setValue("M12",4321);
  p2->setValue("A0",100);
  
  std::cout<<"M0 = "<<p2->getValue("M0")<<std::endl;
  std::cout<<"M12 = "<<p2->getValue("M12")<<std::endl;
  std::cout<<"A0 = "<<M2.getValue("A0")<<std::endl;

}





