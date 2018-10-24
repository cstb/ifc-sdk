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


#include <ifc2x3/IfcPropertyConstraintRelationship.h>

#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertyConstraintRelationship::IfcPropertyConstraintRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RelatedProperties.setUnset(true);
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_RelatingConstraint = NULL;
}

IfcPropertyConstraintRelationship::~IfcPropertyConstraintRelationship()
{}

bool IfcPropertyConstraintRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertyConstraintRelationship(this);
}


Set_IfcProperty_1_n &IfcPropertyConstraintRelationship::getRelatedProperties()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RelatedProperties;
    }
    else 
    {
        m_RelatedProperties.setUnset(true);
        return m_RelatedProperties;
    }    
}

const Set_IfcProperty_1_n &IfcPropertyConstraintRelationship::getRelatedProperties() const
{
    return const_cast<IfcPropertyConstraintRelationship *>(this)->getRelatedProperties();
}

void IfcPropertyConstraintRelationship::setRelatedProperties(const Set_IfcProperty_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedProperties = value;
}

void IfcPropertyConstraintRelationship::unsetRelatedProperties()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedProperties.clear();
    m_RelatedProperties.setUnset(true);
}

bool IfcPropertyConstraintRelationship::testRelatedProperties() const
{
    return m_RelatedProperties.isUnset() == false;
}


IfcLabel IfcPropertyConstraintRelationship::getName()
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

const IfcLabel IfcPropertyConstraintRelationship::getName() const
{
    return const_cast<IfcPropertyConstraintRelationship *>(this)->getName();
}

void IfcPropertyConstraintRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcPropertyConstraintRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcPropertyConstraintRelationship::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcPropertyConstraintRelationship::getDescription()
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

const IfcText IfcPropertyConstraintRelationship::getDescription() const
{
    return const_cast<IfcPropertyConstraintRelationship *>(this)->getDescription();
}

void IfcPropertyConstraintRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcPropertyConstraintRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcPropertyConstraintRelationship::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingConstraint.get();
    }
    else
    {
        return NULL;
    }
}

const IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint() const
{
    return const_cast< IfcPropertyConstraintRelationship * > (this)->getRelatingConstraint();
}

void IfcPropertyConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingConstraint.valid())
    {
        m_RelatingConstraint->m_PropertiesForConstraint.erase(this);
    }
    if (value.valid() )
    {
       value->m_PropertiesForConstraint.insert(this);
    }
    m_RelatingConstraint = value;
}

void IfcPropertyConstraintRelationship::unsetRelatingConstraint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcPropertyConstraintRelationship::testRelatingConstraint() const
{
    return Step::isUnset(getRelatingConstraint()) == false;
}

bool IfcPropertyConstraintRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedProperties.setUnset(true);
    }
    else
    {
        m_RelatedProperties.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedProperties.insert(static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingConstraint = NULL;
    }
    else
    {
        m_RelatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcPropertyConstraintRelationship::copy(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    Set_IfcProperty_1_n::const_iterator it_m_RelatedProperties;
    for (it_m_RelatedProperties = obj.m_RelatedProperties.begin(); it_m_RelatedProperties != obj.m_RelatedProperties.end(); ++it_m_RelatedProperties)
    {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_RelatedProperties).get()));
        m_RelatedProperties.insert(copyTarget);
    }
    
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_RelatingConstraint.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertyConstraintRelationship, Step::BaseEntity)
