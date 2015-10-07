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



#include <ifc2x3/IfcRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelationship::IfcRelationship(Step::Id id, Step::SPFData *args) : IfcRoot(id, args) {
}

IfcRelationship::~IfcRelationship() {
}

bool IfcRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelationship(this);
}

const std::string &IfcRelationship::type() const {
    return IfcRelationship::s_type.getName();
}

const Step::ClassType &IfcRelationship::getClassType() {
    return IfcRelationship::s_type;
}

const Step::ClassType &IfcRelationship::getType() const {
    return IfcRelationship::s_type;
}

bool IfcRelationship::isOfType(const Step::ClassType &t) const {
    return IfcRelationship::s_type == t ? true : IfcRoot::isOfType(t);
}

bool IfcRelationship::init() {
    bool status = IfcRoot::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelationship::copy(const IfcRelationship &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelationship::s_type("IfcRelationship");
