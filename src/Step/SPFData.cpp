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

using namespace std;
using namespace Step;

static const std::string sEmptyString;

SPFData::~SPFData()
{
}

const std::string &SPFData::getNext()
{
    if (m_index>=m_argc)
        return sEmptyString;
    else
        return m_argv[m_index++];
}

std::vector<Id>* SPFData::getInverses(ClassType cl, unsigned i)
{
    std::map<std::pair<ClassType,unsigned>, std::vector<Id> >::iterator it =
        m_inverses.find(std::pair<ClassType,unsigned>(cl,i));
    if (it != m_inverses.end())
        return &it->second;
    else
        return NULL;
}

void SPFData::addInverse(ClassType cl, unsigned i , Id id)
{
    m_inverses[std::pair<ClassType,unsigned>(cl,i)].push_back(id);
}

bool SPFData::setParams(const char *s)
{
    if (!parseList(s,m_argv)) {
        return false;
    }

    m_argc = m_argv.size();
    m_index = 0;
    return true;
}
