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



#include <ifc2x3/IfcDraughtingPreDefinedColour.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDraughtingPreDefinedColour::IfcDraughtingPreDefinedColour(Step::Id id, Step::SPFData *args) : IfcPreDefinedColour(id, args) {
}

IfcDraughtingPreDefinedColour::~IfcDraughtingPreDefinedColour() {
}

bool IfcDraughtingPreDefinedColour::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingPreDefinedColour(this);
}

const std::string &IfcDraughtingPreDefinedColour::type() const {
    return IfcDraughtingPreDefinedColour::s_type.getName();
}

const Step::ClassType &IfcDraughtingPreDefinedColour::getClassType() {
    return IfcDraughtingPreDefinedColour::s_type;
}

const Step::ClassType &IfcDraughtingPreDefinedColour::getType() const {
    return IfcDraughtingPreDefinedColour::s_type;
}

bool IfcDraughtingPreDefinedColour::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingPreDefinedColour::s_type == t ? true : IfcPreDefinedColour::isOfType(t);
}

bool IfcDraughtingPreDefinedColour::init() {
    bool status = IfcPreDefinedColour::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedColour::copy(const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop) {
    IfcPreDefinedColour::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDraughtingPreDefinedColour::s_type("IfcDraughtingPreDefinedColour");
