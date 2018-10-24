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


#include <ifc2x3/IfcApprovalActorRelationship.h>

#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcApprovalActorRelationship::IfcApprovalActorRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Actor = NULL;
    m_Role = NULL;
    m_Approval = NULL;
}

IfcApprovalActorRelationship::~IfcApprovalActorRelationship()
{}

bool IfcApprovalActorRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcApprovalActorRelationship(this);
}


IfcActorSelect *IfcApprovalActorRelationship::getActor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Actor.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorSelect *IfcApprovalActorRelationship::getActor() const
{
    return const_cast<IfcApprovalActorRelationship *>(this)->getActor();
}

void IfcApprovalActorRelationship::setActor(const Step::RefPtr< IfcActorSelect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Actor = value;
}

void IfcApprovalActorRelationship::unsetActor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Actor = Step::getUnset(getActor());
}

bool IfcApprovalActorRelationship::testActor() const
{
    return Step::isUnset(getActor()) == false;
}


IfcActorRole *IfcApprovalActorRelationship::getRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Role.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorRole *IfcApprovalActorRelationship::getRole() const
{
    return const_cast<IfcApprovalActorRelationship *>(this)->getRole();
}

void IfcApprovalActorRelationship::setRole(const Step::RefPtr< IfcActorRole > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = value;
}

void IfcApprovalActorRelationship::unsetRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = Step::getUnset(getRole());
}

bool IfcApprovalActorRelationship::testRole() const
{
    return Step::isUnset(getRole()) == false;
}

IfcApproval *IfcApprovalActorRelationship::getApproval()
{
    if (Step::BaseObject::inited())
    {
        return m_Approval.get();
    }
    else
    {
        return NULL;
    }
}

const IfcApproval *IfcApprovalActorRelationship::getApproval() const
{
    return const_cast< IfcApprovalActorRelationship * > (this)->getApproval();
}

void IfcApprovalActorRelationship::setApproval(const Step::RefPtr< IfcApproval > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_Approval.valid())
    {
        m_Approval->m_Actors.erase(this);
    }
    if (value.valid() )
    {
       value->m_Actors.insert(this);
    }
    m_Approval = value;
}

void IfcApprovalActorRelationship::unsetApproval()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Approval = Step::getUnset(getApproval());
}

bool IfcApprovalActorRelationship::testApproval() const
{
    return Step::isUnset(getApproval()) == false;
}

bool IfcApprovalActorRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Actor = NULL;
    }
    else
    {
        m_Actor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_Actor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_Role = NULL;
    }
    else
    {
        m_Role = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Approval = NULL;
    }
    else
    {
        m_Approval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcApprovalActorRelationship::copy(const IfcApprovalActorRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setActor((IfcActorSelect*)copyop(obj.m_Actor.get()));
    setRole((IfcActorRole*)copyop(obj.m_Role.get()));
    setApproval((IfcApproval*)copyop(obj.m_Approval.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcApprovalActorRelationship, Step::BaseEntity)
