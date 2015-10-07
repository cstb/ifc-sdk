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



#include <ifc2x3/IfcBoundaryNodeConditionWarping.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundaryNodeCondition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoundaryNodeConditionWarping::IfcBoundaryNodeConditionWarping(Step::Id id, Step::SPFData *args) : IfcBoundaryNodeCondition(id, args) {
    m_warpingStiffness = Step::getUnset(m_warpingStiffness);
}

IfcBoundaryNodeConditionWarping::~IfcBoundaryNodeConditionWarping() {
}

bool IfcBoundaryNodeConditionWarping::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryNodeConditionWarping(this);
}

const std::string &IfcBoundaryNodeConditionWarping::type() const {
    return IfcBoundaryNodeConditionWarping::s_type.getName();
}

const Step::ClassType &IfcBoundaryNodeConditionWarping::getClassType() {
    return IfcBoundaryNodeConditionWarping::s_type;
}

const Step::ClassType &IfcBoundaryNodeConditionWarping::getType() const {
    return IfcBoundaryNodeConditionWarping::s_type;
}

bool IfcBoundaryNodeConditionWarping::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryNodeConditionWarping::s_type == t ? true : IfcBoundaryNodeCondition::isOfType(t);
}

IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness() {
    if (Step::BaseObject::inited()) {
        return m_warpingStiffness;
    }
    else {
        return Step::getUnset(m_warpingStiffness);
    }
}

const IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness() const {
    IfcBoundaryNodeConditionWarping * deConstObject = const_cast< IfcBoundaryNodeConditionWarping * > (this);
    return deConstObject->getWarpingStiffness();
}

void IfcBoundaryNodeConditionWarping::setWarpingStiffness(IfcWarpingMomentMeasure value) {
    m_warpingStiffness = value;
}

void IfcBoundaryNodeConditionWarping::unsetWarpingStiffness() {
    m_warpingStiffness = Step::getUnset(getWarpingStiffness());
}

bool IfcBoundaryNodeConditionWarping::testWarpingStiffness() const {
    return !Step::isUnset(getWarpingStiffness());
}

bool IfcBoundaryNodeConditionWarping::init() {
    bool status = IfcBoundaryNodeCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_warpingStiffness = Step::getUnset(m_warpingStiffness);
    }
    else {
        m_warpingStiffness = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryNodeConditionWarping::copy(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop) {
    IfcBoundaryNodeCondition::copy(obj, copyop);
    setWarpingStiffness(obj.m_warpingStiffness);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundaryNodeConditionWarping::s_type("IfcBoundaryNodeConditionWarping");
