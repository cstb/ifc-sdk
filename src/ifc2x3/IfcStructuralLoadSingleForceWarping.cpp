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



#include <ifc2x3/IfcStructuralLoadSingleForceWarping.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralLoadSingleForce.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadSingleForceWarping::IfcStructuralLoadSingleForceWarping(Step::Id id, Step::SPFData *args) : IfcStructuralLoadSingleForce(id, args) {
    m_warpingMoment = Step::getUnset(m_warpingMoment);
}

IfcStructuralLoadSingleForceWarping::~IfcStructuralLoadSingleForceWarping() {
}

bool IfcStructuralLoadSingleForceWarping::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadSingleForceWarping(this);
}

const std::string &IfcStructuralLoadSingleForceWarping::type() const {
    return IfcStructuralLoadSingleForceWarping::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadSingleForceWarping::getClassType() {
    return IfcStructuralLoadSingleForceWarping::s_type;
}

const Step::ClassType &IfcStructuralLoadSingleForceWarping::getType() const {
    return IfcStructuralLoadSingleForceWarping::s_type;
}

bool IfcStructuralLoadSingleForceWarping::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadSingleForceWarping::s_type == t ? true : IfcStructuralLoadSingleForce::isOfType(t);
}

IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment() {
    if (Step::BaseObject::inited()) {
        return m_warpingMoment;
    }
    else {
        return Step::getUnset(m_warpingMoment);
    }
}

const IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment() const {
    IfcStructuralLoadSingleForceWarping * deConstObject = const_cast< IfcStructuralLoadSingleForceWarping * > (this);
    return deConstObject->getWarpingMoment();
}

void IfcStructuralLoadSingleForceWarping::setWarpingMoment(IfcWarpingMomentMeasure value) {
    m_warpingMoment = value;
}

void IfcStructuralLoadSingleForceWarping::unsetWarpingMoment() {
    m_warpingMoment = Step::getUnset(getWarpingMoment());
}

bool IfcStructuralLoadSingleForceWarping::testWarpingMoment() const {
    return !Step::isUnset(getWarpingMoment());
}

bool IfcStructuralLoadSingleForceWarping::init() {
    bool status = IfcStructuralLoadSingleForce::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_warpingMoment = Step::getUnset(m_warpingMoment);
    }
    else {
        m_warpingMoment = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleForceWarping::copy(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleForce::copy(obj, copyop);
    setWarpingMoment(obj.m_warpingMoment);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadSingleForceWarping::s_type("IfcStructuralLoadSingleForceWarping");
