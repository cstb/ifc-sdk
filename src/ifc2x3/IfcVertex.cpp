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



#include <ifc2x3/IfcVertex.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcVertex::IfcVertex(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcVertex::~IfcVertex() {
}

bool IfcVertex::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVertex(this);
}

const std::string &IfcVertex::type() const {
    return IfcVertex::s_type.getName();
}

const Step::ClassType &IfcVertex::getClassType() {
    return IfcVertex::s_type;
}

const Step::ClassType &IfcVertex::getType() const {
    return IfcVertex::s_type;
}

bool IfcVertex::isOfType(const Step::ClassType &t) const {
    return IfcVertex::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

bool IfcVertex::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcVertex::copy(const IfcVertex &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcVertex::s_type("IfcVertex");
