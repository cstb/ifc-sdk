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



#include <ifc2x3/IfcStructuralLoadSingleForce.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadSingleForce::IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_forceX = Step::getUnset(m_forceX);
    m_forceY = Step::getUnset(m_forceY);
    m_forceZ = Step::getUnset(m_forceZ);
    m_momentX = Step::getUnset(m_momentX);
    m_momentY = Step::getUnset(m_momentY);
    m_momentZ = Step::getUnset(m_momentZ);
}

IfcStructuralLoadSingleForce::~IfcStructuralLoadSingleForce() {
}

bool IfcStructuralLoadSingleForce::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadSingleForce(this);
}

const std::string &IfcStructuralLoadSingleForce::type() const {
    return IfcStructuralLoadSingleForce::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadSingleForce::getClassType() {
    return IfcStructuralLoadSingleForce::s_type;
}

const Step::ClassType &IfcStructuralLoadSingleForce::getType() const {
    return IfcStructuralLoadSingleForce::s_type;
}

bool IfcStructuralLoadSingleForce::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadSingleForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceX() {
    if (Step::BaseObject::inited()) {
        return m_forceX;
    }
    else {
        return Step::getUnset(m_forceX);
    }
}

const IfcForceMeasure IfcStructuralLoadSingleForce::getForceX() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getForceX();
}

void IfcStructuralLoadSingleForce::setForceX(IfcForceMeasure value) {
    m_forceX = value;
}

void IfcStructuralLoadSingleForce::unsetForceX() {
    m_forceX = Step::getUnset(getForceX());
}

bool IfcStructuralLoadSingleForce::testForceX() const {
    return !Step::isUnset(getForceX());
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceY() {
    if (Step::BaseObject::inited()) {
        return m_forceY;
    }
    else {
        return Step::getUnset(m_forceY);
    }
}

const IfcForceMeasure IfcStructuralLoadSingleForce::getForceY() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getForceY();
}

void IfcStructuralLoadSingleForce::setForceY(IfcForceMeasure value) {
    m_forceY = value;
}

void IfcStructuralLoadSingleForce::unsetForceY() {
    m_forceY = Step::getUnset(getForceY());
}

bool IfcStructuralLoadSingleForce::testForceY() const {
    return !Step::isUnset(getForceY());
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ() {
    if (Step::BaseObject::inited()) {
        return m_forceZ;
    }
    else {
        return Step::getUnset(m_forceZ);
    }
}

const IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getForceZ();
}

void IfcStructuralLoadSingleForce::setForceZ(IfcForceMeasure value) {
    m_forceZ = value;
}

void IfcStructuralLoadSingleForce::unsetForceZ() {
    m_forceZ = Step::getUnset(getForceZ());
}

bool IfcStructuralLoadSingleForce::testForceZ() const {
    return !Step::isUnset(getForceZ());
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX() {
    if (Step::BaseObject::inited()) {
        return m_momentX;
    }
    else {
        return Step::getUnset(m_momentX);
    }
}

const IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getMomentX();
}

void IfcStructuralLoadSingleForce::setMomentX(IfcTorqueMeasure value) {
    m_momentX = value;
}

void IfcStructuralLoadSingleForce::unsetMomentX() {
    m_momentX = Step::getUnset(getMomentX());
}

bool IfcStructuralLoadSingleForce::testMomentX() const {
    return !Step::isUnset(getMomentX());
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY() {
    if (Step::BaseObject::inited()) {
        return m_momentY;
    }
    else {
        return Step::getUnset(m_momentY);
    }
}

const IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getMomentY();
}

void IfcStructuralLoadSingleForce::setMomentY(IfcTorqueMeasure value) {
    m_momentY = value;
}

void IfcStructuralLoadSingleForce::unsetMomentY() {
    m_momentY = Step::getUnset(getMomentY());
}

bool IfcStructuralLoadSingleForce::testMomentY() const {
    return !Step::isUnset(getMomentY());
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ() {
    if (Step::BaseObject::inited()) {
        return m_momentZ;
    }
    else {
        return Step::getUnset(m_momentZ);
    }
}

const IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ() const {
    IfcStructuralLoadSingleForce * deConstObject = const_cast< IfcStructuralLoadSingleForce * > (this);
    return deConstObject->getMomentZ();
}

void IfcStructuralLoadSingleForce::setMomentZ(IfcTorqueMeasure value) {
    m_momentZ = value;
}

void IfcStructuralLoadSingleForce::unsetMomentZ() {
    m_momentZ = Step::getUnset(getMomentZ());
}

bool IfcStructuralLoadSingleForce::testMomentZ() const {
    return !Step::isUnset(getMomentZ());
}

bool IfcStructuralLoadSingleForce::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceX = Step::getUnset(m_forceX);
    }
    else {
        m_forceX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceY = Step::getUnset(m_forceY);
    }
    else {
        m_forceY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceZ = Step::getUnset(m_forceZ);
    }
    else {
        m_forceZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentX = Step::getUnset(m_momentX);
    }
    else {
        m_momentX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentY = Step::getUnset(m_momentY);
    }
    else {
        m_momentY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentZ = Step::getUnset(m_momentZ);
    }
    else {
        m_momentZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleForce::copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setForceX(obj.m_forceX);
    setForceY(obj.m_forceY);
    setForceZ(obj.m_forceZ);
    setMomentX(obj.m_momentX);
    setMomentY(obj.m_momentY);
    setMomentZ(obj.m_momentZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadSingleForce::s_type("IfcStructuralLoadSingleForce");
