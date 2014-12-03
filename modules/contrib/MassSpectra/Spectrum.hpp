//Abstract class for accessing general spectrum information.

#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <map>

namespace Gambit {

/// Helper function for checking if indices are valid
inline bool within_bounds(const int i, const std::set<int> allowed)
{
  return ( allowed.find(i) != allowed.end() );
}

class Spectrum {
template<class T> friend class RunparDer; // To allow access to 'get_index_offset'
template<class T> friend class PhysDer;
public:
   /// Dump out spectrum information to slha (not including input parameters etc. just at the moment...)
   virtual void dump2slha(const std::string&) const = 0;

protected:
   /// Get integer offset convention used by internal model class (needed by getters which take indices) 
   virtual int get_index_offset() const = 0;

private:
   class RunningPars {
   protected:
      /// Needed for access to parent object member functions
      virtual Spectrum& get_parent() const = 0;
   public:
      /// run object to a particular scale
      virtual void RunToScale(double scale) = 0;
      /// returns the renormalisation scale of parameters
      virtual double GetScale() const = 0;
      /// Sets the renormalisation scale of parameters 
      /// somewhat dangerous to allow this but may be needed
      virtual void SetScale(double scale) = 0;
      /// return data member matching string
      virtual double get_tree_MassEigenstate(std::string) const = 0;
      virtual double get_tree_MassEigenstate(std::string, int) const = 0;
      virtual double get_tree_MassEigenstate(std::string, int, int) const = 0;
      virtual double get_tree_Mixing_angle(std::string) const = 0;
      virtual double get_tree_Mixing_element(std::string, int, int) const = 0;

      virtual double get_mass4_par(std::string) const = 0;
      virtual double get_mass4_par(std::string, int) const = 0;
      virtual double get_mass4_par(std::string, int, int) const = 0;
      virtual double get_mass3_par(std::string) const = 0;
      virtual double get_mass3_par(std::string, int) const = 0;
      virtual double get_mass3_par(std::string, int, int) const = 0;
      virtual double get_mass2_par(std::string) const = 0;
      virtual double get_mass2_par(std::string, int) const = 0;
      virtual double get_mass2_par(std::string, int, int) const = 0;
      virtual double get_mass_par(std::string) const = 0;
      virtual double get_mass_par(std::string, int) const = 0;
      virtual double get_mass_par(std::string, int, int) const = 0;
      virtual double get_dimensionless_par(std::string) const = 0;
      virtual double get_dimensionless_par(std::string, int) const = 0;
      virtual double get_dimensionless_par(std::string, int, int) const = 0;
   
      /// alternative getter using map
      virtual double get_mass4_parameter(std::string) const = 0;
      virtual double get_mass4_parameter(std::string, int) const = 0;
      virtual double get_mass4_parameter(std::string, int, int) const = 0;
      virtual double get_mass3_parameter(std::string) const = 0;
      virtual double get_mass3_parameter(std::string, int) const = 0;
      virtual double get_mass3_parameter(std::string, int, int) const = 0;
      virtual double get_mass2_parameter(std::string) const = 0;
      virtual double get_mass2_parameter(std::string, int i) const = 0;
      virtual double get_mass2_parameter(std::string, int i, int j) const = 0;
      virtual double get_mass_parameter(std::string) const = 0;
      virtual double get_mass_parameter(std::string, int) const = 0;
      virtual double get_mass_parameter(std::string, int, int) const = 0;
      virtual double get_dimensionless_parameter(std::string) const = 0;
      virtual double get_dimensionless_parameter(std::string, int) const = 0;
      virtual double get_dimensionless_parameter(std::string, int, int) const = 0;
 };

   class Phys {
   protected:
      /// Needed for access to parent object member functions
      virtual Spectrum& get_parent() const = 0;
   public:
      /// this get uses dumbest possible approach of if-else statements
      virtual double get_MPole(std::string) const = 0;
      virtual double get_MPole(std::string, int) const = 0;
      virtual double get_MPole(std::string, int, int) const = 0;
      virtual double get_Mixing_angle(std::string) const = 0;
      virtual double get_Mixing_element(std::string, int, int) const = 0;
      
      /// map based getters
      virtual double get_Pole_Mass(std::string) const = 0;
      virtual double get_Pole_Mass(std::string, int) const = 0;
      virtual double get_Pole_Mixing(std::string) const = 0;
      virtual double get_Pole_Mixing(std::string, int) const = 0;
      virtual double get_Pole_Mixing(std::string, int, int) const = 0;

};

protected:
   /// Constructor
   Spectrum(RunningPars& rp, Phys& p) : phys(p), runningpars(rp) {}

public:
   Phys& phys;
   RunningPars& runningpars;
   ///  returns the lightest stable particle (lsp) mass 
   ///   gives 3 integers to specify the state 
   ///  for most general case of a particle type with mass matrix 
   ///  row and col set to -1 when not needed 
   /// (row opmnly is used for vector)
   /// particle_type = 0 (neutralino), 1(Sneutrino), 2(up squark), 
   /// 3(down squarks), 4(charged slepton), 5(Chargino), 6(gluino)
   ///  Add more for 
   virtual double get_lsp_mass(int & particle_type, int & row, int & col) const = 0;
   /// There may be more than one *new* stable particle
   ///  this method will tell you how many.
   /// If more than zero you probbaly *need* to know what model
   ///  you are working on, so we don't give all stable particles
   virtual int get_numbers_stable_particles() const = 0;  
   
};

/// Structs to hold function pointers and valid index sets
template <class Fptr>
struct FcnInfo1
{
    Fptr fptr; 
    std::set<int> iset1;   
    FcnInfo1() {}
    FcnInfo1(Fptr p, std::set<int> s)
      : fptr(p)
      , iset1(s)
    {}
    //FcnInfo1(const FcnInfo1 &f)
    //  : fptr(f.fptr)
    //  , iset1(f.iset1)
    //{}
    //FcnInfo1& operator=(const FcnInfo1& f)
    //{     
    //  fptr = f.fptr;
    //  iset1 = f.iset1;
    //}
};

template <class Fptr>
struct FcnInfo2
{
    Fptr fptr; 
    std::set<int> iset1;   
    std::set<int> iset2;
    FcnInfo2() {}
    FcnInfo2(Fptr p, std::set<int> s1, std::set<int> s2)
      : fptr(p)
      , iset1(s1)
      , iset2(s2)
    {}
    // FcnInfo2(const FcnInfo2 &f)
    //   : fptr(f.fptr)
    //   , iset1(f.iset1)
    //   , iset2(f.iset2)
    // {}
    //FcnInfo2& operator=(const FcnInfo2& f)
    //{     
    //  fptr = f.fptr;
    //  iset1 = f.iset1;
    //  iset2 = f.iset2;
    //}
};

///  If we were allowed to use later C++11 compilers we could use template aliases to save some effort, but as
///  it is we'll just have to redo these typedefs in the derived classes. Can do this with a macro.
#define REDO_TYPEDEFS(SpecType) \
   typedef double(SpecType::*FSptr)(void) const; /* Function pointer signature for FlexiSUSY class member functions with no arguments */ \
   typedef double(SpecType::*FSptr1)(int) const; /* Function pointer signature for FlexiSUSY class member functions with one argument */ \
   typedef double(SpecType::*FSptr2)(int,int) const; /* Function pointer signature for FlexiSUSY class member functions with two arguments */ \
   \
   typedef FcnInfo1<FSptr1> FInfo1; \
   typedef FcnInfo2<FSptr2> FInfo2; \
   \
   typedef std::map<std::string, FSptr> fmap; /* Typedef for map of strings to function pointers */ \
   typedef std::map<std::string, FInfo1> fmap1;/*with an index*/ \
   typedef std::map<std::string, FInfo2> fmap2; /*with 2 indices */ \
   
//forward declaration

template <class SpecType>
   class PhysDer : public Spectrum::Phys {
      REDO_TYPEDEFS(SpecType)
   private:      
      virtual fmap& get_PoleMass_map() const = 0;  
      virtual fmap1& get_PoleMass_map1() const = 0;
      virtual fmap& get_PoleMixing_map() const = 0;  
      virtual fmap1& get_PoleMixing_map1() const = 0;
      virtual fmap2& get_PoleMixing_map2() const = 0;
      virtual SpecType get_bound_spec() const = 0;
   public: 
      virtual double get_Pole_Mass(std::string) const;
      virtual double get_Pole_Mass(std::string, int) const;
      virtual double get_Pole_Mixing(std::string) const;
      virtual double get_Pole_Mixing(std::string, int) const;
      virtual double get_Pole_Mixing(std::string, int, int) const;
   };
   template <class SpecType>
   class RunparDer : public Spectrum::RunningPars {
      REDO_TYPEDEFS(SpecType)
   private:
      virtual SpecType get_bound_spec() const = 0;
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
   };


template<class SpecType>
double RunparDer<SpecType>::get_mass4_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); /// Get correct bound spectrum for whatever class this is
   fmap& mass4map(get_mass4_map()); /// Get correct map for whatever class this is
   typename fmap::iterator it = mass4map.find(mass); ///  Find desired FlexiSUSY function

   if( it==mass4map.end() )
   {
      std::cout << "No mass4 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double RunparDer<SpecType>::get_mass4_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap1& mass4map(get_mass4_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = mass4map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass4map.end() )
   {
      std::cout << "No mass4 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for mass4 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass4_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap2& mass4map(get_mass4_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = mass4map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass4map.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for mass4 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for mass4 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }

      ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}



template <class SpecType>
double RunparDer<SpecType>::get_mass3_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap& mass3map(get_mass3_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = mass3map.find(mass); ///  Find desired FlexiSUSY function

   if( it==mass3map.end() )
   {
      std::cout << "No mass3 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double RunparDer<SpecType>::get_mass3_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap1& mass3map(get_mass3_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = mass3map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass3map.end() )
   {
      std::cout << "No mass3 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
        /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for mass3 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass3_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap2& mass3map(get_mass3_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = mass3map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass3map.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
        /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
      /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for mass3 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for mass3 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass2_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap& mass2map(get_mass2_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = mass2map.find(mass); ///  Find desired FlexiSUSY function

   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass2_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap1& mass2map(get_mass2_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = mass2map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for mass2 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass2_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap2& mass2map(get_mass2_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = mass2map.find(mass); ///  Find desired FlexiSUSY function
   if( it==mass2map.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for mass2 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for mass2 with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}

/// mass1
template <class SpecType>
double  RunparDer<SpecType>::get_mass_parameter(std::string mass) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap& massmap(get_mass_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = massmap.find(mass); ///  Find desired FlexiSUSY function

   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass_parameter(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap1& massmap(get_mass_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = massmap.find(mass); ///  Find desired FlexiSUSY function
   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for mass with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_mass_parameter(std::string mass, int i, int j) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap2& massmap(get_mass_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = massmap.find(mass); ///  Find desired FlexiSUSY function
   if( it==massmap.end() )
   {
      std::cout << "No mass with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for mass with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for mass with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}

/// mass0
template <class SpecType>
double  RunparDer<SpecType>::get_dimensionless_parameter(std::string par) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap& mass0map(get_mass0_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = mass0map.find(par); ///  Find desired FlexiSUSY function

   if( it==mass0map.end() )
   {
      std::cout << "No mass with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_dimensionless_parameter(std::string par, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap1& mass0map(get_mass0_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = mass0map.find(par); ///  Find desired FlexiSUSY function
   if( it==mass0map.end() )
   {
      std::cout << "No dimensionless parameter with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for dimensionless parameter with string reference '"<<par<<"'!" <<std::endl;
          return -1;
       }
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}

template <class SpecType>
double  RunparDer<SpecType>::get_dimensionless_parameter(std::string par, int i, int j) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   fmap2& mass0map(get_mass0_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = mass0map.find(par); ///  Find desired FlexiSUSY function
   if( it==mass0map.end() )
   {
      std::cout << "No dimensionless parameter with string reference '"<<par<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for dimensionless parameter with string reference '"<<par<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for dimensionless parameter with string reference '"<<par<<"'!" <<std::endl;
          return -1;
       }

       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}


template <class SpecType>
double PhysDer <SpecType>::get_Pole_Mass(std::string mass) const
{
   ///    PhysType phys(get_bound_phys()); ///  Get correct bound spectrum for whatever class this is
   SpecType spec(get_bound_spec());
   fmap& polemap(get_PoleMass_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = polemap.find(mass); ///  Find desired FlexiSUSY function

   if( it==polemap.end() )
   {
      std::cout << "No mass2 with string reference '"<<mass<<"' exists!" <<std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}


template <class SpecType>
double  PhysDer<SpecType>::get_Pole_Mass(std::string mass, int i) const
{
   SpecType spec(get_bound_spec()); ///  Get correct bound spectrum for whatever class this is
   //   PhysType phys(get_bound_phys());
   fmap1& polemap(get_PoleMass_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = polemap.find(mass); ///  Find desired FlexiSUSY function
   if( it==polemap.end() )
   {
      std::cout << "No Pole Mass with string reference '"<<mass<<"' and index " << i << " exists!" <<std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for Pole Mass with string reference '"<<mass<<"'!" <<std::endl;
          return -1;
       }
      ///  Get function out of map and call it on the bound flexiSUSY object
      ///  Eigen::Array<double,6,1> d = it->second;
      FSptr1 f = it->second.fptr;
      return (spec.*f)(io);
   }
}


template <class SpecType>
double PhysDer <SpecType>::get_Pole_Mixing(std::string mixing) const
{
   ///    PhysType phys(get_bound_phys()); ///  Get correct bound spectrum for whatever class this is
   SpecType spec(get_bound_spec());
   fmap& polemap(get_PoleMixing_map()); ///  Get correct map for whatever class this is
   typename fmap::iterator it = polemap.find(mixing); ///  Find desired FlexiSUSY function

   if( it==polemap.end() )
   {
      std::cout << "No mass2 with string reference '"
                << mixing << "' exists!" << std::endl;
      return -1;
   }
   else
   {
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr f = it->second;
       return (spec.*f)();
   }
}

template <class SpecType>
double PhysDer <SpecType>::get_Pole_Mixing(std::string mixing, int i) const
{
   ///    PhysType phys(get_bound_phys()); ///  Get correct bound spectrum for whatever class this is
   SpecType spec(get_bound_spec());
   fmap1& polemap(get_PoleMixing_map1()); ///  Get correct map for whatever class this is
   typename fmap1::iterator it = polemap.find(mixing); ///  Find desired FlexiSUSY function

   if( it==polemap.end() )
   {
      std::cout << "No Pole Mixing with string reference '"
                << mixing << "' exists!" << std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "Index "<<i<<" out of bounds for Pole Mixing with string reference '"<<mixing<<"'!" <<std::endl;
          return -1;
       }
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr1 f = it->second.fptr;
       return (spec.*f)(io);
   }
}
template <class SpecType>
double PhysDer <SpecType>::get_Pole_Mixing(std::string mixing, 
                                                     int i, int j) const
{
   ///    PhysType phys(get_bound_phys()); ///  Get correct bound spectrum for whatever class this is
   SpecType spec(get_bound_spec());
   fmap2& polemap(get_PoleMixing_map2()); ///  Get correct map for whatever class this is
   typename fmap2::iterator it = polemap.find(mixing); ///  Find desired FlexiSUSY function

   if( it==polemap.end() )
   {
      std::cout << "No Pole Mixing with string reference '"
                << mixing << "' exists!" << std::endl;
      return -1;
   }
   else
   {
       /// Switch index convention
       int offset = get_parent().get_index_offset();
       int io = i + offset;
       int jo = j + offset;
       /// Check that index is in the permitted set
       if( not within_bounds(io, it->second.iset1) )
       {
          std::cout << "First index ("<<i<<") out of bounds for Pole Mixing with string reference '"<<mixing<<"'!" <<std::endl;
          return -1;
       }
       /// Check that index is in the permitted set
       if( not within_bounds(jo, it->second.iset2) )
       {
          std::cout << "Second index ("<<j<<") out of bounds for Pole Mixing with string reference '"<<mixing<<"'!" <<std::endl;
          return -1;
       }
 
       ///  Get function out of map and call it on the bound flexiSUSY object
       FSptr2 f = it->second.fptr;
       return (spec.*f)(io,jo);
   }
}


///  Need the templating so that the calls to the FlexiSUSY functions 
/// know which FlexiSUSY classes to use
template <class S>
class Spec : public Spectrum
{
private: 
   /// Internal instances of the derived inner classes
   RunparDer<S>& myrunpar;
   PhysDer<S>& myphys;
public: 
   Spec(RunparDer<S> &rp, PhysDer<S> &pp) : 
      myrunpar(rp), 
      myphys(pp),
      Spectrum(rp,pp)
   {}
   virtual S get_bound_spec() const = 0; 
   //virtual P get_bound_phys() const = 0; 
};


///  Have to re-write these two functions for each derived class, so that reference to the correct member variables is retrieved.
///  Need these functions though so that the original definition of get_mass2_par can be re-used.
///  Maybe do this with another macro...
#define MODEL_SPEC_MEMBER_FUNCTIONS(ClassName,SpecType) \
  SpecType       ClassName::get_bound_spec() const {return model;} \
  /*PhysType ClassName::get_bound_phys() const {return model.get_physical();} */\


#define MODEL_RUNNING_MEMBER_FUNCTIONS(ClassName) \
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

#define MODEL_PHYS_MEMBER_FUNCTIONS(ClassName) \
  ClassName::fmap& ClassName::get_PoleMass_map() const {return PoleMass_map;} \
  ClassName::fmap  ClassName::PoleMass_map(ClassName::fill_PoleMass_map()); \
  ClassName::fmap1& ClassName::get_PoleMass_map1() const {return PoleMass_map1;} \
  ClassName::fmap1 ClassName::PoleMass_map1(ClassName::fill_PoleMass_map1()); \
  ClassName::fmap& ClassName::get_PoleMixing_map() const {return PoleMixing_map;} \
  ClassName::fmap  ClassName::PoleMixing_map(ClassName::fill_PoleMixing_map()); \
  ClassName::fmap1& ClassName::get_PoleMixing_map1() const {return PoleMixing_map1;} \
  ClassName::fmap1 ClassName::PoleMixing_map1(ClassName::fill_PoleMixing_map1()); \
  ClassName::fmap2& ClassName::get_PoleMixing_map2() const {return PoleMixing_map2;} \
  ClassName::fmap2 ClassName::PoleMixing_map2(ClassName::fill_PoleMixing_map2()); \

// Versions of the above for template classes
#define MODEL_SPEC_TEMPLATE_MEMBER_FUNCTIONS(ClassName) \
  template <class M> M  ClassName<M>::get_bound_spec() const {return model;} \
  /*template <class M,class MP> MP ClassName<M,MP>::get_bound_phys() const {return model.get_physical();} */\

#define MODEL_RUNNING_TEMPLATE_MEMBER_FUNCTIONS(ClassName) \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass4_map() const {return mass4_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::mass4_map(ClassName<M>::fill_mass4_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_mass4_map1() const {return mass4_map1;} \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_mass4_map2() const {return mass4_map2;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::mass4_map1(ClassName<M>::fill_mass4_map1()); \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::mass4_map2(ClassName<M>::fill_mass4_map2()); \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass3_map() const {return mass3_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::mass3_map(ClassName<M>::fill_mass3_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_mass3_map1() const {return mass3_map1;} \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_mass3_map2() const {return mass3_map2;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::mass3_map1(ClassName<M>::fill_mass3_map1()); \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::mass3_map2(ClassName<M>::fill_mass3_map2()); \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass2_map() const {return mass2_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::mass2_map(ClassName<M>::fill_mass2_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_mass2_map1() const {return mass2_map1;} \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_mass2_map2() const {return mass2_map2;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::mass2_map1(ClassName<M>::fill_mass2_map1()); \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::mass2_map2(ClassName<M>::fill_mass2_map2()); \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass_map() const {return mass_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::mass_map(ClassName<M>::fill_mass_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_mass_map1() const {return mass_map1;} \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_mass_map2() const {return mass_map2;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::mass_map1(ClassName<M>::fill_mass_map1()); \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::mass_map2(ClassName<M>::fill_mass_map2()); \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_mass0_map() const {return mass0_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::mass0_map(ClassName<M>::fill_mass0_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_mass0_map1() const {return mass0_map1;} \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_mass0_map2() const {return mass0_map2;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::mass0_map1(ClassName<M>::fill_mass0_map1()); \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::mass0_map2(ClassName<M>::fill_mass0_map2()); \

#define MODEL_PHYS_TEMPLATE_MEMBER_FUNCTIONS(ClassName) \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::PoleMass_map(ClassName<M>::fill_PoleMass_map()); \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::PoleMass_map1(ClassName<M>::fill_PoleMass_map1()); \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_PoleMass_map() const {return PoleMass_map;} \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_PoleMass_map1() const {return PoleMass_map1;} \
  template <class M> typename ClassName<M>::fmap&  ClassName<M>::get_PoleMixing_map() const {return PoleMixing_map;} \
  template <class M> typename ClassName<M>::fmap   ClassName<M>::PoleMixing_map(ClassName<M>::fill_PoleMixing_map()); \
  template <class M> typename ClassName<M>::fmap1& ClassName<M>::get_PoleMixing_map1() const {return PoleMixing_map1;} \
  template <class M> typename ClassName<M>::fmap1  ClassName<M>::PoleMixing_map1(ClassName<M>::fill_PoleMixing_map1()); \
  template <class M> typename ClassName<M>::fmap2& ClassName<M>::get_PoleMixing_map2() const {return PoleMixing_map2;} \
  template <class M> typename ClassName<M>::fmap2  ClassName<M>::PoleMixing_map2(ClassName<M>::fill_PoleMixing_map2()); \

// Need alternate versions of the above for defining these functions inside the class definition. Just has all the namespace qualifications removed. 
// EDIT: I don't need these anymore but they might be useful...

#define INNER_MODEL_SPEC_MEMBER_FUNCTIONS(SpecType) \
  SpecType get_bound_spec() const {return model;} \
  /*PhysType get_bound_phys() const {return model.get_physical();}*/ \

#define INNER_MODEL_RUNNING_MEMBER_FUNCTIONS \
  fmap& get_mass4_map() const {return mass4_map;} \
  fmap  mass4_map(fill_mass4_map()); \
  fmap1& get_mass4_map1() const {return mass4_map1;} \
  fmap2& get_mass4_map2() const {return mass4_map2;} \
  fmap1  mass4_map1(fill_mass4_map1()); \
  fmap2  mass4_map2(fill_mass4_map2()); \
  fmap& get_mass3_map() const {return mass3_map;} \
  fmap  mass3_map(fill_mass3_map()); \
  fmap1& get_mass3_map1() const {return mass3_map1;} \
  fmap2& get_mass3_map2() const {return mass3_map2;} \
  fmap1  mass3_map1(fill_mass3_map1()); \
  fmap2  mass3_map2(fill_mass3_map2()); \
  fmap& get_mass2_map() const {return mass2_map;} \
  fmap  mass2_map(fill_mass2_map()); \
  fmap1& get_mass2_map1() const {return mass2_map1;} \
  fmap2& get_mass2_map2() const {return mass2_map2;} \
  fmap1  mass2_map1(fill_mass2_map1()); \
  fmap2  mass2_map2(fill_mass2_map2()); \
  fmap& get_mass_map() const {return mass_map;} \
  fmap  mass_map(fill_mass_map()); \
  fmap1& get_mass_map1() const {return mass_map1;} \
  fmap2& get_mass_map2() const {return mass_map2;} \
  fmap1  mass_map1(fill_mass_map1()); \
  fmap2  mass_map2(fill_mass_map2()); \
  fmap& get_mass0_map() const {return mass0_map;} \
  fmap  mass0_map(fill_mass0_map()); \
  fmap1& get_mass0_map1() const {return mass0_map1;} \
  fmap2& get_mass0_map2() const {return mass0_map2;} \
  fmap1  mass0_map1(fill_mass0_map1()); \
  fmap2  mass0_map2(fill_mass0_map2()); \

#define INNER_MODEL_PHYS_MEMBER_FUNCTIONS \
  fmap& get_PoleMass_map() const {return PoleMass_map;} \
  fmap  PoleMass_map(fill_PoleMass_map()); \
  fmap1& get_PoleMass_map1() const {return PoleMass_map1;} \
  fmap1 PoleMass_map1(fill_PoleMass_map1()); \
 
} // end namespace Gambit

#endif
