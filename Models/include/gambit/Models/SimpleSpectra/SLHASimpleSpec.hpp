//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper base class for simple subspectrum
///  wrappers that want to use SLHAea features
///
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

#ifndef __SLHASimpleSpec_hpp__
#define __SLHASimpleSpec_hpp__

#include "gambit/Elements/spec.hpp"

namespace Gambit
{

      /// Skeleton "model" class which interacts with an SLHAea object
      class SLHAeaModel
      {
         protected:
           /// SLHAea object
           SLHAea::Coll data;
           /// PDG translation map (e.g. from SLHA1 to SLHA2 for MSSMskeleton) 
           std::map<int, int> PDG_translation_map;

         public:
           /// @{ Constructors
           SLHAeaModel();
           SLHAeaModel(const SLHAea::Coll& input);
           /// @}

           /// Get reference to internal SLHAea object
           const SLHAea::Coll& getSLHAea(bool = false) const;

           /// Add spectrum information to an SLHAea object
           void add_to_SLHAea(SLHAea::Coll&, bool = false) const;

           /// PDG code translation map, for special cases where an SLHA file has been read in and the PDG codes changed.
           const std::map<int, int>& PDG_translator() const;

           /// Helper functions to do error checking for SLHAea object contents
           double getdata(const std::string& block, int index) const;
           double getdata(const std::string& block, int i, int j) const;
      };

      template<class Derived> 
      class SLHASimpleSpec : public Spec<Derived> 
      {
         public:
            // Grab typedefs from derived wrapper traits class 
            // (only needed because this is a template class, and would have to
            // qualify the name all over the place in order to use the equivalent
            // typedef which is inherited from the base class)
            typedef typename SpecTraits<Derived>::Model Model; 
            typedef typename SpecTraits<Derived>::Input Input; 

         protected:
            // Store SLHAea object internally (via wrapper)
            Model slhawrap;

            // Dummy placeholder for potential Inputs object
            Input dummyinput;

         public:
            typedef MapTypes<Derived,MapTag::Get> MTget; 

            // Constructors/destructors
            SLHASimpleSpec() 
             : slhawrap()
            {}

            SLHASimpleSpec(const SLHAea::Coll& input_slha)
             : slhawrap(input_slha)
            {}

            virtual ~SLHASimpleSpec() {};
 
            // Functions to interface Model and Input objects with the base 'Spec' class
            // Need both const and non-const versions of it, so that wrapped objects cannot be modified
            // if the wrapper is const
            Model& get_Model() { return slhawrap; }
            Input& get_Input() { return dummyinput; /*unused, but needs to be defined for the interface*/ }
            const Model& get_Model() const { return slhawrap; }
            const Input& get_Input() const { return dummyinput; /*unused, but needs to be defined for the interface*/ }

            /// @{ RunningPars interface overrides
            virtual double GetScale() const
            { 
               /// TODO: Currently assumes all blocks at same scale. Should at least check if this
               /// is true in constructor.
               const SLHAea::Coll& data(slhawrap.getSLHAea());
               double scale;
               try
               {
                 scale = SLHAea::to<double>(data.at("GAUGE").find_block_def()->at(3));
               }
               catch (const std::out_of_range& e)
               {
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
                  "Call made to SetScale function of SLHASimpleSpec! This is currently not implemented!");
            }

            virtual void RunToScaleOverride(double)
            {
               utils_error().raise(LOCAL_INFO,
                  "Call made to RunToScale function of SLHASimpleSpec!  This is not allowed; this\n"
                  "version of the SubSpectrum wrapper cannot perform RGE   It is just a\n"
                  "simple box containing SLHA information read from a file or SLHAea object.\n");
            }
            /// @}

         protected:
            /// Map fillers go in derived class
    
      };
 

} // end Gambit namespace

#endif
