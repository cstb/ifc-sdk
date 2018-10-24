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


#include <ifc2x3/IfcWindow.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWindow::IfcWindow(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_OverallHeight = Step::getUnset(m_OverallHeight);
    m_OverallWidth = Step::getUnset(m_OverallWidth);
}

IfcWindow::~IfcWindow()
{}

bool IfcWindow::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWindow(this);
}


IfcPositiveLengthMeasure IfcWindow::getOverallHeight()
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

IfcPositiveLengthMeasure IfcWindow::getOverallHeight() const
{
    return const_cast<IfcWindow *>(this)->getOverallHeight();
}

void IfcWindow::setOverallHeight(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = value;
}

void IfcWindow::unsetOverallHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallHeight = Step::getUnset(getOverallHeight());
}

bool IfcWindow::testOverallHeight() const
{
    return Step::isUnset(getOverallHeight()) == false;
}


IfcPositiveLengthMeasure IfcWindow::getOverallWidth()
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

IfcPositiveLengthMeasure IfcWindow::getOverallWidth() const
{
    return const_cast<IfcWindow *>(this)->getOverallWidth();
}

void IfcWindow::setOverallWidth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = value;
}

void IfcWindow::unsetOverallWidth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OverallWidth = Step::getUnset(getOverallWidth());
}

bool IfcWindow::testOverallWidth() const
{
    return Step::isUnset(getOverallWidth()) == false;
}

bool IfcWindow::init()
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

void IfcWindow::copy(const IfcWindow &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_OverallHeight);
    setOverallWidth(obj.m_OverallWidth);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWindow, IfcBuildingElement)
