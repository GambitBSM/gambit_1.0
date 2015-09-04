//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#include "gambit/Printers/baseprintermanager.hpp"
#include "gambit/Printers/basebaseprinter.hpp"

#ifndef PRINTER_INTERFACE_HPP
#define PRINTER_INTERFACE_HPP

#include <string>
#include <vector>

namespace Gambit
{
        namespace Scanner
        { 
                /// typedef printer_interface_temp printer_interface;
                typedef Printers::BasePrinterManager printer_interface;
                
                /// Type of the printer objects
                typedef Printers::BaseBasePrinter printer;

                /// Returns unique postive parameter id
                int get_main_param_id(const std::string &);
                
                /// Returns unique negative parameter id
                int get_aux_param_id(const std::string &);
                
                inline void assign_aux_numbers(){}
                
                template<typename... T>
                inline void assign_aux_numbers(const std::string &tag, const T&... params)
                {
                        get_aux_param_id(tag);
                        assign_aux_numbers(params...);
                }
                
                ///printer stream wrapper
                class printer_stream
                {
                private:
                        Gambit::Scanner::printer *stream;
                        
                public:
                        int (*get_param_id)(const std::string &);
                        
                        ///sub class that allows input to printer system.
                        class printer_iterator
                        {
                        private:
                                printer_stream &stream;
                                const std::string &param;
                                const unsigned long long int &id;
                                
                        public:
                                printer_iterator(printer_stream &stream, const std::string &param, const unsigned long long int &id)
                                : stream(stream), param(param), id(id) {}
                                
                                template <typename T>
                                const T& operator = (const T& in)
                                {
                                        //std::cout << in << "," << param << "," << -stream.get_param_id(param) << "," << stream()->getRank() << "," << id << std::endl;getchar();
                                        stream()->print(in, param, stream.get_param_id(param), stream()->getRank(), id);
                                        return in;
                                }
                        };
                        
                        ///sub class that allows input to printer system.
                        class vector
                        {
                        private:
                                printer_stream &stream;
                                const std::vector<std::string> params;
                                const unsigned long long int id;
                                
                        public:
                                vector(printer_stream &stream, const std::vector<std::string> &params, const unsigned long long int &id)
                                : stream(stream), params(params), id(id) {}
                                
                                template <typename T>
                                const std::vector<T> & operator = (const std::vector<T> &in)
                                {
                                        auto in_it = in.begin();
                                        for (auto it = params.begin(), end = params.end(); it != end; ++it, ++in_it)
                                        {
                                                stream()->print(*in_it, *it, stream.get_param_id(*it), stream()->getRank(), id);
                                        }
                                        return in;
                                }
                                
                                template <typename T>
                                const std::unordered_map<std::string, T> & operator = (const std::unordered_map<std::string, T> &in)
                                {
                                        for (auto it = params.begin(), end = params.end(); it != end; ++it)
                                        {
                                                auto it_map = in.find(*it);
                                                if (it_map != in.end())
                                                        stream()->print(it_map->second, *it, stream.get_param_id(*it), stream()->getRank(), id);
                                        }
                                        return in;
                                }
                        };
                        
                        ///sub class that corresponds to a point.
                        class point
                        {
                        private:
                                printer_stream &stream;
                                const unsigned long long int id;
                                
                        public:
                                point(printer_stream &stream, const unsigned long long int &id) : stream(stream), id(id) {}
                                
                                printer_iterator operator [] (const std::string &name)
                                {
                                        return printer_iterator(stream, name, id); 
                                }
                                
                                vector operator [] (const std::vector<std::string> &name)
                                {
                                        return vector(stream, name, id); 
                                }
                        };
                        
                        printer_stream(int (*get_param_id)(const std::string &)) : get_param_id(get_param_id) {}
                        
                        printer_stream(const printer_stream & stream_in) : stream(stream_in.stream), get_param_id(stream_in.get_param_id) {}
                        
                        printer_stream(Gambit::Scanner::printer *stream, int (*get_param_id)(const std::string &)) : stream(stream), get_param_id(get_param_id) {}
                        
                        template <typename T>
                        void print (const T& in, const std::string &param, int rank, unsigned long long int id)
                        {
                                stream->print(in, param, get_param_id(param), rank, id);
                        }
                        
                        printer_stream &operator = (Gambit::Scanner::printer *stream_in)
                        {
                                stream = stream_in;
                                return *this;
                        }
                        
                        printer_stream &operator = (const printer_stream & stream_in)
                        {
                                stream = stream_in.stream;
                                get_param_id = stream_in.get_param_id;
                                return *this;
                        }
                        
                        Gambit::Scanner::printer *operator() () {return stream;}
                        
                        point operator [] (const unsigned long long int &id)
                        {
                                return point(*this, id);
                        }
                        
                        void flush(){stream->flush();}
                        
                        void reset(){stream->reset();}
                        
                        void finalize(){stream->finalise();}
                };
                
                /// aux printer stream wrapper
                class aux_printer_stream : public printer_stream
                {
                public:
                        aux_printer_stream() : printer_stream(get_aux_param_id) {}
                        
                        aux_printer_stream(Gambit::Scanner::printer *stream) : printer_stream(stream, get_aux_param_id) {}
                };
                
                /// main printer stream wrapper
                class main_printer_stream : public printer_stream
                {
                public:
                        main_printer_stream() : printer_stream(get_main_param_id) {}
                        
                        main_printer_stream(Gambit::Scanner::printer *stream) : printer_stream(stream, get_main_param_id) {}
                };
        }
}

#endif
