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


#include <ifc2x3/IfcStructuralReaction.h>

#include <ifc2x3/IfcStructuralAction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralReaction::IfcStructuralReaction(Step::Id id, Step::SPFData *args) : 
    IfcStructuralActivity(id, args)
{
}

IfcStructuralReaction::~IfcStructuralReaction()
{}

bool IfcStructuralReaction::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralReaction(this);
}

Inverse_Set_IfcStructuralAction_0_n &IfcStructuralReaction::getCauses()
{
    if (Step::BaseObject::inited())
    {
        return m_Causes;
    }
 
    m_Causes.setUnset(true);
    return m_Causes;
}

const Inverse_Set_IfcStructuralAction_0_n &IfcStructuralReaction::getCauses() const
{
    return  const_cast< IfcStructuralReaction * > (this)->getCauses();
}

bool IfcStructuralReaction::testCauses() const
{
    return m_Causes.isUnset() == false;
}

bool IfcStructuralReaction::init()
{
    if (IfcStructuralActivity::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcStructuralAction::getClassType(), 10);
    if (inverses)
    {
        unsigned int i;
        m_Causes.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Causes.insert(static_cast< IfcStructuralAction * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralReaction::copy(const IfcStructuralReaction &obj, const CopyOp &copyop)
{
    IfcStructuralActivity::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralReaction, IfcStructuralActivity)
