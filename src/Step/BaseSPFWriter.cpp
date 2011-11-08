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

#include "Step/BaseSPFWriter.h"
#include "Step/SPFData.h"
#include "Step/SPFHeader.h"
#include "Step/SPFFunctions.h"
#include "Step/BaseSPFObject.h"
#include "Step/BaseExpressDataSet.h"

#include "Step/logger.h"

#include <locale>

using namespace Step;

BaseSPFWriter::BaseSPFWriter(BaseExpressDataSet * e) : _callback(0)
{
    m_expressDataSet = e;
    m_precision = 16;
}

BaseSPFWriter::~BaseSPFWriter()
{

}

bool BaseSPFWriter::writeSPF(const std::string &filepath) {
    std::ofstream filestream;
    filestream.open(filepath.c_str());
    bool status = writeSPF(filestream);
    filestream.close();
    return status;
}

#ifdef MSVC
bool BaseSPFWriter::writeSPF(const std::wstring &filepath) {
    std::ofstream filestream;
    filestream.open(filepath.c_str());
    bool status = writeSPF(filestream);
    filestream.close();
    return status;
}
#endif

bool BaseSPFWriter::init(std::ostream& filestream)
{
    m_out = &filestream;
    if (!outputStream().good())
        return false;
    outputStream().precision(m_precision);

    return true;
}

void BaseSPFWriter::writeHeader()
{
    SPFHeader& header = m_expressDataSet->getHeader();
    unsigned int i;
    outputStream() << "ISO-10303-21;" << std::endl;
    outputStream() << "HEADER;" << std::endl;

    outputStream() << "FILE_DESCRIPTION((";

    SPFHeader::FileDescription& file_description = header.getFileDescription();

    //std::list<std::string> file_description = m_expressDataSet->get_file_description() ;
    for (i = 0; i < file_description.description.size(); i++)
    {
        outputStream() << file_description.description[i].toSPF();
        if (i != (file_description.description.size() - 1))
            outputStream() << ",";
    }

    outputStream() << "), " << file_description.implementationLevel.toSPF() << ");"
            << std::endl;

    SPFHeader::FileName& filename = header.getFileName();
    outputStream() << "FILE_NAME(" << filename.name.toSPF() << ","
            << filename.timeStamp.toSPF() << ",(";

    std::vector<String> author = filename.author;
    for (i = 0; i < author.size(); i++)
    {
        outputStream() << author[i].toSPF();
        if (i != author.size() - 1)
            outputStream() << ",";
    }
    outputStream() << "),(";

    std::vector<String> organization = filename.organization;
    for (i = 0; i < organization.size(); i++)
    {
        outputStream() << organization[i].toSPF();
        if (i != organization.size() - 1)
            outputStream() << ",";
    }
    outputStream() << "), " << filename.preprocessorVersion.toSPF() << ", "
            << filename.originatingSystem.toSPF() << ", "
            << filename.authorization.toSPF() << ");" << std::endl;

    outputStream() << "FILE_SCHEMA((";
    std::vector<String> schema_identifiers =
            header.getFileSchema().schemaIdentifiers;
    for (i = 0; i < schema_identifiers.size(); i++)
    {
        outputStream() << schema_identifiers[i].toSPF();
        if (i != schema_identifiers.size() - 1)
            outputStream() << ", ";
    }

    outputStream() << "));" << std::endl;
    outputStream() << "ENDSEC;" << std::endl;
    outputStream() << "DATA;" << std::endl;

}

void BaseSPFWriter::writeEnder()
{
    outputStream() << "ENDSEC;" << std::endl;
    outputStream() << "END-ISO-10303-21;" << std::endl;
}

bool BaseSPFWriter::writeIfNotInited(Id id)
{
#define CHECK_IF_EXIST(str) (str[0] == '#'?(m_expressDataSet->exists(atoi(str.substr(1).c_str()))?str:"$"):str)
    SPFData* args = m_expressDataSet->getArgs(id);

    if (!args || args->argc() <= 0)
        return false;
    outputStream() << CHECK_IF_EXIST(args->at(0));
    for (int i = 1; i < args->argc(); i++)
    {
        outputStream() << "," << CHECK_IF_EXIST(args->at(i));
    }
    outputStream() << ");" << std::endl;
    return true;
#undef CHECK_IF_EXIST
}

void BaseSPFWriter::writeAttribute(BaseEntity* entity)
{
    Step::Id curId = entity->getKey();
    if (m_expressDataSet->exists(curId))
        outputStream() << "#" << curId;
    else
        outputStream() << "$";
}

void BaseSPFWriter::writeAttribute(Real value)
{
    if (isUnset(value))
    {
        outputStream() << "$";
    }
    else
    {
        std::stringstream sstream;
        // Make sure not to be side tracked by user's locale
        sstream.imbue(std::locale::classic());
        sstream << std::setprecision(m_precision) << std::setiosflags(
                std::ios_base::uppercase) << value;
        float integer_part = float(int(value));
        if (integer_part == value)
        {
            sstream << ".0";
        }
        std::string str = sstream.str();
        if (str.find('.') == std::string::npos && str.find('E')
                != std::string::npos)
        {
            str.insert(str.find('E'), ".0");
        }
        outputStream() << str;
    }
}

void BaseSPFWriter::writeAttribute(Integer value)
{
    if (isUnset(value))
        outputStream() << "$";
    else
        outputStream() << value;
}

void BaseSPFWriter::writeAttribute(Boolean value)
{
    outputStream() << (value == BTrue ? ".T." : (value == BFalse ? ".F." : "$"));
}

void BaseSPFWriter::writeAttribute(Logical value)
{
    switch (value)
    {
    case LTrue:
        outputStream() << ".T.";
        break;
    case LFalse:
        outputStream() << ".F.";
        break;
    case LUnknown:
        outputStream() << ".U.";
        break;
    default:
        outputStream() << "$";
        break;
    }
}

void BaseSPFWriter::writeAttribute(const String& value)
{
    if (isUnset(value))
        outputStream() << "$";
    else
        outputStream() << value.toSPF();
}

void BaseSPFWriter::setDecimalPrecision(const int precision)
{
    m_precision = precision;
}
