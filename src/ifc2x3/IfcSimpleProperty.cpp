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



#include <ifc2x3/IfcSimpleProperty.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSimpleProperty::IfcSimpleProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
}

IfcSimpleProperty::~IfcSimpleProperty() {
}

bool IfcSimpleProperty::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSimpleProperty(this);
}

const std::string &IfcSimpleProperty::type() const {
    return IfcSimpleProperty::s_type.getName();
}

const Step::ClassType &IfcSimpleProperty::getClassType() {
    return IfcSimpleProperty::s_type;
}

const Step::ClassType &IfcSimpleProperty::getType() const {
    return IfcSimpleProperty::s_type;
}

bool IfcSimpleProperty::isOfType(const Step::ClassType &t) const {
    return IfcSimpleProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

bool IfcSimpleProperty::init() {
    bool status = IfcProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSimpleProperty::copy(const IfcSimpleProperty &obj, const CopyOp &copyop) {
    IfcProperty::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSimpleProperty::s_type("IfcSimpleProperty");
