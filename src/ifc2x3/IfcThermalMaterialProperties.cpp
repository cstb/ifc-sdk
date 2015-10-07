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



#include <ifc2x3/IfcThermalMaterialProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcThermalMaterialProperties::IfcThermalMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    m_boilingPoint = Step::getUnset(m_boilingPoint);
    m_freezingPoint = Step::getUnset(m_freezingPoint);
    m_thermalConductivity = Step::getUnset(m_thermalConductivity);
}

IfcThermalMaterialProperties::~IfcThermalMaterialProperties() {
}

bool IfcThermalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcThermalMaterialProperties(this);
}

const std::string &IfcThermalMaterialProperties::type() const {
    return IfcThermalMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcThermalMaterialProperties::getClassType() {
    return IfcThermalMaterialProperties::s_type;
}

const Step::ClassType &IfcThermalMaterialProperties::getType() const {
    return IfcThermalMaterialProperties::s_type;
}

bool IfcThermalMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcThermalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity() {
    if (Step::BaseObject::inited()) {
        return m_specificHeatCapacity;
    }
    else {
        return Step::getUnset(m_specificHeatCapacity);
    }
}

const IfcSpecificHeatCapacityMeasure IfcThermalMaterialProperties::getSpecificHeatCapacity() const {
    IfcThermalMaterialProperties * deConstObject = const_cast< IfcThermalMaterialProperties * > (this);
    return deConstObject->getSpecificHeatCapacity();
}

void IfcThermalMaterialProperties::setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value) {
    m_specificHeatCapacity = value;
}

void IfcThermalMaterialProperties::unsetSpecificHeatCapacity() {
    m_specificHeatCapacity = Step::getUnset(getSpecificHeatCapacity());
}

bool IfcThermalMaterialProperties::testSpecificHeatCapacity() const {
    return !Step::isUnset(getSpecificHeatCapacity());
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint() {
    if (Step::BaseObject::inited()) {
        return m_boilingPoint;
    }
    else {
        return Step::getUnset(m_boilingPoint);
    }
}

const IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getBoilingPoint() const {
    IfcThermalMaterialProperties * deConstObject = const_cast< IfcThermalMaterialProperties * > (this);
    return deConstObject->getBoilingPoint();
}

void IfcThermalMaterialProperties::setBoilingPoint(IfcThermodynamicTemperatureMeasure value) {
    m_boilingPoint = value;
}

void IfcThermalMaterialProperties::unsetBoilingPoint() {
    m_boilingPoint = Step::getUnset(getBoilingPoint());
}

bool IfcThermalMaterialProperties::testBoilingPoint() const {
    return !Step::isUnset(getBoilingPoint());
}

IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint() {
    if (Step::BaseObject::inited()) {
        return m_freezingPoint;
    }
    else {
        return Step::getUnset(m_freezingPoint);
    }
}

const IfcThermodynamicTemperatureMeasure IfcThermalMaterialProperties::getFreezingPoint() const {
    IfcThermalMaterialProperties * deConstObject = const_cast< IfcThermalMaterialProperties * > (this);
    return deConstObject->getFreezingPoint();
}

void IfcThermalMaterialProperties::setFreezingPoint(IfcThermodynamicTemperatureMeasure value) {
    m_freezingPoint = value;
}

void IfcThermalMaterialProperties::unsetFreezingPoint() {
    m_freezingPoint = Step::getUnset(getFreezingPoint());
}

bool IfcThermalMaterialProperties::testFreezingPoint() const {
    return !Step::isUnset(getFreezingPoint());
}

IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity() {
    if (Step::BaseObject::inited()) {
        return m_thermalConductivity;
    }
    else {
        return Step::getUnset(m_thermalConductivity);
    }
}

const IfcThermalConductivityMeasure IfcThermalMaterialProperties::getThermalConductivity() const {
    IfcThermalMaterialProperties * deConstObject = const_cast< IfcThermalMaterialProperties * > (this);
    return deConstObject->getThermalConductivity();
}

void IfcThermalMaterialProperties::setThermalConductivity(IfcThermalConductivityMeasure value) {
    m_thermalConductivity = value;
}

void IfcThermalMaterialProperties::unsetThermalConductivity() {
    m_thermalConductivity = Step::getUnset(getThermalConductivity());
}

bool IfcThermalMaterialProperties::testThermalConductivity() const {
    return !Step::isUnset(getThermalConductivity());
}

bool IfcThermalMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_specificHeatCapacity = Step::getUnset(m_specificHeatCapacity);
    }
    else {
        m_specificHeatCapacity = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_boilingPoint = Step::getUnset(m_boilingPoint);
    }
    else {
        m_boilingPoint = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_freezingPoint = Step::getUnset(m_freezingPoint);
    }
    else {
        m_freezingPoint = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalConductivity = Step::getUnset(m_thermalConductivity);
    }
    else {
        m_thermalConductivity = Step::spfToReal(arg);
    }
    return true;
}

void IfcThermalMaterialProperties::copy(const IfcThermalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setSpecificHeatCapacity(obj.m_specificHeatCapacity);
    setBoilingPoint(obj.m_boilingPoint);
    setFreezingPoint(obj.m_freezingPoint);
    setThermalConductivity(obj.m_thermalConductivity);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcThermalMaterialProperties::s_type("IfcThermalMaterialProperties");
