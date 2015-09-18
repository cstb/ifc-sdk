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



#include <ifc2x3/IfcSpatialStructureElementType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSpatialStructureElementType::IfcSpatialStructureElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcSpatialStructureElementType::~IfcSpatialStructureElementType() {
}

bool IfcSpatialStructureElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpatialStructureElementType(this);
}

const std::string &IfcSpatialStructureElementType::type() const {
    return IfcSpatialStructureElementType::s_type.getName();
}

const Step::ClassType &IfcSpatialStructureElementType::getClassType() {
    return IfcSpatialStructureElementType::s_type;
}

const Step::ClassType &IfcSpatialStructureElementType::getType() const {
    return IfcSpatialStructureElementType::s_type;
}

bool IfcSpatialStructureElementType::isOfType(const Step::ClassType &t) const {
    return IfcSpatialStructureElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcSpatialStructureElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSpatialStructureElementType::copy(const IfcSpatialStructureElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSpatialStructureElementType::s_type("IfcSpatialStructureElementType");
