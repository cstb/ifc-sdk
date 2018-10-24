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


#include <ifc2x3/IfcRightCircularCone.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRightCircularCone::IfcRightCircularCone(Step::Id id, Step::SPFData *args) : 
    IfcCsgPrimitive3D(id, args)
{
    m_Height = Step::getUnset(m_Height);
    m_BottomRadius = Step::getUnset(m_BottomRadius);
}

IfcRightCircularCone::~IfcRightCircularCone()
{}

bool IfcRightCircularCone::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRightCircularCone(this);
}


IfcPositiveLengthMeasure IfcRightCircularCone::getHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Height;
    }
    else 
    {
        return Step::getUnset(m_Height);
    }    
}

IfcPositiveLengthMeasure IfcRightCircularCone::getHeight() const
{
    return const_cast<IfcRightCircularCone *>(this)->getHeight();
}

void IfcRightCircularCone::setHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = value;
}

void IfcRightCircularCone::unsetHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = Step::getUnset(getHeight());
}

bool IfcRightCircularCone::testHeight() const
{
    return Step::isUnset(getHeight()) == false;
}


IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BottomRadius;
    }
    else 
    {
        return Step::getUnset(m_BottomRadius);
    }    
}

IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius() const
{
    return const_cast<IfcRightCircularCone *>(this)->getBottomRadius();
}

void IfcRightCircularCone::setBottomRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BottomRadius = value;
}

void IfcRightCircularCone::unsetBottomRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BottomRadius = Step::getUnset(getBottomRadius());
}

bool IfcRightCircularCone::testBottomRadius() const
{
    return Step::isUnset(getBottomRadius()) == false;
}

bool IfcRightCircularCone::init()
{
    if (IfcCsgPrimitive3D::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Height = Step::getUnset(m_Height);
    }
    else
    {
        m_Height = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BottomRadius = Step::getUnset(m_BottomRadius);
    }
    else
    {
        m_BottomRadius = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRightCircularCone::copy(const IfcRightCircularCone &obj, const CopyOp &copyop)
{
    IfcCsgPrimitive3D::copy(obj, copyop);
    setHeight(obj.m_Height);
    setBottomRadius(obj.m_BottomRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRightCircularCone, IfcCsgPrimitive3D)
