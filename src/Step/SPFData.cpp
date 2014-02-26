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

#include "Step/SPFData.h"
#include "Step/BaseExpressDataSet.h"
#include "Step/SPFFunctions.h"

#include <assert.h>

/*
std::ostream& Step::operator<<(std::ostream& out, const Step::SPFData &data)
{
    out << data.m_argc << endl;
    for(int i=0; i < data.m_argc; ++i)
    {
        out << *(data.m_argv[i]) << endl;
    }
    return out;
}
*/

std::ostream& operator<<(std::ostream& out, const Step::SPFData &data)
{
    // write arg count
    binary_write(out, data.argc());
    // write all arg strings
    for(int i=0; i < data.argc(); ++i)
        binary_write_string(out, data[i]);
}

std::istream& operator>>(std::istream& in, Step::SPFData &data)
{
    size_t size;
    binary_read(in, size);
    if (size)
    {
        data.m_argv = new std::string* [size];
        std::string buffer;
        for (size_t i=0; i<size; ++i)
        {
            binary_read_string(in, buffer);
            data.m_argv[i] = new std::string(buffer);
        }
    }
}

/*
std::istream& operator>>(std::istream& in, Step::SPFData &data)
{
    int nbParam = 0;
    std::string buffer;
    // read in Step Id
    if (std::getline(in, buffer))
    {
        std::stringstream ss(buffer);
        ss >> nbParam;
    }
    else
        return in;
    if (nbParam > 0)
    {
        data.m_argv = new std::string* [nbParam];
        assert(data.m_argv != NULL);
    }
    for(int i=0; i<nbParam; ++i)
    {
        if (std::getline(in, buffer))
        {
            data.m_argv[i] = new std::string(buffer);
        }
        assert( data.m_argv[i] != NULL);
    }
    data.m_argc = nbParam;
    return in;
}
*/
using namespace std;
using namespace Step;

static const std::string sEmptyString;

SPFData::SPFData(istream &in) : m_index(0)
{
    // read in number of args
    binary_read(in, m_argc);
    if (m_argc)
    {
        m_argv = new std::string* [m_argc];
        assert(m_argv != NULL);
    }
    for(int i=0; i<m_argc; ++i)
    {
        std::string buffer;
        binary_read_string(in, buffer);
        m_argv[i] = new std::string(buffer);
        assert( m_argv[i] != NULL);
    }
}

SPFData::~SPFData()
{
    if (m_argv)
    {
        for (int i=0; i < m_argc; ++i)
            delete m_argv[i];
        delete[] m_argv;
    }
}

const std::string &SPFData::getNext()
{
    if (m_index>=m_argc)
        return sEmptyString;
    else
        return *(m_argv[m_index++]);
}

std::vector<Id>* SPFData::getInverses(ClassType cl, int i)
{
    std::map<std::pair<ClassType,int>, std::vector<Id> >::iterator it =
        m_inverses.find(std::pair<ClassType,int>(cl,i));
    if (it != m_inverses.end())
        return &it->second;
    else
        return NULL;
}

void SPFData::addInverse(ClassType cl,int i , Id id)
{
    m_inverses[std::pair<ClassType,int>(cl,i)].push_back(id);
}

bool SPFData::setParams(const char *s)
{
    std::vector<std::string *> v;
    if (!parseList(s,v)) {
        return false;
    }
    m_argv = new std::string* [v.size()];
    for (unsigned int i = 0; i < v.size(); ++i) {
        m_argv[i] = v[i];
    }
    m_argc = v.size();
    m_index = 0;
    return true;
}
