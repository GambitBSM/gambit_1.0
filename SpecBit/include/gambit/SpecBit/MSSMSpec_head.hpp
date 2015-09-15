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

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Utils/util_functions.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"

namespace Gambit {
   namespace SpecBit {

      template <class MI>  // "MI" for "Model_interface"
      class MSSMSpec;
 
      // For example of what kind of class MI needs to be, see
      // SpecBit/include/model_files_and_boxes.hpp, 
      // MODELNAME_interface class

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
        
         public:
            typedef MapTypes<MSSMSpecTraits<MI>,MapTag::Get> MTget; 
            typedef MapTypes<MSSMSpecTraits<MI>,MapTag::Set> MTset; 

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
            MSSMSpec(bool switch_index_convention=false);
            MSSMSpec(MI, str backend_name, str backend_version, bool switch_index_convention=false);

            //Could more constructors to interface with other generators   
             
            // These are public for now so that SpecBit_tests.cpp can access them
            MI model_interface;

            // Dummy placeholder for potential Inputs object
            DummyInput dummyinput;

            //Destructor
            virtual ~MSSMSpec();

            // Functions to interface Model and Input objects with the base 'Spec' class
            typename MSSMSpecTraits<MI>::Model& get_Model() { return model_interface.model; }
            typename MSSMSpecTraits<MI>::Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }

            //some model independent stuff
            virtual double get_lsp_mass(int & particle_type, 
                                        int & row, int & col) const;
            virtual int get_numbers_stable_particles() const; 
            //may use something like this to pass error to Gambit
            virtual std::string AccessError(std::string state) const;

            // Fill an SLHAea object with spectrum information
            virtual void add_to_SLHAea(SLHAstruct& slha) const;

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

            /// Runnning parameter map fillers (access parameters via spectrum.runningpar)
            static RunningGetterMaps runningpars_fill_getter_maps();
            static RunningSetterMaps runningpars_fill_setter_maps();
 
            /// Phys parameter map fillers (access parameters via spectrum.phys())
            static PhysGetterMaps    phys_fill_getter_maps();
            static PhysSetterMaps    phys_fill_setter_maps(); // Currently unused

      };

     /// This struct contains all the strings we will use for the MSSM
     /// in the maps.  this allows us to implement the maps in
     /// a safer way if we choose , while still giving the option of
     /// flexibility.  
     
     struct  MSSM_strs {
       /// some strings are used in multiple mass
       /// comments indicate first map they appear 
       /// dimension 2, no index
       const str BMu = "BMu";
       const str mHd2 = "mHd2";
       const str mHu2 = "mHu2";
       /// dimension 2, 2 indices 
       const str mq2 =  "mq2";
       const str ml2 =  "ml2";
       const str md2 =  "md2";
       const str mu2 =  "mu2";
       const str me2 =  "me2";
       /// dimension 1, no index 
       const str M1 =  "M1";
       const str M2 =  "M2";
       const str M3 =  "M3";
       const str Mu =  "Mu";
       const str vu =  "vu";
       const str vd =  "vd";
       /// dimension 1, 2 indices
       const str TYd =  "TYd";
       const str TYe =  "TYe";
       const str TYu =  "TYu";
       const str ad  =  "ad";
       const str ae  =  "ae";
       const str au  =  "au";
       /// dimension 0, no index 
       const str g1  =  "g1";
       const str g2  =  "g2";
       const str g3  =  "g3";
       /// dimension 0, no index, special map  
       const str tanbeta = "tanbeta";
       const str sinW2 = "sinW2";
       /// dimension 1, no index, special map  
       const str mA2 = "mA2";
       /// dimension 0, 2 indices
       const str Yd  =  "Yd";
       const str Yu  =  "Yu";
       const str Ye  =  "Ye";
       /// For DRbar mass eigenstates
       /// may remve if / when we get rid of the DRbar mass es
       /// dimension 1, 1 index 
       // const str Sd   =  "Sd";
       // const str Su   =  "Su";
       // const str Se   =  "Se";
       // const str Snu  =  "Snu";
       // const str h0   =  "h0";
       // const str A0   =  "A0";
       // const str Hplus   =  "H+";
       // const str chiplus =  "chi+";
       // const str chi0 =  "chi0";
       // const str d    =  "d";
       // const str u    =  "u";
       // const str eminus   =  "e";
       // const str e    =  "e";
       // const str dbar =  "dbar";
       // const str ubar =	 "ubar";
       // const str eplus   = "e+";

       ///Pole mass
       /// dimension 1, no index , special for setters
       const str gluino = "~g";
       const str A0 = "A0";
       const str Hplus= "H+";
       const str Hminus ="H-";
       const str Goldstone0 ="Goldstone0";
       const str Goldstoneplus ="Goldstone+";
       const str Goldstoneminus ="Goldstone-";
       const str Wplus = "W+";
       const str Wminus = "W-";
       const str Z0 = "Z0";

       
       /// dimension 1, 1 index , special for setters
       const str su        =   "~u";
       const str sd	   =   "~d";
       const str se	   =   "~e";
       const str seminus   =   "~e-";
       const str snu	   =   "~nu";
       const str chiplus   =   "~chi+";
       const str chi0      =   "~chi0";
       const str h0	   =   "h0";
       const str subar     =   "~ubar";
       const str sdbar     =   "~dbar";
       const str sebar     =   "~ebar";
       const str seplus    =   "~e+";
       const str snubar    =   "~nubar";
       const str chiminus  =   "~chi-";

      // pole mass strings with no index
       std::vector<str> pole_mass_strs = initVector( gluino, A0, Hplus,
						     Hminus, Goldstone0,
						     Goldstoneplus,
						     Goldstoneminus,
						     Wplus, Wminus, Z0);

       // as above but with Z0 since we do not predict that mass
       std::vector<str> pole_mass_pred = initVector( gluino, A0, Hplus,
						     Hminus, Goldstone0,
						     Goldstoneplus,
						     Goldstoneminus,
						     Wplus, Wminus);

       /// pole mass strings with 1 index
       std::vector<str> pole_mass_strs_1 = initVector( su, sd, se, seminus, snu,
						       chiplus, chi0, h0, subar,
						       sdbar, sebar, seplus,
						       snubar, chiminus );

       ///  pole mass strings with 1 index and six entries
       std::vector<str> pole_mass_strs_1_6  = initVector( su, sd, se, seminus,
							  subar, sdbar, sebar,
							  seplus );

       ///  pole mass strings with 1 index and four entries
       std::vector<str> pole_mass_strs_1_4  = initVector(chi0);
       
       ///  pole mass strings with 1 index and three entries
       std::vector<str> pole_mass_strs_1_3  = initVector(snu,snubar);

       ///  pole mass strings with 1 index and two entries
       std::vector<str> pole_mass_strs_1_2  = initVector(chiplus,chiminus,h0);
       
     };

     
   } // end SpecBit namespace
} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
