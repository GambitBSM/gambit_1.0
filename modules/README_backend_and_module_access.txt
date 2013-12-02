New syntax for accessing backend requirements and module dependencies:
----------------------------------------------------------------------

-- Anders Kvellestad, Dec. 2013 


We've simplified the system for accessing 'external stuff' from within a module.
I've updated all the current module source files and rollcall headers to make 
use of this new system. Here I'll give a brief introduction to the system 
along with an example of typical usage:

(Note that all namespaces are given relative to the general Gambit::MODULE 
namespace in which the your entire module should live.)


* All module dependencies live in the namespace 
    
    SafePointers::FUNCTION::Dep
  
  where FUNCTION is the name of the module function you're writing.


* All backend requirements (variables/functions) live in the namespace
  
    SafePointers::FUNCTION::BEreq


* Thus, a module function could typically start with a statement
  
    using namespace SafePointers::FUNCTION;

  to simplify the code a bit.


Example: 
  
  Say you're writing a module function "SomeFunction", which has a module
  dependency "ModuleDependency", as well as the backend requirements
  "BackendVariable" and "BackendFunction". The relevant part of your
  module's rollcall header should then look something like:

    #define FUNCTION SomeFunction
    START_FUNCTION(int)                     
    DEPENDENCY(ModuleDependency, double)    

      #define BACKEND_REQ BackendVariable   
      START_BACKEND_REQ(int, VAR)            // Note the 'VAR' flag!
      #undef BACKEND_REQ

      #define BACKEND_REQ  BackendFunction 
      START_BACKEND_REQ(void, FUNC)          // The 'FUNC' flag is optional.
      #undef BACKEND_REQ


  And here's how you would access all this stuff from within the 
  module source file:

  - Start the module function with the statement:

      using namespace SafePointers::SomeFunction;


  - Get value of "ModuleDependency":  

      *Dep::ModuleDependency


  - Get safe_pointer to "ModuleDependency":

      Dep::ModuleDependency.safe_pointer()


  - Get value of "BackendVariable":

      *BEreq::BackendVariable


  - Set value of "BackendVariable":
  
      *BEreq::BackendVariable = 10;


  - Get safe_variable_pointer to "BackendVariable":

    BEreq::BackendVariable.safe_pointer()


  - Get a 'normal' pointer to "BackendVariable":

      BEreq::BackendVariable.pointer()


  - Run "BackendFunction":

      BEreq::BackendFunction(100, 3.14)


  - Get function pointer to "BackendFunction":

      BEreq::BackendFunction.pointer<int,double>()
  
      (Here int and double refers to the types of the function arguments.)


  If you need some info on the dependency/requirement, the following 
  functions are available (all returning std::string):

    Dep::ModuleDependency.name()
    Dep::ModuleDependency.module()

    BEreq::BackendVariable.name()
    BEreq::BackendVariable.backend()
    BEreq::BackendVariable.version()

    (Similar for BEreq::BackendFunction.)


  If you need to use the 'safe_pointer' or 'safe_variable_pointer', 
  see Utils/include/util_types.hpp for the definition of these classes.


  Final note: 
  We may decide to rename the 'SafePointer::FUNCTION' namespace.
  From a module perspective this should only affect the 
  'using namespace SafePointers::FUNCTION' statement.
