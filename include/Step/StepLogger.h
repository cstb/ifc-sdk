#ifndef STEPLOGGER_H
#define STEPLOGGER_H

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

#endif // STEPLOGGER_H
