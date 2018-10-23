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


#include <ifc2x3/IfcStructuralMember.h>

#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralMember::IfcStructuralMember(Step::Id id, Step::SPFData *args) : 
    IfcStructuralItem(id, args)
{
}

IfcStructuralMember::~IfcStructuralMember()
{}

bool IfcStructuralMember::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralMember(this);
}

Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectedBy;
    }
 
    m_ConnectedBy.setUnset(true);
    return m_ConnectedBy;
}

const Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy() const
{
    return  const_cast< IfcStructuralMember * > (this)->getConnectedBy();
}

bool IfcStructuralMember::testConnectedBy() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ConnectedBy.isUnset() == false;
}

Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencesElement;
    }
 
    m_ReferencesElement.setUnset(true);
    return m_ReferencesElement;
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement() const
{
    return  const_cast< IfcStructuralMember * > (this)->getReferencesElement();
}

bool IfcStructuralMember::testReferencesElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ReferencesElement.isUnset() == false;
}

bool IfcStructuralMember::init()
{
    if (IfcStructuralItem::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_ConnectedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectedBy.insert(static_cast< IfcRelConnectsStructuralMember * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ReferencesElement.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ReferencesElement.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralMember::copy(const IfcStructuralMember &obj, const CopyOp &copyop)
{
    IfcStructuralItem::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralMember, IfcStructuralItem)
