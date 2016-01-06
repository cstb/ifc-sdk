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

using namespace std;
using namespace Step;


SPFHeader::SPFHeader() : m_logger(new StepLogger())
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

bool checkSchemaIdentifier(const SPFHeader::FileSchema& fileSchema, const String &schemaIdentifier)
{
    return std::find(fileSchema.schemaIdentifiers.begin(),fileSchema.schemaIdentifiers.end(),schemaIdentifier)
            != fileSchema.schemaIdentifiers.end();
}

bool SPFHeader::parse(char *buffer, size_t bufferLength, unsigned int& counter, size_t &progress , const String &schemaIdentifier)
{
    string::size_type i;
    string str;
    // ISO-10303-21
    if (!getLine(0, counter, buffer, bufferLength, str, progress, m_logger.get()) || str
            != "ISO-10303-21")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Bad file type, should be ISO-10303-21.");
        return false;
    }

    // HEADER
    if (!getLine(progress, counter, buffer, bufferLength, str,progress, m_logger.get()) || str != "HEADER")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the HEADER section.");
        return false;
    }

    // FILE_DESCRIPTION(...,...)
    getLine(progress, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_DESCRIPTION")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_DESCRIPTION argument.");
        return false;
    }

    // FILE_DESCRIPTION arguments
    vector<string> currentParam;
    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 2)
    {
        STEP_LOG_ERROR(m_logger,
                "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 2 instead of "
                        << currentParam.size());
        return false;
    }
    // FILE_DESCRIPTION arguments
    // arg 1
    vector<string> vec;
    if (!parseList(
            currentParam[0].substr(1, currentParam[0].length() - 2).c_str(),
            vec))
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        //  if(!removeQuotes(m_fileDescription.description[k])) {
        //   STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        //   delete []buffer;
        //   return false;
        //  }
        m_fileDescription.description.push_back(String::fromSPF(vec[k]));
    }

    // FILE_DESCRIPTION arguments
    // arg 2
    m_fileDescription.implementationLevel = String::fromSPF(currentParam[1]);

    // FILE_NAME arguments
    getLine(progress, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_NAME")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_NAME argument.");
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 7)
    {
        STEP_LOG_ERROR(m_logger,
                "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 7 instead of "
                        << currentParam.size());
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
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 3 of FILE_NAME");
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        m_fileName.author.push_back(String::fromSPF(vec[k]));
    }

    // arg 4
    if (!parseList(
            currentParam[3].substr(1, currentParam[3].length() - 2).c_str(),
            vec))
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 4 of FILE_NAME");
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        m_fileName.organization.push_back(String::fromSPF(vec[k]));
    }

    // arg 5
    m_fileName.preprocessorVersion = String::fromSPF(currentParam[4]);

    // arg 6
    m_fileName.originatingSystem = String::fromSPF(currentParam[5]);

    // arg 7
    m_fileName.authorization = String::fromSPF(currentParam[6]);

    getLine(progress, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_SCHEMA")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_SCHEMA argument.");
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 1)
    {
        STEP_LOG_ERROR(m_logger,
                "SPFHeader : Bad number of arguments for FILE_SCHEMA, should be 1 instead of "
                        << currentParam.size());
        return false;
    }

    if (!parseList(
            currentParam[0].substr(1, currentParam[0].length() - 2).c_str(),
            vec))
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_SCHEMA");
        return false;
    }
    for (unsigned int k = 0; k < vec.size(); k++)
    {
        m_fileSchema.schemaIdentifiers.push_back(String::fromSPF(vec[k]));
    }

    if(!checkSchemaIdentifier(m_fileSchema, schemaIdentifier))
    {
        STEP_LOG_FATAL(m_logger, "Schema Identifiers must contain : " << schemaIdentifier);
        return false;
    }

    m_otherFields = "";
    bool found = false;
    for (unsigned int k = 0; k < 6; k++)
    {
        if (!getLine(progress, counter, buffer, bufferLength, str,progress, m_logger.get()))
        {
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
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find ENDSEC");
        return false;
    }
    return true;
}

void SPFHeader::setLogger(StepLogger *logger)
{
    m_logger = logger;
}

bool SPFHeader::parse(std::istream& ifs, unsigned int& counter, size_t &progress , const String &schemaIdentifier)
{
    static const size_t bufferLength = 256000;
    char* buffer = new char[bufferLength];
    string::size_type i;
    string str;
    // ISO-10303-21
    if (!getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get()) || str
            != "ISO-10303-21")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Bad file type, should be ISO-10303-21.");
        delete[] buffer;
        return false;
    }

    // HEADER
    if (!getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get()) || str != "HEADER")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the HEADER section.");
        delete[] buffer;
        return false;
    }

    // FILE_DESCRIPTION(...,...)
    getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_DESCRIPTION")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_DESCRIPTION argument.");
        delete[] buffer;
        return false;
    }

    // FILE_DESCRIPTION arguments
    vector<string> currentParam;
    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 2)
    {
        STEP_LOG_ERROR(m_logger,
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
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        //  if(!removeQuotes(m_fileDescription.description[k])) {
        //   STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        //   delete []buffer;
        //   return false;
        //  }
        m_fileDescription.description.push_back(String::fromSPF(vec[k]));
    }

    // FILE_DESCRIPTION arguments
    // arg 2
    m_fileDescription.implementationLevel = String::fromSPF(currentParam[1]);

    // FILE_NAME arguments
    getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_NAME")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_NAME argument.");
        delete[] buffer;
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 7)
    {
        STEP_LOG_ERROR(m_logger,
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
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 3 of FILE_NAME");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        m_fileName.author.push_back(String::fromSPF(vec[k]));
    }

    // arg 4
    if (!parseList(
            currentParam[3].substr(1, currentParam[3].length() - 2).c_str(),
            vec))
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 4 of FILE_NAME");
        delete[] buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        m_fileName.organization.push_back(String::fromSPF(vec[k]));
    }

    // arg 5
    m_fileName.preprocessorVersion = String::fromSPF(currentParam[4]);

    // arg 6
    m_fileName.originatingSystem = String::fromSPF(currentParam[5]);

    // arg 7
    m_fileName.authorization = String::fromSPF(currentParam[6]);

    getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get());
    i = str.find('(');
    if (i == string::npos || str.substr(0, i) != "FILE_SCHEMA")
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find the FILE_SCHEMA argument.");
        delete[] buffer;
        return false;
    }

    if (!parseList(str.substr(i + 1, str.length() - i - 2).c_str(),
            currentParam) || currentParam.size() != 1)
    {
        STEP_LOG_ERROR(m_logger,
                "SPFHeader : Bad number of arguments for FILE_SCHEMA, should be 1 instead of "
                        << currentParam.size());
        delete[] buffer;
        return false;
    }

    if (!parseList(
            currentParam[0].substr(1, currentParam[0].length() - 2).c_str(),
            vec))
    {
        STEP_LOG_ERROR(m_logger,"SPFHeader : Syntax Error in arg 1 of FILE_SCHEMA");
        delete[] buffer;
        return false;
    }
    for (unsigned int k = 0; k < vec.size(); ++k)
    {
        m_fileSchema.schemaIdentifiers.push_back(String::fromSPF(vec[k]));
    }

    if(!checkSchemaIdentifier(m_fileSchema, schemaIdentifier))
    {
        STEP_LOG_FATAL(m_logger, "Schema Identifiers must contain : " << schemaIdentifier);
        delete[] buffer;
        return false;
    }

    m_otherFields = "";
    bool found = false;
    for (unsigned int k = 0; k < 6; k++)
    {
        if (!getLine(ifs, counter, buffer, bufferLength, str,progress, m_logger.get()))
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
        STEP_LOG_ERROR(m_logger,"SPFHeader : Can't find ENDSEC");
        delete[] buffer;
        return false;
    }
    delete[] buffer;
    return true;
}
