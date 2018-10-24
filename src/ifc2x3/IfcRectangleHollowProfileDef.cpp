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


#include <ifc2x3/IfcRectangleHollowProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRectangleHollowProfileDef::IfcRectangleHollowProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcRectangleProfileDef(id, args)
{
    m_WallThickness = Step::getUnset(m_WallThickness);
    m_InnerFilletRadius = Step::getUnset(m_InnerFilletRadius);
    m_OuterFilletRadius = Step::getUnset(m_OuterFilletRadius);
}

IfcRectangleHollowProfileDef::~IfcRectangleHollowProfileDef()
{}

bool IfcRectangleHollowProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRectangleHollowProfileDef(this);
}


IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getWallThickness()
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

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getWallThickness() const
{
    return const_cast<IfcRectangleHollowProfileDef *>(this)->getWallThickness();
}

void IfcRectangleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = value;
}

void IfcRectangleHollowProfileDef::unsetWallThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WallThickness = Step::getUnset(getWallThickness());
}

bool IfcRectangleHollowProfileDef::testWallThickness() const
{
    return Step::isUnset(getWallThickness()) == false;
}


IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getInnerFilletRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InnerFilletRadius;
    }
    else 
    {
        return Step::getUnset(m_InnerFilletRadius);
    }    
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getInnerFilletRadius() const
{
    return const_cast<IfcRectangleHollowProfileDef *>(this)->getInnerFilletRadius();
}

void IfcRectangleHollowProfileDef::setInnerFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerFilletRadius = value;
}

void IfcRectangleHollowProfileDef::unsetInnerFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerFilletRadius = Step::getUnset(getInnerFilletRadius());
}

bool IfcRectangleHollowProfileDef::testInnerFilletRadius() const
{
    return Step::isUnset(getInnerFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getOuterFilletRadius()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OuterFilletRadius;
    }
    else 
    {
        return Step::getUnset(m_OuterFilletRadius);
    }    
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getOuterFilletRadius() const
{
    return const_cast<IfcRectangleHollowProfileDef *>(this)->getOuterFilletRadius();
}

void IfcRectangleHollowProfileDef::setOuterFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterFilletRadius = value;
}

void IfcRectangleHollowProfileDef::unsetOuterFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterFilletRadius = Step::getUnset(getOuterFilletRadius());
}

bool IfcRectangleHollowProfileDef::testOuterFilletRadius() const
{
    return Step::isUnset(getOuterFilletRadius()) == false;
}

bool IfcRectangleHollowProfileDef::init()
{
    if (IfcRectangleProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
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
        m_InnerFilletRadius = Step::getUnset(m_InnerFilletRadius);
    }
    else
    {
        m_InnerFilletRadius = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OuterFilletRadius = Step::getUnset(m_OuterFilletRadius);
    }
    else
    {
        m_OuterFilletRadius = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcRectangleHollowProfileDef::copy(const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop)
{
    IfcRectangleProfileDef::copy(obj, copyop);
    setWallThickness(obj.m_WallThickness);
    setInnerFilletRadius(obj.m_InnerFilletRadius);
    setOuterFilletRadius(obj.m_OuterFilletRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRectangleHollowProfileDef, IfcRectangleProfileDef)
