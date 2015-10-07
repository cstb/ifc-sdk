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



#include <ifc2x3/IfcSlippageConnectionCondition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSlippageConnectionCondition::IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args) : IfcStructuralConnectionCondition(id, args) {
    m_slippageX = Step::getUnset(m_slippageX);
    m_slippageY = Step::getUnset(m_slippageY);
    m_slippageZ = Step::getUnset(m_slippageZ);
}

IfcSlippageConnectionCondition::~IfcSlippageConnectionCondition() {
}

bool IfcSlippageConnectionCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSlippageConnectionCondition(this);
}

const std::string &IfcSlippageConnectionCondition::type() const {
    return IfcSlippageConnectionCondition::s_type.getName();
}

const Step::ClassType &IfcSlippageConnectionCondition::getClassType() {
    return IfcSlippageConnectionCondition::s_type;
}

const Step::ClassType &IfcSlippageConnectionCondition::getType() const {
    return IfcSlippageConnectionCondition::s_type;
}

bool IfcSlippageConnectionCondition::isOfType(const Step::ClassType &t) const {
    return IfcSlippageConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX() {
    if (Step::BaseObject::inited()) {
        return m_slippageX;
    }
    else {
        return Step::getUnset(m_slippageX);
    }
}

const IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX() const {
    IfcSlippageConnectionCondition * deConstObject = const_cast< IfcSlippageConnectionCondition * > (this);
    return deConstObject->getSlippageX();
}

void IfcSlippageConnectionCondition::setSlippageX(IfcLengthMeasure value) {
    m_slippageX = value;
}

void IfcSlippageConnectionCondition::unsetSlippageX() {
    m_slippageX = Step::getUnset(getSlippageX());
}

bool IfcSlippageConnectionCondition::testSlippageX() const {
    return !Step::isUnset(getSlippageX());
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY() {
    if (Step::BaseObject::inited()) {
        return m_slippageY;
    }
    else {
        return Step::getUnset(m_slippageY);
    }
}

const IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY() const {
    IfcSlippageConnectionCondition * deConstObject = const_cast< IfcSlippageConnectionCondition * > (this);
    return deConstObject->getSlippageY();
}

void IfcSlippageConnectionCondition::setSlippageY(IfcLengthMeasure value) {
    m_slippageY = value;
}

void IfcSlippageConnectionCondition::unsetSlippageY() {
    m_slippageY = Step::getUnset(getSlippageY());
}

bool IfcSlippageConnectionCondition::testSlippageY() const {
    return !Step::isUnset(getSlippageY());
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ() {
    if (Step::BaseObject::inited()) {
        return m_slippageZ;
    }
    else {
        return Step::getUnset(m_slippageZ);
    }
}

const IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ() const {
    IfcSlippageConnectionCondition * deConstObject = const_cast< IfcSlippageConnectionCondition * > (this);
    return deConstObject->getSlippageZ();
}

void IfcSlippageConnectionCondition::setSlippageZ(IfcLengthMeasure value) {
    m_slippageZ = value;
}

void IfcSlippageConnectionCondition::unsetSlippageZ() {
    m_slippageZ = Step::getUnset(getSlippageZ());
}

bool IfcSlippageConnectionCondition::testSlippageZ() const {
    return !Step::isUnset(getSlippageZ());
}

bool IfcSlippageConnectionCondition::init() {
    bool status = IfcStructuralConnectionCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageX = Step::getUnset(m_slippageX);
    }
    else {
        m_slippageX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageY = Step::getUnset(m_slippageY);
    }
    else {
        m_slippageY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageZ = Step::getUnset(m_slippageZ);
    }
    else {
        m_slippageZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcSlippageConnectionCondition::copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop) {
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setSlippageX(obj.m_slippageX);
    setSlippageY(obj.m_slippageY);
    setSlippageZ(obj.m_slippageZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSlippageConnectionCondition::s_type("IfcSlippageConnectionCondition");
