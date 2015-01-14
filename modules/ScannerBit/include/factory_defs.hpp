#ifndef __FACTORY_DEFS_HPP__
#define __FACTORY_DEFS_HPP__

#include "boost/shared_ptr.hpp"
#include "boost/enable_shared_from_this.hpp"

namespace Gambit
{
        namespace Scanner
        {
                using boost::shared_ptr;
                using boost::enable_shared_from_this;
                
                ///Generic function base used my the scanner.  Can be Likelihood, observables, etc.
                template<typename T>
                class Function_Base;
                
                template<typename ret, typename... args>
                class Function_Base <ret (args...)> : public enable_shared_from_this<Function_Base <ret (args...)>>
                {
                private:
                        unsigned long long int pointID;
                        
                public:
                        Function_Base() : pointID(0) {}
                        virtual ret main(const args&...) = 0;
                        virtual ~Function_Base(){} 
                        
                        ret operator () (const args&... params) 
                        {
                                pointID++;
                                return main(params...);
                        }
                        
                        unsigned long long int getPtID() const {return pointID;}
                };
                
                ///Generic ptr that takes ownership of a Function_Base.  This is how a plugin will call a function.
                template<typename T>
                class scan_ptr;
                
                template<typename ret, typename... args>
                class scan_ptr<ret (args...)> : public shared_ptr<Function_Base<ret (args...)>>
                {
                public:
                        scan_ptr(){}
                        scan_ptr(const scan_ptr &in) : shared_ptr< Function_Base<ret (args...)> >(in){}
                        scan_ptr(scan_ptr &&in) : shared_ptr< Function_Base<ret (args...)> >(std::move(in)) {}
                        scan_ptr(void *in) : shared_ptr< Function_Base<ret (args...)> >(static_cast< Function_Base<ret (args...)>* >(in)) {}
                        
                        scan_ptr<ret (args...)> &operator=(void *in)
                        {
                                this->shared_ptr< Function_Base<ret (args...)> >::operator=
                                (
                                        shared_ptr< Function_Base<ret (args...) > >(
                                                static_cast< Function_Base<ret (args...)>* >(in))
                                );
                        
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
