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


#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcApprovalActorRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcApproval::IfcApproval(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Description = Step::getUnset(m_Description);
    m_ApprovalDateTime = NULL;
    m_ApprovalStatus = Step::getUnset(m_ApprovalStatus);
    m_ApprovalLevel = Step::getUnset(m_ApprovalLevel);
    m_ApprovalQualifier = Step::getUnset(m_ApprovalQualifier);
    m_Name = Step::getUnset(m_Name);
    m_Identifier = Step::getUnset(m_Identifier);
}

IfcApproval::~IfcApproval()
{}

bool IfcApproval::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcApproval(this);
}


IfcText IfcApproval::getDescription()
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

const IfcText IfcApproval::getDescription() const
{
    return const_cast<IfcApproval *>(this)->getDescription();
}

void IfcApproval::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcApproval::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcApproval::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


IfcDateTimeSelect *IfcApproval::getApprovalDateTime()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApprovalDateTime.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDateTimeSelect *IfcApproval::getApprovalDateTime() const
{
    return const_cast<IfcApproval *>(this)->getApprovalDateTime();
}

void IfcApproval::setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalDateTime = value;
}

void IfcApproval::unsetApprovalDateTime()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalDateTime = Step::getUnset(getApprovalDateTime());
}

bool IfcApproval::testApprovalDateTime() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApprovalDateTime()) == false;
}


IfcLabel IfcApproval::getApprovalStatus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApprovalStatus;
    }
    else 
    {
        return Step::getUnset(m_ApprovalStatus);
    }    
}

const IfcLabel IfcApproval::getApprovalStatus() const
{
    return const_cast<IfcApproval *>(this)->getApprovalStatus();
}

void IfcApproval::setApprovalStatus(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalStatus = value;
}

void IfcApproval::unsetApprovalStatus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalStatus = Step::getUnset(getApprovalStatus());
}

bool IfcApproval::testApprovalStatus() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApprovalStatus()) == false;
}


IfcLabel IfcApproval::getApprovalLevel()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApprovalLevel;
    }
    else 
    {
        return Step::getUnset(m_ApprovalLevel);
    }    
}

const IfcLabel IfcApproval::getApprovalLevel() const
{
    return const_cast<IfcApproval *>(this)->getApprovalLevel();
}

void IfcApproval::setApprovalLevel(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalLevel = value;
}

void IfcApproval::unsetApprovalLevel()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalLevel = Step::getUnset(getApprovalLevel());
}

bool IfcApproval::testApprovalLevel() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApprovalLevel()) == false;
}


IfcText IfcApproval::getApprovalQualifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApprovalQualifier;
    }
    else 
    {
        return Step::getUnset(m_ApprovalQualifier);
    }    
}

const IfcText IfcApproval::getApprovalQualifier() const
{
    return const_cast<IfcApproval *>(this)->getApprovalQualifier();
}

void IfcApproval::setApprovalQualifier(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalQualifier = value;
}

void IfcApproval::unsetApprovalQualifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApprovalQualifier = Step::getUnset(getApprovalQualifier());
}

bool IfcApproval::testApprovalQualifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getApprovalQualifier()) == false;
}


IfcLabel IfcApproval::getName()
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

const IfcLabel IfcApproval::getName() const
{
    return const_cast<IfcApproval *>(this)->getName();
}

void IfcApproval::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcApproval::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcApproval::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcIdentifier IfcApproval::getIdentifier()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Identifier;
    }
    else 
    {
        return Step::getUnset(m_Identifier);
    }    
}

const IfcIdentifier IfcApproval::getIdentifier() const
{
    return const_cast<IfcApproval *>(this)->getIdentifier();
}

void IfcApproval::setIdentifier(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = value;
}

void IfcApproval::unsetIdentifier()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Identifier = Step::getUnset(getIdentifier());
}

bool IfcApproval::testIdentifier() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIdentifier()) == false;
}

Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getIsRelatedWith()
{
    if (Step::BaseObject::inited())
    {
        return m_IsRelatedWith;
    }
 
    m_IsRelatedWith.setUnset(true);
    return m_IsRelatedWith;
}

const Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getIsRelatedWith() const
{
    return  const_cast< IfcApproval * > (this)->getIsRelatedWith();
}

bool IfcApproval::testIsRelatedWith() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsRelatedWith.isUnset() == false;
}

Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getRelates()
{
    if (Step::BaseObject::inited())
    {
        return m_Relates;
    }
 
    m_Relates.setUnset(true);
    return m_Relates;
}

const Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getRelates() const
{
    return  const_cast< IfcApproval * > (this)->getRelates();
}

bool IfcApproval::testRelates() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Relates.isUnset() == false;
}

Inverse_Set_IfcApprovalActorRelationship_0_n &IfcApproval::getActors()
{
    if (Step::BaseObject::inited())
    {
        return m_Actors;
    }
 
    m_Actors.setUnset(true);
    return m_Actors;
}

const Inverse_Set_IfcApprovalActorRelationship_0_n &IfcApproval::getActors() const
{
    return  const_cast< IfcApproval * > (this)->getActors();
}

bool IfcApproval::testActors() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Actors.isUnset() == false;
}

bool IfcApproval::init()
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
        m_ApprovalDateTime = NULL;
    }
    else
    {
        m_ApprovalDateTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_ApprovalDateTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApprovalStatus = Step::getUnset(m_ApprovalStatus);
    }
    else
    {
        m_ApprovalStatus = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApprovalLevel = Step::getUnset(m_ApprovalLevel);
    }
    else
    {
        m_ApprovalLevel = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApprovalQualifier = Step::getUnset(m_ApprovalQualifier);
    }
    else
    {
        m_ApprovalQualifier = Step::String::fromSPF(arg)
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
        m_Identifier = Step::getUnset(m_Identifier);
    }
    else
    {
        m_Identifier = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_IsRelatedWith.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsRelatedWith.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_Relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Relates.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalActorRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_Actors.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Actors.insert(static_cast< IfcApprovalActorRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcApproval::copy(const IfcApproval &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDescription(obj.m_Description);
    setApprovalDateTime((IfcDateTimeSelect*)copyop(obj.m_ApprovalDateTime.get()));
    setApprovalStatus(obj.m_ApprovalStatus);
    setApprovalLevel(obj.m_ApprovalLevel);
    setApprovalQualifier(obj.m_ApprovalQualifier);
    setName(obj.m_Name);
    setIdentifier(obj.m_Identifier);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcApproval, Step::BaseEntity)
