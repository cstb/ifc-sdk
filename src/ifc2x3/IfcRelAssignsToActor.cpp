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


#include <ifc2x3/IfcRelAssignsToActor.h>

#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcActor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelAssignsToActor::IfcRelAssignsToActor(Step::Id id, Step::SPFData *args) : 
    IfcRelAssigns(id, args)
{
    m_ActingRole = NULL;
    m_RelatingActor = NULL;
}

IfcRelAssignsToActor::~IfcRelAssignsToActor()
{}

bool IfcRelAssignsToActor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelAssignsToActor(this);
}


IfcActorRole *IfcRelAssignsToActor::getActingRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ActingRole.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcActorRole *IfcRelAssignsToActor::getActingRole() const
{
    return const_cast<IfcRelAssignsToActor *>(this)->getActingRole();
}

void IfcRelAssignsToActor::setActingRole(const Step::RefPtr< IfcActorRole > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActingRole = value;
}

void IfcRelAssignsToActor::unsetActingRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ActingRole = Step::getUnset(getActingRole());
}

bool IfcRelAssignsToActor::testActingRole() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getActingRole()) == false;
}

IfcActor *IfcRelAssignsToActor::getRelatingActor()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingActor.get();
    }
    else
    {
        return NULL;
    }
}

const IfcActor *IfcRelAssignsToActor::getRelatingActor() const
{
    return const_cast< IfcRelAssignsToActor * > (this)->getRelatingActor();
}

void IfcRelAssignsToActor::setRelatingActor(const Step::RefPtr< IfcActor > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingActor.valid())
    {
        m_RelatingActor->m_IsActingUpon.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsActingUpon.insert(this);
    }
    m_RelatingActor = value;
}

void IfcRelAssignsToActor::unsetRelatingActor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingActor = Step::getUnset(getRelatingActor());
}

bool IfcRelAssignsToActor::testRelatingActor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingActor()) == false;
}

bool IfcRelAssignsToActor::init()
{
    if (IfcRelAssigns::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ActingRole = NULL;
    }
    else
    {
        m_ActingRole = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingActor = NULL;
    }
    else
    {
        m_RelatingActor = static_cast< IfcActor * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelAssignsToActor::copy(const IfcRelAssignsToActor &obj, const CopyOp &copyop)
{
    IfcRelAssigns::copy(obj, copyop);
    setActingRole((IfcActorRole*)copyop(obj.m_ActingRole.get()));
    setRelatingActor((IfcActor*)copyop(obj.m_RelatingActor.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelAssignsToActor, IfcRelAssigns)
