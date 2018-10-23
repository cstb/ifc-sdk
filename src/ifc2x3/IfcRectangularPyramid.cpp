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


#include <ifc2x3/IfcRectangularPyramid.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRectangularPyramid::IfcRectangularPyramid(Step::Id id, Step::SPFData *args) : 
    IfcCsgPrimitive3D(id, args)
{
    m_XLength = Step::getUnset(m_XLength);
    m_YLength = Step::getUnset(m_YLength);
    m_Height = Step::getUnset(m_Height);
}

IfcRectangularPyramid::~IfcRectangularPyramid()
{}

bool IfcRectangularPyramid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRectangularPyramid(this);
}


IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_XLength;
    }
    else 
    {
        return Step::getUnset(m_XLength);
    }    
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() const
{
    return const_cast<IfcRectangularPyramid *>(this)->getXLength();
}

void IfcRectangularPyramid::setXLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XLength = value;
}

void IfcRectangularPyramid::unsetXLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_XLength = Step::getUnset(getXLength());
}

bool IfcRectangularPyramid::testXLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getXLength()) == false;
}


IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YLength;
    }
    else 
    {
        return Step::getUnset(m_YLength);
    }    
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() const
{
    return const_cast<IfcRectangularPyramid *>(this)->getYLength();
}

void IfcRectangularPyramid::setYLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YLength = value;
}

void IfcRectangularPyramid::unsetYLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YLength = Step::getUnset(getYLength());
}

bool IfcRectangularPyramid::testYLength() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getYLength()) == false;
}


IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight()
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

IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() const
{
    return const_cast<IfcRectangularPyramid *>(this)->getHeight();
}

void IfcRectangularPyramid::setHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = value;
}

void IfcRectangularPyramid::unsetHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Height = Step::getUnset(getHeight());
}

bool IfcRectangularPyramid::testHeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getHeight()) == false;
}

bool IfcRectangularPyramid::init()
{
    if (IfcCsgPrimitive3D::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_XLength = Step::getUnset(m_XLength);
    }
    else
    {
        m_XLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YLength = Step::getUnset(m_YLength);
    }
    else
    {
        m_YLength = Step::spfToReal(arg)

;
    }
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
    return true;
}

void IfcRectangularPyramid::copy(const IfcRectangularPyramid &obj, const CopyOp &copyop)
{
    IfcCsgPrimitive3D::copy(obj, copyop);
    setXLength(obj.m_XLength);
    setYLength(obj.m_YLength);
    setHeight(obj.m_Height);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRectangularPyramid, IfcCsgPrimitive3D)
