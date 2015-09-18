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



#include <ifc2x3/IfcCostItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCostItem::IfcCostItem(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
}

IfcCostItem::~IfcCostItem() {
}

bool IfcCostItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCostItem(this);
}

const std::string &IfcCostItem::type() const {
    return IfcCostItem::s_type.getName();
}

const Step::ClassType &IfcCostItem::getClassType() {
    return IfcCostItem::s_type;
}

const Step::ClassType &IfcCostItem::getType() const {
    return IfcCostItem::s_type;
}

bool IfcCostItem::isOfType(const Step::ClassType &t) const {
    return IfcCostItem::s_type == t ? true : IfcControl::isOfType(t);
}

bool IfcCostItem::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCostItem::copy(const IfcCostItem &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCostItem::s_type("IfcCostItem");
