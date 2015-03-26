//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  "Header" declarations for MSSMSpec class
///  (definitions in another header file due to
///  this being a template class)
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  *********************************************



#ifndef MSSMSPEC_HEAD_H
#define MSSMSPEC_HEAD_H

#include "gambit/Utils/Spectrum.hpp"
#include "gambit/Utils/util_functions.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"


namespace Gambit {

   template <class MI>  // "MI" for "Model_interface"
   class MSSMSpec;
 
   // Helper macro for declaring data members and functions
   #define MAPS1(NAME) \
      static fmap       CAT(NAME,_map); \
      static fmap_plain CAT(NAME,_map_extra); \
      static fmap1      CAT(NAME,_map1); \
      static fmap       CAT_3(fill_,NAME,_map)(); \
      static fmap_plain CAT_3(fill_,NAME,_map_extra)(); \
      static fmap1      CAT_3(fill_,NAME,_map1)(); \
      const fmap&       CAT_3(get_,NAME,_map)()       const; \
      const fmap_plain& CAT_3(get_,NAME,_map_extra)() const; \
      const fmap1&      CAT_3(get_,NAME,_map1)()      const;

   #define MAPS(NAME) \
      MAPS1(NAME) \
      static fmap2      CAT(NAME,_map2); \
      static fmap2      CAT_3(fill_,NAME,_map2)(); \
      const fmap2&      CAT_3(get_,NAME,_map2)()      const; 
 
   // For example of what kind of class MI needs to be, see
   // SpecBit/include/model_files_and_boxes.hpp, 
   // MODELNAME_interface class

   //this contains scale and scheme dependent stuff
   template <class MI>
   class MSSM_DRbarPars : public RunparDer<typename MI::Model> 
   {
      typedef typename MI::Model Model; // Was having problems writing typename in all the right places...
      REDO_TYPEDEFS(Model)
      private:
         MSSMSpec<MI>& my_parent;

         virtual void RunToScaleOverride(double scale);

         MAPS(mass4)
         MAPS(mass3)
         MAPS(mass2)
         MAPS(mass)
         MAPS(mass0)
         MAPS(mass_eigenstate)

      public:
         // Make sure to construct the base class with references to the parent
         // (derived) Spectrum object and the hosted Model object  
         MSSM_DRbarPars(MSSMSpec<MI>& x, Model& m) 
           : RunparDer<Model>(x,m)
           , my_parent(x) 
         {}
         
         virtual double GetScale() const;
         virtual void SetScale(double scale);           
   };
   
   //physical class for accessing physical spectrum
   template <class MI>
   class MSSM_Phys : public PhysDer<typename MI::Model> 
   {
      typedef typename MI::Model Model;
      REDO_TYPEDEFS(Model)
      private:
         MSSMSpec<MI>& my_parent;

         MAPS1(PoleMass)
         MAPS(PoleMixing)

      public:
         // Make sure to construct the base class with references to the parent
         // (derived) Spectrum object and the hosted Model object  
         MSSM_Phys(MSSMSpec<MI>& x, Model& m) 
           : PhysDer<Model>(x,m)
           , my_parent(x) 
         {}
   };
    
   template <class MI>
   class MSSMSpec : public Spectrum 
   {
      typedef typename MI::Model Model;
      friend class MSSM_DRbarPars<MI>;
      friend class MSSM_Phys<MI>;
      private:
         int index_offset;
         virtual int get_index_offset() const {return index_offset;}

      public:
         /// Override of clone function
         DEFINE_CLONE(MSSMSpec)

         /// Internal instances of the derived inner classes
         MSSM_Phys<MI> mssm_ph;
         MSSM_DRbarPars<MI> mssm_drbar_pars;
         //constructors
         MSSMSpec(bool switch_index_convention=false);
         MSSMSpec(MI, bool switch_index_convention=false);
         MSSMSpec(const MSSMSpec&);

         //Could more constructors to interface with other generators   
          
         // These are public for now so that SpecBit_tests.cpp can access them
         MI model_interface; // Must be declared before 'model', since model just points inside of model_interface

         //Destructor
         virtual ~MSSMSpec();
         
         //some model independent stuff
         virtual double get_lsp_mass(int & particle_type, 
                                     int & row, int & col) const;
         virtual int get_numbers_stable_particles() const; 
         //may use something like this to pass error to Gambit
         virtual std::string AccessError(std::string state) const;

         // Write spectrum information in slha format (not including input parameters etc.)
         virtual void dump2slha(const std::string&) const;

         // Return an SLHAea object containing spectrum information
         virtual SLHAea::Coll getSLHAea() const;

         /// Copy low energy spectrum information from another model object
         // Should work from any flexiblesusy model object with the same particle content as the MSSM
         template<class MSSMlike>
         void get_lowe_data_from(MSSMlike &othermodel)
         {
           // Maybe we can copy the pole masses etc directly, but since I am not sure how to do that, for now I am just copying the soft parameters and recomputing the pole masses. Will have to chat to Peter about this.
           // Update: Yeah Peter says we definitely should copy the pole and drbar masses directly :).

           // Actually, we may want to instead write out the data from one object into SLHAea, and then read it into the other. That will let us copy data out of (say) softsusy objects into flexiblesusy ones, and vice-versa, more easily. Of course that will be restricted to the SLHA compatible models... Perhaps we can overload this function to deal with various inputs.
           //model = othermodel;
           Model& model = model_interface.model;

           model.set_scale( othermodel.get_scale() );
           model.set_Yu( othermodel.get_Yu() );
           model.set_Yd( othermodel.get_Yd() );
           model.set_Ye( othermodel.get_Ye() );
           model.set_Mu( othermodel.get_Mu() );
           model.set_g1( othermodel.get_g1() );
           model.set_g2( othermodel.get_g2() );
           model.set_g3( othermodel.get_g3() );
           model.set_vd( othermodel.get_vd() );
           model.set_vu( othermodel.get_vu() );
           model.set_TYu( othermodel.get_TYu() );
           model.set_TYd( othermodel.get_TYd() );
           model.set_TYe( othermodel.get_TYe() );
           model.set_BMu( othermodel.get_BMu() );
           model.set_mq2( othermodel.get_mq2() );
           model.set_ml2( othermodel.get_ml2() );
           model.set_mHd2( othermodel.get_mHd2() );
           model.set_mHu2( othermodel.get_mHu2() );
           model.set_md2( othermodel.get_md2() );
           model.set_mu2( othermodel.get_mu2() );
           model.set_me2( othermodel.get_me2() );
           model.set_MassB( othermodel.get_MassB() );
           model.set_MassWB( othermodel.get_MassWB() );
           model.set_MassG( othermodel.get_MassG() );

           model.calculate_DRbar_parameters(); 
           model.calculate_pole_masses();

           return;
         }

         // Overload of this function to just easily copy the othermodel object
         // if it is of type Model
         void get_external_spectrum(Model& othermodel)
         {
           model_interface.model = othermodel;
           return;
         }

   };

} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
