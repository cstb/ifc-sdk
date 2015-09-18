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



#include <ifc2x3/IfcPlane.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementarySurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPlane::IfcPlane(Step::Id id, Step::SPFData *args) : IfcElementarySurface(id, args) {
}

IfcPlane::~IfcPlane() {
}

bool IfcPlane::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlane(this);
}

const std::string &IfcPlane::type() const {
    return IfcPlane::s_type.getName();
}

const Step::ClassType &IfcPlane::getClassType() {
    return IfcPlane::s_type;
}

const Step::ClassType &IfcPlane::getType() const {
    return IfcPlane::s_type;
}

bool IfcPlane::isOfType(const Step::ClassType &t) const {
    return IfcPlane::s_type == t ? true : IfcElementarySurface::isOfType(t);
}

bool IfcPlane::init() {
    bool status = IfcElementarySurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPlane::copy(const IfcPlane &obj, const CopyOp &copyop) {
    IfcElementarySurface::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPlane::s_type("IfcPlane");
