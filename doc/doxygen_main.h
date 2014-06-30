#ifndef __doxygen_main_h_
#define __doxygen_main_h_ 1


namespace gambit {
/*! \mainpage GAMBIT: Global And Modular BSM Inference Tool
 *
 * \section intro_sec Introduction
 *
 * ... This is the introduction.
 *
 *
 *
 * \section devel_sec The framework:
 *
 *
 * \subsection core_sec The core:
 *
 * 
 * \subsection legacy_sec Legacy SUFit code, to be revised/replaced:
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
 * 
 * \subsection specific_sec Specific implementations:
 *
 * Example use of the framework: \ref gambit_example.cpp
 * 
 *
 * \subsection indent_sec Coding style and indentation
 *
 * \ref INDENTS
 *
 * 
 * \subsection history_sec Authors, Code History and Setup
 *
 * For setup please read the readme at: \ref README
 *
 * Code history and authors can be found at: \ref HISTORY
 *
 * Prehistory of one of the forerunner codes is available at: \ref PREHISTORY
 * 
 */



/*! \page README Readme
 * \include README
 */

/*! \page HISTORY Code History 
 * \include HISTORY
 */

/*! \page PREHISTORY Code Pre-history
 * \include PREHISTORY
 */

/*! \page INDENTS Code conventions and indentation 
  
  Add the following to your .emacs file to get a compatible indentation
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

  Otherwise, just don't save tabs in your source files!!

*/  


}
#endif
