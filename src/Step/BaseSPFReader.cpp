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

#include <algorithm>
#include <assert.h>

#define LOG_STRING_VECTOR _errors

#include "Step/logger.h"

using namespace std;
using namespace Step;

BaseSPFReader::BaseSPFReader(const std::string &SPFDataCacheFile)
    : _SPFDataCacheFile(SPFDataCacheFile), _callback(0)
{
}

BaseSPFReader::~BaseSPFReader()
{
}

bool BaseSPFReader::readBin(std::istream& in)
{
    _errors.clear();

    // read in header
    operator>>(in, m_header);

    // we will directly fill map of entities in our express data set
    MapOfEntities &mapOfEntities = m_expressDataSet->getAll();

    // now, read in nb of entities
    MapOfEntities::size_type nbOfEntities;
    binary_read(in, nbOfEntities);

    // for each entity
    for(unsigned int i=0; i < nbOfEntities; ++i)
    {
        // read in its current id
        binary_read(in, m_currentId);

        // read in its class name code
        int classNameCode;
        binary_read(in, classNameCode);

        // create SPFData reading stream
        Step::SPFData *spfData = new Step::SPFData(in);

        // create base spf object given its current ID and SPFData
        m_currentObj = new BaseSPFObject(m_currentId, spfData);
        m_currentObj->setExpressDataSet(m_expressDataSet);

        // fill our entity map
        mapOfEntities[m_currentId] = m_currentObj;
        // check to update max Id
        m_expressDataSet->updateMaxId(m_currentId);

        std::string entityName = BaseSPFObject::entityTypeName(classNameCode);
        if (entityName.empty())
        {
            LOG_WARNING("Can't get entity class name from entity code : "
                    << classNameCode << " , line "
                    << m_currentLineNb);
            continue;
        }

        // find its alloc funct
        if (!callLoadFunction(entityName))
        {
            LOG_WARNING("Can't find load function for entity name : "
                    << entityName << " , line "
                    << m_currentLineNb);
            continue;
        }
        // set it
        m_currentObj->setAllocateFunction(m_currentType, entityName);
    }

    return true;
}

bool BaseSPFReader::read(std::istream& input, size_t inputSize)
{
    bool inMemory = inputSize > 0;

    size_t progress = 0;
    if(_callback)
    {
        // get length of file:
        _callback->setMaximum(inputSize);
    }
    _errors.clear();

    size_t bufferLength=0 ;
    char* buffer=0;

    if(inMemory)
    {
        bufferLength = inputSize;
        buffer = new char[bufferLength];
        input.read(buffer,bufferLength);
    }
    else
    {
        bufferLength = 8388608; // 8Mb
        buffer = new char[bufferLength];
    }
    std::string::size_type i, from;
    m_currentLineNb = 1;

    // Parse the header
    if (inMemory)
    {
        if (!m_header.parse(buffer, bufferLength, m_currentLineNb, progress))
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
    }
    else
    {
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
    }

    if(_callback)
    {
        // update progress callback
        _callback->setProgress(progress);

    }
    // DATA section
    string str;

    if (inMemory)
    {
        if (!Step::getLine(progress, m_currentLineNb, buffer, bufferLength, str,progress) || str
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
    }
    else
    {
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
    }


    if(_callback)
    {
        // update progress callback
        _callback->setProgress(progress);
    }

    bool readSPFDataCache = false;
    bool writeSPFDataCache = false;

/*_SPFDataCacheFile
    std::ifstream spfCacheInBinFile;
    std::ofstream spfCacheOutBinFile;
*/
    std::ifstream spfCacheInFile;
    std::ofstream spfCacheOutFile;

    if (_SPFDataCacheFile.size())
    {
/*
        std::string binFileName = _SPFDataCacheFile + ".bin";
        spfCacheInBinFile.open(binFileName.c_str(), ios_base::in | ios_base::binary);
        readSPFDataCache = spfCacheInBinFile.is_open();
*/
        spfCacheInFile.open(_SPFDataCacheFile.c_str(), ios_base::in);
        readSPFDataCache = spfCacheInFile.is_open();

        if (!readSPFDataCache)
        {
/*
            std::string binFileName = _SPFDataCacheFile + ".bin";
            spfCacheOutBinFile.open(binFileName.c_str(), ios_base::out | ios_base::binary);
*/
            spfCacheOutFile.open(_SPFDataCacheFile.c_str(), ios_base::out);
            writeSPFDataCache = spfCacheOutFile.is_open();
        }
    }

    // if we'll write spf data cache, we need to keep all classes type parsed
    typedef std::set<std::string> EntitySet;
    typedef EntitySet::iterator EntitySetIt;
    EntitySet entitySet;

    // and for each Id, we'll keep an iterator to its associated class name
    typedef std::map<Id, EntitySetIt> Id2EntityIdx;
    typedef Id2EntityIdx::iterator Id2EntityIdxIt;
    Id2EntityIdx id2EntityIdx;

    if (readSPFDataCache)
    {
        // we will directly fill map of entities in our express data set
        MapOfEntities &mapOfEntities = m_expressDataSet->getAll();

        std::string buffer;

        // read in nb of SPFData struct
        unsigned int nbElement = 0;
        if (std::getline(spfCacheInFile, buffer))
        {
            stringstream ss(buffer);
            ss >> nbElement;
        }

        for(unsigned int i=0; i<nbElement;++i)
        {
            // read in Step Id
            if (std::getline(spfCacheInFile, buffer))
            {
                stringstream ss(buffer);
                ss >> m_currentId;
            }
            else
            {
                LOG_WARNING("Missing or wrong Step Id at line : "
                        << m_currentLineNb);
                break;
            }
            ++m_currentLineNb;

            // read in its class name (in uppercase)
            std::string entityName;
            std::getline(spfCacheInFile, entityName);
            if (entityName.empty())
            {
                LOG_WARNING("Empty entity name at line : "
                        << m_currentLineNb);
                break;
            }
            ++m_currentLineNb;

            // create base spf object and insert it express data set
            Step::SPFData *spfData = new Step::SPFData;
            m_currentObj = new BaseSPFObject(m_currentId, spfData);
            m_currentObj->setExpressDataSet(m_expressDataSet);
            mapOfEntities[m_currentId] = m_currentObj;
            m_expressDataSet->updateMaxId(m_currentId);

            // read in all string data
            spfCacheInFile >> *spfData;
            //
            if (!callLoadFunction(entityName))
            {
                LOG_WARNING("Unexpected entity name : "
                        << entityName << " , line "
                        << m_currentLineNb);
                continue;
            }
            m_currentLineNb += (m_currentObj->getArgs()->argc()+1);
            m_currentObj->setAllocateFunction(m_currentType, entityName);
        }
    }
    else
    {
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

            if (inMemory)
            {
                if (!Step::getLine(progress, m_currentLineNb, buffer, bufferLength, str,progress))
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
            }
            else
            {
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
            if (!callLoadFunction(entityName))
            {
                LOG_WARNING("Unexpected entity name : "
                        << entityName << " , line "
                        << m_currentLineNb);
                continue;
            }
            m_currentObj->setAllocateFunction(m_currentType, entityName);

            if (writeSPFDataCache)
            {
                std::pair<EntitySetIt, bool> itb = entitySet.insert(entityName);
                id2EntityIdx[m_currentId] = itb.first;
            }
        }
        // END-ISO-10303-21
        if (inMemory)
        {
            if (!Step::getLine(progress, m_currentLineNb, buffer, bufferLength, str,progress) || str
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
        }
        else
        {
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
        }
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

const SPFHeader& BaseSPFReader::getHeader() const
{
    return m_header;
}

SPFHeader& BaseSPFReader::getHeader()
{
    return m_header;
}

