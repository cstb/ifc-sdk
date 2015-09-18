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



#include <ifc2x3/IfcRelSchedulesCostItems.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelAssignsToControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelSchedulesCostItems::IfcRelSchedulesCostItems(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
}

IfcRelSchedulesCostItems::~IfcRelSchedulesCostItems() {
}

bool IfcRelSchedulesCostItems::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelSchedulesCostItems(this);
}

const std::string &IfcRelSchedulesCostItems::type() const {
    return IfcRelSchedulesCostItems::s_type.getName();
}

const Step::ClassType &IfcRelSchedulesCostItems::getClassType() {
    return IfcRelSchedulesCostItems::s_type;
}

const Step::ClassType &IfcRelSchedulesCostItems::getType() const {
    return IfcRelSchedulesCostItems::s_type;
}

bool IfcRelSchedulesCostItems::isOfType(const Step::ClassType &t) const {
    return IfcRelSchedulesCostItems::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

bool IfcRelSchedulesCostItems::init() {
    bool status = IfcRelAssignsToControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelSchedulesCostItems::copy(const IfcRelSchedulesCostItems &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelSchedulesCostItems::s_type("IfcRelSchedulesCostItems");
