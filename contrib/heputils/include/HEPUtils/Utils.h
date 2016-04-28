// -*- C++ -*-
//
// This file is part of HEPUtils -- https://bitbucket.org/andybuckley/heputils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of HEPUtils code in other projects is permitted provided this
// notice is retained and the HEPUtils namespace and include path are changed.
//
#pragma once

#if __cplusplus <= 199711L
#error "This library needs at least a C++11 compliant compiler: are you using -std=c++11?"
#endif

/// @file Utility functions
/// @author Andy Buckley <andy.buckley@cern.ch>

namespace HEPUtils {


  /// @name Container utils
  //@{

  /// Return true if f(x) is true for any x in container c, otherwise false.
  template <typename CONTAINER, typename FN>
  inline bool any(const CONTAINER& c, const FN& f) {
    for (const typename CONTAINER::value_type& val : c) {
      if (f(val)) return true;
    }
    return false;
  }

  /// Return true if f(x) is true for all x in container c, otherwise false.
  template <typename CONTAINER, typename FN>
  inline bool all(const CONTAINER& c, const FN& f) {
    for (const typename CONTAINER::value_type& val : c) {
      if (!f(val)) return false;
    }
    return true;
  }

  /// Return true if x is found in container c, otherwise false.
  template <typename CONTAINER, typename T>
  inline bool contains(const CONTAINER& c, const T& x) {
    for (const typename CONTAINER::value_type& val : c) {
      if (val == x) return true;
    }
    return false;
  }


  //@}


}
