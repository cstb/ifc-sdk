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


#include <ifc2x3/IfcLShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLShapeProfileDef::IfcLShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_Depth = Step::getUnset(m_Depth);
    m_Width = Step::getUnset(m_Width);
    m_Thickness = Step::getUnset(m_Thickness);
    m_FilletRadius = Step::getUnset(m_FilletRadius);
    m_EdgeRadius = Step::getUnset(m_EdgeRadius);
    m_LegSlope = Step::getUnset(m_LegSlope);
    m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcLShapeProfileDef::~IfcLShapeProfileDef()
{}

bool IfcLShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getDepth()
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

IfcPositiveLengthMeasure IfcLShapeProfileDef::getDepth() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getDepth();
}

void IfcLShapeProfileDef::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcLShapeProfileDef::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcLShapeProfileDef::testDepth() const
{
    return Step::isUnset(getDepth()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth()
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

IfcPositiveLengthMeasure IfcLShapeProfileDef::getWidth() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getWidth();
}

void IfcLShapeProfileDef::setWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = value;
}

void IfcLShapeProfileDef::unsetWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Width = Step::getUnset(getWidth());
}

bool IfcLShapeProfileDef::testWidth() const
{
    return Step::isUnset(getWidth()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Thickness;
    }
    else 
    {
        return Step::getUnset(m_Thickness);
    }    
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getThickness() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getThickness();
}

void IfcLShapeProfileDef::setThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = value;
}

void IfcLShapeProfileDef::unsetThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = Step::getUnset(getThickness());
}

bool IfcLShapeProfileDef::testThickness() const
{
    return Step::isUnset(getThickness()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FilletRadius;
    }
    else 
    {
        return Step::getUnset(m_FilletRadius);
    }    
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getFilletRadius() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getFilletRadius();
}

void IfcLShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = value;
}

void IfcLShapeProfileDef::unsetFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = Step::getUnset(getFilletRadius());
}

bool IfcLShapeProfileDef::testFilletRadius() const
{
    return Step::isUnset(getFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EdgeRadius;
    }
    else 
    {
        return Step::getUnset(m_EdgeRadius);
    }    
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getEdgeRadius() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getEdgeRadius();
}

void IfcLShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = value;
}

void IfcLShapeProfileDef::unsetEdgeRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = Step::getUnset(getEdgeRadius());
}

bool IfcLShapeProfileDef::testEdgeRadius() const
{
    return Step::isUnset(getEdgeRadius()) == false;
}


IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LegSlope;
    }
    else 
    {
        return Step::getUnset(m_LegSlope);
    }    
}

IfcPlaneAngleMeasure IfcLShapeProfileDef::getLegSlope() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getLegSlope();
}

void IfcLShapeProfileDef::setLegSlope(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LegSlope = value;
}

void IfcLShapeProfileDef::unsetLegSlope()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LegSlope = Step::getUnset(getLegSlope());
}

bool IfcLShapeProfileDef::testLegSlope() const
{
    return Step::isUnset(getLegSlope()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX()
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

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInX() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getCentreOfGravityInX();
}

void IfcLShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = value;
}

void IfcLShapeProfileDef::unsetCentreOfGravityInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcLShapeProfileDef::testCentreOfGravityInX() const
{
    return Step::isUnset(getCentreOfGravityInX()) == false;
}


IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CentreOfGravityInY;
    }
    else 
    {
        return Step::getUnset(m_CentreOfGravityInY);
    }    
}

IfcPositiveLengthMeasure IfcLShapeProfileDef::getCentreOfGravityInY() const
{
    return const_cast<IfcLShapeProfileDef *>(this)->getCentreOfGravityInY();
}

void IfcLShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcLShapeProfileDef::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcLShapeProfileDef::testCentreOfGravityInY() const
{
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcLShapeProfileDef::init()
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
        m_Thickness = Step::getUnset(m_Thickness);
    }
    else
    {
        m_Thickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FilletRadius = Step::getUnset(m_FilletRadius);
    }
    else
    {
        m_FilletRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EdgeRadius = Step::getUnset(m_EdgeRadius);
    }
    else
    {
        m_EdgeRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LegSlope = Step::getUnset(m_LegSlope);
    }
    else
    {
        m_LegSlope = Step::spfToReal(arg)

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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
    }
    else
    {
        m_CentreOfGravityInY = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcLShapeProfileDef::copy(const IfcLShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_Depth);
    setWidth(obj.m_Width);
    setThickness(obj.m_Thickness);
    setFilletRadius(obj.m_FilletRadius);
    setEdgeRadius(obj.m_EdgeRadius);
    setLegSlope(obj.m_LegSlope);
    setCentreOfGravityInX(obj.m_CentreOfGravityInX);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLShapeProfileDef, IfcParameterizedProfileDef)
