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



#include <ifc2x3/IfcStructuralPlanarAction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralPlanarAction::IfcStructuralPlanarAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

IfcStructuralPlanarAction::~IfcStructuralPlanarAction() {
}

bool IfcStructuralPlanarAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralPlanarAction(this);
}

const std::string &IfcStructuralPlanarAction::type() const {
    return IfcStructuralPlanarAction::s_type.getName();
}

const Step::ClassType &IfcStructuralPlanarAction::getClassType() {
    return IfcStructuralPlanarAction::s_type;
}

const Step::ClassType &IfcStructuralPlanarAction::getType() const {
    return IfcStructuralPlanarAction::s_type;
}

bool IfcStructuralPlanarAction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralPlanarAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralPlanarAction::getProjectedOrTrue() {
    if (Step::BaseObject::inited()) {
        return m_projectedOrTrue;
    }
    else {
        return IfcProjectedOrTrueLengthEnum_UNSET;
    }
}

const IfcProjectedOrTrueLengthEnum IfcStructuralPlanarAction::getProjectedOrTrue() const {
    IfcStructuralPlanarAction * deConstObject = const_cast< IfcStructuralPlanarAction * > (this);
    return deConstObject->getProjectedOrTrue();
}

void IfcStructuralPlanarAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
    m_projectedOrTrue = value;
}

void IfcStructuralPlanarAction::unsetProjectedOrTrue() {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

bool IfcStructuralPlanarAction::testProjectedOrTrue() const {
    return getProjectedOrTrue() != IfcProjectedOrTrueLengthEnum_UNSET;
}

bool IfcStructuralPlanarAction::init() {
    bool status = IfcStructuralAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
    }
    else {
        if (arg == ".PROJECTED_LENGTH.") {
            m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_PROJECTED_LENGTH;
        }
        else if (arg == ".TRUE_LENGTH.") {
            m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_TRUE_LENGTH;
        }
    }
    return true;
}

void IfcStructuralPlanarAction::copy(const IfcStructuralPlanarAction &obj, const CopyOp &copyop) {
    IfcStructuralAction::copy(obj, copyop);
    setProjectedOrTrue(obj.m_projectedOrTrue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralPlanarAction::s_type("IfcStructuralPlanarAction");
