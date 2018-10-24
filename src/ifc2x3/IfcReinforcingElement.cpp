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


#include <ifc2x3/IfcReinforcingElement.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcReinforcingElement::IfcReinforcingElement(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementComponent(id, args)
{
    m_SteelGrade = Step::getUnset(m_SteelGrade);
}

IfcReinforcingElement::~IfcReinforcingElement()
{}

bool IfcReinforcingElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReinforcingElement(this);
}


IfcLabel IfcReinforcingElement::getSteelGrade()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SteelGrade;
    }
    else 
    {
        return Step::getUnset(m_SteelGrade);
    }    
}

const IfcLabel IfcReinforcingElement::getSteelGrade() const
{
    return const_cast<IfcReinforcingElement *>(this)->getSteelGrade();
}

void IfcReinforcingElement::setSteelGrade(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SteelGrade = value;
}

void IfcReinforcingElement::unsetSteelGrade()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SteelGrade = Step::getUnset(getSteelGrade());
}

bool IfcReinforcingElement::testSteelGrade() const
{
    return Step::isUnset(getSteelGrade()) == false;
}

bool IfcReinforcingElement::init()
{
    if (IfcBuildingElementComponent::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SteelGrade = Step::getUnset(m_SteelGrade);
    }
    else
    {
        m_SteelGrade = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcReinforcingElement::copy(const IfcReinforcingElement &obj, const CopyOp &copyop)
{
    IfcBuildingElementComponent::copy(obj, copyop);
    setSteelGrade(obj.m_SteelGrade);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReinforcingElement, IfcBuildingElementComponent)
