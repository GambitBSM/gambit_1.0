//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the Lilith backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 Aug
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/Lilith_1_1_3.hpp"
#include <Python.h>
//#include "lilith.h"

PyObject* lilithcalc_global;
int userread = 0;


BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    Py_Initialize();
    char experimental_input[] = "";
    

     PyObject* args;

  printf("Lilith is running!\n");


  
  std::string path = runOptions->getValueOrDef<std::string>(backendDir+"/../", "datapath");
  
  char * pathtolilith = strdup(path.c_str());


  PyObject* sys_path = PySys_GetObject((char*)"path");
  if (sys_path == NULL) {
        printf("sys_path error\n");
        exit(1);
  }

  if(PyList_Append(sys_path, PyString_FromString(pathtolilith)) < 0) {
        printf("Error in appending sys_path and path_to_lh\n");
        exit(1);
  }


  // |------------------|
  // | Importing Lilith |
  // |------------------|

  // Defining lilith module
  PyObject* lilithModuleString = PyString_FromString((char*)"lilith");
  // Importing lilith module
  PyObject* lilithModule = PyImport_Import(lilithModuleString);
  

  if(lilithModule == NULL) {
        printf("Lilith was not found\n");
        printf("Please check the path to Lilith\n");
        exit(1);
  }


  // |-------------------------------------------------|
  // | Initialize Lilith and read experimental results |
  // |-------------------------------------------------|

  // Creating a Lilith object constructor
  PyObject* lilithconstructor = PyObject_GetAttrString(lilithModule,(char*)"Lilith");
  args = PyTuple_Pack(1, Py_False);
  // Creating lilithcalc: an object of the Lilith class
  lilithcalc_global = PyObject_CallObject(lilithconstructor, args);

  // Getting the function that reads the experimental results
  PyObject* lilithsetexpinput = PyObject_GetAttrString(lilithcalc_global,(char*)"readexpinput");

  // Creating the argument for the previous function
  args = PyTuple_Pack(1, PyString_FromString((char*)experimental_input));

  // Calling the function
  // lastestLHC.list is used by default if no other list was provided
  if(strcmp(experimental_input, "") == 0) {
        PyObject_CallObject(lilithsetexpinput, NULL);
  } else {
        PyObject_CallObject(lilithsetexpinput, args);
  }

  // Checking if error has occured
  // If so, Lilith has no been initialized and cannot run: the code will exit
  if (PyErr_Occurred()) {
    printf("Error during the initialization of Lilith:\n\n");
    PyErr_PrintEx(0);
    printf("\nCode will now exit.\n");
    exit(1);
    }
    
    
    scan_level = false;
  }

}
END_BE_INI_FUNCTION


// Convenience functions
BE_NAMESPACE
{
  
  PyObject* get_lilithcalc()
  {
    return lilithcalc_global;
  }
  
  PyObject* internal_lilith_readuserinput(PyObject* lilithcalc, char* XMLinputstring)
{

      // Getting the function to read the user input
      PyObject* readuserinput = PyObject_GetAttrString(lilithcalc,(char*)"readuserinput");

      // Passing the user input file to this function
      PyObject* args;
      args = PyTuple_Pack(1, PyString_FromString(XMLinputstring));
      PyObject_CallObject(readuserinput, args);

      // Checking if error has occured
      if(PyErr_Occurred())
      {
        printf("Error during the reading of the user input:\n\n");
        PyErr_PrintEx(0);
        printf("\n-2LogL will be set to -1 when evaluated.\n\n");
        return lilithcalc;
      }
  
      else
      {
        userread = 1;
        return lilithcalc;
      }
}

/**
Evaluate -2LogL
**/
float internal_lilith_computelikelihood(PyObject* lilithcalc)
{
      if(userread==0){
          printf("\nError occured while reading the user input file\n");
          printf("-2LogL is set to -1.\n\n");
          return -1.;
      }
      // Getting the function that computes the likelihood
      PyObject* computelikelihood = PyObject_GetAttrString(lilithcalc,(char*)"computelikelihood");
      PyObject_CallObject(computelikelihood, NULL);
      // Extracting the likelihood
      PyObject* likelihood = PyObject_GetAttrString(lilithcalc,(char*)"l");
      float my_likelihood = PyFloat_AsDouble(likelihood);
  
      // Checking if error has occured
      // If so, the -2logL is set to -1 and the code keeps on running
      if(PyErr_Occurred()){
        printf("Error during the computation of the likelihood:\n\n");
        PyErr_PrintEx(0);
        printf("\n-2LogL is set to -1 for this point.\n\n");
        return -1.;
        }
  
      else{
        return my_likelihood;
        }
  
}

  
  
}
END_BE_NAMESPACE






