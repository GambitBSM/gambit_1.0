// -*- C++ -*-
//
// This file is part of MCUtils -- https://bitbucket.org/andybuckley/mcutils
// Copyright (C) 2013-2015 Andy Buckley <andy.buckley@cern.ch>
//
// Embedding of MCUtils code in other projects is permitted provided this
// notice is retained and the MCUtils namespace and include path are changed.
//
#pragma once

/// @file Functions for filtering and classifying HepMC GenVertex objects
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "HepMC/GenEvent.h"
#include "boost/function.hpp" //< Replace with std::function when possible
#include <vector>

namespace MCUtils {


  /// @name GenVertex classifier functions
  //@{

  /// Convenient type name for a generic classifier function / function object
  typedef boost::function<bool(const HepMC::GenVertex*)> VClassifier;


  /// Determine if the vertex has no incoming particles
  inline bool hasNoParents(const HepMC::GenVertex* v) {
    return v->particles_in_size() == 0;
  }

  /// Determine if the vertex has no outgoing particles
  inline bool hasNoChildren(const HepMC::GenVertex* v) {
    return v->particles_out_size() == 0;
  }

  /// Determine if the vertex has no connected particles
  inline bool isDisconnected(const HepMC::GenVertex* v) {
    return v->particles_in_size() == 0 && v->particles_out_size() == 0;
  }

  //@}


}
