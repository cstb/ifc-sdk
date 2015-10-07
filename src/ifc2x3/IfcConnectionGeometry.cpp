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



#include <ifc2x3/IfcConnectionGeometry.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConnectionGeometry::IfcConnectionGeometry(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcConnectionGeometry::~IfcConnectionGeometry() {
}

bool IfcConnectionGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionGeometry(this);
}

const std::string &IfcConnectionGeometry::type() const {
    return IfcConnectionGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionGeometry::getClassType() {
    return IfcConnectionGeometry::s_type;
}

const Step::ClassType &IfcConnectionGeometry::getType() const {
    return IfcConnectionGeometry::s_type;
}

bool IfcConnectionGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionGeometry::s_type == t ? true : Step::BaseObject::isOfType(t);
}

bool IfcConnectionGeometry::init() {
    std::string arg;
    return true;
}

void IfcConnectionGeometry::copy(const IfcConnectionGeometry &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConnectionGeometry::s_type("IfcConnectionGeometry");
