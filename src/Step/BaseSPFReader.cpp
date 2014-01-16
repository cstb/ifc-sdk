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

#include "Step/BaseSPFReader.h"
#include "Step/SPFData.h"
#include "Step/SPFHeader.h"
#include "Step/SPFFunctions.h"
#include "Step/BaseSPFObject.h"
#include "Step/BaseExpressDataSet.h"

#define LOG_STRING_VECTOR _errors

#include "Step/logger.h"

using namespace std;
using namespace Step;

BaseSPFReader::BaseSPFReader() : _callback(0)
{
}

BaseSPFReader::~BaseSPFReader()
{
}

bool BaseSPFReader::read(std::istream& input, size_t inputSize)
{
    size_t progress = 0;
    if(_callback)
    {
        // get length of file:
        _callback->setMaximum(inputSize);
    }
    _errors.clear();

    static const size_t bufferLength = 8388608; // 8Mb
    char* buffer = new char[bufferLength];
    std::string::size_type i, from;
    m_currentLineNb = 1;

    // Parse the header
    if (!m_header.parse(input, m_currentLineNb,progress))
    {
        LOG_ERROR("Can't parse HEADER section, line " << m_currentLineNb);
        if(_callback)
        {
            // got to end of progress bar
            _callback->setProgress(inputSize);
        }
        delete[] buffer;
        return false;
    }

    if(_callback)
    {
        // update progress callback
        _callback->setProgress(progress);

    }
    // DATA section
    string str;

    if (!Step::getLine(input, m_currentLineNb, buffer, bufferLength, str,progress) || str
            != "DATA")
    {
        LOG_ERROR("Can't find DATA section, line "
                << m_currentLineNb);
        if(_callback)
        {
            // set to end
            _callback->setProgress(inputSize);
        }
        delete[] buffer;
        return false;
    }

    if(_callback)
    {
        // update progress callback
        _callback->setProgress(progress);
    }

    // #id=ENTITYNAME(......)
    while (true)
    {
        from = 0;
        LOG_DEBUG("Reading line " << m_currentLineNb);

        if(_callback)
        {
            // update progress callback
            _callback->setProgress(progress);
        }
        if (!Step::getLine(input, m_currentLineNb, buffer, bufferLength, str,progress))
        {
            LOG_ERROR("Unexpected End Of File, line "
                    << m_currentLineNb);
            if(_callback)
            {
                // set to end
                _callback->setProgress(inputSize);
            }
            delete[] buffer;
            return false;
        }

        //ENDSEC detection
        if (str == "ENDSEC")
            break;

        i = str.find('=');
        if (i == string::npos || str[0] != '#')
        {
            LOG_WARNING("Syntax error on entity id, line "
                    << m_currentLineNb);
            continue;
        }

        m_currentId = (Id)atol(str.substr(1, i - 1).c_str());
        from = i + 1;
        i = str.find('(', from);
        if (i == string::npos || str[str.length() - 1] != ')')
        {
            LOG_WARNING(
                    "Syntax error on entity definition, line "
                    << m_currentLineNb);
            continue;
        }

        string entityName = str.substr(from, i - from);
        string line = str.substr(i + 1, str.length() - i - 2);

        m_currentObj = m_expressDataSet->getSPFObject(m_currentId);
        m_currentObj->getArgs()->setParams(line.c_str());

        if (!callLoadFunction(str.substr(from, i - from)))
        {
            LOG_WARNING("Unexpected entity name : "
                    << str.substr(from, i - from) << " , line "
                    << m_currentLineNb);
            continue;
        }
        m_currentObj->setAllocateFunction(m_currentType);

    }

    // END-ISO-10303-21

    if (!Step::getLine(input, m_currentLineNb, buffer, bufferLength, str,progress) || str
            != "END-ISO-10303-21")
    {
        LOG_ERROR("Can't find END-ISO-10303-21 token, line "
                << m_currentLineNb);
        if(_callback)
        {
            // set to end
            _callback->setProgress(inputSize);

        }
        delete[] buffer;
        return false;
    }

    if(_callback)
    {
        // set to end
        _callback->setProgress(inputSize);
    }

    delete[] buffer;
    return true;
}

Step::Id readerSeek(const std::string& /*s*/, int /*pos*/)
{
    return Step::Id_UNDEF;
}

BaseExpressDataSet* BaseSPFReader::getExpressDataSet()
{
    return m_expressDataSet;
}

SPFHeader& BaseSPFReader::getHeader()
{
    return m_header;
}
