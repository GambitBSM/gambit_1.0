//
//  ModuleAccess.hpp
//  GlobalFits
//
//  Created by Hugh Dickinson on 22/11/2012.
//  Copyright (c) 2012 Hugh Dickinson. All rights reserved.
//

#ifndef GlobalFits_ModuleOperations_hpp
#define GlobalFits_ModuleOperations_hpp

#include "Module.hpp"

/** \class moduleActorInstanceWrapper A class to provide uniform access to an instance of a particular
 * actor which is concretely a single class.
 */
template <typename ModuleTag, typename ActorTag>
struct moduleActorInstanceWrapper {
	
	
};

/** \class moduleActorAggregateWrapper A class to provide uniform access to an instance of a particular
 * actor which is concretely an aggregate of class methods and/or namespace scope functions.
 */
template <typename ModuleTag, typename ActorTag>
struct moduleActorInstanceWrapper {
	
	
};

/** \class moduleActorInstantiator A class to intantiate the class(es) required by an actor.
 */
template <typename ModuleTag, typename ActorTag>
struct moduleActorInstantiator {

};

#endif
