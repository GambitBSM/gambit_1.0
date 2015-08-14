//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
//
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr 
///
///  *********************************************

#ifndef __SLHAskeleton_hpp__
#define __SLHAskeleton_hpp__

#include "gambit/Elements/subspectrum.hpp"

namespace Gambit {
   namespace SpecBit {

      /// Skeleton "model" class which interacts with an SLHAea object
      class SLHAeaModel
      {
         private:
           SLHAea::Coll data;

         public:
           /// @{ Constructors
           SLHAeaModel();
           SLHAeaModel(const SLHAea::Coll& input);
           /// @}

           /// Get reference to internal SLHAea object
           const SLHAea::Coll& getSLHAea() const;

           /// Helper functions to do error checking for SLHAea object contents
           double getdata(const std::string& block, int index) const;
           double getdata(const std::string& block, int i, int j) const;
      };

      // Needed for typename aliases in Spec and MapTypes classes
      
      template<class DerivedModel>
      struct SLHAskeletonTraits
      {
         typedef DerivedModel Model;
         typedef DummyInput   Input;
      };
      
      template<class Derived, class DerivedTraits> 
      class SLHAskeleton : public Spec<Derived,DerivedTraits> 
      {
         protected:
            // Store SLHAea object internally (via wrapper)
            typename DerivedTraits::Model slhawrap;

         public:
            typedef MapTypes<DerivedTraits,MapTag::Get> MTget; 

            // Constructors/destructors
            SLHAskeleton() 
              : Spec<Derived,DerivedTraits>(slhawrap)  
              , slhawrap()
            {}

            SLHAskeleton(const SLHAea::Coll& input)
              : Spec<Derived,DerivedTraits>(slhawrap)
              , slhawrap(input)
            {}

            SLHAskeleton(const SLHAskeleton& other)
              : Spec<Derived,DerivedTraits>(slhawrap)
              , slhawrap(other.slhawrap)
            {} 

            virtual ~SLHAskeleton() {};
 
            // virtual int get_index_offset() const; 
            // virtual int get_numbers_stable_particles() const;

            /// RunningPars interface overrides
            virtual double GetScale() const
            { 
               /// TODO: Currently assumes all blocks at same scale. Should at least check if this
               /// is true in constructor.
               const SLHAea::Coll& data(slhawrap.getSLHAea());
               double scale;
               try {
                 scale = SLHAea::to<double>(data.at("GAUGE").find_block_def()->at(3));
               }
               catch (const std::out_of_range& e) {
                 std::ostringstream errmsg;
                 errmsg << "Could not find block \"GAUGE\" in SLHAea object. Received out_of_range error with message: " << e.what();
                 utils_error().raise(LOCAL_INFO,errmsg.str());    
               }
               return scale;
            }

            virtual void SetScale(double)
            {
              // this is actually a bit of a drag since one should go through all the blocks
              // that have Q defined and set them accordingly. Leave for now.
               utils_error().raise(LOCAL_INFO,
                  "Call made to SetScale function of SLHAskeleton! This is currently not implemented!");
            }

            virtual void RunToScale(double)
            {
               utils_error().raise(LOCAL_INFO,
                  "Call made to RunToScale function of SLHAskeleton!  This is not allowed; this\n"
                  "version of the SubSpectrum wrapper cannot perform RGE running.  It is just a\n"
                  "simple box containing SLHA information read from a file or SLHAea object.\n");
            }


         protected:
            /// Map fillers go in derived class
    
      };
 

   } // end SpecBit namespace
} // end Gambit namespace

#endif
