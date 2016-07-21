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
  #include <chrono>
  #include "gambit/Utils/mpiwrapper.hpp"
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
            Priors::BasePrior *prior;
            std::string purpose;
            int rank;
 
            /// Variable to store state of affairs regarding use of alternate min_LogL
            bool use_alternate_min_LogL;

            virtual void deleter(Function_Base <ret (args...)> *in) const
            {
                delete in;
            }
            
            virtual const std::type_info & type() const {return typeid(ret (args...));}
                
        public:
            Function_Base() : rank(0), use_alternate_min_LogL(false)
            {
#ifdef WITH_MPI
                GMPI::Comm world;
                rank = world.Get_rank();
#endif
            }
            
            virtual ret main(const args&...) = 0;
            virtual ~Function_Base(){} 
            
            ret operator () (const args&... params) 
            {
                Gambit::Scanner::Plugins::plugin_info.set_calculating(true);
                ++Gambit::Printers::get_point_id();
                ret ret_val = main(params...);
                Gambit::Scanner::Plugins::plugin_info.set_calculating(false);
                
                return ret_val;
            }
            
            void setPurpose(const std::string p) {purpose = p;}
            void setPrinter(printer* p) {main_printer = p;}
            void setPrior(Priors::BasePrior *p) {prior = p;}
            printer &getPrinter() {return *main_printer;}
            Priors::BasePrior &getPrior() {return *prior;}
            std::vector<std::string> getParameters() {return prior->getParameters();}
            std::string getPurpose() const {return purpose;}
            int getRank() const {return rank;}
            unsigned long long int getPtID() const {return Gambit::Printers::get_point_id();}
            unsigned long long int getNextPtID() const {return getPtID()+1;} // Needed if PtID required by plugin *before* operator() is called. See e.g. GreAT plugin.

            /// Tell ScannerBit that we are aborting the scan and it should tell the scanner plugin to stop, and return control to the calling code.
            void tell_scanner_early_shutdown_in_progress()
            { 
              Gambit::Scanner::Plugins::plugin_info.set_early_shutdown_in_progress();
            }

            /// Tell log-likelihood function (defined by driver code) to switch to an alternate value for the minimum
            /// log-likelihood. Called by e.g. MultiNest scanner plugin.
            void switch_to_alternate_min_LogL()
            {
              use_alternate_min_LogL = true;
              #ifdef WITH_MPI
              GMPI::Comm& myComm(Gambit::Scanner::Plugins::plugin_info.scanComm());
              static const int TAG = Gambit::Scanner::Plugins::plugin_info.MIN_LOGL_MSG;
              MPI_Request req_null = MPI_REQUEST_NULL;
              int nullmsg = 0; // Don't need message content, the message itself is the signal.
              myComm.IsendToAll(&nullmsg, 1, TAG, &req_null);
              #endif
            }

            /// Checks if some process has triggered the 'switch_to_alternate_min_LogL' function 
            bool check_for_switch_to_alternate_min_LogL()
            {
              #ifdef WITH_MPI
              GMPI::Comm& myComm(Gambit::Scanner::Plugins::plugin_info.scanComm());
              static const int TAG = Gambit::Scanner::Plugins::plugin_info.MIN_LOGL_MSG;
              if(myComm.Iprobe(MPI_ANY_SOURCE, TAG))
              {
                int nullmsg;
                MPI_Status msg_status;
                myComm.Recv(&nullmsg, 1, MPI_ANY_SOURCE, TAG, &msg_status); // Recv the message to delete it.
                use_alternate_min_LogL = true;
              }
              #endif
              return use_alternate_min_LogL;
            }
            /// @}

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
        
        class like_ptr : public scan_ptr<double (std::unordered_map<std::string, double> &)>
        {
        private:
            typedef scan_ptr<double (std::unordered_map<std::string, double> &)> s_ptr;
            std::unordered_map<std::string, double> map;
            
        public:
            like_ptr(){}
            like_ptr(const like_ptr &in) : s_ptr (in){}
            //like_ptr(like_ptr &&in) : s_ptr (std::move(in)) {}
            like_ptr(void *in) : s_ptr(in) {}
            
            double operator()(const std::vector<double> &vec)
            {
                static int rank = (*this)->getRank();
                (*this)->getPrior().transform(vec, map);
                double ret_val = (*this)->operator()(map);
                unsigned long long int id = Gambit::Printers::get_point_id();
                (*this)->getPrinter().print(ret_val, (*this)->getPurpose(), rank, id);
                (*this)->getPrinter().enable(); // Make sure printer is re-enabled (might have been disabled by invalid point error)
                (*this)->getPrinter().print(vec, "unitCubeParameters", rank, id);
                (*this)->getPrinter().print(int(id), "pointID", rank, id);
                (*this)->getPrinter().print(rank, "MPIrank", rank, id);
                
                return ret_val;
            }
            
            double operator()(std::unordered_map<std::string, double> &map, const std::vector<double> &vec = std::vector<double>())
            {
                static int rank = (*this)->getRank();
                (*this)->getPrior().transform(vec, map);
                double ret_val = (*this)->operator()(map);
                unsigned long long int id = Gambit::Printers::get_point_id();
                (*this)->getPrinter().print(ret_val, (*this)->getPurpose(), rank, id);
                (*this)->getPrinter().enable(); // Make sure printer is re-enabled (might have been disabled by invalid point error)
                if (vec.size() > 0)
                    (*this)->getPrinter().print(vec, "unitCubeParameters", rank, id);
                (*this)->getPrinter().print(int(id), "pointID", rank, id);
                (*this)->getPrinter().print(rank, "MPIrank", rank, id);
                
                return ret_val;
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
