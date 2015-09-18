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



#include <ifc2x3/IfcPreDefinedPointMarkerSymbol.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPreDefinedSymbol.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPreDefinedPointMarkerSymbol::IfcPreDefinedPointMarkerSymbol(Step::Id id, Step::SPFData *args) : IfcPreDefinedSymbol(id, args) {
}

IfcPreDefinedPointMarkerSymbol::~IfcPreDefinedPointMarkerSymbol() {
}

bool IfcPreDefinedPointMarkerSymbol::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPreDefinedPointMarkerSymbol(this);
}

const std::string &IfcPreDefinedPointMarkerSymbol::type() const {
    return IfcPreDefinedPointMarkerSymbol::s_type.getName();
}

const Step::ClassType &IfcPreDefinedPointMarkerSymbol::getClassType() {
    return IfcPreDefinedPointMarkerSymbol::s_type;
}

const Step::ClassType &IfcPreDefinedPointMarkerSymbol::getType() const {
    return IfcPreDefinedPointMarkerSymbol::s_type;
}

bool IfcPreDefinedPointMarkerSymbol::isOfType(const Step::ClassType &t) const {
    return IfcPreDefinedPointMarkerSymbol::s_type == t ? true : IfcPreDefinedSymbol::isOfType(t);
}

bool IfcPreDefinedPointMarkerSymbol::init() {
    bool status = IfcPreDefinedSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcPreDefinedPointMarkerSymbol::copy(const IfcPreDefinedPointMarkerSymbol &obj, const CopyOp &copyop) {
    IfcPreDefinedSymbol::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPreDefinedPointMarkerSymbol::s_type("IfcPreDefinedPointMarkerSymbol");
