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

#include "gambit/Elements/spec.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Models/SpectrumContents/RegisteredSpectra.hpp"

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"

namespace Gambit 
{
   namespace SpecBit 
   {
      template <class MI>  // "MI" for "Model_interface"
      class MSSMSpec;
   } 

   // For example of what kind of class MI needs to be, see
   // SpecBit/include/model_files_and_boxes.hpp, 
   // MODELNAME_interface class

   /// Specialisation of "traits" class used to inform Spec<T> class of what
   /// "Model" and "Input" are for this derived class
   template <>
   template <class MI>
   struct SpecTraits<SpecBit::MSSMSpec<MI>>
   {
      static std::string name() { return "MSSMSpec"; }
      typedef SpectrumContents::MSSM Contents;
      typedef typename MI::Model Model;
      typedef DummyInput Input;
   };

   namespace SpecBit
   {
      template <class MI>
      class MSSMSpec : public Spec<MSSMSpec<MI>>
      {
         private:
            str backend_name;
            str backend_version;
            static const int _index_offset;

         public:
            /// These typedefs are inherited, but the name lookup doesn't work so smoothly in
            /// templated wrapper classes, so need to help them along:
            typedef MSSMSpec<MI> Self;
            typedef typename Self::MTget MTget; 
            typedef typename Self::MTset MTset; 
            typedef typename Self::GetterMaps GetterMaps;
            typedef typename Self::SetterMaps SetterMaps;
            typedef typename SpecTraits<Self>::Model Model;
            typedef typename SpecTraits<Self>::Input Input;
           
            /// Interface function overrides
            static int index_offset() {return _index_offset;}
            virtual double GetScale() const;
            virtual void SetScale(double scale);           
            virtual void RunToScaleOverride(double scale);

            //constructors
            MSSMSpec();
            MSSMSpec(MI, str backend_name, str backend_version);

            //Could more constructors to interface with other generators   
             
            // These are public for now so that SpecBit_tests.cpp can access them
            MI model_interface;

            // Dummy placeholder for potential Inputs object
            DummyInput dummyinput;

            //Destructor
            virtual ~MSSMSpec();

            // Functions to interface Model and Input objects with the base 'Spec' class
            Model& get_Model() { return model_interface.model; }
            Input& get_Input() { return dummyinput; /*unused here, but needs to be defined for the interface*/ }
            const Model& get_Model() const { return model_interface.model; }
            const Input& get_Input() const { return dummyinput; /*unused here, but needs to be defined for the interface*/ }

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

            /// Map filler overrides
            static GetterMaps fill_getter_maps();
            static SetterMaps fill_setter_maps();

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
       const str se	   =   "~e-";
       const str snu	   =   "~nu";
       const str chiplus   =   "~chi+";
       const str chi0      =   "~chi0";
       const str h0	   =   "h0";
       const str subar     =   "~ubar";
       const str sdbar     =   "~dbar";
       const str seplus    =   "~e+";
       const str snubar    =   "~nubar";
       const str chiminus  =   "~chi-";

       /// @{ "Metadata" vectors
       // TODO: replace with a more integrated system
 
       /// @{ Pole_Mass tagged entries

       // pole mass strings with no index
       const std::vector<str> pole_mass_strs = initVector( gluino, A0, Hplus,
						     Hminus, Goldstone0,
						     Goldstoneplus,
						     Goldstoneminus,
						     Wplus, Wminus, Z0 );

       // as above but without Z0 since we do not predict that mass
       const std::vector<str> pole_mass_pred = initVector( gluino, A0, Hplus,
						     Hminus, Goldstone0,
						     Goldstoneplus,
						     Goldstoneminus,
						     Wplus, Wminus );

       /// pole mass strings with 1 index
       const std::vector<str> pole_mass_strs_1 = initVector( su, sd, se, 
                                                       subar, sdbar, seplus,
						       chiplus, chiminus, chi0, h0, 
						       snu, snubar );

       ///  pole mass strings with 1 index and six entries
       const std::vector<str> pole_mass_strs_1_6  = initVector( su, sd, se,
							  subar, sdbar, seplus );

       ///  pole mass strings with 1 index and four entries
       const std::vector<str> pole_mass_strs_1_4  = initVector( chi0 );
       
       ///  pole mass strings with 1 index and three entries
       const std::vector<str> pole_mass_strs_1_3  = initVector( snu, snubar );

       ///  pole mass strings with 1 index and two entries
       const std::vector<str> pole_mass_strs_1_2  = initVector( chiplus, chiminus, h0 );

       /// @}

       /// @{ Pole_Mixing tagged entries

       ///  2 index, 6x6 entries
       const std::vector<str> pole_mixing_strs_2_6x6  = initVector( sd, su, se );

       ///  2 index, 4x4 entries
       const std::vector<str> pole_mixing_strs_2_4x4  = initVector( chi0 );

       ///  2 index, 3x3 entries
       const std::vector<str> pole_mixing_strs_2_3x3  = initVector( snu );

       ///  2 index, 2x2 entries
       const std::vector<str> pole_mixing_strs_2_2x2  = initVector( h0, A0, Hplus, chiminus, chiplus );

       /// @}

       /// @{ mass2 tagged entries

       // no index 
       const std::vector<str> mass2_strs = initVector( BMu, mHd2, mHu2, mA2 );

       // two-index, 3x3 entries
       const std::vector<str> mass2_strs_2_3x3= initVector( mq2, ml2, md2, mu2, me2 );

       /// @}

       /// @{ mass1 tagged entries
   
       // no index
       const std::vector<str> mass1_strs = initVector( M1, M2, M3, Mu, vu, vd );
      
       // two-index, 3x3 entries
       const std::vector<str> mass1_strs_2_3x3 = initVector( TYd, TYe, TYu, ad, ae, au );

       /// @}
 
       /// @{ dimensionless tagged entries
   
       // no index
       const std::vector<str> dimensionless_strs = initVector( g1, g2, g3, tanbeta, sinW2 );

       // two-index, 3x3 entries
       const std::vector<str> dimensionless_strs_2_3x3 = initVector( Yd, Yu, Ye );

       /// @}
      
       /// TODO: left out mass_eigenstate entries for now
  
       /// @}
     };

     
   } // end SpecBit namespace
} // end Gambit namespace

#undef MAPS
#undef MAPS1
#endif
