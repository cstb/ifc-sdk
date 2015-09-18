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



#include <ifc2x3/IfcCrewResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstructionResource.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCrewResource::IfcCrewResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
}

IfcCrewResource::~IfcCrewResource() {
}

bool IfcCrewResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCrewResource(this);
}

const std::string &IfcCrewResource::type() const {
    return IfcCrewResource::s_type.getName();
}

const Step::ClassType &IfcCrewResource::getClassType() {
    return IfcCrewResource::s_type;
}

const Step::ClassType &IfcCrewResource::getType() const {
    return IfcCrewResource::s_type;
}

bool IfcCrewResource::isOfType(const Step::ClassType &t) const {
    return IfcCrewResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

bool IfcCrewResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCrewResource::copy(const IfcCrewResource &obj, const CopyOp &copyop) {
    IfcConstructionResource::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCrewResource::s_type("IfcCrewResource");
