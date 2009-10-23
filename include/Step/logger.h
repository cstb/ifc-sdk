// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_logger_h
#define Step_logger_h

// Using log4cplus
#ifdef USE_LOG4CPLUS
#include "StepDLL.h"
#include <log4cplus/logger.h>
namespace Step {
    STEP_DLL_DEF extern log4cplus::Logger logger;
}
#define LOG_ALWAYS(msg) LOG4CPLUS_FATAL(Step::logger, msg)
#define LOG_ERROR(msg) LOG4CPLUS_ERROR(Step::logger, msg)
#define LOG_WARNING(msg) LOG4CPLUS_WARN(Step::logger, msg)
#define LOG_INFO(msg) LOG4CPLUS_INFO(Step::logger, msg)
#define LOG_DEBUG(msg) LOG4CPLUS_DEBUG(Step::logger, msg)

#else

// Using Delta3D logger
#ifdef USE_DELTA3D
#include <sstream>
#include <dtUtil/log.h>
#undef LOG_ALWAYS
#define LOG_ALWAYS(msg) \
   do { \
   std::ostringstream msg_buf; \
   msg_buf << msg; \
   LOGN_ALWAYS("Step", msg_buf.str()); \
   } while(0);
#undef LOG_ERROR
#define LOG_ERROR(msg) \
   do { \
      std::ostringstream msg_buf; \
      msg_buf << msg; \
      LOGN_ERROR("Step", msg_buf.str()); \
   } while(0);
#undef LOG_WARNING
#define LOG_WARNING(msg) \
   do { \
   std::ostringstream msg_buf; \
   msg_buf << msg; \
   LOGN_WARNING("Step", msg_buf.str()); \
   } while(0);
#undef LOG_INFO
#define LOG_INFO(msg) \
   do { \
   std::ostringstream msg_buf; \
   msg_buf << msg; \
   LOGN_INFO("Step", msg_buf.str()); \
   } while(0);
#undef LOG_DEBUG
#define LOG_DEBUG(msg) \
   do { \
   std::ostringstream msg_buf; \
   msg_buf << msg; \
   LOGN_DEBUG("Step", msg_buf.str()); \
   } while(0);

#else

// Using std::cerr
#include <iostream>

#ifdef LOG_DEBUG_ENABLE
# define LOG_INFO_ENABLE
# define LOG_DEBUG(msg) std::cerr <<   "DEBUG :" << msg << std::endl;
#else
# define LOG_DEBUG(msg)
#endif

#ifdef LOG_INFO_ENABLE
# define LOG_WARNING_ENABLE
# define LOG_INFO(msg) std::cerr <<    "INFO :" << msg << std::endl;
#else
# define LOG_INFO(msg)
#endif

#ifdef LOG_WARNING_ENABLE
# define LOG_ERROR_ENABLE
# define LOG_WARNING(msg) std::cerr << "WARNING :" << msg << std::endl;
#else
# define LOG_WARNING(msg)
#endif


#ifdef LOG_ERROR_ENABLE
# define LOG_ALWAYS_ENABLE
# define LOG_ERROR(msg) std::cerr <<   "ERROR  :" << msg << std::endl;
#else
# define LOG_ERROR(msg)
#endif

#ifdef LOG_ALWAYS_ENABLE
# define LOG_ALWAYS(msg) std::cerr <<  "ALWAYS :" << msg << std::endl;
#else
# define LOG_ALWAYS(msg)
#endif
#endif
#endif
#endif

