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

#include <utility>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace Step;

static int s_id = 1;

std::map<std::string, ClassType > * sClassTypeMapPointer=0;

ClassType ClassType::sUndefined("Undefined","Undefined",0);

ClassType::ClassType(const std::string &name, const std::string &parentName)
{
    static std::map<std::string, ClassType > sClassTypeMap;
    sClassTypeMapPointer = & sClassTypeMap;
    m_name = name;
    m_parentName = parentName;
    m_id = s_id++;
    // std::cout << "name : " << name << "  Id : " << m_id << std::endl;

    std::string upper(name);
    std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    sClassTypeMap.insert(make_pair(upper,ClassType(m_name, m_parentName, m_id)));
}

ClassType::ClassType()
{
	m_name = ClassType::Undefined().m_name;
    m_parentName = ClassType::Undefined().m_parentName;
	m_id = ClassType::Undefined().m_id;
}

ClassType::ClassType(const std::string &name, const std::string &parentName, int id) :
    m_name(name), m_parentName(parentName), m_id(id)
{
}

ClassType &ClassType::operator =(const ClassType &ref)
{
    m_name = ref.m_name;
    m_parentName = ref.m_parentName;
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

const ClassType &ClassType::getParent() const
{
    return ClassType::find(m_parentName);
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

bool ClassType::isOfType(const ClassType &t) const
{
    const ClassType &parentType = ClassType::find(m_parentName);
    if (parentType != sUndefined)
        return *this == t ? true : parentType.isOfType(t);
    else
        return *this == t;
}

const ClassType &ClassType::Undefined()
{
    return sUndefined;
}

const ClassType &ClassType::find(const std::string & name, bool convertToUpperCase)
{
    std::map<std::string, ClassType >::const_iterator it;
    if (convertToUpperCase)
    {
        std::string upper(name);
        std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        it = sClassTypeMapPointer->find(upper);
    }
    else
        it = sClassTypeMapPointer->find(name);

    if ( it != sClassTypeMapPointer->end())
    {
        return (*it).second;
    }
    else
    {
        return sUndefined;
    }
}
