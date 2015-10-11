//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A replacement type for 'bool' which does not
///  allow automatic conversion to/from 'int' etc.
///
///  Doesn't do fancy stuff like allow comparisons,
///  but can use as the condition in 'if'
///  statements, and supports automatic conversion
///  to (but not from) bool.
///
///  Currently used in the SubSpectrum class to
///  resolve overload ambiguities between int and
///  bool arguments due to automatic conversions.
///
///  (based on https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Safe_bool)
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Oct
///
///  *********************************************

#ifndef __safebool_hpp__
#define __safebool_hpp__

namespace Gambit {

   class SafeBool {
       bool ok_;
       typedef void (SafeBool::*bool_type)() const;
       void this_type_does_not_support_comparisons() const {}
     public:
       explicit SafeBool(bool b=true):ok_(b) {}
   
       operator bool_type() const {
         return ok_ ? 
           &SafeBool::this_type_does_not_support_comparisons : 0;
       }
   };
   template <typename T>
   bool operator!=(const SafeBool& lhs, const T&) {
       lhs.this_type_does_not_support_comparisons();	
       return false;
   }
   template <typename T>
   bool operator==(const SafeBool& lhs, const T&) {
       lhs.this_type_does_not_support_comparisons();
       return false;
   }
}

#endif
