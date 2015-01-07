#ifndef __FACTORY_DEFS_HPP__
#define __FACTORY_DEFS_HPP__

namespace Gambit
{
        namespace Scanner
        {
                template<typename T>
                class Function_Base;
                
                template<typename ret, typename... args>
                class Function_Base <ret (args...)>
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
                
                class Factory_Base
                {
                public:
                        virtual void * operator() (const std::string &purpose) const = 0;
                        virtual ~Factory_Base() {};
                };
        }
}

#endif