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


#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMaterial::IfcMaterial(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
}

IfcMaterial::~IfcMaterial()
{}

bool IfcMaterial::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMaterial(this);
}


IfcLabel IfcMaterial::getName()
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

const IfcLabel IfcMaterial::getName() const
{
    return const_cast<IfcMaterial *>(this)->getName();
}

void IfcMaterial::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcMaterial::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcMaterial::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}

Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs()
{
    if (Step::BaseObject::inited())
    {
        return m_ClassifiedAs;
    }
 
    m_ClassifiedAs.setUnset(true);
    return m_ClassifiedAs;
}

const Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs() const
{
    return  const_cast< IfcMaterial * > (this)->getClassifiedAs();
}

bool IfcMaterial::testClassifiedAs() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ClassifiedAs.isUnset() == false;
}

Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation()
{
    if (Step::BaseObject::inited())
    {
        return m_HasRepresentation;
    }
 
    m_HasRepresentation.setUnset(true);
    return m_HasRepresentation;
}

const Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation() const
{
    return  const_cast< IfcMaterial * > (this)->getHasRepresentation();
}

bool IfcMaterial::testHasRepresentation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasRepresentation.isUnset() == false;
}

bool IfcMaterial::init()
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
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcMaterialClassificationRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_ClassifiedAs.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ClassifiedAs.insert(static_cast< IfcMaterialClassificationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcMaterialDefinitionRepresentation::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_HasRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasRepresentation.insert(static_cast< IfcMaterialDefinitionRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcMaterial::copy(const IfcMaterial &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMaterial, Step::BaseEntity)
