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



#include <ifc2x3/IfcColumn.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcColumn::IfcColumn(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
}

IfcColumn::~IfcColumn() {
}

bool IfcColumn::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColumn(this);
}

const std::string &IfcColumn::type() const {
    return IfcColumn::s_type.getName();
}

const Step::ClassType &IfcColumn::getClassType() {
    return IfcColumn::s_type;
}

const Step::ClassType &IfcColumn::getType() const {
    return IfcColumn::s_type;
}

bool IfcColumn::isOfType(const Step::ClassType &t) const {
    return IfcColumn::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

bool IfcColumn::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcColumn::copy(const IfcColumn &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcColumn::s_type("IfcColumn");
