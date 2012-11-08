//
//  TagCustomisable.h
//  TagDispatchDemo
//
//  Created by Hugh Dickinson on 16/10/2012.
//  Copyright (c) 2012 Hugh Dickinson. All rights reserved.
//

#ifndef __TagDispatchDemo__TagCustomisable__
#define __TagDispatchDemo__TagCustomisable__

#include <iostream>

/** The Quick Intro to Tag Dispatching.
 *
 * Tag dispatching referes to a subset of C++ techniques which use Traits or Policy classes to customise
 * the properties (e.g. data types and values) and behaviour (e.g. specialised method behaviour) respectively.
 *
 * The method uses C++ template classes, functions and methods to implement flexible customisation of class 
 * functionality by using specially defined (but arbitrary) "tag" types to specialise template Traits or Policy 
 * classes which should implement a small subset of the required functionality. 
 *
 * Other classes can then access a particular specialised functionality using the tag type as a kind of
 * access key.
 *
 * The alternative strategy is to group all the specialised functionality pertaining to a given type into a single 
 * traits or policy class and specialise this based on the type for which the functionality is being specified. 
 * This approach is far less flexible and makes it diffficult to provide default implementations if required.
 */


/** Example: Hello world with tag dispatching - A trivial example which specialises a classes functionality using 
 * tag dispatching.
 *
 * At some point before we use our specialised classes, we'll need to define our tag types, so we might as well do 
 * it here. In principle these tags only need to be defined at the point when the compiler actually needs to
 * instantiate a specialised class. These tag types can simply be C++ structs or classes. We don't need to
 * define any methods or data, because the most compilers will never actually instantiate the tag type itself anyway.
 *
 * We'll define two tags "Cruel" and "BraveNew". To keep things tidy we'll group our tags in a namespace called "Tags".
 */

namespace Tags {
	struct Cruel{}; // note that the empty definition "{}" is required.
	struct BraveNew{};
}

/** The next stage is to define some Traits and Policy Classes which can be specialised for the each tag type.
 * We'll have one traits class "HelloStringType" which contains a nested type definition, and one policy class
 * "HelloStringContents" which provides a required method. The first step is to define the base templates, which 
 * are parameterised by an arbitrary tag type and provide the default behaviour. We'll just declare these in the 
 * global namespace.
 */

template <typename TagT> // parameterised by the tag type
struct HelloStringType {
	typedef std::string type; // default type is std::string.
};

template <typename TagT> // parameterised by the tag type
struct HelloStringContents {
	
	/* We'll use the tag in combination with the HelloStringType traits template to get a return type for
	 * the (in this case static) class method.
	 */
	typedef typename HelloStringType<TagT>::type return_type; // the typename keyword is required in this case.
	
	// Now implement the default functionality
	static return_type getContents(){
		return return_type(); // default to returning an a default initialised instance of return_type.
	}
};

/** So far we've only provided default implementations. Now we can start to customise! Let's provide 
 * specialisations of HelloStringType and HelloStringContents for the Cruel tag.
 */

template<> // Empty angle brackets indicates full specialisation. Could also be partial specialisation.
struct HelloStringType<Tags::Cruel>{ // specialise for the Cruel tag (Note that we had to add the namespace qualifier).

	typedef const char * type; // If the tag is cruel return a constant character array instead of the default string.
	
};

template<>
struct HelloStringContents<Tags::Cruel>{

	/* We'll hard-coded the return type here but we could have used a typedef as in the default implementation.
	 * Importantly, other parts of the application can tell what the return type will be using the specialised 
	 * HelloStringType traits class.
	 */
	static const char * getContents(){
		return "cruel";
	}
	
};

/** Let's also specialise HelloStringContents for the "BraveNew" tag, but instead of specialising HelloStringType 
 * we'll just  fall back on the default std:string.
 */

template<>
struct HelloStringContents<Tags::BraveNew>{
	
	/* We can access the default return type using a the HelloStringType class. Since we supply a template
	 * parameter for which HelloStringType has not been specialised, the typedef inside default implementation
	 * will be used.
	 */
	typedef typename HelloStringType<Tags::Cruel>::type return_type; // again, the typename keyword is required in this case.

	static return_type getContents(){ // We don't "hard-code" the return type this time.
		return "Brave New";
	}
	
};


/* The above code contains a lot of boilerplate which the end-user would probably not appreciate having to enter
 * every time they want to specialise some functionality. We can simplify this by providing a parameterised macro
 * preprocessor macro which will serve in most cases. In desparate situations one can always fall back on hand 
 * coding! Let's write a macro called HELLOVARIANT which automates tag, definition and the required template 
 * specialisations. As we've written it content can only be a string type. This could be adapted with another 
 * policy class.
 */

#define HELLOVARIANT(TAG, TYPE, CONTENT) \
namespace Tags { \
struct TAG{}; \
} \
\
template<> \
struct HelloStringType<Tags::TAG> { \
typedef TYPE type;\
}; \
\
template<> \
struct HelloStringContents<Tags::TAG> { \
typedef typename HelloStringType<Tags::TAG>::type return_type;\
\
static return_type getContents(){ \
return #CONTENT;\
}\
\
};

/* Now let's use this macro to enable one more specialisation Waynes that also uses a std::string.
 */
HELLOVARIANT(Waynes, std::string, and Party On)

/** Okay, now let's write a small class which will use the functionality we've developed.
 */

struct HelloWorld { // use a struct for default public visibility
	
	// For simplicity we'll let the compiler provide default constructors, destructor and assignent operator
	
	// Now define a single templatised class method which can be parameterised using our tags.
	template<typename TagT>
	void sayHello(){
		std::cout << "Hello " << HelloStringContents<TagT>::getContents() << " World!" << std::endl;
	}
	
};

#endif /* defined(__TagDispatchDemo__TagCustomisable__) */
