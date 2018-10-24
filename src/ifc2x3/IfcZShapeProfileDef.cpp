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


#include <ifc2x3/IfcZShapeProfileDef.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcZShapeProfileDef::IfcZShapeProfileDef(Step::Id id, Step::SPFData *args) : 
    IfcParameterizedProfileDef(id, args)
{
    m_Depth = Step::getUnset(m_Depth);
    m_FlangeWidth = Step::getUnset(m_FlangeWidth);
    m_WebThickness = Step::getUnset(m_WebThickness);
    m_FlangeThickness = Step::getUnset(m_FlangeThickness);
    m_FilletRadius = Step::getUnset(m_FilletRadius);
    m_EdgeRadius = Step::getUnset(m_EdgeRadius);
}

IfcZShapeProfileDef::~IfcZShapeProfileDef()
{}

bool IfcZShapeProfileDef::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcZShapeProfileDef(this);
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getDepth()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getDepth() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getDepth();
}

void IfcZShapeProfileDef::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcZShapeProfileDef::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcZShapeProfileDef::testDepth() const
{
    return Step::isUnset(getDepth()) == false;
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeWidth()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeWidth() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getFlangeWidth();
}

void IfcZShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = value;
}

void IfcZShapeProfileDef::unsetFlangeWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeWidth = Step::getUnset(getFlangeWidth());
}

bool IfcZShapeProfileDef::testFlangeWidth() const
{
    return Step::isUnset(getFlangeWidth()) == false;
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getWebThickness()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getWebThickness() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getWebThickness();
}

void IfcZShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = value;
}

void IfcZShapeProfileDef::unsetWebThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WebThickness = Step::getUnset(getWebThickness());
}

bool IfcZShapeProfileDef::testWebThickness() const
{
    return Step::isUnset(getWebThickness()) == false;
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeThickness()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeThickness() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getFlangeThickness();
}

void IfcZShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = value;
}

void IfcZShapeProfileDef::unsetFlangeThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlangeThickness = Step::getUnset(getFlangeThickness());
}

bool IfcZShapeProfileDef::testFlangeThickness() const
{
    return Step::isUnset(getFlangeThickness()) == false;
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getFilletRadius()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFilletRadius() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getFilletRadius();
}

void IfcZShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = value;
}

void IfcZShapeProfileDef::unsetFilletRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FilletRadius = Step::getUnset(getFilletRadius());
}

bool IfcZShapeProfileDef::testFilletRadius() const
{
    return Step::isUnset(getFilletRadius()) == false;
}


IfcPositiveLengthMeasure IfcZShapeProfileDef::getEdgeRadius()
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

IfcPositiveLengthMeasure IfcZShapeProfileDef::getEdgeRadius() const
{
    return const_cast<IfcZShapeProfileDef *>(this)->getEdgeRadius();
}

void IfcZShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = value;
}

void IfcZShapeProfileDef::unsetEdgeRadius()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EdgeRadius = Step::getUnset(getEdgeRadius());
}

bool IfcZShapeProfileDef::testEdgeRadius() const
{
    return Step::isUnset(getEdgeRadius()) == false;
}

bool IfcZShapeProfileDef::init()
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
    return true;
}

void IfcZShapeProfileDef::copy(const IfcZShapeProfileDef &obj, const CopyOp &copyop)
{
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_Depth);
    setFlangeWidth(obj.m_FlangeWidth);
    setWebThickness(obj.m_WebThickness);
    setFlangeThickness(obj.m_FlangeThickness);
    setFilletRadius(obj.m_FilletRadius);
    setEdgeRadius(obj.m_EdgeRadius);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcZShapeProfileDef, IfcParameterizedProfileDef)
