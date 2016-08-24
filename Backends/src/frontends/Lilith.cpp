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

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    Py_Initialize();
    char experimental_input[] = "";
    initialize_lilith(experimental_input);
  /*  char experimental_input[] = "";

     PyObject* args;

  // |--------------------------------|
  // | Adding Lilith path to sys.path |
  // |--------------------------------|
  printf("lilith is running!\n");

  char pathtolilith[200];
  // remove "lilith.c" from the path (8 characters + '\0')
  strncpy(pathtolilith, __FILE__, sizeof(__FILE__)-9);
  pathtolilith[sizeof(__FILE__)-9] = '\0';
  // add "../.." to the path
  strcat(pathtolilith, "../..");
  printf("here\n");

   printf("path = %s\n", pathtolilith);

  PyObject* sys_path = PySys_GetObject((char*)"path");
  printf("here 2\n");
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
  lilithcalc = PyObject_CallObject(lilithconstructor, args);

  // Getting the function that reads the experimental results
  PyObject* lilithsetexpinput = PyObject_GetAttrString(lilithcalc,(char*)"readexpinput");

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
    }*/
    
    
    scan_level = false;
  }

}
END_BE_INI_FUNCTION
