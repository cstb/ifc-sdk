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



#include <ifc2x3/IfcStructuralLinearAction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLinearAction::IfcStructuralLinearAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

IfcStructuralLinearAction::~IfcStructuralLinearAction() {
}

bool IfcStructuralLinearAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLinearAction(this);
}

const std::string &IfcStructuralLinearAction::type() const {
    return IfcStructuralLinearAction::s_type.getName();
}

const Step::ClassType &IfcStructuralLinearAction::getClassType() {
    return IfcStructuralLinearAction::s_type;
}

const Step::ClassType &IfcStructuralLinearAction::getType() const {
    return IfcStructuralLinearAction::s_type;
}

bool IfcStructuralLinearAction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLinearAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue() {
    if (Step::BaseObject::inited()) {
        return m_projectedOrTrue;
    }
    else {
        return IfcProjectedOrTrueLengthEnum_UNSET;
    }
}

const IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue() const {
    IfcStructuralLinearAction * deConstObject = const_cast< IfcStructuralLinearAction * > (this);
    return deConstObject->getProjectedOrTrue();
}

void IfcStructuralLinearAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
    m_projectedOrTrue = value;
}

void IfcStructuralLinearAction::unsetProjectedOrTrue() {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

bool IfcStructuralLinearAction::testProjectedOrTrue() const {
    return getProjectedOrTrue() != IfcProjectedOrTrueLengthEnum_UNSET;
}

bool IfcStructuralLinearAction::init() {
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

void IfcStructuralLinearAction::copy(const IfcStructuralLinearAction &obj, const CopyOp &copyop) {
    IfcStructuralAction::copy(obj, copyop);
    setProjectedOrTrue(obj.m_projectedOrTrue);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLinearAction::s_type("IfcStructuralLinearAction");
