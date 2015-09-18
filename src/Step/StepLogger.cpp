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
    case FATAL:
        std::cerr << "FATAL: ";
        break;
    case ERROR:
        std::cerr << "ERROR: ";
        break;
    case WARNING:
        std::cerr << "WARNING: ";
        break;
    case INFO:
        std::cerr << "INFO: ";
        break;
    case DEBUG:
        std::cerr << "DEBUG: ";
        break;
    case TRACE:
        std::cerr << "TRACE: ";
        break;
    }

    return std::cerr;
}
