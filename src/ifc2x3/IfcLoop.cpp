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



#include <ifc2x3/IfcLoop.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLoop::IfcLoop(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcLoop::~IfcLoop() {
}

bool IfcLoop::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLoop(this);
}

const std::string &IfcLoop::type() const {
    return IfcLoop::s_type.getName();
}

const Step::ClassType &IfcLoop::getClassType() {
    return IfcLoop::s_type;
}

const Step::ClassType &IfcLoop::getType() const {
    return IfcLoop::s_type;
}

bool IfcLoop::isOfType(const Step::ClassType &t) const {
    return IfcLoop::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

bool IfcLoop::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcLoop::copy(const IfcLoop &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLoop::s_type("IfcLoop");
