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


#include <ifc2x3/IfcApprovalRelationship.h>

#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcApprovalRelationship::IfcApprovalRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Description = Step::getUnset(m_Description);
    m_Name = Step::getUnset(m_Name);
    m_RelatedApproval = NULL;
    m_RelatingApproval = NULL;
}

IfcApprovalRelationship::~IfcApprovalRelationship()
{}

bool IfcApprovalRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcApprovalRelationship(this);
}


IfcText IfcApprovalRelationship::getDescription()
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

const IfcText IfcApprovalRelationship::getDescription() const
{
    return const_cast<IfcApprovalRelationship *>(this)->getDescription();
}

void IfcApprovalRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcApprovalRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcApprovalRelationship::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcLabel IfcApprovalRelationship::getName()
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

const IfcLabel IfcApprovalRelationship::getName() const
{
    return const_cast<IfcApprovalRelationship *>(this)->getName();
}

void IfcApprovalRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcApprovalRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcApprovalRelationship::testName() const
{
    return Step::isUnset(getName()) == false;
}

IfcApproval *IfcApprovalRelationship::getRelatedApproval()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedApproval.get();
    }
    else
    {
        return NULL;
    }
}

const IfcApproval *IfcApprovalRelationship::getRelatedApproval() const
{
    return const_cast< IfcApprovalRelationship * > (this)->getRelatedApproval();
}

void IfcApprovalRelationship::setRelatedApproval(const Step::RefPtr< IfcApproval > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedApproval.valid())
    {
        m_RelatedApproval->m_IsRelatedWith.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsRelatedWith.insert(this);
    }
    m_RelatedApproval = value;
}

void IfcApprovalRelationship::unsetRelatedApproval()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedApproval = Step::getUnset(getRelatedApproval());
}

bool IfcApprovalRelationship::testRelatedApproval() const
{
    return Step::isUnset(getRelatedApproval()) == false;
}

IfcApproval *IfcApprovalRelationship::getRelatingApproval()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingApproval.get();
    }
    else
    {
        return NULL;
    }
}

const IfcApproval *IfcApprovalRelationship::getRelatingApproval() const
{
    return const_cast< IfcApprovalRelationship * > (this)->getRelatingApproval();
}

void IfcApprovalRelationship::setRelatingApproval(const Step::RefPtr< IfcApproval > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingApproval.valid())
    {
        m_RelatingApproval->m_Relates.erase(this);
    }
    if (value.valid() )
    {
       value->m_Relates.insert(this);
    }
    m_RelatingApproval = value;
}

void IfcApprovalRelationship::unsetRelatingApproval()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingApproval = Step::getUnset(getRelatingApproval());
}

bool IfcApprovalRelationship::testRelatingApproval() const
{
    return Step::isUnset(getRelatingApproval()) == false;
}

bool IfcApprovalRelationship::init()
{
    std::string arg;
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
        m_RelatedApproval = NULL;
    }
    else
    {
        m_RelatedApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingApproval = NULL;
    }
    else
    {
        m_RelatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcApprovalRelationship::copy(const IfcApprovalRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDescription(obj.m_Description);
    setName(obj.m_Name);
    setRelatedApproval((IfcApproval*)copyop(obj.m_RelatedApproval.get()));
    setRelatingApproval((IfcApproval*)copyop(obj.m_RelatingApproval.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcApprovalRelationship, Step::BaseEntity)
