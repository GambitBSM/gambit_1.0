//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  SSDM derived version of SubSpectrum class. Designed
///  for easy interface to FlexibleSUSY, but also
///  works with SoftSUSY as the backend with an
///  appropriately designed intermediate later.
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
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Aug
///
///  *********************************************

#ifndef SSDMSPEC_H
#define SSDMSPEC_H

#include <memory>

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/SpecBit/SSDMSpec_head.hpp"   // "Header" declarations for SSDMSpec class

// Flexible SUSY stuff (should not be needed by the rest of gambit)
#include "flexiblesusy/config/config.h"


namespace Gambit
{

   namespace SpecBit
   {

      //
      // IMPLEMENTATION OF SSDMSpec MEMBER FUNCTIONS FOLLOWS  // edited for use with SSDM with most functions removed (JM)
      // 
      // SSDMSpec this is a template class, we need these definition in the header
      // file. It is nice to keep them seperate from the class declaration though.
      //
 
      // NOTE!! mi is COPIED into the object, so when we get the reference to the 
      // actual Model object to store in 'model', we need to use the copy inside
      // the object. So also need to make sure 'model_interface' is initialised first
      // (i.e. it should be declared first)
      template <class MI>
      SSDMSpec<MI>::SSDMSpec(MI mi, str be_name, str be_version, bool switch_index_convention)
         : backend_name(be_name)
         , backend_version(be_version)
         , index_offset(-1)
         , model_interface(mi)
      {
         if (switch_index_convention) index_offset = 0;
      }
      
      // Default constructor
      template <class MI>
      SSDMSpec<MI>::SSDMSpec(bool switch_index_convention)
         : index_offset(switch_index_convention ? 0 : -1)
      {}
  
      template <class MI>
      SSDMSpec<MI>::~SSDMSpec()
      {}
     
     
     
      template <class MI>
      void SSDMSpec<MI>::RunToScale(double scale)
      {
        model_interface.model.run_to(scale);
      }
      template <class MI>
      double SSDMSpec<MI>::GetScale() const
      {
        return model_interface.model.get_scale();
      }
      template <class MI>
      void SSDMSpec<MI>::SetScale(double scale)
      {
        model_interface.model.set_scale(scale);
      }
      
      template <class MI>
      std::string SSDMSpec<MI>::AccessError(std::string state) const
      {
        std::string errormsg;
        errormsg = "Error accessing "+ state + " element is out of bounds";
        return errormsg;
      }
     
     

    
      template <class Model>
      double get_sinthW2_DRbar(const Model& model)
      {
       double sthW2 = Utils::sqr(model.get_g1()) * 0.6 / 
                      (0.6 * Utils::sqr(model.get_g1()) + 
                      Utils::sqr(model.get_g2()));
       return sthW2;
      }
      

      
      template <class Model>
      void set_Mhh_pole_slha(Model& model,double mass)
      {
        model.get_physical_slha().Mhh = mass;
      }


      template <class Model>
      void set_Mss_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().Mss = mass;
      }

      

      template <class Model>
      void set_neutral_goldstone_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MAh = mass;
      }
     
           template <class Model>
      void set_MAh_pole_slha(Model& model, double mass)
      {
        model.get_physical_slha().MAh = mass;
      }
     
     

     //PA:  setting MZ and MW is necessary because we may have them as ouptuts
     template <class Model>
     void set_MZ_pole_slha(Model& model, double mass)
     {
        model.get_physical_slha().MVZ = mass;
     }

     template <class Model>
     void set_MW_pole_slha(Model& model, double mass)
     {
        model.get_physical_slha().MVWp = mass;
     }

     
     template <class Model>
     void set_MGluon(Model& model, double mass)
     {
        model.get_physical().MVG = mass;
     }
     
     template <class Model>
     void set_MPhoton(Model& model, double mass)
     {
        model.get_physical().MVP = mass;
     }

      template <class MI>
      typename SSDMSpec<MI>::RunningGetterMaps SSDMSpec<MI>::runningpars_fill_getter_maps()
      {
         typename SSDMSpec<MI>::RunningGetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTget::FInfo1 FInfo1;
         typedef typename MTget::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, se have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
        

        {
            typename MTget::fmap0 tmp_map;
            tmp_map["mS2"]  = &Model::get_mS2;
            tmp_map["mu2"] = &Model::get_mu2;
            map_collection[Par::mass2].map0 = tmp_map;
         }
        


         //dimensionless - mass dimension 0 parameters

         {
            typename MTget::fmap0 tmp_map;
            tmp_map["g1"]= &Model::get_g1;
            tmp_map["g2"]= &Model::get_g2;
            tmp_map["g3"]= &Model::get_g3;
            tmp_map["Lambda1"]= &Model::get_Lambda1;
            tmp_map["Lambda2"]= &Model::get_Lambda2;
            tmp_map["Lambda3"]= &Model::get_Lambda3;
            tmp_map["v"] = &Model::get_v;
            map_collection[Par::dimensionless].map0 = tmp_map;
         }


         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)

   
         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTget::fmap2 tmp_map;

            tmp_map["Yd"]= FInfo2( &Model::get_Yd, i012, i012);
            tmp_map["Yu"]= FInfo2( &Model::get_Yu, i012, i012);
            tmp_map["Ye"]= FInfo2( &Model::get_Ye, i012, i012);

            map_collection[Par::dimensionless].map2 = tmp_map;
         }
 
         // Functions utilising the one-index "plain-vanilla" function signature
         // (One-index member functions of model object)
         {
            typename MTget::fmap1 tmp_map;

            ////    tmp_map["S"] = FInfo1( &Model::get_Mss, i012345 );
           ////     tmp_map["h0"] = FInfo1( &Model::get_Mhh, i01 );
            //Here we may access the goldstone boson
            // and higgs. maybe too dangerous to keep?

            //Here we may access the goldstone boson
            //and higgs. maybe too dangerous to keep?
            tmp_map["d"] =    FInfo1( &Model::get_MFd, i012 );
            tmp_map["u"] =    FInfo1( &Model::get_MFu, i012 );
            tmp_map["e-"] =   FInfo1( &Model::get_MFe, i012 );
            tmp_map["e"] =    FInfo1( &Model::get_MFe, i012 );
            tmp_map["dbar"] = FInfo1( &Model::get_MFd, i012 );
            tmp_map["ubar"] = FInfo1( &Model::get_MFu, i012 );
            tmp_map["e+"] =   FInfo1( &Model::get_MFe, i012 );

            map_collection[Par::mass_eigenstate].map1 = tmp_map;
         }

         return map_collection;
      } 

      // Filler function for setter function pointer maps extractable from "runningpars" container
      template <class MI>
      typename SSDMSpec<MI>::RunningSetterMaps SSDMSpec<MI>::runningpars_fill_setter_maps()
      {
         typename SSDMSpec<MI>::RunningSetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTset::FInfo1 FInfo1;
         typedef typename MTset::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, se have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
         
         /// @{ mass2 - mass dimension 2 parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTset::fmap0 tmp_map;

            tmp_map["mS2"] = &Model::set_mS2;
            tmp_map["mu2"] = &Model::set_mu2;

            map_collection[Par::mass2].map0 = tmp_map;
         }
 
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTset::fmap0 tmp_map;
            tmp_map["v"] = &Model::set_v;

            map_collection[Par::mass1].map0 = tmp_map;
         }

         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {
            typename MTset::fmap0 tmp_map;
            tmp_map["g1"]= &Model::set_g1;
            tmp_map["g2"]= &Model::set_g2;
            tmp_map["g3"]= &Model::set_g3;
            tmp_map["Lambda1"]= &Model::set_Lambda1;
            tmp_map["Lambda2"]= &Model::set_Lambda2;
            tmp_map["Lambda3"]= &Model::set_Lambda3;

            map_collection[Par::dimensionless].map0 = tmp_map;
         }

         // Functions utilising the two-index "plain-vanilla" function signature
         // (Two-index member functions of model object)
         {
            typename MTset::fmap2 tmp_map;

            tmp_map["Yd"]= FInfo2( &Model::set_Yd, i012, i012);
            tmp_map["Yu"]= FInfo2( &Model::set_Yu, i012, i012);
            tmp_map["Ye"]= FInfo2( &Model::set_Ye, i012, i012);

            map_collection[Par::dimensionless].map2 = tmp_map;
         }

         return map_collection;
      } 

      /// @}

 
      // Need wrapper functios for A0 and H+ getters, to retrieve only the 
      // non-Goldstone entries. 
      // Need to pass in the model object, since we won't have the 'this' pointer
      template <class Model>
      double get_MAh_pole_slha(const Model& model)
      {
        return model.get_MAh_pole_slha();
      }
     
      template <class Model>
      double get_Mss_pole_slha(const Model& model)
      {
        return model.get_Mss_pole_slha();
      }



   
      // Filler function for getter function pointer maps extractable from "phys" container
      template <class MI>
      typename SSDMSpec<MI>::PhysSetterMaps SSDMSpec<MI>::phys_fill_setter_maps()
      {
        typename SSDMSpec<MI>::PhysSetterMaps map_collection; 
        typedef typename MI::Model Model;

        typedef typename MTset::FInfo1M FInfo1M;
        typedef typename MTset::FInfo2M FInfo2M;

        // Can't use c++11 initialise lists,
        // so have to initialise the index sets like this.
        static const int i01v[] = {0,1};
        static const std::set<int> i01(i01v, Utils::endA(i01v));

        static const int i012v[] = {0,1,2};
        static const std::set<int> i012(i012v, Utils::endA(i012v));

        static const int i0123v[] = {0,1,2,3};
        static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

        static const int i012345v[] = {0,1,2,3,4,5};
        static const std::set<int> i012345(i012345v, Utils::endA(i012345v));

        {  
          typename MTset::fmap0_extraM tmp_map;
          tmp_map["A0"] = &set_MAh_pole_slha<Model>;
          tmp_map["Goldstone0"] = &set_neutral_goldstone_pole_slha<Model>;
   
          /// the getters for these were removed but Pat last meeting
          /// we agreed to add setters here unless I misunderstood.
          /// need to discuss this
          tmp_map["W+"] = &set_MW_pole_slha<Model>;
          tmp_map["W-"] = &set_MW_pole_slha<Model>;
          tmp_map["Z0"] = &set_MZ_pole_slha<Model>;
       
          map_collection[Par::Pole_Mass].map0_extraM = tmp_map;
        }

        {  
          typename MTset::fmap0_extraM tmp_map;

          tmp_map["h0"] = &set_Mhh_pole_slha<Model>;
          tmp_map["s0"] = &set_Mss_pole_slha<Model>;
          
          map_collection[Par::Pole_Mass].map0_extraM = tmp_map;
        }

   

        return map_collection;
      }

      // Filler function for getter function pointer maps extractable from "phys" container
      template <class MI>
      typename SSDMSpec<MI>::PhysGetterMaps SSDMSpec<MI>::phys_fill_getter_maps()
      {
         typename SSDMSpec<MI>::PhysGetterMaps map_collection; 
         typedef typename MI::Model Model;

         typedef typename MTget::FInfo1 FInfo1;
         typedef typename MTget::FInfo2 FInfo2;

         // Can't use c++11 initialise lists, so have to initialise the index sets like this.
         static const int i01v[] = {0,1};
         static const std::set<int> i01(i01v, Utils::endA(i01v));

         static const int i012v[] = {0,1,2};
         static const std::set<int> i012(i012v, Utils::endA(i012v));

         static const int i0123v[] = {0,1,2,3};
         static const std::set<int> i0123(i0123v, Utils::endA(i0123v));

         static const int i012345v[] = {0,1,2,3,4,5};
         static const std::set<int> i012345(i012345v, Utils::endA(i012345v));
         
         /// @{ Pole_Mass - Pole mass parameters
         //
         // Functions utilising the "plain-vanilla" function signature
         // (Zero index member functions of model object)
         {  
            typename MTget::fmap0 tmp_map;
                   
            // ***REMOVED THESE! Leave them to the QedQcdWrapper.***
            // reinstating the Z and W getters as otherwise there is no
            // point in having the setters!
            tmp_map["Z0"] = &Model::get_MVZ_pole_slha;
            //// //tmp_map["g"] = &Model::get_MGluon_pole_slha;
             tmp_map["g"] = &Model::get_MVG_pole_slha;


            map_collection[Par::Pole_Mass].map0 = tmp_map;
         } 

         // Functions utilising the "extraM" function signature
         // (Zero index, model object as argument)
         {
            typename MTget::fmap0_extraM tmp_map;
        
            // Using wrapper functions defined above
            tmp_map["A0"] = &get_MAh_pole_slha<Model>;

      
            map_collection[Par::Pole_Mass].map0_extraM = tmp_map;
         }

         // Functions utilising the one-index "plain-vanilla" function signature
         // (One-index member functions of model object)
         {  
            typename MTget::fmap0 tmp_map;

            tmp_map["S"] =  &Model::get_Mss_pole_slha;
            tmp_map["h0"] = &Model::get_Mhh_pole_slha;

            tmp_map["A0"] = &Model::get_MAh_pole_slha;


            map_collection[Par::Pole_Mass].map0 = tmp_map;
         }
 

         return map_collection;
      }

  
   } // end SpecBit namespace 
} // end Gambit namespace

#endif
