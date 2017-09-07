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



#include <locale>
#include <cassert>
#include <algorithm>
#include <iostream>

using namespace Step;

#ifndef DBL_DIG
#  define DBL_DIG __DBL_DIG__
#endif

BaseSPFWriter::BaseSPFWriter(BaseExpressDataSet * e) :
    m_out(&std::cout),
    m_expressDataSet(e),
    m_precision(DBL_DIG + 1),
    _callback(0)
{
}

BaseSPFWriter::~BaseSPFWriter()
{

}

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
#define CHECK_IF_EXIST(str) (str[0] == '#'?(m_expressDataSet->exists(unsigned(atol(str.substr(1).c_str())))?str:"$"):str)
    SPFData* args = m_expressDataSet->getArgs(id);

    if (!args || args->argc() <= 0)
        return false;
    outputStream() << CHECK_IF_EXIST(args->at(0));
    for (unsigned i = 1; i < args->argc(); i++)
    {
        outputStream() << "," << CHECK_IF_EXIST(args->at(i));
    }
    outputStream() << ");" << std::endl;
    return true;
#undef CHECK_IF_EXIST
}

void BaseSPFWriter::writeAttribute(BaseEntity* entity)
{
    if (entity)
    {
        Step::Id curId = entity->getKey();
        if (m_expressDataSet->exists(curId))
        {
            outputStream() << "#" << curId;
            return ;
        }
    }

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
        const double fabs_value = fabs(value);

        if(fabs_value < pow(10.0, -m_precision) * 0.5)
        {
            outputStream() << "0.";
        }
        else
        {
            std::string str;
            std::stringstream stream;
            stream.imbue(std::locale::classic());

            const double exp = log10(fabs_value);

            std::string::size_type end;
            if(exp > DBL_DIG + 1)
            {
                stream << std::setprecision(DBL_DIG + 1)
                       << std::setiosflags (std::ios_base::scientific | std::ios_base::uppercase | std::ios_base::showpoint)
                       << value;

                str = stream.str();
                end = str.find('E');
            }
            else
            {
                const int digits = exp < 0.0 ? 0 : int(exp);

                stream << std::setprecision(std::min(m_precision, DBL_DIG + 1 - digits))
                       << std::setiosflags (std::ios_base::fixed | std::ios_base::uppercase | std::ios_base::showpoint)
                       << value;

                str = stream.str();
                end = str.size();
            }

            std::string::size_type begin = str.find('.');
            std::string::size_type it = end;

            if (it != std::string::npos && begin != std::string::npos)
            {
                // Remove trailing zeros
                while(--it > begin)
                {
                    if(str[it] != '0')
                        break;
                }

                it++;
                str.erase(it, end - it);
            }

            //assert(fabs(Step::fromString<double>(str) - value) < pow(10.0, m_precision));

            outputStream() << str;
        }
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
    case LUnset:
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
    if(precision >= 0)
        m_precision = precision;
}
