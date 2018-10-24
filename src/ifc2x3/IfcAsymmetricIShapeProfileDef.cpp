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


#include <ifc2x3/IfcAsymmetricIShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAsymmetricIShapeProfileDef::IfcAsymmetricIShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcIShapeProfileDef(id, args)
{
    m_TopFlangeWidth = Step::getUnset(m_TopFlangeWidth);
    m_TopFlangeThickness = Step::getUnset(m_TopFlangeThickness);
    m_TopFlangeFilletRadius = Step::getUnset(m_TopFlangeFilletRadius);
    m_CentreOfGravityInY = Step::getUnset(m_CentreOfGravityInY);
}

IfcAsymmetricIShapeProfileDef::~IfcAsymmetricIShapeProfileDef()
{}

bool IfcAsymmetricIShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAsymmetricIShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TopFlangeWidth;
    }
    else 
    {
        return Step::getUnset(m_TopFlangeWidth);
    }    
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeWidth() const
{
    return const_cast<IfcAsymmetricIShapeProfileDef *>(this)->getTopFlangeWidth();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeWidth = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeWidth = Step::getUnset(getTopFlangeWidth());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeWidth() const
{
    return Step::isUnset(getTopFlangeWidth()) == false;
}


IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TopFlangeThickness;
    }
    else 
    {
        return Step::getUnset(m_TopFlangeThickness);
    }    
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeThickness() const
{
    return const_cast<IfcAsymmetricIShapeProfileDef *>(this)->getTopFlangeThickness();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeThickness = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeThickness = Step::getUnset(getTopFlangeThickness());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeThickness() const
{
    return Step::isUnset(getTopFlangeThickness()) == false;
}


IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TopFlangeFilletRadius;
    }
    else 
    {
        return Step::getUnset(m_TopFlangeFilletRadius);
    }    
}

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getTopFlangeFilletRadius() const
{
    return const_cast<IfcAsymmetricIShapeProfileDef *>(this)->getTopFlangeFilletRadius();
}

void IfcAsymmetricIShapeProfileDef::setTopFlangeFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeFilletRadius = value;
}

void IfcAsymmetricIShapeProfileDef::unsetTopFlangeFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TopFlangeFilletRadius = Step::getUnset(getTopFlangeFilletRadius());
}

bool IfcAsymmetricIShapeProfileDef::testTopFlangeFilletRadius() const
{
    return Step::isUnset(getTopFlangeFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY()
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

IfcPositiveLengthMeasure IfcAsymmetricIShapeProfileDef::getCentreOfGravityInY() const
{
    return const_cast<IfcAsymmetricIShapeProfileDef *>(this)->getCentreOfGravityInY();
}

void IfcAsymmetricIShapeProfileDef::setCentreOfGravityInY(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = value;
}

void IfcAsymmetricIShapeProfileDef::unsetCentreOfGravityInY()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CentreOfGravityInY = Step::getUnset(getCentreOfGravityInY());
}

bool IfcAsymmetricIShapeProfileDef::testCentreOfGravityInY() const
{
    return Step::isUnset(getCentreOfGravityInY()) == false;
}

bool IfcAsymmetricIShapeProfileDef::init()
{
    if (IfcIShapeProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TopFlangeWidth = Step::getUnset(m_TopFlangeWidth);
    }
    else
    {
        m_TopFlangeWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TopFlangeThickness = Step::getUnset(m_TopFlangeThickness);
    }
    else
    {
        m_TopFlangeThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TopFlangeFilletRadius = Step::getUnset(m_TopFlangeFilletRadius);
    }
    else
    {
        m_TopFlangeFilletRadius = Step::spfToReal(arg)

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

void IfcAsymmetricIShapeProfileDef::copy(const IfcAsymmetricIShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcIShapeProfileDef::copy(obj, copyop);
    setTopFlangeWidth(obj.m_TopFlangeWidth);
    setTopFlangeThickness(obj.m_TopFlangeThickness);
    setTopFlangeFilletRadius(obj.m_TopFlangeFilletRadius);
    setCentreOfGravityInY(obj.m_CentreOfGravityInY);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAsymmetricIShapeProfileDef, IfcIShapeProfileDef)
