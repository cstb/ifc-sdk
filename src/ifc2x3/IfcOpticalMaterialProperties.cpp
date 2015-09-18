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



#include <ifc2x3/IfcOpticalMaterialProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcOpticalMaterialProperties::IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args) : IfcMaterialProperties(id, args) {
    m_visibleTransmittance = Step::getUnset(m_visibleTransmittance);
    m_solarTransmittance = Step::getUnset(m_solarTransmittance);
    m_thermalIrTransmittance = Step::getUnset(m_thermalIrTransmittance);
    m_thermalIrEmissivityBack = Step::getUnset(m_thermalIrEmissivityBack);
    m_thermalIrEmissivityFront = Step::getUnset(m_thermalIrEmissivityFront);
    m_visibleReflectanceBack = Step::getUnset(m_visibleReflectanceBack);
    m_visibleReflectanceFront = Step::getUnset(m_visibleReflectanceFront);
    m_solarReflectanceFront = Step::getUnset(m_solarReflectanceFront);
    m_solarReflectanceBack = Step::getUnset(m_solarReflectanceBack);
}

IfcOpticalMaterialProperties::~IfcOpticalMaterialProperties() {
}

bool IfcOpticalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOpticalMaterialProperties(this);
}

const std::string &IfcOpticalMaterialProperties::type() const {
    return IfcOpticalMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcOpticalMaterialProperties::getClassType() {
    return IfcOpticalMaterialProperties::s_type;
}

const Step::ClassType &IfcOpticalMaterialProperties::getType() const {
    return IfcOpticalMaterialProperties::s_type;
}

bool IfcOpticalMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcOpticalMaterialProperties::s_type == t ? true : IfcMaterialProperties::isOfType(t);
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_visibleTransmittance;
    }
    else {
        return Step::getUnset(m_visibleTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleTransmittance();
}

void IfcOpticalMaterialProperties::setVisibleTransmittance(IfcPositiveRatioMeasure value) {
    m_visibleTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetVisibleTransmittance() {
    m_visibleTransmittance = Step::getUnset(getVisibleTransmittance());
}

bool IfcOpticalMaterialProperties::testVisibleTransmittance() const {
    return !Step::isUnset(getVisibleTransmittance());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_solarTransmittance;
    }
    else {
        return Step::getUnset(m_solarTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarTransmittance();
}

void IfcOpticalMaterialProperties::setSolarTransmittance(IfcPositiveRatioMeasure value) {
    m_solarTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetSolarTransmittance() {
    m_solarTransmittance = Step::getUnset(getSolarTransmittance());
}

bool IfcOpticalMaterialProperties::testSolarTransmittance() const {
    return !Step::isUnset(getSolarTransmittance());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrTransmittance;
    }
    else {
        return Step::getUnset(m_thermalIrTransmittance);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrTransmittance();
}

void IfcOpticalMaterialProperties::setThermalIrTransmittance(IfcPositiveRatioMeasure value) {
    m_thermalIrTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrTransmittance() {
    m_thermalIrTransmittance = Step::getUnset(getThermalIrTransmittance());
}

bool IfcOpticalMaterialProperties::testThermalIrTransmittance() const {
    return !Step::isUnset(getThermalIrTransmittance());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrEmissivityBack;
    }
    else {
        return Step::getUnset(m_thermalIrEmissivityBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrEmissivityBack();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityBack(IfcPositiveRatioMeasure value) {
    m_thermalIrEmissivityBack = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrEmissivityBack() {
    m_thermalIrEmissivityBack = Step::getUnset(getThermalIrEmissivityBack());
}

bool IfcOpticalMaterialProperties::testThermalIrEmissivityBack() const {
    return !Step::isUnset(getThermalIrEmissivityBack());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() {
    if (Step::BaseObject::inited()) {
        return m_thermalIrEmissivityFront;
    }
    else {
        return Step::getUnset(m_thermalIrEmissivityFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getThermalIrEmissivityFront();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityFront(IfcPositiveRatioMeasure value) {
    m_thermalIrEmissivityFront = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrEmissivityFront() {
    m_thermalIrEmissivityFront = Step::getUnset(getThermalIrEmissivityFront());
}

bool IfcOpticalMaterialProperties::testThermalIrEmissivityFront() const {
    return !Step::isUnset(getThermalIrEmissivityFront());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() {
    if (Step::BaseObject::inited()) {
        return m_visibleReflectanceBack;
    }
    else {
        return Step::getUnset(m_visibleReflectanceBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleReflectanceBack();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceBack(IfcPositiveRatioMeasure value) {
    m_visibleReflectanceBack = value;
}

void IfcOpticalMaterialProperties::unsetVisibleReflectanceBack() {
    m_visibleReflectanceBack = Step::getUnset(getVisibleReflectanceBack());
}

bool IfcOpticalMaterialProperties::testVisibleReflectanceBack() const {
    return !Step::isUnset(getVisibleReflectanceBack());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() {
    if (Step::BaseObject::inited()) {
        return m_visibleReflectanceFront;
    }
    else {
        return Step::getUnset(m_visibleReflectanceFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getVisibleReflectanceFront();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceFront(IfcPositiveRatioMeasure value) {
    m_visibleReflectanceFront = value;
}

void IfcOpticalMaterialProperties::unsetVisibleReflectanceFront() {
    m_visibleReflectanceFront = Step::getUnset(getVisibleReflectanceFront());
}

bool IfcOpticalMaterialProperties::testVisibleReflectanceFront() const {
    return !Step::isUnset(getVisibleReflectanceFront());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() {
    if (Step::BaseObject::inited()) {
        return m_solarReflectanceFront;
    }
    else {
        return Step::getUnset(m_solarReflectanceFront);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarReflectanceFront();
}

void IfcOpticalMaterialProperties::setSolarReflectanceFront(IfcPositiveRatioMeasure value) {
    m_solarReflectanceFront = value;
}

void IfcOpticalMaterialProperties::unsetSolarReflectanceFront() {
    m_solarReflectanceFront = Step::getUnset(getSolarReflectanceFront());
}

bool IfcOpticalMaterialProperties::testSolarReflectanceFront() const {
    return !Step::isUnset(getSolarReflectanceFront());
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() {
    if (Step::BaseObject::inited()) {
        return m_solarReflectanceBack;
    }
    else {
        return Step::getUnset(m_solarReflectanceBack);
    }
}

const IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() const {
    IfcOpticalMaterialProperties * deConstObject = const_cast< IfcOpticalMaterialProperties * > (this);
    return deConstObject->getSolarReflectanceBack();
}

void IfcOpticalMaterialProperties::setSolarReflectanceBack(IfcPositiveRatioMeasure value) {
    m_solarReflectanceBack = value;
}

void IfcOpticalMaterialProperties::unsetSolarReflectanceBack() {
    m_solarReflectanceBack = Step::getUnset(getSolarReflectanceBack());
}

bool IfcOpticalMaterialProperties::testSolarReflectanceBack() const {
    return !Step::isUnset(getSolarReflectanceBack());
}

bool IfcOpticalMaterialProperties::init() {
    bool status = IfcMaterialProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleTransmittance = Step::getUnset(m_visibleTransmittance);
    }
    else {
        m_visibleTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarTransmittance = Step::getUnset(m_solarTransmittance);
    }
    else {
        m_solarTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrTransmittance = Step::getUnset(m_thermalIrTransmittance);
    }
    else {
        m_thermalIrTransmittance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrEmissivityBack = Step::getUnset(m_thermalIrEmissivityBack);
    }
    else {
        m_thermalIrEmissivityBack = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thermalIrEmissivityFront = Step::getUnset(m_thermalIrEmissivityFront);
    }
    else {
        m_thermalIrEmissivityFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleReflectanceBack = Step::getUnset(m_visibleReflectanceBack);
    }
    else {
        m_visibleReflectanceBack = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_visibleReflectanceFront = Step::getUnset(m_visibleReflectanceFront);
    }
    else {
        m_visibleReflectanceFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarReflectanceFront = Step::getUnset(m_solarReflectanceFront);
    }
    else {
        m_solarReflectanceFront = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_solarReflectanceBack = Step::getUnset(m_solarReflectanceBack);
    }
    else {
        m_solarReflectanceBack = Step::spfToReal(arg);
    }
    return true;
}

void IfcOpticalMaterialProperties::copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop) {
    IfcMaterialProperties::copy(obj, copyop);
    setVisibleTransmittance(obj.m_visibleTransmittance);
    setSolarTransmittance(obj.m_solarTransmittance);
    setThermalIrTransmittance(obj.m_thermalIrTransmittance);
    setThermalIrEmissivityBack(obj.m_thermalIrEmissivityBack);
    setThermalIrEmissivityFront(obj.m_thermalIrEmissivityFront);
    setVisibleReflectanceBack(obj.m_visibleReflectanceBack);
    setVisibleReflectanceFront(obj.m_visibleReflectanceFront);
    setSolarReflectanceFront(obj.m_solarReflectanceFront);
    setSolarReflectanceBack(obj.m_solarReflectanceBack);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOpticalMaterialProperties::s_type("IfcOpticalMaterialProperties");
