// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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
#include <ifc2x3/IfcBuildingElementComponent.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcReinforcingElement::IfcReinforcingElement(Step::Id id, Step::SPFData *args) : IfcBuildingElementComponent(id, args) {
    m_steelGrade = Step::getUnset(m_steelGrade);
}

IfcReinforcingElement::~IfcReinforcingElement() {
}

bool IfcReinforcingElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcReinforcingElement(this);
}

const std::string &IfcReinforcingElement::type() const {
    return IfcReinforcingElement::s_type.getName();
}

const Step::ClassType &IfcReinforcingElement::getClassType() {
    return IfcReinforcingElement::s_type;
}

const Step::ClassType &IfcReinforcingElement::getType() const {
    return IfcReinforcingElement::s_type;
}

bool IfcReinforcingElement::isOfType(const Step::ClassType &t) const {
    return IfcReinforcingElement::s_type == t ? true : IfcBuildingElementComponent::isOfType(t);
}

IfcLabel IfcReinforcingElement::getSteelGrade() {
    if (Step::BaseObject::inited()) {
        return m_steelGrade;
    }
    else {
        return Step::getUnset(m_steelGrade);
    }
}

const IfcLabel IfcReinforcingElement::getSteelGrade() const {
    IfcReinforcingElement * deConstObject = const_cast< IfcReinforcingElement * > (this);
    return deConstObject->getSteelGrade();
}

void IfcReinforcingElement::setSteelGrade(const IfcLabel &value) {
    m_steelGrade = value;
}

void IfcReinforcingElement::unsetSteelGrade() {
    m_steelGrade = Step::getUnset(getSteelGrade());
}

bool IfcReinforcingElement::testSteelGrade() const {
    return !Step::isUnset(getSteelGrade());
}

bool IfcReinforcingElement::init() {
    bool status = IfcBuildingElementComponent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_steelGrade = Step::getUnset(m_steelGrade);
    }
    else {
        m_steelGrade = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcReinforcingElement::copy(const IfcReinforcingElement &obj, const CopyOp &copyop) {
    IfcBuildingElementComponent::copy(obj, copyop);
    setSteelGrade(obj.m_steelGrade);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcReinforcingElement::s_type("IfcReinforcingElement");
