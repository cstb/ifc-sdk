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



#include <ifc2x3/IfcOpenShell.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectedFaceSet.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcOpenShell::IfcOpenShell(Step::Id id, Step::SPFData *args) : IfcConnectedFaceSet(id, args) {
}

IfcOpenShell::~IfcOpenShell() {
}

bool IfcOpenShell::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpenShell(this);
}

const std::string &IfcOpenShell::type() const {
    return IfcOpenShell::s_type.getName();
}

const Step::ClassType &IfcOpenShell::getClassType() {
    return IfcOpenShell::s_type;
}

const Step::ClassType &IfcOpenShell::getType() const {
    return IfcOpenShell::s_type;
}

bool IfcOpenShell::isOfType(const Step::ClassType &t) const {
    return IfcOpenShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
}

bool IfcOpenShell::init() {
    bool status = IfcConnectedFaceSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcOpenShell::copy(const IfcOpenShell &obj, const CopyOp &copyop) {
    IfcConnectedFaceSet::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOpenShell::s_type("IfcOpenShell");
