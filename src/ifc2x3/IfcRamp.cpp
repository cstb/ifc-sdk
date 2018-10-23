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


#include <ifc2x3/IfcRamp.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRamp::IfcRamp(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_ShapeType = IfcRampTypeEnum_UNSET;
}

IfcRamp::~IfcRamp()
{}

bool IfcRamp::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRamp(this);
}


IfcRampTypeEnum IfcRamp::getShapeType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShapeType;
    }
    else 
    {
        return IfcRampTypeEnum_UNSET;
    }    
}

IfcRampTypeEnum IfcRamp::getShapeType() const
{
    return const_cast<IfcRamp *>(this)->getShapeType();
}

void IfcRamp::setShapeType(IfcRampTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = value;
}

void IfcRamp::unsetShapeType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = IfcRampTypeEnum_UNSET;
}

bool IfcRamp::testShapeType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShapeType()) == false;
}

bool IfcRamp::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShapeType = IfcRampTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".STRAIGHT_RUN_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".TWO_STRAIGHT_RUN_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_TWO_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".QUARTER_TURN_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_QUARTER_TURN_RAMP;
        }
        else if (arg == ".TWO_QUARTER_TURN_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_TWO_QUARTER_TURN_RAMP;
        }
        else if (arg == ".HALF_TURN_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_HALF_TURN_RAMP;
        }
        else if (arg == ".SPIRAL_RAMP.")
        {
            m_ShapeType = IfcRampTypeEnum_SPIRAL_RAMP;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ShapeType = IfcRampTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ShapeType = IfcRampTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRamp::copy(const IfcRamp &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_ShapeType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRamp, IfcBuildingElement)
