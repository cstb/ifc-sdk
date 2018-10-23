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


#include <ifc2x3/IfcColourRgb.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcColourRgb::IfcColourRgb(Step::Id id, Step::SPFData *args) : 
    IfcColourSpecification(id, args)
{
    m_Red = Step::getUnset(m_Red);
    m_Green = Step::getUnset(m_Green);
    m_Blue = Step::getUnset(m_Blue);
}

IfcColourRgb::~IfcColourRgb()
{}

bool IfcColourRgb::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcColourRgb(this);
}


IfcNormalisedRatioMeasure IfcColourRgb::getRed()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Red;
    }
    else 
    {
        return Step::getUnset(m_Red);
    }    
}

IfcNormalisedRatioMeasure IfcColourRgb::getRed() const
{
    return const_cast<IfcColourRgb *>(this)->getRed();
}

void IfcColourRgb::setRed(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Red = value;
}

void IfcColourRgb::unsetRed()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Red = Step::getUnset(getRed());
}

bool IfcColourRgb::testRed() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRed()) == false;
}


IfcNormalisedRatioMeasure IfcColourRgb::getGreen()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Green;
    }
    else 
    {
        return Step::getUnset(m_Green);
    }    
}

IfcNormalisedRatioMeasure IfcColourRgb::getGreen() const
{
    return const_cast<IfcColourRgb *>(this)->getGreen();
}

void IfcColourRgb::setGreen(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Green = value;
}

void IfcColourRgb::unsetGreen()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Green = Step::getUnset(getGreen());
}

bool IfcColourRgb::testGreen() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getGreen()) == false;
}


IfcNormalisedRatioMeasure IfcColourRgb::getBlue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Blue;
    }
    else 
    {
        return Step::getUnset(m_Blue);
    }    
}

IfcNormalisedRatioMeasure IfcColourRgb::getBlue() const
{
    return const_cast<IfcColourRgb *>(this)->getBlue();
}

void IfcColourRgb::setBlue(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Blue = value;
}

void IfcColourRgb::unsetBlue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Blue = Step::getUnset(getBlue());
}

bool IfcColourRgb::testBlue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getBlue()) == false;
}

bool IfcColourRgb::init()
{
    if (IfcColourSpecification::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Red = Step::getUnset(m_Red);
    }
    else
    {
        m_Red = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Green = Step::getUnset(m_Green);
    }
    else
    {
        m_Green = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Blue = Step::getUnset(m_Blue);
    }
    else
    {
        m_Blue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcColourRgb::copy(const IfcColourRgb &obj, const CopyOp &copyop)
{
    IfcColourSpecification::copy(obj, copyop);
    setRed(obj.m_Red);
    setGreen(obj.m_Green);
    setBlue(obj.m_Blue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcColourRgb, IfcColourSpecification)
