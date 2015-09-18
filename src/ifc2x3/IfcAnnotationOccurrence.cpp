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



#include <ifc2x3/IfcAnnotationOccurrence.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcAnnotationOccurrence::IfcAnnotationOccurrence(Step::Id id, Step::SPFData *args) : IfcStyledItem(id, args) {
}

IfcAnnotationOccurrence::~IfcAnnotationOccurrence() {
}

bool IfcAnnotationOccurrence::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationOccurrence(this);
}

const std::string &IfcAnnotationOccurrence::type() const {
    return IfcAnnotationOccurrence::s_type.getName();
}

const Step::ClassType &IfcAnnotationOccurrence::getClassType() {
    return IfcAnnotationOccurrence::s_type;
}

const Step::ClassType &IfcAnnotationOccurrence::getType() const {
    return IfcAnnotationOccurrence::s_type;
}

bool IfcAnnotationOccurrence::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationOccurrence::s_type == t ? true : IfcStyledItem::isOfType(t);
}

bool IfcAnnotationOccurrence::init() {
    bool status = IfcStyledItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationOccurrence::copy(const IfcAnnotationOccurrence &obj, const CopyOp &copyop) {
    IfcStyledItem::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAnnotationOccurrence::s_type("IfcAnnotationOccurrence");
