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



#include <ifc2x3/IfcStructuralSteelProfileProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralProfileProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralSteelProfileProperties::IfcStructuralSteelProfileProperties(Step::Id id, Step::SPFData *args) : IfcStructuralProfileProperties(id, args) {
    m_shearAreaZ = Step::getUnset(m_shearAreaZ);
    m_shearAreaY = Step::getUnset(m_shearAreaY);
    m_plasticShapeFactorY = Step::getUnset(m_plasticShapeFactorY);
    m_plasticShapeFactorZ = Step::getUnset(m_plasticShapeFactorZ);
}

IfcStructuralSteelProfileProperties::~IfcStructuralSteelProfileProperties() {
}

bool IfcStructuralSteelProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralSteelProfileProperties(this);
}

const std::string &IfcStructuralSteelProfileProperties::type() const {
    return IfcStructuralSteelProfileProperties::s_type.getName();
}

const Step::ClassType &IfcStructuralSteelProfileProperties::getClassType() {
    return IfcStructuralSteelProfileProperties::s_type;
}

const Step::ClassType &IfcStructuralSteelProfileProperties::getType() const {
    return IfcStructuralSteelProfileProperties::s_type;
}

bool IfcStructuralSteelProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcStructuralSteelProfileProperties::s_type == t ? true : IfcStructuralProfileProperties::isOfType(t);
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_shearAreaZ;
    }
    else {
        return Step::getUnset(m_shearAreaZ);
    }
}

const IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaZ() const {
    IfcStructuralSteelProfileProperties * deConstObject = const_cast< IfcStructuralSteelProfileProperties * > (this);
    return deConstObject->getShearAreaZ();
}

void IfcStructuralSteelProfileProperties::setShearAreaZ(IfcAreaMeasure value) {
    m_shearAreaZ = value;
}

void IfcStructuralSteelProfileProperties::unsetShearAreaZ() {
    m_shearAreaZ = Step::getUnset(getShearAreaZ());
}

bool IfcStructuralSteelProfileProperties::testShearAreaZ() const {
    return !Step::isUnset(getShearAreaZ());
}

IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY() {
    if (Step::BaseObject::inited()) {
        return m_shearAreaY;
    }
    else {
        return Step::getUnset(m_shearAreaY);
    }
}

const IfcAreaMeasure IfcStructuralSteelProfileProperties::getShearAreaY() const {
    IfcStructuralSteelProfileProperties * deConstObject = const_cast< IfcStructuralSteelProfileProperties * > (this);
    return deConstObject->getShearAreaY();
}

void IfcStructuralSteelProfileProperties::setShearAreaY(IfcAreaMeasure value) {
    m_shearAreaY = value;
}

void IfcStructuralSteelProfileProperties::unsetShearAreaY() {
    m_shearAreaY = Step::getUnset(getShearAreaY());
}

bool IfcStructuralSteelProfileProperties::testShearAreaY() const {
    return !Step::isUnset(getShearAreaY());
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY() {
    if (Step::BaseObject::inited()) {
        return m_plasticShapeFactorY;
    }
    else {
        return Step::getUnset(m_plasticShapeFactorY);
    }
}

const IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorY() const {
    IfcStructuralSteelProfileProperties * deConstObject = const_cast< IfcStructuralSteelProfileProperties * > (this);
    return deConstObject->getPlasticShapeFactorY();
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorY(IfcPositiveRatioMeasure value) {
    m_plasticShapeFactorY = value;
}

void IfcStructuralSteelProfileProperties::unsetPlasticShapeFactorY() {
    m_plasticShapeFactorY = Step::getUnset(getPlasticShapeFactorY());
}

bool IfcStructuralSteelProfileProperties::testPlasticShapeFactorY() const {
    return !Step::isUnset(getPlasticShapeFactorY());
}

IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ() {
    if (Step::BaseObject::inited()) {
        return m_plasticShapeFactorZ;
    }
    else {
        return Step::getUnset(m_plasticShapeFactorZ);
    }
}

const IfcPositiveRatioMeasure IfcStructuralSteelProfileProperties::getPlasticShapeFactorZ() const {
    IfcStructuralSteelProfileProperties * deConstObject = const_cast< IfcStructuralSteelProfileProperties * > (this);
    return deConstObject->getPlasticShapeFactorZ();
}

void IfcStructuralSteelProfileProperties::setPlasticShapeFactorZ(IfcPositiveRatioMeasure value) {
    m_plasticShapeFactorZ = value;
}

void IfcStructuralSteelProfileProperties::unsetPlasticShapeFactorZ() {
    m_plasticShapeFactorZ = Step::getUnset(getPlasticShapeFactorZ());
}

bool IfcStructuralSteelProfileProperties::testPlasticShapeFactorZ() const {
    return !Step::isUnset(getPlasticShapeFactorZ());
}

bool IfcStructuralSteelProfileProperties::init() {
    bool status = IfcStructuralProfileProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearAreaZ = Step::getUnset(m_shearAreaZ);
    }
    else {
        m_shearAreaZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shearAreaY = Step::getUnset(m_shearAreaY);
    }
    else {
        m_shearAreaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_plasticShapeFactorY = Step::getUnset(m_plasticShapeFactorY);
    }
    else {
        m_plasticShapeFactorY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_plasticShapeFactorZ = Step::getUnset(m_plasticShapeFactorZ);
    }
    else {
        m_plasticShapeFactorZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralSteelProfileProperties::copy(const IfcStructuralSteelProfileProperties &obj, const CopyOp &copyop) {
    IfcStructuralProfileProperties::copy(obj, copyop);
    setShearAreaZ(obj.m_shearAreaZ);
    setShearAreaY(obj.m_shearAreaY);
    setPlasticShapeFactorY(obj.m_plasticShapeFactorY);
    setPlasticShapeFactorZ(obj.m_plasticShapeFactorZ);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralSteelProfileProperties::s_type("IfcStructuralSteelProfileProperties");
