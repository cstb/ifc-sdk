// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#pragma once

#include <Step/Export.h>
#include <Step/Referenced.h>
#include <Step/Config.h>

#include <iosfwd>

namespace Step
{

    class STEP_EXPORT StepLogger : public Referenced
    {
    public:
        typedef enum {
            STEP_FATAL,
            STEP_ERROR,
            STEP_WARNING,
            STEP_INFO,
            STEP_DEBUG,
            STEP_TRACE
        } Severity;


        StepLogger();
        virtual ~StepLogger();

        virtual std::ostream & notify(Severity severity);
    };
}

#define STEP_LOG(severity, logger, message) logger->notify(severity) << message << std::endl;

#ifdef STEP_LOG_TRACE_ENABLE
# ifndef STEP_LOG_DEBUG_ENABLE
#  define STEP_LOG_DEBUG_ENABLE
# endif
# define STEP_LOG_TRACE(logger, message) STEP_LOG(Step::StepLogger::STEP_TRACE, logger, message)
#else
# define STEP_LOG_TRACE(logger, message)
#endif

#ifdef STEP_LOG_DEBUG_ENABLE
# ifndef STEP_LOG_INFO_ENABLE
#  define STEP_LOG_INFO_ENABLE
# endif
# define STEP_LOG_DEBUG(logger, message) STEP_LOG(Step::StepLogger::STEP_DEBUG, logger, message)
#else
# define STEP_LOG_DEBUG(logger, message)
#endif

#ifdef STEP_LOG_INFO_ENABLE
# ifndef STEP_LOG_WARNING_ENABLE
#  define STEP_LOG_WARNING_ENABLE
# endif
# define STEP_LOG_INFO(logger, message) STEP_LOG(Step::StepLogger::STEP_INFO, logger, message)
#else
# define STEP_LOG_INFO(logger, message)
#endif

#ifdef STEP_LOG_WARNING_ENABLE
# ifndef STEP_LOG_ERROR_ENABLE
#  define STEP_LOG_ERROR_ENABLE
# endif
# define STEP_LOG_WARNING(logger, message) STEP_LOG(Step::StepLogger::STEP_WARNING, logger, message)
#else
# define STEP_LOG_WARNING(logger, message)
#endif

#ifdef STEP_LOG_ERROR_ENABLE
# ifndef STEP_LOG_FATAL_ENABLE
#  define STEP_LOG_FATAL_ENABLE
# endif
# define STEP_LOG_ERROR(logger, message) STEP_LOG(Step::StepLogger::STEP_ERROR, logger, message)
#else
# define STEP_LOG_ERROR(logger, message)
#endif

#ifdef STEP_LOG_FATAL_ENABLE
# define STEP_LOG_FATAL(logger, message) STEP_LOG(Step::StepLogger::STEP_FATAL, logger, message)
#else
# define STEP_LOG_FATAL(logger, message)
#endif
