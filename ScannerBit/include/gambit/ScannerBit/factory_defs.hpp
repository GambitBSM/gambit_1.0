//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2015 Feb, Mar
///
///  *********************************************

#ifndef __FACTORY_DEFS_HPP__
#define __FACTORY_DEFS_HPP__

#include <string>
#include <typeinfo>
#ifdef __NO_PLUGIN_BOOST__
  #include <memory>
#else
  #include <boost/shared_ptr.hpp>
  #include <boost/enable_shared_from_this.hpp>
#endif

#ifdef WITH_MPI
  #include <mpi.h>
#endif

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"

namespace Gambit
{
        namespace Scanner
        {
#ifdef __NO_PLUGIN_BOOST__
                using std::shared_ptr;
                using std::enable_shared_from_this;
#else
                using boost::shared_ptr;
                using boost::enable_shared_from_this;
#endif
                
                ///Generic function base used my the scanner.  Can be Likelihood, observables, etc.
                template<typename T>
                class Function_Base;
                
                ///Functor that deletes a Function_Base functor
                template<typename T>
                class Function_Deleter;
                                
                ///Generic ptr that takes ownership of a Function_Base.  This is how a plugin will call a function.
                template<typename T>
                class scan_ptr;
                
                template<typename ret, typename... args>
                class Function_Base <ret (args...)> : public enable_shared_from_this<Function_Base <ret (args...)>>
                {
                private:
                        friend class Function_Deleter<ret (args...)>;
                        friend class scan_ptr<ret (args...)>;
                        
                        printer *main_printer;
                        std::string purpose;
                        int rank;
                        
                        virtual void deleter(Function_Base <ret (args...)> *in) const
                        {
                                delete in;
                        }
                        
                        virtual const std::type_info & type() const {return typeid(ret (args...));}
                        
                public:
                        Function_Base() : rank(0)
                        {
#ifdef WITH_MPI
                                MPI_Comm_rank(MPI_COMM_WORLD, &rank);
#endif
                        }
                        
                        
                        
                        virtual ret main(const args&...) = 0;
                        virtual ~Function_Base(){} 
                        
                        ret operator () (const args&... params) 
                        {
                                unsigned long long int id = ++Gambit::Printers::get_point_id();
                                ret ret_val = main(params...);
                                
                                if (sizeof...(params) == 1)
                                        main_printer->print(params..., "unitCubeParameters", rank, id);
                                main_printer->print(ret_val, purpose, rank, id);
                                main_printer->print(int(id), "pointID", rank, id);
                                main_printer->print(rank, "MPIrank", rank, id);
                                
                                return ret_val;
                        }
                        
                        void setPurpose(const std::string p){purpose = p;}
                        void setPrinter(printer* p){main_printer = p;}
                        printer *getPrinter(){return main_printer;}
                        std::string getPurpose() const {return purpose;}
                        int getRank() const {return rank;}
                        unsigned long long int getPtID() const {return Gambit::Printers::get_point_id();}
                };
                
                template<typename ret, typename... args>
                class Function_Deleter<ret (args...)>
                {
                private:
                        Function_Base <ret (args...)> *obj;
                        
                public:
                        Function_Deleter(void *in) : obj(static_cast< Function_Base<ret (args...)>* >(in))
                        {
                        }
                        
                        Function_Deleter(const Function_Deleter<ret (args...)> &in) : obj(in.obj) {}
                        
                        void operator =(const Function_Deleter<ret (args...)> &in)
                        {
                                obj = in.obj;
                        }
                        
                        void operator()(Function_Base <ret (args...)> *in)
                        {
                                obj->deleter(in);
                        }
                };
                
                template<typename ret, typename... args>
                class scan_ptr<ret (args...)> : public shared_ptr< Function_Base< ret (args...)> >
                {
                private:
                        typedef shared_ptr< Function_Base< ret (args...) > > s_ptr;
                        
                public:
                        scan_ptr(){}
                        scan_ptr(const scan_ptr &in) : s_ptr (in){}
                        scan_ptr(scan_ptr &&in) : s_ptr (std::move(in)) {}
                        scan_ptr(void *in) : s_ptr
                                (
                                        static_cast< Function_Base<ret (args...)>* >(in), 
                                        Function_Deleter<ret (args...)>(in)
                                ) 
                        {
                                if (typeid(ret (args...)) != this->get()->type())
                                {
                                        scan_err << "scan_ptr and the functor return by \"get functor\" do not have the same type." << scan_end;
                                }
                        }
                        
                        scan_ptr<ret (args...)> &operator=(void *in)
                        {
                                this->s_ptr::operator=
                                (
                                        s_ptr
                                        (
                                                static_cast< Function_Base<ret (args...)>* >(in), 
                                                Function_Deleter<ret (args...)>(in)
                                        )
                                );
                                
                                if (typeid(ret (args...)) != this->get()->type())
                                {
                                        scan_err << "scan_ptr and the functor return by \"get functor\" do not have the same type." << scan_end;
                                }
                        
                                return *this;
                        }
                        
                        scan_ptr<ret (args...)> &operator=(const scan_ptr<ret (args...)> &in)
                        {
                                this->s_ptr::operator=(in);
                        
                                return *this;
                        }
                        
                        scan_ptr<ret (args...)> &operator=(s_ptr &&in)
                        {
                                this->s_ptr::operator=(std::move(in));
                        
                                return *this;
                        }
                        
                        ret operator()(const args&... params)
                        {
                                return (*this)->operator()(params...);
                        }
                };
                
                ///Pure Base class of a plugin Factory function.
                class Factory_Base
                {
                public:
                        virtual void * operator() (const std::string &purpose) const = 0;
                        virtual ~Factory_Base() {};
                };
        }
}

#endif
