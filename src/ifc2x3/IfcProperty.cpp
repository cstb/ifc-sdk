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


#include <ifc2x3/IfcProperty.h>

#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/IfcPropertyDependencyRelationship.h>
#include <ifc2x3/IfcComplexProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProperty::IfcProperty(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
}

IfcProperty::~IfcProperty()
{}

bool IfcProperty::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProperty(this);
}


IfcIdentifier IfcProperty::getName()
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

const IfcIdentifier IfcProperty::getName() const
{
    return const_cast<IfcProperty *>(this)->getName();
}

void IfcProperty::setName(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcProperty::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcProperty::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcProperty::getDescription()
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

const IfcText IfcProperty::getDescription() const
{
    return const_cast<IfcProperty *>(this)->getDescription();
}

void IfcProperty::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcProperty::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcProperty::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}

Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyDependsOn()
{
    if (Step::BaseObject::inited())
    {
        return m_PropertyDependsOn;
    }
 
    m_PropertyDependsOn.setUnset(true);
    return m_PropertyDependsOn;
}

const Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyDependsOn() const
{
    return  const_cast< IfcProperty * > (this)->getPropertyDependsOn();
}

bool IfcProperty::testPropertyDependsOn() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PropertyDependsOn.isUnset() == false;
}

Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyForDependance()
{
    if (Step::BaseObject::inited())
    {
        return m_PropertyForDependance;
    }
 
    m_PropertyForDependance.setUnset(true);
    return m_PropertyForDependance;
}

const Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyForDependance() const
{
    return  const_cast< IfcProperty * > (this)->getPropertyForDependance();
}

bool IfcProperty::testPropertyForDependance() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PropertyForDependance.isUnset() == false;
}

Inverse_Set_IfcComplexProperty_0_1 &IfcProperty::getPartOfComplex()
{
    if (Step::BaseObject::inited())
    {
        return m_PartOfComplex;
    }
 
    m_PartOfComplex.setUnset(true);
    return m_PartOfComplex;
}

const Inverse_Set_IfcComplexProperty_0_1 &IfcProperty::getPartOfComplex() const
{
    return  const_cast< IfcProperty * > (this)->getPartOfComplex();
}

bool IfcProperty::testPartOfComplex() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PartOfComplex.isUnset() == false;
}

bool IfcProperty::init()
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
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_PropertyDependsOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PropertyDependsOn.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_PropertyForDependance.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PropertyForDependance.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcComplexProperty::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_PartOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PartOfComplex.insert(static_cast< IfcComplexProperty * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProperty::copy(const IfcProperty &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProperty, Step::BaseEntity)
