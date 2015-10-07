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



#include <ifc2x3/Ifc2DCompositeCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Ifc2DCompositeCurve::Ifc2DCompositeCurve(Step::Id id, Step::SPFData *args) : IfcCompositeCurve(id, args) {
}

Ifc2DCompositeCurve::~Ifc2DCompositeCurve() {
}

bool Ifc2DCompositeCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfc2DCompositeCurve(this);
}

const std::string &Ifc2DCompositeCurve::type() const {
    return Ifc2DCompositeCurve::s_type.getName();
}

const Step::ClassType &Ifc2DCompositeCurve::getClassType() {
    return Ifc2DCompositeCurve::s_type;
}

const Step::ClassType &Ifc2DCompositeCurve::getType() const {
    return Ifc2DCompositeCurve::s_type;
}

bool Ifc2DCompositeCurve::isOfType(const Step::ClassType &t) const {
    return Ifc2DCompositeCurve::s_type == t ? true : IfcCompositeCurve::isOfType(t);
}

bool Ifc2DCompositeCurve::init() {
    bool status = IfcCompositeCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void Ifc2DCompositeCurve::copy(const Ifc2DCompositeCurve &obj, const CopyOp &copyop) {
    IfcCompositeCurve::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType Ifc2DCompositeCurve::s_type("Ifc2DCompositeCurve");
