#ifndef __doxygen_main_h_
#define __doxygen_main_h_ 1


namespace sufit{
/*! \mainpage SuFit / OKCFit / KleinFit 
 *
 * \section intro_sec Introduction
 *
 * ... This is the introduction.
 *
 * \section devel_sec The framework:
 * 
 * \subsection core_sec The core:
 *
 * The most important classes:
 * 
 *  EngineBase is the baseclass for anything making a physics calculation
 *
 *  NamedCache and AssociatedHandler are used for associating user options
 *  with the result calculated in Engines.
 *
 *  ComparatorBase defines the interface for LLH-calculator. 
 *
 *  ScannerBase defines the interface for scanning over variables and
 *  examining (eg) LLH values.
 *
 *  \ref logsetup provides logging with compile and run time options.
 *
 *  \ref exceptions defines exceptions for physics/math as well as config issues.
 *
 *  ModelBase defines a minimal set of functionallity any model should 
 *  provide. For example a get/set of model parameters.
 *  
 *  ModelParametersBase defines a map-like interface (but with some protection
 *  for user errors) as well as automatic version incrementation.
 * 
 * \subsection specific_sec Specific implementations:
 *
 *
 * 
 * Example use of the framework: demo_main.cpp
 * Example use of a real Physics Engine: DarkSusyEngine, and the
 *   accompanying stup & scanning example dsexample_main.cpp
 *
 * \subsection Coding style and indentation
 *
 * \ref INDENTS
 *

 * 
 * \subsection auths Code History and Setup
 * Please read the verbatim version of README.txt at: \ref READMETXT
 * 
 */



/*! \page READMETXT Code History and Setup
 * \include README.txt
 */

/*! \page INDENTS Code convenstion and indentation 
  
  Add the following to you .emacs file to get a compatible indentation
\code
  style:
   (setq c-set-style "stroustrup")
\endcode   
  Add these functions to your .emacs to define alt-` as re-indent file:
\code
   (defun indentcleanwholebuffer ()
     "indent and clean whole buffer"
     (interactive)
     (whitespace-cleanup)
     (delete-trailing-whitespace)
     (indent-region (point-min) (point-max) nil)
     (untabify (point-min) (point-max)))   
   (global-set-key "\M-`" 'indentcleanwholebuffer)
\endcode
*/  


}
#endif
