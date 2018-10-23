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


#include <ifc2x3/IfcPropertySetDefinition.h>

#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertySetDefinition::IfcPropertySetDefinition(Step::Id id, Step::SPFData *args) : 
    IfcPropertyDefinition(id, args)
{
}

IfcPropertySetDefinition::~IfcPropertySetDefinition()
{}

bool IfcPropertySetDefinition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertySetDefinition(this);
}

Inverse_Set_IfcTypeObject_0_1 &IfcPropertySetDefinition::getDefinesType()
{
    if (Step::BaseObject::inited())
    {
        return m_DefinesType;
    }
 
    m_DefinesType.setUnset(true);
    return m_DefinesType;
}

const Inverse_Set_IfcTypeObject_0_1 &IfcPropertySetDefinition::getDefinesType() const
{
    return  const_cast< IfcPropertySetDefinition * > (this)->getDefinesType();
}

bool IfcPropertySetDefinition::testDefinesType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_DefinesType.isUnset() == false;
}

Inverse_Set_IfcRelDefinesByProperties_0_1 &IfcPropertySetDefinition::getPropertyDefinitionOf()
{
    if (Step::BaseObject::inited())
    {
        return m_PropertyDefinitionOf;
    }
 
    m_PropertyDefinitionOf.setUnset(true);
    return m_PropertyDefinitionOf;
}

const Inverse_Set_IfcRelDefinesByProperties_0_1 &IfcPropertySetDefinition::getPropertyDefinitionOf() const
{
    return  const_cast< IfcPropertySetDefinition * > (this)->getPropertyDefinitionOf();
}

bool IfcPropertySetDefinition::testPropertyDefinitionOf() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_PropertyDefinitionOf.isUnset() == false;
}

bool IfcPropertySetDefinition::init()
{
    if (IfcPropertyDefinition::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcTypeObject::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_DefinesType.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_DefinesType.insert(static_cast< IfcTypeObject * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDefinesByProperties::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_PropertyDefinitionOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PropertyDefinitionOf.insert(static_cast< IfcRelDefinesByProperties * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPropertySetDefinition::copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop)
{
    IfcPropertyDefinition::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertySetDefinition, IfcPropertyDefinition)
