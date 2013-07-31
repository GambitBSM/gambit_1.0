//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Parameter and Model Containers for Scanner
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
///  \author Gregory Martinez (gregory.david.martinez@gmail.com)
///  \date July 2013
//
//  *********************************************

#ifndef __scanner_params_hpp__
#define __scanner_params_hpp__

#include <vector>
#include <unordered_map>
#include <string>
#include <functors.hpp>
#include <graphs.hpp>
#include <scanner_utils.hpp>

namespace GAMBIT
{
        namespace Scanner
        {
                //virtual abstract container class for each parameter
                class Parameter
                {
                public:
                        virtual void InputParam (std::vector<double>::iterator &it) = 0;
                        virtual std::string Name() const = 0;
                        virtual const unsigned char ID() const = 0;
                };
                
                //if the parameter is not to be calculated
                class DummyParameter : public Parameter
                {
                private:
                        std::string name;
                        Parameter **it;
                        
                public:
                        DummyParameter(std::string name, Parameter **it) : name(name), it(it) {}
                        void InputParam (std::vector<double>::iterator &it){}
                        std::string Name() const {return name;}
                        Parameter **Ptr() const {return it;}
                        const unsigned char ID() const {return dummyParam;}
                };
                
                //if the parameter is a normal single value parameter
                class SingleParameter : public Parameter
                {
                protected:
                        primary_model_functor *functor;
                        std::string name;
                        friend class MultiParameter;
                        
                public:
                        SingleParameter(primary_model_functor *functor, std::string name) : functor(functor), name(name) {}
                        void InputParam (std::vector<double>::iterator &it) {functor->getcontentsPtr()->setValue(name, *(it++));}
                        std::string Name() const {return name;}
                        const unsigned char ID() const {return singleParam;}
                };
                
                //if the parameter has a fixed value
                class FixedParameter : public SingleParameter
                {
                private:
                        double value;
                        friend class FixedMultiParameter;
                        
                public:
                        FixedParameter(primary_model_functor *functor, std::string name, double value) : SingleParameter(functor, name), value(value) {}
                        void InputParam (std::vector<double>::iterator &it) {functor->getcontentsPtr()->setValue(name, value);}
                        const unsigned char ID() const {return fixedParam;}
                };
                
                //if the parameter shares multiple different parameters
                class MultiParameter : public Parameter
                {
                protected:
                        std::vector <primary_model_functor *> functors;
                        std::vector <std::string> names;
                        
                public:
                        MultiParameter(SingleParameter * it) : functors(1, it->functor), names(1, it->name)
                        {
                        }
                        
                        void InputFunctor (SingleParameter *it) 
                        {
                                functors.push_back(it->functor); 
                                names.push_back(it->name);
                        }
                        
                        void InputFunctor (MultiParameter *it)
                        {
                                functors.insert(functors.end(), it->functors.begin(), it->functors.end());
                                names.insert(names.end(), it->names.begin(), it->names.end());
                        }
                        
                        void InputParam (std::vector<double>::iterator &it_in)
                        {
                                std::vector<std::string>::iterator name_it = names.begin();
                                for (std::vector<primary_model_functor *>::iterator it = functors.begin(); it != functors.end(); ++it, ++name_it)
                                {
                                        (*it)->getcontentsPtr()->setValue(*name_it, *it_in);
                                }
                                it_in++;
                        }
                        
                        std::string Name() const {return names[0];}
                        
                        const unsigned char ID() const {return multiParam;}
                };
                
                //same as MultiParameter exept the value is fixed
                class FixedMultiParameter : public MultiParameter
                {
                private:
                        double value;
                        
                public:
                        FixedMultiParameter(FixedParameter *it) : MultiParameter(it), value(it->value) {}
                        
                        void InputParam (std::vector<double>::iterator &it_in)
                        {
                                std::vector<std::string>::iterator name_it = names.begin();
                                for (std::vector<primary_model_functor *>::iterator it = functors.begin(); it != functors.end(); ++it, ++name_it)
                                {
                                        (*it)->getcontentsPtr()->setValue(*name_it, value);
                                }
                        }
                        
                        const unsigned char ID() const {return fixedMultiParam;}
                };
                
                //this is the structure associated with each model
                //contains Parameter container classes
                struct Model
                {
                        std::string name;
                        std::vector <Parameter*> parameters;
                        int output;
                        unsigned char flag;
                        
                        Model () : flag(0x00) {}
                        void InputNames(std::vector<std::string> &vec)
                        {
                                vec.resize(parameters.size());
                                std::vector <Parameter *>::iterator p_it = parameters.begin();
                                for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); ++it, ++p_it)
                                {
                                        *it = (*p_it)->Name();
                                }
                        }
                        
                        ~Model()
                        {
                                for (std::vector<Parameter *>::iterator it = parameters.begin(); it != parameters.end(); ++it)
                                {
                                        delete *it;
                                }
                        }
                };
        };
};

#endif