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



#include <ifc2x3/IfcBoundaryFaceCondition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoundaryFaceCondition::IfcBoundaryFaceCondition(Step::Id id, Step::SPFData *args) : IfcBoundaryCondition(id, args) {
    m_linearStiffnessByAreaX = Step::getUnset(m_linearStiffnessByAreaX);
    m_linearStiffnessByAreaY = Step::getUnset(m_linearStiffnessByAreaY);
    m_linearStiffnessByAreaZ = Step::getUnset(m_linearStiffnessByAreaZ);
}

IfcBoundaryFaceCondition::~IfcBoundaryFaceCondition() {
}

bool IfcBoundaryFaceCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryFaceCondition(this);
}

const std::string &IfcBoundaryFaceCondition::type() const {
    return IfcBoundaryFaceCondition::s_type.getName();
}

const Step::ClassType &IfcBoundaryFaceCondition::getClassType() {
    return IfcBoundaryFaceCondition::s_type;
}

const Step::ClassType &IfcBoundaryFaceCondition::getType() const {
    return IfcBoundaryFaceCondition::s_type;
}

bool IfcBoundaryFaceCondition::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryFaceCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaX;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaX);
    }
}

const IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX() const {
    IfcBoundaryFaceCondition * deConstObject = const_cast< IfcBoundaryFaceCondition * > (this);
    return deConstObject->getLinearStiffnessByAreaX();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaX = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaX() {
    m_linearStiffnessByAreaX = Step::getUnset(getLinearStiffnessByAreaX());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaX() const {
    return !Step::isUnset(getLinearStiffnessByAreaX());
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaY;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaY);
    }
}

const IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY() const {
    IfcBoundaryFaceCondition * deConstObject = const_cast< IfcBoundaryFaceCondition * > (this);
    return deConstObject->getLinearStiffnessByAreaY();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaY = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaY() {
    m_linearStiffnessByAreaY = Step::getUnset(getLinearStiffnessByAreaY());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaY() const {
    return !Step::isUnset(getLinearStiffnessByAreaY());
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaZ;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaZ);
    }
}

const IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ() const {
    IfcBoundaryFaceCondition * deConstObject = const_cast< IfcBoundaryFaceCondition * > (this);
    return deConstObject->getLinearStiffnessByAreaZ();
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaZ = value;
}

void IfcBoundaryFaceCondition::unsetLinearStiffnessByAreaZ() {
    m_linearStiffnessByAreaZ = Step::getUnset(getLinearStiffnessByAreaZ());
}

bool IfcBoundaryFaceCondition::testLinearStiffnessByAreaZ() const {
    return !Step::isUnset(getLinearStiffnessByAreaZ());
}

bool IfcBoundaryFaceCondition::init() {
    bool status = IfcBoundaryCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaX = Step::getUnset(m_linearStiffnessByAreaX);
    }
    else {
        m_linearStiffnessByAreaX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaY = Step::getUnset(m_linearStiffnessByAreaY);
    }
    else {
        m_linearStiffnessByAreaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaZ = Step::getUnset(m_linearStiffnessByAreaZ);
    }
    else {
        m_linearStiffnessByAreaZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryFaceCondition::copy(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop) {
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByAreaX(obj.m_linearStiffnessByAreaX);
    setLinearStiffnessByAreaY(obj.m_linearStiffnessByAreaY);
    setLinearStiffnessByAreaZ(obj.m_linearStiffnessByAreaZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundaryFaceCondition::s_type("IfcBoundaryFaceCondition");
