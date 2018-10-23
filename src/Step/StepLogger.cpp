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
