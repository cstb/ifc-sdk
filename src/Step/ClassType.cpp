#include "Step/ClassType.h"

#include <utility>
#include <iostream>
using namespace Step;

static long s_id = 1;

std::map<std::string, ClassType > * sClassTypeMapPointer=0;

ClassType ClassType::sUndefined("Undefined",0);

ClassType::ClassType(const std::string &name)
{
    static std::map<std::string, ClassType > sClassTypeMap;
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

ClassType::ClassType(const std::string &name, long id) :
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
    std::map<std::string, ClassType >::const_iterator it = sClassTypeMapPointer->find(name);
    if ( it != sClassTypeMapPointer->end())
    {
        return (*it).second;
    }
    else
    {
        return sUndefined;
    }
}
