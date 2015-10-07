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



#include <ifc2x3/IfcBooleanClippingResult.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBooleanResult.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBooleanClippingResult::IfcBooleanClippingResult(Step::Id id, Step::SPFData *args) : IfcBooleanResult(id, args) {
}

IfcBooleanClippingResult::~IfcBooleanClippingResult() {
}

bool IfcBooleanClippingResult::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBooleanClippingResult(this);
}

const std::string &IfcBooleanClippingResult::type() const {
    return IfcBooleanClippingResult::s_type.getName();
}

const Step::ClassType &IfcBooleanClippingResult::getClassType() {
    return IfcBooleanClippingResult::s_type;
}

const Step::ClassType &IfcBooleanClippingResult::getType() const {
    return IfcBooleanClippingResult::s_type;
}

bool IfcBooleanClippingResult::isOfType(const Step::ClassType &t) const {
    return IfcBooleanClippingResult::s_type == t ? true : IfcBooleanResult::isOfType(t);
}

bool IfcBooleanClippingResult::init() {
    bool status = IfcBooleanResult::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBooleanClippingResult::copy(const IfcBooleanClippingResult &obj, const CopyOp &copyop) {
    IfcBooleanResult::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBooleanClippingResult::s_type("IfcBooleanClippingResult");
