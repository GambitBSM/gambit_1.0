//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module
///  ColliderBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with ColliderBit.
///
///  Add to this if you want to define a new type
///  for the functions in ColliderBit to return,
///  but you don't expect that type to be needed
///  by any other modules.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
///
///  *********************************************


#ifndef __ColliderBit_types_hpp__
#define __ColliderBit_types_hpp__

#include <vector>
#include <memory>
/// \todo Some of these includes may eventually need to be in shared_types
/// \note They may be shared between backends, depending on how we backend Pythia, Delphes, FastSim, etc...
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Collider.hpp"

namespace Gambit {
  
  namespace ColliderBit {

    /// @brief What is this ColliderLogLikes struct mentioned in the rollcall??
    typedef std::vector<std::vector<SignalRegionData>> ColliderLogLikes;

    /// @brief ColliderBit is using vectors like this quite often...
    template <typename T>
    class SharedPointerVector : public std::vector<std::shared_ptr<T>> {
    public:
      void push_back(std::shared_ptr<T> entry) {
        std::vector<std::shared_ptr<T>>::push_back(entry);
      }
      void push_back(T& entry) { push_back(std::shared_ptr<T>(&entry)); }
      void push_back(T* entry) { push_back(std::shared_ptr<T>(entry)); }
    };

    /// @brief A list of collider subclasses to be run during a scan
    typedef SharedPointerVector<PythiaBase> PythiaList;

    /// @brief A list of events corresponding to each PythiaBase subclass
    typedef SharedPointerVector<Pythia8::Event> PythiaEventList;

    /// @brief A list of events converted to HEP_Simple_Lib format
    typedef SharedPointerVector<HEP_Simple_Lib::Event> HEPSL_EventList;

    /// @brief A list of analyses to be run on some events
    typedef SharedPointerVector<Analysis> AnalysisList;
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
