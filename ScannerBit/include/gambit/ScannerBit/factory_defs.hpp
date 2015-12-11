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
  #include <chrono>
#endif

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/printer_interface.hpp"
#include "gambit/ScannerBit/plugin_loader.hpp"
#include "gambit/Utils/signal_handling.hpp"

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
            int shutdown_attempts;
 
            virtual void deleter(Function_Base <ret (args...)> *in) const
            {
                    delete in;
            }
            
            virtual const std::type_info & type() const {return typeid(ret (args...));}
                
        public:
            Function_Base() : rank(0), shutdown_attempts(0)
            {
#ifdef WITH_MPI
                    GMPI::Comm world;
                    rank = world.Get_rank();
#endif
            }
            
            
            
            virtual ret main(const args&...) = 0;
            virtual ~Function_Base(){} 

            /// Attempt to synchronise all processes, but abort if it takes too long
            bool all_processes_ready()
            {
#ifdef WITH_MPI
                   // sleep setup
                   bool timedout = false;
                   std::chrono::seconds timeout(5); // FIXME: replace with estimated plugin evaluation time
                   GMPI::Comm shutdownComm; // FIXME: create new communicator group to avoid tag clashes
                   if( shutdownComm.BarrierWithTimeout(timeout, 9999, std::cout) )
                            timedout = true; // Barrier timed out waiting for some process to enter
                   // else the barrier succeed in synchronising all processes
                   return !timedout; 
#else
                   return true; // Always ready if no MPI
#endif
            }

            void attempt_soft_shutdown()
            {
                   const int max_attempts=6; // 6 attempts ==> 3 plugin loops (we attempt shutdown both before and after the plugin evaluation) 
                   if (all_processes_ready()) 
                   {
                           Gambit::Scanner::Plugins::plugin_info.dump();
                           std::ostringstream msg;
#ifdef WITH_MPI
                           msg << "rank "<<rank<<": ";
#endif
                           msg << "Performing soft shutdown!";
                           throw SoftShutdownException(msg.str()); 
                   } else {
                           shutdown_attempts+=1;
                   }                    

                   if (shutdown_attempts>=max_attempts) 
                   {
                           Gambit::Scanner::Plugins::plugin_info.dump();
                           std::ostringstream msg;
#ifdef WITH_MPI
                           msg << "rank "<<rank<<": ";
#endif
                           msg << "Soft shutdown failed (could not synchronise all processes after "<<max_attempts<<" attempts), emergency shutdown performed instead! Data handled by external scanner codes (in other processes) may have been left in an inconsistent state." << std::endl;
                           throw HardShutdownException(msg.str()); 
                   }
            }
            
            ret operator () (const args&... params) 
            {
                    if(signaldata().shutdown_begun) Gambit::Scanner::Plugins::plugin_info.set_running(false);
                    if (!Gambit::Scanner::Plugins::plugin_info.keep_running())
                            attempt_soft_shutdown();
 
                    Gambit::Scanner::Plugins::plugin_info.set_calculating(true);
                    unsigned long long int id = ++Gambit::Printers::get_point_id();
                    ret ret_val = main(params...);
                    Gambit::Scanner::Plugins::plugin_info.set_calculating(false);
                    if (sizeof...(params) == 1)
                            main_printer->print(params..., "unitCubeParameters", rank, id);
                    main_printer->print(ret_val, purpose, rank, id);
                    main_printer->print(int(id), "pointID", rank, id);
                    main_printer->print(rank, "MPIrank", rank, id);

                    if(signaldata().shutdown_begun) Gambit::Scanner::Plugins::plugin_info.set_running(false);
                    if (!Gambit::Scanner::Plugins::plugin_info.keep_running())
                            attempt_soft_shutdown();
                   
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
            Function_Deleter(void *in) : obj(static_cast< Function_Base<ret (args...)>* >(in)) {}
            
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
