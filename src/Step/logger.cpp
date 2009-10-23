#include "Step/logger.h"

#ifdef USE_LOG4CPLUS
using namespace log4cplus;

STEP_DLL_DEF Logger Step::logger = Logger::getInstance("Step");

#endif
