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
///  Authors (add name if you modify):
///   
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  *********************************************


#ifndef __ColliderBit_types_hpp__
#define __ColliderBit_types_hpp__

#include <vector>
#include <memory>
#include "HEPUtils/Event.h"
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Collider.hpp"

using std::vector;
using std::shared_ptr;

namespace Gambit {
  
  namespace ColliderBit {

    /// @brief What is this ColliderLogLikes struct mentioned in the rollcall??
    typedef vector<vector<SignalRegionData>> ColliderLogLikes;

    /// @brief Turns out we will only use this container once. Oh well.
    template <typename T>
    class SharedPointerVector : public vector<shared_ptr<T>> {
      /// @note Not as thread-safe as it looks, since it uses shared_ptr.
      ///     Each thread must have a SharedPointerVector pointing to unique Ts.
    public:
      void push_back(shared_ptr<T> entry) {
        #pragma omp critical (vectorUpdate)
        { vector<shared_ptr<T>>::push_back(entry); }
      }
      void inline push_back(T& entry) { push_back(shared_ptr<T>(&entry)); }
      void inline push_back(T* entry) { push_back(shared_ptr<T>(entry)); }

      void pop_back() {
        #pragma omp critical (vectorUpdate)
        { vector<shared_ptr<T>>::pop_back(); }
      }
      void inline clear() { while(vector<shared_ptr<T>>::size()) pop_back(); }
    };

    /// @brief A list of analyses to be run on some events
    typedef SharedPointerVector<Analysis> AnalysisPointerVector;
  }
}



#endif /* defined __ColliderBit_types_hpp__ */
