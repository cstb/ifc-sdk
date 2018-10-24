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


#include <ifc2x3/IfcCraneRailAShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCraneRailAShapeProfileDef::IfcCraneRailAShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_OverallHeight = Step::getUnset(m_OverallHeight);
    m_BaseWidth2 = Step::getUnset(m_BaseWidth2);
    m_Radius = Step::getUnset(m_Radius);
    m_HeadWidth = Step::getUnset(m_HeadWidth);
    m_HeadDepth2 = Step::getUnset(m_HeadDepth2);
    m_HeadDepth3 = Step::getUnset(m_HeadDepth3);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_BaseWidth4 = Step::getUnset(m_BaseWidth4);
    m_BaseDepth1 = Step::getUnset(m_BaseDepth1);
    m_BaseDepth2 = Step::getUnset(m_BaseDepth2);
    m_BaseDepth3 = Step::getUnset(m_BaseDepth3);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcCraneRailAShapeProfileDef::~IfcCraneRailAShapeProfileDef()
{}

bool IfcCraneRailAShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCraneRailAShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getOverallHeight()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getOverallHeight() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getOverallHeight();
}

void IfcCraneRailAShapeProfileDef::setOverallHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = value;
}

void IfcCraneRailAShapeProfileDef::unsetOverallHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = Step::getUnset(getOverallHeight());
}

bool IfcCraneRailAShapeProfileDef::testOverallHeight() const
{
    return Step::isUnset(getOverallHeight()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth2()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseWidth2;
    }
    else 
    {
        return Step::getUnset(m_BaseWidth2);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth2() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getBaseWidth2();
}

void IfcCraneRailAShapeProfileDef::setBaseWidth2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseWidth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseWidth2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseWidth2 = Step::getUnset(getBaseWidth2());
}

bool IfcCraneRailAShapeProfileDef::testBaseWidth2() const
{
    return Step::isUnset(getBaseWidth2()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getRadius()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getRadius() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getRadius();
}

void IfcCraneRailAShapeProfileDef::setRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = value;
}

void IfcCraneRailAShapeProfileDef::unsetRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Radius = Step::getUnset(getRadius());
}

bool IfcCraneRailAShapeProfileDef::testRadius() const
{
    return Step::isUnset(getRadius()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadWidth()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadWidth() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getHeadWidth();
}

void IfcCraneRailAShapeProfileDef::setHeadWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadWidth = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadWidth = Step::getUnset(getHeadWidth());
}

bool IfcCraneRailAShapeProfileDef::testHeadWidth() const
{
    return Step::isUnset(getHeadWidth()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth2()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth2() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getHeadDepth2();
}

void IfcCraneRailAShapeProfileDef::setHeadDepth2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadDepth2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth2 = Step::getUnset(getHeadDepth2());
}

bool IfcCraneRailAShapeProfileDef::testHeadDepth2() const
{
    return Step::isUnset(getHeadDepth2()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth3()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getHeadDepth3() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getHeadDepth3();
}

void IfcCraneRailAShapeProfileDef::setHeadDepth3(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth3 = value;
}

void IfcCraneRailAShapeProfileDef::unsetHeadDepth3()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HeadDepth3 = Step::getUnset(getHeadDepth3());
}

bool IfcCraneRailAShapeProfileDef::testHeadDepth3() const
{
    return Step::isUnset(getHeadDepth3()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getWebThickness()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getWebThickness();
}

void IfcCraneRailAShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcCraneRailAShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcCraneRailAShapeProfileDef::testWebThickness() const
{
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth4()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseWidth4;
    }
    else 
    {
        return Step::getUnset(m_BaseWidth4);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseWidth4() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getBaseWidth4();
}

void IfcCraneRailAShapeProfileDef::setBaseWidth4(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseWidth4 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseWidth4()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseWidth4 = Step::getUnset(getBaseWidth4());
}

bool IfcCraneRailAShapeProfileDef::testBaseWidth4() const
{
    return Step::isUnset(getBaseWidth4()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth1()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth1() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getBaseDepth1();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth1(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth1 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth1()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth1 = Step::getUnset(getBaseDepth1());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth1() const
{
    return Step::isUnset(getBaseDepth1()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth2()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth2() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getBaseDepth2();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth2(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth2 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth2()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth2 = Step::getUnset(getBaseDepth2());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth2() const
{
    return Step::isUnset(getBaseDepth2()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth3()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BaseDepth3;
    }
    else 
    {
        return Step::getUnset(m_BaseDepth3);
    }    
}

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getBaseDepth3() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getBaseDepth3();
}

void IfcCraneRailAShapeProfileDef::setBaseDepth3(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth3 = value;
}

void IfcCraneRailAShapeProfileDef::unsetBaseDepth3()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BaseDepth3 = Step::getUnset(getBaseDepth3());
}

bool IfcCraneRailAShapeProfileDef::testBaseDepth3() const
{
    return Step::isUnset(getBaseDepth3()) == false;
}


IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getCentreOfGravityInY()
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

IfcPositiveLengthMeasure IfcCraneRailAShapeProfileDef::getCentreOfGravityInY() const
{
    return const_cast<IfcCraneRailAShapeProfileDef *>(this)->getCentreOfGravityInY();
}

void IfcCraneRailAShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcCraneRailAShapeProfileDef::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcCraneRailAShapeProfileDef::testCentreOfGravityInY() const
{
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcCraneRailAShapeProfileDef::init()
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
        m_BaseWidth2 = Step::getUnset(m_BaseWidth2);
    }
    else
    {
        m_BaseWidth2 = Step::spfToReal(arg)

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
        m_BaseWidth4 = Step::getUnset(m_BaseWidth4);
    }
    else
    {
        m_BaseWidth4 = Step::spfToReal(arg)

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
        m_BaseDepth3 = Step::getUnset(m_BaseDepth3);
    }
    else
    {
        m_BaseDepth3 = Step::spfToReal(arg)

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

void IfcCraneRailAShapeProfileDef::copy(const IfcCraneRailAShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallHeight(obj.m_OverallHeight);
    setBaseWidth2(obj.m_BaseWidth2);
    setRadius(obj.m_Radius);
    setHeadWidth(obj.m_HeadWidth);
    setHeadDepth2(obj.m_HeadDepth2);
    setHeadDepth3(obj.m_HeadDepth3);
    setWebThickness(obj.m_WebThickness);
    setBaseWidth4(obj.m_BaseWidth4);
    setBaseDepth1(obj.m_BaseDepth1);
    setBaseDepth2(obj.m_BaseDepth2);
    setBaseDepth3(obj.m_BaseDepth3);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCraneRailAShapeProfileDef, IfcParameterizedProfileDef)
