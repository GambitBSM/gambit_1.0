//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  "Header" declarations for SSDMSpec class
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

#ifndef SSDMSPEC_HEAD_H
#define SSDMSPEC_HEAD_H

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Utils/util_functions.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"


namespace Gambit {
   namespace SpecBit {

      template <class MI>  // "MI" for "Model_interface"
      class SSDMSpec;
 
      // For example of what kind of class MI needs to be, see
      // SpecBit/include/model_files_and_boxes.hpp, 
      // MODELNAME_interface class

      /// Specialisation of "traits" class used to inform Spec<T> class of what
      /// "Model" and "Input" are for this derived class
      template <class MI>
      struct SSDMSpecTraits
      {
         typedef typename MI::Model Model;
         typedef DummyInput Input;
      };

      template <class MI>
      class SSDMSpec : public Spec<SSDMSpec<MI>,SSDMSpecTraits<MI>>
      {
         friend class RunparDer<SSDMSpec<MI>,SSDMSpecTraits<MI>>;
         friend class PhysDer  <SSDMSpec<MI>,SSDMSpecTraits<MI>>;
        
         public:
            typedef MapTypes<SSDMSpecTraits<MI>,MapTag::Get> MTget;
            typedef MapTypes<SSDMSpecTraits<MI>,MapTag::Set> MTset;

            typedef std::map<Par::Phys,MapCollection<MTget>> PhysGetterMaps; 
            typedef std::map<Par::Phys,MapCollection<MTset>> PhysSetterMaps; 
            typedef std::map<Par::Running,MapCollection<MTget>> RunningGetterMaps; 
            typedef std::map<Par::Running,MapCollection<MTset>> RunningSetterMaps; 
   
         private:
            str backend_name;
            str backend_version;
            int index_offset;
            virtual int get_index_offset() const {return index_offset;}

         public:
            
            /// Interface function overrides for RunningPars
            virtual double GetScale() const;
            virtual void SetScale(double scale);           
            virtual void RunToScale(double scale);

            //constructors
            SSDMSpec(bool switch_index_convention=false);
            SSDMSpec(MI, str backend_name, str backend_version, bool switch_index_convention=false);

            //Could more constructors to interface with other generators   
             
            // These are public for now so that SpecBit_tests.cpp can access them
            MI model_interface;

            // Dummy placeholder for potential Inputs object
            DummyInput dummyinput;

            //Destructor
            virtual ~SSDMSpec();

            // Functions to interface Model and Input objects with the base 'Spec' class
            typename SSDMSpecTraits<MI>::Model& get_Model() { return model_interface.model; }
            typename SSDMSpecTraits<MI>::Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }


            //may use something like this to pass error to Gambit
            virtual std::string AccessError(std::string state) const;



            /// TODO: Need to implement this properly...
            /// Copy low energy spectrum information from another model object
            // Should work from any flexiblesusy model object with the same particle content as the SSDM
            template<class SSDMlike>
            void get_lowe_data_from(SSDMlike &othermodel)
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

        // protected:
            /// Map filler overrides

            /// Runnning parameter map fillers (access parameters via spectrum.runningpar)
            static RunningGetterMaps runningpars_fill_getter_maps();
            static RunningSetterMaps runningpars_fill_setter_maps();
 
            /// Phys parameter map fillers (access parameters via spectrum.phys())
            static PhysGetterMaps    phys_fill_getter_maps();
            static PhysSetterMaps    phys_fill_setter_maps(); // Currently unused
           

      };
   } // end SpecBit namespace
} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
