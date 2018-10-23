// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/IfcApplication.h>

#include <ifc2x3/IfcOrganization.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcApplication::IfcApplication(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ApplicationDeveloper = NULL;
    m_Version = Step::getUnset(m_Version);
    m_ApplicationFullName = Step::getUnset(m_ApplicationFullName);
    m_ApplicationIdentifier = Step::getUnset(m_ApplicationIdentifier);
}

IfcApplication::~IfcApplication()
{}

bool IfcApplication::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcApplication(this);
}


IfcOrganization *IfcApplication::getApplicationDeveloper()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicationDeveloper.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcOrganization *IfcApplication::getApplicationDeveloper() const
{
    return const_cast<IfcApplication *>(this)->getApplicationDeveloper();
}

void IfcApplication::setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationDeveloper = value;
}

void IfcApplication::unsetApplicationDeveloper()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationDeveloper = Step::getUnset(getApplicationDeveloper());
}

bool IfcApplication::testApplicationDeveloper() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApplicationDeveloper()) == false;
}


IfcLabel IfcApplication::getVersion()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Version;
    }
    else 
    {
        return Step::getUnset(m_Version);
    }    
}

const IfcLabel IfcApplication::getVersion() const
{
    return const_cast<IfcApplication *>(this)->getVersion();
}

void IfcApplication::setVersion(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Version = value;
}

void IfcApplication::unsetVersion()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Version = Step::getUnset(getVersion());
}

bool IfcApplication::testVersion() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVersion()) == false;
}


IfcLabel IfcApplication::getApplicationFullName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicationFullName;
    }
    else 
    {
        return Step::getUnset(m_ApplicationFullName);
    }    
}

const IfcLabel IfcApplication::getApplicationFullName() const
{
    return const_cast<IfcApplication *>(this)->getApplicationFullName();
}

void IfcApplication::setApplicationFullName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationFullName = value;
}

void IfcApplication::unsetApplicationFullName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationFullName = Step::getUnset(getApplicationFullName());
}

bool IfcApplication::testApplicationFullName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApplicationFullName()) == false;
}


IfcIdentifier IfcApplication::getApplicationIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicationIdentifier;
    }
    else 
    {
        return Step::getUnset(m_ApplicationIdentifier);
    }    
}

const IfcIdentifier IfcApplication::getApplicationIdentifier() const
{
    return const_cast<IfcApplication *>(this)->getApplicationIdentifier();
}

void IfcApplication::setApplicationIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationIdentifier = value;
}

void IfcApplication::unsetApplicationIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicationIdentifier = Step::getUnset(getApplicationIdentifier());
}

bool IfcApplication::testApplicationIdentifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApplicationIdentifier()) == false;
}

bool IfcApplication::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicationDeveloper = NULL;
    }
    else
    {
        m_ApplicationDeveloper = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Version = Step::getUnset(m_Version);
    }
    else
    {
        m_Version = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicationFullName = Step::getUnset(m_ApplicationFullName);
    }
    else
    {
        m_ApplicationFullName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicationIdentifier = Step::getUnset(m_ApplicationIdentifier);
    }
    else
    {
        m_ApplicationIdentifier = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcApplication::copy(const IfcApplication &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setApplicationDeveloper((IfcOrganization*)copyop(obj.m_ApplicationDeveloper.get()));
    setVersion(obj.m_Version);
    setApplicationFullName(obj.m_ApplicationFullName);
    setApplicationIdentifier(obj.m_ApplicationIdentifier);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcApplication, Step::BaseEntity)
