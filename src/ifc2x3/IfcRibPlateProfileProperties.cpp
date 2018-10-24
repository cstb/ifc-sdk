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


#include <ifc2x3/IfcRibPlateProfileProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRibPlateProfileProperties::IfcRibPlateProfileProperties(Step::Id id, Step::SPFData *args) : 
    IfcProfileProperties(id, args)
{
    m_Thickness = Step::getUnset(m_Thickness);
    m_RibHeight = Step::getUnset(m_RibHeight);
    m_RibWidth = Step::getUnset(m_RibWidth);
    m_RibSpacing = Step::getUnset(m_RibSpacing);
    m_Direction = IfcRibPlateDirectionEnum_UNSET;
}

IfcRibPlateProfileProperties::~IfcRibPlateProfileProperties()
{}

bool IfcRibPlateProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRibPlateProfileProperties(this);
}


IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getThickness()
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

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getThickness() const
{
    return const_cast<IfcRibPlateProfileProperties *>(this)->getThickness();
}

void IfcRibPlateProfileProperties::setThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = value;
}

void IfcRibPlateProfileProperties::unsetThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Thickness = Step::getUnset(getThickness());
}

bool IfcRibPlateProfileProperties::testThickness() const
{
    return Step::isUnset(getThickness()) == false;
}


IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RibHeight;
    }
    else 
    {
        return Step::getUnset(m_RibHeight);
    }    
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibHeight() const
{
    return const_cast<IfcRibPlateProfileProperties *>(this)->getRibHeight();
}

void IfcRibPlateProfileProperties::setRibHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibHeight = value;
}

void IfcRibPlateProfileProperties::unsetRibHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibHeight = Step::getUnset(getRibHeight());
}

bool IfcRibPlateProfileProperties::testRibHeight() const
{
    return Step::isUnset(getRibHeight()) == false;
}


IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibWidth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RibWidth;
    }
    else 
    {
        return Step::getUnset(m_RibWidth);
    }    
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibWidth() const
{
    return const_cast<IfcRibPlateProfileProperties *>(this)->getRibWidth();
}

void IfcRibPlateProfileProperties::setRibWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibWidth = value;
}

void IfcRibPlateProfileProperties::unsetRibWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibWidth = Step::getUnset(getRibWidth());
}

bool IfcRibPlateProfileProperties::testRibWidth() const
{
    return Step::isUnset(getRibWidth()) == false;
}


IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibSpacing()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RibSpacing;
    }
    else 
    {
        return Step::getUnset(m_RibSpacing);
    }    
}

IfcPositiveLengthMeasure IfcRibPlateProfileProperties::getRibSpacing() const
{
    return const_cast<IfcRibPlateProfileProperties *>(this)->getRibSpacing();
}

void IfcRibPlateProfileProperties::setRibSpacing(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibSpacing = value;
}

void IfcRibPlateProfileProperties::unsetRibSpacing()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RibSpacing = Step::getUnset(getRibSpacing());
}

bool IfcRibPlateProfileProperties::testRibSpacing() const
{
    return Step::isUnset(getRibSpacing()) == false;
}


IfcRibPlateDirectionEnum IfcRibPlateProfileProperties::getDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Direction;
    }
    else 
    {
        return IfcRibPlateDirectionEnum_UNSET;
    }    
}

IfcRibPlateDirectionEnum IfcRibPlateProfileProperties::getDirection() const
{
    return const_cast<IfcRibPlateProfileProperties *>(this)->getDirection();
}

void IfcRibPlateProfileProperties::setDirection(IfcRibPlateDirectionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Direction = value;
}

void IfcRibPlateProfileProperties::unsetDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Direction = IfcRibPlateDirectionEnum_UNSET;
}

bool IfcRibPlateProfileProperties::testDirection() const
{
    return Step::isUnset(getDirection()) == false;
}

bool IfcRibPlateProfileProperties::init()
{
    if (IfcProfileProperties::init() == false)
    {
        return false;
    }
    std::string arg;
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
        m_RibHeight = Step::getUnset(m_RibHeight);
    }
    else
    {
        m_RibHeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RibWidth = Step::getUnset(m_RibWidth);
    }
    else
    {
        m_RibWidth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RibSpacing = Step::getUnset(m_RibSpacing);
    }
    else
    {
        m_RibSpacing = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Direction = IfcRibPlateDirectionEnum_UNSET;
    }
    else
    {
        if (arg == ".DIRECTION_X.")
        {
            m_Direction = IfcRibPlateDirectionEnum_DIRECTION_X;
        }
        else if (arg == ".DIRECTION_Y.")
        {
            m_Direction = IfcRibPlateDirectionEnum_DIRECTION_Y;
        }
    }
    return true;
}

void IfcRibPlateProfileProperties::copy(const IfcRibPlateProfileProperties &obj, const CopyOp &copyop)
{
    IfcProfileProperties::copy(obj, copyop);
    setThickness(obj.m_Thickness);
    setRibHeight(obj.m_RibHeight);
    setRibWidth(obj.m_RibWidth);
    setRibSpacing(obj.m_RibSpacing);
    setDirection(obj.m_Direction);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRibPlateProfileProperties, IfcProfileProperties)
