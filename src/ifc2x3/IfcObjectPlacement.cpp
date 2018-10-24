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


#include <ifc2x3/IfcObjectPlacement.h>

#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcLocalPlacement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcObjectPlacement::IfcObjectPlacement(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
}

IfcObjectPlacement::~IfcObjectPlacement()
{}

bool IfcObjectPlacement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcObjectPlacement(this);
}

Inverse_Set_IfcProduct_1_1 &IfcObjectPlacement::getPlacesObject()
{
    if (Step::BaseObject::inited())
    {
        return m_PlacesObject;
    }
 
    m_PlacesObject.setUnset(true);
    return m_PlacesObject;
}

const Inverse_Set_IfcProduct_1_1 &IfcObjectPlacement::getPlacesObject() const
{
    return  const_cast< IfcObjectPlacement * > (this)->getPlacesObject();
}

bool IfcObjectPlacement::testPlacesObject() const
{
    return m_PlacesObject.isUnset() == false;
}

Inverse_Set_IfcLocalPlacement_0_n &IfcObjectPlacement::getReferencedByPlacements()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencedByPlacements;
    }
 
    m_ReferencedByPlacements.setUnset(true);
    return m_ReferencedByPlacements;
}

const Inverse_Set_IfcLocalPlacement_0_n &IfcObjectPlacement::getReferencedByPlacements() const
{
    return  const_cast< IfcObjectPlacement * > (this)->getReferencedByPlacements();
}

bool IfcObjectPlacement::testReferencedByPlacements() const
{
    return m_ReferencedByPlacements.isUnset() == false;
}

bool IfcObjectPlacement::init()
{
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcProduct::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_PlacesObject.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_PlacesObject.insert(static_cast< IfcProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcLocalPlacement::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_ReferencedByPlacements.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ReferencedByPlacements.insert(static_cast< IfcLocalPlacement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectPlacement::copy(const IfcObjectPlacement &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcObjectPlacement, Step::BaseEntity)
