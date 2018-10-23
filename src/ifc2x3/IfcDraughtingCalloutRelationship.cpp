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


#include <ifc2x3/IfcDraughtingCalloutRelationship.h>

#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/IfcDraughtingCallout.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDraughtingCalloutRelationship::IfcDraughtingCalloutRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_RelatingDraughtingCallout = NULL;
    m_RelatedDraughtingCallout = NULL;
}

IfcDraughtingCalloutRelationship::~IfcDraughtingCalloutRelationship()
{}

bool IfcDraughtingCalloutRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDraughtingCalloutRelationship(this);
}


IfcLabel IfcDraughtingCalloutRelationship::getName()
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

const IfcLabel IfcDraughtingCalloutRelationship::getName() const
{
    return const_cast<IfcDraughtingCalloutRelationship *>(this)->getName();
}

void IfcDraughtingCalloutRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcDraughtingCalloutRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcDraughtingCalloutRelationship::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcDraughtingCalloutRelationship::getDescription()
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

const IfcText IfcDraughtingCalloutRelationship::getDescription() const
{
    return const_cast<IfcDraughtingCalloutRelationship *>(this)->getDescription();
}

void IfcDraughtingCalloutRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcDraughtingCalloutRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcDraughtingCalloutRelationship::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingDraughtingCallout.get();
    }
    else
    {
        return NULL;
    }
}

const IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout() const
{
    return const_cast< IfcDraughtingCalloutRelationship * > (this)->getRelatingDraughtingCallout();
}

void IfcDraughtingCalloutRelationship::setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingDraughtingCallout.valid())
    {
        m_RelatingDraughtingCallout->m_IsRelatedToCallout.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsRelatedToCallout.insert(this);
    }
    m_RelatingDraughtingCallout = value;
}

void IfcDraughtingCalloutRelationship::unsetRelatingDraughtingCallout()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingDraughtingCallout = Step::getUnset(getRelatingDraughtingCallout());
}

bool IfcDraughtingCalloutRelationship::testRelatingDraughtingCallout() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingDraughtingCallout()) == false;
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedDraughtingCallout.get();
    }
    else
    {
        return NULL;
    }
}

const IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout() const
{
    return const_cast< IfcDraughtingCalloutRelationship * > (this)->getRelatedDraughtingCallout();
}

void IfcDraughtingCalloutRelationship::setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedDraughtingCallout.valid())
    {
        m_RelatedDraughtingCallout->m_IsRelatedFromCallout.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsRelatedFromCallout.insert(this);
    }
    m_RelatedDraughtingCallout = value;
}

void IfcDraughtingCalloutRelationship::unsetRelatedDraughtingCallout()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedDraughtingCallout = Step::getUnset(getRelatedDraughtingCallout());
}

bool IfcDraughtingCalloutRelationship::testRelatedDraughtingCallout() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedDraughtingCallout()) == false;
}

bool IfcDraughtingCalloutRelationship::init()
{
    std::string arg;
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingDraughtingCallout = NULL;
    }
    else
    {
        m_RelatingDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedDraughtingCallout = NULL;
    }
    else
    {
        m_RelatedDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcDraughtingCalloutRelationship::copy(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setRelatingDraughtingCallout((IfcDraughtingCallout*)copyop(obj.m_RelatingDraughtingCallout.get()));
    setRelatedDraughtingCallout((IfcDraughtingCallout*)copyop(obj.m_RelatedDraughtingCallout.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDraughtingCalloutRelationship, Step::BaseEntity)
