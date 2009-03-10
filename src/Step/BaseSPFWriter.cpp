/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#include <Step/BaseSPFWriter.h>
#include <Step/SPFData.h>
#include <Step/SPFHeader.h>
#include <Step/SPFFunctions.h>
#include <Step/BaseSPFObject.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

using namespace Step;

BaseSPFWriter::BaseSPFWriter(BaseExpressDataSet * e)
{
    m_expressDataSet = e;
    m_precision = 16;
}

BaseSPFWriter::~BaseSPFWriter()
{

}

bool BaseSPFWriter::init(const std::string& filepath)
{
    m_out.open(filepath.c_str ());
    if (!m_out.is_open())
        return false;
    m_out.precision(10);
    return true;
}

void BaseSPFWriter::writeHeader()
{
    SPFHeader& header = m_expressDataSet->getHeader();
    unsigned int i ;
    m_out << "ISO-10303-21;" << std::endl ;
    m_out << "HEADER;" << std::endl ;

    m_out << "FILE_DESCRIPTION((" ;

    SPFHeader::FileDescription& file_description = header.getFileDescription();

    //std::list<std::string> file_description = m_expressDataSet->get_file_description() ;
    for ( i = 0; i < file_description.description.size() ; i++)
    {
        m_out << file_description.description[i].toSPF();
        if (i != (file_description.description.size()-1))
            m_out << "," ;
    }

    m_out << "), "
    << file_description.implementationLevel.toSPF() << ");" << std::endl ;

    SPFHeader::FileName& filename = header.getFileName();
    m_out << "FILE_NAME("<< filename.name.toSPF()
    << "," << filename.timeStamp.toSPF()
    << ",(" ;

    std::vector<String> author = filename.author;
    for (i=0 ; i<author.size() ; i++)
    {
        m_out << author[i].toSPF();
        if (i != author.size()-1)
            m_out << "," ;
    }
    m_out << "),(" ;

    std::vector<String> organization = filename.organization;
    for (i=0 ; i<organization.size() ; i++)
    {
        m_out << organization[i].toSPF();
        if (i != organization.size()-1)
            m_out << "," ;
    }
    m_out << "), " <<  filename.preprocessorVersion.toSPF()
    << ", " << filename.originatingSystem.toSPF()
    << ", " << filename.authorization.toSPF()
    << ");" << std::endl ;

    m_out << "FILE_SCHEMA((" ;
    std::vector<String> schema_identifiers = header.getFileSchema().schemaIdentifiers;
    for (i=0 ; i<schema_identifiers.size() ; i++)
    {
        m_out << schema_identifiers[i].toSPF();
        if (i != schema_identifiers.size()-1)
            m_out << ", " ;
    }

    m_out << "));" << std::endl ;
    m_out << "ENDSEC;" << std::endl ;
    m_out << "DATA;" << std::endl ;

}

void BaseSPFWriter::writeEnder()
{
    m_out << "ENDSEC;" << std::endl ;
    m_out << "END-ISO-10303-21;" << std::endl ;
    m_out.close();
}


bool BaseSPFWriter::writeIfNotInited(Id id)
{
#define CHECK_IF_EXIST(str) (str[0] == '#'?(m_expressDataSet->exists(atoi(str.substr(1).c_str()))?str:"$"):str)
    SPFData* args = m_expressDataSet->getArgs(id);

    if (!args || args->argc()<=0)
        return false;
    m_out << CHECK_IF_EXIST(args->at(0));
    for (int i = 1; i < args->argc(); i++) {
        m_out << "," << CHECK_IF_EXIST(args->at(i));
    }
    m_out << ");" << std::endl;
    return true;
#undef CHECK_IF_EXIST
}

void BaseSPFWriter::writeAttribute(BaseEntity* entity)
{
    Step::Id curId = entity->getKey();
    if (m_expressDataSet->exists(curId))
        m_out << "#" << curId;
    else
        m_out << "$";
}


void BaseSPFWriter::writeAttribute(Real value)
{
    if (isUnset(value)) {
        m_out << "$";
    } else {
        std::stringstream sstream;
        sstream << std::setprecision(m_precision) << std::setiosflags(std::ios_base::uppercase) << value;
        float integer_part = float(int(value));
        if (integer_part==value)
        {
            sstream << ".0";
        }
        std::string str = sstream.str();
        if (str.find('.')==std::string::npos && str.find('E')!=std::string::npos) {
            str.insert(str.find('E'),".0");
        }
        m_out << str;
    }
}

void BaseSPFWriter::writeAttribute(Integer value)
{
    if (isUnset(value))
        m_out << "$";
    else
        m_out << value;
}

void BaseSPFWriter::writeAttribute(Boolean value)
{
    m_out << (value == BTrue ? ".T." : (value == BFalse ? ".F." : "$") );
}

void BaseSPFWriter::writeAttribute(Logical value)
{
    m_out << (value == LTrue ? ".T." : (value == LFalse ? ".F." : ".U."));
}

void BaseSPFWriter::writeAttribute(const String& value)
{
    if (isUnset(value))
        m_out << "$";
    else
        m_out << value.toSPF();
}

void BaseSPFWriter::setDecimalPrecision(const int precision)
{
    m_precision = precision;
}
