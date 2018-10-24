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


#include <ifc2x3/IfcCShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCShapeProfileDef::IfcCShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_Depth = Step::getUnset(m_Depth);
    m_Width = Step::getUnset(m_Width);
    m_WallThickness = Step::getUnset(m_WallThickness);
    m_Girth = Step::getUnset(m_Girth);
    m_InternalFilletRadius = Step::getUnset(m_InternalFilletRadius);
    m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
}

IfcCShapeProfileDef::~IfcCShapeProfileDef()
{}

bool IfcCShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Depth;
    }
    else 
    {
        return Step::getUnset(m_Depth);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getDepth() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getDepth();
}

void IfcCShapeProfileDef::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcCShapeProfileDef::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcCShapeProfileDef::testDepth() const
{
    return Step::isUnset(getDepth()) == false;
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Width;
    }
    else 
    {
        return Step::getUnset(m_Width);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWidth() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getWidth();
}

void IfcCShapeProfileDef::setWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = value;
}

void IfcCShapeProfileDef::unsetWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = Step::getUnset(getWidth());
}

bool IfcCShapeProfileDef::testWidth() const
{
    return Step::isUnset(getWidth()) == false;
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WallThickness;
    }
    else 
    {
        return Step::getUnset(m_WallThickness);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getWallThickness() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getWallThickness();
}

void IfcCShapeProfileDef::setWallThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = value;
}

void IfcCShapeProfileDef::unsetWallThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = Step::getUnset(getWallThickness());
}

bool IfcCShapeProfileDef::testWallThickness() const
{
    return Step::isUnset(getWallThickness()) == false;
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Girth;
    }
    else 
    {
        return Step::getUnset(m_Girth);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getGirth() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getGirth();
}

void IfcCShapeProfileDef::setGirth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Girth = value;
}

void IfcCShapeProfileDef::unsetGirth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Girth = Step::getUnset(getGirth());
}

bool IfcCShapeProfileDef::testGirth() const
{
    return Step::isUnset(getGirth()) == false;
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InternalFilletRadius;
    }
    else 
    {
        return Step::getUnset(m_InternalFilletRadius);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getInternalFilletRadius() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getInternalFilletRadius();
}

void IfcCShapeProfileDef::setInternalFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalFilletRadius = value;
}

void IfcCShapeProfileDef::unsetInternalFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InternalFilletRadius = Step::getUnset(getInternalFilletRadius());
}

bool IfcCShapeProfileDef::testInternalFilletRadius() const
{
    return Step::isUnset(getInternalFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CentreOfGravityInX;
    }
    else 
    {
        return Step::getUnset(m_CentreOfGravityInX);
    }    
}

IfcPositiveLengthMeasure IfcCShapeProfileDef::getCentreOfGravityInX() const
{
    return const_cast<IfcCShapeProfileDef *>(this)->getCentreOfGravityInX();
}

void IfcCShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = value;
}

void IfcCShapeProfileDef::unsetCentreOfGravityInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcCShapeProfileDef::testCentreOfGravityInX() const
{
    return Step::isUnset(getCentreOfGravityInX()) == false;
}

bool IfcCShapeProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Depth = Step::getUnset(m_Depth);
    }
    else
    {
        m_Depth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Width = Step::getUnset(m_Width);
    }
    else
    {
        m_Width = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WallThickness = Step::getUnset(m_WallThickness);
    }
    else
    {
        m_WallThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Girth = Step::getUnset(m_Girth);
    }
    else
    {
        m_Girth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InternalFilletRadius = Step::getUnset(m_InternalFilletRadius);
    }
    else
    {
        m_InternalFilletRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
    }
    else
    {
        m_CentreOfGravityInX = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCShapeProfileDef::copy(const IfcCShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_Depth);
    setWidth(obj.m_Width);
    setWallThickness(obj.m_WallThickness);
    setGirth(obj.m_Girth);
    setInternalFilletRadius(obj.m_InternalFilletRadius);
    setCentreOfGravityInX(obj.m_CentreOfGravityInX);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCShapeProfileDef, IfcParameterizedProfileDef)
