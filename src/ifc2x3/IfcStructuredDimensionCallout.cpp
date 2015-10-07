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



#include <ifc2x3/IfcStructuredDimensionCallout.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDraughtingCallout.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuredDimensionCallout::IfcStructuredDimensionCallout(Step::Id id, Step::SPFData *args) : IfcDraughtingCallout(id, args) {
}

IfcStructuredDimensionCallout::~IfcStructuredDimensionCallout() {
}

bool IfcStructuredDimensionCallout::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuredDimensionCallout(this);
}

const std::string &IfcStructuredDimensionCallout::type() const {
    return IfcStructuredDimensionCallout::s_type.getName();
}

const Step::ClassType &IfcStructuredDimensionCallout::getClassType() {
    return IfcStructuredDimensionCallout::s_type;
}

const Step::ClassType &IfcStructuredDimensionCallout::getType() const {
    return IfcStructuredDimensionCallout::s_type;
}

bool IfcStructuredDimensionCallout::isOfType(const Step::ClassType &t) const {
    return IfcStructuredDimensionCallout::s_type == t ? true : IfcDraughtingCallout::isOfType(t);
}

bool IfcStructuredDimensionCallout::init() {
    bool status = IfcDraughtingCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuredDimensionCallout::copy(const IfcStructuredDimensionCallout &obj, const CopyOp &copyop) {
    IfcDraughtingCallout::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuredDimensionCallout::s_type("IfcStructuredDimensionCallout");
