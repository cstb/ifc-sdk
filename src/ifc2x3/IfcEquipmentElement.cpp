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



#include <ifc2x3/IfcEquipmentElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEquipmentElement::IfcEquipmentElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
}

IfcEquipmentElement::~IfcEquipmentElement() {
}

bool IfcEquipmentElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEquipmentElement(this);
}

const std::string &IfcEquipmentElement::type() const {
    return IfcEquipmentElement::s_type.getName();
}

const Step::ClassType &IfcEquipmentElement::getClassType() {
    return IfcEquipmentElement::s_type;
}

const Step::ClassType &IfcEquipmentElement::getType() const {
    return IfcEquipmentElement::s_type;
}

bool IfcEquipmentElement::isOfType(const Step::ClassType &t) const {
    return IfcEquipmentElement::s_type == t ? true : IfcElement::isOfType(t);
}

bool IfcEquipmentElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEquipmentElement::copy(const IfcEquipmentElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEquipmentElement::s_type("IfcEquipmentElement");
