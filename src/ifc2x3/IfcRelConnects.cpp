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



#include <ifc2x3/IfcRelConnects.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelationship.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelConnects::IfcRelConnects(Step::Id id, Step::SPFData *args) : IfcRelationship(id, args) {
}

IfcRelConnects::~IfcRelConnects() {
}

bool IfcRelConnects::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnects(this);
}

const std::string &IfcRelConnects::type() const {
    return IfcRelConnects::s_type.getName();
}

const Step::ClassType &IfcRelConnects::getClassType() {
    return IfcRelConnects::s_type;
}

const Step::ClassType &IfcRelConnects::getType() const {
    return IfcRelConnects::s_type;
}

bool IfcRelConnects::isOfType(const Step::ClassType &t) const {
    return IfcRelConnects::s_type == t ? true : IfcRelationship::isOfType(t);
}

bool IfcRelConnects::init() {
    bool status = IfcRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelConnects::copy(const IfcRelConnects &obj, const CopyOp &copyop) {
    IfcRelationship::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnects::s_type("IfcRelConnects");
