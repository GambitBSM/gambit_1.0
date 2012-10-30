#ifndef __Objects__
#define __Objects__

template <typename TagType>
struct ObjectType {
// a nice way to fetch what type an object has, based only on its tag.
    typedef double type;  // type for a numeric observable, by default.
};

template <typename TagType>
struct ObjectOfInterest {
/* An observable, likelihood, or any other such "object of interest.
//      It is easily categorized in terms of a "TagType". */
    typedef typename ObjectType<TagType>::type ValueType;
    static ValueType *value;
};


#define ASSOCIATE_TAG_OBJECT(TAG_TYPE, VALUE_TYPE) \
/* Create a specification of ObjectType, and immediately
//       associate the TAG_TYPE with the ObjectOfInterest's VALUE_TYPE */ \
namespace Tags { \
    struct TAG_TYPE{}; \
} \
\
template<> \
struct ObjectType<Tags::TAG_TYPE> { \
    typedef VALUE_TYPE type; \
}; \
\
template<> \
ObjectOfInterest<Tags::TAG_TYPE>::ValueType \
                * ObjectOfInterest<Tags::TAG_TYPE>::value = NULL; \


#endif /* defined(__Objects__) */
