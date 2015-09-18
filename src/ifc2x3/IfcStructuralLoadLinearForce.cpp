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



#include <ifc2x3/IfcStructuralLoadLinearForce.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadLinearForce::IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_linearForceX = Step::getUnset(m_linearForceX);
    m_linearForceY = Step::getUnset(m_linearForceY);
    m_linearForceZ = Step::getUnset(m_linearForceZ);
    m_linearMomentX = Step::getUnset(m_linearMomentX);
    m_linearMomentY = Step::getUnset(m_linearMomentY);
    m_linearMomentZ = Step::getUnset(m_linearMomentZ);
}

IfcStructuralLoadLinearForce::~IfcStructuralLoadLinearForce() {
}

bool IfcStructuralLoadLinearForce::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadLinearForce(this);
}

const std::string &IfcStructuralLoadLinearForce::type() const {
    return IfcStructuralLoadLinearForce::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadLinearForce::getClassType() {
    return IfcStructuralLoadLinearForce::s_type;
}

const Step::ClassType &IfcStructuralLoadLinearForce::getType() const {
    return IfcStructuralLoadLinearForce::s_type;
}

bool IfcStructuralLoadLinearForce::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadLinearForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX() {
    if (Step::BaseObject::inited()) {
        return m_linearForceX;
    }
    else {
        return Step::getUnset(m_linearForceX);
    }
}

const IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearForceX();
}

void IfcStructuralLoadLinearForce::setLinearForceX(IfcLinearForceMeasure value) {
    m_linearForceX = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceX() {
    m_linearForceX = Step::getUnset(getLinearForceX());
}

bool IfcStructuralLoadLinearForce::testLinearForceX() const {
    return !Step::isUnset(getLinearForceX());
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY() {
    if (Step::BaseObject::inited()) {
        return m_linearForceY;
    }
    else {
        return Step::getUnset(m_linearForceY);
    }
}

const IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearForceY();
}

void IfcStructuralLoadLinearForce::setLinearForceY(IfcLinearForceMeasure value) {
    m_linearForceY = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceY() {
    m_linearForceY = Step::getUnset(getLinearForceY());
}

bool IfcStructuralLoadLinearForce::testLinearForceY() const {
    return !Step::isUnset(getLinearForceY());
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ() {
    if (Step::BaseObject::inited()) {
        return m_linearForceZ;
    }
    else {
        return Step::getUnset(m_linearForceZ);
    }
}

const IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearForceZ();
}

void IfcStructuralLoadLinearForce::setLinearForceZ(IfcLinearForceMeasure value) {
    m_linearForceZ = value;
}

void IfcStructuralLoadLinearForce::unsetLinearForceZ() {
    m_linearForceZ = Step::getUnset(getLinearForceZ());
}

bool IfcStructuralLoadLinearForce::testLinearForceZ() const {
    return !Step::isUnset(getLinearForceZ());
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentX;
    }
    else {
        return Step::getUnset(m_linearMomentX);
    }
}

const IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearMomentX();
}

void IfcStructuralLoadLinearForce::setLinearMomentX(IfcLinearMomentMeasure value) {
    m_linearMomentX = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentX() {
    m_linearMomentX = Step::getUnset(getLinearMomentX());
}

bool IfcStructuralLoadLinearForce::testLinearMomentX() const {
    return !Step::isUnset(getLinearMomentX());
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentY;
    }
    else {
        return Step::getUnset(m_linearMomentY);
    }
}

const IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearMomentY();
}

void IfcStructuralLoadLinearForce::setLinearMomentY(IfcLinearMomentMeasure value) {
    m_linearMomentY = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentY() {
    m_linearMomentY = Step::getUnset(getLinearMomentY());
}

bool IfcStructuralLoadLinearForce::testLinearMomentY() const {
    return !Step::isUnset(getLinearMomentY());
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentZ;
    }
    else {
        return Step::getUnset(m_linearMomentZ);
    }
}

const IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ() const {
    IfcStructuralLoadLinearForce * deConstObject = const_cast< IfcStructuralLoadLinearForce * > (this);
    return deConstObject->getLinearMomentZ();
}

void IfcStructuralLoadLinearForce::setLinearMomentZ(IfcLinearMomentMeasure value) {
    m_linearMomentZ = value;
}

void IfcStructuralLoadLinearForce::unsetLinearMomentZ() {
    m_linearMomentZ = Step::getUnset(getLinearMomentZ());
}

bool IfcStructuralLoadLinearForce::testLinearMomentZ() const {
    return !Step::isUnset(getLinearMomentZ());
}

bool IfcStructuralLoadLinearForce::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceX = Step::getUnset(m_linearForceX);
    }
    else {
        m_linearForceX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceY = Step::getUnset(m_linearForceY);
    }
    else {
        m_linearForceY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceZ = Step::getUnset(m_linearForceZ);
    }
    else {
        m_linearForceZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentX = Step::getUnset(m_linearMomentX);
    }
    else {
        m_linearMomentX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentY = Step::getUnset(m_linearMomentY);
    }
    else {
        m_linearMomentY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentZ = Step::getUnset(m_linearMomentZ);
    }
    else {
        m_linearMomentZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadLinearForce::copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setLinearForceX(obj.m_linearForceX);
    setLinearForceY(obj.m_linearForceY);
    setLinearForceZ(obj.m_linearForceZ);
    setLinearMomentX(obj.m_linearMomentX);
    setLinearMomentY(obj.m_linearMomentY);
    setLinearMomentZ(obj.m_linearMomentZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadLinearForce::s_type("IfcStructuralLoadLinearForce");
