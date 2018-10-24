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


#include <ifc2x3/IfcObjectDefinition.h>

#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRelAssigns.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcObjectDefinition::IfcObjectDefinition(Step::Id id, Step::SPFData *args) : 
    IfcRoot(id, args)
{
}

IfcObjectDefinition::~IfcObjectDefinition()
{}

bool IfcObjectDefinition::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcObjectDefinition(this);
}

Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_IsDecomposedBy;
    }
 
    m_IsDecomposedBy.setUnset(true);
    return m_IsDecomposedBy;
}

const Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy() const
{
    return  const_cast< IfcObjectDefinition * > (this)->getIsDecomposedBy();
}

bool IfcObjectDefinition::testIsDecomposedBy() const
{
    return m_IsDecomposedBy.isUnset() == false;
}

Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations()
{
    if (Step::BaseObject::inited())
    {
        return m_HasAssociations;
    }
 
    m_HasAssociations.setUnset(true);
    return m_HasAssociations;
}

const Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations() const
{
    return  const_cast< IfcObjectDefinition * > (this)->getHasAssociations();
}

bool IfcObjectDefinition::testHasAssociations() const
{
    return m_HasAssociations.isUnset() == false;
}

Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes()
{
    if (Step::BaseObject::inited())
    {
        return m_Decomposes;
    }
 
    m_Decomposes.setUnset(true);
    return m_Decomposes;
}

const Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes() const
{
    return  const_cast< IfcObjectDefinition * > (this)->getDecomposes();
}

bool IfcObjectDefinition::testDecomposes() const
{
    return m_Decomposes.isUnset() == false;
}

Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments()
{
    if (Step::BaseObject::inited())
    {
        return m_HasAssignments;
    }
 
    m_HasAssignments.setUnset(true);
    return m_HasAssignments;
}

const Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments() const
{
    return  const_cast< IfcObjectDefinition * > (this)->getHasAssignments();
}

bool IfcObjectDefinition::testHasAssignments() const
{
    return m_HasAssignments.isUnset() == false;
}

bool IfcObjectDefinition::init()
{
    if (IfcRoot::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_IsDecomposedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsDecomposedBy.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasAssociations.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasAssociations.insert(static_cast< IfcRelAssociates * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_Decomposes.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Decomposes.insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssigns::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasAssignments.insert(static_cast< IfcRelAssigns * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectDefinition::copy(const IfcObjectDefinition &obj, const CopyOp &copyop)
{
    IfcRoot::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcObjectDefinition, IfcRoot)
