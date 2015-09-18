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



#include <ifc2x3/IfcElementComponentType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElementComponentType::IfcElementComponentType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcElementComponentType::~IfcElementComponentType() {
}

bool IfcElementComponentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementComponentType(this);
}

const std::string &IfcElementComponentType::type() const {
    return IfcElementComponentType::s_type.getName();
}

const Step::ClassType &IfcElementComponentType::getClassType() {
    return IfcElementComponentType::s_type;
}

const Step::ClassType &IfcElementComponentType::getType() const {
    return IfcElementComponentType::s_type;
}

bool IfcElementComponentType::isOfType(const Step::ClassType &t) const {
    return IfcElementComponentType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcElementComponentType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElementComponentType::copy(const IfcElementComponentType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElementComponentType::s_type("IfcElementComponentType");
