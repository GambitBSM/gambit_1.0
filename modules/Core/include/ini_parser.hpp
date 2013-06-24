//////////////////////////////////////////////////////////
// Simple example for GAMBIT Ini-file parser
// 
// Christoph Weniger, 6 May 2013
//////////////////////////////////////////////////////////

#include <boost/spirit/include/qi.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
// #include <boost/config/warning_disable.hpp>
// #include <boost/spirit/include/phoenix_core.hpp> // #include <boost/spirit/include/phoenix_operator.hpp>
// #include <boost/spirit/include/phoenix_object.hpp>

#include <iostream>
#include <fstream>
#include <string>

#ifndef __ini_parser_hpp__
#define __ini_parser_hpp__

namespace GAMBIT
{
  namespace ini_parser
  {
    // Define structures to store inifile data
    namespace client
    {
        namespace qi = boost::spirit::qi;
        namespace ascii = boost::spirit::ascii;

        struct backend
        {
          std::string name;
          std::string backend;
        };

        struct dependency
        {
          std::string name;
          std::string module;
        };

        struct observable
        {
          std::string name;
          std::string module;
          std::vector<backend> backends;
          std::vector<dependency> dependencies;
        };
    };
    typedef client::observable ObservableType;
  };
};

// Tell boost fusion how these stuctures look
BOOST_FUSION_ADAPT_STRUCT(
    GAMBIT::ini_parser::client::observable,
    (std::string, name)
    (std::string, module)
    (std::vector<GAMBIT::ini_parser::client::backend>, backends)
    (std::vector<GAMBIT::ini_parser::client::dependency>, dependencies)
)

BOOST_FUSION_ADAPT_STRUCT(
    GAMBIT::ini_parser::client::dependency,
    (std::string, name)
    (std::string, module)
)

BOOST_FUSION_ADAPT_STRUCT(
    GAMBIT::ini_parser::client::backend,
    (std::string, name)
    (std::string, backend)
)

namespace GAMBIT 
{
  namespace ini_parser
  {
    namespace client
    {
        // Define grammar for backend
        template <typename Iterator>
        struct backend_parser : qi::grammar<Iterator, backend()>
        {
            backend_parser() : backend_parser::base_type(start)
            {
                using qi::lit;
                using ascii::char_;
                using boost::spirit::eol;

                space %= char_(" ");
                valid_string %= char_("a-zA-Z_") >> *(char_("a-zA-Z0-9_."));
                keyword %= lit("-Backend");

                start %=
                    *space
                    >> keyword 
                    >> +space
                    >> valid_string >> +space 
                    >> valid_string >> *space 
                    >> eol
                    ;
            }

            qi::rule<Iterator, std::string()> valid_string;
            qi::rule<Iterator> space;
            qi::rule<Iterator> keyword;
            qi::rule<Iterator, backend()> start;
        };

        // Define grammar for dependency
        template <typename Iterator>
        struct dependency_parser : qi::grammar<Iterator, dependency()>
        {
            dependency_parser() : dependency_parser::base_type(start)
            {
                using qi::lit;
                using boost::spirit::eol;
                using ascii::char_;

                space %= char_(" ");
                valid_string %= char_("a-zA-Z_") >> *(char_("a-zA-Z0-9_."));
                keyword %= lit("-Dependency");

                start %=
                    *space
                    >> keyword 
                    >> +space
                    >> valid_string >> +space 
                    >> valid_string >> *space 
                    >> eol
                    ;
            }

            qi::rule<Iterator, std::string()> valid_string;
            qi::rule<Iterator> space;
            qi::rule<Iterator> keyword;
            qi::rule<Iterator, dependency()> start;
        };

        // Define grammar for observable entry (including backend/dependency)
        template <typename Iterator>
        struct observable_parser : qi::grammar<Iterator, observable()>
        {
            observable_parser() : observable_parser::base_type(start)
            {
                using qi::lit;
                using boost::spirit::eol;
                using ascii::char_;


                space %= char_(" ");
                valid_string %= char_("a-zA-Z_") >> *(char_("a-zA-Z0-9_."));
                keyword %= lit("Observable");

                start %=
                    *space
                    >> keyword >> +space
                    >> valid_string >> +space
                    >> valid_string >> *space
                    >> eol
                    >> *my_backend
                    >> *my_dependency
                    ;
            }

            client::dependency_parser<Iterator> my_dependency;
            client::backend_parser<Iterator> my_backend;
            qi::rule<Iterator, std::string()> valid_string;
            qi::rule<Iterator> space;
            qi::rule<Iterator> keyword;
            qi::rule<Iterator, observable()> start;
        };
    }

    class IniFileParser
    {
      public:
        IniFileParser(std::string filename);

        void print();

        std::vector<client::observable> obs_list;

      private:
        void parse_now(std::string filename);
    };
  };
};
#endif /* defined(__ini_parser_hpp__) */
