#ifndef __gambit_exceptions_hpp__
#define __gambit_exceptions_hpp__
#include <boost/exception/info.hpp>
#include <string>
#include <boost/throw_exception.hpp>


/*! \file exceptions.hpp
 * \brief Interface for exception throwing
 *
 * TODO: (Pat) these need to be rewritten so that the functions at the bottom are properly encapsulated
 *       into the actual exception objects, by adding new member functions to the exception classes and
 *       setting the "what" internal string at construction (although it should have a class default).
 *
 * Declares the namespace gambit::exceptions, defining methods as well the user macro:
 *
 * GAMBIT_THROW_EXCEPTION(e);
 *
 * \date 2011 Aug
 * \author Johan Lundberg
 */

/*! \brief user method for throwing exceptions deriving from gambit_exception_base
 *
 * Example use:
 * \code
 * using namespace gambit::exceptions;
 * GAMBIT_THROW_EXCEPTION(e_unphysical << i_text("mass is negative"));
 * \endcode
 *
 * The macro enforces use of gambit_exception_base or derived exceptions, and
 * adds various debug information to e before throwing.
 */
#define GAMBIT_THROW_EXCEPTION(e) do{                                    \
    ::gambit::exceptions::Compiletime_Cast_Test< ::gambit::exceptions::gambit_exception_base>(e); \
    BOOST_THROW_EXCEPTION(e) ; }while(0)


namespace gambit{

  /*! \brief gambit exceptions
   *
   * gambit static/public exception related methods and classes.
   *
   * Note that the throwing macro GAMBIT_THROW_EXCEPTION(e) is also defined in exceptions.hpp. Please read its
   * documentation first.
   *
   *  \author Johan Lundberg
   *  \date 2011 Aug */
  namespace exceptions{

    /*! \brief gambit exception base class
     *  \author Johan Lundberg
     *  \date 2011 Aug
     */
    class gambit_exception_base: virtual public boost::exception, virtual public std::exception {
    public:
      virtual inline std::string getName() const {return "gambit_exception_base";}
    };

    /*! \brief configuraton exception
     *
     * Throw this when the setup / configuration (not the physics/math)
     * is internally inconsistent
     *  \author Johan Lundberg
     *  \date 2011 Aug */
    class e_configuration: virtual public gambit_exception_base {
    public:
      virtual inline std::string getName() const {return "e_configuration";}
    };

    /*! \brief incalculable exception
     *
     * Base exception for cases when you can not calculate the resuls.
     *  \author Johan Lundberg
     *  \date 2011 Aug */
    class e_incalculable: virtual public gambit_exception_base {
    public:
      virtual inline std::string getName() const {return "e_incalculable";}
    };

    /*! \brief unphysical exception
     *
     * Throw this when the considered physics/math is fundamentally bad
     * Eg negative number of expected events, divergences.
     *
     *  \author Johan Lundberg
     *  \date 2011 Aug */
    class e_unphysical: virtual public e_incalculable {
    public:
      virtual inline std::string getName() const {return "e_unphysical";}
    };

    /*! \brief unphysical exception
     *
     * Throw this when the physics/math might be good but can not deal with it
     *
     *  \author Johan Lundberg
     *  \date 2011 Aug */
    class e_limitation: virtual public e_incalculable {
    };

    //! \brief object for adding a text description to a thrown boost exception
    typedef boost::error_info<struct tag_gambit_exception_info,std::string> i_text;
    //! \brief object for adding a stacktrace (as text) to a thrown boost exception
    typedef boost::error_info<struct tag_gambit_exception_trace,std::string> i_trace;

    /*! \brief Method for compile time test of type. If cast does not work, it does not compile
     * compiles if there is any conversion is possible.
     *
     * example: Compiletime_Cast_Test<std::string>(32)      fails to compile
     *          Compiletime_Cast_Test<std::string>("hello")              compiles
     *          Compiletime_Cast_Test<SomeBaseClass>(SomeDerivedClass()) compiles
     *          Compiletime_Cast_Test<SomeBaseClass>(SomeBaseClass)      compiles
     *
     * This is probably only useful in macros where there's no type information available.
     *
     */
    template <class T>
    inline void Compiletime_Cast_Test(T const & ){} // this is the whole thing.

    /*! \brief function returning an i_trace object containing the current stacktrace
     *
     * Example use:
     * \code
     * using namespace gambit::exceptions;
     * GAMBIT_THROW_EXCEPTION(e_unphysical << i_trace_do() << i_text("mass is negative"));
     * \endcode
     */
    i_trace i_trace_do() throw();

    /*! \brief extract exception origin ( file, function, line number )
     *
     * or empty string if not available
     */
    std::string get_exception_origin(boost::exception const & e);

    /*! \brief extract detailed backtrace, as stored with the i_trace type
     *
     * or empty string if not available
     */
    std::string get_exception_trace(boost::exception const & e);

    /*! \brief extract exception text as stored with the i_text type
     *
     * or empty string if not available
     */
    std::string get_exception_text(boost::exception const & e);

    /*! \brief extract full details from exception.
     *
     * detail levels:
     *
     * 0: type and message text
     * 1: also source file, function, line nr
     * 2: also stack trace
     * 3: also full dump of internal exception object data
     *
     * a raw dump using boost methods is also included.
     */
    std::string get_exception_dump(boost::exception const & e,unsigned int level=0);

  };
}

#endif
