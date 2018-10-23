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


#include <ifc2x3/IfcExternalReference.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcExternalReference::IfcExternalReference(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Location = Step::getUnset(m_Location);
    m_ItemReference = Step::getUnset(m_ItemReference);
    m_Name = Step::getUnset(m_Name);
}

IfcExternalReference::~IfcExternalReference()
{}

bool IfcExternalReference::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcExternalReference(this);
}


IfcLabel IfcExternalReference::getLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Location;
    }
    else 
    {
        return Step::getUnset(m_Location);
    }    
}

const IfcLabel IfcExternalReference::getLocation() const
{
    return const_cast<IfcExternalReference *>(this)->getLocation();
}

void IfcExternalReference::setLocation(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Location = value;
}

void IfcExternalReference::unsetLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Location = Step::getUnset(getLocation());
}

bool IfcExternalReference::testLocation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLocation()) == false;
}


IfcIdentifier IfcExternalReference::getItemReference()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ItemReference;
    }
    else 
    {
        return Step::getUnset(m_ItemReference);
    }    
}

const IfcIdentifier IfcExternalReference::getItemReference() const
{
    return const_cast<IfcExternalReference *>(this)->getItemReference();
}

void IfcExternalReference::setItemReference(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ItemReference = value;
}

void IfcExternalReference::unsetItemReference()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ItemReference = Step::getUnset(getItemReference());
}

bool IfcExternalReference::testItemReference() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getItemReference()) == false;
}


IfcLabel IfcExternalReference::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcExternalReference::getName() const
{
    return const_cast<IfcExternalReference *>(this)->getName();
}

void IfcExternalReference::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcExternalReference::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcExternalReference::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}

bool IfcExternalReference::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Location = Step::getUnset(m_Location);
    }
    else
    {
        m_Location = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ItemReference = Step::getUnset(m_ItemReference);
    }
    else
    {
        m_ItemReference = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcExternalReference::copy(const IfcExternalReference &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setLocation(obj.m_Location);
    setItemReference(obj.m_ItemReference);
    setName(obj.m_Name);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcExternalReference, Step::BaseEntity)
