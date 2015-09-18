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



#include <ifc2x3/IfcBoundedSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoundedSurface::IfcBoundedSurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
}

IfcBoundedSurface::~IfcBoundedSurface() {
}

bool IfcBoundedSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundedSurface(this);
}

const std::string &IfcBoundedSurface::type() const {
    return IfcBoundedSurface::s_type.getName();
}

const Step::ClassType &IfcBoundedSurface::getClassType() {
    return IfcBoundedSurface::s_type;
}

const Step::ClassType &IfcBoundedSurface::getType() const {
    return IfcBoundedSurface::s_type;
}

bool IfcBoundedSurface::isOfType(const Step::ClassType &t) const {
    return IfcBoundedSurface::s_type == t ? true : IfcSurface::isOfType(t);
}

bool IfcBoundedSurface::init() {
    bool status = IfcSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBoundedSurface::copy(const IfcBoundedSurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundedSurface::s_type("IfcBoundedSurface");
