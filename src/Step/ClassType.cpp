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

#include "Step/ClassType.h"

#if 1
#include <boost/unordered_map.hpp>
#define STEP_MAP boost::unordered_map
#else
#include <map>
#define STEP_MAP STEP_MAP
#endif

#include <utility>
#include <iostream>
using namespace Step;

static int s_id = 1;

STEP_MAP<std::string, ClassType > * sClassTypeMapPointer=0;

ClassType ClassType::sUndefined("Undefined",0);

ClassType::ClassType(const std::string &name)
{
    static STEP_MAP<std::string, ClassType > sClassTypeMap;
    sClassTypeMapPointer = & sClassTypeMap;
    m_name = name;
    m_id = s_id++;
    // std::cout << "name : " << name << "  Id : " << m_id << std::endl;
    sClassTypeMap.insert(make_pair(name,ClassType(m_name,m_id)));
}

ClassType::ClassType(const ClassType &ref)
{
    m_name = ref.m_name;
    m_id = ref.m_id;
}

ClassType::ClassType(const std::string &name, int id) :
    m_name(name), m_id(id)
{
}

ClassType &ClassType::operator =(const ClassType &ref)
{
    m_name = ref.m_name;
    m_id = ref.m_id;

    return *this;
}

ClassType::~ClassType()
{
}

const std::string & ClassType::getName() const
{
    return m_name;
}

bool ClassType::operator ==(const ClassType & ref) const
{
    return m_id == ref.m_id;
}

bool ClassType::operator <(const ClassType & ref) const
{
    return m_id < ref.m_id;
}

bool ClassType::operator !=(const ClassType & ref) const
{
    return m_id != ref.m_id;
}

const ClassType &ClassType::Undefined()
{
    return sUndefined;
}

const ClassType &ClassType::find(const std::string & name)
{
    STEP_MAP<std::string, ClassType >::const_iterator it = sClassTypeMapPointer->find(name);
    if ( it != sClassTypeMapPointer->end())
    {
        return (*it).second;
    }
    else
    {
        return sUndefined;
    }
}
