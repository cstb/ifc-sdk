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



#include <ifc2x3/IfcBoundaryEdgeCondition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoundaryEdgeCondition::IfcBoundaryEdgeCondition(Step::Id id, Step::SPFData *args) : IfcBoundaryCondition(id, args) {
    m_linearStiffnessByLengthX = Step::getUnset(m_linearStiffnessByLengthX);
    m_linearStiffnessByLengthY = Step::getUnset(m_linearStiffnessByLengthY);
    m_linearStiffnessByLengthZ = Step::getUnset(m_linearStiffnessByLengthZ);
    m_rotationalStiffnessByLengthX = Step::getUnset(m_rotationalStiffnessByLengthX);
    m_rotationalStiffnessByLengthY = Step::getUnset(m_rotationalStiffnessByLengthY);
    m_rotationalStiffnessByLengthZ = Step::getUnset(m_rotationalStiffnessByLengthZ);
}

IfcBoundaryEdgeCondition::~IfcBoundaryEdgeCondition() {
}

bool IfcBoundaryEdgeCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryEdgeCondition(this);
}

const std::string &IfcBoundaryEdgeCondition::type() const {
    return IfcBoundaryEdgeCondition::s_type.getName();
}

const Step::ClassType &IfcBoundaryEdgeCondition::getClassType() {
    return IfcBoundaryEdgeCondition::s_type;
}

const Step::ClassType &IfcBoundaryEdgeCondition::getType() const {
    return IfcBoundaryEdgeCondition::s_type;
}

bool IfcBoundaryEdgeCondition::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryEdgeCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthX;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthX);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthX() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthX(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthX = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthX() {
    m_linearStiffnessByLengthX = Step::getUnset(getLinearStiffnessByLengthX());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthX() const {
    return !Step::isUnset(getLinearStiffnessByLengthX());
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthY;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthY);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthY() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthY(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthY = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthY() {
    m_linearStiffnessByLengthY = Step::getUnset(getLinearStiffnessByLengthY());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthY() const {
    return !Step::isUnset(getLinearStiffnessByLengthY());
}

IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByLengthZ;
    }
    else {
        return Step::getUnset(m_linearStiffnessByLengthZ);
    }
}

const IfcModulusOfLinearSubgradeReactionMeasure IfcBoundaryEdgeCondition::getLinearStiffnessByLengthZ() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getLinearStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setLinearStiffnessByLengthZ(IfcModulusOfLinearSubgradeReactionMeasure value) {
    m_linearStiffnessByLengthZ = value;
}

void IfcBoundaryEdgeCondition::unsetLinearStiffnessByLengthZ() {
    m_linearStiffnessByLengthZ = Step::getUnset(getLinearStiffnessByLengthZ());
}

bool IfcBoundaryEdgeCondition::testLinearStiffnessByLengthZ() const {
    return !Step::isUnset(getLinearStiffnessByLengthZ());
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthX;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthX);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthX() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthX();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthX(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthX = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthX() {
    m_rotationalStiffnessByLengthX = Step::getUnset(getRotationalStiffnessByLengthX());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthX() const {
    return !Step::isUnset(getRotationalStiffnessByLengthX());
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthY;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthY);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthY() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthY();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthY(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthY = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthY() {
    m_rotationalStiffnessByLengthY = Step::getUnset(getRotationalStiffnessByLengthY());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthY() const {
    return !Step::isUnset(getRotationalStiffnessByLengthY());
}

IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessByLengthZ;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessByLengthZ);
    }
}

const IfcModulusOfRotationalSubgradeReactionMeasure IfcBoundaryEdgeCondition::getRotationalStiffnessByLengthZ() const {
    IfcBoundaryEdgeCondition * deConstObject = const_cast< IfcBoundaryEdgeCondition * > (this);
    return deConstObject->getRotationalStiffnessByLengthZ();
}

void IfcBoundaryEdgeCondition::setRotationalStiffnessByLengthZ(IfcModulusOfRotationalSubgradeReactionMeasure value) {
    m_rotationalStiffnessByLengthZ = value;
}

void IfcBoundaryEdgeCondition::unsetRotationalStiffnessByLengthZ() {
    m_rotationalStiffnessByLengthZ = Step::getUnset(getRotationalStiffnessByLengthZ());
}

bool IfcBoundaryEdgeCondition::testRotationalStiffnessByLengthZ() const {
    return !Step::isUnset(getRotationalStiffnessByLengthZ());
}

bool IfcBoundaryEdgeCondition::init() {
    bool status = IfcBoundaryCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthX = Step::getUnset(m_linearStiffnessByLengthX);
    }
    else {
        m_linearStiffnessByLengthX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthY = Step::getUnset(m_linearStiffnessByLengthY);
    }
    else {
        m_linearStiffnessByLengthY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByLengthZ = Step::getUnset(m_linearStiffnessByLengthZ);
    }
    else {
        m_linearStiffnessByLengthZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthX = Step::getUnset(m_rotationalStiffnessByLengthX);
    }
    else {
        m_rotationalStiffnessByLengthX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthY = Step::getUnset(m_rotationalStiffnessByLengthY);
    }
    else {
        m_rotationalStiffnessByLengthY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessByLengthZ = Step::getUnset(m_rotationalStiffnessByLengthZ);
    }
    else {
        m_rotationalStiffnessByLengthZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryEdgeCondition::copy(const IfcBoundaryEdgeCondition &obj, const CopyOp &copyop) {
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByLengthX(obj.m_linearStiffnessByLengthX);
    setLinearStiffnessByLengthY(obj.m_linearStiffnessByLengthY);
    setLinearStiffnessByLengthZ(obj.m_linearStiffnessByLengthZ);
    setRotationalStiffnessByLengthX(obj.m_rotationalStiffnessByLengthX);
    setRotationalStiffnessByLengthY(obj.m_rotationalStiffnessByLengthY);
    setRotationalStiffnessByLengthZ(obj.m_rotationalStiffnessByLengthZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundaryEdgeCondition::s_type("IfcBoundaryEdgeCondition");
