#include <Step/StepLogger.h>

#include <iostream>

using namespace Step;


StepLogger::StepLogger()
{

}

StepLogger::~StepLogger()
{

}

std::ostream &StepLogger::notify(StepLogger::Severity severity)
{
    switch(severity)
    {
    case STEP_FATAL:
        std::cerr << "FATAL: ";
        break;
    case STEP_ERROR:
        std::cerr << "ERROR: ";
        break;
    case STEP_WARNING:
        std::cerr << "WARNING: ";
        break;
    case STEP_INFO:
        std::cerr << "INFO: ";
        break;
    case STEP_DEBUG:
        std::cerr << "DEBUG: ";
        break;
    case STEP_TRACE:
        std::cerr << "TRACE: ";
        break;
    }

    return std::cerr;
}
