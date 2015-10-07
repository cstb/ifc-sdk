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



#include <ifc2x3/IfcDimensionCurveTerminator.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTerminatorSymbol.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDimensionCurveTerminator::IfcDimensionCurveTerminator(Step::Id id, Step::SPFData *args) : IfcTerminatorSymbol(id, args) {
    m_role = IfcDimensionExtentUsage_UNSET;
}

IfcDimensionCurveTerminator::~IfcDimensionCurveTerminator() {
}

bool IfcDimensionCurveTerminator::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDimensionCurveTerminator(this);
}

const std::string &IfcDimensionCurveTerminator::type() const {
    return IfcDimensionCurveTerminator::s_type.getName();
}

const Step::ClassType &IfcDimensionCurveTerminator::getClassType() {
    return IfcDimensionCurveTerminator::s_type;
}

const Step::ClassType &IfcDimensionCurveTerminator::getType() const {
    return IfcDimensionCurveTerminator::s_type;
}

bool IfcDimensionCurveTerminator::isOfType(const Step::ClassType &t) const {
    return IfcDimensionCurveTerminator::s_type == t ? true : IfcTerminatorSymbol::isOfType(t);
}

IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole() {
    if (Step::BaseObject::inited()) {
        return m_role;
    }
    else {
        return IfcDimensionExtentUsage_UNSET;
    }
}

const IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole() const {
    IfcDimensionCurveTerminator * deConstObject = const_cast< IfcDimensionCurveTerminator * > (this);
    return deConstObject->getRole();
}

void IfcDimensionCurveTerminator::setRole(IfcDimensionExtentUsage value) {
    m_role = value;
}

void IfcDimensionCurveTerminator::unsetRole() {
    m_role = IfcDimensionExtentUsage_UNSET;
}

bool IfcDimensionCurveTerminator::testRole() const {
    return getRole() != IfcDimensionExtentUsage_UNSET;
}

bool IfcDimensionCurveTerminator::init() {
    bool status = IfcTerminatorSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_role = IfcDimensionExtentUsage_UNSET;
    }
    else {
        if (arg == ".ORIGIN.") {
            m_role = IfcDimensionExtentUsage_ORIGIN;
        }
        else if (arg == ".TARGET.") {
            m_role = IfcDimensionExtentUsage_TARGET;
        }
    }
    return true;
}

void IfcDimensionCurveTerminator::copy(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop) {
    IfcTerminatorSymbol::copy(obj, copyop);
    setRole(obj.m_role);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDimensionCurveTerminator::s_type("IfcDimensionCurveTerminator");
