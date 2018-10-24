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


#include <ifc2x3/IfcRepresentationItem.h>

#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcStyledItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRepresentationItem::IfcRepresentationItem(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
}

IfcRepresentationItem::~IfcRepresentationItem()
{}

bool IfcRepresentationItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRepresentationItem(this);
}

Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentationItem::getLayerAssignments()
{
    if (Step::BaseObject::inited())
    {
        return m_LayerAssignments;
    }
 
    m_LayerAssignments.setUnset(true);
    return m_LayerAssignments;
}

const Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentationItem::getLayerAssignments() const
{
    return  const_cast< IfcRepresentationItem * > (this)->getLayerAssignments();
}

bool IfcRepresentationItem::testLayerAssignments() const
{
    return m_LayerAssignments.isUnset() == false;
}

Inverse_Set_IfcStyledItem_0_1 &IfcRepresentationItem::getStyledByItem()
{
    if (Step::BaseObject::inited())
    {
        return m_StyledByItem;
    }
 
    m_StyledByItem.setUnset(true);
    return m_StyledByItem;
}

const Inverse_Set_IfcStyledItem_0_1 &IfcRepresentationItem::getStyledByItem() const
{
    return  const_cast< IfcRepresentationItem * > (this)->getStyledByItem();
}

bool IfcRepresentationItem::testStyledByItem() const
{
    return m_StyledByItem.isUnset() == false;
}

bool IfcRepresentationItem::init()
{
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_LayerAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_LayerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStyledItem::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_StyledByItem.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_StyledByItem.insert(static_cast< IfcStyledItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationItem::copy(const IfcRepresentationItem &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRepresentationItem, Step::BaseEntity)
