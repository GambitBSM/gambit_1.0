#ifndef __ModuleBit__
#define __ModuleBit__

#include <iostream>
#include <typeinfo>
#include "Objects.hpp"

#define CREATE_BIT(BIT) \
/* Create a generic "Bit" which can "Provide" and "Require" Objects Of Interest
//     (OOI) which are specified by "TagType". For now I'll just run with this...
//     I'll put in some placeholder functions which "Report to the core".
//     If the rest of GAMBIT likes this, I can work with the core guys on
//     how to implement those functions later. ---Abram  */ \
struct BIT {  \
    template <typename TagType> \
    typename ObjectType<TagType>::type * getValueAddress() { \
        std::cout<<"I do not support this tag: \n"; \
        std::cout<<typeid(TagType).name()<<"\n"; \
        return 0; \
    } \
    \
    template <typename TagType> \
    bool isRequired() { \
        return false; \
    } \
    \
    template <typename TagType> \
    bool canBeProvided() { \
        return false; \
    } \
    \
    template <typename TagType> \
    void iRequireReport() { \
        /* Report to the core that this Bit requires this OOI<TagType> */ \
    } \
    \
    template <typename TagType> \
    void iProvideReport() { \
        /* Report to the core that this Bit provides this OOI<TagType> */ \
    } \
};


#define REQUIRE_OBJECT(BIT, TAG_TYPE) \
template <> \
ObjectType<Tags::TAG_TYPE>::type * BIT::getValueAddress<Tags::TAG_TYPE>() { \
    return ObjectOfInterest<Tags::TAG_TYPE>::value; \
} \
\
template <> \
bool BIT::isRequired<Tags::TAG_TYPE>() { \
    return true; \
} \
\
template <> \
bool BIT::canBeProvided<Tags::TAG_TYPE>() { \
    /* CANNOT BOTH REQUIRE AND PROVIDE AN OOI... */ \
    return false; \
} \
\
template <> \
void BIT::iRequireReport<Tags::TAG_TYPE>() { \
    /* Report to the core that this Bit requires this OOI<TagType> ...
    //     Fake functionality below. Implement later. */ \
    std::cout<<"Dear Core, I require OOI with tag: \n"; \
    std::cout<<typeid(Tags::TAG_TYPE).name()<<"\n"; \
} \
\
template <> \
void BIT::iProvideReport<Tags::TAG_TYPE>() { \
    /* CANNOT BOTH REQUIRE AND PROVIDE AN OOI... */ \
    std::cout<<"Dear Core, I should throw an EXCEPTION!! \n"; \
    std::cout<<typeid(Tags::TAG_TYPE).name()<<"\n"; \
}



#define PROVIDE_OBJECT(BIT, TAG_TYPE) \
template <> \
ObjectType<Tags::TAG_TYPE>::type * BIT::getValueAddress<Tags::TAG_TYPE>() { \
    return ObjectOfInterest<Tags::TAG_TYPE>::value; \
} \
\
template <> \
bool BIT::isRequired<Tags::TAG_TYPE>() { \
    /* CANNOT BOTH REQUIRE AND PROVIDE AN OOI... */ \
    return false; \
} \
\
template <> \
bool BIT::canBeProvided<Tags::TAG_TYPE>() { \
    return true; \
} \
\
template <> \
void BIT::iRequireReport<Tags::TAG_TYPE>() { \
    /* CANNOT BOTH REQUIRE AND PROVIDE AN OOI... */ \
    std::cout<<"Dear Core, I should throw an EXCEPTION!! \n"; \
    std::cout<<typeid(Tags::TAG_TYPE).name()<<"\n"; \
} \
\
template <> \
void BIT::iProvideReport<Tags::TAG_TYPE>() { \
    /* Report to the core that this Bit provides this OOI<TagType> ...
    //     Fake functionality below. Implement later. */ \
    std::cout<<"Dear Core, I provide OOI with tag: \n"; \
    std::cout<<typeid(Tags::TAG_TYPE).name()<<"\n"; \
}


#endif /* defined(__ModuleBit__) */
