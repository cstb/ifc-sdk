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


#include <ifc2x3/IfcPropertyDependencyRelationship.h>

#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Expression = Step::getUnset(m_Expression);
    m_DependantProperty = NULL;
    m_DependingProperty = NULL;
}

IfcPropertyDependencyRelationship::~IfcPropertyDependencyRelationship()
{}

bool IfcPropertyDependencyRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertyDependencyRelationship(this);
}


IfcLabel IfcPropertyDependencyRelationship::getName()
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

const IfcLabel IfcPropertyDependencyRelationship::getName() const
{
    return const_cast<IfcPropertyDependencyRelationship *>(this)->getName();
}

void IfcPropertyDependencyRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcPropertyDependencyRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcPropertyDependencyRelationship::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcPropertyDependencyRelationship::getDescription()
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

const IfcText IfcPropertyDependencyRelationship::getDescription() const
{
    return const_cast<IfcPropertyDependencyRelationship *>(this)->getDescription();
}

void IfcPropertyDependencyRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcPropertyDependencyRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcPropertyDependencyRelationship::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}


IfcText IfcPropertyDependencyRelationship::getExpression()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Expression;
    }
    else 
    {
        return Step::getUnset(m_Expression);
    }    
}

const IfcText IfcPropertyDependencyRelationship::getExpression() const
{
    return const_cast<IfcPropertyDependencyRelationship *>(this)->getExpression();
}

void IfcPropertyDependencyRelationship::setExpression(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Expression = value;
}

void IfcPropertyDependencyRelationship::unsetExpression()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Expression = Step::getUnset(getExpression());
}

bool IfcPropertyDependencyRelationship::testExpression() const
{
    return Step::isUnset(getExpression()) == false;
}

IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty()
{
    if (Step::BaseObject::inited())
    {
        return m_DependantProperty.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty() const
{
    return const_cast< IfcPropertyDependencyRelationship * > (this)->getDependantProperty();
}

void IfcPropertyDependencyRelationship::setDependantProperty(const Step::RefPtr< IfcProperty > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_DependantProperty.valid())
    {
        m_DependantProperty->m_PropertyDependsOn.erase(this);
    }
    if (value.valid() )
    {
       value->m_PropertyDependsOn.insert(this);
    }
    m_DependantProperty = value;
}

void IfcPropertyDependencyRelationship::unsetDependantProperty()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DependantProperty = Step::getUnset(getDependantProperty());
}

bool IfcPropertyDependencyRelationship::testDependantProperty() const
{
    return Step::isUnset(getDependantProperty()) == false;
}

IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty()
{
    if (Step::BaseObject::inited())
    {
        return m_DependingProperty.get();
    }
    else
    {
        return NULL;
    }
}

const IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty() const
{
    return const_cast< IfcPropertyDependencyRelationship * > (this)->getDependingProperty();
}

void IfcPropertyDependencyRelationship::setDependingProperty(const Step::RefPtr< IfcProperty > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_DependingProperty.valid())
    {
        m_DependingProperty->m_PropertyForDependance.erase(this);
    }
    if (value.valid() )
    {
       value->m_PropertyForDependance.insert(this);
    }
    m_DependingProperty = value;
}

void IfcPropertyDependencyRelationship::unsetDependingProperty()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DependingProperty = Step::getUnset(getDependingProperty());
}

bool IfcPropertyDependencyRelationship::testDependingProperty() const
{
    return Step::isUnset(getDependingProperty()) == false;
}

bool IfcPropertyDependencyRelationship::init()
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
        m_Expression = Step::getUnset(m_Expression);
    }
    else
    {
        m_Expression = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DependantProperty = NULL;
    }
    else
    {
        m_DependantProperty = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DependingProperty = NULL;
    }
    else
    {
        m_DependingProperty = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcPropertyDependencyRelationship::copy(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setExpression(obj.m_Expression);
    setDependantProperty((IfcProperty*)copyop(obj.m_DependantProperty.get()));
    setDependingProperty((IfcProperty*)copyop(obj.m_DependingProperty.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertyDependencyRelationship, Step::BaseEntity)
