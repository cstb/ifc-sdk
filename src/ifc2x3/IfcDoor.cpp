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


#include <ifc2x3/IfcDoor.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDoor::IfcDoor(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_OverallHeight = Step::getUnset(m_OverallHeight);
    m_OverallWidth = Step::getUnset(m_OverallWidth);
}

IfcDoor::~IfcDoor()
{}

bool IfcDoor::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDoor(this);
}


IfcPositiveLengthMeasure IfcDoor::getOverallHeight()
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

IfcPositiveLengthMeasure IfcDoor::getOverallHeight() const
{
    return const_cast<IfcDoor *>(this)->getOverallHeight();
}

void IfcDoor::setOverallHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = value;
}

void IfcDoor::unsetOverallHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = Step::getUnset(getOverallHeight());
}

bool IfcDoor::testOverallHeight() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOverallHeight()) == false;
}


IfcPositiveLengthMeasure IfcDoor::getOverallWidth()
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

IfcPositiveLengthMeasure IfcDoor::getOverallWidth() const
{
    return const_cast<IfcDoor *>(this)->getOverallWidth();
}

void IfcDoor::setOverallWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = value;
}

void IfcDoor::unsetOverallWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = Step::getUnset(getOverallWidth());
}

bool IfcDoor::testOverallWidth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOverallWidth()) == false;
}

bool IfcDoor::init()
{
    if (IfcBuildingElement::init() == false)
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
        m_OverallWidth = Step::getUnset(m_OverallWidth);
    }
    else
    {
        m_OverallWidth = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcDoor::copy(const IfcDoor &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_OverallHeight);
    setOverallWidth(obj.m_OverallWidth);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDoor, IfcBuildingElement)
