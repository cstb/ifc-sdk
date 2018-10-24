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


#include <ifc2x3/IfcTShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTShapeProfileDef::IfcTShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_Depth = Step::getUnset(m_Depth);
    m_FlangeWidth = Step::getUnset(m_FlangeWidth);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_FlangeThickness = Step::getUnset(m_FlangeThickness);
    m_FilletRadius = Step::getUnset(m_FilletRadius);
    m_FlangeEdgeRadius = Step::getUnset(m_FlangeEdgeRadius);
    m_WebEdgeRadius = Step::getUnset(m_WebEdgeRadius);
    m_WebSlope = Step::getUnset(m_WebSlope);
    m_FlangeSlope = Step::getUnset(m_FlangeSlope);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcTShapeProfileDef::~IfcTShapeProfileDef()
{}

bool IfcTShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getDepth()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getDepth() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getDepth();
}

void IfcTShapeProfileDef::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcTShapeProfileDef::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcTShapeProfileDef::testDepth() const
{
    return Step::isUnset(getDepth()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeWidth() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getFlangeWidth();
}

void IfcTShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = value;
}

void IfcTShapeProfileDef::unsetFlangeWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = Step::getUnset(getFlangeWidth());
}

bool IfcTShapeProfileDef::testFlangeWidth() const
{
    return Step::isUnset(getFlangeWidth()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getWebThickness();
}

void IfcTShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcTShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcTShapeProfileDef::testWebThickness() const
{
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeThickness() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getFlangeThickness();
}

void IfcTShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = value;
}

void IfcTShapeProfileDef::unsetFlangeThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcTShapeProfileDef::testFlangeThickness() const
{
    return Step::isUnset(getFlangeThickness()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFilletRadius() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getFilletRadius();
}

void IfcTShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = value;
}

void IfcTShapeProfileDef::unsetFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = Step::getUnset(getFilletRadius());
}

bool IfcTShapeProfileDef::testFilletRadius() const
{
    return Step::isUnset(getFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlangeEdgeRadius;
    }
    else 
    {
        return Step::getUnset(m_FlangeEdgeRadius);
    }    
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getFlangeEdgeRadius() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getFlangeEdgeRadius();
}

void IfcTShapeProfileDef::setFlangeEdgeRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeEdgeRadius = value;
}

void IfcTShapeProfileDef::unsetFlangeEdgeRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeEdgeRadius = Step::getUnset(getFlangeEdgeRadius());
}

bool IfcTShapeProfileDef::testFlangeEdgeRadius() const
{
    return Step::isUnset(getFlangeEdgeRadius()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WebEdgeRadius;
    }
    else 
    {
        return Step::getUnset(m_WebEdgeRadius);
    }    
}

IfcPositiveLengthMeasure IfcTShapeProfileDef::getWebEdgeRadius() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getWebEdgeRadius();
}

void IfcTShapeProfileDef::setWebEdgeRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebEdgeRadius = value;
}

void IfcTShapeProfileDef::unsetWebEdgeRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebEdgeRadius = Step::getUnset(getWebEdgeRadius());
}

bool IfcTShapeProfileDef::testWebEdgeRadius() const
{
    return Step::isUnset(getWebEdgeRadius()) == false;
}


IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WebSlope;
    }
    else 
    {
        return Step::getUnset(m_WebSlope);
    }    
}

IfcPlaneAngleMeasure IfcTShapeProfileDef::getWebSlope() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getWebSlope();
}

void IfcTShapeProfileDef::setWebSlope(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebSlope = value;
}

void IfcTShapeProfileDef::unsetWebSlope()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebSlope = Step::getUnset(getWebSlope());
}

bool IfcTShapeProfileDef::testWebSlope() const
{
    return Step::isUnset(getWebSlope()) == false;
}


IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope()
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

IfcPlaneAngleMeasure IfcTShapeProfileDef::getFlangeSlope() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getFlangeSlope();
}

void IfcTShapeProfileDef::setFlangeSlope(IfcPlaneAngleMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeSlope = value;
}

void IfcTShapeProfileDef::unsetFlangeSlope()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeSlope = Step::getUnset(getFlangeSlope());
}

bool IfcTShapeProfileDef::testFlangeSlope() const
{
    return Step::isUnset(getFlangeSlope()) == false;
}


IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY()
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

IfcPositiveLengthMeasure IfcTShapeProfileDef::getCentreOfGravityInY() const
{
    return const_cast<IfcTShapeProfileDef *>(this)->getCentreOfGravityInY();
}

void IfcTShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcTShapeProfileDef::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcTShapeProfileDef::testCentreOfGravityInY() const
{
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcTShapeProfileDef::init()
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
        m_FlangeEdgeRadius = Step::getUnset(m_FlangeEdgeRadius);
    }
    else
    {
        m_FlangeEdgeRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WebEdgeRadius = Step::getUnset(m_WebEdgeRadius);
    }
    else
    {
        m_WebEdgeRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WebSlope = Step::getUnset(m_WebSlope);
    }
    else
    {
        m_WebSlope = Step::spfToReal(arg)

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
        m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
    }
    else
    {
        m_CentreOfGravityInY = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcTShapeProfileDef::copy(const IfcTShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_Depth);
    setFlangeWidth(obj.m_FlangeWidth);
    setWebThickness(obj.m_WebThickness);
    setFlangeThickness(obj.m_FlangeThickness);
    setFilletRadius(obj.m_FilletRadius);
    setFlangeEdgeRadius(obj.m_FlangeEdgeRadius);
    setWebEdgeRadius(obj.m_WebEdgeRadius);
    setWebSlope(obj.m_WebSlope);
    setFlangeSlope(obj.m_FlangeSlope);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTShapeProfileDef, IfcParameterizedProfileDef)
