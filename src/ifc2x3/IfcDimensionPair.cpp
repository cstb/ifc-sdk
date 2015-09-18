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



#include <ifc2x3/IfcDimensionPair.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDimensionPair::IfcDimensionPair(Step::Id id, Step::SPFData *args) : IfcDraughtingCalloutRelationship(id, args) {
}

IfcDimensionPair::~IfcDimensionPair() {
}

bool IfcDimensionPair::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionPair(this);
}

const std::string &IfcDimensionPair::type() const {
    return IfcDimensionPair::s_type.getName();
}

const Step::ClassType &IfcDimensionPair::getClassType() {
    return IfcDimensionPair::s_type;
}

const Step::ClassType &IfcDimensionPair::getType() const {
    return IfcDimensionPair::s_type;
}

bool IfcDimensionPair::isOfType(const Step::ClassType &t) const {
    return IfcDimensionPair::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

bool IfcDimensionPair::init() {
    bool status = IfcDraughtingCalloutRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionPair::copy(const IfcDimensionPair &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDimensionPair::s_type("IfcDimensionPair");
