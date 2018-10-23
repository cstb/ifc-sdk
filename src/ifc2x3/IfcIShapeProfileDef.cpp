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


#include <ifc2x3/IfcIShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcIShapeProfileDef::IfcIShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_OverallWidth = Step::getUnset(m_OverallWidth);
    m_OverallDepth = Step::getUnset(m_OverallDepth);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_FlangeThickness = Step::getUnset(m_FlangeThickness);
    m_FilletRadius = Step::getUnset(m_FilletRadius);
}

IfcIShapeProfileDef::~IfcIShapeProfileDef()
{}

bool IfcIShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcIShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OverallWidth;
    }
    else 
    {
        return Step::getUnset(m_OverallWidth);
    }    
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallWidth() const
{
    return const_cast<IfcIShapeProfileDef *>(this)->getOverallWidth();
}

void IfcIShapeProfileDef::setOverallWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = value;
}

void IfcIShapeProfileDef::unsetOverallWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = Step::getUnset(getOverallWidth());
}

bool IfcIShapeProfileDef::testOverallWidth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOverallWidth()) == false;
}


IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OverallDepth;
    }
    else 
    {
        return Step::getUnset(m_OverallDepth);
    }    
}

IfcPositiveLengthMeasure IfcIShapeProfileDef::getOverallDepth() const
{
    return const_cast<IfcIShapeProfileDef *>(this)->getOverallDepth();
}

void IfcIShapeProfileDef::setOverallDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallDepth = value;
}

void IfcIShapeProfileDef::unsetOverallDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallDepth = Step::getUnset(getOverallDepth());
}

bool IfcIShapeProfileDef::testOverallDepth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOverallDepth()) == false;
}


IfcPositiveLengthMeasure IfcIShapeProfileDef::getWebThickness()
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

IfcPositiveLengthMeasure IfcIShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcIShapeProfileDef *>(this)->getWebThickness();
}

void IfcIShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcIShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcIShapeProfileDef::testWebThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcIShapeProfileDef::getFlangeThickness()
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

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFlangeThickness() const
{
    return const_cast<IfcIShapeProfileDef *>(this)->getFlangeThickness();
}

void IfcIShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = value;
}

void IfcIShapeProfileDef::unsetFlangeThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcIShapeProfileDef::testFlangeThickness() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlangeThickness()) == false;
}


IfcPositiveLengthMeasure IfcIShapeProfileDef::getFilletRadius()
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

IfcPositiveLengthMeasure IfcIShapeProfileDef::getFilletRadius() const
{
    return const_cast<IfcIShapeProfileDef *>(this)->getFilletRadius();
}

void IfcIShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = value;
}

void IfcIShapeProfileDef::unsetFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = Step::getUnset(getFilletRadius());
}

bool IfcIShapeProfileDef::testFilletRadius() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFilletRadius()) == false;
}

bool IfcIShapeProfileDef::init()
{
    if (IfcParameterizedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OverallWidth = Step::getUnset(m_OverallWidth);
    }
    else
    {
        m_OverallWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OverallDepth = Step::getUnset(m_OverallDepth);
    }
    else
    {
        m_OverallDepth = Step::spfToReal(arg)

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
    return true;
}

void IfcIShapeProfileDef::copy(const IfcIShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setOverallWidth(obj.m_OverallWidth);
    setOverallDepth(obj.m_OverallDepth);
    setWebThickness(obj.m_WebThickness);
    setFlangeThickness(obj.m_FlangeThickness);
    setFilletRadius(obj.m_FilletRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcIShapeProfileDef, IfcParameterizedProfileDef)
