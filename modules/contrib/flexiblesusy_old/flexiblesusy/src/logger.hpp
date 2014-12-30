// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <cstdlib>
#include <cassert>
#include "config.h"

/**
 * The following message logger macros are available:
 *
 * VERBOSE_MSG(message)  only printed if VERBOSE is defined
 * DEBUG_MSG(message)    only printed if DEBUG is defined
 * INFO(message)
 * WARNING(message)
 * ERROR(message)
 * FATAL(message)        aborts program execution
 *
 * VERBOSE_MSG, DEBUG_MSG and INFO print to std::cout .
 * WARNING, ERROR and FATAL print to std::cerr .
 *
 * All output can be disabled if ENABLE_SILENT is defined.
 * To define a preprocessor symbol, use either
 *
 *    #define ENABLE_COLOR_PRINTOUT
 *    #define ENABLE_DEBUG
 *    #define ENABLE_SILENT
 *    #define ENABLE_VERBOSE
 *
 * or compile via
 *
 *    make "CPPFLAGS += -DCOLOR_PRINTOUT -DDEBUG -DVERBOSE"
 *
 * or, to suppress all output,
 *
 *    make "CPPFLAGS += -DSILENT"
 */

enum ELogLevel { kVerbose, kDebug, kInfo, kWarning, kError, kFatal };

#ifdef ENABLE_VERBOSE
   #define VERBOSE_MSG(message) LOG(kVerbose, message)
#else
   #define VERBOSE_MSG(message)
#endif

#ifdef ENABLE_DEBUG
   #define DEBUG_MSG(message) LOG(kDebug,   message)
#else
   #define DEBUG_MSG(message)
#endif

#define INFO(message)    LOG(kInfo,    message)
#define WARNING(message) LOG(kWarning, message)
#define ERROR(message)   LOG(kError,   message)

#ifdef ENABLE_SILENT
   #define FATAL(message)                             \
      do {                                            \
         exit(EXIT_FAILURE);                          \
         assert(false);                               \
      } while (0)
#else
   #define FATAL(message)                                             \
      do {                                                            \
         LOG(kFatal, message);                                        \
         std::cerr << "*** abort program execution" << std::endl;     \
         exit(EXIT_FAILURE);                                          \
         assert(false);                                               \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define PRINT_PREFIX(level)
#else
   #define PRINT_PREFIX(level)                                        \
      do {                                                            \
         switch (level) {                                             \
         case kWarning: std::cerr << "Warning: "; break;              \
         case kError:   std::cerr << "Error: "; break;                \
         case kFatal:   std::cerr << "Fatal: "; break;                \
         default:                                                     \
            break;                                                    \
         }                                                            \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define PRINT_FILE_LINE(level)
#else
   #define PRINT_FILE_LINE(level)                                     \
      do {                                                            \
         switch (level) {                                             \
         case kFatal:   std::cerr << "(file: " << __FILE__            \
                                  << ", line: " << __LINE__ << ") ";  \
            break;                                                    \
         default:                                                     \
            break;                                                    \
         }                                                            \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define PRINT_COLOR_CODE(level)
#else
   #define PRINT_COLOR_CODE(level)                               \
      do {                                                       \
         switch (level) {                                        \
         case kDebug:   std::cout << "\033[0;34m"; break;        \
         case kWarning: std::cerr << "\033[0;31m"; break;        \
         case kError:   std::cerr << "\033[1;31m"; break;        \
         case kFatal:   std::cerr << "\033[41;1;37m"; break;     \
         case kInfo:                                             \
         case kVerbose:                                          \
         default:                                                \
            break;                                               \
         }                                                       \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define RESET_COLOR(level)
#else
   #define RESET_COLOR(level)                               \
      do {                                                       \
         switch (level) {                                        \
         case kDebug:                                            \
         case kInfo:                                             \
         case kVerbose:                                          \
            std::cout << "\033[0m";                              \
            break;                                               \
         case kWarning:                                          \
         case kError:                                            \
         case kFatal:                                            \
            std::cerr << "\033[0m";                              \
            break;                                               \
         default:                                                \
            break;                                               \
         }                                                       \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define PRINT_MESSAGE(level, message)
#else
   #define PRINT_MESSAGE(level, message)                         \
      do {                                                       \
         switch (level) {                                        \
         case kDebug:                                            \
         case kInfo:                                             \
         case kVerbose:                                          \
            std::cout << message;                                \
            break;                                               \
         case kWarning:                                          \
         case kError:                                            \
         case kFatal:                                            \
            std::cerr << message;                                \
            break;                                               \
         default:                                                \
            break;                                               \
         }                                                       \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define PRINT_ENDL(level)
#else
   #define PRINT_ENDL(level)                                     \
      do {                                                       \
         switch (level) {                                        \
         case kDebug:                                            \
         case kInfo:                                             \
         case kVerbose:                                          \
            std::cout << std::endl;                              \
            break;                                               \
         case kWarning:                                          \
         case kError:                                            \
         case kFatal:                                            \
            std::cerr << std::endl;                              \
            break;                                               \
         default:                                                \
            break;                                               \
         }                                                       \
      } while (0)
#endif

#ifdef ENABLE_SILENT
   #define LOG(level, message)
#else
   #ifdef ENABLE_COLOR_PRINTOUT
      #define LOG(level, message)                                \
      do {                                                       \
         PRINT_COLOR_CODE(level);                                \
         PRINT_PREFIX(level);                                    \
         PRINT_FILE_LINE(level);                                 \
         PRINT_MESSAGE(level, message);                          \
         RESET_COLOR(level);                                     \
         PRINT_ENDL(level);                                      \
      } while (0)
   #else
      #define LOG(level, message)                  \
      do {                                         \
         PRINT_PREFIX(level);                      \
         PRINT_FILE_LINE(level);                   \
         PRINT_MESSAGE(level, message);            \
         PRINT_ENDL(level);                        \
      } while (0)
   #endif
#endif

#endif
