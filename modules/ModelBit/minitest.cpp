// Miniature test code for ModelBit
// Ben Farmer, May 1 2013

#include "MSSM.hpp"


int main( int argc, const char* argv[] )
{
  // Need to make objects in order to access names and lineage
  gambit::models::CMSSM_base M1;
  gambit::models::CMSSM::P1 M2;
  gambit::models::Gaussian_Halo M3;
  gambit::models::CMSSMandGHALO M4;
  
  // We can also refer to models by pointers of the base class type, which means
  // the rest of the code need not know exactly which class a given model is in
  // order to fiddle with the model objects.
  gambit::models::model_base* p1=&M1;
  gambit::models::model_base* p2=&M2;
  
  //Try this way also:
  gambit::models::model_base &r1=M1;
  gambit::models::model_base &r2=M2;
  
  // (having a sudden thought that maybe we can make more native use of this
  // capability - if a module knows about a parent model type can it just
  // declare the appropriate pointer and use all child models similarly?)
  gambit::models::MSSM* MSSM_child1=&M1;
  gambit::models::MSSM* MSSM_child2=&M2;
  // This would only be useful if there were functions unique to MSSM that
  // model_base had not already declared. Not sure that is the spirit we want.
  
  // Get a pointer to DMHalo model and supermodel too:
  gambit::models::DMHalo_base* Halo_child1=&M3;
  gambit::models::DMHalo_base* Halo_child2=&M4;
  
  //Cannot use a pointer of a non-parent model class!
  //(here M1 is not a descendent of DMHalo_base)
  //gambit::models::DMHalo_base* Halo_child_error=&M1; 
  
  // Can then refer to staticly bound functions if we know the class:
  std::cout<<""<<std::endl;
  std::cout<<"Disclaimer: I may be using the wrong terms for these C++ \
technicalities! If so I am sorry :(."<<std::endl;
  std::cout<<"Retrieving model names and lineages by statically bound get functions..."<<std::endl;
  std::cout<<"M1.getname(): "<<M1.getname()<<std::endl;
  std::cout<<"M1.getlineage(): "<<M1.getlineage()<<std::endl;
  std::cout<<"M2.getname(): "<<M2.getname()<<std::endl;
  std::cout<<"M2.getlineage(): "<<M2.getlineage()<<std::endl;
  
  // Or by using references of the base class type if we don't:
  std::cout<<""<<std::endl;
  std::cout<<"Retrieving model names and lineages by statically bound get \
functions using references of base class type..."<<std::endl;
  std::cout<<"r1.getname(): "<<r1.getname()<<std::endl;
  std::cout<<"r1.getlineage(): "<<r1.getlineage()<<std::endl;
  std::cout<<"r2.getname(): "<<r2.getname()<<std::endl;
  std::cout<<"r2.getlineage(): "<<r2.getlineage()<<std::endl;
 
  // or also by dynamic binding (apologies if these are the wrong C++ 
  // words...)
  std::cout<<""<<std::endl;
  std::cout<<"Retrieving model names and lineages by dynamically bound get \
functions using pointers of base class type..."<<std::endl;
  std::cout<<"p1->getname(): "<<p1->getname()<<std::endl;
  std::cout<<"p1->getlineage(): "<<p1->getlineage()<<std::endl;
  std::cout<<"p2->getname(): "<<p2->getname()<<std::endl;
  std::cout<<"p2->getlineage(): "<<p2->getlineage()<<std::endl;
  std::cout<<"Can also use pointers of any other parent type..."<<std::endl;
  std::cout<<"MSSM_child1->getname(): "<<MSSM_child1->getname()<<std::endl;
  std::cout<<"MSSM_child1->getlineage(): "<<MSSM_child1->getlineage()<<std::endl;
  
  // I think we can also just access the public data members directly with these
  // methods:
  // Edit: ok no we can't, just end up with the base class data members. I have
  // now made the data members 'protected' so that no-one will accidentally try
  // to access them this way.
  /*
  std::cout<<p1->name<<",(p1) "<<p1->lineage<<std::endl;
  std::cout<<p2->name<<",(p2) "<<p2->lineage<<std::endl;
  std::cout<<r1.name<<",(r1) "<<r1.lineage<<std::endl;
  std::cout<<r2.name<<",(r2) "<<r2.lineage<<std::endl;
  */
  
  M2.setValue("M0",1234); 
  p2->setValue("M12",4321);
  p2->setValue("A0",100);
  p2->setValue("tanb",10);
  p2->setValue("sgnmu",1);
  // Need to know the exact model to set parameters like this, so not much
  // help using the generic pointer. Just for demo purposes.

  std::cout<<""<<std::endl;
  std::cout<<"Demonstrating different ways of retrieving parameter values..."<<std::endl;
  std::cout<<"M2 parameters:"<<std::endl;
  std::cout<<"M0    = "<<p2->getValue("M0")<<std::endl;
  std::cout<<"M12   = "<<p2->getValue("M12")<<std::endl;
  std::cout<<"A0    = "<<M2.getValue("A0")<<std::endl;
  std::cout<<"tanb  = "<<M2.getValue("tanb")<<std::endl;
  std::cout<<"sgnmu = "<<M2.getValue("sgnmu")<<std::endl;
  
  // Lets also look at the halo models
  std::cout<<""<<std::endl;
  std::cout<<"Halo model names and lineages..."<<std::endl;
  std::cout<<"Halo_child1->getname(): "<<Halo_child1->getname()<<std::endl;
  std::cout<<"Halo_child1->getlineage(): "<<Halo_child1->getlineage()<<std::endl;
  Halo_child1->setValue("v_earth",300);
  // There is a function to just dump all the parameters to stdout:
  std::cout<<"Dumping Halo_child1 parameters...";
  Halo_child1->print();
  
  // Now the 'supermodel':
  std::cout<<""<<std::endl;
  std::cout<<"\"Super\" model names and lineages..."<<std::endl;
  std::cout<<"Halo_child2->getname(): "<<Halo_child2->getname()<<std::endl;
  std::cout<<"Halo_child2->getlineage(): "<<Halo_child2->getlineage()<<std::endl;
  std::cout<<"Dumping Halo_child2 parameters...";
  Halo_child2->setValue("M12",4321);
  Halo_child2->setValue("A0",100);
  Halo_child2->setValue("v_earth",300);
  Halo_child2->print();
}





