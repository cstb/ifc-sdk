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



#include <ifc2x3/IfcFurnishingElementType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFurnishingElementType::IfcFurnishingElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcFurnishingElementType::~IfcFurnishingElementType() {
}

bool IfcFurnishingElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFurnishingElementType(this);
}

const std::string &IfcFurnishingElementType::type() const {
    return IfcFurnishingElementType::s_type.getName();
}

const Step::ClassType &IfcFurnishingElementType::getClassType() {
    return IfcFurnishingElementType::s_type;
}

const Step::ClassType &IfcFurnishingElementType::getType() const {
    return IfcFurnishingElementType::s_type;
}

bool IfcFurnishingElementType::isOfType(const Step::ClassType &t) const {
    return IfcFurnishingElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcFurnishingElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFurnishingElementType::copy(const IfcFurnishingElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFurnishingElementType::s_type("IfcFurnishingElementType");
