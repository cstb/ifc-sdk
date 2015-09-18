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



#include <ifc2x3/IfcSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurface::IfcSurface(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcSurface::~IfcSurface() {
}

bool IfcSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurface(this);
}

const std::string &IfcSurface::type() const {
    return IfcSurface::s_type.getName();
}

const Step::ClassType &IfcSurface::getClassType() {
    return IfcSurface::s_type;
}

const Step::ClassType &IfcSurface::getType() const {
    return IfcSurface::s_type;
}

bool IfcSurface::isOfType(const Step::ClassType &t) const {
    return IfcSurface::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

bool IfcSurface::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSurface::copy(const IfcSurface &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurface::s_type("IfcSurface");
