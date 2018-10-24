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


#include <ifc2x3/IfcStructuralItem.h>

#include <ifc2x3/IfcRelConnectsStructuralActivity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralItem::IfcStructuralItem(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
}

IfcStructuralItem::~IfcStructuralItem()
{}

bool IfcStructuralItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralItem(this);
}

Inverse_Set_IfcRelConnectsStructuralActivity_0_n &IfcStructuralItem::getAssignedStructuralActivity()
{
    if (Step::BaseObject::inited())
    {
        return m_AssignedStructuralActivity;
    }
 
    m_AssignedStructuralActivity.setUnset(true);
    return m_AssignedStructuralActivity;
}

const Inverse_Set_IfcRelConnectsStructuralActivity_0_n &IfcStructuralItem::getAssignedStructuralActivity() const
{
    return  const_cast< IfcStructuralItem * > (this)->getAssignedStructuralActivity();
}

bool IfcStructuralItem::testAssignedStructuralActivity() const
{
    return m_AssignedStructuralActivity.isUnset() == false;
}

bool IfcStructuralItem::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelConnectsStructuralActivity::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_AssignedStructuralActivity.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_AssignedStructuralActivity.insert(static_cast< IfcRelConnectsStructuralActivity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralItem::copy(const IfcStructuralItem &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralItem, IfcProduct)
