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


#include <ifc2x3/IfcRightCircularCylinder.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRightCircularCylinder::IfcRightCircularCylinder(Step::Id id, Step::SPFData *args) : 
    IfcCsgPrimitive3D(id, args)
{
    m_Height = Step::getUnset(m_Height);
    m_Radius = Step::getUnset(m_Radius);
}

IfcRightCircularCylinder::~IfcRightCircularCylinder()
{}

bool IfcRightCircularCylinder::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRightCircularCylinder(this);
}


IfcPositiveLengthMeasure IfcRightCircularCylinder::getHeight()
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

IfcPositiveLengthMeasure IfcRightCircularCylinder::getHeight() const
{
    return const_cast<IfcRightCircularCylinder *>(this)->getHeight();
}

void IfcRightCircularCylinder::setHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = value;
}

void IfcRightCircularCylinder::unsetHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = Step::getUnset(getHeight());
}

bool IfcRightCircularCylinder::testHeight() const
{
    return Step::isUnset(getHeight()) == false;
}


IfcPositiveLengthMeasure IfcRightCircularCylinder::getRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Radius;
    }
    else 
    {
        return Step::getUnset(m_Radius);
    }    
}

IfcPositiveLengthMeasure IfcRightCircularCylinder::getRadius() const
{
    return const_cast<IfcRightCircularCylinder *>(this)->getRadius();
}

void IfcRightCircularCylinder::setRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = value;
}

void IfcRightCircularCylinder::unsetRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = Step::getUnset(getRadius());
}

bool IfcRightCircularCylinder::testRadius() const
{
    return Step::isUnset(getRadius()) == false;
}

bool IfcRightCircularCylinder::init()
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
        m_Radius = Step::getUnset(m_Radius);
    }
    else
    {
        m_Radius = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRightCircularCylinder::copy(const IfcRightCircularCylinder &obj, const CopyOp &copyop)
{
    IfcCsgPrimitive3D::copy(obj, copyop);
    setHeight(obj.m_Height);
    setRadius(obj.m_Radius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRightCircularCylinder, IfcCsgPrimitive3D)
