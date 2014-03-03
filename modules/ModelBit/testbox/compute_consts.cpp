//  This is just some test code for figuring out how to correctly generate 
//  consts for derivied classes at compile time

#include <iostream>
#include <string>
#include <vector>
#include "util_types.hpp"

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

// Function to help initialise our static member vectors. Returns a copy of
// the vector with the string argument appended.
std::vector<str> vecappend(const std::vector<str>& basevec,const str newentry)
  {
    std::vector<str> newvec(basevec);
    newvec.push_back(newentry);
    std::cout<<"in vecappend:"<<newvec<<std::endl;
    return newvec;
  }
// Similar to above; joins two vectors and returns the result
std::vector<str> vecjoin(const std::vector<str>& bv1, 
                         const std::vector<str>& bv2) 
  {
    std::vector<str> newvec;
    newvec.reserve( bv1.size() + bv2.size() );
    newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
    newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
    //std::cout<<"in vecjoin:"<<newvec<<std::endl;
    return newvec;
  }

class model_base
  {
  public:
    // Returns (copy of the string containing) the name of the model
    virtual str getname() const 
    { 
      return name;
    };
    
    // Returns (copy of) the lineage vector of the model
    virtual std::vector<str> getlineage() const 
    { 
      return lineage;
    };
    
  //protected:
    static const str name;
    static const std::vector<str> lineage;
  };

//Initialise the name and lineage data members
const str model_base::name("base_model");
const std::vector<str> model_base::lineage(1,"base_model");
//(The internet claims that that above initialisations should be in a 
//source file, not a header, but surely it is ok if the header has include
//protection macros so that it only "really" gets included once?)

//Non macro test of deriving from this class
class test1 : public model_base
  {
  public:
    // Have to redefine these methods even though they appear to be exactly the
    // same as the parent methods, because otherwise they will retrieve the 
    // const data members of the parent!
    //
    // Returns (copy of the string containing) the name of the model
    virtual str getname() const 
    { 
      return name;
    };
    
    // Returns (copy of) the lineage vector of the model
    virtual std::vector<str> getlineage() const 
    { 
      return lineage;
    };
  //protected:
    static const str name;
    static const std::vector<str> lineage;
  };
/*Now initialise the name and lineage data members*/
const str test1::name = "test1";
const std::vector<str> test1::lineage = vecappend(model_base::lineage,"test1");

//Non macro test of second child
class test2 : public model_base
  {
  public:
    // Returns (copy of the string containing) the name of the model
    virtual str getname() const 
    { 
      return name;
    };
    
    // Returns (copy of) the lineage vector of the model
    virtual std::vector<str> getlineage() const 
    { 
      return lineage;
    };
//protected:
    static const str name;
    static const std::vector<str> lineage;
  };
/*Now initialise the name and lineage data members*/
const str test2::name = "test2";
const std::vector<str> test2::lineage = vecappend(model_base::lineage,"test2");

//Non macro test of second layer of inheritance
class test1C1 : public test1
  {
  public:
    // Returns (copy of the string containing) the name of the model
    virtual str getname() const 
    { 
      return name;
    };
    
    // Returns (copy of) the lineage vector of the model
    virtual std::vector<str> getlineage() const 
    { 
      return lineage;
    };
//protected:
    static const str name;
    static const std::vector<str> lineage;
  };
/*Now initialise the name and lineage data members*/
const str test1C1::name = "test1C1";
const std::vector<str> test1C1::lineage(vecappend(test1::lineage,"test1C1"));


int main( int argc, const char* argv[] )
{
  model_base M0;
  test1      M1;
  test2      M2;
  test1C1    M1C1;
  
  // We can also refer to models by pointers of the base class type, which means
  // the rest of the code need not know exactly which class a given model is in
  // order to fiddle with the model objects.
  model_base* p0=&M0;
  model_base* p1=&M1;
  model_base* p2=&M2;
  model_base* p3=&M1C1;
  
  //Can use references of the base type also
  model_base &r0=M0;
  model_base &r1=M1;
  model_base &r2=M2;
  model_base &r3=M1C1;

  //Test retrieving names and lineages directly (won't work if we make them
  //protected or private data members)
  std::cout<<M0.name<<",(M0) "<<M0.lineage<<std::endl;
  std::cout<<M1.name<<",(M1) "<<M1.lineage<<std::endl;
  std::cout<<M2.name<<",(M2) "<<M2.lineage<<std::endl;
  std::cout<<M1C1.name<<",(M1C1) "<<M1C1.lineage<<std::endl;
  
  //Test retrieving names and lineages by 'get' method
  std::cout<<M0.getname()<<",(M0) "<<M0.getlineage()<<std::endl;
  std::cout<<M1.getname()<<",(M1) "<<M1.getlineage()<<std::endl;
  std::cout<<M2.getname()<<",(M2) "<<M2.getlineage()<<std::endl;
  std::cout<<M1C1.getname()<<",(M1C1) "<<M1C1.getlineage()<<std::endl;
  
  //Test retrieving names and lineages via pointers and references
  // by references:
  std::cout<<r0.getname()<<",(r0) "<<r0.getlineage()<<std::endl;
  std::cout<<r1.getname()<<",(r1) "<<r1.getlineage()<<std::endl;
  std::cout<<r2.getname()<<",(r2) "<<r2.getlineage()<<std::endl;
  std::cout<<r3.getname()<<",(r3) "<<r3.getlineage()<<std::endl;
  // by pointers:
  std::cout<<p0->getname()<<",(p0) "<<p0->getlineage()<<std::endl;
  std::cout<<p1->getname()<<",(p1) "<<p1->getlineage()<<std::endl;
  std::cout<<p2->getname()<<",(p2) "<<p2->getlineage()<<std::endl;
  std::cout<<p3->getname()<<",(p3) "<<p3->getlineage()<<std::endl;
}


