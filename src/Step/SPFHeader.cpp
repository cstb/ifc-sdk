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

#include "Step/SPFHeader.h"
#include "Step/SPFFunctions.h"
#include "Step/BaseExpressDataSet.h"

#include "Step/logger.h"

using namespace std;
using namespace Step;


SPFHeader::SPFHeader()
{
}

SPFHeader::~SPFHeader()
{
}

SPFHeader::FileDescription& SPFHeader::getFileDescription()
{
    return m_fileDescription;
}

SPFHeader::FileName& SPFHeader::getFileName()
{
    return m_fileName;
}

SPFHeader::FileSchema& SPFHeader::getFileSchema()
{
    return m_fileSchema;
}

String& SPFHeader::getOtherFields()
{
    return m_otherFields;
}

bool SPFHeader::parse(std::istream& ifs, unsigned int& counter, std::streamsize &countSize )
{
    static const size_t bufferLength = 256000;
    char* buffer = new char[bufferLength];
    string::size_type i;
    string str;
    // ISO-10303-21
    if (!getLine(ifs, counter, buffer, bufferLength, str,countSize) || str
            != "ISO-10303-21")
    {
        LOG_ERROR("SPFHeader : Bad file type, should be ISO-10303-21.");
        delete[] buffer;
        return false;
    }

    // HEADER
    if (!getLine(ifs, counter, buffer, bufferLength, str,countSize) || str != "HEADER")
    {
        LOG_ERROR("SPFHeader : Can't find the HEADER section.");
        delete[] buffer;
        return false;
    }

    // FILE_DESCRIPTION(...,...)
    getLine(ifs, counter, buffer, bufferLength, str,countSize);
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_DESCRIPTION")
    {
        LOG_ERROR("SPFHeader : Can't find the FILE_DESCRIPTION argument.");
        delete[] buffer;
        return false;
    }

    // FILE_DESCRIPTION arguments
    vector<string> currentParam;
    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 2)
    {
        LOG_ERROR(
                "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 2 instead of "
                        << currentParam.size());
        delete[] buffer;
        return false;
    }
    // FILE_DESCRIPTION arguments
    // arg 1
    vector<string> vec;
    if (!parseList(
            currentParam[0].substr(1, currentParam[0].length() - 2).c_str(),
            vec))
    {
        LOG_ERROR("SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++)
    {
        //  if(!removeQuotes(m_fileDescription.description[k])) {
        //   LOG_ERROR("SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        //   delete []buffer;
        //   return false;
        //  }
        m_fileDescription.description.push_back(String::fromSPF(vec[k]));
    }

    // FILE_DESCRIPTION arguments
    // arg 2
    m_fileDescription.implementationLevel = String::fromSPF(currentParam[1]);

    // FILE_NAME arguments
    getLine(ifs, counter, buffer, bufferLength, str,countSize);
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_NAME")
    {
        LOG_ERROR("SPFHeader : Can't find the FILE_NAME argument.");
        delete[] buffer;
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 7)
    {
        LOG_ERROR(
                "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 7 instead of "
                        << currentParam.size());
        delete[] buffer;
        return false;
    }

    // arg 1
    m_fileName.name = String::fromSPF(currentParam[0]);

    // arg 2
    m_fileName.timeStamp = String::fromSPF(currentParam[1]);

    // arg 3
    if (!parseList(
            currentParam[2].substr(1, currentParam[2].length() - 2).c_str(),
            vec))
    {
        LOG_ERROR("SPFHeader : Syntax Error in arg 3 of FILE_NAME");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++)
    {
        m_fileName.author.push_back(String::fromSPF(vec[k]));
    }

    // arg 4
    if (!parseList(
            currentParam[3].substr(1, currentParam[3].length() - 2).c_str(),
            vec))
    {
        LOG_ERROR("SPFHeader : Syntax Error in arg 4 of FILE_NAME");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++)
    {
        m_fileName.organization.push_back(String::fromSPF(vec[k]));
    }

    // arg 5
    m_fileName.preprocessorVersion = String::fromSPF(currentParam[4]);

    // arg 6
    m_fileName.originatingSystem = String::fromSPF(currentParam[5]);

    // arg 7
    m_fileName.authorization = String::fromSPF(currentParam[6]);

    getLine(ifs, counter, buffer, bufferLength, str,countSize);
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_SCHEMA")
    {
        LOG_ERROR("SPFHeader : Can't find the FILE_SCHEMA argument.");
        delete[] buffer;
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 1)
    {
        LOG_ERROR(
                "SPFHeader : Bad number of arguments for FILE_SCHEMA, should be 1 instead of "
                        << currentParam.size());
        delete[] buffer;
        return false;
    }

    if (!parseList(
            currentParam[0].substr(1, currentParam[0].length() - 2).c_str(),
            vec))
    {
        LOG_ERROR("SPFHeader : Syntax Error in arg 1 of FILE_SCHEMA");
        delete[] buffer;
        return false;
    }
    for (unsigned int k = 0; k < vec.size(); k++)
    {
        m_fileSchema.schemaIdentifiers.push_back(String::fromSPF(vec[k]));
    }

    m_otherFields = "";
    bool found = false;
    for (unsigned int k = 0; k < 6; k++)
    {
        if (!getLine(ifs, counter, buffer, bufferLength, str,countSize))
        {
            delete[] buffer;
            return false;
        }
        if (str == "ENDSEC")
        {
            found = true;
            break;
        }
        m_otherFields = m_otherFields + String::fromSPF(str);
    }
    if (!found)
    {
        LOG_ERROR("SPFHeader : Can't find ENDSEC");
        delete[] buffer;
        return false;
    }
    delete[] buffer;
    return true;
}
