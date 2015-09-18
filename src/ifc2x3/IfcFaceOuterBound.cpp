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



#include <ifc2x3/IfcFaceOuterBound.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFaceBound.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFaceOuterBound::IfcFaceOuterBound(Step::Id id, Step::SPFData *args) : IfcFaceBound(id, args) {
}

IfcFaceOuterBound::~IfcFaceOuterBound() {
}

bool IfcFaceOuterBound::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceOuterBound(this);
}

const std::string &IfcFaceOuterBound::type() const {
    return IfcFaceOuterBound::s_type.getName();
}

const Step::ClassType &IfcFaceOuterBound::getClassType() {
    return IfcFaceOuterBound::s_type;
}

const Step::ClassType &IfcFaceOuterBound::getType() const {
    return IfcFaceOuterBound::s_type;
}

bool IfcFaceOuterBound::isOfType(const Step::ClassType &t) const {
    return IfcFaceOuterBound::s_type == t ? true : IfcFaceBound::isOfType(t);
}

bool IfcFaceOuterBound::init() {
    bool status = IfcFaceBound::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFaceOuterBound::copy(const IfcFaceOuterBound &obj, const CopyOp &copyop) {
    IfcFaceBound::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFaceOuterBound::s_type("IfcFaceOuterBound");
