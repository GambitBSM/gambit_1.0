/* Just messing around with ideas for the Spectrum class hierarchy for Gambit */

#include <iostream>
#include <string>
#include <map>

class FakeFlexiSUSY
{
   public:
      double get_BMu()  {return 1;}
      double get_mHd2() {return 2;}
      double get_mHu2() {return 3;}
};

// Base interface abstract class
// Declares only stuff the users will actually deal with
class SpecInterface
{
   public:
      virtual double get_mass2_parameter(std::string) const = 0;
};

// If we were allowed to use later C++11 compilers we could use template aliases to save some effort, but as
// it is we'll just have to redo these typedefs in the derived classes. Can do this with a macro.
#define REDO_TYPEDEFS(SpecType) \
   typedef double(SpecType::*FSptr)(void); /* Function pointer signature for FlexiSUSY class member functions */ \
   typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers              */

// Need the templating so that the calls to the FlexiSUSY functions know which FlexiSUSY class to use
template <class SpecType>
class Spec : public SpecInterface
{
   REDO_TYPEDEFS(SpecType)
  
   private:
      // Need to implement these two functions in each derived class, but they are trivial. Maybe there is some way to
      // avoid having to do this step, but I can't think of it just now.
      virtual fmap& get_mass2_map() const = 0;  
      virtual SpecType& get_bound_spec() const = 0; 

   public:
      virtual double get_mass2_parameter(std::string) const;
};

// Have to re-write these two functions for each derived class, so that reference to the correct member variables is retrieved.
// Need these functions though so that the original definition of get_mass2_parameter can be re-used.
// Maybe do this with another macro...
#define REDEFINE_TRIVIAL_MEMBER_FUNCTIONS(ClassName,SpecType) \
  ClassName::fmap& ClassName::get_mass2_map() const {return mass2_map;} \
  SpecType&        ClassName::get_bound_spec() const {return bound_FS_object;} \
  ClassName::fmap  ClassName::mass2_map(ClassName::fill_mass2_map());

// Should now never have to override this I think
template <class SpecType>
double Spec<SpecType>::get_mass2_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap& mass2map(get_mass2_map()); // Get correct map for whatever class this is
   
   typename fmap::iterator it = mass2map.find(mass); // Find desired FlexiSUSY function

   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

// Now hopefully I have reduced the amount of work needed in defining new spectrum classes
class SpecDerived : public Spec<FakeFlexiSUSY>
{
   REDO_TYPEDEFS(FakeFlexiSUSY)

   private:
      FakeFlexiSUSY& bound_FS_object;
      static fmap mass2_map;
      static fmap fill_mass2_map(); 
      fmap& get_mass2_map() const; 
      FakeFlexiSUSY& get_bound_spec() const; 
   
   public:
    
     SpecDerived(FakeFlexiSUSY& FS_model_object); 
};

// Constructor (binds this object to a FlexiSUSY object)
// Possibly this class could just make the FlexiSUSY object in the first place
// Could package the constructor into the macro as well, perhaps
SpecDerived::SpecDerived(FakeFlexiSUSY& FS_model_object) 
  : bound_FS_object(FS_model_object) 
{
}

// Function to initialise mass2_map
SpecDerived::fmap SpecDerived::fill_mass2_map() 
{
   fmap tmp_map;
  
   tmp_map["BMu"] = &FakeFlexiSUSY::get_BMu;
   tmp_map["mHd2"] = &FakeFlexiSUSY::get_mHd2;
   tmp_map["mHu2"] = &FakeFlexiSUSY::get_mHu2;

   return tmp_map;
}

// Use our time-saving macro for the rest...
REDEFINE_TRIVIAL_MEMBER_FUNCTIONS(SpecDerived,FakeFlexiSUSY)

int main(int argc, char **argv)
{
  // Test calling the functions
  FakeFlexiSUSY test_FS_object;
  SpecDerived test_spectrum(test_FS_object);
  SpecInterface* baseptr = &test_spectrum;

  std::cout << baseptr->get_mass2_parameter("BMu")  << std::endl;
  std::cout << baseptr->get_mass2_parameter("mHd2") << std::endl;
  std::cout << baseptr->get_mass2_parameter("mHu2") << std::endl;
  std::cout << baseptr->get_mass2_parameter("blah blah") << std::endl;
}

