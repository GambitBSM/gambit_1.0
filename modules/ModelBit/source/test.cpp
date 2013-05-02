//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Test sandbox for ModelBit capabilities
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

/* Plan:

Hierarchical structure, e.g.

MSSM::CMSSM::P1   (P1 - standard parameterisation)

Specifying that a module function works at some level of a hierarchy indicates that it can work with any model that branches from that point of the hierarchy.
(e.g. specifying 'CMSSM' means the function does not care which parameterisation was used for this scan)

'Orthogonal' models may be simulataneously specified
e.g.

DMHalo::MB::P1  (MB - maxwell boltzmann, P1 - standard parameterisation)

So a function may specify that it works with e.g. 

MSSM::CMSSM    and
DMHalo::MB::P1

Each final branch of the hierarchy specifies a list of parameters that are to be supplied by the scanner. Higher levels of the hierarchy may also specify parameters: these will be inherited by the lower levels, which may either simply remove them, assign fixed values to them, or otherwise transform them.

Actually, I think there needs to be an option for the model to transform the parameters being scanned, i.e. we need an 'input' parameter list (to be supplied by the scanner) and an 'output' parameter list, which is what is made available to the rest of the code.

We need this because, e.g. we may specify a model
MSSM::PMSSM10 
which simply specifies relationships between general MSSM parameters.
But hmm, we don't really want to specify the full set of MSSM parameters at the MSSM level of the hierarchy! Although in some sense we do: should be possible to set all the soft masses manually and scan them (though insane...). But also don't want to have to do this when it isn't necessary.
Kind of want the hierarchy to be a promise of what will be computed by something, somewhere, given the input specified.

So fundamental question: Is it up to ModelBit to deal directly with spectrum generators etc? If not, where and how does this happen? Is it possible to consider the low energy spectrum as "just another observable"? Spectrum generator 'observable' functions would have to say they are compatible with given models, which I guess is no problem.

But maybe think of easier case: cMSSM (i.e. extra constraints on CMSSM). In the hierarchy this would be

MSSM::CMSSM::P1::cMSSM::P1

i.e. it only works from P1 parameterisation of CMSSM, and returns its own P1 parameterisation versions of parameters.
I think this makes sense.

But could have different parameterisations of MSSM!

Might get cumbersome. Still, should be possible for module writers to specify shorthand for frequently used models, i.e. some macro that sets

MSSM::CMSSM::P1::cMSSM::P1 -> cMSSM

so they only have to use the short version. The long version is really needed to uniquely specify what happens in modelbit though.

------

Additionally, we need to worry about priors here I think. How are they implemented? Each needs to be crafted especially for each model, so it somewhat makes sense for them to be included in the model definition. There should be a list of available priors or some such. These should be functions that transform a set of [0,1] uniform random numbers from the scanner into a sample from the desired distribution. The 'ini' file just specifies which prior from the preset list the scanner is supposed to use. Need to make it easy to add new ones though.

If models are orthogonal, can we safely assume their corresponding priors are independent? I sure hope so otherwise things get really bad...

I guess in principle multiple branches of the tree can reconverge, i.e. a model can inherit from two parent models, and then special combined priors can be specified. I think this will be ok...

What of "effective" priors, implemented by a Jacobian as an extra likelihood component? Would be desireable to keep track of this so it can be automatically removed from reports of the actual global log-likelihood. Can we use the model definitions as a box for a new "likelihood" definition like this, (same as physics modules?), just with some special tracking or something?

Probably will want to split the final model definitions into their own files, where all this stuff is listed.

*/

/*

So basically there should be some class structure we inherit from I guess. Lets write something explicitly and we can think about fancy stuff like macros and tags later.

In the end we will again want to just throw around pointers to the model objects I expect. There will then be methods to set new parameter values etc.

*/







// Observable/likelihood/dependency function wrapper (functor) class,
  // with result type TYPE
  template <typename TYPE>
  class functor {

    public:

      // Constructor 
      functor(void (*inputFunction)(TYPE &), std::string iDo) {
        myFunction = inputFunction;
        myQuantity = iDo;
        needs_recalculating = true;
      }

      // Operation (return value) 
      TYPE operator()() { return myValue; }

      // Add pointer to pointer to dependent functor
      template <typename DEP>
      void addToDepList(functor<DEP>* &dep_functor) { 
        dependency_list.push_back (&dep_functor);
      }

      // It may be safer to have the following four things made accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      // Calculate method
      void calculate() { if(needs_recalculating) { myFunction(myValue); } }

      // Identification method
      std::string quantity() { return myQuantity; }

      // Needs recalculating or not?  (Externally modifiable)
      bool needs_recalculating;

      // Internal list of pointers to pointers to dependent functors
      std::list<boost::any> dependency_list;

    private:

      // Internal storage of function value
      TYPE myValue;

      // Internal storage of function pointer
      void (*myFunction)(TYPE &);

      // Internal storage of exactly what it is that this function calculates
      std::string myQuantity;

  };



























