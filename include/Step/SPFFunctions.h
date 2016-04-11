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

#ifndef Step_SPFFunctions_h
#define Step_SPFFunctions_h

#include <Step/Export.h>

#include <Step/Types.h>

#include <vector>
#include <string>
#include <iostream>

namespace Step {

    class StepLogger;

    /*!
     retrieves elements from a aggregate
     @param arg the string to extract from
     @param str1 the result of the extraction
     @return success
     */
    bool STEP_EXPORT getSubParameter(std::string& arg, std::string& str1);
    /*!
     reads a line from a ifstream until the ';' is found, update the line counter and uses the the buffer s to build the resulting string
     @param ifs the input stream
     @param counter the line counter that will be incremented by the number of EOL found
     @param str the parsed line
     @param progress used to store the current progress of the parsing by the callback
     @return success or failure
     */
    bool STEP_EXPORT getLine(std::istream& ifs, unsigned int& counter, std::string& str, size_t &progress, StepLogger *logger);

    /*!
     parses a list of strings
     @param buffer the buffer to parse
     @param res the resulting list of strings parsed
     @return success or failure
     */
    bool STEP_EXPORT parseList(const char* buffer,
            std::vector<std::string>& res);

    /*!
     returns the id from a string
     @param s the string to parse
     @return the Step::Id (can be unset if $ is found
     */
    Id STEP_EXPORT getIdParam(const std::string& s);
    /*!
     constructs a list of Ids from a string
     @param s the string to parse
     @param res the Step::Id (can be unset if $ is found
     @return success or failure
     */
    bool STEP_EXPORT getIdListParam(const std::string& s,
                    std::vector<Id>& res);
    /*!
     removes the boundary quotes of a string
     @param s the string to operate on
     @return success or failure
     */
    bool STEP_EXPORT removeQuotes(std::string& s);
}
#endif
