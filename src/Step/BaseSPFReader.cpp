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
#include <Step/BaseSPFReader.h>
#include <Step/SPFData.h>
#include <Step/SPFHeader.h>
#include <Step/SPFFunctions.h>
#include <Step/BaseSPFObject.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

using namespace std;

Step::BaseSPFReader::BaseSPFReader()
{
}

Step::BaseSPFReader::~BaseSPFReader()
{
}

bool Step::BaseSPFReader::read(std::ifstream& file)
{
    unsigned long bufferLength = 256000;
    char* buffer = new char[bufferLength];
    std::string::size_type i,from;
    m_currentLineNb = 1;
    // Parse the header
    if (!m_header.parse(file, m_currentLineNb)) {
        LOG_ERROR("BaseSPFReader : Can't parse m_header section, line ");
        delete []buffer;
        return false;
    }


    // DATA section
    string str;

    if (!Step::getLine(file, m_currentLineNb, buffer, bufferLength, str)
            || str != "DATA") {
        LOG_ERROR("BaseSPFReader : Can't find DATA section, line " << m_currentLineNb);
        delete []buffer;
        return false;
    }

    // #id=ENTITYNAME(......)
    while (true) {
        from = 0;
        LOG_DEBUG("Reading line " <<  m_currentLineNb);

        if (!Step::getLine(file, m_currentLineNb, buffer, bufferLength, str)) {
            LOG_ERROR("BaseSPFReader : Unexpected End Of File, line " << m_currentLineNb);
            delete []buffer;
            return false;
        }

        //ENDSEC detection
        if (str == "ENDSEC")
            break;

        i = str.find('=');
        if (i == string::npos || str[0] != '#') {
            LOG_ERROR("BaseSPFReader : Syntax error on entity id, line " << m_currentLineNb);
            delete []buffer;
            return false;
        }

        m_currentId = atoi(str.substr(1,i-1).c_str());
        from = i+1;
        i = str.find('(',from);
        if (i == string::npos || str[str.length()-1] !=')') {
            LOG_ERROR("BaseSPFReader : Syntax error on entity definition, line " << m_currentLineNb);
            delete []buffer;
            return false;
        }

        string entityName = str.substr(from,i-from);
        m_currentLine = str.substr(i+1,str.length() - i - 2);

        m_currentObj = m_expressDataSet->getSPFObject(m_currentId);
        m_currentObj->getArgs()->setParams(m_currentLine.c_str());


        if (!callLoadFunction(str.substr(from,i-from))) {
            LOG_ERROR("BaseSPFReader : Unexpected entity name : "
                      << str.substr(from,i-from)
                      << " , line " << m_currentLineNb);
            delete []buffer;
            return false;
        }
        m_currentObj->setAllocateFunction(m_currentType);
        //TODO fill SPFData

    }


    // END-ISO-10303-21

    if (!Step::getLine(file, m_currentLineNb, buffer, bufferLength, str)
            || str != "END-ISO-10303-21") {
        LOG_ERROR("BaseSPFReader : Can't find END-ISO-10303-21 token, line " << m_currentLineNb);
        delete []buffer;
        return false;
    }

    delete []buffer;
    return true;
}

Step::Id readerSeek(const std::string& s, int pos)
{
    return Step::Id_UNDEF;
}
