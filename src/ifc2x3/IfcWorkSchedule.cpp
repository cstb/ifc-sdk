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



#include <ifc2x3/IfcWorkSchedule.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcWorkControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWorkSchedule::IfcWorkSchedule(Step::Id id, Step::SPFData *args) : IfcWorkControl(id, args) {
}

IfcWorkSchedule::~IfcWorkSchedule() {
}

bool IfcWorkSchedule::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWorkSchedule(this);
}

const std::string &IfcWorkSchedule::type() const {
    return IfcWorkSchedule::s_type.getName();
}

const Step::ClassType &IfcWorkSchedule::getClassType() {
    return IfcWorkSchedule::s_type;
}

const Step::ClassType &IfcWorkSchedule::getType() const {
    return IfcWorkSchedule::s_type;
}

bool IfcWorkSchedule::isOfType(const Step::ClassType &t) const {
    return IfcWorkSchedule::s_type == t ? true : IfcWorkControl::isOfType(t);
}

bool IfcWorkSchedule::init() {
    bool status = IfcWorkControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcWorkSchedule::copy(const IfcWorkSchedule &obj, const CopyOp &copyop) {
    IfcWorkControl::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWorkSchedule::s_type("IfcWorkSchedule");
