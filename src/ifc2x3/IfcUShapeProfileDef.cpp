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


#include <ifc2x3/IfcUShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcUShapeProfileDef::IfcUShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_Depth = Step::getUnset(m_Depth);
    m_FlangeWidth = Step::getUnset(m_FlangeWidth);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_FlangeThickness = Step::getUnset(m_FlangeThickness);
    m_FilletRadius = Step::getUnset(m_FilletRadius);
    m_EdgeRadius = Step::getUnset(m_EdgeRadius);
    m_FlangeSlope = Step::getUnset(m_FlangeSlope);
    m_CentreOfGravityInX = Step::getUnset(m_CentreOfGravityInX);
}

IfcUShapeProfileDef::~IfcUShapeProfileDef()
{}

bool IfcUShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcUShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getDepth()
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

IfcPositiveLengthMeasure IfcUShapeProfileDef::getDepth() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getDepth();
}

void IfcUShapeProfileDef::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcUShapeProfileDef::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcUShapeProfileDef::testDepth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDepth()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlangeWidth;
    }
    else 
    {
        return Step::getUnset(m_FlangeWidth);
    }    
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeWidth() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getFlangeWidth();
}

void IfcUShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = value;
}

void IfcUShapeProfileDef::unsetFlangeWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = Step::getUnset(getFlangeWidth());
}

bool IfcUShapeProfileDef::testFlangeWidth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlangeWidth()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getWebThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WebThickness;
    }
    else 
    {
        return Step::getUnset(m_WebThickness);
    }    
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getWebThickness();
}

void IfcUShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcUShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcUShapeProfileDef::testWebThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlangeThickness;
    }
    else 
    {
        return Step::getUnset(m_FlangeThickness);
    }    
}

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFlangeThickness() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getFlangeThickness();
}

void IfcUShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = value;
}

void IfcUShapeProfileDef::unsetFlangeThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcUShapeProfileDef::testFlangeThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlangeThickness()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getFilletRadius()
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

IfcPositiveLengthMeasure IfcUShapeProfileDef::getFilletRadius() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getFilletRadius();
}

void IfcUShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = value;
}

void IfcUShapeProfileDef::unsetFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = Step::getUnset(getFilletRadius());
}

bool IfcUShapeProfileDef::testFilletRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getEdgeRadius()
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

IfcPositiveLengthMeasure IfcUShapeProfileDef::getEdgeRadius() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getEdgeRadius();
}

void IfcUShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = value;
}

void IfcUShapeProfileDef::unsetEdgeRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = Step::getUnset(getEdgeRadius());
}

bool IfcUShapeProfileDef::testEdgeRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getEdgeRadius()) == false;
}


IfcPlaneAngleMeasure IfcUShapeProfileDef::getFlangeSlope()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlangeSlope;
    }
    else 
    {
        return Step::getUnset(m_FlangeSlope);
    }    
}

IfcPlaneAngleMeasure IfcUShapeProfileDef::getFlangeSlope() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getFlangeSlope();
}

void IfcUShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeSlope = value;
}

void IfcUShapeProfileDef::unsetFlangeSlope()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeSlope = Step::getUnset(getFlangeSlope());
}

bool IfcUShapeProfileDef::testFlangeSlope() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlangeSlope()) == false;
}


IfcPositiveLengthMeasure IfcUShapeProfileDef::getCentreOfGravityInX()
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

IfcPositiveLengthMeasure IfcUShapeProfileDef::getCentreOfGravityInX() const
{
    return const_cast<IfcUShapeProfileDef *>(this)->getCentreOfGravityInX();
}

void IfcUShapeProfileDef::setCentreOfGravityInX(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = value;
}

void IfcUShapeProfileDef::unsetCentreOfGravityInX()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInX = Step::getUnset(getCentreOfGravityInX());
}

bool IfcUShapeProfileDef::testCentreOfGravityInX() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCentreOfGravityInX()) == false;
}

bool IfcUShapeProfileDef::init()
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
        m_FlangeWidth = Step::getUnset(m_FlangeWidth);
    }
    else
    {
        m_FlangeWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WebThickness = Step::getUnset(m_WebThickness);
    }
    else
    {
        m_WebThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FlangeThickness = Step::getUnset(m_FlangeThickness);
    }
    else
    {
        m_FlangeThickness = Step::spfToReal(arg)

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
        m_FlangeSlope = Step::getUnset(m_FlangeSlope);
    }
    else
    {
        m_FlangeSlope = Step::spfToReal(arg)

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

void IfcUShapeProfileDef::copy(const IfcUShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_Depth);
    setFlangeWidth(obj.m_FlangeWidth);
    setWebThickness(obj.m_WebThickness);
    setFlangeThickness(obj.m_FlangeThickness);
    setFilletRadius(obj.m_FilletRadius);
    setEdgeRadius(obj.m_EdgeRadius);
    setFlangeSlope(obj.m_FlangeSlope);
    setCentreOfGravityInX(obj.m_CentreOfGravityInX);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcUShapeProfileDef, IfcParameterizedProfileDef)
