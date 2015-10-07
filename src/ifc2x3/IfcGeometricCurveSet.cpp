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



#include <ifc2x3/IfcGeometricCurveSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricSet.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGeometricCurveSet::IfcGeometricCurveSet(Step::Id id, Step::SPFData *args) : IfcGeometricSet(id, args) {
}

IfcGeometricCurveSet::~IfcGeometricCurveSet() {
}

bool IfcGeometricCurveSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricCurveSet(this);
}

const std::string &IfcGeometricCurveSet::type() const {
    return IfcGeometricCurveSet::s_type.getName();
}

const Step::ClassType &IfcGeometricCurveSet::getClassType() {
    return IfcGeometricCurveSet::s_type;
}

const Step::ClassType &IfcGeometricCurveSet::getType() const {
    return IfcGeometricCurveSet::s_type;
}

bool IfcGeometricCurveSet::isOfType(const Step::ClassType &t) const {
    return IfcGeometricCurveSet::s_type == t ? true : IfcGeometricSet::isOfType(t);
}

bool IfcGeometricCurveSet::init() {
    bool status = IfcGeometricSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcGeometricCurveSet::copy(const IfcGeometricCurveSet &obj, const CopyOp &copyop) {
    IfcGeometricSet::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGeometricCurveSet::s_type("IfcGeometricCurveSet");
