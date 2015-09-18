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



#include <ifc2x3/IfcStyleModel.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStyleModel::IfcStyleModel(Step::Id id, Step::SPFData *args) : IfcRepresentation(id, args) {
}

IfcStyleModel::~IfcStyleModel() {
}

bool IfcStyleModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStyleModel(this);
}

const std::string &IfcStyleModel::type() const {
    return IfcStyleModel::s_type.getName();
}

const Step::ClassType &IfcStyleModel::getClassType() {
    return IfcStyleModel::s_type;
}

const Step::ClassType &IfcStyleModel::getType() const {
    return IfcStyleModel::s_type;
}

bool IfcStyleModel::isOfType(const Step::ClassType &t) const {
    return IfcStyleModel::s_type == t ? true : IfcRepresentation::isOfType(t);
}

bool IfcStyleModel::init() {
    bool status = IfcRepresentation::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStyleModel::copy(const IfcStyleModel &obj, const CopyOp &copyop) {
    IfcRepresentation::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStyleModel::s_type("IfcStyleModel");
