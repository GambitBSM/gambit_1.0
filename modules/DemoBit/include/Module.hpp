//
//  Module.hpp
//  GlobalFits
//
//  Created by Hugh Dickinson on 22/11/2012.
//  Copyright (c) 2012 Hugh Dickinson. All rights reserved.
//

#ifndef GlobalFits_Module_hpp
#define GlobalFits_Module_hpp

/// All declarations in the gambit namespace
namespace gambit {
	
	/** \note The concept of a module as employed here is somewhat abstract. It may be associated with a
	 * single concrete class, or it may simply describe an aggregate of interacting class methods or
	 * namespace scope functions and data.
	 *
	 * A module is associated with a tag type which has no intrinsic functionality. It simply labels
	 * the constituents of a module.
	 */
	
	/** Rather than just relying on void as the "type" for non-concrete abstractions like modules, let's define a
	 * dummy type nonConcrete to explicitly assume that role. It may be useful later for checking whether we need
	 * to instantiate any concrete classes at runtime etc.
	 */
	struct nonConcrete{};
	
	/** \class moduleActor A common feature of modules is that at least some of their constituents should
	 * be able to do something. We'll call these "actors". An actor is associated with a tag type which has 
	 * no intrinsic functionality. It simply labels the actions which this actor provides to the functionality 
	 * of a module. Although an actor could still (in principle) represent an aggregate of (more closely related) 
	 * functions and data is more likely than a module to describe a single concrete class. In such cases the
	 * type of that class can be advertised by specialising the moduleActorType template for a particular 
	 * module tag and actor tag.
	 */
	template <typename ModuleTagT, typename ActorTagT>
	moduleActorType {
		
		// default to nonConcrete
		typedef nonConcrete type;
		
	};
	
	/** \class moduleActorAction The actions which an actor can perform can be defined by providing
	 * specialisations of moduleActorAction.
	 *
	 * An action is associated with a tag type which has no intrinsic functionality. It simply labels
	 * this action but could be reused if many actors (even in different modules) provide similar actions.
	 *
	 * The integer template parameter "Overload" enables multiple actions which have the same template argument triplet.
	 * This could be useful if you want to enable a set of overloaded methods or functions as actions which
	 * should logically have the same tags, but beware, this might get a bit confusing.
	 */
	template <typename ModuleTagT, typename ActorTagT, typename ActionTagT, int Overload>
	moduleActorAction {
		
		// provide easy access to the type of the underlying actor (remember, it could be nonConcrete)
		typedef typename moduleActorType<ModuleTagT, ActorTagT>::type actor_type;
		
		// We'll default to a no-op!
		static void apply(){}
		
	};
	
}

/// Always define macros ouside of namespace scope

#define DECLARE_MODULE(MODULETAG) \
namespace gambit {\
	namespace tags { \
		namespace modules {\
			struct MODULETAG{};\
		}\
	}\
}\

#define DECLARE_ACTOR(ACTORTAG)\
namespace gambit {\
	namespace tags {\
		namespace actors {\
			struct ACTORTAG{};\
		}\
	}\
}\

#define DECLARE_MODULE_ACTOR_TYPE(MODULETAG, ACTORTAG, ACTORTYPE)\
namespace gambit {\
	template<>\
	moduleActorType<tags::modules::MODULETAG, tags::actors::ACTORTAG> {\
		\
		typedef ACTORTYPE type;\
		\
	};\
}

#define DECLARE_MODULE_ACTOR_ACTION(MODULETAG, ACTORTAG, ACTIONTAG, ACTION, OVERLOAD)\
namespace gambit {\
	namespace tags {\
		namespace actions {\
			struct ACTIONTAG{};\
		}\
	}\
	\
	template <>\
	moduleActorAction<tags::modules::MODULETAG, tags::actors::ACTORTAG, tags::actions::ACTIONTAG, OVERLOAD> {\
		\
		typedef typename moduleActorType<tags::modules::MODULETAG, tags::actors::ACTORTAG>::type actor_type;\
		\
		static void apply(){}\
		\
	};\
}


#endif
