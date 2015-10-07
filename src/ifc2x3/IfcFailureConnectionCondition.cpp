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



#include <ifc2x3/IfcFailureConnectionCondition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralConnectionCondition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFailureConnectionCondition::IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args) : IfcStructuralConnectionCondition(id, args) {
    m_tensionFailureX = Step::getUnset(m_tensionFailureX);
    m_tensionFailureY = Step::getUnset(m_tensionFailureY);
    m_tensionFailureZ = Step::getUnset(m_tensionFailureZ);
    m_compressionFailureX = Step::getUnset(m_compressionFailureX);
    m_compressionFailureY = Step::getUnset(m_compressionFailureY);
    m_compressionFailureZ = Step::getUnset(m_compressionFailureZ);
}

IfcFailureConnectionCondition::~IfcFailureConnectionCondition() {
}

bool IfcFailureConnectionCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFailureConnectionCondition(this);
}

const std::string &IfcFailureConnectionCondition::type() const {
    return IfcFailureConnectionCondition::s_type.getName();
}

const Step::ClassType &IfcFailureConnectionCondition::getClassType() {
    return IfcFailureConnectionCondition::s_type;
}

const Step::ClassType &IfcFailureConnectionCondition::getType() const {
    return IfcFailureConnectionCondition::s_type;
}

bool IfcFailureConnectionCondition::isOfType(const Step::ClassType &t) const {
    return IfcFailureConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureX;
    }
    else {
        return Step::getUnset(m_tensionFailureX);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getTensionFailureX();
}

void IfcFailureConnectionCondition::setTensionFailureX(IfcForceMeasure value) {
    m_tensionFailureX = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureX() {
    m_tensionFailureX = Step::getUnset(getTensionFailureX());
}

bool IfcFailureConnectionCondition::testTensionFailureX() const {
    return !Step::isUnset(getTensionFailureX());
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureY;
    }
    else {
        return Step::getUnset(m_tensionFailureY);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getTensionFailureY();
}

void IfcFailureConnectionCondition::setTensionFailureY(IfcForceMeasure value) {
    m_tensionFailureY = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureY() {
    m_tensionFailureY = Step::getUnset(getTensionFailureY());
}

bool IfcFailureConnectionCondition::testTensionFailureY() const {
    return !Step::isUnset(getTensionFailureY());
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureZ;
    }
    else {
        return Step::getUnset(m_tensionFailureZ);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getTensionFailureZ();
}

void IfcFailureConnectionCondition::setTensionFailureZ(IfcForceMeasure value) {
    m_tensionFailureZ = value;
}

void IfcFailureConnectionCondition::unsetTensionFailureZ() {
    m_tensionFailureZ = Step::getUnset(getTensionFailureZ());
}

bool IfcFailureConnectionCondition::testTensionFailureZ() const {
    return !Step::isUnset(getTensionFailureZ());
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureX;
    }
    else {
        return Step::getUnset(m_compressionFailureX);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getCompressionFailureX();
}

void IfcFailureConnectionCondition::setCompressionFailureX(IfcForceMeasure value) {
    m_compressionFailureX = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureX() {
    m_compressionFailureX = Step::getUnset(getCompressionFailureX());
}

bool IfcFailureConnectionCondition::testCompressionFailureX() const {
    return !Step::isUnset(getCompressionFailureX());
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureY;
    }
    else {
        return Step::getUnset(m_compressionFailureY);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getCompressionFailureY();
}

void IfcFailureConnectionCondition::setCompressionFailureY(IfcForceMeasure value) {
    m_compressionFailureY = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureY() {
    m_compressionFailureY = Step::getUnset(getCompressionFailureY());
}

bool IfcFailureConnectionCondition::testCompressionFailureY() const {
    return !Step::isUnset(getCompressionFailureY());
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureZ;
    }
    else {
        return Step::getUnset(m_compressionFailureZ);
    }
}

const IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ() const {
    IfcFailureConnectionCondition * deConstObject = const_cast< IfcFailureConnectionCondition * > (this);
    return deConstObject->getCompressionFailureZ();
}

void IfcFailureConnectionCondition::setCompressionFailureZ(IfcForceMeasure value) {
    m_compressionFailureZ = value;
}

void IfcFailureConnectionCondition::unsetCompressionFailureZ() {
    m_compressionFailureZ = Step::getUnset(getCompressionFailureZ());
}

bool IfcFailureConnectionCondition::testCompressionFailureZ() const {
    return !Step::isUnset(getCompressionFailureZ());
}

bool IfcFailureConnectionCondition::init() {
    bool status = IfcStructuralConnectionCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureX = Step::getUnset(m_tensionFailureX);
    }
    else {
        m_tensionFailureX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureY = Step::getUnset(m_tensionFailureY);
    }
    else {
        m_tensionFailureY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureZ = Step::getUnset(m_tensionFailureZ);
    }
    else {
        m_tensionFailureZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureX = Step::getUnset(m_compressionFailureX);
    }
    else {
        m_compressionFailureX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureY = Step::getUnset(m_compressionFailureY);
    }
    else {
        m_compressionFailureY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureZ = Step::getUnset(m_compressionFailureZ);
    }
    else {
        m_compressionFailureZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcFailureConnectionCondition::copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop) {
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setTensionFailureX(obj.m_tensionFailureX);
    setTensionFailureY(obj.m_tensionFailureY);
    setTensionFailureZ(obj.m_tensionFailureZ);
    setCompressionFailureX(obj.m_compressionFailureX);
    setCompressionFailureY(obj.m_compressionFailureY);
    setCompressionFailureZ(obj.m_compressionFailureZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFailureConnectionCondition::s_type("IfcFailureConnectionCondition");
