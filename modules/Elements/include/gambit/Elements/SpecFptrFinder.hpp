//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  SubSpectrum helper class for seaching through
///  the function pointer maps and calling the
///  requested function.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Jul
///
///  *********************************************

#ifndef __SpecFptrFinder_hpp__
#define __SpecFptrFinder_hpp__

#include "gambit/Elements/SubSpectrumDecl.hpp"
#include "gambit/Models/partmap.hpp"

// Particle database access
#define PDB Models::ParticleDB()        

namespace Gambit {

   /// FptrFinder friend class for implementing named parameter idiom
   template<class DT, class This, class MTag>
   class SetMaps
   {
      public:
         SetMaps(const std::string& label, const This* const fakethis)
          : label_(label) 
          , fakethis_(fakethis)
          , map0_(NULL)
          , map0M_(NULL)
          , map0I_(NULL)
          , map1_(NULL)
          , map2_(NULL)
          , omap0_(NULL)
          , omap1_(NULL)
          , omap2_(NULL)
         {}
         /// derived class maps
         SetMaps& map0(const typename MapTypes<DT,MTag>::fmap0&        map0)  { map0_=&map0; return *this; }
         SetMaps& map0M(const typename MapTypes<DT,MTag>::fmap0_extraM& map0M){ map0M_=&map0M; return *this; }
         SetMaps& map0I(const typename MapTypes<DT,MTag>::fmap0_extraI& map0I){ map0I_=&map0I; return *this; }
         SetMaps& map1(const typename MapTypes<DT,MTag>::fmap1&        map1)  { map1_=&map1; return *this; }
         SetMaps& map2(const typename MapTypes<DT,MTag>::fmap2&        map2)  { map2_=&map2; return *this; }
         /// base class override maps
         SetMaps& omap0(const std::map<std::string,double>& om0)              { omap0_=&om0; return *this;}
         SetMaps& omap1(const std::map<std::string,std::map<int,double>>& om1){ omap1_=&om1; return *this;}
         SetMaps& omap2(const std::map<std::string,std::map<int,std::map<int,double>>>& om2){ omap2_=&om2; return *this;}

      private:
         friend class FptrFinder<DT,This,MTag>; 
         const std::string label_;
         const This* const fakethis_;

         /// Maps from derived class
         const typename MapTypes<DT,MTag>::fmap0*        map0_;
         const typename MapTypes<DT,MTag>::fmap0_extraM* map0M_; 
         const typename MapTypes<DT,MTag>::fmap0_extraI* map0I_; 
         const typename MapTypes<DT,MTag>::fmap1*        map1_; 
         const typename MapTypes<DT,MTag>::fmap2*        map2_; 
          
         /// Maps from base class (override maps, only used in getter case)
         const std::map<std::string,double>*                             omap0_;
         const std::map<std::string,std::map<int,double>>*               omap1_;
         const std::map<std::string,std::map<int,std::map<int,double>>>* omap2_;
   }; 
 
   /// Helper class for calling function pointers found by FptrFinder
   template<class DT, class This, class MTag>
   struct CallFcn;

   /// Helper class for locating the function pointer corresponding to a 
   /// requested string, from amongst the various different maps in which
   /// it could be located.
   template<class DT, class This, class MTag>
   class FptrFinder
   {
      friend struct CallFcn<DT,This,MTag>;
      private:
         /// Label to help track down errors if they occur
         const std::string label;
 
         /// Last used search string (only set if there was a problem, for error messages)
         std::string lastname;

         /// This class pretending to be an extra set of class functions, so need the "this" pointer
         const This* const fakethis;

         /// Pointers to const maps to use for search
         /// Maps from base class (override maps, should only be used in getter case)
         const std::map<std::string,double>*                             omap0_;
         const std::map<std::string,std::map<int,double>>*               omap1_;
         const std::map<std::string,std::map<int,std::map<int,double>>>* omap2_;
         /// Maps filled by derived (wrapper) classes
         const typename MapTypes<DT,MTag>::fmap0*        map0_;
         const typename MapTypes<DT,MTag>::fmap0_extraM* map0M_; 
         const typename MapTypes<DT,MTag>::fmap0_extraI* map0I_; 
         const typename MapTypes<DT,MTag>::fmap1*        map1_; 
         const typename MapTypes<DT,MTag>::fmap2*        map2_; 

         /// Iterators needed for storing locatation of search result
         /// ...for override values
         std::map<std::string,double>::const_iterator                ito0; // 0
         std::map<std::string,std::map<int,double>>::const_iterator  ito1; // 1
         std::map<std::string,std::map<int,std::map<int,double>>>::const_iterator ito2; // 2
         /// ...for derived class values
         typename MapTypes<DT,MTag>::fmap0::const_iterator        it0;  // 3
         typename MapTypes<DT,MTag>::fmap0_extraM::const_iterator it0M; // 4
         typename MapTypes<DT,MTag>::fmap0_extraI::const_iterator it0I; // 5
         typename MapTypes<DT,MTag>::fmap1::const_iterator       it1; // 6
         typename MapTypes<DT,MTag>::fmap2::const_iterator       it2; // 7

         /// Booleans to indicate whether or not it is safe to dereference
         /// the above iterators
         bool ito0_safe;
         bool ito1_safe;
         bool ito2_safe;
         bool it0_safe;
         bool it0M_safe;
         bool it0I_safe;
         bool it1_safe;
         bool it2_safe;

         // int which records which iterator points to the search result 
         int whichiter;    

         // indices required for function call
         int index1;
         int index2;

         // error code
         // -1 : search not yet attempted
         //  0 : no problem, search succeeded
         //  1 : string name lookup failed
         //  2 : string name lookup succeeded, index1 out of bounds
         //  3 : string name lookup succeeded, index2 out of bounds
         int error_code;

         // Messages corresponding to the above error codes
         static const std::map<int, const std::string> error_msg; 

      public:
         /// Caller for whatever function was found
         /// This has to work slightly differently depending on whether FptrFinder is
         /// specialised for MapTag::Get or MapTag::Set, so we just declare it here and
         /// do the specialisation after the class declaration.
         /// This has to be a struct, since we partial specialisation of functions is
         /// not allowed in C++, but it is treated like a member function.
         CallFcn<DT,This,MTag> callfcn;

         // Constructor utilising named "parameters"
         FptrFinder(const SetMaps<DT,This,MTag>& params)
           : label(params.label_)
           , lastname("NONE")
           , fakethis(params.fakethis_)
           , omap0_(params.omap0_)   
           , omap1_(params.omap1_)   
           , omap2_(params.omap2_)   
           , map0_ (params.map0_)   
           , map0M_(params.map0M_)
           , map0I_(params.map0I_)
           , map1_(params.map1_)
           , map2_(params.map2_)
           , ito0()
           , ito1()
           , ito2()
           , it0()
           , it0M()
           , it0I()
           , it1()
           , it2()
           , ito0_safe (false)
           , ito1_safe(false)
           , ito2_safe(false)
           , it0_safe (false)
           , it0M_safe(false)
           , it0I_safe(false)
           , it1_safe(false)
           , it2_safe(false) 
           , whichiter(-1)
           , index1(-1)
           , index2(-1)
           , error_code(-1)
           , callfcn(this)
         {}

         /// @{ Error reporting
         int          get_error_code(){ return error_code; }
         std::string  get_error_message()
         {
            std::string msg;
            switch(error_code)
            {
                case -1: msg = "Search not yet attempted"; break; 
                case 0:  msg = "No problem, search succeeded"; break;
                case 1:  msg = "String name lookup failed"; break;
                case 2:  msg = "String name lookup succeeded, index1 out of bounds"; break;
                case 3:  msg = "String name lookup succeeded, index2 out of bounds"; break;
                default: msg = "Unrecognised error code! This is a bug in FptrFinder!";
           }
           return msg;
         }
         // Raise error if the calling context can't handle a failed search
         void raise_error(const std::string& origin)
         {
           std::ostringstream errmsg;
           errmsg << "Error retrieving particle spectrum data!" << std::endl;
           errmsg << "No "<<label<<" with string reference '"<<lastname<<"' exists!" <<std::endl;
           errmsg << "Search failed with error_code "<<error_code<<" from FptrFinder with label "<<label<<": "<<get_error_message();
           utils_error().forced_throw(origin,errmsg.str());  
         }
         /// @}
 
         /// helper functions for searching individual maps
         template<class Map>
         bool search_map(const std::string& name, const Map* const map, typename Map::const_iterator& it)
         {
           bool found = true; 
           if(map==NULL)
           {
              std::ostringstream errmsg;
              errmsg << "Tried to use FptrFinder to search a SubSpectrum function pointer map, but did not correctly supply the map to FptrFinder! This is a bug in the SubSpectrum class; please report it. (Attempted to access map of type "<<typeid(Map).name()<<")";
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
           }
           it = map->find(name);
           if( it == map->end() ){ found = false; }
           return found; 
         }

         /// Check if it is (supposed to be) safe to dereference a map iterator
         /// Throw an error if it isn't
         void check(bool safe)
         {
           if(not safe)
           {
              std::ostringstream errmsg;
              errmsg << "Safety check for map iterator failed! (in FptrFinder). This indicates a bug in the FptrFinder class; please report it.";
              utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
           }
         } 

         /// Methods for setting parameters (named parameter idiom)
         /// E.g. call constructor like this to use named "parameters"
         /// FptrFinder().map(x).map2(z).mapM(y)
         /// Could protect parameters from being reset by putting these setters in a friend class,
         /// which can only set the FptrFinder parameters via the FptrFinder constructor, but this
         /// is good enough for the use here I think.
      
         /// Search function for 0-index maps
         bool find(const std::string& name, bool doublecheck=true)
         {
            bool override_found = false;
            bool found = true;   
            error_code = 0;

            //  Search maps for function; if found then store it
            //std::cout << "Searching 0-index maps for "<<name<<std::endl;

            //  Search override maps first
            if(doublecheck)
            {
               if( omap0_!=NULL and search_map(name,omap0_,ito0) )
               { 
                  ito0_safe=true; 
                  override_found=true; 
                  whichiter=0; 
               }
               else if( omap1_!=NULL and PDB.has_short_name(name) )
               {
                  // Didn't find it in 0-index override map; translate using PDB entry and try
                  // 1-index override map
                  std::pair<str, int> p = PDB.short_name_pair(name);
                  if  ( search_map(p.first,omap1_,ito1) )
                  { 
                     ito1_safe=true; 
                     override_found=true; 
                     index1=p.second;
                     whichiter=1; 
                  }
               }
               //std::cout << "No overrride found for "<<name<<std::endl;
            }        
 
            // If no override, search the wrapper class maps
            if(not override_found)
            {
               if( search_map(name,map0_,it0)   ){ it0_safe=true; whichiter=3; }
               else if( search_map(name,map0M_,it0M) ){ it0M_safe=true; whichiter=4; }
               else if( search_map(name,map0I_,it0I) ){ it0I_safe=true; whichiter=5; }
               else if( doublecheck and PDB.has_short_name(name) )
               {
                  // Didn't find it in 0-index maps; translate using PDB entry and try 1-index maps
                  std::pair<str, int> p = PDB.short_name_pair(name);
                  //std::cout << "running doublecheck: re-calling function with PDG short name pair: "<<name<<" --> "<<p.first<<", "<<p.second<<std::endl;
                  found = find(p.first, p.second, false);
               }
               else { 
                 found = false;
                 lastname = name;
                 error_code = 1; 
               }
            }
            return found;
         }

         /// Search function for 1-index maps
         bool find(const std::string& name, int i, bool doublecheck=true)
         {
            bool override_found = false;
            bool found = true;
            error_code = 0;

            //  Search maps for function; if found then store it

            //  Search override maps first
            if(doublecheck)
            {
               if( omap1_!=NULL and search_map(name,omap1_,ito1) )
               {  
                  // Check that index (key) exists in inner map
                  std::map<int,double>::const_iterator it = ito1->second.find(i);
                  if( it != ito1->second.end() )
                  { 
                     ito1_safe=true; 
                     override_found=true; 
                     index1=i;
                     whichiter=1; 
                  }
                  else if( omap0_!=NULL and search_map(PDB.long_name(name,i),omap0_,ito0) )
                  {
                     // Didn't find it in 1-index override map; translate using PDB entry and try
                     // 0-index override map
                     ito0_safe=true; 
                     override_found=true; 
                     whichiter=0;
                  }
               }
            }

            // If no override, search the wrapper class maps
            if(not override_found)
            {
               if( search_map(name,map1_,it1) )
               {
                  it1_safe=true; 
                  /// Switch index convention
                  int offset = fakethis->parent.get_index_offset();
                  index1 = i + offset; // set for later use
                  /// Check that index is in the permitted set
                  if( not within_bounds(index1, it1->second.iset1) )
                  {
                     // index1 out of bounds
                     found = false;
                     lastname = name;
                     error_code = 2;
                  }
                  else {
                     // everything cool. 
                     whichiter=6;
                  } 
               }
               else if( doublecheck and PDB.has_particle(std::make_pair(name,i)) )
               {
                  // Didn't find it in 1-index maps; translate using PDB entry and try 0-index maps
                  //std::cout << "running doublecheck: re-calling function with PDG long name: "<<name<<", "<<i<<" --> "<<PDB.long_name(name,i)<<std::endl;
                  found = find(PDB.long_name(name,i), false);
               }
               else { 
                 found = false;
                 lastname = name;
                 error_code = 1;
               }
            }
            return found;
         }

         /// Search function for 2-index maps
         bool find(const std::string& name, int i, int j)
         {
            bool override_found = false;
            bool found = true;   
            error_code = 0;

            //  Search maps for function; if found then store it

            //  Search override maps first
            if( omap2_!=NULL and search_map(name,omap2_,ito2) )
            {  
               // Check that first index (key) exists in inner map
               std::map<int,std::map<int,double>>::const_iterator jt = ito2->second.find(i);
               if( jt != ito2->second.end() )
               { 
                  // Check that second index (key) exists in second-inner map
                  std::map<int,double>::const_iterator jt2 = jt->second.find(j);
                  if( jt2 != jt->second.end() )
                  { 
                     ito2_safe=true; 
                     override_found=true; 
                     index1=i;
                     index2=j;
                     whichiter=2; 
                  }
               }
            }
 
            // If no override, search the wrapper class maps
            if(not override_found)
            {
               if( search_map(name,map2_,it2) )
               {
                  it2_safe=true; 
                  /// Switch index convention
                  int offset = fakethis->parent.get_index_offset();
                  index1 = i + offset; // set for later use
                  index2 = j + offset; // set for later use
                  /// Check that index is in the permitted set
                  if( not within_bounds(index1, it2->second.iset1) )
                  {
                     // index1 out of bounds
                     found = false;
                     lastname = name;
                     error_code = 2;
                  }
                  else if( not within_bounds(index2, it2->second.iset2) )
                  {
                     // index2 out of bounds
                     found = false;
                     lastname = name;
                     error_code = 3;
                  }
                  else {
                     // everything cool. 
                     whichiter=7;
                  } 
               }
               else { 
                 found = false;
                 lastname = name;
                 error_code = 1;
               }
            }
            return found;
         }

   }; // end class FptrFinder

   /// Specialisation of CallFcn for calling 'getter' functions
   template<class DT, class This>
   struct CallFcn<DT,This,MapTag::Get>
   {
     private:
      typedef MapTypes<DT,MapTag::Get> MT;
      FptrFinder<DT,This,MapTag::Get>* ff;

     public: 
      CallFcn(FptrFinder<DT,This,MapTag::Get>* host) 
        : ff(host) 
      {}

      double operator()()
      {
         double result(-1); // should not be returned in this state
         if(ff->error_code==0)
         {
            typename DT::Model* model = ff->fakethis->parent.get_Model();
            typename DT::Input* input = ff->fakethis->parent.get_Input();
            switch( ff->whichiter )
            {
               // Override retrieval cases
               case 0: {
                 ff->check(ff->ito0_safe);
                 result = ff->ito0->second;
                 break;}
               case 1: {
                 ff->check(ff->ito1_safe);
                 result = (ff->ito1->second).at(ff->index1);
                 break;}
               case 2: {
                 ff->check(ff->ito2_safe);
                 result = (ff->ito2->second).at(ff->index1).at(ff->index2);
                 break;}
               // Wrapper class function call cases
               case 3: {
                 ff->check(ff->it0_safe);
                 typename MT::FSptr f = ff->it0->second;
                 result = (model->*f)();
                 break;}
               case 4: {
                 ff->check(ff->it0M_safe);
                 typename MT::plainfptrM f = ff->it0M->second;
                 result = (*f)(*model);
                 break;}
               case 5: {
                 ff->check(ff->it0I_safe);
                 typename MT::plainfptrI f = ff->it0I->second;
                 result = (*f)(*input);
                 break;}
               case 6: {
                 ff->check(ff->it1_safe);
                 typename MT::FSptr1 f = ff->it1->second.fptr;
                 result = (model->*f)(ff->index1);
                 break;}
               case 7: {
                 ff->check(ff->it2_safe);
                 typename MT::FSptr2 f = ff->it2->second.fptr;
                 result = (model->*f)(ff->index1,ff->index2);
                 break;}
               default:{
                 std::ostringstream errmsg;
                 errmsg << "Error! Unanticipated whichiter code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<", whichiter="<<ff->whichiter<<")"<<std::endl;
                 utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
                 }
            }
         } else if(ff->error_code==-1) 
         {
           std::ostringstream errmsg;
           errmsg << "Error! Tried to call function from SubSpectrum maps without first finding the function! This indicates a bug, probably in the Spectrum or SubSpectrum classes. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<")"<<std::endl;
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
         } else {
           std::ostringstream errmsg;
           errmsg << "Error! Unanticipated error code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<")"<<std::endl;
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
         }
         return result;
      }
   };

   /// Specialisation of CallFcn for calling 'setter' functions
   template<class DT, class This>
   struct CallFcn<DT,This,MapTag::Set>
   {
     private:
      typedef MapTypes<DT,MapTag::Set> MT;
      FptrFinder<DT,This,MapTag::Set>* ff;

     public: 
      CallFcn(FptrFinder<DT,This,MapTag::Set>* host) 
        : ff(host) 
      {}

      void operator()(const double set_value)
      {
         if(ff->error_code==0)
         {
            typename DT::Model* model = ff->fakethis->parent.get_Model();
            typename DT::Input* input = ff->fakethis->parent.get_Input();
            switch( ff->whichiter )
            {
               case 3: {
                 ff->check(ff->it0_safe);
                 typename MT::FSptr f = ff->it0->second;
                 (model->*f)(set_value);
                 break;}
               case 4: {
                 ff->check(ff->it0M_safe);
                 typename MT::plainfptrM f = ff->it0M->second;
                 (*f)(*model,set_value);
                 break;}
               case 5: {
                 ff->check(ff->it0I_safe);
                 typename MT::plainfptrI f = ff->it0I->second;
                 (*f)(*input,set_value);
                 break;}
               case 6: {
                 ff->check(ff->it1_safe);
                 typename MT::FSptr1 f = ff->it1->second.fptr;
                 (model->*f)(ff->index1, set_value);
                 break;}
               case 7: {
                 ff->check(ff->it2_safe);
                 typename MT::FSptr2 f = ff->it2->second.fptr;
                 (model->*f)(ff->index1,ff->index2,set_value);
                 break;}
               default:{
                 std::ostringstream errmsg;
                 errmsg << "Error! Unanticipated whichiter code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<", whichiter="<<ff->whichiter<<")"<<std::endl;
                 utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
                 }
            }
         } else if(ff->error_code==-1) 
         {
           std::ostringstream errmsg;
           errmsg << "Error! Tried to call function from SubSpectrum maps without first finding the function! This indicates a bug, probably in the Spectrum or SubSpectrum classes. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<")"<<std::endl;
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
         } else {
           std::ostringstream errmsg;
           errmsg << "Error! Unanticipated error code received while trying to call a function from SubSpectrum maps. This indicates a bug in the FptrFinder class. Please report it! (this FptrFinder has label="<<ff->label<<" and is specialised for Getter maps, current error_code="<<ff->error_code<<")"<<std::endl;
           utils_error().forced_throw(LOCAL_INFO,errmsg.str());  
         }
      }
   };

#undef PDB

}

#endif
