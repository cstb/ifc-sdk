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


#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoundaryNodeConditionWarping::IfcBoundaryNodeConditionWarping(Step::Id id, Step::SPFData *args) : 
    IfcBoundaryNodeCondition(id, args)
{
    m_WarpingStiffness = Step::getUnset(m_WarpingStiffness);
}

IfcBoundaryNodeConditionWarping::~IfcBoundaryNodeConditionWarping()
{}

bool IfcBoundaryNodeConditionWarping::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoundaryNodeConditionWarping(this);
}


IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WarpingStiffness;
    }
    else 
    {
        return Step::getUnset(m_WarpingStiffness);
    }    
}

IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness() const
{
    return const_cast<IfcBoundaryNodeConditionWarping *>(this)->getWarpingStiffness();
}

void IfcBoundaryNodeConditionWarping::setWarpingStiffness(IfcWarpingMomentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingStiffness = value;
}

void IfcBoundaryNodeConditionWarping::unsetWarpingStiffness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingStiffness = Step::getUnset(getWarpingStiffness());
}

bool IfcBoundaryNodeConditionWarping::testWarpingStiffness() const
{
    return Step::isUnset(getWarpingStiffness()) == false;
}

bool IfcBoundaryNodeConditionWarping::init()
{
    if (IfcBoundaryNodeCondition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WarpingStiffness = Step::getUnset(m_WarpingStiffness);
    }
    else
    {
        m_WarpingStiffness = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBoundaryNodeConditionWarping::copy(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop)
{
    IfcBoundaryNodeCondition::copy(obj, copyop);
    setWarpingStiffness(obj.m_WarpingStiffness);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoundaryNodeConditionWarping, IfcBoundaryNodeCondition)
