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


#include <ifc2x3/IfcCraneRailFShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCraneRailFShapeProfileDef::IfcCraneRailFShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_OverallHeight = Step::getUnset(m_OverallHeight);
    m_HeadWidth = Step::getUnset(m_HeadWidth);
    m_Radius = Step::getUnset(m_Radius);
    m_HeadDepth2 = Step::getUnset(m_HeadDepth2);
    m_HeadDepth3 = Step::getUnset(m_HeadDepth3);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_BaseDepth1 = Step::getUnset(m_BaseDepth1);
    m_BaseDepth2 = Step::getUnset(m_BaseDepth2);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcCraneRailFShapeProfileDef::~IfcCraneRailFShapeProfileDef()
{}

bool IfcCraneRailFShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCraneRailFShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getOverallHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OverallHeight;
    }
    else 
    {
        return Step::getUnset(m_OverallHeight);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getOverallHeight() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getOverallHeight();
}

void IfcCraneRailFShapeProfileDef::setOverallHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = value;
}

void IfcCraneRailFShapeProfileDef::unsetOverallHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = Step::getUnset(getOverallHeight());
}

bool IfcCraneRailFShapeProfileDef::testOverallHeight() const
{
    return Step::isUnset(getOverallHeight()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HeadWidth;
    }
    else 
    {
        return Step::getUnset(m_HeadWidth);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadWidth() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getHeadWidth();
}

void IfcCraneRailFShapeProfileDef::setHeadWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadWidth = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadWidth = Step::getUnset(getHeadWidth());
}

bool IfcCraneRailFShapeProfileDef::testHeadWidth() const
{
    return Step::isUnset(getHeadWidth()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getRadius()
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

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getRadius() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getRadius();
}

void IfcCraneRailFShapeProfileDef::setRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = value;
}

void IfcCraneRailFShapeProfileDef::unsetRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = Step::getUnset(getRadius());
}

bool IfcCraneRailFShapeProfileDef::testRadius() const
{
    return Step::isUnset(getRadius()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HeadDepth2;
    }
    else 
    {
        return Step::getUnset(m_HeadDepth2);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth2() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getHeadDepth2();
}

void IfcCraneRailFShapeProfileDef::setHeadDepth2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth2 = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadDepth2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth2 = Step::getUnset(getHeadDepth2());
}

bool IfcCraneRailFShapeProfileDef::testHeadDepth2() const
{
    return Step::isUnset(getHeadDepth2()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth3()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HeadDepth3;
    }
    else 
    {
        return Step::getUnset(m_HeadDepth3);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getHeadDepth3() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getHeadDepth3();
}

void IfcCraneRailFShapeProfileDef::setHeadDepth3(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth3 = value;
}

void IfcCraneRailFShapeProfileDef::unsetHeadDepth3()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth3 = Step::getUnset(getHeadDepth3());
}

bool IfcCraneRailFShapeProfileDef::testHeadDepth3() const
{
    return Step::isUnset(getHeadDepth3()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getWebThickness()
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

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getWebThickness();
}

void IfcCraneRailFShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcCraneRailFShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcCraneRailFShapeProfileDef::testWebThickness() const
{
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth1()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseDepth1;
    }
    else 
    {
        return Step::getUnset(m_BaseDepth1);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth1() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getBaseDepth1();
}

void IfcCraneRailFShapeProfileDef::setBaseDepth1(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth1 = value;
}

void IfcCraneRailFShapeProfileDef::unsetBaseDepth1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth1 = Step::getUnset(getBaseDepth1());
}

bool IfcCraneRailFShapeProfileDef::testBaseDepth1() const
{
    return Step::isUnset(getBaseDepth1()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseDepth2;
    }
    else 
    {
        return Step::getUnset(m_BaseDepth2);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getBaseDepth2() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getBaseDepth2();
}

void IfcCraneRailFShapeProfileDef::setBaseDepth2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth2 = value;
}

void IfcCraneRailFShapeProfileDef::unsetBaseDepth2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth2 = Step::getUnset(getBaseDepth2());
}

bool IfcCraneRailFShapeProfileDef::testBaseDepth2() const
{
    return Step::isUnset(getBaseDepth2()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getCentreOfGravityInY()
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

IfcPositiveLengthMeasure IfcCraneRailFShapeProfileDef::getCentreOfGravityInY() const
{
    return const_cast<IfcCraneRailFShapeProfileDef *>(this)->getCentreOfGravityInY();
}

void IfcCraneRailFShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcCraneRailFShapeProfileDef::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcCraneRailFShapeProfileDef::testCentreOfGravityInY() const
{
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcCraneRailFShapeProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OverallHeight = Step::getUnset(m_OverallHeight);
    }
    else
    {
        m_OverallHeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HeadWidth = Step::getUnset(m_HeadWidth);
    }
    else
    {
        m_HeadWidth = Step::spfToReal(arg)

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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HeadDepth2 = Step::getUnset(m_HeadDepth2);
    }
    else
    {
        m_HeadDepth2 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HeadDepth3 = Step::getUnset(m_HeadDepth3);
    }
    else
    {
        m_HeadDepth3 = Step::spfToReal(arg)

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
        m_BaseDepth1 = Step::getUnset(m_BaseDepth1);
    }
    else
    {
        m_BaseDepth1 = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BaseDepth2 = Step::getUnset(m_BaseDepth2);
    }
    else
    {
        m_BaseDepth2 = Step::spfToReal(arg)

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

void IfcCraneRailFShapeProfileDef::copy(const IfcCraneRailFShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallHeight(obj.m_OverallHeight);
    setHeadWidth(obj.m_HeadWidth);
    setRadius(obj.m_Radius);
    setHeadDepth2(obj.m_HeadDepth2);
    setHeadDepth3(obj.m_HeadDepth3);
    setWebThickness(obj.m_WebThickness);
    setBaseDepth1(obj.m_BaseDepth1);
    setBaseDepth2(obj.m_BaseDepth2);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCraneRailFShapeProfileDef, IfcParameterizedProfileDef)
