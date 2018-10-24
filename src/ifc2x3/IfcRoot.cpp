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


#include <ifc2x3/IfcRoot.h>

#include <ifc2x3/IfcOwnerHistory.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRoot::IfcRoot(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_GlobalId = Step::getUnset(m_GlobalId);
    m_OwnerHistory = NULL;
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
}

IfcRoot::~IfcRoot()
{}

bool IfcRoot::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRoot(this);
}


IfcGloballyUniqueId IfcRoot::getGlobalId()
{
    if (Step::BaseObject::inited()) 
    {
        return m_GlobalId;
    }
    else 
    {
        return Step::getUnset(m_GlobalId);
    }    
}

const IfcGloballyUniqueId IfcRoot::getGlobalId() const
{
    return const_cast<IfcRoot *>(this)->getGlobalId();
}

void IfcRoot::setGlobalId(const IfcGloballyUniqueId &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalId = value;
}

void IfcRoot::unsetGlobalId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GlobalId = Step::getUnset(getGlobalId());
}

bool IfcRoot::testGlobalId() const
{
    return Step::isUnset(getGlobalId()) == false;
}


IfcOwnerHistory *IfcRoot::getOwnerHistory()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OwnerHistory.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcOwnerHistory *IfcRoot::getOwnerHistory() const
{
    return const_cast<IfcRoot *>(this)->getOwnerHistory();
}

void IfcRoot::setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwnerHistory = value;
}

void IfcRoot::unsetOwnerHistory()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OwnerHistory = Step::getUnset(getOwnerHistory());
}

bool IfcRoot::testOwnerHistory() const
{
    return Step::isUnset(getOwnerHistory()) == false;
}


IfcLabel IfcRoot::getName()
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

const IfcLabel IfcRoot::getName() const
{
    return const_cast<IfcRoot *>(this)->getName();
}

void IfcRoot::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcRoot::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcRoot::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcRoot::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcRoot::getDescription() const
{
    return const_cast<IfcRoot *>(this)->getDescription();
}

void IfcRoot::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcRoot::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcRoot::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

bool IfcRoot::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_GlobalId = Step::getUnset(m_GlobalId);
    }
    else
    {
        m_GlobalId = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OwnerHistory = NULL;
    }
    else
    {
        m_OwnerHistory = static_cast< IfcOwnerHistory * > (m_expressDataSet->get(Step::getIdParam(arg)))
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcRoot::copy(const IfcRoot &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setGlobalId(obj.m_GlobalId);
    setOwnerHistory((IfcOwnerHistory*)copyop(obj.m_OwnerHistory.get()));
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRoot, Step::BaseEntity)
