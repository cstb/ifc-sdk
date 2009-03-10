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

#include <Step/SPFHeader.h>
#include <Step/SPFFunctions.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

using namespace std;

bool Step::SPFHeader::parse(std::ifstream& ifs, unsigned int& counter)
{
    unsigned long bufferLength = 256000;
    char* buffer = new char[bufferLength];
    string::size_type i;
    string str;
    // ISO-10303-21
    if (!Step::getLine(ifs, counter, buffer, bufferLength, str) || str != "ISO-10303-21") {
        LOG_ERROR("SPFHeader : Bad file type, should be ISO-10303-21.");
        delete []buffer;
        return false;
    }

    // HEADER
    if (!Step::getLine(ifs, counter, buffer, bufferLength, str) || str != "HEADER") {
        LOG_ERROR("SPFHeader : Can't find the HEADER section.");
        delete []buffer;
        return false;
    }

    // FILE_DESCRIPTION(...,...)
    Step::getLine(ifs, counter, buffer, bufferLength, str);
    i = str.find('(');
    if (i == string::npos
            || str.substr(0,i) != "FILE_DESCRIPTION") {
        LOG_ERROR("SPFHeader : Can't find the FILE_DESCRIPTION argument.");
        delete []buffer;
        return false;
    }

    // FILE_DESCRIPTION arguments
    vector<string> currentParam;
    if (!Step::parseList(str.substr(i+1,str.length()-i-2).c_str(), currentParam)
            || currentParam.size() != 2) {
        LOG_ERROR(
            "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 2 instead of "
            << currentParam.size());
        delete []buffer;
        return false;
    }
    // FILE_DESCRIPTION arguments
    // arg 1
    vector<string> vec;
    if (!parseList(currentParam[0].substr(1,currentParam[0].length()-2).c_str(),vec)) {
        LOG_ERROR("SPFHeader : Syntax Error in arg 1 of FILE_DESCRIPTION");
        delete []buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++) {
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
    getLine(ifs, counter, buffer, bufferLength,str);
    i = str.find('(');
    if (i == string::npos || str.substr(0,i) != "FILE_NAME") {
        LOG_ERROR("SPFHeader : Can't find the FILE_NAME argument.");
        delete []buffer;
        return false;
    }

    if (!Step::parseList(str.substr(i+1,str.length()-i-2).c_str(), currentParam)
            || currentParam.size() != 7) {
        LOG_ERROR(
            "SPFHeader : Bad number of arguments for FILE_DESCRIPTION, should be 7 instead of "
            << currentParam.size());
        delete []buffer;
        return false;
    }

    // arg 1
    m_fileName.name = String::fromSPF(currentParam[0]);

    // arg 2
    m_fileName.timeStamp = String::fromSPF(currentParam[1]);

    // arg 3
    if (!parseList(currentParam[2].substr(1,currentParam[2].length()-2).c_str(), vec)) {
        LOG_ERROR("SPFHeader : Syntax Error in arg 3 of FILE_NAME");
        delete []buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++) {
        m_fileName.author.push_back(String::fromSPF(vec[k]));
    }

    // arg 4
    if (!parseList(currentParam[3].substr(1,currentParam[3].length()-2).c_str(), vec)) {
        LOG_ERROR("SPFHeader : Syntax Error in arg 4 of FILE_NAME");
        delete []buffer;
        return false;
    }

    for (unsigned int k = 0; k < vec.size(); k++) {
        m_fileName.organization.push_back(String::fromSPF(vec[k]));
    }

    // arg 5
    m_fileName.preprocessorVersion = String::fromSPF(currentParam[4]);

    // arg 6
    m_fileName.originatingSystem = String::fromSPF(currentParam[5]);

    // arg 7
    m_fileName.authorization = String::fromSPF(currentParam[6]);

    Step::getLine(ifs, counter, buffer, bufferLength, str);
    i = str.find('(');
    if (i == string::npos || str.substr(0,i) != "FILE_SCHEMA") {
        LOG_ERROR("SPFHeader : Can't find the FILE_SCHEMA argument.");
        delete []buffer;
        return false;
    }

    if (!Step::parseList(str.substr(i+1,str.length()-i-2).c_str(), currentParam)
            || currentParam.size() != 1) {
        LOG_ERROR(
            "SPFHeader : Bad number of arguments for FILE_SCHEMA, should be 1 instead of "
            << currentParam.size());
        delete []buffer;
        return false;
    }


    if (!parseList(currentParam[0].substr(1,currentParam[0].length()-2).c_str(),vec)) {
        LOG_ERROR("SPFHeader : Syntax Error in arg 1 of FILE_SCHEMA");
        delete []buffer;
        return false;
    }
    for (unsigned int k = 0; k < vec.size(); k++) {
        m_fileSchema.schemaIdentifiers.push_back(String::fromSPF(vec[k]));
    }

    m_otherFields = "";
    bool found=false;
    for (unsigned int k = 0; k <6 ; k++) {
        if (!Step::getLine(ifs, counter, buffer, bufferLength, str)) {
            delete []buffer;
            return false;
        }
        if ( str =="ENDSEC") {
            found = true;
            break;
        }
        m_otherFields = m_otherFields + String::fromSPF(str);
    }
    if (!found) {
        LOG_ERROR("SPFHeader : Can't find ENDSEC");
        delete []buffer;
        return false;
    }
    delete []buffer;
    return true;
}
