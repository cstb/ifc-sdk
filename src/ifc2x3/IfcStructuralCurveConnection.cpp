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



#include <ifc2x3/IfcStructuralCurveConnection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralConnection.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralCurveConnection::IfcStructuralCurveConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralCurveConnection::~IfcStructuralCurveConnection() {
}

bool IfcStructuralCurveConnection::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralCurveConnection(this);
}

const std::string &IfcStructuralCurveConnection::type() const {
    return IfcStructuralCurveConnection::s_type.getName();
}

const Step::ClassType &IfcStructuralCurveConnection::getClassType() {
    return IfcStructuralCurveConnection::s_type;
}

const Step::ClassType &IfcStructuralCurveConnection::getType() const {
    return IfcStructuralCurveConnection::s_type;
}

bool IfcStructuralCurveConnection::isOfType(const Step::ClassType &t) const {
    return IfcStructuralCurveConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

bool IfcStructuralCurveConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralCurveConnection::copy(const IfcStructuralCurveConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralCurveConnection::s_type("IfcStructuralCurveConnection");
