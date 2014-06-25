//Abstract class for accessing general spectrum information.

#ifndef SPECTRUM_H
#define SPECTRUM_H

#include "Phys.hpp"
#include <map>

class Spectrum : public scaledep::RunningPars, public Phys {
public:
   // returns the lightest stable particle (lsp) mass 
   //  gives 3 integers to specify the state 
   // for most general case of a particle type with mass matrix 
   // row and col set to -1 when not needed 
   //(row opmnly is used for vector)
   //particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
   //3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
   // Add more for 
   virtual double get_lsp_mass(int & particle_type, int & row, int & col) const = 0;
   //There may be more than one *new* stable particle
   // this method will tell you how many.
   //If more than zero you probbaly *need* to know what model
   // you are working on, so we don't give all stable particles
   virtual int get_numbers_stable_particles() const = 0;  
   
};

// If we were allowed to use later C++11 compilers we could use template aliases to save some effort, but as
// it is we'll just have to redo these typedefs in the derived classes. Can do this with a macro.
#define REDO_TYPEDEFS(SpecType,PhysType)                                        \
   typedef double(SpecType::*FSptr)(void) const; /* Function pointer signature for FlexiSUSY class member functions with no arguments */ \
   typedef double(SpecType::*FSptr1)(int) const; /* Function pointer signature for FlexiSUSY class member functions with one argument */ \
   typedef double(SpecType::*FSptr2)(int,int) const; /* Function pointer signature for FlexiSUSY class member functions with two arguments */ \
   typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers */ \
   typedef std::map<std::string, FSptr1> fmap1;/*with an index*/ \
   typedef std::map<std::string, FSptr2> fmap2; /*with 2 indices */ \
   /*  typedef std::map<std::pair<std::string,int>,  PhysType::*> pmap1; */
 /* typedef std::map<std::string, double PhysType::*> pmap; map of string to physical struct */ 
   


// Need the templating so that the calls to the FlexiSUSY functions 
//know which FlexiSUSY classes to use
template <class SpecType, class PhysType>
class Spec : public Spectrum
{
   REDO_TYPEDEFS(SpecType,PhysType)
   
   private:
   // Need to implement these two functions in each derived class, 
   //but they are trivial. Maybe there is some way to
   // avoid having to do this step, but I can't think of it just now.
   
   virtual fmap& get_PoleMass_map() const = 0;  
   virtual fmap1& get_PoleMass_map1() const = 0;
   virtual fmap& get_mass4_map() const = 0;  
   virtual fmap1& get_mass4_map1() const = 0;
   virtual fmap2& get_mass4_map2() const = 0;  
   virtual fmap& get_mass3_map() const = 0;  
   virtual fmap1& get_mass3_map1() const = 0;
   virtual fmap2& get_mass3_map2() const = 0;  
   virtual fmap& get_mass2_map() const = 0;  
   virtual fmap1& get_mass2_map1() const = 0;
   virtual fmap2& get_mass2_map2() const = 0;  
   virtual fmap& get_mass_map() const = 0;  
   virtual fmap1& get_mass_map1() const = 0;
   virtual fmap2& get_mass_map2() const = 0;  
   virtual fmap& get_mass0_map() const = 0;  
   virtual fmap1& get_mass0_map1() const = 0;
   virtual fmap2& get_mass0_map2() const = 0;  
   virtual SpecType get_bound_spec() const = 0; 
   virtual PhysType get_bound_phys() const = 0; 
   
public:
   virtual double get_mass4_parameter(std::string) const;
   virtual double get_mass4_parameter(std::string, int i) const;
   virtual double get_mass4_parameter(std::string, int i, int j) const;
   virtual double get_mass3_parameter(std::string) const;
   virtual double get_mass3_parameter(std::string, int i) const;
   virtual double get_mass3_parameter(std::string, int i, int j) const;
   virtual double get_mass2_parameter(std::string) const;
   virtual double get_mass2_parameter(std::string, int i) const;
   virtual double get_mass2_parameter(std::string, int i, int j) const;
   virtual double get_mass_parameter(std::string) const;
   virtual double get_mass_parameter(std::string, int i) const;
   virtual double get_mass_parameter(std::string, int i, int j) const;
   virtual double get_dimensionless_parameter(std::string) const;
   virtual double get_dimensionless_parameter(std::string, int i) const;
   virtual double get_dimensionless_parameter(std::string, int i, int j) const;

   virtual double get_Pole_Mass(std::string) const;
   virtual double get_Pole_Mass(std::string, int) const;
   

};


// Have to re-write these two functions for each derived class, so that reference to the correct member variables is retrieved.
// Need these functions though so that the original definition of get_mass2_par can be re-used.
// Maybe do this with another macro...
#define REDEFINE_TRIVIAL_MEMBER_FUNCTIONS(ClassName,SpecType,PhysType) \
  SpecType       ClassName::get_bound_spec() const {return model;} \
  PhysType ClassName::get_bound_phys() const {return model.get_physical();} \
  ClassName::fmap& ClassName::get_mass4_map() const {return mass4_map;} \
  ClassName::fmap  ClassName::mass4_map(ClassName::fill_mass4_map()); \
  ClassName::fmap1& ClassName::get_mass4_map1() const {return mass4_map1;} \
  ClassName::fmap2& ClassName::get_mass4_map2() const {return mass4_map2;} \
  ClassName::fmap1  ClassName::mass4_map1(ClassName::fill_mass4_map1()); \
  ClassName::fmap2  ClassName::mass4_map2(ClassName::fill_mass4_map2()); \
  ClassName::fmap& ClassName::get_mass3_map() const {return mass3_map;} \
  ClassName::fmap  ClassName::mass3_map(ClassName::fill_mass3_map()); \
  ClassName::fmap1& ClassName::get_mass3_map1() const {return mass3_map1;} \
  ClassName::fmap2& ClassName::get_mass3_map2() const {return mass3_map2;} \
  ClassName::fmap1  ClassName::mass3_map1(ClassName::fill_mass3_map1()); \
  ClassName::fmap2  ClassName::mass3_map2(ClassName::fill_mass3_map2()); \
  ClassName::fmap& ClassName::get_mass2_map() const {return mass2_map;} \
  ClassName::fmap  ClassName::mass2_map(ClassName::fill_mass2_map()); \
  ClassName::fmap1& ClassName::get_mass2_map1() const {return mass2_map1;} \
  ClassName::fmap2& ClassName::get_mass2_map2() const {return mass2_map2;} \
  ClassName::fmap1  ClassName::mass2_map1(ClassName::fill_mass2_map1()); \
  ClassName::fmap2  ClassName::mass2_map2(ClassName::fill_mass2_map2()); \
  ClassName::fmap& ClassName::get_mass_map() const {return mass_map;} \
  ClassName::fmap  ClassName::mass_map(ClassName::fill_mass_map()); \
  ClassName::fmap1& ClassName::get_mass_map1() const {return mass_map1;} \
  ClassName::fmap2& ClassName::get_mass_map2() const {return mass_map2;} \
  ClassName::fmap1  ClassName::mass_map1(ClassName::fill_mass_map1()); \
  ClassName::fmap2  ClassName::mass_map2(ClassName::fill_mass_map2()); \
  ClassName::fmap& ClassName::get_mass0_map() const {return mass0_map;} \
  ClassName::fmap  ClassName::mass0_map(ClassName::fill_mass0_map()); \
  ClassName::fmap1& ClassName::get_mass0_map1() const {return mass0_map1;} \
  ClassName::fmap2& ClassName::get_mass0_map2() const {return mass0_map2;} \
  ClassName::fmap1  ClassName::mass0_map1(ClassName::fill_mass0_map1()); \
  ClassName::fmap2  ClassName::mass0_map2(ClassName::fill_mass0_map2()); \
  ClassName::fmap& ClassName::get_PoleMass_map() const {return PoleMass_map;} \
  ClassName::fmap  ClassName::PoleMass_map(ClassName::fill_PoleMass_map()); \
  ClassName::fmap1& ClassName::get_PoleMass_map1() const {return PoleMass_map1;} \
  ClassName::fmap1 ClassName::PoleMass_map1(ClassName::fill_PoleMass_map1()); \
  
// Should now never have to override this I think


template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass4_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap& mass4map(get_mass4_map()); // Get correct map for whatever class this is
   typename fmap::iterator it = mass4map.find(mass); // Find desired FlexiSUSY function

   if( it==mass4map.end() )
   {
      std::cout << "No mass4 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass4_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap1& mass4map(get_mass4_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = mass4map.find(mass); // Find desired FlexiSUSY function
   if( it==mass4map.end() )
   {
      std::cout << "No mass4 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second;
       return (spec.*f)(i);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass4_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap2& mass4map(get_mass4_map2()); // Get correct map for whatever class this is
   typename fmap2::iterator it = mass4map.find(mass); // Find desired FlexiSUSY function
   if( it==mass4map.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second;
       return (spec.*f)(i,j);
   }
}



template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass3_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap& mass3map(get_mass3_map()); // Get correct map for whatever class this is
   typename fmap::iterator it = mass3map.find(mass); // Find desired FlexiSUSY function

   if( it==mass3map.end() )
   {
      std::cout << "No mass3 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass3_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap1& mass3map(get_mass3_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = mass3map.find(mass); // Find desired FlexiSUSY function
   if( it==mass3map.end() )
   {
      std::cout << "No mass3 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second;
       return (spec.*f)(i);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass3_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap2& mass3map(get_mass3_map2()); // Get correct map for whatever class this is
   typename fmap2::iterator it = mass3map.find(mass); // Find desired FlexiSUSY function
   if( it==mass3map.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second;
       return (spec.*f)(i,j);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass2_parameter(std::string mass) const
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

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass2_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap1& mass2map(get_mass2_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = mass2map.find(mass); // Find desired FlexiSUSY function
   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second;
       return (spec.*f)(i);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass2_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap2& mass2map(get_mass2_map2()); // Get correct map for whatever class this is
   typename fmap2::iterator it = mass2map.find(mass); // Find desired FlexiSUSY function
   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second;
       return (spec.*f)(i,j);
   }
}

//mass1
template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap& massmap(get_mass_map()); // Get correct map for whatever class this is
   typename fmap::iterator it = massmap.find(mass); // Find desired FlexiSUSY function

   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap1& massmap(get_mass_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = massmap.find(mass); // Find desired FlexiSUSY function
   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second;
       return (spec.*f)(i);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_mass_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap2& massmap(get_mass_map2()); // Get correct map for whatever class this is
   typename fmap2::iterator it = massmap.find(mass); // Find desired FlexiSUSY function
   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second;
       return (spec.*f)(i,j);
   }
}

//mass0
template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_dimensionless_parameter(std::string par) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap& mass0map(get_mass0_map()); // Get correct map for whatever class this is
   typename fmap::iterator it = mass0map.find(par); // Find desired FlexiSUSY function

   if( it==mass0map.end() )
   {
      std::cout << "No mass with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_dimensionless_parameter(std::string par, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap1& mass0map(get_mass0_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = mass0map.find(par); // Find desired FlexiSUSY function
   if( it==mass0map.end() )
   {
      std::cout << "No mass with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second;
       return (spec.*f)(i);
   }
}

template <class SpecType,class PhysType>
double Spec<SpecType,PhysType>::get_dimensionless_parameter(std::string par, int i, int j) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   fmap2& mass0map(get_mass0_map2()); // Get correct map for whatever class this is
   typename fmap2::iterator it = mass0map.find(par); // Find desired FlexiSUSY function
   if( it==mass0map.end() )
   {
      std::cout << "No mass with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second;
       return (spec.*f)(i,j);
   }
}


template <class SpecType, class PhysType>
double Spec<SpecType, PhysType>::get_Pole_Mass(std::string mass) const
{
   //   PhysType phys(get_bound_phys()); // Get correct bound spectrum for whatever class this is
   SpecType spec(get_bound_spec());
   fmap& polemap(get_PoleMass_map()); // Get correct map for whatever class this is
   typename fmap::iterator it = polemap.find(mass); // Find desired FlexiSUSY function

   if( it==polemap.end() )
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


template <class SpecType, class PhysType>
double Spec<SpecType, PhysType>::get_Pole_Mass(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); // Get correct bound spectrum for whatever class this is
   PhysType phys(get_bound_phys());
   fmap1& polemap(get_PoleMass_map1()); // Get correct map for whatever class this is
   typename fmap1::iterator it = polemap.find(mass); // Find desired FlexiSUSY function
   if( it==polemap.end() )
   {
      std::cout << "No Pole Mass with string reference '"<<mass<<"' and index " << i << " exists!" <<std::endl;
      return -1;
   }
   else
   {
       // Get function out of map and call it on the bound flexiSUSY object
      // Eigen::Array<double,6,1> d = it->second;
      FSptr1 f = it->second;
      return (spec.*f)(i);
   }
}

#endif
