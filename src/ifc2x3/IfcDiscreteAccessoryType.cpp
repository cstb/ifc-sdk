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



#include <ifc2x3/IfcDiscreteAccessoryType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementComponentType.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDiscreteAccessoryType::IfcDiscreteAccessoryType(Step::Id id, Step::SPFData *args) : IfcElementComponentType(id, args) {
}

IfcDiscreteAccessoryType::~IfcDiscreteAccessoryType() {
}

bool IfcDiscreteAccessoryType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDiscreteAccessoryType(this);
}

const std::string &IfcDiscreteAccessoryType::type() const {
    return IfcDiscreteAccessoryType::s_type.getName();
}

const Step::ClassType &IfcDiscreteAccessoryType::getClassType() {
    return IfcDiscreteAccessoryType::s_type;
}

const Step::ClassType &IfcDiscreteAccessoryType::getType() const {
    return IfcDiscreteAccessoryType::s_type;
}

bool IfcDiscreteAccessoryType::isOfType(const Step::ClassType &t) const {
    return IfcDiscreteAccessoryType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

bool IfcDiscreteAccessoryType::init() {
    bool status = IfcElementComponentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDiscreteAccessoryType::copy(const IfcDiscreteAccessoryType &obj, const CopyOp &copyop) {
    IfcElementComponentType::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDiscreteAccessoryType::s_type("IfcDiscreteAccessoryType");
