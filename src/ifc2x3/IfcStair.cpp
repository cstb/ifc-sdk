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


#include <ifc2x3/IfcStair.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStair::IfcStair(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_ShapeType = IfcStairTypeEnum_UNSET;
}

IfcStair::~IfcStair()
{}

bool IfcStair::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStair(this);
}


IfcStairTypeEnum IfcStair::getShapeType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShapeType;
    }
    else 
    {
        return IfcStairTypeEnum_UNSET;
    }    
}

IfcStairTypeEnum IfcStair::getShapeType() const
{
    return const_cast<IfcStair *>(this)->getShapeType();
}

void IfcStair::setShapeType(IfcStairTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = value;
}

void IfcStair::unsetShapeType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = IfcStairTypeEnum_UNSET;
}

bool IfcStair::testShapeType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShapeType()) == false;
}

bool IfcStair::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShapeType = IfcStairTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".STRAIGHT_RUN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_STRAIGHT_RUN_STAIR;
        }
        else if (arg == ".TWO_STRAIGHT_RUN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_TWO_STRAIGHT_RUN_STAIR;
        }
        else if (arg == ".QUARTER_WINDING_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".QUARTER_TURN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_QUARTER_TURN_STAIR;
        }
        else if (arg == ".HALF_WINDING_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_HALF_WINDING_STAIR;
        }
        else if (arg == ".HALF_TURN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_HALF_TURN_STAIR;
        }
        else if (arg == ".TWO_QUARTER_WINDING_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_TWO_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".TWO_QUARTER_TURN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_TWO_QUARTER_TURN_STAIR;
        }
        else if (arg == ".THREE_QUARTER_WINDING_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_THREE_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".THREE_QUARTER_TURN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_THREE_QUARTER_TURN_STAIR;
        }
        else if (arg == ".SPIRAL_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_SPIRAL_STAIR;
        }
        else if (arg == ".DOUBLE_RETURN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_DOUBLE_RETURN_STAIR;
        }
        else if (arg == ".CURVED_RUN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_CURVED_RUN_STAIR;
        }
        else if (arg == ".TWO_CURVED_RUN_STAIR.")
        {
            m_ShapeType = IfcStairTypeEnum_TWO_CURVED_RUN_STAIR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ShapeType = IfcStairTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ShapeType = IfcStairTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStair::copy(const IfcStair &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_ShapeType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStair, IfcBuildingElement)
