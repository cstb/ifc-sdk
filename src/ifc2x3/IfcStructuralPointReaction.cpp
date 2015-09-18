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



#include <ifc2x3/IfcStructuralPointReaction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralReaction.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralPointReaction::IfcStructuralPointReaction(Step::Id id, Step::SPFData *args) : IfcStructuralReaction(id, args) {
}

IfcStructuralPointReaction::~IfcStructuralPointReaction() {
}

bool IfcStructuralPointReaction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPointReaction(this);
}

const std::string &IfcStructuralPointReaction::type() const {
    return IfcStructuralPointReaction::s_type.getName();
}

const Step::ClassType &IfcStructuralPointReaction::getClassType() {
    return IfcStructuralPointReaction::s_type;
}

const Step::ClassType &IfcStructuralPointReaction::getType() const {
    return IfcStructuralPointReaction::s_type;
}

bool IfcStructuralPointReaction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralPointReaction::s_type == t ? true : IfcStructuralReaction::isOfType(t);
}

bool IfcStructuralPointReaction::init() {
    bool status = IfcStructuralReaction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralPointReaction::copy(const IfcStructuralPointReaction &obj, const CopyOp &copyop) {
    IfcStructuralReaction::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralPointReaction::s_type("IfcStructuralPointReaction");
