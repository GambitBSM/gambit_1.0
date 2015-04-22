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

#include "gambit/Elements/Spectrum.hpp"
#include "gambit/Utils/util_functions.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"


namespace Gambit {

   template <class MI>  // "MI" for "Model_interface"
   class MSSMSpec;
 
   // For example of what kind of class MI needs to be, see
   // SpecBit/include/model_files_and_boxes.hpp, 
   // MODELNAME_interface class

   /// Dummy struct needed to satisfy Input typename alias required by
   /// Spec<T> derived classes. The functionality this provides is currently
   /// unused in this particular derived class (see QedQcdWrapper.hpp for
   /// example usage)
   struct DummyInput {};

   /// Specialisation of "traits" class used to inform Spec<T> class of what
   /// "Model" and "Input" are for this derived class
   template <class MI>
   struct MSSMSpecTraits
   {
      typedef typename MI::Model Model;
      typedef DummyInput Input;
   };

   template <class MI>
   class MSSMSpec : public Spec<MSSMSpec<MI>,MSSMSpecTraits<MI>>
   {
      friend class RunparDer<MSSMSpec<MI>,MSSMSpecTraits<MI>>;
      friend class PhysDer  <MSSMSpec<MI>,MSSMSpecTraits<MI>>;
     
      private:
         typedef MapTypes<MSSMSpecTraits<MI>> MT; 
         int index_offset;
         virtual int get_index_offset() const {return index_offset;}

      public:
         
         /// Interface function overrides for RunningPars
         virtual double GetScale() const;
         virtual void SetScale(double scale);           
         virtual void RunToScale(double scale);

         //constructors
         MSSMSpec(bool switch_index_convention=false);
         MSSMSpec(MI, bool switch_index_convention=false);
         MSSMSpec(const MSSMSpec&);

         //Could more constructors to interface with other generators   
          
         // These are public for now so that SpecBit_tests.cpp can access them
         MI model_interface;

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

         /// TODO: Need to implement this properly...
         /// Copy low energy spectrum information from another model object
         // Should work from any flexiblesusy model object with the same particle content as the MSSM
         template<class MSSMlike>
         void get_lowe_data_from(MSSMlike &othermodel)
         {
           // Maybe we can copy the pole masses etc directly, but since I am not sure how to do that, for now I am just copying the soft parameters and recomputing the pole masses. Will have to chat to Peter about this.
           // Update: Yeah Peter says we definitely should copy the pole and drbar masses directly :).

           // Actually, we may want to instead write out the data from one object into SLHAea, and then read it into the other. That will let us copy data out of (say) softsusy objects into flexiblesusy ones, and vice-versa, more easily. Of course that will be restricted to the SLHA compatible models... Perhaps we can overload this function to deal with various inputs.
           //model = othermodel;
           typename MI::Model& model = model_interface.model;

           model.set_scale( othermodel.get_scale() );
           model.set_Yu( othermodel.get_Yu() );

           //model.calculate_DRbar_parameters(); 
           //model.calculate_pole_masses();

           return;
         }

         // Overload of this function to just easily copy the othermodel object
         // if it is of type Model
         void get_external_spectrum(typename MI::Model& othermodel)
         {
           model_interface.model = othermodel;
           return;
         }

      protected:
         /// Map filler overrides

         /// RunparDer overrides (access via spectrum.runningpar)
         static typename MT::fmap        fill_mass_map();         /*O*/
         static typename MT::fmap2       fill_mass_map2();        /*O*/
         static typename MT::fmap        fill_mass0_map();        /*O*/
         static typename MT::fmap_extraM fill_mass0_map_extraM(); /*O*/
         static typename MT::fmap2       fill_mass0_map2();       /*O*/
         static typename MT::fmap        fill_mass2_map();        /*O*/
         static typename MT::fmap2       fill_mass2_map2();       /*O*/
         static typename MT::fmap        fill_mass_eigenstate_map();  /*O*/
         static typename MT::fmap1       fill_mass_eigenstate_map1(); /*O*/

         /// PhysDer overrides (access via spectrum.phys)
         static typename MT::fmap        fill_PoleMass_map();        /*O*/
         static typename MT::fmap_extraM fill_PoleMass_map_extraM(); /*O*/
         static typename MT::fmap1       fill_PoleMass_map1();       /*O*/
         static typename MT::fmap2       fill_PoleMixing_map2();     /*O*/

   };

} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
